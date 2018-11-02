﻿using UnityEngine;
using System.Collections;

using LDFW.Network;

public class UserDataNetworkController : ServerCallController {

    public static UserDataNetworkController instance;
    public string userDataControllerURL;
    public string userAddressControllerURL;
    public string userPaymentControllerURL;
    public string imageControllerURL;
    public string smsControllerURL;


    protected void Awake () {
        if (instance != null) {
            Destroy (this);
            return;
        }

        instance = this;
        userDataControllerURL = Config.serverAPIURL + "User/";
        userAddressControllerURL = Config.serverAPIURL + "UserAddress/";
        userPaymentControllerURL = Config.serverAPIURL + "UserPayment/";
        imageControllerURL = Config.serverAPIURL + "Image/";
        smsControllerURL = Config.serverAPIURL + "SMS/";
    }



    // Update personal data
    LDFWWWWCallCoroutineWrapper updatePersonalDataCall = null;
    public void UpdatePersonalData (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (updatePersonalDataCall != null) {
            updatePersonalDataCall.Dispose ();
        }
        updatePersonalDataCall = CommonWWWCall (userDataControllerURL + "update_user_details", form, success, failure);
    }


    #region UserAddress
    LDFWWWWCallCoroutineWrapper userAddressCall = null;
    public void GetUserAddressList (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (userAddressCall != null) {
            userAddressCall.Dispose ();
        }
        userAddressCall = CommonWWWCall (userAddressControllerURL + "get_user_address_list", new WWWForm (), success, failure);
    }
    public void SetDefaultAddress (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (userAddressCall != null) {
            userAddressCall.Dispose ();
        }
        userAddressCall = CommonWWWCall (userAddressControllerURL + "set_default_user_address", form, success, failure);
    }
    public void AddUserAddress (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (userAddressCall != null) {
            userAddressCall.Dispose ();
        }
        userAddressCall = CommonWWWCall (userAddressControllerURL + "add_user_address", form, success, failure);
    }
    public void DeleteUserAddress (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (userAddressCall != null) {
            userAddressCall.Dispose ();
        }
        userAddressCall = CommonWWWCall (userAddressControllerURL + "delete_user_address", form, success, failure);
    }
    public void ModifyUserAddress (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (userAddressCall != null) {
            userAddressCall.Dispose ();
        }
        userAddressCall = CommonWWWCall (userAddressControllerURL + "modify_user_address", form, success, failure);
    }
    public void SetPhoneNumberVerified(WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure){
        if (userAddressCall != null)
        {
            userAddressCall.Dispose();
        }
        userAddressCall = CommonWWWCall(userAddressControllerURL + "set_phone_verification", form, success, failure);
    }
    public void SetPhoneNumberUnverified(WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (userAddressCall != null)
        {
            userAddressCall.Dispose();
        }
        userAddressCall = CommonWWWCall(userAddressControllerURL + "set_phone_unverification", form, success, failure);
    }
    public void GetVerificationInfo(WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (sendCodeCall != null)
        {
            sendCodeCall.Dispose();
        }
        sendCodeCall = CommonWWWCall(userAddressControllerURL + "get_phone_verification", form, success, failure);
    }
    #endregion


    #region SendVerifiationCode
    LDFWWWWCallCoroutineWrapper sendCodeCall = null;
    public void SendVerificationCode(WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if(sendCodeCall != null){
            sendCodeCall.Dispose();
        }
        CommonWWWCall(smsControllerURL + "generateCode", form, success, failure);
    }

    public void CheckVerificationCode(WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (sendCodeCall != null)
        {
            sendCodeCall.Dispose();
        }
        sendCodeCall = CommonWWWCall(smsControllerURL + "checkCode", form, success, failure);
    }

    #endregion


