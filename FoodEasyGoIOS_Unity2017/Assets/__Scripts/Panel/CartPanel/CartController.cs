using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

using LDFW;
using LDFW.Network;
using LDFW.Utils;


public class CartController : MonoBehaviour
{

    public static CartController instance;

    public CartData cart;
    public string cartID = "0";


    void Awake()
    {
        if (instance != null)
        {
            Destroy(this);
            return;
        }
        instance = this;

    }

    private int getCartDetailAttemps = 0;
    public void GetCartDetails(Action successAction = null)
    {
        cart = new CartData();

        CartNetworkController.instance.GetCartDetails(
            new LDFWServerResponseEvent((JSONObject data, string m) =>
            {
                LoadCartDetail(data);
                if (successAction != null)
                {
                    successAction.Invoke();
                }
            }),
            new LDFWServerResponseEvent((JSONObject data, string m) =>
            {
                getCartDetailAttemps++;
                if (getCartDetailAttemps <= Config.serverCallGeneralAttemps)
                {
                    GetCartDetails();
                }
                else
                {
                    MessagePanelController.instance.DisplayPanel(m);
                }
            }));
    }

    private void LoadCartDetail(JSONObject data, bool isFromServer = true)
    {
        cart = new CartData();
        if (data != null && data.Count > 0)
        {
            cartID = data.GetField("id").str;
            cart = new CartData(cartID, 0f);
            if (data.GetField("details") != null && data.GetField("details").Count > 0)
            {
                for (int i = 0; data.GetField("details")[i] != null; i++)
                {
                    JSONObject cartDetail = data.GetField("details")[i];
                    CartDetailData cartDetailData = new CartDetailData(
                        cartDetail.GetField("id").str,
                        cartDetail.GetField("category").str,
                        cartDetail.GetField("deliver_time").str,
                        cartDetail.GetField("groupon_id").str,
                        cartDetail.GetField("groupon_goods_id").str,
                        cartDetail.GetField("goods_id").str,
                        cartDetail.GetField("dish_type") != null && cartDetail.GetField("dish_type").GetField("id") != null ?
                            cartDetail.GetField("dish_type").GetField("id").str : "",
                        cartDetail.GetField("restaurant_id").str,
                        cartDetail.GetField("restaurant").GetField("name").str,
                        cartDetail.GetField("restaurant").GetField("name_en").str,
                        cartDetail.GetField("attribute").str,
                        cartDetail.GetField("amount").str,
                        cartDetail.GetField("note").str,
                        int.Parse(cartDetail.GetField("number").str),
                        new DishData(
                            cartDetail.GetField("dish").GetField("id").str,
                            float.Parse(cartDetail.GetField("dish").GetField("price").str),
                            cartDetail.GetField("dish").GetField("img").str,
                            cartDetail.GetField("dish").GetField("name").str,
                            cartDetail.GetField("dish").GetField("name_en").str),
                        new Dictionary<string, AttributeData>());

                    JSONObject attributeData = cartDetail.GetField("attribute_data");
                    if (attributeData != null)
                    {
                        for (int j = 0; attributeData[j] != null; j++)
                        {
                            cartDetailData.AddAttribute(
                                attributeData[j].GetField("id").str,
                                float.Parse(attributeData[j].GetField("price").str),
                                int.Parse(attributeData[j].GetField("quantity").str),
                                attributeData[j].GetField("name").str,
                                attributeData[j].GetField("name_en").str);
                        }
                    }

                    cart.AddToCart(cartDetailData);

                    if (isFromServer)
                    {
                        cartDetailData.isSyncedWithServer = true;
                    }
                }
            }

            cart.SerializeDictionary();
        }

        FooterPanelController.instance.SwitchCartNotification(cart._keys.Count);
    }

    public void AddToCart(
        string category, string deliveryTimeID, string grouponID, string grouponGoodsID,
        string restaurantID, string restaurantNameZH, string restaurantNameEN,
        string dishID, string dishTypeID, string attributeList, string attributeNumberList,
        string notes, int number, DishData dishData, Dictionary<string, AttributeData> attributeDataDic)
    {

        DebugLogger.Log("add to cart: " + number);
        cart.AddToCart(new CartDetailData(
            "0", category, deliveryTimeID, grouponID, grouponGoodsID, dishID, dishTypeID,
            restaurantID, restaurantNameZH, restaurantNameEN, attributeList, attributeNumberList,
            notes, number, dishData, attributeDataDic));

        FooterPanelController.instance.SwitchCartNotification(cart._keys.Count);
    }

