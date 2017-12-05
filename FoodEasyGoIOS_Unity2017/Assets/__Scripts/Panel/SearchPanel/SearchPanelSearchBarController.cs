using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.Network;

public class SearchPanelSearchBarController : MonoBehaviour {

    private string _id;
    private string _type;   // 1 = restaurant 2 = restaurant dish 3 = commodity

    private JSONObject _data;
    private GameObject tempDishBarGO;
    private GameObject tempCommodityBarGO;

    public void Reset (JSONObject data, string type) {
        _data = data;

        if (_data != null) {
            _id = _data.GetField ("id").str;
            _type = type;
        }

        Destroy (tempDishBarGO);
        Destroy (tempCommodityBarGO);

        ResetUI ();
    }

    public void OpenDetails () {
        SearchPanelController.instance.transform.localScale = Vector3.zero;
        
        if (_type == "1") {
            // restaurant
            RestaurantDetailPanelController.instance.OpenPanel (_id);
        } else if (_type == "2") {
            // dish
            tempDishBarGO = new GameObject ();
            tempDishBarGO.transform.localScale = Vector3.zero;
            RestaurantDetailPanelDishBarController dishBarController = tempDishBarGO.AddComponent<RestaurantDetailPanelDishBarController> ();
            dishBarController.Reset (_data, "");
            RestaurantDishDetailPanelController.instance.OpenPanel (_data.GetField("id").str, null, dishBarController);
        } else if (_type == "3") {
            // commodity
            tempCommodityBarGO = Instantiate (Resources.Load ("GroceryPanel/DefaultDisplayContentGroceryBar") as GameObject);
            tempCommodityBarGO.transform.localScale = Vector3.zero;
            GroceryPanelGroceryBarElementController commodityBarController = tempCommodityBarGO.GetComponent<GroceryPanelGroceryBarElementController> ();
            commodityBarController.Reset (_data, null);
            RestaurantDishDetailPanelController.instance.OpenPanel (1, _id, "", commodityBarController);
        }
    }

    public void ResetUI () {
        if (_data != null) {
            //LDFWImageDownloadController.instance.AddToCacheList (
            //    new ImageDownloader2 (_data.GetField ("img").str.Replace ("\\/", "/"), "restaurant", transform.Find ("RawImage").GetComponent<RawImage> (), 1, null, null));

            transform.Find ("Title").GetComponent<TextController> ().ResetUI (
                _data.GetField ("name").str, _data.GetField ("name_en").str);

            if (_type == "1") {
                transform.Find ("Text").GetComponent<TextController> ().ResetUI (
                    "最低消费: " + _data.GetField ("min_consume").str,
                    "Min Consumption: " + _data.GetField ("min_consume").str);
                transform.Find ("Text").GetComponent<TextController> ().color = Color.grey;
            } else {
                transform.Find ("Text").GetComponent<TextController> ().ResetUI (
                    "$" + _data.GetField ("price").str);
                transform.Find ("Text").GetComponent<TextController> ().color = Extensions.AppColor1 ();
            }
        }
    }



}
