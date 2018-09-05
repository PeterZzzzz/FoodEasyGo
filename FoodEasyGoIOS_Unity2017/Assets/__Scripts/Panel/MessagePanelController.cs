using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MessagePanelController : BasePanelController {

    public static MessagePanelController        instance;
    public Text                                 messageText;
    public bool messageShow;

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
        transform.localScale = new Vector3(0, 1, 1);
        messageShow = true;
    }

    public override void HidePanelImmediately () {
        messageShow = false;
    }

    private void FixedUpdate()
    {
        if(messageShow)
        {
            if(transform.localScale.x <= 1)
            {
                transform.localScale += new Vector3(0.1f, 0, 0);
            }

        }else
        {
            if(transform.localScale.x > 0)
            {
                transform.localScale -= new Vector3(0.2f, 0, 0);
            }else
            {
                transform.localScale = Vector3.zero;
            }
        }

    }
}
