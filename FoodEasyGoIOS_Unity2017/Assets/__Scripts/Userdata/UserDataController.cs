using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class UserDataController : MonoBehaviour {

    public static UserDataController instance;

    public string accessToken;

    public string regionID;
    public string zipCode;
    public string targetServiceRegionID;
    public string targetServiceRegionZipCode;
    public string targetServiceRegionNameZH;
    public string targetServiceRegionNameEN;

    //public string avatarURL;
    //public Texture2D avatarTexture;
    public string userID;
    public string email;
    public string password;

    public string firstName;
    public string lastName;
    public string sex;
    public string phone;
    public string language;
    public string registerTime;
    public string invitationCode;
    public string inviteCouponUsed;
    public string inviterID;
    public string hasMadeFirstOrder;
    public string status;
    //public string deliveryFee;
    public string iosToken;

    public string googleMapKey;

    //public Dictionary<string, float> regionDeliveryFeeDic;




    void Awake () {
        if (instance != null) {
            Destroy (this);
            return;
        }
        
        instance = this;

        accessToken = "";
    }

    public void OnUserLoggedIn (JSONObject data, string e = "", string p = "") {
        if (e != "") {
            email = e;
        } else {
            email = data.GetField ("user_data").GetField ("email").str;
        }

        if (p != "") {
            password = p;
        }
        
        userID = data.GetField ("user_data").GetField ("id").str;
        accessToken = data.GetField ("token").str;

        firstName = data.GetField ("user_data").GetField ("first_name").str;
        lastName = data.GetField ("user_data").GetField ("last_name").str;
        sex = data.GetField ("user_data").GetField ("sex").str;
        phone = data.GetField ("user_data").GetField ("phone").str;
        language = data.GetField ("user_data").GetField ("language").str;
        registerTime = data.GetField ("user_data").GetField ("register_time").str;
        invitationCode = data.GetField ("user_data").GetField ("invitation_code").str;
        inviteCouponUsed = data.GetField ("user_data").GetField ("invite_coupon_used").str;
        inviterID = data.GetField ("user_data").GetField ("inviter_id").str;
        hasMadeFirstOrder = data.GetField ("user_data").GetField ("has_made_first_order").str;
        status = data.GetField ("user_data").GetField ("status").str;
        iosToken = data.GetField ("user_data").GetField ("ios_token").str;

        googleMapKey = data.GetField ("google_map_key").str;

        //CartController.instance.GetCartDetails ();
    }
}
