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

    //由于添加了一菜品多分类，无法提取本地的购物车里的商品categoryID，所以该用提取商品ID作为对比条件，并进行优化，小红点可以显示该分类下总共添加的商品数量
    //public void Reset (string id, bool restaurant = true) {
    //    isRestaurant = restaurant;

    //    if (isRestaurant) {
    //        categoryID = id;
    //        int total = CartController.instance.CountForGoodsType (categoryID);
    //        if (total == 0) {
    //            transform.Find ("CartNumber").gameObject.SetActive (false);
    //        } else {
    //            transform.Find ("CartNumber").gameObject.SetActive (true);
    //            transform.Find ("CartNumber/Text").GetComponent<Text> ().text = total.ToString ();
    //        }
    //    } else {
    //        restaurantID = id;
    //        transform.Find("CartNumber").gameObject.SetActive(false);
    //    }
    //}

    public void Reset(JSONObject dishData, string id, bool restaurant = true)
    {
        isRestaurant = restaurant;

        if (isRestaurant)
        {
            categoryID = id;
            if (dishData != null)
            {
                int total = 0;
                for (int i = 0; dishData[i] != null; i++)
                {
                    total += CartController.instance.CountForGoods(dishData[i].GetField("id").str);
                }
                if (total == 0)
                {
                    transform.Find("CartNumber").gameObject.SetActive(false);
                }
                else
                {
                    transform.Find("CartNumber").gameObject.SetActive(true);
                    transform.Find("CartNumber/Text").GetComponent<Text>().text = total.ToString();
                }

            }
            else
            {
                transform.Find("CartNumber").gameObject.SetActive(false);
            }
        }
        else
        {
            restaurantID = id;
            transform.Find("CartNumber").gameObject.SetActive(false);
        }
    }

}
