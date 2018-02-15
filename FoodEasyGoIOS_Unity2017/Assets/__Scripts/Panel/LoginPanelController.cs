using UnityEngine;
using UnityEngine.UI;
using System.Text.RegularExpressions;
using System.Collections;

using LDFW.Network;

public class LoginPanelController : BasePanelController {

    public static LoginPanelController      instance;

    public Transform                        homePanel;
    
    public string                           email;
    public string                           password;

    public InputFieldController             emailInputField;
    public InputFieldController             passwordInputField;
    public Button                           loginButton;
    public Transform                        wechatButton;
    public Transform                        googlePlusButton;
    public Transform                        facebookButton;
    public RectTransform                    logoTransform;

    protected new void Awake () {
        if (instance != null) {
            Destroy (instance.gameObject);
        }
        instance = this;

        base.Awake ();
        
    }
    
    protected new IEnumerator Start () {
        // Get Language UI List
        GetLanguageUIList (transform);
        // Update Language
        UpdatePanelLanguage ();

        OnInputFieldsChanged ();
        (transform as RectTransform).sizeDelta = Vector2.zero;

        yield return null;
        if (PlayerPrefsController.GetAutoLoginStatus ()) {
            emailInputField.text = PlayerPrefsController.GetUserEmail ();
            passwordInputField.text = PlayerPrefsController.GetPassword ();
            OnLoginButtonClicked ();
        }


        logoTransform.sizeDelta = new Vector2 (logoTransform.sizeDelta.x, 113f / 561f * logoTransform.rect.width);
    }

    public void OnInputFieldsChanged () {
        if (string.IsNullOrEmpty (emailInputField.text) || string.IsNullOrEmpty (passwordInputField.text)) {
            loginButton.interactable = false;
        } else {
            loginButton.interactable = true;
        }
    }

    public void OnLoginButtonClicked()
    {
        string local = Application.version;
        int indexOfLocalVersion = local.LastIndexOf(".", System.StringComparison.Ordinal);
        string localAppVersion = local.Remove(indexOfLocalVersion);

        AccountAccessNetworkController.instance.GetAppVersion(
            new LDFWServerResponseEvent((JSONObject data, string m) =>
            {
                string updatedVersion = data.str;
                int indexOfUpdatedVersion = updatedVersion.LastIndexOf(".", System.StringComparison.Ordinal);
                string updatedAppVersion = updatedVersion.Remove(indexOfUpdatedVersion);
                //Debug.Log("本地版本是：" + localAppVersion + "    " + "最新的版本是：" + updatedAppVersion);
                int a = string.Compare(localAppVersion, updatedAppVersion);
                if (a < 0)
                {
                    if (Config.currentLanguage == Language.chinese)
                        MessagePanelController.instance.DisplayPanel("新版本V: " + updatedVersion + " 已经上架，请前往商店更新以便更好的使用App -- FoodEasyGo Development team");
                    else
                        MessagePanelController.instance.DisplayPanel("An update to latest version : " + updatedVersion + " is required, please check app store for an update, thank you -- FoodEasyGo Development team");

                }
                else
                {
                    Login();
                }
            }),
            new LDFWServerResponseEvent((JSONObject data, string m) =>
            {
                //Debug.Log("没有得到版本号");
            }));

    }


    public void Login()
    {
        Regex r = new Regex(@"^[a-zA-Z0-9._-]*@[a-zA-Z0-9]*[.][a-zA-Z0-9]*$");
        if (true || r.IsMatch(emailInputField.text))
        {

            LoadingPanelController.instance.DisplayPanel();

            AccountAccessNetworkController.instance.UserLogin(
                emailInputField.text,
                passwordInputField.text,
                new LDFWServerResponseEvent((JSONObject json, string m) => {
                    PlayerPrefsController.SetAutoLogin(true);
                    PlayerPrefsController.SetUserCredentials(emailInputField.text, passwordInputField.text);
                    LoadingPanelController.instance.HidePanelImmediately();
                    UserDataController.instance.OnUserLoggedIn(json, emailInputField.text, passwordInputField.text);
                    SceneController.LoadMainScene();
                }),
                new LDFWServerResponseEvent((JSONObject json, string m) => {
                    PlayerPrefsController.SetAutoLogin(false);
                    LoadingPanelController.instance.HidePanelImmediately();
                    MessagePanelController.instance.DisplayPanel(json.GetField("c").f.ToString() + ":" + m);
                }));
        }
        else
        {
            MessagePanelController.instance.DisplayPanel(ErrorMessageConfig.EmailError[CommonFunctions.GetCurrentLanguageIndex()]);
        }
    }
    
    public void OnForgotPasswordButtonClicked () {

    }

    public void OnRegistrationButtonClicked () {

    }

}
