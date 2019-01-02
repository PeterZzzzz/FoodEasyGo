using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

using LDFW;
using LDFW.Network;
using System;

public class OrderPanelOrderBarController : MonoBehaviour, IPointerClickHandler {

    private JSONObject      goods;
    public string           _orderID;
    public string           _subOrderID;
    public string           _restaurantID;
    public string           _orderStatus;

    public JSONObject       _orderData;
    public JSONObject       _subOrderData;

    public TextController   statusText;
    public TextController   restaurantName;
    public TextController   dishList;
    public TextController   dishNumberList;
    public TextController   totalPrice;
    public TextController   totalGoodsNum;

    public RawImage         image;
    public Button           shareButton;
    public Button           commentButton;
    public Button           helpButton;



    void Awake () {
        shareButton.onClick.AddListener (OnShareButtonClicked);
        commentButton.onClick.AddListener (OnCommentButtonClicked);
    }

    public void Reset (string orderID, string orderStatus, string date, JSONObject orderData, JSONObject subOrderData) {
        goods = subOrderData.GetField ("goods");
        _orderStatus = orderStatus;

        _orderData = orderData;
        _subOrderData = subOrderData;

        _orderID = orderID;
        _subOrderID = subOrderData.GetField ("id").str;

        if (orderStatus == "1") {
            statusText.ResetUI ("下单未完成", "Order Incomplete");
        } else if (orderStatus == "2") {
            string zh = "已完成\n";
            string en = "Complete\n";

            string deliverType = goods[0].GetField("restaurant").GetField("deliver_type").str;
            if (deliverType == "2") {
                zh = "由餐馆配送";
                en = "Deliver by Restaurant";
            } else {
                JSONObject orderDeliver = subOrderData.GetField("deliver_status");
                if (orderDeliver.IsNull || orderDeliver.GetField("deliver_status").str == "0"){
                    zh = "下单成功";
                    en = "Order Placed";
                } else if ("1,2,".Contains(orderDeliver.GetField("deliver_status").str)) {
                    zh = "备餐中";
                    en = "Preparing Order";
                } else if (orderDeliver.GetField("deliver_status").str == "3") {
                    zh = "配送中";
                    en = "Delivery in Progress";
                } else if (orderDeliver.GetField("deliver_status").str == "4") {
                    zh = "配送成功";
                    en = "Delivery Completed";
                }
            }
            
            statusText.ResetUI (zh, en);
        } else {
            statusText.ResetUI ("本单已取消", "Order Cancelled");
        }


        restaurantName.ResetUI (goods[0].GetField ("restaurant").GetField ("name").str,
            goods[0].GetField ("restaurant").GetField ("name_en").str);
        LDFWImageDownloadController.instance.AddToCacheList (
            new ImageDownloader2 (goods[0].GetField ("restaurant").GetField ("img").str.Replace ("\\/", "/"), "order", image, 1, null, null));


        int goodsNumber = 0;
        dishList.ResetUI ("");
        dishNumberList.ResetUI ("");
        totalPrice.ResetUI ("");
        _restaurantID = goods[0].GetField ("restaurant_id").str;
        for (int i=0; goods[i] != null; i++) {
            dishList.ResetUI (
                dishList.textZH + goods[i].GetField ("goods_name_zh").str + "\n",
                dishList.textEN + goods[i].GetField ("goods_name_en").str + "\n");
            dishNumberList.ResetUI (
                dishNumberList.textZH + "x" + goods[i].GetField ("number").str + "\n",
                dishNumberList.textEN + "x" + goods[i].GetField ("number").str + "\n");
            goodsNumber += int.Parse(goods[i].GetField("number").str);
        }

        dishList.textZH = dishList.textZH.TrimEnd ('\n');
        dishList.textEN = dishList.textEN.TrimEnd ('\n');
        dishNumberList.textZH = dishNumberList.textZH.TrimEnd ('\n');
        dishNumberList.textEN = dishNumberList.textEN.TrimEnd ('\n');

        string totalPriceString = "$ " + float.Parse (subOrderData.GetField ("discont_total_price").str).ToString ("0.00");
        totalPrice.ResetUI(totalPriceString, totalPriceString);
        if (goodsNumber == 1)
            totalGoodsNum.ResetUI("共 " + goodsNumber + " 件商品", goodsNumber + " good in total");
        else if (goodsNumber > 1)
            totalGoodsNum.ResetUI("共 " + goodsNumber + " 件商品", goodsNumber + " goods in total");
        else
            totalGoodsNum.ResetUI("无商品", "0 goods in total");

        if (subOrderData.GetField ("driver_grade").str != "0") {
            commentButton.gameObject.SetActive (false);
        } else {
            commentButton.gameObject.SetActive (true);
        }
    }


    public void SetLayoutHeight () {
        GetComponent<LayoutElement> ().preferredHeight = 150 + (dishList.transform as RectTransform).sizeDelta.y;
    }


    public void SwitchButtons () {
        if (_orderStatus == "1") {
            commentButton.gameObject.SetActive (false);
            shareButton.gameObject.SetActive (false);
        } else if (_orderStatus == "2") {
            commentButton.gameObject.SetActive (true);
            shareButton.gameObject.SetActive (true);
        } else {
            commentButton.gameObject.SetActive (false);
            shareButton.gameObject.SetActive (false);
        }
    }



    public void OnShareButtonClicked () {
        MainCanvasController.instance.ShareToMoments(goods);
    }

    public void OnCommentButtonClicked () {
        OrderCommentPanelController.instance.OpenPanel (this, _subOrderID, _restaurantID);
    }

    public void OnPointerClick (PointerEventData eventData) {
        OrderDetailPanelController.instance.OpenPanel (_orderData, _subOrderData);
    }

    public void OnHelpButtonClick(){

        string orderId = _subOrderData.GetField("order_number").str;
        OrderHelpPanelController.instance.OpenPanel(orderId);
    }

}
