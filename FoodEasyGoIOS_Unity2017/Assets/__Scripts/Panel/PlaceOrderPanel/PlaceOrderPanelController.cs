using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;

using LDFW;
using LDFW.UI;
using LDFW.Network;
using LDFW.Tween;


public class PlaceOrderPanelController : BasePanelController
{

    public static PlaceOrderPanelController instance;


    // Transform
    public Transform addressSection;
    public Transform titleRestaurantBarSection;
    public Transform couponSection;
    public Transform tipSection;
    public Transform feeSection;
    public Transform paymentSection;
    public Transform paymentCreditCardSection;
    public Transform creditCardSection;
    public Transform confirmOrderPanel;
    public Transform uniwebviewPanel;
    public InputField couponInputField;
    public Button payButton;
    public bool isCurrentOrderInstantSend = false;

    // Prefab
    public Transform restaurantBarPrefab;


    // Private and temp variables
    private List<GameObject> tempGOList;
    private string selectedAddressID = "";
    private string selectedCreditCardID = "";
    private string selectedCouponID = "";
    private float targetRegionDeliveryFee = 0f;

    private string totalPrice = "";
    private string extraFee = "";
    private string deliveryFee = "";

    private string cartDetailIDString = "";
    private bool isUsingFreeDelivery = false;

    private Dictionary<string, JSONObject> couponList;
    private Dictionary<int, float> restaurantDeliveryFee;

    public string orderNumber;
    public string orderID;

    private float tipChose = 0.15f;


    new void Awake()
    {
        if (instance != null)
        {
            instance.gameObject.DestroyGO();
        }
        instance = this;

        base.Awake();

        tempGOList = new List<GameObject>();
    }


    #region Overrides

    public override void HidePanelImmediately()
    {
        base.HidePanelImmediately();
    }

    /// <summary>
    /// Clears cart panel
    /// </summary>
    public void ClearCartPanel()
    {
        CartController.instance.GetCartDetails();
        CartPanelController.instance.ResetPanel();
        CartPanelController.instance.ReloadPanel();
    }

    /// <summary>
    /// Resets panel
    /// </summary>
    public override void ResetPanel()
    {
        selectedCouponID = "";
        uniwebviewPanel.gameObject.SetActive(false);
        orderNumber = "";
        confirmOrderPanel.gameObject.SetActive(false);
        while (tempGOList.Count > 0)
        {
            tempGOList[0].DestroyGO();
            tempGOList.RemoveAt(0);
        }

        JSONObject address = AppDataController.instance.GetAddress(CartPanelController.instance.selectedAddressID);

        Debug.Assert(!string.IsNullOrEmpty(CartPanelController.instance.selectedAddressID), "CartPanelController.selectedAddressID is empty!");
        Debug.Assert(address != null, "Cannot select an address from AppDataController: " + CartPanelController.instance.selectedAddressID);
        if (address != null)
        {

            addressSection.Find("AddressBar").gameObject.SetActive(true);
            addressSection.Find("AddressBar/Name").GetComponent<TextController>().ResetUI(address.GetField("name").str);
            addressSection.Find("AddressBar/ContactNumber").GetComponent<TextController>().ResetUI(address.GetField("phone").str);
            addressSection.Find("AddressBar/Address").GetComponent<TextController>().ResetUI(
                address.GetField("address").str + ", " + address.GetField("street").str + ", " + address.GetField("city").str + ", "
                + address.GetField("state").str + ", " + address.GetField("zip_code").str);
        }
        else
        {
            addressSection.Find("AddressBar").gameObject.SetActive(true);
            addressSection.Find("AddressBar/Name").GetComponent<TextController>().ResetUI("");
            addressSection.Find("AddressBar/ContactNumber").GetComponent<TextController>().ResetUI("");
            addressSection.Find("AddressBar/Address").GetComponent<TextController>().ResetUI("");
        }


        paymentCreditCardSection.Find("CardText").GetComponent<TextController>().ResetUI("");
        creditCardSection.Find("FirstNameSection/Input").GetComponent<InputField>().text = "";
        creditCardSection.Find("LastNameSection/Input").GetComponent<InputField>().text = "";
        creditCardSection.Find("CardSection/Input").GetComponent<InputField>().text = "";
        creditCardSection.Find("MonthSection/Input").GetComponent<InputField>().text = "";
        creditCardSection.Find("YearSection/Input").GetComponent<InputField>().text = "";
        creditCardSection.Find("SecurityCodeSection/Input").GetComponent<InputField>().text = "";

        //couponSection.FindChild ("Text").GetComponent<Text> ().text = Config.currentLanguage == Language.chinese ? "点击添加优惠券" : "Click to add a coupon";
    }

