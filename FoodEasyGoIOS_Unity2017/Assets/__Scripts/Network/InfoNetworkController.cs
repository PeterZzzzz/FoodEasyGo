using UnityEngine;
using System.Collections;

using LDFW.Network;

public class InfoNetworkController : ServerCallController {

    public static InfoNetworkController instance;
    public string infoControllerURL;
    public string searchURL;

    protected void Awake () {
        if (instance != null) {
            Destroy (this);
            return;
        }

        instance = this;
        infoControllerURL = Config.serverAPIURL + "Info/";
        searchURL = Config.serverAPIURL + "Search/";
    }

    // Get business cooperation
    LDFWWWWCallCoroutineWrapper getBusinessCooperationCall = null;
    public void GetBusinessCooperation (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getBusinessCooperationCall != null) {
            getBusinessCooperationCall.Dispose ();
        }
        getBusinessCooperationCall = CommonWWWCall (infoControllerURL + "get_business_cooperation", new WWWForm (), success, failure);
    }

    // Get business cooperation
    LDFWWWWCallCoroutineWrapper getRecruitCall = null;
    public void GetRecruit (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getRecruitCall != null) {
            getRecruitCall.Dispose ();
        }
        getRecruitCall = CommonWWWCall (infoControllerURL + "get_recruit", new WWWForm (), success, failure);
    }

    // Get contact info
    LDFWWWWCallCoroutineWrapper getContactInfoCall = null;
    public void GetContactInfo (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getContactInfoCall != null) {
            getContactInfoCall.Dispose ();
        }
        getContactInfoCall = CommonWWWCall (infoControllerURL + "get_contact_info", new WWWForm (), success, failure);
    }

    // Get FAQ
    LDFWWWWCallCoroutineWrapper getFAQCall = null;
    public void GetFAQ (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getFAQCall != null) {
            getFAQCall.Dispose ();
        }
        getFAQCall = CommonWWWCall (infoControllerURL + "get_faq", new WWWForm (), success, failure);
    }

    // Get refund policy
    LDFWWWWCallCoroutineWrapper getRefundPolicyCall = null;
    public void GetRefundPolicy (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getRefundPolicyCall != null) {
            getRefundPolicyCall.Dispose ();
        }
        getRefundPolicyCall = CommonWWWCall (infoControllerURL + "get_refund_policy", new WWWForm (), success, failure);
    }

    // Get privacy policy
    LDFWWWWCallCoroutineWrapper getPrivacyPolicyCall = null;
    public void GetPrivacyPolicy (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getPrivacyPolicyCall != null) {
            getPrivacyPolicyCall.Dispose ();
        }
        getPrivacyPolicyCall = CommonWWWCall (infoControllerURL + "get_privacy_policy", new WWWForm (), success, failure);
    }

    // Get images
    LDFWWWWCallCoroutineWrapper getImagesCall = null;
    public void GetImages (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getImagesCall != null) {
            getImagesCall.Dispose ();
        }
        getImagesCall = CommonWWWCall (infoControllerURL + "get_images", new WWWForm (), success, failure);
    }

    // Get business cooperation
    LDFWWWWCallCoroutineWrapper getProductCategoryCall = null;
    public void GetProductCategory (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getProductCategoryCall != null) {
            getProductCategoryCall.Dispose ();
        }
        getProductCategoryCall = CommonWWWCall (infoControllerURL + "get_product_category", new WWWForm (), success, failure);
    }

    // Get food reserve config
    LDFWWWWCallCoroutineWrapper getReserveCOnfigCall = null;
    public void GetFoodReserveConfig (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getReserveCOnfigCall != null) {
            getReserveCOnfigCall.Dispose ();
        }
        getReserveCOnfigCall = CommonWWWCall (infoControllerURL + "get_food_reserve_config", new WWWForm (), success, failure);
    }

    // Get google map zip code
    LDFWWWWCallCoroutineWrapper getGoogleMapZipCode = null;
    public void GetGoogleMapZipCode (string lat, string lng, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getGoogleMapZipCode != null) {
            getGoogleMapZipCode.Dispose ();
        }
        getGoogleMapZipCode = CommonWWWCall ("https://maps.googleapis.com/maps/api/geocode/json?latlng=" + lat + "," + lng + "&key=" + UserDataController.instance.googleMapKey, new WWWForm (), success, failure);
    }

    // Get serach result
    LDFWWWWCallCoroutineWrapper getSearchResult = null;
    public void GetSearchResult (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getSearchResult != null) {
            getSearchResult.Dispose ();
        }
        getSearchResult = CommonWWWCall (searchURL + "search", form, success, failure);
    }
}
