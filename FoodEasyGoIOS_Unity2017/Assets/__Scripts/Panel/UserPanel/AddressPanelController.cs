﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.Network;

using Debug = UnityEngine.Debug;

public class AddressPanelController : BasePanelController {

    public static AddressPanelController instance;


    // Prefabs
    public GameObject addressBarPrefab;


    // Transform
    public ScrollRect defaultScrollRect;
    public Transform modifyAddressPanel;

    // private
    AddressPanelAddressBarController currentBar = null;

    new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();

        SwitchModifyAddressPanel (false);
    }



    #region Overrides
    public override void ResetPanel () {
        defaultScrollRect.content.DestroyAllChildren ();
        SwitchModifyAddressPanel (false);
    }

    public override void ReloadPanel () {


        LoadingPanelController.instance.DisplayPanel ();
        GetAddressList (new LDFWServerResponseEvent ((JSONObject data, string m) => {
            LoadingPanelController.instance.HidePanelImmediately ();
            if (data != null && data.Count > 0) {
                for (int i = 0; data[i] != null; i++) {
                    Transform address = Instantiate (addressBarPrefab).transform;
                    address.GetComponent<AddressPanelAddressBarController> ().Reset (
                        data[i].GetField ("is_default").str == "1" ? true : false,
                        data[i].GetField ("id").str,
                        data[i].GetField ("name").str,
                        data[i].GetField ("phone").str,
                        data[i].GetField ("address").str,
                        data[i].GetField ("street").str,
                        data[i].GetField ("city").str,
                        data[i].GetField ("state").str,
                        data[i].GetField ("zip_code").str,
                        data[i].GetField ("region_id").str);
                    address.SetParent (defaultScrollRect.content);
                    address.localScale = Vector3.one;
                    address.GetComponent<AddressPanelAddressBarController> ().parentScrollRect = defaultScrollRect;
                    if (address.GetComponent<AddressPanelAddressBarController>()._isDefault) {
                        address.SetAsFirstSibling ();
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

    private void ReloadModifyAddreessPanel () {


    }

    public void OnCloseButtonClicked () {
        AppDataController.instance.SyncAddressList ();
    }
    #endregion



    #region ModifyAddress
    public void OnAddAddressButtonClicked () {
        SwitchModifyAddressPanel (true, null);
    }

    public void SwitchModifyAddressPanel (bool state, AddressPanelAddressBarController bar = null) {
        modifyAddressPanel.gameObject.SetActive (state);
        currentBar = null;

        if (state && bar != null) {
            currentBar = bar;
            modifyAddressPanel.Find ("Name/InputField").GetComponent<InputField> ().text = currentBar._name;
            modifyAddressPanel.Find ("ContactNumber/InputField").GetComponent<InputField> ().text = currentBar._phone;
            modifyAddressPanel.Find ("Unit/InputField").GetComponent<InputField> ().text = currentBar._address;
            modifyAddressPanel.Find ("Street/InputField").GetComponent<InputField> ().text = currentBar._street;
            modifyAddressPanel.Find ("City/InputField").GetComponent<InputField> ().text = currentBar._city;
            modifyAddressPanel.Find ("State/InputField").GetComponent<InputField> ().text = currentBar._state;
            modifyAddressPanel.Find ("Postal/InputField").GetComponent<InputField> ().text = currentBar._zipCode;
        } else {
            modifyAddressPanel.Find ("Name/InputField").GetComponent<InputField> ().text = "";
            modifyAddressPanel.Find ("ContactNumber/InputField").GetComponent<InputField> ().text = "";
            modifyAddressPanel.Find ("Unit/InputField").GetComponent<InputField> ().text = "";
            modifyAddressPanel.Find ("Street/InputField").GetComponent<InputField> ().text = "";
            modifyAddressPanel.Find ("City/InputField").GetComponent<InputField> ().text = "";
            modifyAddressPanel.Find ("State/InputField").GetComponent<InputField> ().text = "";
            modifyAddressPanel.Find ("Postal/InputField").GetComponent<InputField> ().text = "";
        }
    }
    
    public void OnSaveModifyAddressButtonClicked () {
        if (ValidateModifyAddressPanel ()) {
            if (currentBar == null) {
                AddAddress (
                    modifyAddressPanel.Find ("Name/InputField").GetComponent<InputField> ().text,
                    modifyAddressPanel.Find ("ContactNumber/InputField").GetComponent<InputField> ().text,
                    modifyAddressPanel.Find ("Unit/InputField").GetComponent<InputField> ().text,
                    modifyAddressPanel.Find ("Street/InputField").GetComponent<InputField> ().text,
                    modifyAddressPanel.Find ("City/InputField").GetComponent<InputField> ().text,
                    modifyAddressPanel.Find ("State/InputField").GetComponent<InputField> ().text,
                    modifyAddressPanel.Find ("Postal/InputField").GetComponent<InputField> ().text,
                    new LDFWServerResponseEvent ((JSONObject data, string m) => {
                        SwitchModifyAddressPanel (false);
                        AppDataController.instance.SyncAddressList (() => {
                            AddressPanelController.instance.ResetPanel ();
                            AddressPanelController.instance.ReloadPanel ();
                        });
                    }),
                    null);
            } else {
                ModifyAddress (
                    currentBar._addressID,
                    modifyAddressPanel.Find ("Name/InputField").GetComponent<InputField> ().text,
                    modifyAddressPanel.Find ("ContactNumber/InputField").GetComponent<InputField> ().text,
                    modifyAddressPanel.Find ("Unit/InputField").GetComponent<InputField> ().text,
                    modifyAddressPanel.Find ("Street/InputField").GetComponent<InputField> ().text,
                    modifyAddressPanel.Find ("City/InputField").GetComponent<InputField> ().text,
                    modifyAddressPanel.Find ("State/InputField").GetComponent<InputField> ().text,
                    modifyAddressPanel.Find ("Postal/InputField").GetComponent<InputField> ().text,
                    new LDFWServerResponseEvent ((JSONObject data, string m) => {
                        SwitchModifyAddressPanel (false);
                        AppDataController.instance.SyncAddressList (() => {
                            AddressPanelController.instance.ResetPanel ();
                            AddressPanelController.instance.ReloadPanel ();
                        });
                    }),
                    null);
            }
        }
    }

    public bool ValidateModifyAddressPanel () {
        if (string.IsNullOrEmpty (modifyAddressPanel.Find ("Name/InputField").GetComponent<InputField>().text)) {
            MessagePanelController.instance.DisplayPanel ("Name cannot be null");
            return false;
        } else if (string.IsNullOrEmpty (modifyAddressPanel.Find ("ContactNumber/InputField").GetComponent<InputField> ().text)) {
            MessagePanelController.instance.DisplayPanel ("Phone number cannot be null");
            return false;
        } else if (string.IsNullOrEmpty (modifyAddressPanel.Find ("Street/InputField").GetComponent<InputField> ().text)) {
            MessagePanelController.instance.DisplayPanel ("Street cannot be null");
            return false;
        } else if (string.IsNullOrEmpty (modifyAddressPanel.Find ("City/InputField").GetComponent<InputField> ().text)) {
            MessagePanelController.instance.DisplayPanel ("City cannot be null");
            return false;
        } else if (string.IsNullOrEmpty (modifyAddressPanel.Find ("State/InputField").GetComponent<InputField> ().text)) {
            MessagePanelController.instance.DisplayPanel ("State cannot be null");
            return false;
        } else if (string.IsNullOrEmpty (modifyAddressPanel.Find ("Postal/InputField").GetComponent<InputField> ().text)) {
            MessagePanelController.instance.DisplayPanel ("Postal cannot be null");
            return false;
        } else {
            return true;
        }
    }


    #endregion



    #region ServerCalls
    public void GetAddressList (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        LoadingPanelController.instance.DisplayPanel ();
        UserDataNetworkController.instance.GetUserAddressList (success, failure);
    }

    public void SetDefaultAddress (string defaultAddressID, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        LoadingPanelController.instance.DisplayPanel ();
        WWWForm form = new WWWForm ();
        form.AddField ("address_id", defaultAddressID);
        UserDataNetworkController.instance.SetDefaultAddress (form, success, failure);
    }

    public void AddAddress (string name, string phone, string address, string street, string city, string state, string zipCode, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        LoadingPanelController.instance.DisplayPanel ();
        WWWForm form = new WWWForm ();
        form.AddField ("name", name);
        form.AddField ("phone", phone);
        form.AddField ("address", address);
        form.AddField ("street", street);
        form.AddField ("city", city);
        form.AddField ("state", state);
        form.AddField ("address_zip_code", zipCode);
        UserDataNetworkController.instance.AddUserAddress (form, success, failure);
    }

    public void DeleteAddress (string addressID, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        LoadingPanelController.instance.DisplayPanel ();
        WWWForm form = new WWWForm ();
        form.AddField ("address_id", addressID);
        UserDataNetworkController.instance.DeleteUserAddress (form, success, failure);
    }

    public void ModifyAddress (string id, string name, string phone, string address, string street, string city, string state, string zipCode, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        LoadingPanelController.instance.DisplayPanel ();
        WWWForm form = new WWWForm ();
        form.AddField ("address_id", id);
        form.AddField ("name", name);
        form.AddField ("phone", phone);
        form.AddField ("address", address);
        form.AddField ("street", street);
        form.AddField ("city", city);
        form.AddField ("state", state);
        form.AddField ("address_zip_code", zipCode);
        UserDataNetworkController.instance.ModifyUserAddress (form, success, failure);
    }
    #endregion
}