    /// <summary>
    /// Reload panel
    /// </summary>
    public override void ReloadPanel()
    {
        StartCoroutine(ReloadPanelCoroutine());
    }

    /// <summary>
    /// Reload panel coroutine
    /// </summary>
    /// <returns></returns>
    private IEnumerator ReloadPanelCoroutine()
    {
        LoadingPanelController.instance.DisplayPanel();
        CheckForAddress(CartPanelController.instance.selectedAddressID);

        while (CartController.instance.cart == null)
            yield return new WaitForSeconds(0.5f);


        tipSection.Find("ToggleController").GetComponent<LDFWToggleController>().Reset();
        targetRegionDeliveryFee = 0f;

        JSONObject creditCardJSON = AppDataController.instance.GetCreditCard("default");
        if (creditCardJSON == null)
        {
            creditCardJSON = AppDataController.instance.GetCreditCard("0");
            if (creditCardJSON == null)
            {
                paymentCreditCardSection.GetComponent<Button>().interactable = false;
                creditCardSection.gameObject.SetActive(true);
            }
        }

        if (creditCardJSON != null)
        {
            paymentCreditCardSection.GetComponent<Button>().interactable = true;
            creditCardSection.gameObject.SetActive(false);
            ResetCreditCard(creditCardJSON);
        }

        //  Get data from cart panel
        Transform deliveryContent = CartPanelController.instance.deliveryContent;
        Transform reservationContent = CartPanelController.instance.reservationContent;
        cartDetailIDString = "";

        int deliverCount = 0;
        int reservationCount = 0;


        if (isCurrentOrderInstantSend)
        {

            deliverCount = deliveryContent.childCount;
            reservationCount = reservationContent.childCount;

            for (int i = 0; i < deliveryContent.childCount; i++)
            {
                CartPanelRestaurantBarController restaurantBarController = deliveryContent.GetChild(i).GetComponent<CartPanelRestaurantBarController>();
                restaurantBarController.CheckForMinOrder();
                if (restaurantBarController.isOpen && restaurantBarController.isMinOrderSatisfied && restaurantBarController.canDeliver)
                {
                    GetNewRestaurantBar(
                        restaurantBarController.transform.Find("Header/Title").GetComponent<TextController>().textZH,
                        restaurantBarController.transform.Find("Header/Title").GetComponent<TextController>().textEN,
                        "即买即送", "Delivers Now");

                    foreach (var dishBarController in deliveryContent.GetChild(i).GetComponent<CartPanelRestaurantBarController>().dishBarList)
                    {
                        if (dishBarController.isSelectedForCheckOut)
                            cartDetailIDString = cartDetailIDString + "," + dishBarController.cartDetailData._id;
                    }
                }
            }

        }
        else
        {

            reservationCount = reservationContent.childCount;

            for (int i = 0; i < reservationContent.childCount; i++)
            {
                CartPanelRestaurantBarController restaurantBarController = reservationContent.GetChild(i).GetComponent<CartPanelRestaurantBarController>();
                restaurantBarController.CheckForMinOrder();

                if (restaurantBarController.isOpen && restaurantBarController.isMinOrderSatisfied)
                {
                    CartPanelDishBarController dishBarController = reservationContent.GetChild(i).GetChild(1).GetComponent<CartPanelDishBarController>();
                    if (dishBarController.cartDetailData._categoryID == "2")
                    {
                        GetNewRestaurantBar(
                            reservationContent.GetChild(i).Find("Header/Title").GetComponent<TextController>().textZH,
                            reservationContent.GetChild(i).Find("Header/Title").GetComponent<TextController>().textEN,
                            AppDataController.instance.GetDeliveryDestineTime(
                                reservationContent.GetChild(i).GetChild(1).GetComponent<CartPanelDishBarController>().cartDetailData._deliverTimeID), "");
                    }
                    else
                    {
                        string deliveryTimeZH = "今天 19:00-21:00";
                        string deliveryTimeEN = "Today 19:00-21:00";

                        if (DateTime.Now.Hour >= 17)
                        {
                            deliveryTimeZH = "次日配送";
                            deliveryTimeEN = "Delivers Tomorrow";
                        }

                        GetNewRestaurantBar(
                            reservationContent.GetChild(i).Find("Header/Title").GetComponent<TextController>().textZH,
                            reservationContent.GetChild(i).Find("Header/Title").GetComponent<TextController>().textEN,
                            deliveryTimeZH, deliveryTimeEN);
                    }
                    /*
                    GetNewRestaurantBar (
                        reservationContent.GetChild (i).Find ("Header/Title").GetComponent<TextController> ().textZH,
                        reservationContent.GetChild (i).Find ("Header/Title").GetComponent<TextController> ().textEN,
                        AppDataController.instance.GetDeliveryDestineTime (
                            reservationContent.GetChild (i).GetChild (1).GetComponent<CartPanelDishBarController> ().cartDetailData._deliverTimeID), "");
                            */
                    foreach (var dishBar in reservationContent.GetChild(i).GetComponent<CartPanelRestaurantBarController>().dishBarList)
                    {
                        cartDetailIDString = cartDetailIDString + "," + dishBar.cartDetailData._id;
                    }
                }
            }
        }

        // Set payment method
        if (isCurrentOrderInstantSend)
        {
            paymentSection.GetChild(0).localScale = Vector3.one;
            paymentSection.GetComponent<LayoutElement>().preferredHeight = 60;
            paymentSection.GetComponent<LDFWToggleController>().SelectToggle(1);
        }
        else
        {
            paymentSection.GetChild(0).localScale = Vector3.zero;
            paymentSection.GetComponent<LayoutElement>().preferredHeight = 60;
            paymentSection.GetComponent<LDFWToggleController>().SelectToggle(1);
        }


        cartDetailIDString = cartDetailIDString.Substring(1);

        // Get fees
        CartPanelController.instance.GetTotalPriceDetails(out totalPrice, out extraFee, out deliveryFee);

        UpdateFeeSection(float.Parse(totalPrice), float.Parse(extraFee), float.Parse(deliveryFee), 0);
        LoadingPanelController.instance.HidePanelImmediately();

        UpdateDeliveryFee(deliveryFee);


        if (string.IsNullOrEmpty(orderNumber))
        {
            submitAttempts = 0;
            SubmitOrder();
        }

    }

