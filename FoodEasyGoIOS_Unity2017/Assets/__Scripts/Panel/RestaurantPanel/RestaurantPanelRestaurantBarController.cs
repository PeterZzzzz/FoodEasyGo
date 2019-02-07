using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

using LDFW.Network;
using System;

public class RestaurantPanelRestaurantBarController : MonoBehaviour, IPointerClickHandler {

    
    public JSONObject data;
    public string restaurantID;

    public RawImage restaurantImage;
    public TextController title;
    public Transform starSection;
    public TextController open;
    public TextController minConsump;
    //public TextController description;

    
    
    void Awake () {
        Reset ();
    }

    void Start() {
        Vector2 canvasSize = MainCanvasController.instance.canvasSize;
        (transform as RectTransform).sizeDelta = new Vector2 (canvasSize.x, canvasSize.x * 0.5f + 100);
    }

    public void Reset () {
        restaurantID = "";
        restaurantImage.texture = null;
        title.ResetUI ("");
        open.ResetUI ("");
        minConsump.ResetUI ("");
        //description.ResetUI ("");
    }

    public void ReloadUI (JSONObject restaurantdata) {
        data = restaurantdata;

        if (restaurantdata != null) {
            LDFWImageDownloadController.instance.AddToCacheList (
                new ImageDownloader2 (data.GetField ("img").str.Replace ("\\/", "/"), "restaurant", restaurantImage, 4, null, null));

            restaurantID = data.GetField ("id").str;
            if (data.GetField ("is_open").str == "1") {
                open.ResetUI ("营业中", "Open");
                open.color = new Color(4f / 255f, 212f / 255f, 119f / 255f, 1f);
            } else {
                open.ResetUI ("休息中", "Closed");
                open.color = new Color(239f / 255f, 70f / 255f, 64f / 255f, 1f);
            }
            title.ResetUI (data.GetField ("name").str, data.GetField ("name_en").str);
            minConsump.ResetUI ("最低消费：$" + data.GetField ("min_consume").str, "Min Order: $" + data.GetField ("min_consume").str);
            //取消了餐馆描述
            //description.ResetUI (data.GetField ("describe").str, data.GetField ("describe_en").str);
            //Debug.Log(data.GetField("ratings").str + "   " + double.Parse(data.GetField("ratings").str));
            for (int i = 1; i <= 5; i++)
            {
                if (i <= double.Parse(data.GetField("ratings").str) || data.GetField("ratings").str == "0.0")
                {
                    starSection.Find("Star" + i + "/Select").localScale = Vector3.one;
                }
                else
                {
                    starSection.Find("Star" + i + "/Select").localScale = Vector3.zero;
                }
            }


        }
    }

    public void OnRestaurantClicked () {
        DebugLogger.Log ("Restaurant clicked!");
    }

    public void OnPointerClick (PointerEventData eventData) {
        if (data.GetField("is_open").str == "1")
        {
            RestaurantDetailPanelController.instance.OpenPanel(restaurantID);
        }
        else
        {
            MessagePanelController.instance.DisplayPanel(Config.currentLanguage == Language.chinese ? "该餐厅尚未营业" : "Restaurant not open yet");
        }
    }
}
