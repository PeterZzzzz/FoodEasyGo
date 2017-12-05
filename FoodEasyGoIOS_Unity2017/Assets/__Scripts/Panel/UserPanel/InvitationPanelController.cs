﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;


using LDFW;
using LDFW.Network;
using Debug = UnityEngine.Debug;

public class InvitationPanelController : BasePanelController {

    public static InvitationPanelController instance;


    new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();
    }

    #region Overrides
    public override void ResetPanel () {
    }

    public override void ReloadPanel () {
        headerTitle.ResetUI ("邀请好友", "Invite Friends");
        transform.Find ("Content/Description").GetComponent<TextController> ().ResetUI (
            "将您的邀请码分享给好友，好友成功注册且下单后，您将获得免外送费优惠券一张。",
            "Share your invitation code with your friend, you'll get one free delivery coupon after your friend has made his/her first purchase");
        transform.Find ("Content/InvitationCode/Text").GetComponent<Text> ().text = UserDataController.instance.invitationCode;
    }
    #endregion


    public void OnInviteButtonClicked () {
        MainCanvasController.instance.ShareFoodEasyGo ("Come and download FoodEasyGo with invite code: " + UserDataController.instance.invitationCode);
        //MainCanvasController.instance.uniShare.ShareText = Config.currentLanguage == Language.chinese ? "快来下载好用的FoodEasyGO吧" : "Come and use this incredible app FoodEasyGO";
        //MainCanvasController.instance.uniShare.ShareScreenshot ();

    }

    public void OnMyInvitationsButtonClicked () {
        MyInvitationsPanelController.instance.OpenPanel ();
    }
}