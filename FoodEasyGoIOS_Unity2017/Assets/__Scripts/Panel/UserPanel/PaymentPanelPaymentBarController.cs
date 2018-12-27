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
    public Image                            defaultCardIcon;

    public bool _isDefault;
    public string _id;
    public string _firstName;
    public string _lastName;
    public string _cardNumber;
    public string _month;
    public string _year;


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
            defaultCardIcon.gameObject.SetActive(true);
        } else {
            defaultCardIcon.gameObject.SetActive(false);
        }

    }

    public void OnModifyButtonClicked () {
        PaymentPanelController.instance.SwitchModifyPaymentPanel (true, this);
    }

}