    private void UpdateFeeSection(float goodsTotalPrice, float extraFee, float deliveryFee, float discountPrice) {
        feeSection.Find("TotalPriceTitle/Text").GetComponent<Text>().text = "$ " + goodsTotalPrice.ToString("0.00");
        feeSection.Find("ExtraFeeTitle/Text").GetComponent<Text>().text = "$ " + extraFee.ToString("0.00");
        feeSection.Find("DeliveryFeeTitle/Text").GetComponent<Text>().text = "$ " + deliveryFee.ToString("0.00");
        feeSection.Find("TaxFeeTitle/Text").GetComponent<Text>().text = "$ " + (float.Parse(totalPrice) * 0.07f).ToString("0.00");
        feeSection.Find("TipFeeTitle/Text").GetComponent<Text>().text = "$ " + (goodsTotalPrice * tipChose).ToString("0.00");
        feeSection.Find("DiscountTitle/Text").GetComponent<Text>().text = "$ " + discountPrice.ToString("0.00");

        CalcualteTotalPrice();
    }

    /// <summary>
    /// Calcualtes total tax fee and total fee
    /// </summary>
    private void CalcualteTotalPrice()
    {

        feeSection.Find("TaxFeeTitle/Text").GetComponent<Text>().text = "$ " +
        ((float.Parse(feeSection.Find("TotalPriceTitle/Text").GetComponent<Text>().text.Substring(2))) * 0.07f).ToString("0.00");


        feeSection.Find("TotalFeeTitle/Text").GetComponent<Text>().text = "$ " +
        (float.Parse(feeSection.Find("TotalPriceTitle/Text").GetComponent<Text>().text.Substring(2)) +
        float.Parse(feeSection.Find("ExtraFeeTitle/Text").GetComponent<Text>().text.Substring(2)) +
        float.Parse(feeSection.Find("DeliveryFeeTitle/Text").GetComponent<Text>().text.Substring(2)) +
        float.Parse(feeSection.Find("TaxFeeTitle/Text").GetComponent<Text>().text.Substring(2)) +
        float.Parse(feeSection.Find("TipFeeTitle/Text").GetComponent<Text>().text.Substring(2)) +
        float.Parse(feeSection.Find("DiscountTitle/Text").GetComponent<Text>().text.Substring(2))).ToString("0.00");
    }

