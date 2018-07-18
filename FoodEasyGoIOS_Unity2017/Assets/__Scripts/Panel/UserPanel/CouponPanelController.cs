using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.Network;

public class CouponPanelController : BasePanelController {

    public static CouponPanelController instance;
    public ScrollRect defaultScrollRect;

    public GameObject discountCouponPrefab;
    public GameObject freeDeliveryCouponPrefab;



    new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();


    }



    #region Overrides
    public override void ResetPanel () {
        defaultScrollRect.content.DestroyAllChildren ();
    }

    public override void ReloadPanel () {

        LoadingPanelController.instance.DisplayPanel ();
        UserDataNetworkController.instance.GetUserCouponList (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                if (data != null && data.Count > 0) {
                    JSONObject normalCoupon = data.GetField ("normal_coupon");
                    if (normalCoupon != null && normalCoupon.Count > 0) {
                        for (int i = 0; normalCoupon[i] != null; i++) {
                            if (normalCoupon[i].GetField ("type").str == "1") {
                                Transform currentCoupon = Instantiate (discountCouponPrefab).transform;
                                currentCoupon.SetParent (defaultScrollRect.content);
                                currentCoupon.localScale = Vector3.one;

                                currentCoupon.Find ("Panel/Title").GetComponent<TextController> ().ResetUI (
                                    float.Parse (normalCoupon[i].GetField ("discont").str) + " 折优惠\n" + 
                                    "(" + normalCoupon[i].GetField("used_times").str + "/" + normalCoupon[i].GetField("usable_times").str + ")",

                                    (100f - float.Parse (normalCoupon[i].GetField ("discont").str) * 10) + "% OFF\n" + 
                                    "(" + normalCoupon[i].GetField("used_times").str + "/" + normalCoupon[i].GetField("usable_times").str + ")");


                                currentCoupon.Find ("Panel/Code").GetComponent<TextController> ().ResetUI (
                                    normalCoupon[i].GetField ("sn").str);
                                currentCoupon.Find ("Panel/Date").GetComponent<TextController> ().ResetUI (
                                    "有效期至: " + normalCoupon[i].GetField ("endtime").str,
                                    "Expiry Date: " + normalCoupon[i].GetField ("endtime").str);

                            } else if (normalCoupon[i].GetField ("type").str == "2") {
                                Transform currentCoupon = Instantiate (freeDeliveryCouponPrefab).transform;
                                currentCoupon.SetParent (defaultScrollRect.content);
                                currentCoupon.localScale = Vector3.one;

                                currentCoupon.Find ("Panel/Title").GetComponent<TextController> ().ResetUI (
                                    "免费配送\n" + 
                                    "(" + normalCoupon[i].GetField("used_times").str + "/" + normalCoupon[i].GetField("usable_times").str + ")",

                                    "Free Delivery\n" + 
                                    "(" + normalCoupon[i].GetField("used_times").str + "/" + normalCoupon[i].GetField("usable_times").str + ")");
                                    
                                currentCoupon.Find ("Panel/Code").GetComponent<TextController> ().ResetUI (
                                    normalCoupon[i].GetField ("sn").str);
                                currentCoupon.Find ("Panel/Date").GetComponent<TextController> ().ResetUI (
                                    "有效期至: " + normalCoupon[i].GetField ("endtime").str,
                                    "Expiry Date: " + normalCoupon[i].GetField ("endtime").str);
                            }
                        }
                    }

                }
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
            }));
    }
    #endregion


}
