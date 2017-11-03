using UnityEngine;
using System.Collections;
using System;

using LDFW.Network;

public class AccountAccessNetworkController : ServerCallController {

    public static AccountAccessNetworkController instance;
    
    private TimeSpan                                    lastAccessTokenGrantedTime;
    private float                                       accessTokenRefreshTime = 60 * 60;
    private float                                       accessTokenRefreshTimeCountdown;

    
    protected void Awake () {
        if (instance != null) {
            Destroy (this.gameObject);
            return;
        }

        instance = this;
        accessTokenRefreshTime = 60f * 60f;
        accessTokenRefreshTimeCountdown = accessTokenRefreshTime;
    }

    protected new void Update () {
        base.Update ();
        if (accessTokenRefreshTimeCountdown < 0f) {

            // if BackgroundUserLogin() wasn't successful, try again in 30 seconds
            accessTokenRefreshTimeCountdown = 30f;

            BackgroundUserLogin ();
        }

        accessTokenRefreshTimeCountdown -= Time.deltaTime;
    }

    public void BackgroundUserLogin () {
        WWWForm form = new WWWForm ();
        form.AddField ("email", UserDataController.instance.email);
        form.AddField ("password", UserDataController.instance.password);

        CommonWWWCall (new WWW (Config.accessControllerURL + "login", form),
            new LDFWServerResponseEvent ((JSONObject json, string m) => {
                UserDataController.instance.OnUserLoggedIn (json);
                accessTokenRefreshTimeCountdown = accessTokenRefreshTime;
            }),
            new LDFWServerResponseEvent ((JSONObject json, string m) => {
                BackgroundUserLogin ();
            }));
    }

    public void UserLogin (string email, string password, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        
        WWWForm form = new WWWForm ();
        form.AddField ("email", email);
        form.AddField ("password", password);

        success.AddListener ((JSONObject json, string m) => {
            UserDataController.instance.OnUserLoggedIn (json, email, password);
            accessTokenRefreshTimeCountdown = accessTokenRefreshTime;
        });

        CommonWWWCall (Config.accessControllerURL + "login", form, success, failure);
    }

    public void ThirdPartyLogin (string userid, string platform, string email, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        WWWForm form = new WWWForm ();
        form.AddField ("user_third_party", 1);
        form.AddField ("userid", userid);
        form.AddField ("platform", platform);
        form.AddField ("email", email);

        CommonWWWCall (Config.accessControllerURL + "login", form, success, failure);
    }

    public void UserRegister (string email, string password, string repassword, string invitationCode, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {

        WWWForm form = new WWWForm ();
        form.AddField ("email", email);
        form.AddField ("password", password);
        form.AddField ("repassword", repassword);
        form.AddField ("invite_code", invitationCode);

        CommonWWWCall (Config.accessControllerURL + "register", form, success, failure);
    }

    public void ValidateZipCode (string zipcode, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {

        WWWForm form = new WWWForm ();
        form.AddField ("zip", zipcode);

        CommonWWWCall (Config.serverAPIURL + "Access/validate_zipcode", form, success, failure);
    }

    public void GetAvailableRegionList (string zipcode, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {

        WWWForm form = new WWWForm ();

        CommonWWWCall (Config.serverAPIURL + "Access/get_available_regions", form, success, failure);
    }

    public void PasswordReset (string email, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        WWWForm form = new WWWForm ();
        form.AddField ("email", email);

        CommonWWWCall (Config.accessControllerURL + "password_reset", form, success, failure);
    }
    
    public void PasswordResetNewPassword (string oldPassword, string newPassword, string repassword, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        WWWForm form = new WWWForm ();
        form.AddField ("email", UserDataController.instance.email);
        form.AddField ("old_password", oldPassword);
        form.AddField ("new_password", newPassword);
        form.AddField ("new_repassword", repassword);

        CommonWWWCall (Config.serverAPIURL + "Access/password_reset_new_password", form, success, failure);
    }
}
