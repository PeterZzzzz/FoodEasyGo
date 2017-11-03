using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;

using LDFW;
using LDFW.UI;

public class PopUpTogglePanelController : BasePanelController {

    public static PopUpTogglePanelController instance;

    public Transform togglePanel;
    public LDFWToggleController toggleController;
    public Transform toggleElementTemplate;


    public TextController title;
    public TextController cancel;
    public TextController confirm;


    private Action cancelAction;
    private Action confirmAction;

    private List<GameObject> tempGOList;


    protected new void Awake () {
        if (instance != null) {
            Destroy (this);
            return;
        }
        instance = this;

        base.Awake ();

        (transform as RectTransform).sizeDelta = Vector2.zero;
        transform.localPosition = Vector3.zero;
        tempGOList = new List<GameObject> ();
    }

    protected new void Start () {
        HidePanelImmediately ();
    }

    #region Overrides
    public override void ResetPanel () {
        while (tempGOList.Count > 0) {
            tempGOList[0].DestroyGO ();
            tempGOList.RemoveAt (0);
        }
        //togglePanel.GetComponent<LayoutElement> ().preferredHeight = 400;
    }

    #endregion

    public void DisplayPopUpTogglePanel (bool isMust, bool isSingleSelect, List<string> dataListZH, List<string> dataListEN, List<string> idList, Action confirm, Action cancel) {
        ResetPanel ();

        toggleController.isMust = isMust;
        toggleController.isSingleSelect = isSingleSelect;

        confirmAction = confirm;
        cancelAction = cancel;

        if (dataListZH.Count > 0) {
            PopUpTogglePanelToggleElementController toggleElement = toggleElementTemplate.GetComponent<PopUpTogglePanelToggleElementController>();
            if (dataListEN == null) {
                toggleElement.Reset (dataListZH[0], dataListZH[0], idList[0]);
            } else {
                toggleElement.Reset (dataListZH[0], dataListEN[0], idList[0]);
            }
            
            for (int i = 1; i < dataListZH.Count; i++) {
                Transform temp = Instantiate (toggleElementTemplate.gameObject).transform;
                temp.parent = toggleElementTemplate.parent;
                temp.localScale = Vector3.one;
                tempGOList.Add (temp.gameObject);
                toggleElement = temp.GetComponent<PopUpTogglePanelToggleElementController> ();
                if (dataListEN == null) {
                    toggleElement.Reset (dataListZH[i], dataListZH[i], idList[i]);
                } else {
                    toggleElement.Reset (dataListZH[i], dataListEN[i], idList[i]);
                }
            }
        }

        toggleController.Reset ();
        //togglePanel.GetComponent<LayoutElement> ().preferredHeight = (toggleController.transform as RectTransform).sizeDelta.y + 250;

        DisplayPanel ();
    }

    public void OnCancelButtonClicked () {
        if (cancelAction != null) {
            cancelAction ();
        }
        HidePanelImmediately ();
    }

    public void OnConfirmButtonClicked () {
        if (confirmAction != null) {
            confirmAction ();
        }
        HidePanelImmediately ();
    }

    public override void DisplayPanel () {
        transform.localScale = Vector3.one;
    }

    public override void HidePanelImmediately () {
        transform.localScale = Vector3.zero;
    }
}