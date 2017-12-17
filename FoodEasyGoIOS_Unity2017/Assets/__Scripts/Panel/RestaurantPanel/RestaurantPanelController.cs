using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;

using LDFW.UI;
using LDFW.Network;

public class RestaurantPanelController : BasePanelController {

    public static RestaurantPanelController                 instance;


    public InfiniteScrollRectController                     infiniteScrollRectController;
    public Transform                                        defaultDisplay;
    public LDFWToggleController                             deliveryToggleController;
    public RectTransform                                    categoryScrollviewContent;
    public RectTransform                                    restaurantListContent;
    public TextController                                   deliveryButtonText;
    

    public Transform                                        categoryDisplay;
    public RectTransform                                    categoryDisplayCategoryScrollviewContent;
    public Transform                                        searchTypeDisplay;
    public Transform                                        reserveDisplay;
    public LDFWToggleController                             reserveToggleController;
    

    public string                                           deliveryTimeID = "";


    #region ScreenResolution
    public GridLayoutGroup                                  reserveToggleControllerGridLayoutGroup;
    public ScrollRect                                       reserveScrollRect;
    #endregion

    protected new void Awake () {
        if (instance != null) {
            Destroy (instance.gameObject);
        }
        instance = this;

        base.Awake ();
        Application.targetFrameRate = 60;
    }

    protected override void AutoScreenAdjustment () {
        reserveToggleControllerGridLayoutGroup.cellSize = new Vector2 (panelSizeDelta.x - 1, 40);
    }

    #region MainMethods
    public override void OpenPanel () {
        SwitchCategoryDisplay (0);
        SwitchSearchTypeDisplay (0);
        SwitchReserveDisplay (0);

        base.OpenPanel ();
    }

    public override void ResetPanel () {
        //restaurantListContent.DestroyAllChildren ();
        deliveryButtonText.ResetUI ("预定", "Schedule");
        deliveryTimeID = "";
        infiniteScrollRectController.Reset ();
        
        (restaurantListContent.transform as RectTransform).anchoredPosition = new Vector3 (0, -100);
        defaultDisplay.GetComponent<ScrollRect> ().content.anchoredPosition = Vector2.zero;
        deliveryToggleController.SelectToggle (0);
    }

    public override void CleanupPanel () {
        infiniteScrollRectController.CleanUp ();
    }

    public override void ReloadPanel () {
        ResetPanel ();
        StartCoroutine (LoadPanelCoroutine ());
    }

    public void ResetPanel2 () {
        //restaurantListContent.DestroyAllChildren ();
    }

    public void ReloadPanel2 () {
        ResetPanel2 ();
        StartCoroutine (LoadPanelCoroutine (false));
    }

