using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.Network;

using Debug = UnityEngine.Debug;

public class PaymentPanelController : BasePanelController {

    public static PaymentPanelController instance;


    // Prefabs
    public GameObject paymentBarPrefab;


    // Transform
    public ScrollRect defaultScrollRect;
    public Transform modifyPaymentPanel;

    // private
    PaymentPanelPaymentBarController currentBar = null;

    new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();

        SwitchModifyPaymentPanel (false);

        if (Screen.width == 1125)
        {
            // iPhoneX
            defaultScrollRect.GetComponent<RectTransform>().offsetMin = new Vector2(defaultScrollRect.GetComponent<RectTransform>().offsetMin.x, defaultScrollRect.GetComponent<RectTransform>().offsetMin.y + 20);

            Debug.Log("iPhoneX适配15");
        }
    }



    #region Overrides
    public override void ResetPanel () {
        defaultScrollRect.content.DestroyAllChildren ();
        SwitchModifyPaymentPanel (false);
    }

    public override void ReloadPanel () {
        LoadingPanelController.instance.DisplayPanel ();
        GetPaymentList (new LDFWServerResponseEvent ((JSONObject data, string m) => {
            LoadingPanelController.instance.HidePanelImmediately ();
            if (data != null && data.Count > 0) {
                for (int i = 0; data[i] != null; i++) {
                    Transform paymentBar = Instantiate (paymentBarPrefab).transform;
                    string expMonth = "";
                    string expYear = "";
                    if (data[i].GetField ("expiration_time").str.Length >= 5) {
                        expMonth = data[i].GetField ("expiration_time").str.Substring (0, 2);
                        expYear = data[i].GetField ("expiration_time").str.Substring (3, 2);
                    }
                    string cardNumber = "";
                    if (!string.IsNullOrEmpty (data[i].GetField ("credit_card_number").str)) {
                        cardNumber = data[i].GetField ("credit_card_number").str;
                    }

                    paymentBar.GetComponent<PaymentPanelPaymentBarController> ().Reset (
                        data[i].GetField ("is_default").str == "1" ? true : false,
                        data[i].GetField ("id").str,
                        data[i].GetField ("billing_first_name").str,
                        data[i].GetField ("billing_last_name").str,
                        cardNumber,
                        expMonth,
                        expYear);
                    paymentBar.SetParent (defaultScrollRect.content);
                    paymentBar.localScale = Vector3.one;
                    paymentBar.GetComponent<PaymentPanelPaymentBarController> ().parentScrollRect = defaultScrollRect;
                    if (paymentBar.GetComponent<PaymentPanelPaymentBarController> ()._isDefault) {
                        paymentBar.SetAsFirstSibling ();
                    }
                }
            }

            if (defaultScrollRect.content.childCount <= 0) {
                defaultScrollRect.content.parent.Find ("EmptyText").gameObject.SetActive (true);
            } else {
                defaultScrollRect.content.parent.Find ("EmptyText").gameObject.SetActive (false);
            }
        }),
        new LDFWServerResponseEvent ((JSONObject data, string m) => {
            LoadingPanelController.instance.HidePanelImmediately ();

        }));
    }

    public void OnCloseButtonClicked () {
        AppDataController.instance.SyncCreditCardList ();
    }
    #endregion



    #region ModifyPayment
    public void OnAddPaymentButtonClicked () {
        SwitchModifyPaymentPanel (true, null);
    }

    public void SwitchModifyPaymentPanel (bool state, PaymentPanelPaymentBarController bar = null) {
        modifyPaymentPanel.gameObject.SetActive (state);
        currentBar = null;

        if (state && bar != null) {
            currentBar = bar;
            modifyPaymentPanel.Find ("FirstName/InputField").GetComponent<InputField> ().text = currentBar._firstName;
            modifyPaymentPanel.Find ("LastName/InputField").GetComponent<InputField> ().text = currentBar._lastName;
            modifyPaymentPanel.Find ("Card/InputField").GetComponent<InputField> ().text = currentBar._cardNumber;
            modifyPaymentPanel.Find ("Month/InputField").GetComponent<InputField> ().text = currentBar._month;
            modifyPaymentPanel.Find ("Year/InputField").GetComponent<InputField> ().text = currentBar._year;
            //modifyPaymentPanel.Find ("SecurityCode/InputField").GetComponent<InputField> ().text = currentBar._securityCode;
            modifyPaymentPanel.Find ("SecurityCode/InputField").GetComponent<InputField> ().text = "";
        } else {
            modifyPaymentPanel.Find ("FirstName/InputField").GetComponent<InputField> ().text = "";
            modifyPaymentPanel.Find ("LastName/InputField").GetComponent<InputField> ().text = "";
            modifyPaymentPanel.Find ("Card/InputField").GetComponent<InputField> ().text = "";
            modifyPaymentPanel.Find ("Month/InputField").GetComponent<InputField> ().text = "";
            modifyPaymentPanel.Find ("Year/InputField").GetComponent<InputField> ().text = "";
            modifyPaymentPanel.Find ("SecurityCode/InputField").GetComponent<InputField> ().text = "";
        }
    }

    public void OnSaveModifyPaymentButtonClicked () {
        if (ValidateModifyPaymentPanel ()) {
            if (currentBar == null) {
                AddPayment (
                    modifyPaymentPanel.Find ("FirstName/InputField").GetComponent<InputField> ().text,
                    modifyPaymentPanel.Find ("LastName/InputField").GetComponent<InputField> ().text,
                    modifyPaymentPanel.Find ("Card/InputField").GetComponent<InputField> ().text,
                    modifyPaymentPanel.Find ("Month/InputField").GetComponent<InputField> ().text + "/" + modifyPaymentPanel.Find ("Year/InputField").GetComponent<InputField> ().text,
                    modifyPaymentPanel.Find ("SecurityCode/InputField").GetComponent<InputField> ().text,
                    new LDFWServerResponseEvent ((JSONObject data, string m) => {
                        SwitchModifyPaymentPanel (false);
                        ResetPanel ();
                        ReloadPanel ();
                        //AppDataController.instance.SyncCreditCardList ();
                    }),
                    null);
            } else {
                ModifyPayment (
                    currentBar._id,
                    modifyPaymentPanel.Find ("FirstName/InputField").GetComponent<InputField> ().text,
                    modifyPaymentPanel.Find ("LastName/InputField").GetComponent<InputField> ().text,
                    modifyPaymentPanel.Find ("Card/InputField").GetComponent<InputField> ().text,
                    modifyPaymentPanel.Find ("Month/InputField").GetComponent<InputField> ().text + "/" + modifyPaymentPanel.Find ("Year/InputField").GetComponent<InputField> ().text,
                    modifyPaymentPanel.Find ("SecurityCode/InputField").GetComponent<InputField> ().text,
                    new LDFWServerResponseEvent ((JSONObject data, string m) => {
                        SwitchModifyPaymentPanel (false);
                        ResetPanel ();
                        ReloadPanel ();
                        //AppDataController.instance.SyncCreditCardList ();
                    }),
                    null);
            }
        }
    }

    public bool ValidateModifyPaymentPanel () {
        if (string.IsNullOrEmpty (modifyPaymentPanel.Find ("Card/InputField").GetComponent<InputField> ().text)) {
            MessagePanelController.instance.DisplayPanel ("Card number cannot be empty");
            return false;
        } else if (modifyPaymentPanel.Find ("Card/InputField").GetComponent<InputField> ().text.Length < 16) {
            MessagePanelController.instance.DisplayPanel ("Card number too short");
            return false;
        } else if (string.IsNullOrEmpty (modifyPaymentPanel.Find ("Month/InputField").GetComponent<InputField> ().text)) {
            MessagePanelController.instance.DisplayPanel ("Month cannot be empty");
            return false;
        } else if (string.IsNullOrEmpty (modifyPaymentPanel.Find ("Year/InputField").GetComponent<InputField> ().text)) {
            MessagePanelController.instance.DisplayPanel ("Year cannot be empty");
            return false;
        } else if (string.IsNullOrEmpty (modifyPaymentPanel.Find ("SecurityCode/InputField").GetComponent<InputField> ().text)) {
            MessagePanelController.instance.DisplayPanel ("Security code cannot be empty");
            return false;
        }

        if (modifyPaymentPanel.Find ("Month/InputField").GetComponent<InputField> ().text.Length == 1) {
            modifyPaymentPanel.Find ("Month/InputField").GetComponent<InputField> ().text = "0" + modifyPaymentPanel.Find ("Month/InputField").GetComponent<InputField> ().text;
        }
        if (modifyPaymentPanel.Find ("Year/InputField").GetComponent<InputField> ().text.Length == 1) {
            modifyPaymentPanel.Find ("Year/InputField").GetComponent<InputField> ().text = "0" + modifyPaymentPanel.Find ("Year/InputField").GetComponent<InputField> ().text;
        }

        return true;
    }


    #endregion



    #region ServerCalls
    public void GetPaymentList (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        LoadingPanelController.instance.DisplayPanel ();
        UserDataNetworkController.instance.GetUserPaymentList (success, failure);
    }

    public void SetDefaultPayment (string defaultPaymentID, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        LoadingPanelController.instance.DisplayPanel ();
        WWWForm form = new WWWForm ();
        form.AddField ("payment_id", defaultPaymentID);
        UserDataNetworkController.instance.SetDefaultPayment (form, success, failure);
    }

    public void AddPayment (string firstName, string lastName, string card, string exp_time, string security_code, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        LoadingPanelController.instance.DisplayPanel ();
        WWWForm form = new WWWForm ();
        form.AddField ("first_name", firstName);
        form.AddField ("last_name", lastName);
        form.AddField ("card_number", card);
        form.AddField ("exp_time", exp_time);
        form.AddField ("security_code", security_code);
        UserDataNetworkController.instance.AddUserPayment (form, success, failure);
    }

    public void DeletePayment (string paymentID, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        LoadingPanelController.instance.DisplayPanel ();
        WWWForm form = new WWWForm ();
        form.AddField ("payment_id", paymentID);
        UserDataNetworkController.instance.DeleteUserPayment (form, success, failure);
    }

    public void ModifyPayment (string id, string firstName, string lastName, string card, string exp_time, string security_code, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        LoadingPanelController.instance.DisplayPanel ();
        WWWForm form = new WWWForm ();
        form.AddField ("first_name", firstName);
        form.AddField ("last_name", lastName);
        form.AddField ("payment_id", id);
        form.AddField ("card_number", card);
        form.AddField ("exp_time", exp_time);
        form.AddField ("security_code", security_code);
        UserDataNetworkController.instance.ModifyUserPayment (form, success, failure);
    }
    #endregion
}
