using UnityEngine;
using System.Collections;

using LDFW.Network;

public class GrouponNetworkController : ServerCallController {

    public static GrouponNetworkController instance;
    public string groceryControllerURL;

    protected void Awake () {
        if (instance != null) {
            Destroy (this);
            return;
        }

        instance = this;
        groceryControllerURL = Config.serverAPIURL + "Groupon/";
    }

    // Get groupon recommended list
    LDFWWWWCallCoroutineWrapper getGrouponRecommendedListCall = null;
    public void GetGrouponRecommendedList (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getGrouponRecommendedListCall != null) {
            getGrouponRecommendedListCall.Dispose ();
        }
        getGrouponRecommendedListCall = CommonWWWCall (groceryControllerURL + "get_recommended_list", new WWWForm (), success, failure);
    }

    // Get groupon recommended list
    LDFWWWWCallCoroutineWrapper getGrouponListCall = null;
    public void GetGrouponList (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getGrouponListCall != null) {
            getGrouponListCall.Dispose ();
        }
        getGrouponListCall = CommonWWWCall (groceryControllerURL + "get_groupon_list", new WWWForm (), success, failure);
    }

    // Get groupon details
    LDFWWWWCallCoroutineWrapper getGrouponDetailCall = null;
    public void GetGrouponDetail (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getGrouponDetailCall != null) {
            getGrouponDetailCall.Dispose ();
        }
        getGrouponDetailCall = CommonWWWCall (groceryControllerURL + "get_groupon_details", form, success, failure);
    }

    
}
