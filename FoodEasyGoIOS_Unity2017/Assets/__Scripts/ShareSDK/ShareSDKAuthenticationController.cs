using UnityEngine;
using System.Collections;

using LDFW.Network;
using cn.sharesdk.unity3d;

public class ShareSDKAuthenticationController : MonoBehaviour {

    public Transform bindEmailPanel;
    public InputFieldController emailInputField;

    public ShareSDK ssdk;
    private PlatformType platform;
    private string platformString;
    private string thirdPartyUserID;
    private string userEmail;

    public GameObject wechatButton;


    void Awake () {
        SwitchBindEmailPanel (0);
        wechatButton.SetActive (false);
        
    }

    IEnumerator Start () {
        yield return new WaitForSeconds (1f);
        ssdk = SharePanelController.instance.transform.GetComponent<ShareSDK> ();
        ssdk.authHandler = AuthResultHandler;
        ssdk.showUserHandler = GetUserInfoResultHandler;

        yield return new WaitForSeconds (1f);
        if (ssdk.IsClientValid (PlatformType.WeChat)) {
            wechatButton.SetActive (true);
        }
    }

    public void OnWeChatLoginButtonClicked () {
        LoadingPanelController.instance.DisplayPanelImmediately ();
        platform = PlatformType.WeChat;
        platformString = "1";
        ThirdPartyLogin ();
    }

    public void OnGooglePlusLoginButtonClicked () {
        LoadingPanelController.instance.DisplayPanelImmediately ();
        platform = PlatformType.GooglePlus;
        platformString = "2";
        ThirdPartyLogin ();
    }

    public void OnFacebookLoginButtonClicked () {
        LoadingPanelController.instance.DisplayPanelImmediately ();
        platform = PlatformType.Facebook;
        platformString = "3";
        ThirdPartyLogin ();
    }


    void ThirdPartyLogin () {
        thirdPartyUserID = "";
        userEmail = "";
        ssdk.Authorize (platform);
    }


    void AuthResultHandler (int reqID, ResponseState state, PlatformType type, Hashtable result) {

        if (state == ResponseState.Success) {
            ssdk.shareSDKUtils.GetUserInfo (reqID, type);
        } else if (state == ResponseState.Fail) {
            LoadingPanelController.instance.HidePanelImmediately ();
            MessagePanelController.instance.DisplayPanel ("Failed to log in: " + result["error_msg"]);
        } else if (state == ResponseState.Cancel) {
            LoadingPanelController.instance.HidePanelImmediately ();
            MessagePanelController.instance.DisplayPanel ("User cancelled");
        }
    }

    void GetUserInfoResultHandler (int reqID, ResponseState state, PlatformType type, Hashtable result) {

        if (state == ResponseState.Success) {
            DebugLogger.Log ("GetUserInfoResultHandler: reqID = " + reqID);
            if (result == null) {
                DebugLogger.Log ("result is null");
            } else {
                DebugLogger.Log ("result is not null");
                DebugLogger.Log (MiniJSON.jsonEncode (result));
                if (result.Keys == null) {
                    DebugLogger.Log ("result.keys = null");
                } else {
                    DebugLogger.Log ("Result contains " + result.Keys.Count + " keys");
                    foreach (var key in result.Keys) {
                        DebugLogger.Log (key.ToString () + ": " + result[key]);
                    }
                }
            }


            GetUserInfo (result);

            TryUserLogin (null,
                new LDFWServerResponseEvent ((JSONObject data, string m) => {
                    if (string.IsNullOrEmpty (userEmail)) {
                        SwitchBindEmailPanel (1);
                    } else {
                        emailInputField.text = userEmail;
                        OnBindEmailButtonClicked ();
                    }

                }));

            
        } else if (state == ResponseState.Fail) {
            LoadingPanelController.instance.HidePanelImmediately ();
            MessagePanelController.instance.DisplayPanel ("Failed to get user info: " + result["error_msg"]);
        } else if (state == ResponseState.Cancel) {
            LoadingPanelController.instance.HidePanelImmediately ();
            MessagePanelController.instance.DisplayPanel ("User cancelled");
        }
    }

    void GetUserInfo (Hashtable result) {
        thirdPartyUserID = "";
        userEmail = "";
        JSONObject jsonData = new JSONObject (MiniJSON.jsonEncode (result));

        switch (platform) {
            case PlatformType.WeChat:
                thirdPartyUserID = jsonData.GetField ("openid").str;
                userEmail = "";
                break;
            case PlatformType.Facebook:
                thirdPartyUserID = jsonData.GetField ("id").str;
                userEmail = jsonData.GetField ("email").str;
                break;
            case PlatformType.GooglePlus:
                thirdPartyUserID = jsonData.GetField ("id").str;
                userEmail = jsonData.GetField ("emails")[0].GetField ("value").str;
                break;
            default:
                break;
        }

        DebugLogger.Log ("userid = " + thirdPartyUserID);
        DebugLogger.Log ("email = " + userEmail);
    }

    public void SwitchBindEmailPanel (int scale) {
        bindEmailPanel.localScale = Vector3.one * scale;
    }

    public void OnBindEmailButtonClicked () {
        userEmail = emailInputField.text;
        if (string.IsNullOrEmpty (userEmail)) {
            MessagePanelController.instance.DisplayPanel ("Email cannot be empty");
            return;
        }

        SwitchBindEmailPanel (0);
        
        LoadingPanelController.instance.DisplayPanel ();
        ThirdPartyNetworkController.instance.SetBindingEmail (thirdPartyUserID, platformString, userEmail,
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                TryUserLogin ();
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
            }));

    }

    void TryUserLogin (LDFWServerResponseEvent success = null, LDFWServerResponseEvent failure = null) {
        LoadingPanelController.instance.DisplayPanelImmediately ();
        AccountAccessNetworkController.instance.ThirdPartyLogin (
            thirdPartyUserID, platformString, userEmail,
            success != null? success : 
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                if (data.GetField ("user_data") == null) {
                    DebugLogger.Log ("user data is null");
                    if (string.IsNullOrEmpty (userEmail)) {
                        SwitchBindEmailPanel (1);
                    } else {
                        emailInputField.text = userEmail;
                        OnBindEmailButtonClicked ();
                    }
                } else {
                    string bindingEmail = data.GetField ("user_data").GetField ("email").str;

                    PlayerPrefsController.SetAutoLogin (true);
                    PlayerPrefsController.SetUserCredentials (bindingEmail, bindingEmail);
                    LoadingPanelController.instance.HidePanelImmediately ();
                    UserDataController.instance.OnUserLoggedIn (data, bindingEmail, bindingEmail);
                    SceneController.LoadMainScene ();

                }

            }),
            failure != null? failure : 
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
            }));

    }
}