    /// <summary>
    /// Instantiates a new restaurant bar
    /// </summary>
    /// <param name="nameZH"></param>
    /// <param name="nameEN"></param>
    /// <param name="typeZH"></param>
    /// <param name="typeEN"></param>
    private void GetNewRestaurantBar(string nameZH, string nameEN, string typeZH, string typeEN)
    {
        Transform restaurantBar = Instantiate(restaurantBarPrefab.gameObject).transform;
        tempGOList.Add(restaurantBar.gameObject);
        restaurantBar.SetParent(titleRestaurantBarSection.parent);
        restaurantBar.localScale = Vector3.one;
        restaurantBar.SetSiblingIndex(titleRestaurantBarSection.GetSiblingIndex() + 1);

        if (string.IsNullOrEmpty(typeEN))
            typeEN = typeZH;

        restaurantBar.Find("Name").GetComponent<TextController>().ResetUI(
            nameZH, nameEN);
        restaurantBar.Find("Type").GetComponent<TextController>().ResetUI(
            typeZH, typeEN);
    }

    #endregion


    #region CreditCard

    public void OpenCreditCardPanel()
    {
        PaymentPanelController.instance.OpenPanel();
    }

    public void OpenCreditCardPopUpToggle()
    {
        List<string> creditCardNumberList = new List<string>();
        List<string> creditCardID = new List<string>();
        JSONObject creditCard = AppDataController.instance.GetCreditCard("default");
        if (creditCard != null)
        {
            creditCardNumberList.Add(creditCard.GetField("credit_card_number").str);
            creditCardID.Add("default");
        }
        for (int i = 0; AppDataController.instance.GetCreditCard(i.ToString()) != null; i++)
        {
            creditCard = AppDataController.instance.GetCreditCard(i.ToString());
            creditCardNumberList.Add(creditCard.GetField("credit_card_number").str);
            creditCardID.Add(i.ToString());
        }

        DebugLogger.Log("credit card list length : " + creditCardNumberList.Count);

        PopUpTogglePanelController.instance.DisplayPopUpTogglePanel(true, true, creditCardNumberList, null, creditCardID,
            () =>
            {
                ResetCreditCard(AppDataController.instance.GetCreditCard(PopUpTogglePanelController.instance.toggleController.GetSelectedElementIDs()));
            }, null);
    }

    public void ResetCreditCard(JSONObject creditCard)
    {
        selectedCreditCardID = creditCard.GetField("id").str;

        paymentCreditCardSection.Find("CardText").GetComponent<TextController>().ResetUI(
            "********" + creditCard.GetField("credit_card_number").str.Substring(creditCard.GetField("credit_card_number").str.Length - 4));


    }

    #endregion


    #region Coupon

    /// <summary>
    /// Get coupon list from app data controller
    /// </summary>
    public void GetCouponList()
    {
        couponList = new Dictionary<string, JSONObject>();
        foreach (KeyValuePair<string, JSONObject> coupon in AppDataController.instance.couponData)
            couponList.Add(coupon.Value.GetField("sn").str, coupon.Value);

        foreach (KeyValuePair<string, JSONObject> coupon in AppDataController.instance.commonCouponData)
            couponList.Add(coupon.Value.GetField("sn").str, coupon.Value);

    }

