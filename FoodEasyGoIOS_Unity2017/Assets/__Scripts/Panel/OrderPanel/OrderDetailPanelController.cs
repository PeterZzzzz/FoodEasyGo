﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

using LDFW;
using LDFW.UI;
using LDFW.Network;

public class OrderDetailPanelController : BasePanelController {

    public static OrderDetailPanelController          instance;
    public JSONObject                                   _orderData;
    public JSONObject                                   _subOrderData;

    // Order List
    public ScrollRect                                 defaultScrollRect;
    public TextController restaurant;
    public TextController deliverStatus;
    public Transform dishBar;
    public Transform coupon;
    public Transform fees;
    public TextController delivery;
    public TextController wechat;
    public TextController orderID;
    public TextController contactPerson;
    public TextController email;
    public TextController address;
    public TextController paymentMethod;
    public TextController orderTime;
    //public TextController notes;


    // Private and temp variables;
    List<GameObject> tempGO;
    

    protected new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();

        headerTitle.ResetUI ("订单详情", "Order Details");
        tempGO = new List<GameObject> ();
    }

    protected new void Start () {
        base.Start ();
        
    }


    #region Overrides
    public override void ResetPanel () {
        while (tempGO.Count > 0) {
            tempGO[0].DestroyGO ();
            tempGO.RemoveAt (0);
        }
    }

    public override void ReloadPanel () {
    }

    public override void OpenPanel () {

    }

    public void OpenPanel (JSONObject orderData, JSONObject subOrderData) {
        _orderData = orderData;
        _subOrderData = subOrderData;
        base.OpenPanel ();

        ResetData ();
    }
    #endregion


    #region LoadData
    public void ResetData () {
        restaurant.ResetUI (_subOrderData.GetField ("goods")[0].GetField ("restaurant").GetField ("name").str, 
            _subOrderData.GetField ("goods")[0].GetField ("restaurant").GetField ("name_en").str);

        string orderStatus = _subOrderData["status"].str;
        if (orderStatus == "1")
        {
            deliverStatus.ResetUI("未完成", "Incomplete");
        }
        else if (orderStatus == "2")
        {
            string zh = "已完成";
            string en = "Complete";

            JSONObject goods = _subOrderData.GetField("goods");

            string deliverType = goods[0].GetField("restaurant").GetField("deliver_type").str;
            if (deliverType == "2")
            {
                zh = "由餐馆配送";
                en = "Deliver by Restaurant";
            }
            else
            {
                JSONObject orderDeliver = _subOrderData.GetField("deliver_status");
                if (orderDeliver.IsNull) {
                    string time = _subOrderData.GetField("create_time").str;
                    zh = "餐馆已接 (" + time + ")";
                    en = "Restaurant Accepted (" + time + ")";
                } 
                else if (orderDeliver.GetField("deliver_status").str == "0")
                {
                    string time = _subOrderData.GetField("deliver_status").GetField("restaurant_accept_time").str;
                    zh = "餐馆已接 (" + time + ")";
                    en = "Restaurant Accepted (" + time + ")";
                }
                else if (orderDeliver.GetField("deliver_status").str == "1") {
                    string time = _subOrderData.GetField("deliver_status").GetField("driver_assigned_time").str;
                    zh = "司机已指派 (" + time + ")";
                    en = "Driver Assigned (" + time + ")";
                }
                else if (orderDeliver.GetField("deliver_status").str == "1")
                {
                    string time = _subOrderData.GetField("deliver_status").GetField("driver_confirmed_time").str;
                    zh = "司机赶往餐馆 (" + time + ")";
                    en = "Driver on Route (" + time + ")";
                }
                else if (orderDeliver.GetField("deliver_status").str == "3")
                {
                    string time = _subOrderData.GetField("deliver_status").GetField("deliver_start_time").str;
                    zh = "配送中 (" + time + ")";
                    en = "Delivery in Progress (" + time + ")";
                }
                else if (orderDeliver.GetField("deliver_status").str == "4")
                {
                    string time = _subOrderData.GetField("deliver_status").GetField("deliver_complete_time").str;
                    zh = "配送成功 (" + time + ")";
                    en = "Delivery Completed (" + time + ")";
                }
            }

            deliverStatus.ResetUI(zh, en);
        }
        else
        {
            deliverStatus.ResetUI("已取消", "Cancelled");
        }





        for (int i=0; _subOrderData.GetField ("goods")[i] != null; i++) {
            JSONObject goodsData = _subOrderData.GetField ("goods")[i];
            Transform newDishBar;
            if (i == 0) {
                newDishBar = dishBar;
                dishBar.Find ("DishName").GetComponent<TextController> ().ResetUI (
                    goodsData.GetField ("goods_name_zh").str, goodsData.GetField ("goods_name_en").str);
                dishBar.Find ("Quantity").GetComponent<TextController> ().ResetUI ("x" + goodsData.GetField ("number").str);
                dishBar.Find ("Price").GetComponent<TextController> ().ResetUI ("$" + goodsData.GetField ("goods_price").str);
            } else {
                newDishBar = Instantiate (dishBar.gameObject).transform;
                tempGO.Add (newDishBar.gameObject);
                newDishBar.SetParent (defaultScrollRect.content);
                newDishBar.localScale = Vector3.one;
                newDishBar.SetSiblingIndex (dishBar.GetSiblingIndex () + 1);
                newDishBar.Find ("DishName").GetComponent<TextController>().ResetUI (
                    goodsData.GetField ("goods_name_zh").str, goodsData.GetField ("goods_name_en").str);
                newDishBar.Find ("Quantity").GetComponent<TextController> ().ResetUI ("x" + goodsData.GetField ("number").str);
                newDishBar.Find ("Price").GetComponent<TextController> ().ResetUI ("$" + goodsData.GetField ("goods_price").str);

            }

            //LDFWImageDownloadController.instance.AddToCacheList (
            //    new ImageDownloader2 (goodsData.GetField ("goods_img").str.Replace ("\\/", "/"), "restaurant", newDishBar.Find ("RawImage").GetComponent<RawImage>(), 1, null, null));

        }

        string couponCode = _orderData.GetField ("coupon_sn").str;
        if (string.IsNullOrEmpty (couponCode)) {
            coupon.Find ("Text1").GetComponent<TextController> ().ResetUI ("");
            coupon.Find ("Text2").GetComponent<TextController> ().ResetUI ("");
            coupon.GetComponent<LayoutElement> ().preferredHeight = 0;
        } else {
            coupon.Find ("Text1").GetComponent<TextController> ().ResetUI ("");
            if (couponCode.Substring (0, 1) == "F" && couponCode.Substring (0,1) == "f") {
                coupon.Find ("Text2").GetComponent<TextController> ().ResetUI ("免运费", "Free Delivery" );
            } else {
                coupon.Find ("Text2").GetComponent<TextController> ().ResetUI ("折扣", "Discount");
            }
            coupon.GetComponent<LayoutElement> ().preferredHeight = 30;
        }

        fees.Find ("Text1").GetComponent<TextController> ().ResetUI (
            "商品总价\n配送费\n额外费用\n销售税\n小费\n合计", "Base price\nDelivery fee\nExtra fee\nTax\nTip\nTotal");
        fees.Find ("Text2").GetComponent<TextController> ().ResetUI (
            "$ " + float.Parse (_subOrderData.GetField ("goods_total_price").str).ToString ("0.00") +
            "\n$ " + float.Parse (_subOrderData.GetField ("deliver_price").str).ToString ("0.00") +
            "\n$ " + float.Parse (_subOrderData.GetField ("extra_price").str).ToString ("0.00") +
            "\n$ " + float.Parse (_subOrderData.GetField ("sales_price").str).ToString ("0.00") +
            "\n$ " + float.Parse (_subOrderData.GetField ("tip_price").str).ToString ("0.00") +
            "\n$ " + float.Parse (_subOrderData.GetField ("discont_total_price").str).ToString ("0.00"));

        delivery.ResetUI ("");
        wechat.ResetUI ("foodeasygo");
        orderID.ResetUI (_subOrderData.GetField ("order_number").str);

        contactPerson.ResetUI (_orderData.GetField ("first_name").str + " " + _orderData.GetField ("last_name").str);
        email.ResetUI (_orderData.GetField ("email").str);
        address.ResetUI (_orderData.GetField ("address").str + " " + _orderData.GetField ("street") + ", " + _orderData.GetField ("city"));
        if (_orderData.GetField ("payment").str == "1") {
            paymentMethod.ResetUI ("现金", "Cash");
        } else {
            paymentMethod.ResetUI ("信用卡", "Credit Card");
        }
        orderTime.ResetUI (_orderData.GetField ("create_time").str);
        //notes.ResetUI (_subOrderData.GetField ("note").str);
    }
    #endregion

}