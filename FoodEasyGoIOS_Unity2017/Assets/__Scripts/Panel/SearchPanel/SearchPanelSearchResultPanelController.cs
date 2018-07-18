using UnityEngine;
using System.Collections;

using LDFW;

public class SearchPanelSearchResultPanelController : MonoBehaviour {

    public static SearchPanelSearchResultPanelController instance;

    public TextController categoryText;
    public TextController sortTypeText;

    public Transform viewPort;
    public Transform categoryDisplay;
    public Transform sortDisplay;

    public int categoryID = 2;
    public int sortID = 1;

    private JSONObject _data;
    private SearchPanelSearchResultEndlessScrollview endlessScrollview;

    void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        SwitchSearchResultPanel (false);
        endlessScrollview = GetComponent<SearchPanelSearchResultEndlessScrollview> ();
    }

    public void LoadData (JSONObject data = null) {
        if (data != null) {
            _data = data;
        }

        if (_data != null) {
            if (SearchPanelController.instance.searchOptionID == 0) {
                endlessScrollview.LoadData (_data.GetField ("dish"), "2");
            } else if (SearchPanelController.instance.searchOptionID == 1) {
                endlessScrollview.LoadData (_data.GetField ("grocery"), "3");
            } else {
                endlessScrollview.LoadData (_data.GetField ("restaurant"), "1");
            }
        } else {
            endlessScrollview.LoadData (null, "");
        }
    }
    
    public void SwitchSearchResultPanel (bool state) {
        gameObject.SetActive (state);
    }
    
    public void Reset () {
        categoryID = 2;
        sortID = 1;
        UpdateCategory ();
        UpdateSortType ();
        SwitchCategoryDisplay (false);
        SwitchSortTypeDisplay (false);
    }
    
    public void OnCategoryButtonClicked (int index) {
        SwitchCategoryDisplay (false);
        SwitchSortTypeDisplay (false);

        if (index != categoryID) {
            categoryID = index;
            UpdateCategory ();
            LoadData ();
        }
    }

    public void OnSortTypeButtonClicked (int index) {
        DebugLogger.Log ("OnSortTypeButtonClicked");
        SwitchCategoryDisplay (false);
        SwitchSortTypeDisplay (false);

        if (index != sortID) {
            sortID = index;
            UpdateSortType ();
            SearchPanelController.instance.SearchForInput ();
        }
    }

    public void UpdateCategory () {
        categoryText.ResetUI (
            categoryDisplay.Find (categoryID.ToString ()).GetChild (0).GetComponent<TextController> ().textZH,
            categoryDisplay.Find (categoryID.ToString ()).GetChild (0).GetComponent<TextController> ().textEN);
    }

    public void UpdateSortType () {
        sortTypeText.ResetUI (
            sortDisplay.Find (sortID.ToString ()).GetChild (0).GetComponent<TextController> ().textZH,
            sortDisplay.Find (sortID.ToString ()).GetChild (0).GetComponent<TextController> ().textEN);
    }

    public void SwitchCategoryDisplay (bool state) {
        categoryDisplay.gameObject.SetActive (state);
    }

    public void SwitchSortTypeDisplay (bool state) {
        sortDisplay.gameObject.SetActive (state);
    }
    
}
