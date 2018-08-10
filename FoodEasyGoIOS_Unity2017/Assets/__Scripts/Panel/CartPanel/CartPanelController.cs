using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

using LDFW;
using LDFW.UI;
using LDFW.Network;
using LDFW.Tween;

using Debug = UnityEngine.Debug;

public class CartPanelController : BasePanelController
{

    public static CartPanelController instance;


    // Transform
    public Transform addressSection;
    public ScrollRect scrollRect;
    public LDFWToggleController header2ToggleController;
    public RectTransform deliveryContent;
    public RectTransform reservationContent;
    public TextController totalPriceText;
    public TextController deliveryTitle;
    public TextController reservationTitle;
    public Button payButton;
    public RectTransform bottomBarRect;

    public string selectedAddressID = "";
    public string selectedRegionID = "";


    // Prefab
    public GameObject restaurantBarPrefab;
    public GameObject dishBarPrefab;


    public Dictionary<int, float> restaurantDeliverFee;
    public List<CartPanelRestaurantBarController> nowRestaurantBarList;
    public List<CartPanelRestaurantBarController> deliveryRestaurantBarList;


    // Restaurant Data
    private Dictionary<string, JSONObject> restaurantDic;
    private bool isDisplayNowRestaurant;
    private IEnumerator getDeliverFeeIEnumerator;
    private bool isPhoneVerified;


    new void Awake()
    {
        if (instance != null)
        {
            instance.gameObject.DestroyGO();
        }
        instance = this;

        base.Awake();

        totalPriceText.ResetUI("");


        if (Screen.width == 1125)
        {
            // iPhoneX
            scrollRect.GetComponent<RectTransform>().offsetMin = new Vector2(scrollRect.GetComponent<RectTransform>().offsetMin.x, scrollRect.GetComponent<RectTransform>().offsetMin.y + 20);

            Vector2 pos = bottomBarRect.position;
            pos.y += 20;
            bottomBarRect.position = pos;
            Debug.Log("iPhoneX适配3");

        }
    }




    #region Overrides

    public override void ResetPanel()
    {
    }

    public override void ReloadPanel()
    {
        if (PanelListController.instance != null &&
            PanelListController.instance.currentBasePanel == this)
        {
            selectedAddressID = "";
            selectedRegionID = "";
            deliveryContent.DestroyAllChildren();
            reservationContent.DestroyAllChildren();
            StartCoroutine(ReloadPanelCoroutine());
        }
    }

    private IEnumerator ReloadPanelCoroutine()
    {
        LoadingPanelController.instance.DisplayPanel();
        CartController.instance.cart.SyncWithServer();
        yield return new WaitForSeconds(1f);
        while (!CartController.instance.cart.IsSyncedWithServer())
        {
            yield return null;
        }

        bool isGetCartDetailFinished = false;
        CartController.instance.GetCartDetails(() =>
       {
           isGetCartDetailFinished = true;
       });
        while (!isGetCartDetailFinished)
            yield return null;

        GetRestaurantData();

        while (restaurantDic == null)
            yield return null;

        LoadingPanelController.instance.HidePanel();



        yield return StartCoroutine(LoadAllPanelCoroutine());



    }

    #endregion



    #region LoadData

