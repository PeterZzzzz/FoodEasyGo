﻿using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

using LDFW.Network;
using System;

public class RestaurantPanelRestaurantBarController : MonoBehaviour, IPointerClickHandler {

    
    public JSONObject data;
    public string restaurantID;

    public RawImage restaurantImage;
    public RectTransform restaurantClosedCurtain;
    public TextController title;
    public TextController open;
    public TextController minConsump;
    public TextController description;

    
    
    void Awake () {
        Reset ();
    }

    void Start() {
        Vector2 canvasSize = MainCanvasController.instance.canvasSize;
        (transform as RectTransform).sizeDelta = new Vector2 (canvasSize.x, canvasSize.x * 0.5f + 100);
    }

    public void Reset () {
        restaurantID = "";
        SetRestaurantOpenStatus (true);
        restaurantImage.texture = null;
        title.ResetUI ("");
        open.ResetUI ("");
        minConsump.ResetUI ("");
        description.ResetUI ("");
    }

    public void ReloadUI (JSONObject restaurantdata) {
        data = restaurantdata;

        if (restaurantdata != null) {
            LDFWImageDownloadController.instance.AddToCacheList (
                new ImageDownloader2 (data.GetField ("img").str.Replace ("\\/", "/"), "restaurant", restaurantImage, 4, null, null));

            restaurantID = data.GetField ("id").str;
            if (data.GetField ("is_open").str == "1") {
                open.ResetUI ("营业中", "Open");
            } else {
                open.ResetUI ("休息中", "Closed");
            }
            title.ResetUI (data.GetField ("name").str, data.GetField ("name_en").str);
            minConsump.ResetUI ("最低消费：$" + data.GetField ("min_consume").str, "Min Order: $" + data.GetField ("min_consume").str);
            description.ResetUI (data.GetField ("describe").str, data.GetField ("describe_en").str);
            SetRestaurantOpenStatus (data.GetField ("is_open").str == "1");
        }
    }


    public void SetRestaurantOpenStatus (bool state) {
        restaurantClosedCurtain.gameObject.SetActive (!state);
    }

    public void OnRestaurantClicked () {
        DebugLogger.Log ("Restaurant clicked!");
    }

    public void OnPointerClick (PointerEventData eventData) {
        RestaurantDetailPanelController.instance.OpenPanel (restaurantID);
    }
}