    #region UserPayment
    LDFWWWWCallCoroutineWrapper userPaymentCall = null;
    public void GetUserPaymentList (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (userPaymentCall != null) {
            userPaymentCall.Dispose ();
        }
        userPaymentCall = CommonWWWCall (userPaymentControllerURL + "get_user_payment_list", new WWWForm (), success, failure);
    }
    public void SetDefaultPayment (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (userPaymentCall != null) {
            userPaymentCall.Dispose ();
        }
        userPaymentCall = CommonWWWCall (userPaymentControllerURL + "set_default_user_payment", form, success, failure);
    }
    public void AddUserPayment (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (userPaymentCall != null) {
            userPaymentCall.Dispose ();
        }
        userPaymentCall = CommonWWWCall (userPaymentControllerURL + "add_user_payment", form, success, failure);
    }
    public void DeleteUserPayment (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (userPaymentCall != null) {
            userPaymentCall.Dispose ();
        }
        userPaymentCall = CommonWWWCall (userPaymentControllerURL + "delete_user_payment", form, success, failure);
    }
    public void ModifyUserPayment (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (userPaymentCall != null) {
            userPaymentCall.Dispose ();
        }
        userPaymentCall = CommonWWWCall (userPaymentControllerURL + "modify_user_payment", form, success, failure);
    }

    #endregion


    #region Coupon
    LDFWWWWCallCoroutineWrapper couponCall = null;
    public void GetUserCouponList (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (couponCall != null) {
            couponCall.Dispose ();
        }
        couponCall = CommonWWWCall (userDataControllerURL + "get_coupon_list", new WWWForm (), success, failure);
    }

    #endregion


    #region Invitations
    LDFWWWWCallCoroutineWrapper invitationCall = null;
    public void GetUserInviteList (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (invitationCall != null) {
            invitationCall.Dispose ();
        }
        invitationCall = CommonWWWCall (userDataControllerURL + "get_user_invite_list", new WWWForm (), success, failure);
    }


    #endregion


    #region Others
    LDFWWWWCallCoroutineWrapper leaveMessageCall = null;
    public void LeaveMessage (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (leaveMessageCall != null) {
            leaveMessageCall.Dispose ();
        }
        leaveMessageCall = CommonWWWCall (userDataControllerURL + "leave_message", form, success, failure);
    }

    //save_help
    LDFWWWWCallCoroutineWrapper saveHelpCall = null;
    public void SaveHelp(WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (saveHelpCall != null)
        {
            saveHelpCall.Dispose();
        }
        saveHelpCall = CommonWWWCall(userDataControllerURL + "save_help", form, success, failure);
    }

    //send_help_email
    LDFWWWWCallCoroutineWrapper sendEmail = null;
    public void SendEmail(WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (sendEmail != null)
        {
            sendEmail.Dispose();
        }
        sendEmail = CommonWWWCall(userDataControllerURL + "send_help_email", form, success, failure);
    }


    LDFWWWWCallCoroutineWrapper updateUserIOSTokenCall = null;
    public void UpdateUserIOSToken (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (updateUserIOSTokenCall != null)
        {
            updateUserIOSTokenCall.Dispose ();
        }
        updateUserIOSTokenCall = CommonWWWCall (userDataControllerURL + "update_user_ios_token", form, success, failure);
    }

    LDFWWWWCallCoroutineWrapper uploadUserImageCall = null;
    public void UploadUserImage(WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (uploadUserImageCall != null)
        {
            uploadUserImageCall.Dispose ();
        }
        uploadUserImageCall = CommonWWWCall (userDataControllerURL + "upload_user_image", form, success, failure);
    }

    LDFWWWWCallCoroutineWrapper downloadUserImageCall = null;
    public void DownloadUserImage(WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (downloadUserImageCall != null)
            downloadUserImageCall.Dispose ();

        downloadUserImageCall = CommonWWWCall (imageControllerURL + "get_image", form, success, failure);
    }
    #endregion

    #region Test     LDFWWWWCallCoroutineWrapper testCall = null;
    public void SaveTestString(string text, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        WWWForm form = new WWWForm();
        form.AddField("out_put", text);

        if (testCall != null)
        {
            testCall.Dispose();
        }
        testCall = CommonWWWCall(userDataControllerURL + "save_test_string", form, success, failure);
    }


    #endregion
}
