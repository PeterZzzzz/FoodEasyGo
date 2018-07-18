using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Text.RegularExpressions;

using LDFW.Network;

public class RegistrationPanelController : BasePanelController {

    public static RegistrationPanelController   instance;

    public InputFieldController                 emailInputField;
    public InputFieldController                 passwordInputField;
    public InputFieldController                 repasswordInputField;
    public InputFieldController                 invitationCodeInputField;
    public Button                               registrationButton;
    public RectTransform                        logoTransform;

    protected new void Awake () {
        if (instance  != null) {
            Destroy (instance.gameObject);
        }
        instance = this;

        base.Awake ();
        ClosePanel ();
    }

    protected new void Start () {
        // Get Language UI List
        GetLanguageUIList (transform);
        // Update Language
        UpdatePanelLanguage ();

        OnInputFieldsChanged ();
        (transform as RectTransform).sizeDelta = Vector2.zero;
        
    }

    public override void OpenPanel () {
        transform.localScale = Vector3.one;

        logoTransform.sizeDelta = new Vector2 (logoTransform.sizeDelta.x, 113f / 561f * logoTransform.rect.width);
    }
    public override void ClosePanel () {
        transform.localScale = Vector3.zero;
    }
    public override void DisplayPanel () {
    }
    public override void HidePanel (float delay = 0) {
    }
    public override void HidePanelImmediately () {
    }

    public void OnInputFieldsChanged () {
        if (string.IsNullOrEmpty (emailInputField.text) || string.IsNullOrEmpty (passwordInputField.text) || string.IsNullOrEmpty (repasswordInputField.text)) {
            registrationButton.interactable = false;
        } else {
            registrationButton.interactable = true;
        }
    }

    public void OnRegistrationButtonClicked () {
        Regex r = new Regex (@"^[a-zA-Z0-9._-]*@[a-zA-Z0-9]*[.][a-zA-Z0-9]*$");
        if (!r.IsMatch (emailInputField.text)) {
            MessagePanelController.instance.DisplayPanel (ErrorMessageConfig.EmailError[CommonFunctions.GetCurrentLanguageIndex ()]);
            return;
        }

        if (passwordInputField.text.Length < 6) {
            MessagePanelController.instance.DisplayPanel (ErrorMessageConfig.PasswordTooShort[CommonFunctions.GetCurrentLanguageIndex ()]);
            return;
        }

        if (passwordInputField.text != repasswordInputField.text) {
            MessagePanelController.instance.DisplayPanel (ErrorMessageConfig.PasswordsNotMatch[CommonFunctions.GetCurrentLanguageIndex ()]);
            return;
        }

        LoadingPanelController.instance.DisplayPanel ();

        AccountAccessNetworkController.instance.UserRegister (
            emailInputField.text,
            passwordInputField.text, 
            repasswordInputField.text, 
            invitationCodeInputField.text,
            new LDFWServerResponseEvent ((JSONObject json, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                MessagePanelController.instance.DisplayPanel (m);
                ClosePanel ();
                //PanelListController.instance.RemovePanel ();
            }),
            new LDFWServerResponseEvent ((JSONObject json, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                MessagePanelController.instance.DisplayPanel (json.GetField ("c").f.ToString () + ":" + m);
            }));
    }

    public void OnTermsTextClicked()
    {
        Application.OpenURL (Config.serverDomain + "home/terms/index.html");
    }

    public void OnPrivacyPolicyTextClicked()
    {
        Application.OpenURL (Config.serverDomain + "home/privacy_policy/index.html");
    }
}
