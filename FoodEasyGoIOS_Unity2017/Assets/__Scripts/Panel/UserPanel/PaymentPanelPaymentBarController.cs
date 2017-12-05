using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using System;

using LDFW;
using LDFW.Tween;
using LDFW.Network;

using Debug = UnityEngine.Debug;

public class PaymentPanelPaymentBarController : MonoBehaviour {

    public ScrollRect                       parentScrollRect;
    public LDFWTweenUIAnchoredPosition      anchoredPositionTweener;
    public TextController                   defaultCardText;
    public RectTransform                    defaultCardIcon;

    public bool _isDefault;
    public string _id;
    public string _firstName;
    public string _lastName;
    public string _cardNumber;
    public string _month;
    public string _year;
    //public string _securityCode;


    // private 
    private float tweenCoolDown = 0f;
    private bool isPointerDown = false;
    private bool isDeleteButtonVisible = false;

    void Update () {
        if (tweenCoolDown > 0) {
            tweenCoolDown -= Time.deltaTime;
        }
    }

    public void Reset (bool isDefault, string id, string firstName, string lastName, string cardNumber, string month, string year) {
        _isDefault = isDefault;
        _id = id;
        _firstName = firstName;
        _lastName = lastName;
        _cardNumber = cardNumber;
        _month = month;
        _year = year;
        //_securityCode = securityCode;

        ResetUI ();
    }

    public void ResetUI () {
        if (_cardNumber.Length >= 4) {
            transform.Find ("Panel/Last4Digit").GetComponent<TextController> ().ResetUI ("**********" + _cardNumber.Substring (_cardNumber.Length - 4, 4));
        } else {
            transform.Find ("Panel/Last4Digit").GetComponent<TextController> ().ResetUI ("**********" + _cardNumber);
        }
        transform.Find ("Panel/Date").GetComponent<TextController> ().ResetUI (_month.ToString () + "/" + _year.ToString ());


        if (_isDefault) {
            defaultCardText.GetComponent<TextController> ().ResetUI ("默认信用卡", "Default");
            defaultCardIcon.parent.GetComponent<Image> ().color = new Color (0, 0, 0, 0);
            defaultCardIcon.gameObject.SetActive (true);
        } else {
            defaultCardText.GetComponent<TextController> ().ResetUI ("设为默认", "Set as default");
            defaultCardIcon.parent.GetComponent<Image> ().color = new Color (1, 1, 1, 1);
            defaultCardIcon.gameObject.SetActive (false);
        }

    }
    

    public void OnModifyButtonClicked () {
        PaymentPanelController.instance.SwitchModifyPaymentPanel (true, this);
    }

    public void OnDeleteButtonCliced () {
        PopUpPanelController.instance.DisplayPopUpPanel (null, () => {
            PaymentPanelController.instance.DeletePayment (_id, new LDFWServerResponseEvent ((JSONObject data, string m) => {
                transform.SetParent (null);
                PaymentPanelController.instance.ResetPanel ();
                PaymentPanelController.instance.ReloadPanel ();
                gameObject.DestroyGO ();
                AppDataController.instance.SyncCreditCardList ();
            }), null);
        },
            "确定删除行用卡？",
            "Are you sure to delete this credit card?");
    }

    public void OnSetDefaultButtonClicked () {
        DebugLogger.Log ("OnSetDefaultButtonClicked ");
        if (!_isDefault) {
            DebugLogger.Log ("On Set Default");
            WWWForm form = new WWWForm ();
            form.AddField ("payment_id", _id);

            LoadingPanelController.instance.DisplayPanel ();
            UserDataNetworkController.instance.SetDefaultPayment (form,
                new LDFWServerResponseEvent ((JSONObject data, string m) => {
                    PaymentPanelController.instance.ResetPanel ();
                    PaymentPanelController.instance.ReloadPanel ();
                }),
                new LDFWServerResponseEvent ((JSONObject data, string m) => {
                    PaymentPanelController.instance.ResetPanel ();
                    PaymentPanelController.instance.ReloadPanel ();
                }));
        }
    }
}
