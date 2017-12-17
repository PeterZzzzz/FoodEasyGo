using UnityEngine;
using System;
using System.Collections;

public class PopUpPanelController : BasePanelController {

    public static PopUpPanelController instance;

    public TextController title;
    public TextController cancel;
    public TextController confirm;

    private Action cancelAction;
    private Action confirmAction;

    

    protected new void Awake () {
        if (instance != null) {
            Destroy (this);
            return;
        }
        instance = this;

        base.Awake ();

        (transform as RectTransform).sizeDelta = Vector2.zero;
        transform.localPosition = Vector3.zero;
    }

    protected new void Start () {
        HidePanelImmediately ();
    }

    public void DisplayPopUpPanel (
        Action cancelCallback, Action confirmCallback,
        string titleZH, string titleEN,
        string cancelZH = "取消", string cancelEN = "Cancel",
        string confirmZH = "确认", string confirmEN = "Confirm") {

        cancelAction = cancelCallback;
        confirmAction = confirmCallback;
        title.ResetUI (titleZH, titleEN);
        cancel.ResetUI (cancelZH, cancelEN);
        confirm.ResetUI (confirmZH, confirmEN);

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

    private void SwitchPanel (int scale) {
        transform.localScale = Vector3.one * scale;
    }

    public override void DisplayPanel () {
        transform.localScale = Vector3.one;
    }

    public override void HidePanelImmediately () {
        transform.localScale = Vector3.zero;
    }
}
