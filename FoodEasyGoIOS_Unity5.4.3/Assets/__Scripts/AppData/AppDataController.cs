using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

using LDFW;
using LDFW.Network;

public class AppDataController : MonoBehaviour {

    public static AppDataController                     instance;

    /*
    public JSONObject                                   restaurantCategory;
    public Texture2D                                    restaurantCategoryIcon;

    public JSONObject                                   groceryCategory;
    public Texture2D                                    groceryCategoryIcon;

    public JSONObject                                   grouponCategory;
    public Texture2D                                    grouponCategoryIcon;

    public JSONObject                                   slideShow;
    public Texture2D                                    slide1;
    public Texture2D                                    slide2;
    public Texture2D                                    slide3;
    public Texture2D                                    slide4;
    public Texture2D                                    slide5;
    public Texture2D                                    slide6;
    */



    public Dictionary<string, JSONObject>               restaurantDishData;
    public Dictionary<string, string>                   deliveryDestineTime;
    public Dictionary<string, JSONObject>               addressData;
    public Dictionary<string, JSONObject>               creditCardData;
    public Dictionary<string, JSONObject>               couponData;
    public Dictionary<string, JSONObject>               commonCouponData;

    
    void Awake () {
        if (instance != null) {
            Destroy (this);
            return;
        }

        instance = this;

        deliveryDestineTime = new Dictionary<string, string> ();
        
        Config.currentLanguage = PlayerPrefs.GetString("language") == "zh" ? Language.chinese : Language.english;
    }

    IEnumerator Start () {
        yield return null;
        GetDeliveryDestineTime ();
        //SyncAddressList ();
        //SyncCreditCardList ();
    }


    #region DeliveryDestineTime
    private int getDeliveryDestineTimeAttempts = 0;
    private void GetDeliveryDestineTime () {
        InfoNetworkController.instance.GetFoodReserveConfig (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                Debug.LogError("Deliver destine time");
                deliveryDestineTime.Clear ();
                for (int i=0; data[i] != null; i++) {
                    deliveryDestineTime.Add (data[i].GetField ("id").str, data[i].GetField ("destine_time").str);
                }
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                getDeliveryDestineTimeAttempts++;
                if (getDeliveryDestineTimeAttempts < 3) {
                    AppDataController.instance.GetDeliveryDestineTime ();
                }
            }));
    }

    public string GetDeliveryDestineTime (string key) {
        if (deliveryDestineTime.ContainsKey (key)) {
            return deliveryDestineTime[key];
        } else {
            return "";
        }
    }
    #endregion



    #region AddressList
    private int syncAddressListAttempts = 0;
    public void SyncAddressList (Action success = null) {
        UserDataNetworkController.instance.GetUserAddressList (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                syncAddressListAttempts = 0;
                addressData = new Dictionary<string, JSONObject> ();
                if (data != null && data.Count > 0) {
                    addressData = new Dictionary<string, JSONObject> ();

                    for (int i = 0; data[i] != null; i++) {
                        if (data[i].GetField ("is_default").str == "1")
                            addressData.Add ("default", data[i]);
                        
                        addressData.Add (data[i].GetField("id").str, data[i]);
                    }
                }
                if (success != null) {
                    success ();
                }
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                syncAddressListAttempts++;
                if (syncAddressListAttempts <= 3) {
                    AppDataController.instance.SyncAddressList ();
                }
            }));
    }

    public JSONObject GetAddress (string key) {
        if (addressData.ContainsKey (key)) {
            return addressData[key];
        } else {
            string availableKeys = "";
            string firstKey = "";
            foreach (var aKey in addressData.Keys)
            {
                if (string.IsNullOrEmpty(firstKey))
                    firstKey = aKey;

                availableKeys += aKey + ",";
            }

            Debug.LogError ("Cannot find key: " + key + " from available keys: " + availableKeys + " returning: " + firstKey);

            if (string.IsNullOrEmpty(firstKey))
                return null;
            else
                return GetAddress(firstKey);
        }
    }

    public List<JSONObject> GetAllAddresses (string exceptList = "")
    {
        List<JSONObject> result = new List<JSONObject>();
        foreach (var key in addressData.Keys)
        {
            if (!exceptList.Contains(key))
                result.Add (addressData[key]);
        }


        return result;
    }
    
    

    #endregion


    #region CreditCardList
    private int syncCreditCardListAttemps = 0;
    public void SyncCreditCardList () {
        UserDataNetworkController.instance.GetUserPaymentList (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                creditCardData = new Dictionary<string, JSONObject> ();
                if (data != null && data.Count > 0) {
                    int count = 0;
                    for (int i=0; data[i] != null; i++) {
                        if (data[i].GetField ("is_default").str == "1") {
                            creditCardData.Add ("default", data[i]);
                        } else {
                            creditCardData.Add (count.ToString (), data[i]);
                            count++;
                        }
                    }
                }
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                syncCreditCardListAttemps++;
                if (syncCreditCardListAttemps <= 3) {
                    AppDataController.instance.SyncCreditCardList ();
                }
            }));
    }

    public JSONObject GetCreditCard (string key) {
        if (creditCardData.ContainsKey (key)) {
            return creditCardData[key];
        } else {
            return null;
        }
    }
    #endregion


    #region CouponList
    private int synCouponAttempts = 0;
    public void SyncCouponList () {
        UserDataNetworkController.instance.GetUserCouponList (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                JSONObject data2 = data.GetField ("normal_coupon");
                couponData = new Dictionary<string, JSONObject> ();

                if (data2 != null && data2.Count > 0) {
                    for (int i = 0; data2[i] != null; i++) {
                        couponData.Add (i.ToString (), data2[i]);
                    }
                }


                data2 = data.GetField ("common_coupon");
                commonCouponData = new Dictionary<string, JSONObject> ();

                if (data2 != null && data2.Count > 0)
                {
                    for (int i=0; data2[i] != null; i++)
                    {
                        commonCouponData.Add (i.ToString (), data2[i]);
                    }
                }
                //Debug.Log ("CommonCouponCount = " + commonCouponData.Count);
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                synCouponAttempts++;
                if (synCouponAttempts <= 3) {
                    AppDataController.instance.SyncCouponList ();
                }
            }));
    }

    public JSONObject GetCoupon (string key) {
        if (couponData.ContainsKey (key)) {
            return couponData[key];
        } else if (commonCouponData.ContainsKey (key)) {
            return commonCouponData[key];
        } else {
            return null;
        }
    }
    #endregion
}
