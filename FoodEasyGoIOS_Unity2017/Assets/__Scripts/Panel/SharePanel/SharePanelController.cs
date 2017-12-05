using UnityEngine;
using System.Collections;

using cn.sharesdk.unity3d;

public class SharePanelController : BasePanelController {

    public static SharePanelController instance;
    public ShareSDK ssdk;
    public Transform weChatButton;
    public Transform googleButton;
    public Transform facebookButton;
    public Transform copyButton;
    public Transform cancelButton;


    protected new void Awake () {

        if (instance != null) {
            Destroy (gameObject);
            return;
        }
        instance = this;

        base.Awake ();

        ssdk = GetComponent<ShareSDK> ();
        ssdk.shareHandler = ShareResultHandler;
    }

    protected new void Start () {
        transform.localScale = Vector3.zero;
    }

    public void ShareContent (string content) {
        DebugLogger.Log ("Sharepanel.shareContent is called");
        ShareContent sContent = new ShareContent ();
        sContent.SetText (content);
        sContent.SetImageUrl ("https://www.foodeasygo.com/Public/Home/images/minLogo.png");
        sContent.SetTitle ("FoodEasyGo");
        sContent.SetShareType (ContentType.Text);
        ssdk.ShowPlatformList (null, sContent, 100, 100);
    }

    public void ShareResultHandler (int reqID, ResponseState state, PlatformType type, Hashtable result) {
        if (state == ResponseState.Success) {
            MessagePanelController.instance.DisplayPanel ("Shared successfully");
        } else if (state == ResponseState.Fail) {
            MessagePanelController.instance.DisplayPanel ("fail! error code = " + result["error_code"] + "; error msg = " + result["error_msg"]);
        } else if (state == ResponseState.Cancel) {
            MessagePanelController.instance.DisplayPanel ("cancel");
        }
    }
}