    /// <summary>
    /// Validate coupon that user entered
    /// </summary>
    public void ValidateCoupon()
    {
        string couponString = couponInputField.text.ToUpper();
        Debug.Log("Entered Coupon = " + couponString);

        WWWForm form = new WWWForm();
        form.AddField("coupon_sn", couponString);
        form.AddField("order_id", orderID);
        LoadingPanelController.instance.DisplayPanel();
        OrderNetworkController.instance.ApplyCoupon(form,
            new LDFWServerResponseEvent((JSONObject data, string m) =>
                {
                    data = data.GetField("d");
                    LoadingPanelController.instance.HidePanel();
                    UpdateFeeSection(
                        float.Parse(data.GetField("goods_total_price").str),
                        float.Parse(data.GetField("extra_price").str),
                        float.Parse(data.GetField("deliver_price").str),
                        float.Parse(data.GetField("discont_goods_price").str) - float.Parse(data.GetField("goods_total_price").str));
            

                }),
            new LDFWServerResponseEvent((JSONObject data, string m) =>
                {
                    couponInputField.text = "";
                    CartPanelController.instance.GetTotalPriceDetails(out totalPrice, out extraFee, out deliveryFee);
                    UpdateFeeSection(float.Parse(totalPrice), float.Parse(extraFee), float.Parse(deliveryFee), 0);
                    MessagePanelController.instance.DisplayPanel(m);
                    LoadingPanelController.instance.HidePanel();
                }));



    }

    #endregion


    #region DeliveryFee

    /// <summary>
    /// Updates the delivery fee data and checks if is first order
    /// </summary>
    /// <param name="fee"></param>
    private void UpdateDeliveryFee(string fee)
    {
        if (UserDataController.instance.hasMadeFirstOrder == "0")
        {
            DebugLogger.Log("First order");
            couponInputField.interactable = false;
            couponInputField.text = Config.currentLanguage == Language.chinese ? "首单免邮费" : "Free delivery on first order";

            int highestRestaurantID;
            float highestDelivery = -1;
            float totalDelivery = 0;
            foreach (var key in CartPanelController.instance.restaurantDeliverFee.Keys)
            {
                DebugLogger.Log("Adding delivery: " + key + ", " + CartPanelController.instance.restaurantDeliverFee[key]);
                totalDelivery += CartPanelController.instance.restaurantDeliverFee[key];
                if (CartPanelController.instance.restaurantDeliverFee[key] > highestDelivery)
                {
                    DebugLogger.Log("Updating highest delivery to " + key + ", " + CartPanelController.instance.restaurantDeliverFee[key]);
                    highestRestaurantID = key;
                    highestDelivery = CartPanelController.instance.restaurantDeliverFee[key];
                }
            }
            DebugLogger.Log("Total and highestDelivery = " + totalDelivery.ToString("0.00") + ", " + highestDelivery.ToString("0.00"));
            feeSection.Find("DeliveryFeeTitle/Text").GetComponent<Text>().text = "$ " + (totalDelivery - highestDelivery).ToString("0.00");
            DebugLogger.Log("CouponInputField.text = " + couponInputField.text);
        }
        else
        {
            couponInputField.interactable = true;
            couponInputField.text = "";
            feeSection.Find("DeliveryFeeTitle/Text").GetComponent<Text>().text = "$ " + fee;
        }
    }

    private void GetDeliveryFeeList()
    {
        WWWForm form = new WWWForm();
        //form.AddField("restaurant_id_list", )
    }

    #endregion


    #region Other

    public void OnCashPaymentSelected()
    {
        creditCardSection.GetComponent<LayoutElement>().preferredHeight = 0f;
    }