    public CartDetailData SearchForCartDetailBasedOnDishID(string dishID)
    {
        return cart.SearchForCartDetailBasedOnDishID(dishID);
    }

    public CartDetailData SearchForCartDetailBasedOnCartDetailID(string cartDetailID)
    {
        return cart.SearchForCartDetailBasedOnCartDetailID(cartDetailID);
    }

    public int CountForGoodsType(string goodsTypeID)
    {
        return cart.CountForGoodsType(goodsTypeID);
    }

    public void DeleteCartDetail(string cartDetailID)
    {
        cart.DeleteCartDetail(cartDetailID);
        FooterPanelController.instance.SwitchCartNotification(cart._keys.Count);
    }


}






[System.Serializable]
public class CartData
{
    public string _id;
    public float _tipPrice;
    [SerializeField]
    public Dictionary<string, CartDetailData> _cartDetailDic;
    [SerializeField]
    public List<string> _keys;
    [SerializeField]
    public List<CartDetailData> _values;

    public CartData(string id = "0", float tipPrice = 0f)
    {
        _id = id;
        _tipPrice = tipPrice;
        _cartDetailDic = new Dictionary<string, CartDetailData>();
        _keys = new List<string>();
        _values = new List<CartDetailData>();
    }

    public void AddToCart(CartDetailData cartDetail)
    {
        if (cartDetail._id == "0")
            cartDetail._id = "0-" + cartDetail._dishData._id;

        while (_cartDetailDic.ContainsKey(cartDetail._id))
            cartDetail._id = "0" + cartDetail._id;

        _cartDetailDic.Add(cartDetail._id, cartDetail);
        SerializeDictionary();
        //SyncWithServer ();
        FooterPanelController.instance.SwitchCartNotification(_keys.Count);
    }

    public float GetTotalPrice()
    {
        float price = _tipPrice;
        foreach (var detail in _cartDetailDic)
        {
            price += detail.Value.GetTotalPrice();
        }
        return price;
    }

    public CartDetailData GetCartDetailData(string dishID)
    {
        foreach (var detail in _cartDetailDic)
        {
            if (detail.Value._goodsID == dishID)
            {
                return detail.Value;
            }
        }
        return null;
    }

    public void SerializeDictionary()
    {
        _keys.Clear();
        _values.Clear();
        foreach (KeyValuePair<string, CartDetailData> pair in _cartDetailDic)
        {
            _keys.Add(pair.Key);
            _values.Add(pair.Value);
            pair.Value.SerializeDictionary();
        }
    }

    public CartDetailData SearchForCartDetailBasedOnDishID(string dishID)
    {
        foreach (KeyValuePair<string, CartDetailData> pair in _cartDetailDic)
        {
            if (pair.Value._dishData._id == dishID)
            {
                return pair.Value;
            }
        }
        return null;
    }

    public CartDetailData SearchForCartDetailBasedOnCartDetailID(string cartDetailID)
    {
        foreach (KeyValuePair<string, CartDetailData> pair in _cartDetailDic)
        {
            if (pair.Value._id == cartDetailID)
            {
                return pair.Value;
            }
        }
        return null;
    }

    public int CountForGoodsType(string goodsTypeID)
    {
        int total = 0;
        foreach (KeyValuePair<string, CartDetailData> pair in _cartDetailDic)
        {
            if (pair.Value._goodsTypeID == goodsTypeID)
            {
                total++;
            }
        }
        return total;
    }

    public void DeleteCartDetail(string cartDetailID)
    {
        DebugLogger.Log("DeleteCartDetail is called: " + cartDetailID);
        if (_cartDetailDic.ContainsKey(cartDetailID))
        {
            WWWForm form = new WWWForm();
            form.AddField("cart_detail_id", cartDetailID);

            CartNetworkController.instance.DeleteCartDetail(form,
                new LDFWServerResponseEvent((JSONObject data, string m) =>
                {
                    _cartDetailDic.Remove(cartDetailID);
                    SerializeDictionary();
                    CartPanelController.instance.UpdateTotalFeeAmount();
                    FooterPanelController.instance.SwitchCartNotification(_keys.Count);
                }),
                new LDFWServerResponseEvent((JSONObject data, string m) =>
                {
                    //DeleteCartDetail (cartDetailID);
                }));

        }
    }

    public bool IsSyncedWithServer()
    {
        foreach (KeyValuePair<string, CartDetailData> pair in _cartDetailDic)
        {
            if (!pair.Value.isSyncedWithServer)
                return false;
        }
        return true;
    }

