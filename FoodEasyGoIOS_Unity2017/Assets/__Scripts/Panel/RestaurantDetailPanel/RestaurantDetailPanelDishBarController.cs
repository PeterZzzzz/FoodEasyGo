using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

using LDFW.Network;
using System;

public class RestaurantDetailPanelDishBarController : MonoBehaviour, IPointerClickHandler {

    public RawImage image;
    public string _imgURL;
    public string _restaurantID;
    public string _dishID;
    public string _dishTypeID;
    public string _price;
    public string _nameZH;
    public string _nameEN;
    public string _saleCount;
    public int _quantity = 0;

    public TextController titleT;
    public TextController priceT;
    public TextController saleCountT;
    public TextController quantityT;
    public Transform minusButton;
    public Transform plusButton;

    public JSONObject _data;

    public bool isRestaurant;
    public string grouponGoodsID;
    public string grouponID;




    public void Reset (JSONObject data, string categoryID, bool restaurant = true, string grouponID = "", string goodsID = "" ) {
        _data = data;
        isRestaurant = restaurant;
        this.grouponID = grouponID;
        this.grouponGoodsID = goodsID;

        if (_data != null) {
            CartDetailData cartDetailData = CartController.instance.SearchForCartDetailBasedOnDishID (_data.GetField ("id").str);
            Reset (
                _data.GetField ("img").str,
                _data.GetField ("restaurant_id").str,
                _data.GetField ("id").str,
                categoryID,
                cartDetailData == null ? 0 : cartDetailData._number,
                _data.GetField ("name").str,
                _data.GetField ("name_en").str,
                _data.GetField ("price").str,
                _data.GetField ("sail_count").str);
        } else {
            image.texture = null;
        }
    }

    public void Reset (string imageURL, string restaurant, string dish, string dishTypeid, int number, string nameZH, string nameEN, string priceNumber, string saleCount) {

        if (image != null) {
            image.texture = null;
            LDFWImageDownloadController.instance.AddToCacheList (
                new ImageDownloader2 (imageURL.Replace ("\\/", "/"), "restaurant", image, 1, null, null));
        }

        _imgURL = imageURL;
        _restaurantID = restaurant;
        _dishID = dish;
        _dishTypeID = dishTypeid;
        _quantity = number;
        _nameZH = nameZH;
        _nameEN = nameEN;
        _price = priceNumber;
        _saleCount = saleCount;

        ResetUI ();
    }

    public void ResetUI () {
        if (titleT != null) {
            titleT.ResetUI (_nameZH, _nameEN);
            priceT.ResetUI ("$" + _price);
            saleCountT.ResetUI ("售出: " + _saleCount, "Sales: " + _saleCount);
            UpdateUI ();
        }
    }

    public void OnPlusButtonClicked () {

        //if (isRestaurant)
        //{
        //    if (!RestaurantDetailPanelController.instance.isRestaurantOpen)
        //    {
        //        if (string.IsNullOrEmpty(RestaurantPanelController.instance.deliveryTimeID))
        //        {
        //            MessagePanelController.instance.DisplayPanel("Restaurant is closed, please choose a delivery time");
        //            return;
        //        }
        //    }
        //}

        if (_quantity <= 0)
        {
            OnPointerClick(null);
            return;
        }

        _quantity++;
        CartDetailData cartDetailData = CartController.instance.SearchForCartDetailBasedOnDishID (_dishID);
        if (cartDetailData != null) {
            cartDetailData.IncreaseQuantity (1);
        }
        UpdateUI ();
    }

    public void OnMinusButtonClicked () {
        if (_quantity > 0) {
            _quantity--;
        }

        CartDetailData cartDetailData = CartController.instance.SearchForCartDetailBasedOnDishID (_dishID);
        if (cartDetailData != null) {
            cartDetailData.IncreaseQuantity (-1);
        }
        UpdateUI ();
    }

    public void OnPointerClick (PointerEventData eventData) {
        RestaurantDishDetailPanelController.instance.OpenPanel (_dishID, null, this);
    }

    public void UpdateUI () {
        quantityT.ResetUI (_quantity.ToString ());
        if (_quantity <= 0) {
            _quantity = 0;
            minusButton.gameObject.SetActive (false);
        } else {
            minusButton.gameObject.SetActive (true);
        }



    }
}
