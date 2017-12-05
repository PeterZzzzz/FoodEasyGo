using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using System;

public class RestaurantDetailPanelCategoryBarController : MonoBehaviour, IPointerClickHandler {

    public bool isRestaurant = true;

    public string categoryID;
    public string restaurantID;

    public float accumualtedYOffset = 0;

    public void OnPointerClick (PointerEventData eventData) {
        if (isRestaurant) {
            RestaurantDetailPanelController.instance.LoadCategoryDishData (categoryID);
        } else {
            RestaurantDetailPanelController.instance.LoadGrouponListData (restaurantID);
        }
    }

    public void Reset (string id, bool restaurant = true) {
        isRestaurant = restaurant;

        if (isRestaurant) {
            categoryID = id;
            int total = CartController.instance.CountForGoodsType (categoryID);
            if (total == 0) {
                transform.Find ("CartNumber").gameObject.SetActive (false);
            } else {
                transform.Find ("CartNumber").gameObject.SetActive (true);
                transform.Find ("CartNumber/Text").GetComponent<Text> ().text = total.ToString ();
            }
        } else {
            restaurantID = id;
            transform.Find("CartNumber").gameObject.SetActive(false);
        }
    }
}
