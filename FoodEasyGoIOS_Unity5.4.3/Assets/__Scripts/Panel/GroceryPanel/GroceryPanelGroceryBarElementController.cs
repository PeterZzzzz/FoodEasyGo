using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.Network;


public class GroceryPanelGroceryBarElementController : MonoBehaviour {

    public string _restaurant1ID;
    public string _restaurant2ID;
    public string _grocery1ID;
    public string _grocery2ID;
    public string _imageURL1;
    public string _imageURL2;
    public string _price1;
    public string _price2;
    public string _nameZH1;
    public string _nameZH2;
    public string _nameEN1;
    public string _nameEN2;


    public TextController title1;
    public TextController price1;
    public RawImage image1;

    public TextController title2;
    public TextController price2;
    public RawImage image2;

    //public int groceryID1Count;
    

    public void Reset (JSONObject grocery1, JSONObject grocery2) {
        if (grocery1 != null) {
            if (grocery2 == null) {
                grocery2 = grocery1;
            }

            Reset (grocery1.GetField ("id").str, grocery2.GetField ("id").str,
                grocery1.GetField ("img").str, grocery2.GetField ("img").str,
                grocery1.GetField ("name").str, grocery2.GetField ("name").str,
                grocery1.GetField ("name_en").str, grocery2.GetField ("name_en").str,
                grocery1.GetField ("price").str, grocery2.GetField ("price").str,
                grocery1.GetField ("restaurant_id").str, grocery2.GetField ("restaurant_id").str);
        } else {
            image1.texture = null;
            image2.texture = null;
        }
    }

    public void Reset (string _id1, string _id2, string imageURL1, string imageURL2, 
        string nameZH1, string nameZH2, string nameEN1, string nameEN2, string price1S, string price2S, string restaurant1, string restaurant2) {

        _grocery1ID = _id1;
        _grocery2ID = _id2;
        _imageURL1 = imageURL1;
        _imageURL2 = imageURL2;
        _price1 = price1S;
        _price2 = price2S;
        _nameZH1 = nameZH1;
        _nameZH2 = nameZH2;
        _nameEN1 = nameEN1;
        _nameEN2 = nameEN2;
        _restaurant1ID = restaurant1;
        _restaurant2ID = restaurant2;


        if (title1 != null) {
            title1.ResetUI (_nameZH1, _nameEN1);
            price1.ResetUI ("$" + _price1);
            Destroy (image1.texture);
            LDFWImageDownloadController.instance.AddToCacheList (new ImageDownloader2 (_imageURL1.Replace ("\\/", "/"), "grocery", image1, 1, null, null));

            title2.ResetUI (_nameZH2, _nameEN2);
            price2.ResetUI ("$" + _price2);
            Destroy (image1.texture);
            LDFWImageDownloadController.instance.AddToCacheList (new ImageDownloader2 (_imageURL2.Replace ("\\/", "/"), "grocery", image2, 1, null, null));
        }
        
        (image1.transform as RectTransform).sizeDelta = Vector2.one * ((transform as RectTransform).rect.size.x - 30) * 0.5f;
        (image2.transform as RectTransform).sizeDelta = Vector2.one * ((transform as RectTransform).rect.size.x - 30) * 0.5f;
    }

    public void OnImage1AddButtonClicked () {
        //DebugLogger.Log ("Image1 add button clicked");
        RestaurantDishDetailPanelController.instance.OpenPanel (1, _grocery1ID, "", this);
        //CartController.instance.AddToCart ("3", "", "", "", "", "", "", grocery1ID, "", "", "",  )
    }

    public void OnImage2AddButtonClicked () {
        RestaurantDishDetailPanelController.instance.OpenPanel (2, _grocery2ID, "", this);
        //DebugLogger.Log ("Image2 add button clicked");
    }
}