    public void OnCreditCardPaymentSelected()
    {
        JSONObject data = AppDataController.instance.GetCreditCard("default");
        if (data == null)
        {
            data = AppDataController.instance.GetCreditCard("0");
            if (data == null)
            {
                creditCardSection.GetComponent<LayoutElement>().preferredHeight = 500f;
                return;
            }
        }

        paymentCreditCardSection.Find("CardText").GetComponent<TextController>().ResetUI("****" + data.GetField("credit_card_number").str.Substring(data.GetField("credit_card_number").str.Length - 4));
        selectedCreditCardID = data.GetField("id").str;
    }

    public void On15TipButtonClicked()
    {
        if (!string.IsNullOrEmpty(totalPrice))
        {
            feeSection.Find("TipFeeTitle/Text").GetComponent<Text>().text = "$ " + (float.Parse(totalPrice) * 0.15f).ToString("0.00");
            tipChose = 0.15f;
            CalcualteTotalPrice();
        }
    }

    public void On18TipButtonClicked()
    {
        if (!string.IsNullOrEmpty(totalPrice))
        {
            feeSection.Find("TipFeeTitle/Text").GetComponent<Text>().text = "$ " + (float.Parse(totalPrice) * 0.18f).ToString("0.00");
            tipChose = 0.18f;
            CalcualteTotalPrice();
        }
    }

    public void On20TipButtonClicked()
    {
        if (!string.IsNullOrEmpty(totalPrice))
        {
            feeSection.Find("TipFeeTitle/Text").GetComponent<Text>().text = "$ " + (float.Parse(totalPrice) * 0.2f).ToString("0.00");
            tipChose = 0.2f;
            CalcualteTotalPrice();
        }
    }

    //public void OnCustomTipButtonClicked(string text)
    //{
    //    float amount = 0f;
    //    if (!string.IsNullOrEmpty(text) && !float.TryParse(text, out amount))
    //    {
    //        MessagePanelController.instance.DisplayPanel("Invalid tip");
    //    }
    //    feeSection.Find("TipFeeTitle/Text").GetComponent<Text>().text = "$ " + amount.ToString("0.00");
    //    CalcualteTotalPrice();
    //}

    #endregion


    #region SubmitOrder

    private int submitAttempts = 0;

    public void SubmitOrder(Action successCallBack = null)
    {

        WWWForm form = new WWWForm();
        form.AddField("cart_id", CartController.instance.cart._id);
        form.AddField("is_instant_send", isCurrentOrderInstantSend ? 1 : 0);
        form.AddField("cart_detail_id_string", cartDetailIDString);
        form.AddField("address_id", CartPanelController.instance.selectedAddressID);
        form.AddField("deliver_time", 1);
        form.AddField("deliver_time_value", 2);


        LoadingPanelController.instance.DisplayPanel();
        OrderNetworkController.instance.SubmitOrder(form,
            new LDFWServerResponseEvent((JSONObject data, string m) =>
                {
                    submitAttempts = 0;
                    LoadingPanelController.instance.HidePanelImmediately();
                    orderNumber = data.GetField("order_number").str;
                    orderID = data.GetField("order_id").str;

                    //feeSection.Find ("DeliveryFeeTitle/Text").GetComponent<Text> ().text = "$ " + data.GetField ("deliver_price").f.ToString("0.00");
                    //CalcualteTotalPrice ();

                    if (successCallBack == null)
                    {
                        GetCouponList();
                    }
                    else
                    {
                        successCallBack();
                    }

                }),
            new LDFWServerResponseEvent((JSONObject data, string m) =>
                {
                    LoadingPanelController.instance.HidePanelImmediately();
                    submitAttempts++;
                    if (submitAttempts <= 3)
                    {
                        SubmitOrder();
                    }
                }));

    }

