using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW.UI;
using LDFW.Network;

public class GroceryPanelController : BasePanelController {

    public static GroceryPanelController instance;

    public RectTransform tipBar;
    public RectTransform categoryBar;
    public RectTransform categoryBarContent;



    public RectTransform defaultDisplay;
    public RectTransform defaultDisplayContent;
    public RectTransform categoryDisplay;
    public RectTransform categoryDisplayContent;

    public GroceryPanelDefaultEndlessScrollRectController endlessScrollController;


    // Prefab
    public GameObject groceryContentCategoryBarElementPrefab;
    public GameObject groceryContentCategoryTitlePrefab;
    public GameObject groceryContentGroceryBarPrefab;
    public GameObject categoryContentCategoryBarPrefab;
    public GameObject categoryDisplayCategoryBarElementPrefab;



    // Others
    private int nextPageNumber = 0;


    protected new void Awake () {
        if (instance != null) {
            Destroy (instance.gameObject);
        }
        instance = this;

        base.Awake ();
    }

    #region Overrdies
    public override void ResetPanel () {
        endlessScrollController.Reset ();
        ResetCategoryDisplay ();
        SwitchCategoryDisplay (0);

        endlessScrollController._scrollRectElementPreferredHeight = (int) (230f / 375f * panelSizeDelta.x);
    }

    // Reloads data
    public override void ReloadPanel () {
        GetGroceryCategory ();
    }

    public void GetGroceryCategory () {
        ResetCategoryBar ();
        LoadingPanelController.instance.DisplayPanelImmediately ();
        GroceryNetworkController.instance.GetGroceryCategoryList (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                StartCoroutine (LoadCategoryBar (data));
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
            }));
    }

    public void GetGroceryData () {
        if (nextPageNumber == 0) {
            ResetCategoryDisplay ();
        }

        // Set type
        endlessScrollController.Reset (categoryBarContent.GetComponent<LDFWToggleController> ().GetSelectedElementIDs ());
        endlessScrollController.LoadData ();
        
    }
    #endregion



    #region TipBar
    public void CloseTipBar () {
        tipBar.localScale = Vector3.zero;
        categoryBar.anchoredPosition = new Vector2 (0, -70);
        defaultDisplay.anchoredPosition = new Vector2 (0, -120);
        defaultDisplay.sizeDelta = new Vector2 (defaultDisplay.sizeDelta.x, -170);
        categoryDisplay.anchoredPosition = new Vector2 (0, -300);
    }
    #endregion


    #region CategoryBar
    public void ResetCategoryBar () {
        categoryBarContent.DestroyAllChildren ();
    }
    private IEnumerator LoadCategoryBar (JSONObject data) {
        Transform newCategoryElement = Instantiate (groceryContentCategoryBarElementPrefab).transform;
        newCategoryElement.SetParent (categoryBarContent);
        newCategoryElement.localScale = Vector3.one;

        GroceryPanelDefaultDisplayCategoryBarElementController categoryElementScript = newCategoryElement.GetComponent<GroceryPanelDefaultDisplayCategoryBarElementController> ();
        categoryElementScript.Reset ("0", "全部", "All");

        for (int i=0; data[i] != null; i++) {
            newCategoryElement = Instantiate (groceryContentCategoryBarElementPrefab).transform;
            newCategoryElement.SetParent (categoryBarContent);
            newCategoryElement.localScale = Vector3.one;

            categoryElementScript = newCategoryElement.GetComponent<GroceryPanelDefaultDisplayCategoryBarElementController> ();
            categoryElementScript.Reset (data[i].GetField ("id").str, data[i].GetField ("title").str, data[i].GetField ("title_en").str);
        }
        yield return null;
        categoryBarContent.GetComponent<LDFWToggleController> ().Reset ();

        categoryBarContent.GetComponent<LDFWToggleController> ().onSelectEvent.AddListener (GetGroceryData);
        categoryBarContent.GetComponent<LDFWToggleController> ().SelectToggle (0); 
    }

    public void SelectCategoryBar (int index) {
        for (int i = 0; i < categoryBarContent.childCount; i++) {
            if (i == index) {
                categoryBarContent.GetChild (i).GetComponent<GroceryPanelCategoryBarElementController> ().SelectElement ();
            } else {
                categoryBarContent.GetChild (i).GetComponent<GroceryPanelCategoryBarElementController> ().DeselectElement ();
            }
        }
    }
    #endregion


    #region DefaultDisplay
    

    #endregion


    #region CategoryDisplay
    public void ResetCategoryDisplay () {
        categoryDisplayContent.DestroyAllChildren ();
    }

    public void SwitchCategoryDisplay (int scale) {
        categoryDisplay.localScale = Vector3.one * scale;

        if (scale == 1) {
            StartCoroutine (TurnOnCategoryDisplayCoroutine ());
        }
    }

    private IEnumerator TurnOnCategoryDisplayCoroutine () {
        int currentRow = 0;
        float currentRowTotalWidth = 0f;

        categoryDisplayContent.DestroyAllChildren ();
        yield return null;

        for (int i = 0; i < categoryBarContent.childCount; i++) {
            RectTransform trans = categoryBarContent.GetChild (i) as RectTransform;
            //foreach (var trans in categoryScrollviewContent.GetComponentsInChildren<RectTransform> ()) {
            if (trans.Find ("Title") == null) {
                DebugLogger.Log ("Trans.find title is null");
            }
            RectTransform categoryDisplayScrollviewElement = (Instantiate (categoryDisplayCategoryBarElementPrefab).transform as RectTransform);
            categoryDisplayScrollviewElement.SetParent (categoryDisplayContent);
            categoryDisplayScrollviewElement.localScale = Vector3.one;
            categoryDisplayScrollviewElement.name = "element" + i.ToString();
            categoryDisplayScrollviewElement.Find ("Title").GetComponent<TextController> ().ResetUI (
                trans.Find ("Title").GetComponent<TextController> ().textZH,
                trans.Find ("Title").GetComponent<TextController> ().textEN);
            categoryDisplayScrollviewElement.pivot = new Vector2 (0, 1);
            categoryDisplayScrollviewElement.anchorMin = new Vector2 (0, 1);
            categoryDisplayScrollviewElement.anchorMax = new Vector2 (0, 1);
            yield return null;

            if (currentRowTotalWidth + categoryDisplayScrollviewElement.sizeDelta.x > categoryDisplayContent.rect.width) {
                currentRow++;
                currentRowTotalWidth = 0f;
            }
            categoryDisplayScrollviewElement.anchoredPosition = new Vector2 (currentRowTotalWidth, -currentRow * 100);
            currentRowTotalWidth += categoryDisplayScrollviewElement.sizeDelta.x;
            

        }

        categoryDisplayContent.sizeDelta = new Vector2 (categoryDisplayContent.sizeDelta.x, (currentRow + 1) * 100);
    }

    #endregion
}