    private IEnumerator LoadPanelCoroutine (bool reloadReserveData = true) {
        LoadingPanelController.instance.DisplayPanel ();
        RestaurantNetworkController.instance.GetRestaurantCategoryList (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                LoadCategoryData (data);
                LoadRestaurantList ();
                if (reloadReserveData) {
                    LoadReserveData ();
                }
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
            }));

        yield return null;
    }
    #endregion


    #region ReserveTime
    public void LoadReserveData () {
        TimeSpan currentTime = DateTime.Now.TimeOfDay;
        string[] value;
        int hour = 0;
        int minute = 0;

        int startingIndex = 24;
        for (int i=0; i <= 18 && AppDataController.instance.deliveryDestineTime.ContainsKey ((startingIndex+i).ToString ()); i++) {

            RestaurantPanelDeliveryTimeController deliveryTimeController = reserveDisplay.GetChild (0).GetComponent<ScrollRect>().content.Find ("Time" +i).GetComponent<RestaurantPanelDeliveryTimeController> ();
            deliveryTimeController.text.text = AppDataController.instance.deliveryDestineTime[(startingIndex + i).ToString ()];
            deliveryTimeController.toggleID = (startingIndex + i).ToString ();

            value = AppDataController.instance.deliveryDestineTime[(startingIndex + i).ToString ()].Split ('-');
            hour = int.Parse (value[0].Split (':')[0]);
            minute = int.Parse (value[0].Split (':')[1]);

            DebugLogger.Log ("hour, minute: " + hour + ", " + minute);
            DebugLogger.Log ("current = " + currentTime.ToString ());
            DebugLogger.Log ("comparent = " + currentTime.CompareTo (new TimeSpan (hour - 2, minute - 30, 0)));
            if (currentTime.CompareTo (new TimeSpan (hour - 2, minute, 0)) > 0) {
                //DebugLogger.Log ("less than 2 hours");
                deliveryTimeController.DisableInteraction ();
            } else {
                deliveryTimeController.EnableInteraction ();
            }
        }
    }
    
    public void SetReserveStatus () {
        deliveryTimeID = reserveToggleController.GetSelectedElementIDs ();
        if (!string.IsNullOrEmpty (deliveryTimeID)) {
            deliveryButtonText.ResetUI (AppDataController.instance.deliveryDestineTime[deliveryTimeID]);
            DebugLogger.Log ("deliveryTimeID = " + deliveryTimeID);
        } else {
            deliveryButtonText.ResetUI ("预定", "Reserve");
            deliveryToggleController.SelectToggle (0);
        }
    }
    #endregion


    #region Category
    private void LoadCategoryData (JSONObject data) {
        categoryScrollviewContent.DestroyAllChildren ();

        string toggleResourceLocation = "RestaurantPanel/CategorySectionToggleElement";
        Transform allToggle = (Instantiate (Resources.Load (toggleResourceLocation)) as GameObject).transform;
        allToggle.SetParent (categoryScrollviewContent);
        allToggle.localScale = Vector3.one;
        allToggle.GetComponent<RestaurantPanelCategoryToggle> ().ResetUI (0, "全部", "All");

        for (int i=0; data[i] != null; i++) {
            Transform currentCategory = (Instantiate (Resources.Load (toggleResourceLocation)) as GameObject).transform;
            currentCategory.SetParent (categoryScrollviewContent);
            currentCategory.localScale = Vector3.one;
            currentCategory.GetComponent<RestaurantPanelCategoryToggle> ().ResetUI (
                int.Parse (data[i].GetField ("id").str),
                data[i].GetField ("title").str,
                data[i].GetField ("title_en").str);
        }

        categoryScrollviewContent.GetComponent<RestaurantPanelCategoryToggleController> ().Select (0);
    }
    #endregion


    #region RestaurantList
    public void LoadRestaurantList () {
        (infiniteScrollRectController as RestaurantPanelEndlessScrollview).Reset (
            deliveryToggleController.GetSelectedElementIDs ().Contains ("0"),
            categoryScrollviewContent.GetComponent<RestaurantPanelCategoryToggleController> ().currentSelected.GetComponent<RestaurantPanelCategoryToggle> ().categoryID.ToString (),
            searchTypeDisplay.GetComponent<RestaurantPanelSearchDisplayController> ().searchTypeIndex.ToString ());

        infiniteScrollRectController.LoadData ();
    }
    
    #endregion


    #region Display
    public void SwitchCategoryDisplay (int state) {
        if (state == 1) {
            categoryDisplay.localScale = Vector3.one;
            StartCoroutine (TurnOnCategoryDisplayCoroutine ());
        } else {
            categoryDisplay.localScale = Vector3.zero;
        }
    }

    private IEnumerator TurnOnCategoryDisplayCoroutine () {
        int currentRow = 0;
        float currentRowTotalWidth = 0f;

        categoryDisplayCategoryScrollviewContent.DestroyAllChildren ();
        yield return null;

        for (int i=0; i < categoryScrollviewContent.childCount; i++) {
            RectTransform trans = categoryScrollviewContent.GetChild (i) as RectTransform;
        //foreach (var trans in categoryScrollviewContent.GetComponentsInChildren<RectTransform> ()) {
            if (trans.Find ("Title") == null) {
                DebugLogger.Log ("Trans.find title is null");
            }
            RectTransform categoryDisplayScrollviewElement = (Instantiate (Resources.Load ("RestaurantPanel/CategoryDisplayScrollviewElement")) as GameObject).transform as RectTransform;
            categoryDisplayScrollviewElement.SetParent (categoryDisplayCategoryScrollviewContent);
            categoryDisplayScrollviewElement.localScale = Vector3.one;
            categoryDisplayScrollviewElement.name = i.ToString();
            categoryDisplayScrollviewElement.Find ("Title").GetComponent<TextController> ().ResetUI (
                trans.Find ("Title").GetComponent<TextController> ().textZH,
                trans.Find ("Title").GetComponent<TextController> ().textEN);
            categoryDisplayScrollviewElement.pivot = new Vector2 (0, 1);
            categoryDisplayScrollviewElement.anchorMin = new Vector2 (0, 1);
            categoryDisplayScrollviewElement.anchorMax = new Vector2 (0, 1);
            yield return null;

            if (currentRowTotalWidth + categoryDisplayScrollviewElement.sizeDelta.x > categoryDisplayCategoryScrollviewContent.rect.width) {
                currentRow++;
                currentRowTotalWidth = 0f;
            }
            categoryDisplayScrollviewElement.anchoredPosition = new Vector2 (currentRowTotalWidth, -currentRow * 50);
            categoryDisplayScrollviewElement.sizeDelta = new Vector2 (categoryDisplayScrollviewElement.sizeDelta.x, 50);
            currentRowTotalWidth += categoryDisplayScrollviewElement.sizeDelta.x;

            categoryDisplayScrollviewElement.GetComponent<RestaurantPanelCategoryDisplayScrollviewElementController> ().indexID = i;
        }

        categoryDisplayCategoryScrollviewContent.sizeDelta = new Vector2 (categoryDisplayCategoryScrollviewContent.sizeDelta.x, (currentRow + 1) * 100);
    }

    public void SwitchSearchTypeDisplay (int state) {
        searchTypeDisplay.localScale = Vector3.one * state;
    }

    public void SwitchReserveDisplay (int state) {
        reserveDisplay.localScale = Vector3.one * state;

        if (state > 0) {
            reserveToggleController.onSelectEvent.AddListener (() => {
                SwitchReserveDisplay (0);
                SetReserveStatus ();
                ReloadPanel2 ();
            });
        }
    }
    #endregion


    #region Other
    public void OnSearchButtonClicked () {
        SearchPanelController.instance.OpenPanel ();
    }

    #endregion

}