    public void ConfirmOrder()
    {

        if (string.IsNullOrEmpty(orderNumber))
        {
            SubmitOrder(ConfirmOrder);
            return;
        }

        DebugLogger.Log("orderID = " + orderNumber);

        WWWForm form = new WWWForm();
        form.AddField("order_id", orderID);
        if (paymentSection.GetComponent<LDFWToggleController>().GetSelectedElements() == "0")
        {
            form.AddField("pay_type", "1");
        }
        else
        {
            form.AddField("pay_type", "2");
        }
        form.AddField("tip", feeSection.Find("TipFeeTitle/Text").GetComponent<Text>().text.Substring(1));
        form.AddField("coupon_sn", couponSection.Find("Input").GetComponent<InputField>().text);
        form.AddField("address_id", CartPanelController.instance.selectedAddressID);
        form.AddField("payment_id", selectedCreditCardID);
        form.AddField("instruction", addressSection.Find("AddressBar/Instruction").GetComponent<InputField>().text);
        //Debug.Log(addressSection.Find("AddressBar/Instruction/Text").GetComponent<Text>().text);

        if (string.IsNullOrEmpty(selectedCreditCardID))
        {
            form.AddField("credit_card_first_name", creditCardSection.Find("FirstNameSection/Input").GetComponent<InputField>().text);
            form.AddField("credit_card_last_name", creditCardSection.Find("LastNameSection/Input").GetComponent<InputField>().text);
            form.AddField("credit_card_number", creditCardSection.Find("CardSection/Input").GetComponent<InputField>().text);
            form.AddField("credit_card_month", creditCardSection.Find("MonthSection/Input").GetComponent<InputField>().text);
            form.AddField("credit_card_year", creditCardSection.Find("YearSection/Input").GetComponent<InputField>().text);
            form.AddField("credit_card_security_code", creditCardSection.Find("SecurityCodeSection/Input").GetComponent<InputField>().text);
        }

        LoadingPanelController.instance.DisplayPanelImmediately();
        OrderNetworkController.instance.ConfirmOrder(form,
            new LDFWServerResponseEvent((JSONObject data, string m) =>
                {
                    LoadingPanelController.instance.HidePanelImmediately();
                    if (paymentSection.GetComponent<LDFWToggleController>().GetSelectedElements() != "0")
                    {
                        SwitchUniwebviewPanel(true);
                        uniwebviewPanel.GetComponent<PlaceOrderPanelUniwebview>().OpenURL();
                        StartCheckForCompletetionCoroutine();
                    }
                    else
                    {
                        OpenConfirmWindow();
                        UserDataController.instance.hasMadeFirstOrder = "1";
                    }

                    /*
                confirmOrderPanel.Find ("OrderNumber").GetComponent<TextController> ().ResetUI (
                    "订单号: <color=orange>" + orderNumber + "</color>",
                    "Order ID: <color=orange>" + orderNumber + "</color>");
                confirmOrderPanel.gameObject.SetActive (true);
                */
                }),
            new LDFWServerResponseEvent((JSONObject data, string m) =>
                {
                    LoadingPanelController.instance.HidePanelImmediately();
                }));
    }


    public void OnRestaurantButtonClicked()
    {
        PanelListController.instance.SetHomePanelAsBasePanel();
    }

    public void OpenConfirmWindow()
    {
        WWWForm form = new WWWForm();
        form.AddField("order_id", orderID);

        LoadingPanelController.instance.DisplayPanelImmediately();
        OrderNetworkController.instance.GetOrderStatus(form,
            new LDFWServerResponseEvent((JSONObject data, string m) =>
                {
                    LoadingPanelController.instance.HidePanelImmediately();
                    if (data.GetField("status").str == "2")
                    {
                        string subOrderNumber = "";
                        for (int i = 0; i < data.GetField("sub_order_number").Count; i++)
                        {
                            subOrderNumber += "\n" +
                            "<color=orange>" + data.GetField("sub_order_number")[i]["order_number"].str + "</color>";
                        }

                        string checkEmailZH = "部分订单可能由餐馆自行配送，请查看您的确认邮件.";
                        string checkEmailEN = "Please check your email for order details.";
                        confirmOrderPanel.Find("OrderNumber").GetComponent<TextController>().ResetUI(
                            "订单号: " + subOrderNumber + "\n" + checkEmailZH,
                            "Order ID: " + subOrderNumber + "\n" + checkEmailEN);

                        confirmOrderPanel.gameObject.SetActive(true);
                        if (checkForCompletionIEnumerator != null)
                        {
                            StopCoroutine(checkForCompletionIEnumerator);
                        }
                    }

                }),
            new LDFWServerResponseEvent((JSONObject data, string m) =>
                {
                    LoadingPanelController.instance.HidePanelImmediately();
                }));
    }

