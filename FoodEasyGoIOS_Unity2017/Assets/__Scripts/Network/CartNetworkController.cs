using UnityEngine;
using System.Collections;

using LDFW.Network;

public class CartNetworkController : ServerCallController {

    public static CartNetworkController instance;
    public string cartControllerURL;
    public string accessControllerURL;

    protected void Awake () {
        if (instance != null) {
            Destroy (this);
            return;
        }

        instance = this;
        cartControllerURL = Config.serverAPIURL + "Cart/";
        accessControllerURL = Config.serverAPIURL + "Access/";
    }

    // Get Cart Details
    LDFWWWWCallCoroutineWrapper getCartDetailsCall = null;
    public void GetCartDetails (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getCartDetailsCall != null) {
            getCartDetailsCall.Dispose ();
        }
        getCartDetailsCall = CommonWWWCall (cartControllerURL + "get_cart_details", new WWWForm (), success, failure);
    }

    // Delete cart
    LDFWWWWCallCoroutineWrapper deleteCartCall = null;
    public void DeleteCart (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (deleteCartCall != null) {
            deleteCartCall.Dispose ();
        }
        deleteCartCall = CommonWWWCall (cartControllerURL + "delete_cart", form, success, failure);
    }

    // Delete cart good
    LDFWWWWCallCoroutineWrapper deleteCartGoodCall = null;
    public void DeleteCartGood (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (deleteCartGoodCall != null) {
            deleteCartGoodCall.Dispose ();
        }
        CommonWWWCall (cartControllerURL + "delete_cart_good", form, success, failure);
    }

    // Delete cart restaurant
    LDFWWWWCallCoroutineWrapper deleteCartRestaurantCall = null;
    public void DeleteCartRestaurant (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (deleteCartRestaurantCall != null) {
            deleteCartRestaurantCall.Dispose ();
        }
        CommonWWWCall (cartControllerURL + "delete_cart_restaurant", form, success, failure);
    }

    // Delete cart detail
    LDFWWWWCallCoroutineWrapper deleteCartDetailCall = null;
    public void DeleteCartDetail (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (deleteCartDetailCall != null) {
            deleteCartDetailCall.Dispose ();
        }
        CommonWWWCall (cartControllerURL + "delete_cart_detail", form, success, failure);
    }

    // Add to cart
    LDFWWWWCallCoroutineWrapper addToCartCall = null;
    public void AddToCart (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (addToCartCall != null) {
            addToCartCall.Dispose ();
        }
        CommonWWWCall (cartControllerURL + "add_to_cart", form, success, failure);
    }

    // Update cart detail
    LDFWWWWCallCoroutineWrapper updateCartDetailCall = null;
    public void UpdateCartDetail (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (updateCartDetailCall != null) {
            updateCartDetailCall.Dispose ();
        }
        CommonWWWCall (cartControllerURL + "update_cart_detail", form, success, failure);
    }

    // Get region delivery fee
    LDFWWWWCallCoroutineWrapper getRegionDeliveryFeeCall = null;
    public void GetRegionDeliveryFee (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getRegionDeliveryFeeCall != null) {
            getRegionDeliveryFeeCall.Dispose ();
        }
        getRegionDeliveryFeeCall = CommonWWWCall (accessControllerURL + "get_region_delivery_fees", new WWWForm (), success, failure);
    }
}
