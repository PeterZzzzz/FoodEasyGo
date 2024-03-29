﻿using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;

using LDFW;
using LDFW.UI;
using LDFW.Network;

public class SearchPanelController : BasePanelController {

    public static SearchPanelController instance;

    public ScrollRect historicalSearchScrollRect;
    public ScrollRect resultSearchScrollRect;
    public InputField searchInput;
    public int searchOptionID = 0;

    new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();

        if (Screen.width == 1125 || Screen.width == 1242 || Screen.width == 828)
        {
            // iPhoneX
            //historicalSearchScrollRect.GetComponent<RectTransform>().offsetMin = new Vector2(historicalSearchScrollRect.GetComponent<RectTransform>().offsetMin.x, historicalSearchScrollRect.GetComponent<RectTransform>().offsetMin.y + 20);
            //resultSearchScrollRect.GetComponent<RectTransform>().offsetMin = new Vector2(resultSearchScrollRect.GetComponent<RectTransform>().offsetMin.x, resultSearchScrollRect.GetComponent<RectTransform>().offsetMin.y + 20);

            Debug.Log("iPhoneX适配5失效");

        }
    }

    new void Start () {
        base.Start ();

    }

    #region Overrides
    public override void ResetPanel () {
        SwitchHistoricalSearchScrollRect (true);
        SearchPanelSearchResultPanelController.instance.SwitchSearchResultPanel (false);
        SearchPanelSearchResultPanelController.instance.Reset ();
    }

    public override void ReloadPanel () {
    }

    #endregion




    public void SearchForInput (string input) {
        searchInput.text = input;
        if (!string.IsNullOrEmpty (input)) {

            UpdateHistoricalSearch (input);

            WWWForm form = new WWWForm ();
            form.AddField ("search_string", input);
            //form.AddField ("sort_type", SearchPanelSearchResultPanelController.instance.sortID.ToString ());
            form.AddField ("search_option", searchOptionID);

            LoadingPanelController.instance.DisplayPanel ();
            InfoNetworkController.instance.GetSearchResult (form,
                new LDFWServerResponseEvent ((JSONObject data, string m) => {
                    LoadingPanelController.instance.HidePanelImmediately ();
                    SearchPanelSearchResultPanelController.instance.SwitchSearchResultPanel (true);
                    SearchPanelSearchResultPanelController.instance.LoadData (data);
                }),
                new LDFWServerResponseEvent ((JSONObject data, string m) => {
                    LoadingPanelController.instance.HidePanelImmediately ();

                }));
        }
    }


    public void SearchBtnOnClicked () {
        if (!string.IsNullOrEmpty (searchInput.text)) {
            SearchForInput (searchInput.text);
        }
    }
    
    #region HistoricalSearchScrollrect

    List<string> historicalSearchList;
    string historySearchPlayerPrefsPrefix = "HS";


    private void SwitchHistoricalSearchScrollRect (bool state) {
        historicalSearchScrollRect.gameObject.SetActive (state);
        if (state) {
            LoadHistoricalSearchList ();
            DisplayHistoricalSearchList ();
        }
    }

    public void OnSearchResultButtonClicked (int index) {
        SearchForInput (historicalSearchScrollRect.content.GetChild (index).Find ("Text").GetComponent<Text> ().text);
    }

    public void LoadHistoricalSearchList () {
        historicalSearchList = new List<string> ();
        for (int i=0; i<20; i++) {
            historicalSearchList.Add (PlayerPrefsController.GetHistoricalSearchIndex (i));
        }
    }

    public void UpdateHistoricalSearch (string newSearch) {
        if (newSearch != PlayerPrefsController.GetHistoricalSearchIndex (0)) {
            for (int i = 19; i > 0; i--) {
                PlayerPrefsController.SetHistoricalSearchIndex (i, PlayerPrefsController.GetHistoricalSearchIndex (i - 1));
            }
            PlayerPrefsController.SetHistoricalSearchIndex (0, newSearch);
        }
        LoadHistoricalSearchList ();
    }

    public void DisplayHistoricalSearchList () {
        for (int i = 0; i < 10; i++) {
            if (i >= historicalSearchList.Count || string.IsNullOrEmpty (historicalSearchList[i])) {
                historicalSearchScrollRect.content.GetChild (i).gameObject.SetActive (false);
            } else {
                historicalSearchScrollRect.content.GetChild (i).gameObject.SetActive (true);
                historicalSearchScrollRect.content.GetChild (i).Find ("Text").GetComponent<Text> ().text = historicalSearchList[i];
            }
        }

        historicalSearchScrollRect.content.anchoredPosition = Vector2.zero;
    }

    public void OnClearHistoricalSearchButtonClicked () {
        for (int i = 0; i < 20; i++) {
            PlayerPrefsController.SetHistoricalSearchIndex (i, "");
        }
        LoadHistoricalSearchList ();
        DisplayHistoricalSearchList ();
    }
    #endregion

    public void SetSearchOptionID(int id) {
        searchOptionID = id;

    }
}
