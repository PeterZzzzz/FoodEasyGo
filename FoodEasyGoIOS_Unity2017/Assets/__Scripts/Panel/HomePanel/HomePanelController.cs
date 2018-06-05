using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

using LDFW.Network;

public class HomePanelController : BasePanelController
{

    public static HomePanelController instance;

    public Transform gettingLocationBackground;
    public TextController zipcodeText;

    public Transform slideShow;
    public Transform slideImagePrefab;

    public ScrollRect mainScrollRect;
    public HomeRestaurantSectionController restaurantSectionController;
    public HomeGroceryScrollviewController groceryScrollviewController;
    public HomeGrouponScrollviewController grouponScrollviewController;

    public Transform shortCutSection;

    public InputFieldController searchInput;


    #region ResolutionAdjustment
    public LayoutElement slideShowLayoutElement;
    public GridLayoutGroup restaurantSectionGridLayoutGroup;
    public LayoutElement groceryLayoutElement;
    public HorizontalLayoutGroup groceryContentHorizontalLayoutGroup;


    #endregion

    protected new void Awake ()
    {
        if (instance != null)
        {
            Destroy (instance.gameObject);
        }
        instance = this;

        base.Awake ();

    }


    protected override void AutoScreenAdjustment ()
    {
        // slide show
        slideShowLayoutElement.preferredHeight = 127f / 375f * panelSizeDelta.x;

        // restaurant section
        float imageWidth = (panelSizeDelta.x - 40) * 0.333f;
        float imageHeight = 85f / 113f * imageWidth;
        restaurantSectionGridLayoutGroup.cellSize = new Vector2 ((panelSizeDelta.x - 10) * 0.333f, imageHeight + 50);

        // grocery section
        float height = panelSizeDelta.x * 0.25f + 50;
        groceryLayoutElement.preferredHeight = height;


        if (Screen.width == 1125)
        {
            // iPhoneX
            mainScrollRect.GetComponent<RectTransform>().offsetMin = new Vector2(mainScrollRect.GetComponent<RectTransform>().offsetMin.x, mainScrollRect.GetComponent<RectTransform>().offsetMin.y + 20);

            Debug.Log("iPhoneX适配2");

        }

    }

    #region Overrides
    public override void ResetPanel ()
    {
        slideShow.Find ("ImageParent").DestroyAllChildren ();

        groceryScrollviewController.content.DestroyAllChildren ();

        //mainScrollRect.content.anchoredPosition = Vector2.zero;
    }

    public override void ReloadPanel ()
    {

        zipcodeText.ResetUI (UserDataController.instance.targetServiceRegionNameZH, UserDataController.instance.targetServiceRegionNameEN);


        StartCoroutine (LoadPanelCoroutine ());
    }

    public override void DisplayPanel ()
    {
        base.DisplayPanel ();
    }
    #endregion