    IEnumerator LoadAllPanelCoroutine()
    {

        Dictionary<string, CartPanelRestaurantBarController> restaurantBarDic = new Dictionary<string, CartPanelRestaurantBarController>();
        nowRestaurantBarList = new List<CartPanelRestaurantBarController>();
        deliveryRestaurantBarList = new List<CartPanelRestaurantBarController>();

        foreach (KeyValuePair<string, CartDetailData> pair in CartController.instance.cart._cartDetailDic)
        {
            //DebugLogger.Log ("CartDetailData: " + pair.Value._dishData._nameZH);
            Transform dishBar = Instantiate(dishBarPrefab).transform;
            CartPanelDishBarController dishBarScript = dishBar.GetComponent<CartPanelDishBarController>();
            dishBarScript.cartDetailData = pair.Value;
            dishBarScript.scrollRect = scrollRect;


            string restaurantID = pair.Value._restaurantID;
            string key = pair.Value._restaurantID + "-" + pair.Value._categoryID;
            if (restaurantBarDic.ContainsKey(key))
            {
                restaurantBarDic[key].AddDishBar(dishBarScript);
                dishBarScript.isRestaurantOpen = restaurantBarDic[key].isOpen;
                dishBarScript.ResetUI();
            }
            else
            {
                Transform restaurantBar = Instantiate(restaurantBarPrefab).transform;

                if (pair.Value._categoryID == "1")
                    restaurantBar.SetParent(deliveryContent);
                else
                    restaurantBar.SetParent(reservationContent);

                restaurantBar.localScale = Vector3.one;
                CartPanelRestaurantBarController restaurantBarScript = restaurantBar.GetComponent<CartPanelRestaurantBarController>();

                if (pair.Value._categoryID == "1")
                    nowRestaurantBarList.Add(restaurantBarScript);
                else
                    deliveryRestaurantBarList.Add(restaurantBarScript);

                restaurantBarScript.ResetUI(restaurantDic[pair.Value._restaurantID], pair.Value._categoryID == "1", pair.Value._restaurantID, pair.Value._restaurantNameZH, pair.Value._restaurantNameEN, float.Parse(restaurantDic[pair.Value._restaurantID].GetField("min_consume").str));
                restaurantBarScript.AddDishBar(dishBarScript);
                dishBarScript.isRestaurantOpen = restaurantBarScript.isOpen;
                dishBarScript.ResetUI();


                restaurantBarDic.Add(key, restaurantBarScript);
            }

            yield return null;


        }

        CheckForAddress(selectedAddressID);
        UpdateRestaurantStatus();
        UpdateTitleBarInfo();

        RestartGetDeliverFee();
        while (getDeliverFeeIEnumerator != null)
            yield return new WaitForSeconds(0.5f);

        UpdatePayButtonStatus();

        //header2ToggleController.SelectToggle(0);
        //SwitchDeliveryContent (true);
    }


    private void GetRestaurantData()
    {

        restaurantDic = null;

        WWWForm form = new WWWForm();
        form.AddField("restaurant_list", CartController.instance.cart.GetRestaurantIDList());
        form.AddField("groupon_restaurant_list", CartController.instance.cart.GetGrouponRestaurantIDList());
        form.AddField("is_schedule", isDisplayNowRestaurant ? "0" : "1");
        form.AddField("schedule_id", RestaurantPanelController.instance.deliveryTimeID);
        DebugLogger.Log("GetRestaurantData = " + CartController.instance.cart.GetRestaurantIDList());

        LoadingPanelController.instance.DisplayPanelImmediately();
        RestaurantNetworkController.instance.GetTargetRestaurantList(
            form,
            new LDFWServerResponseEvent((JSONObject data, string m) =>
           {
               LoadingPanelController.instance.HidePanelImmediately();
               restaurantDic = new Dictionary<string, JSONObject>();
               data = data.GetField("data");
               for (int i = 0; data[i] != null; i++)
               {
                   restaurantDic.Add(data[i].GetField("id").str, data[i]);
               }

           }),
            new LDFWServerResponseEvent((JSONObject data, string m) =>
           {
               LoadingPanelController.instance.HidePanelImmediately();
               GetRestaurantData();
           }));
    }

