using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

using LDFW;

public class CartPanelRestaurantBarController : MonoBehaviour {

    public string restaurantID;
    public RectTransform header;
    public TextController title;
    public LayoutElement layoutElement;
    public Image noDeliveryMask;
    public JSONObject data;

    public bool isOpen = false;
    public bool isMinOrderSatisfied = false;
    public bool isRestaurant = true;
    public bool canDeliver = true;
    public List<CartPanelDishBarController> dishBarList;

    public float _minOrder = 0f;
    private string _nameZH;
    private string _nameEN;
    private int headerHeight;

    void Awake () {
        layoutElement = GetComponent<LayoutElement> ();
        dishBarList = new List<CartPanelDishBarController> ();
        headerHeight = (int) header.GetComponent<LayoutElement> ().preferredHeight;
        layoutElement.preferredHeight = headerHeight;
    }

    public void ResetUI (JSONObject restaurantData, bool isRes, string id, string nameZH, string nameEN, float minConsume) {
        isRestaurant = isRes;
        data = restaurantData;
        restaurantID = id;
        _minOrder = minConsume;
        _nameZH = nameZH;
        _nameEN = nameEN;

        UpdateUI ();
    }

    public void UpdateUI () {
        string nameZH = _nameZH;
        string nameEN = _nameEN;

        if (!isRestaurant || data.GetField ("is_open").str == "1") {
            isOpen = true;
            if (!isMinOrderSatisfied) {
                nameZH += " <color=#FF0000>(最低消费: $" + _minOrder + ")</color>";
                nameEN += " <color=#FF0000>(Min Order: $" + _minOrder + ")</color>";
            }
        } else {
            isOpen = false;
            nameZH += " <color=#FF0000>(该店还未开始营业)</color>";
            nameEN += " <color=#FF0000>(Restaurant is not open)</color>";
        }

        if (canDeliver)
        {
            noDeliveryMask.gameObject.SetActive (false);
        }
        else
        {
            noDeliveryMask.gameObject.SetActive (true);
            nameZH += " <color=#FF0000>地址不支持配送</color>";
            nameEN += " <color=#FF0000>Address not eligible for delivery</color>";
        }
        

        title.supportRichText = true;
        title.ResetUI (nameZH, nameEN);
    }

    public void OnDeleteButtonClicked () {
        PopUpPanelController.instance.DisplayPopUpPanel (
            null,
            () => {
                CartPanelDishBarController barController;
                for (int i=0; i<transform.childCount; i++) {
                    barController = transform.GetChild (i).GetComponent<CartPanelDishBarController> ();
                    if (barController != null) {
                        CartController.instance.DeleteCartDetail (barController.cartDetailData._id);
                    }
                }
                transform.parent = null;
				CartPanelController.instance.ReloadPanel();
                gameObject.DestroyGO ();
            },
            "确定删除这个商店的所有订单吗？",
            "Are you sure you want to delete all orders made for this restaurant?");
    }

    public void AddDishBar (CartPanelDishBarController dishBar) {
        dishBar.transform.SetParent (transform);
        dishBar.transform.localScale = Vector3.one;
        dishBar.isRestaurantOpen = isOpen;
        dishBarList.Add (dishBar);
        layoutElement.preferredHeight += dishBar.layoutElement.preferredHeight;
        noDeliveryMask.transform.SetAsLastSibling ();

        CheckForMinOrder ();
    }

    public void RemoveDishBar (CartPanelDishBarController dishBar) {
        layoutElement.preferredHeight -= dishBar.layoutElement.preferredHeight;
        DebugLogger.Log ("height = " + layoutElement.preferredHeight);
        if (layoutElement.preferredHeight < 110) {
            gameObject.DestroyGO ();
        } else {
            dishBarList.Remove (dishBar);
            dishBar.gameObject.DestroyGO ();
        }

        CheckForMinOrder ();

        CartPanelController.instance.UpdateTitleBarInfo ();
        CartPanelController.instance.UpdateRestaurantStatus ();
        CartPanelController.instance.UpdatePayButtonStatus ();
    }

    public float GetTotalPrice () {
        float total = 0f;
        foreach (CartPanelDishBarController dish in dishBarList) {
            if (dish != null && dish.isSelectedForCheckOut) {
                total += dish.cartDetailData.GetTotalPrice ();
            }
        }
        return total;
    }
    
    public float GetExtraFee () {
        if (GetTotalPrice () >= float.Parse (data.GetField ("min_consume").str)) {
            return 0f;
        } else {
            return float.Parse (data.GetField ("extra_fee").str);
        }
    }

    public void CheckForMinOrder () {
        if (GetTotalPrice () < _minOrder) {
            isMinOrderSatisfied = false;
        } else {
            isMinOrderSatisfied = true;
        }
        UpdateUI ();
    }
}