    #endregion


    #region UniWebview

    /// <summary>
    /// Switchse uni webview panel
    /// </summary>
    /// <param name="state"></param>
    public void SwitchUniwebviewPanel(bool state)
    {
        DebugLogger.Log("uniweb: " + state);
        uniwebviewPanel.gameObject.SetActive(state);
        if (state)
        {
            StartCoroutine(CheckUniwebviewGO());
        }
        else
        {
            Destroy(PlaceOrderPanelUniwebview.webViewGameObject);
            OpenConfirmWindow();
        }
    }

    /// <summary>
    /// Check for uni webview game object
    /// </summary>
    /// <returns></returns>
    private IEnumerator CheckUniwebviewGO()
    {
        yield return new WaitForSeconds(1f);
        while (PlaceOrderPanelUniwebview.webViewGameObject != null)
        {
            DebugLogger.Log("Still show webview go");
            yield return new WaitForSeconds(0.5f);
        }
    }

    private IEnumerator checkForCompletionIEnumerator;

    public void StartCheckForCompletetionCoroutine()
    {
        StopCheckForCompletetionCoroutine();
        StartCoroutine(checkForCompletionIEnumerator = CheckForCompletionCoroutine());
    }

    public void StopCheckForCompletetionCoroutine()
    {
        if (checkForCompletionIEnumerator != null)
            StopCoroutine(checkForCompletionIEnumerator);
    }

    private IEnumerator CheckForCompletionCoroutine()
    {

        bool isOrderPaymentComplete = false;

        while (!isOrderPaymentComplete)
        {
            bool isResultBack = false;
            WWWForm form = new WWWForm();
            form.AddField("order_id", orderID);
            OrderNetworkController.instance.GetOrderStatus(form,
                new LDFWServerResponseEvent((JSONObject data, string m) =>
                    {
                        if (data.GetField("status").str == "2")
                        {
                            isOrderPaymentComplete = true;
                        }
                        isResultBack = true;
                    }),
                new LDFWServerResponseEvent((JSONObject data, string m) =>
                    {
                        isResultBack = true;
                    }));

            while (!isResultBack)
                yield return new WaitForSeconds(1);

        }
        SwitchUniwebviewPanel(false);
        UserDataController.instance.hasMadeFirstOrder = "1";

        checkForCompletionIEnumerator = null;
    }

    private void OnDestroy()
    {
        if (instance == this)
            instance = null;
    }

    #endregion


    #region Address

    /// <summary>
    /// Check for "default" address
    /// </summary>
    private void CheckForAddress(string selectedString = "")
    {
        JSONObject address = null;
        if (!string.IsNullOrEmpty(selectedString))
            address = AppDataController.instance.GetAddress(selectedString);

        if (address == null)
            address = AppDataController.instance.GetAddress("default");

        if (address == null)
            address = AppDataController.instance.GetAddress("0");

        if (address == null)
        {
            addressSection.Find("AddressBar").gameObject.SetActive(false);
            addressSection.Find("Empty").gameObject.SetActive(true);
        }

        // check for delivery fee based on address
        if (address != null)
            ResetAddress(address);
    }

    /// <summary>
    /// Resets address data with the new address json data
    /// </summary>
    /// <param name="address"></param>
    public void ResetAddress(JSONObject address)
    {
        selectedAddressID = address.GetField("id").str;

        addressSection.Find("AddressBar").gameObject.SetActive(true);
        addressSection.Find("AddressBar/Name").GetComponent<TextController>().ResetUI(address.GetField("name").str);
        addressSection.Find("AddressBar/ContactNumber").GetComponent<TextController>().ResetUI(address.GetField("phone").str);
        addressSection.Find("AddressBar/Address").GetComponent<TextController>().ResetUI(
            address.GetField("address").str + ", " + address.GetField("street").str + ", " + address.GetField("city").str + ", "
            + address.GetField("state").str + ", " + address.GetField("zip_code").str);

        //TestAddress (address);
    }


    #endregion

}