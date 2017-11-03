using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MessagePanelController : BasePanelController {

    public static MessagePanelController        instance;
    public Text                                 messageText;

    protected new void Awake () {
        if (instance != null) {
            Destroy (this);
            return;
        }
        instance = this;

        base.Awake ();

        (transform as RectTransform).sizeDelta = Vector2.zero;
    }

    protected new void Start () {
        HidePanelImmediately ();
    }


    #region Overrides
    public override void ResetPanel () {
        messageText.text = "";
    }

    public override void ReloadPanel () {
    }
    #endregion


    public void DisplayPanel (string message) {
        messageText.text = message;
        DisplayPanel ();
        CancelInvoke ("HidePanelImmediately");
        Invoke ("HidePanelImmediately", Config.messageDisplayTime);
    }

    public override void DisplayPanel () {
        transform.localScale = Vector3.one;
    }

    public override void HidePanelImmediately () {
        transform.localScale = Vector3.zero;
    }
}