    public void SyncWithServer()
    {
        CartController.instance.StartCoroutine(SyncWithServerCoroutine());
    }

    private IEnumerator SyncWithServerCoroutine()
    {
        DebugLogger.Log("Sync with server coroutine");
        LoadingPanelController.instance.DisplayPanelImmediately();
        foreach (KeyValuePair<string, CartDetailData> pair in _cartDetailDic)
        {
            if (!pair.Value.isSyncedWithServer)
            {
                pair.Value.SyncWithServer();
            }
        }

        while (true)
        {
            if (IsSyncedWithServer())
            {
                break;
            }
            else
            {
                yield return new WaitForSeconds(0.5f);
            }
        }

        LoadingPanelController.instance.HidePanelImmediately();
        FooterPanelController.instance.SwitchCartNotification(_keys.Count);
        CartController.instance.GetCartDetails();
    }

    public string GetRestaurantIDList()
    {
        string restaurantIDListString = "";
        foreach (KeyValuePair<string, CartDetailData> pair in _cartDetailDic)
        {
            if (!restaurantIDListString.Contains(" " + pair.Value._restaurantID + " "))
            {
                if (restaurantIDListString == "")
                {
                    restaurantIDListString = " " + pair.Value._restaurantID + " ";
                }
                else
                {
                    restaurantIDListString = restaurantIDListString + ", " + pair.Value._restaurantID + " ";
                }

            }
        }

        return restaurantIDListString;
    }
}

[System.Serializable]
public class CartDetailData
{
    public string _id;
    public string _categoryID;
    public string _deliverTimeID;
    public string _grouponID;
    public string _grouponGoodsID;
    public string _goodsID;
    public string _goodsTypeID;
    public string _restaurantID;
    public string _restaurantNameZH;
    public string _restaurantNameEN;
    public string _attributeIDList;
    public string _attributeNumberList;
    public string _notes;
    public int _number;

    public bool isSyncedWithServer = false;

    [SerializeField]
    public DishData _dishData;
    [SerializeField]
    public Dictionary<string, AttributeData> _attributeDic;
    [SerializeField]
    public List<string> keys;
    [SerializeField]
    public List<AttributeData> values;

    public CartDetailData(string id, string category, string deliverTimeID, string grouponID, string grouponGoodsID, string goodsID, string goodsTypeID, string goodsRestaurantID, string restaurantNameZH, string restaurantNameEN, string attributeIDList, string attributeNumberList, string notes, int number, DishData dishData, Dictionary<string, AttributeData> attributeDic)
    {
        _id = id;
        SetData(category, deliverTimeID, grouponID, grouponGoodsID, goodsID, goodsTypeID, goodsRestaurantID, restaurantNameZH, restaurantNameEN, attributeIDList, attributeNumberList, notes, number, dishData, attributeDic);
    }

    public void SetData(string category, string deliverTimeID, string grouponID, string grouponGoodsID, string goodsID, string goodsTypeID, string goodsRestaurantID, string restaurantNameZH, string restaurantNameEN, string attributeIDList, string attributeNumberList, string notes, int number, DishData dishData, Dictionary<string, AttributeData> attributeDic)
    {
        _categoryID = category;
        _deliverTimeID = deliverTimeID;
        _grouponID = grouponID;
        _grouponGoodsID = grouponGoodsID;
        _goodsID = goodsID;
        _goodsTypeID = goodsTypeID;
        _restaurantID = goodsRestaurantID;
        _restaurantNameZH = restaurantNameZH;
        _restaurantNameEN = restaurantNameEN;
        _attributeIDList = attributeIDList;
        _attributeNumberList = attributeNumberList;
        _notes = notes;
        _number = number;
        _dishData = dishData;
        _attributeDic = attributeDic;
        keys = new List<string>();
        values = new List<AttributeData>();
        SerializeDictionary();

        isSyncedWithServer = false;
    }

    public void AddAttribute(string id, float price, int quantity, string nameZH, string nameEN)
    {
        _attributeDic.Add(id, new AttributeData(id, price, quantity, nameZH, nameEN));
        isSyncedWithServer = false;
    }

    public void DeleteAttribute(string id)
    {
        if (_attributeDic.ContainsKey(id))
        {
            _attributeDic.Remove(id);
            isSyncedWithServer = false;
        }
    }

    public float GetDishPrice()
    {
        return _dishData.GetTotalPrice();
    }

    public float GetAttributeTotalPrice()
    {
        float price = 0f;
        foreach (var attribute in _attributeDic)
        {
            price += attribute.Value.GetTotalPrice();
        }
        return price;
    }

