using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using System;

using LDFW;
using LDFW.Tween;
using LDFW.Network;

using Debug = UnityEngine.Debug;

public class AddressPanelAddressBarController : MonoBehaviour {

    public ScrollRect parentScrollRect;
    public LDFWTweenUIAnchoredPosition anchoredPositionTweener;
    public Image defaultButton;
    public RectTransform nameTransform;
    public RectTransform contactNumberTransform;
    public RectTransform addressTransform;
    public RectTransform defaultAddressText;
    public RectTransform defaultAddressIcon;

    public bool _isDefault;
    public string _addressID;
    public string _name;
    public string _phone;
    public string _address;
    public string _street;
    public string _city;
    public string _state;
    public string _zipCode;
    public string _regionID;


    // private 
    private float tweenCoolDown = 0f;
    private bool isPointerDown = false;
    private bool isDeleteButtonVisible = false;

    void Update () {
        if (tweenCoolDown > 0) {
            tweenCoolDown -= Time.deltaTime;
        }
    }

    public void Reset (bool isDefault, string id, string name, string phone, string address, string street, string city, string state, string zip, string region) {
        _isDefault = isDefault;
        _addressID = id;
        _name = name;
        _phone = phone;
        _address = address;
        _street = street;
        _city = city;
        _state = state;
        _zipCode = zip;
        _regionID = region;

        ResetUI ();
    }

    public void ResetUI () {
        nameTransform.GetComponent<TextController> ().ResetUI (_name);
        contactNumberTransform.GetComponent<TextController> ().ResetUI (_phone);
        addressTransform.GetComponent<TextController> ().ResetUI (_address + " " + _street + ", " + _city + ", " + _state + ", " + _zipCode);


        if (_isDefault) {
            defaultAddressText.GetComponent<TextController> ().ResetUI ("默认地址", "Default");
            defaultAddressIcon.parent.GetComponent<Image> ().color = new Color (0, 0, 0, 0);
            defaultAddressIcon.gameObject.SetActive (true);
        } else {
            defaultAddressText.GetComponent<TextController> ().ResetUI ("设为默认", "Set as default");
            defaultAddressIcon.parent.GetComponent<Image> ().color = new Color (1, 1, 1, 1);
            defaultAddressIcon.gameObject.SetActive (false);
        }
        
    }
    

    public void OnModifyButtonClicked () {
        AddressPanelController.instance.SwitchModifyAddressPanel (true, this);
    }

    public void OnDeleteButtonCliced () {
        PopUpPanelController.instance.DisplayPopUpPanel (null, () => {
            AddressPanelController.instance.DeleteAddress (_addressID, new LDFWServerResponseEvent ((JSONObject data, string m) => {
                transform.SetParent (null);
                AddressPanelController.instance.ResetPanel ();
                AddressPanelController.instance.ReloadPanel ();
                gameObject.DestroyGO ();
            }), null);
        },
            "确定删除地址？",
            "Are you sure to delete this address?");
    }

    public void OnSetDefaultButtonClicked () {
        if (!_isDefault) {
            WWWForm form = new WWWForm ();
            form.AddField ("address_id", _addressID);

            LoadingPanelController.instance.DisplayPanel ();
            UserDataNetworkController.instance.SetDefaultAddress (form,
                new LDFWServerResponseEvent ((JSONObject data, string m) => {
                    AddressPanelController.instance.ResetPanel ();
                    AddressPanelController.instance.ReloadPanel ();
                }),
                new LDFWServerResponseEvent ((JSONObject data, string m) => {
                    AddressPanelController.instance.ResetPanel ();
                    AddressPanelController.instance.ReloadPanel ();
                }));
        }
    }
}
