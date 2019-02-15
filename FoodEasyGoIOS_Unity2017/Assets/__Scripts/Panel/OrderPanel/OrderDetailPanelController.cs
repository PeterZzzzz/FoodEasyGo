using UnityEngine;
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
    public ScrollRect defaultScrollRect;
    public RawImage image;
    public TextController restaurant;
    public Transform DetailSection;
    public Transform DishDetailSection;
    public Transform dishBar;
    public Text totalGoodsPrice;
    public Text deliveryFee;
    public Text extraFee;
    public Text Tax;
    public Text Tip;
    public Text takeoutFee;
    public Text discount;
    public Text totalPrice;

    public Text estimateDeliveryTime;
    public Text weChat;

    public TextController orderID;
    public TextController couponType;
    public TextController contact;
    public TextController email;
    public TextController address;
    public TextController paymentMethod;
    public TextController orderTime;
    public TextController deliverStatus;
    List<GameObject> tempGO;

    protected new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;
        base.Awake ();

        headerTitle.ResetUI ("订单详情", "Order Details");
        tempGO = new List<GameObject>();

        if (Screen.width == 1125 || Screen.width == 1242 || Screen.width == 828)
        {
            // iPhoneX
            defaultScrollRect.GetComponent<RectTransform>().offsetMin = new Vector2(defaultScrollRect.GetComponent<RectTransform>().offsetMin.x, defaultScrollRect.GetComponent<RectTransform>().offsetMin.y + 20);

            Debug.Log("iPhoneX适配7");
        }
    }

    protected new void Start () {
        base.Start ();
        
    }


    #region Overrides
    public override void ResetPanel () {
        while (tempGO.Count > 0)
        {
            tempGO[0].DestroyGO();
            tempGO.RemoveAt(0);
        }
    }

    public override void ReloadPanel () {
        defaultScrollRect.content.offsetMax = Vector2.one;
        defaultScrollRect.content.anchoredPosition = Vector2.zero;
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

        //Delivery status
        UpdateDeliverStatus();
        //Load restaurant image
        LDFWImageDownloadController.instance.AddToCacheList(
            new ImageDownloader2(_subOrderData.GetField("goods")[0].GetField("restaurant").GetField("img").str.Replace("\\/", "/"), "order", image, 1, null, null));
        //Load restaurant name
        restaurant.ResetUI (_subOrderData.GetField ("goods")[0].GetField ("restaurant").GetField ("name").str, 
        _subOrderData.GetField ("goods")[0].GetField ("restaurant").GetField ("name_en").str);

        //Load dish details
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
                tempGO.Add(newDishBar.gameObject);
                newDishBar.SetParent(DishDetailSection);
                newDishBar.localScale = Vector3.one;
                newDishBar.SetSiblingIndex (i);
                newDishBar.Find ("DishName").GetComponent<TextController>().ResetUI (
                    goodsData.GetField ("goods_name_zh").str, goodsData.GetField ("goods_name_en").str);
                newDishBar.Find ("Quantity").GetComponent<TextController> ().ResetUI ("x" + goodsData.GetField ("number").str);
                newDishBar.Find ("Price").GetComponent<TextController> ().ResetUI ("$" + goodsData.GetField ("goods_price").str);
            }
        }

        DetailSection.GetComponent<LayoutElement>().preferredHeight = 420 + (DishDetailSection.childCount - 1) * 40;

        //Load price section
        totalGoodsPrice.text = "$ " + float.Parse(_subOrderData.GetField("goods_total_price").str).ToString("0.00");
        deliveryFee.text = "$ " + float.Parse(_subOrderData.GetField("deliver_price").str).ToString("0.00");
        extraFee.text = "$ " + float.Parse(_subOrderData.GetField("extra_price").str).ToString("0.00");
        Tax.text = "$ " + float.Parse(_subOrderData.GetField("sales_price").str).ToString("0.00");
        Tip.text = "$ " + float.Parse(_subOrderData.GetField("tip_price").str).ToString("0.00");
        takeoutFee.text = "$ " + float.Parse(_subOrderData.GetField("reusable_bags_fee").str).ToString("0.00");
        discount.text = "$ " + (float.Parse(_subOrderData.GetField("total_price").str) - float.Parse(_subOrderData.GetField("discont_total_price").str)).ToString("0.00");
        totalPrice.text = "$ " + float.Parse(_subOrderData.GetField("discont_total_price").str).ToString("0.00");

        //Load Content Section
        weChat.text = "foodeasygo";

        //Load Order Section
        orderID.ResetUI(_subOrderData.GetField("order_number").str);

        string couponCode = _orderData.GetField ("coupon_sn").str;
        if (string.IsNullOrEmpty (couponCode)) {
            couponType.ResetUI("无","None");
        } else {
            if (couponCode.Substring (0, 1) == "F" || couponCode.Substring (0,1) == "f") {
                couponType.ResetUI ("免运费", "Free Delivery" );
            } else {
                couponType.ResetUI ("折扣", "Discount");
            }
        }

        contact.ResetUI(_orderData.GetField("first_name").str + " " + _orderData.GetField("last_name").str);

        email.ResetUI(_orderData.GetField("email").str);

        address.ResetUI(_orderData.GetField("address").str + ", " + _orderData.GetField("street").str + ", " + _orderData.GetField("city").str);

        if (_orderData.GetField("payment").str == "1")
        {
            paymentMethod.ResetUI("现金", "Cash");
        }
        else
        {
            paymentMethod.ResetUI("信用卡", "Credit Card");
        }

        orderTime.ResetUI (_orderData.GetField ("create_time").str);
    }

    private void UpdateDeliverStatus() {
        string zh = "已完成";
        string en = "Complete";

        JSONObject goods = _subOrderData.GetField("goods");
        string deliverType = goods[0].GetField("restaurant").GetField("deliver_type").str;
        if (deliverType == "2")
        {
            zh = "由餐馆配送";
            en = "Deliver by Restaurant";
            this.deliverStatus.ResetUI(zh, en);
            return;
        }

        JSONObject orderDeliver = _subOrderData.GetField("deliver_status");

        if (orderDeliver.IsNull 
            || orderDeliver.GetField("deliver_status").str == "0")
        {
            zh = "下单成功";
            en = "Order Placed";
        }
        else if ("12".Contains(orderDeliver.GetField("deliver_status").str))
        {
            zh = "备餐中";
            en = "Preparing Order";
        }
        else if ("3".Contains(orderDeliver.GetField("deliver_status").str))
        {
            zh = "配送中";
            en = "Out For Delivery";
        }
        else if (orderDeliver.GetField("deliver_status").str == "4")
        {
            zh = "已送达";
            en = "Delivered";
        }
                    
        this.deliverStatus.ResetUI(zh, en);
    }
    #endregion

}