    public float GetTotalPrice()
    {
        return (GetDishPrice() + GetAttributeTotalPrice()) * _number;
    }

    public void SerializeDictionary()
    {
        keys.Clear();
        values.Clear();
        foreach (KeyValuePair<string, AttributeData> pair in _attributeDic)
        {
            keys.Add(pair.Key);
            values.Add(pair.Value);
        }
    }

    public void IncreaseQuantity(int increase)
    {
        _number = Mathf.Max(0, _number + increase);
        isSyncedWithServer = false;
        if (_number == 0)
        {
            isSyncedWithServer = true;
            CartController.instance.DeleteCartDetail(this._id);
        }
    }

    public string GetAttributeNameListEN()
    {
        string result = "";
        foreach (var value in values)
        {
            if (string.IsNullOrEmpty(result))
                result = value._nameEN;
            else
                result += ", " + value._nameEN;

            if (value._quantity > 1)
                result += "x" + value._quantity;
        }
        return result;
    }

    public string GetAttributeNameListZH()
    {
        string result = "";
        foreach (var value in values)
        {
            if (string.IsNullOrEmpty(result))
                result = value._nameZH;
            else
                result += ", " + value._nameZH;

            if (value._quantity > 1)
                result += "x" + value._quantity;
        }
        return result;
    }

    public void SyncWithServer()
    {
        if (!isSyncedWithServer)
        {
            DebugLogger.Log("Syncwithserver is called: " + _id);
            UpdateAttributeIDList();

            WWWForm form = new WWWForm();
            form.AddField("id", _id);
            form.AddField("category", _categoryID);
            form.AddField("deliver_time", _deliverTimeID);
            form.AddField("restaurant_id", _restaurantID);
            form.AddField("groupon_id", _grouponID);
            form.AddField("groupon_goods_id", _grouponGoodsID);
            form.AddField("goods_id", _goodsID);
            form.AddField("attribute", _attributeIDList);
            form.AddField("attribute_number", _attributeNumberList);
            form.AddField("note", _notes);
            form.AddField("number", _number);

            if (_id.Contains("-"))
            {
                CartNetworkController.instance.AddToCart(form,
                    new LDFWServerResponseEvent((JSONObject data, string m) =>
                    {
                        //CartController.instance.GetCartDetails (() => { isSyncedWithServer = true; });
                        isSyncedWithServer = true;
                    }),
                    new LDFWServerResponseEvent((JSONObject data, string m) =>
                    {
                        SyncWithServer();
                    }));
            }
            else
            {
                CartNetworkController.instance.UpdateCartDetail(form,
                    new LDFWServerResponseEvent((JSONObject data, string m) =>
                    {
                        //CartController.instance.GetCartDetails (() => { isSyncedWithServer = true; });
                        isSyncedWithServer = true;
                    }),
                    new LDFWServerResponseEvent((JSONObject data, string m) =>
                    {
                        SyncWithServer();
                    }));
            }
        }
    }

    private void UpdateAttributeIDList()
    {
        _attributeIDList = "";
        _attributeNumberList = "";
        foreach (KeyValuePair<string, AttributeData> pair in _attributeDic)
        {
            if (_attributeIDList == "")
            {
                _attributeIDList = pair.Value._id;
                _attributeNumberList = pair.Value._quantity.ToString();
            }
            else
            {
                _attributeIDList = _attributeIDList + "," + pair.Value._id;
                _attributeNumberList = _attributeNumberList + "," + pair.Value._quantity.ToString();
            }
        }

    }
}

[System.Serializable]
public class DishData
{
    public string _id;
    public float _price;
    public string _imgURL;
    public string _nameZH;
    public string _nameEN;

    public DishData(string id, float price, string imgURL, string nameZH, string nameEN)
    {
        _id = id;
        _price = price;
        _imgURL = imgURL;
        _nameZH = nameZH;
        _nameEN = nameEN;
    }

    public float GetTotalPrice()
    {
        return _price;
    }
}

[System.Serializable]
public class AttributeData
{
    public string _id;
    public float _price;
    public int _quantity;
    public string _nameZH;
    public string _nameEN;

    public AttributeData(string id, float price, int quantity, string nameZH, string nameEN)
    {
        _id = id;
        _price = price;
        _quantity = quantity;
        _nameZH = nameZH;
        _nameEN = nameEN;
    }

    public float GetTotalPrice()
    {
        return _price * _quantity;
    }
}

