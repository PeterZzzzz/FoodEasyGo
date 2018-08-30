using UnityEngine;
using System.Collections;

using LDFW.Network;

public class OrderNetworkController : ServerCallController {

    public static OrderNetworkController instance;
    public string orderControllerURL;
    public string stripePaymentURL;

    protected void Awake () {
        if (instance != null) {
            Destroy (this);
            return;
        }

        instance = this;
        orderControllerURL = Config.serverAPIURL + "Order/";
        stripePaymentURL = Config.serverAPIURL + "StripePayment/";
    }



    // Get order list
    LDFWWWWCallCoroutineWrapper getOrderListCall = null;
    public void GetOrderList (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getOrderListCall != null) {
            getOrderListCall.Dispose ();
        }
        getOrderListCall = CommonWWWCall (orderControllerURL + "get_order_list", new WWWForm (), success, failure);
    }

    // Submit restaurant grade
    LDFWWWWCallCoroutineWrapper submitRestaurantGradeCall = null;
    public void SubmitRestaurantGrade (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (submitRestaurantGradeCall != null) {
            submitRestaurantGradeCall.Dispose ();
        }
        submitRestaurantGradeCall = CommonWWWCall (orderControllerURL + "submit_restaurant_grade", form, success, failure);
    }

    // Submit driver grade
    LDFWWWWCallCoroutineWrapper submitDriverGradeCall = null;
    public void SubmitDriverGrade (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (submitDriverGradeCall != null) {
            submitDriverGradeCall.Dispose ();
        }
        submitDriverGradeCall = CommonWWWCall (orderControllerURL + "submit_delivery_driver_grade", form, success, failure);
    }
    
    // Submit order
    LDFWWWWCallCoroutineWrapper submitOrderCall = null;
    public void SubmitOrder (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (submitOrderCall != null) {
            submitOrderCall.Dispose ();
        }
        submitOrderCall = CommonWWWCall (orderControllerURL + "submit_order", form, success, failure);
    }

    // Confirm order
    LDFWWWWCallCoroutineWrapper confirmOrderCall = null;
    public void ConfirmOrder (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (confirmOrderCall != null) {
            confirmOrderCall.Dispose ();
        }
        confirmOrderCall = CommonWWWCall (orderControllerURL + "confirm_order", form, success, failure);
    }

    // Get order status
    LDFWWWWCallCoroutineWrapper getOrderStatusCall = null;
    public void GetOrderStatus (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (confirmOrderCall != null) {
            confirmOrderCall.Dispose ();
        }
        confirmOrderCall = CommonWWWCall (stripePaymentURL + "get_order_status", form, success, failure);
    }

    // Submit comment
    LDFWWWWCallCoroutineWrapper submitCommentCall = null;
    public void SubmitComment (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (submitCommentCall != null) {
            submitCommentCall.Dispose ();
        }
        submitCommentCall = CommonWWWCall (orderControllerURL + "submit_restaurant_driver_grade", form, success, failure);
    }

    // Get coupon status
    LDFWWWWCallCoroutineWrapper getCouponStatusCall = null;
    public void ApplyCoupon (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getCouponStatusCall != null) {
            getCouponStatusCall.Dispose ();
        }
        getCouponStatusCall = CommonWWWCall (orderControllerURL + "apply_coupon_sn", form, success, failure);
    }

    // Save restaurant notification
    LDFWWWWCallCoroutineWrapper saveRestaurantNotificationCall = null;
    public void SaveRestaurantNotification(WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (saveRestaurantNotificationCall != null) {
            saveRestaurantNotificationCall.Dispose();
        }
        saveRestaurantNotificationCall = CommonWWWCall(orderControllerURL + "create_restaurant_notification", form, success, failure);
    }

    // Save change of membership point
    LDFWWWWCallCoroutineWrapper changeMembershipPointCall = null;
    public void ChangeMembershipPoint(WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        if (changeMembershipPointCall != null)
        {
            changeMembershipPointCall.Dispose();
        }
        changeMembershipPointCall = CommonWWWCall(orderControllerURL + "change_membership_point", form, success, failure);
    }
}
