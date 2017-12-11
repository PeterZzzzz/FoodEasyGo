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

    public void OnLoginButtonClicked () {
        Regex r = new Regex (@"^[a-zA-Z0-9._-]*@[a-zA-Z0-9]*[.][a-zA-Z0-9]*$");
        if (true || r.IsMatch (emailInputField.text)) {

            LoadingPanelController.instance.DisplayPanel ();

            AccountAccessNetworkController.instance.UserLogin (
                emailInputField.text,
                passwordInputField.text,
                new LDFWServerResponseEvent ((JSONObject json, string m) => {
                    PlayerPrefsController.SetAutoLogin (true);
                    PlayerPrefsController.SetUserCredentials (emailInputField.text, passwordInputField.text);
                    LoadingPanelController.instance.HidePanelImmediately ();
                    UserDataController.instance.OnUserLoggedIn (json, emailInputField.text, passwordInputField.text);
                    SceneController.LoadMainScene ();
                }),
                new LDFWServerResponseEvent ((JSONObject json, string m) => {
                    PlayerPrefsController.SetAutoLogin (false);
                    LoadingPanelController.instance.HidePanelImmediately ();
                    MessagePanelController.instance.DisplayPanel (json.GetField ("c").f.ToString () + ":" + m);
                }));
        } else {
            MessagePanelController.instance.DisplayPanel (ErrorMessageConfig.EmailError[CommonFunctions.GetCurrentLanguageIndex ()]);
        }
    }
    
    public void OnForgotPasswordButtonClicked () {

    }

    public void OnRegistrationButtonClicked () {

    }

}