    public void GetTotalPriceDetails(out string totalPrice, out string extraFee, out string deliveryFee)
    {
        float tp = 0f;
        float xf = 0f;
        float df = 0f;

        if (restaurantDeliverFee != null)
        {

            if (isDisplayNowRestaurant && nowRestaurantBarList != null)
            {
                foreach (CartPanelRestaurantBarController restaurant in nowRestaurantBarList)
                {
                    if (restaurant.isOpen && restaurant.isMinOrderSatisfied && restaurant.canDeliver)
                    {
                        tp += restaurant.GetTotalPrice();
                        xf += restaurant.GetExtraFee();
                        if (restaurantDeliverFee.ContainsKey(int.Parse(restaurant.restaurantID)))
                            df += restaurantDeliverFee[int.Parse(restaurant.restaurantID)];

                    }
                }
            }
            else if (!isDisplayNowRestaurant && deliveryRestaurantBarList != null)
            {
                foreach (CartPanelRestaurantBarController restaurant in deliveryRestaurantBarList)
                {
                    if (restaurant.isOpen && restaurant.isMinOrderSatisfied && restaurant.canDeliver)
                    {
                        tp += restaurant.GetTotalPrice();
                        xf += restaurant.GetExtraFee();
                        if (restaurantDeliverFee.ContainsKey(int.Parse(restaurant.restaurantID)))
                        {
                            df += restaurantDeliverFee[int.Parse(restaurant.restaurantID)];
                        }
                    }
                }
            }
        }

        totalPrice = tp.ToString("0.00");
        extraFee = xf.ToString("0.00");
        deliveryFee = df.ToString("0.00");
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
    /// Opens address panel
    /// </summary>
    public void OpenAddressPanel()
    {
        PanelListController.instance.removePanelAction = () =>
        {
            ReloadPanel();

        };

        AddressPanelController.instance.OpenPanel();
    }

    /// <summary>
    /// Opens address pop up toggle
    /// </summary>
    public void OpenAddressPopUpToggle()
    {
        List<string> addressList = new List<string>();
        List<string> addressIDList = new List<string>();
        JSONObject address = null;
        List<JSONObject> addressJSONList = AppDataController.instance.GetAllAddresses("default");


        DebugLogger.Log("AddressJsonList length = " + addressJSONList.Count);
        for (int i = 0; i < addressJSONList.Count; i++)
        {
            address = addressJSONList[i];
            addressList.Add(address.GetField("address").str + " " + address.GetField("street").str);
            addressIDList.Add(address.GetField("id").str);
        }

        PopUpTogglePanelController.instance.DisplayPopUpTogglePanel(true, true, addressList, null, addressIDList,
            () =>
            {
                ResetAddress(AppDataController.instance.GetAddress(PopUpTogglePanelController.instance.toggleController.GetSelectedElementIDs()));
                RestartGetDeliverFee();
                UpdatePayButtonStatus();
            },
            () =>
            {
                RestartGetDeliverFee();
            });
    }


    /// <summary>
    /// Resets address data with the new address json data
    /// </summary>
    /// <param name="address"></param>
    public void ResetAddress(JSONObject address)
    {
        selectedAddressID = address.GetField("id").str;
        selectedRegionID = address.GetField("region_id").str;

        addressSection.Find("AddressBar").gameObject.SetActive(true);
        addressSection.Find("Empty").gameObject.SetActive(false);
        addressSection.Find("AddressBar/Name").GetComponent<TextController>().ResetUI(address.GetField("name").str);
        addressSection.Find("AddressBar/ContactNumber").GetComponent<TextController>().ResetUI(address.GetField("phone").str);
        addressSection.Find("AddressBar/Address").GetComponent<TextController>().ResetUI(
            address.GetField("address").str + ", " + address.GetField("street").str + ", " + address.GetField("city").str + ", "
            + address.GetField("state").str + ", " + address.GetField("zip_code").str);

        CheckPhoneVerification(address.GetField("id").str);
        Debug.Log("这个地址的ID是：" + address.GetField("id").str);
    }


    #endregion



    #region Others


    public void UpdateTitleBarInfo()
    {
        deliveryTitle.ResetUI("即买即送" + " (" + deliveryContent.childCount + ")", "Now" + " (" + deliveryContent.childCount + ")");
        reservationTitle.ResetUI("预定，超市，团购" + " (" + reservationContent.childCount + ")", "Schedule, Grocery, Groupon" + " (" + reservationContent.childCount + ")");
    }

    public void OnOrderSomethingButtonClicked()
    {
        RestaurantPanelController.instance.OpenPanel();
    }

    public void OnCheckOutButtonClicked()
    {
        if (addressSection.Find("AddressBar/Name").GetComponent<TextController>().IsTextEmpty())
        {
            if (Config.currentLanguage == Language.chinese)
                MessagePanelController.instance.DisplayPanel("缺少收货人名字, 请完善信息");
            else
                MessagePanelController.instance.DisplayPanel("Missing recipient name, please complete your address data");

            return;
        }
        if (addressSection.Find("AddressBar/ContactNumber").GetComponent<TextController>().IsTextEmpty())
        {
            if (Config.currentLanguage == Language.chinese)
                MessagePanelController.instance.DisplayPanel("缺少联系电话, 请完善信息");
            else
                MessagePanelController.instance.DisplayPanel("Missing contact phone number, please complete your address data");

            return;
        }
        if (!isPhoneVerified)
        {
            if (Config.currentLanguage == Language.chinese)
                MessagePanelController.instance.DisplayPanel("号码未认证, 请前往“我的账户”—>“地址管理”认证号码");
            else
                MessagePanelController.instance.DisplayPanel("This phone number is has not been verified, please go to “Account” -> “Address Management” to verify this number");

            return;
        }
        StartCoroutine(CheckOutCoroutine());
    }

    private IEnumerator CheckOutCoroutine()
    {

        if (isDisplayNowRestaurant)
            PlaceOrderPanelController.instance.isCurrentOrderInstantSend = true;
        else
            PlaceOrderPanelController.instance.isCurrentOrderInstantSend = false;

        LoadingPanelController.instance.DisplayPanel();
        CartController.instance.cart.SyncWithServer();
        while (!CartController.instance.cart.IsSyncedWithServer())
        {
            DebugLogger.Log("Syncing...");
            yield return new WaitForSeconds(1f);
        }
        CartController.instance.cart = null;
        CartController.instance.GetCartDetails(() => { PlaceOrderPanelController.instance.OpenPanel(); });
        while (CartController.instance.cart == null)
        {
            DebugLogger.Log("Syncing...");
            yield return new WaitForSeconds(1f);
        }
        LoadingPanelController.instance.HidePanel();
        //ResetPanel ();
        //ReloadPanel ();
        //PlaceOrderPanelController.instance.OpenPanel ();
    }

    public void SwitchDeliveryContent(bool state)
    {


        if (state)
        {
            isDisplayNowRestaurant = true;
            scrollRect.content = deliveryContent;
            deliveryContent.localPosition = Vector3.zero;
            deliveryContent.localScale = Vector3.one;

            reservationContent.localScale = Vector3.zero;
        }
        else
        {
            isDisplayNowRestaurant = false;
            scrollRect.content = reservationContent;
            reservationContent.localPosition = Vector3.zero;
            reservationContent.localScale = Vector3.one;

            deliveryContent.localScale = Vector3.zero;
        }

        UpdateTotalFeeAmount();
        UpdatePayButtonStatus();
        //ReloadPanel();
    }

    public void UpdateTotalFeeAmount()
    {
        string tp;
        string xf;
        string df;
        GetTotalPriceDetails(out tp, out xf, out df);
        totalPriceText.ResetUI("总金额: " + tp, "Total price: " + tp);
    }

    public void UpdateRestaurantStatus()
    {
        foreach (var restaurant in nowRestaurantBarList)
        {
            if (restaurant != null)
            {
                restaurant.CheckForMinOrder();
            }
        }
        foreach (var restaurant in deliveryRestaurantBarList)
        {
            if (restaurant != null)
            {
                restaurant.CheckForMinOrder();
            }
        }
    }

    public void UpdatePayButtonStatus()
    {
        payButton.interactable = false;
        if (string.IsNullOrEmpty(selectedAddressID))
            return;

        if (isDisplayNowRestaurant && nowRestaurantBarList != null)
        {
            foreach (var restaurant in nowRestaurantBarList)
            {
                if (restaurant != null && restaurant.isOpen && restaurant.isMinOrderSatisfied && restaurant.canDeliver)
                {
                    payButton.interactable = true;
                    break;
                }
            }
        }
        else if (!isDisplayNowRestaurant && deliveryRestaurantBarList != null)
        {
            foreach (var restaurant in deliveryRestaurantBarList)
            {
                if (restaurant != null && restaurant.isOpen && restaurant.isMinOrderSatisfied && restaurant.canDeliver)
                {
                    payButton.interactable = true;
                    break;
                }
            }

        }

        UpdateTotalFeeAmount();
    }

    public void RestartGetDeliverFee()
    {
        if (getDeliverFeeIEnumerator != null)
            StopCoroutine(getDeliverFeeIEnumerator);

        StartCoroutine(getDeliverFeeIEnumerator = GetDeliverFeeCoroutine());
    }

    private IEnumerator GetDeliverFeeCoroutine()
    {
        LoadingPanelController.instance.DisplayPanel();

        bool isFinishedGettingDeliverFee = false;
        WWWForm form = new WWWForm();
        form.AddField("restaurant_id_list", CartController.instance.cart.GetRestaurantIDList());
        form.AddField("delivery_region_id", this.selectedRegionID);

        RestaurantNetworkController.instance.GetRestaurantListDeliverFees(form,
            new LDFWServerResponseEvent((JSONObject data, string message) =>
           {
               restaurantDeliverFee = new Dictionary<int, float>();
               if (data != null)
               {
                   for (int i = 0; data[i] != null; i++)
                   {
                       DebugLogger.Log("RestaurantDeliveryFee.add: " + int.Parse(data[i].GetField("restaurant_id").str) + ": " + float.Parse(data[i].GetField("deliver_fee").str));
                       restaurantDeliverFee.Add(int.Parse(data[i].GetField("restaurant_id").str), float.Parse(data[i].GetField("deliver_fee").str));
                   }
               }
               isFinishedGettingDeliverFee = true;
           }),
            new LDFWServerResponseEvent((JSONObject data, string message) =>
           {
               MessagePanelController.instance.DisplayPanel(message);
           }));

        while (!isFinishedGettingDeliverFee)
            yield return new WaitForSeconds(0.5f);

        ProcessRestaurantListBasedOnDeliverFee();
        UpdatePayButtonStatus();
        LoadingPanelController.instance.HidePanel();

        getDeliverFeeIEnumerator = null;
    }

    private void ProcessRestaurantListBasedOnDeliverFee()
    {
        if (isDisplayNowRestaurant && nowRestaurantBarList != null)
        {
            foreach (CartPanelRestaurantBarController restaurant in nowRestaurantBarList)
            {
                restaurant.canDeliver = restaurantDeliverFee.ContainsKey(int.Parse(restaurant.restaurantID));
                restaurant.UpdateUI();
            }
        }
        else if (!isDisplayNowRestaurant && deliveryRestaurantBarList != null)
        {

            foreach (CartPanelRestaurantBarController restaurant in deliveryRestaurantBarList)
            {
                restaurant.canDeliver = restaurantDeliverFee.ContainsKey(int.Parse(restaurant.restaurantID));
                restaurant.UpdateUI();
            }
        }
    }


    public void CheckPhoneVerification(string addressID)
    {
        WWWForm form = new WWWForm();
        form.AddField("addressID", addressID);
        UserDataNetworkController.instance.GetVerificationInfo(form,
        new LDFWServerResponseEvent((JSONObject data, string m) =>
        {
            Debug.Log("电话验证后台交互成功 结果是：" + data.str);
            if (data.str == "1")
            {
                Debug.Log("yes ver");
                isPhoneVerified = true;
            }
            else
            {
                Debug.Log("no ver");
                isPhoneVerified = false;
            }
        }),
        new LDFWServerResponseEvent((JSONObject data, string m) =>
        {
            Debug.Log("电话验证后台交互失败：" + data.str);

        }));
    }
    #endregion
}
