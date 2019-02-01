using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;

using LDFW.Network;

public class PasswordResetPanelController : BasePanelController {

    public static PasswordResetPanelController instance;

    public InputField                               emailInputField;
    public InputField                               captchaInputField;
    public Text                                     captchaArithmeticText;
    public Button                                   submitButton;

    public RectTransform                            logoTransform;

    private int                                     randomNumber1;
    private int                                     randomNumber2;
    private int                                     randomNumber3;

    protected new void Awake () {
        if (instance != null) {
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

    public void OnInputFieldsChanged () {
        if (string.IsNullOrEmpty (emailInputField.text) || string.IsNullOrEmpty (captchaInputField.text)) {
            submitButton.interactable = false;
        } else {
            submitButton.interactable = true;
        }
    }

    public override void OpenPanel () {
        randomNumber1 = Random.Range (1, 20);
        randomNumber2 = Random.Range (1, 10);
        randomNumber3 = Random.Range (1, 20);
        captchaArithmeticText.text = "" + randomNumber1 + " + " + randomNumber2 + " x " + randomNumber3;
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

    public void OnSubmitButtonClicked () {
        int sum = 0;
        int.TryParse (captchaInputField.text, out sum);
        if (sum != (randomNumber1 + randomNumber2 * randomNumber3)) {
            MessagePanelController.instance.DisplayPanel ("Incorrect arithmetic result");
            return;
        }
        LoadingPanelController.instance.DisplayPanel ();
        AccountAccessNetworkController.instance.PasswordReset (emailInputField.text,
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                MessagePanelController.instance.DisplayPanel (m);
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
            }));
    }
    
    
}
