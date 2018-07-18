using UnityEngine;
using System.Collections;

using LDFW.Network;

public class RestaurantNetworkController : ServerCallController
{

    public static RestaurantNetworkController instance;
    public string restaurantControllerURL;

    protected void Awake ()
    {
        if (instance != null)
        {
            Destroy (this);
            return;
        }

        instance = this;
        restaurantControllerURL = Config.serverAPIURL + "Restaurant/";
    }

    // Get Restaurant Recommended List
    LDFWWWWCallCoroutineWrapper getRestaurantRecommendedListCall = null;
    public void GetRestaurantRecommendedList (LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (getRestaurantRecommendedListCall != null)
            getRestaurantRecommendedListCall.Dispose ();

        getRestaurantRecommendedListCall = CommonWWWCall (restaurantControllerURL + "get_recommended_list", new WWWForm (), success, failure);
    }

    // Get Restaurant Category List
    LDFWWWWCallCoroutineWrapper getRestaurantCategoryListCall = null;
    public void GetRestaurantCategoryList (LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (getRestaurantCategoryListCall != null)
            getRestaurantCategoryListCall.Dispose ();

        getRestaurantCategoryListCall = CommonWWWCall (restaurantControllerURL + "get_restaurant_type", new WWWForm (), success, failure);
    }

    // Get Restaurant List
    LDFWWWWCallCoroutineWrapper getRestaurantListCall = null;
    public void GetRestaurantList (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (getRestaurantListCall != null)
            getRestaurantListCall.Dispose ();

        getRestaurantListCall = CommonWWWCall (restaurantControllerURL + "get_restaurant_list", form, success, failure);
    }

    //// Get Restaurant List Reserve
    //LDFWWWWCallCoroutineWrapper getRestaurantReserveListCall = null;
    //public void GetRestaurantReserveList (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    //{
    //    if (getRestaurantReserveListCall != null)
    //        getRestaurantReserveListCall.Dispose ();

    //    getRestaurantReserveListCall = CommonWWWCall (restaurantControllerURL + "get_restaurant_reserve_list", form, success, failure);
    //}

    // Get Target Restaurant List
    LDFWWWWCallCoroutineWrapper getTargetRestaurantListCall = null;
    public void GetTargetRestaurantList (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (getTargetRestaurantListCall != null)
            getTargetRestaurantListCall.Dispose ();

        getTargetRestaurantListCall = CommonWWWCall (restaurantControllerURL + "get_target_restaurant_list", form, success, failure);
    }

    // Get Restaurant Detail
    LDFWWWWCallCoroutineWrapper getRestaurantDetailCall = null;
    public void GetRestaurantDetail (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (getRestaurantListCall != null)
            getRestaurantListCall.Dispose ();

        getRestaurantListCall = CommonWWWCall (restaurantControllerURL + "get_restaurant_details", form, success, failure);
    }

    // Get Restaurant Comment
    LDFWWWWCallCoroutineWrapper getRestaurantCommentCall = null;
    public void GetRestaurantComment (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (getRestaurantCommentCall != null)
            getRestaurantCommentCall.Dispose ();

        getRestaurantCommentCall = CommonWWWCall (restaurantControllerURL + "get_restaurant_comment", form, success, failure);
    }

    // Post Restaurant Comment
    LDFWWWWCallCoroutineWrapper postRestaurantCommentCall = null;
    public void PostRestaurantComment (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (postRestaurantCommentCall != null)
            postRestaurantCommentCall.Dispose ();

        postRestaurantCommentCall = CommonWWWCall (restaurantControllerURL + "post_restaurant_comment", form, success, failure);
    }

    // Get Restaurant Dish Details
    LDFWWWWCallCoroutineWrapper getRestaurantDishDetail = null;
    public void GetRestaurantDishDetail (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (getRestaurantDishDetail != null)
            getRestaurantDishDetail.Dispose ();

        getRestaurantDishDetail = CommonWWWCall (restaurantControllerURL + "get_dish_details", form, success, failure);
    }

    // Get restaurant list fees
    /*
    LDFWWWWCallCoroutineWrapper getRestaurantListFeesCall = null;
    public void GetRestaurantListFees (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        Debug.Log ("GetRestaurantListFees");
        if (getRestaurantListFeesCall != null)
            getRestaurantListFeesCall.Dispose ();

        getRestaurantListFeesCall = CommonWWWCall (restaurantControllerURL + "get_restaurant_list_fees", form, success, failure);
    }
    */

    // Get restaurant list deliver fees
    LDFWWWWCallCoroutineWrapper getRestaurantListDeliverFeesCall = null;
    public void GetRestaurantListDeliverFees (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (getRestaurantListDeliverFeesCall != null)
            getRestaurantListDeliverFeesCall.Dispose ();

        getRestaurantListDeliverFeesCall = CommonWWWCall (restaurantControllerURL + "get_restaurant_list_delivery_fees", form, success, failure);
    }
}
