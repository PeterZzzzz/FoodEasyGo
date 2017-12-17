using UnityEngine;
using System.Collections;

using LDFW.Network;

public class GroceryNetworkController : ServerCallController {

    public static GroceryNetworkController instance;
    public string groceryControllerURL;

    protected void Awake () {
        if (instance != null) {
            Destroy (this);
            return;
        }

        instance = this;
        groceryControllerURL = Config.serverAPIURL + "Grocery/";
    }

    // Get Grocery Recommended List
    LDFWWWWCallCoroutineWrapper getGroceryRecommendedListCall = null;
    public void GetGroceryRecommendedList (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getGroceryRecommendedListCall != null) {
            getGroceryRecommendedListCall.Dispose ();
        }
        getGroceryRecommendedListCall = CommonWWWCall (groceryControllerURL + "get_recommended_list", new WWWForm (), success, failure);
    }

    // Get Grocery Categories
    LDFWWWWCallCoroutineWrapper getGroceryCategoryListCall = null;
    public void GetGroceryCategoryList (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getGroceryCategoryListCall != null) {
            getGroceryCategoryListCall.Dispose ();
        }
        getGroceryCategoryListCall = CommonWWWCall (groceryControllerURL + "get_grocery_type", new WWWForm (), success, failure);
    }

    // Get Grocery List
    LDFWWWWCallCoroutineWrapper getGroceryListCall = null;
    public void GetGroceryList (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getGroceryListCall != null) {
            getGroceryListCall.Dispose ();
        }
        getGroceryListCall = CommonWWWCall (groceryControllerURL + "get_grocery_list", form, success, failure);
    }

    // Get Grocery Details
    LDFWWWWCallCoroutineWrapper getGroceryDetailsCall = null;
    public void GetGroceryDetails (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getGroceryDetailsCall != null) {
            getGroceryDetailsCall.Dispose ();
        }
        getGroceryDetailsCall = CommonWWWCall (groceryControllerURL + "get_grocery_details", form, success, failure);
    }

}
