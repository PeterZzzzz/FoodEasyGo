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
    public string _desZH;
    public string _desEN;
    public int _quantity = 0;

    public TextController titleT;
    public TextController priceT;
    public TextController descriptionT;
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
                _data.GetField ("describe").str.Replace("\\r","").Replace("\\n",""), 
                _data.GetField ("describe_en").str.Replace("\\r", "").Replace("\\n", ""));
        } else {
            image.texture = null;
        }
    }

    public void Reset (string imageURL, string restaurant, string dish, string dishTypeid, int number, string nameZH, string nameEN, string priceNumber, string descriptionZH, string descriptionEN) {

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
        _desZH = descriptionZH;
        _desEN = descriptionEN;
        ResetUI ();
    }

    public void ResetUI () {
        if (titleT != null) {
            titleT.ResetUI (_nameZH, _nameEN);
            priceT.ResetUI ("$" + _price);
            descriptionT.ResetUI ("详情:" + _desZH, "Details:" + _desEN);
            UpdateUI ();
        }
    }

    public void OnPlusButtonClicked () {
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