    #region LoadPanel
    private IEnumerator LoadPanelCoroutine ()
    {

        DebugLogger.Log ("LoadPanelCoroutine is called");

        if (string.IsNullOrEmpty (UserDataController.instance.regionID))
        {
            gettingLocationBackground.gameObject.SetActive (true);
        }
        else
        {
            gettingLocationBackground.gameObject.SetActive (false);
        }
        LoadingPanelController.instance.DisplayPanelImmediately ();

        yield return new WaitForSeconds (1f);
        if (string.IsNullOrEmpty (UserDataController.instance.regionID))
        {
            if (!Input.location.isEnabledByUser)
            {
                Debug.Log ("GPS not enabled");
                MessagePanelController.instance.DisplayPanel (ErrorMessageConfig.GPSOffError[CommonFunctions.GetCurrentLanguageIndex ()]);
                gettingLocationBackground.gameObject.SetActive (false);
                ChangeLocationPanelController.instance.OpenPanel ();
                yield break;
            }

            Input.location.Start ();
            int maxWait = 20;
            while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
            {
                yield return new WaitForSeconds (1f);
                maxWait--;
            }

            if (maxWait < 1 || Input.location.status == LocationServiceStatus.Failed)
            {
                MessagePanelController.instance.DisplayPanel ("Failed to get GPS location");
                gettingLocationBackground.gameObject.SetActive (false);
                ChangeLocationPanelController.instance.OpenPanel ();
                yield break;
            }

            // get zipcode logic...

            gettingLocationBackground.gameObject.SetActive (false);
        }
        else
        {
            RestaurantNetworkController.instance.GetRestaurantRecommendedList (
                new LDFWServerResponseEvent ((JSONObject data, string m) =>
                {
                    restaurantSectionController.LoadData (data);
                }),
                new LDFWServerResponseEvent ((JSONObject data, string m) =>
                {
                }));

            GroceryNetworkController.instance.GetGroceryRecommendedList (
                new LDFWServerResponseEvent ((JSONObject data, string m) =>
                {
                    groceryScrollviewController.LoadData (data);
                }),
                new LDFWServerResponseEvent ((JSONObject data, string m) =>
                {
                }));

            GrouponNetworkController.instance.GetGrouponRecommendedList (
                new LDFWServerResponseEvent ((JSONObject data, string m) =>
                {
                    grouponScrollviewController.LoadData (data);
                }),
                new LDFWServerResponseEvent ((JSONObject data, string m) =>
                {
                }));

            if (CartController.instance.cart != null)
            {
                CartController.instance.GetCartDetails ();
            }
            LoadSlideImages ();
            LoadCategoryDdata ();
            //LoadRegionDeliveryFee ();
        }
        mainScrollRect.content.anchoredPosition = Vector2.zero;

        yield return new WaitForSeconds (2f);

        LoadingPanelController.instance.HidePanelImmediately ();

    }

    public void LoadSlideImages ()
    {
        InfoNetworkController.instance.GetImages (
            new LDFWServerResponseEvent ((JSONObject data, string m) =>
            {
                slideShow.GetComponent<HomeSlideController> ().StartSlideShow (data.GetField ("slide"));
            }),
            null);
    }

    public void LoadCategoryDdata ()
    {
        InfoNetworkController.instance.GetProductCategory (
            new LDFWServerResponseEvent ((JSONObject data, string m) =>
            {

                // Restaurant
                for (int i = 0; i < shortCutSection.childCount; i++)
                {
                    shortCutSection.GetChild (i).Find ("Text").GetComponent<TextController> ().ResetUI (data[i].GetField ("name_zh").str, data[i].GetField ("name_en").str);
                    LDFWImageDownloadController.instance.AddToCacheList (
                        new ImageDownloader2 (data[i].GetField ("icon").str.Replace ("\\/", "/"), "general", shortCutSection.GetChild (i).Find ("IconMask/Icon").GetComponent<RawImage> (), 0, null, null));
                }

            }),
            null);
    }

    /*
    public void LoadRegionDeliveryFee ()
    {
        CartNetworkController.instance.GetRegionDeliveryFee (
            new LDFWServerResponseEvent ((JSONObject data, string m) =>
            {

                Dictionary<string, float> feeDic = new Dictionary<string, float> ();

                if (data != null || data.Count != 0)
                {
                    for (int i = 0; data[i] != null; i++)
                    {
                        feeDic.Add (data[i].GetField ("zipcode").str, float.Parse (data[i].GetField ("fee").str));
                    }
                }

                UserDataController.instance.regionDeliveryFeeDic = feeDic;

            }), null);
    }
    */

    #endregion


    #region ButtonClickEvents
    public void OnRestaurantMoreButtonClicked ()
    {
        RestaurantPanelController.instance.OpenPanel ();
    }
    public void OnGroceryMoreButtonClicked ()
    {
        GroceryPanelController.instance.OpenPanel ();
    }
    public void OnGrouponMoreButtonClicked ()
    {
        GrouponPanelController.instance.OpenPanel ();
    }
    #endregion



    #region Others
    public void OnSearchEndEdit ()
    {
        if(!string.IsNullOrEmpty(searchInput.text))
        {
            SearchPanelController.instance.OpenPanel();
            SearchPanelController.instance.SearchForInput(searchInput.text);
        }
    }

    public void OpenChangeLocationPanel () {
        ChangeLocationPanelController.instance.OpenPanel ();
    }
    #endregion


}
