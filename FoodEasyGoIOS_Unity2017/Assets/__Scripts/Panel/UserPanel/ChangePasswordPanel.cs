﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.Network;

public class ChangePasswordPanel : BasePanelController {

    public static ChangePasswordPanel           instance;

    public InputField oldP;
    public InputField newP;
    public InputField reP;
    public Button submitButton;



    new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();
    }

    public override void ResetPanel () {
    }
    public override void ReloadPanel () {
        oldP.text = "";
        newP.text = "";
        reP.text = "";
        submitButton.interactable = false;
    }


    public void OnSaveButtonClicked () {
        if (newP.text != reP.text) {
            MessagePanelController.instance.DisplayPanel ("Passwords do not match");
        } else if (string.IsNullOrEmpty (oldP.text) ||
            string.IsNullOrEmpty (newP.text) ||
            string.IsNullOrEmpty (reP.text)) {
            MessagePanelController.instance.DisplayPanel ("Password cannot be empty");
        }
            

        LoadingPanelController.instance.DisplayPanel ();
        AccountAccessNetworkController.instance.PasswordResetNewPassword (
            oldP.text, newP.text, reP.text, new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                UserDataController.instance.password = newP.text;
                AccountAccessNetworkController.instance.BackgroundUserLogin ();
                PanelListController.instance.RemovePanel ();
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                MessagePanelController.instance.DisplayPanel (m);
            }));
    }

    public void CheckForInputs () {
        if (string.IsNullOrEmpty (oldP.text) || 
            string.IsNullOrEmpty (newP.text) ||
            string.IsNullOrEmpty (reP.text) ||
            newP.text != reP.text) {

            submitButton.interactable = false;
        } else {
            submitButton.interactable = true;
        }
    }
}