using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using System;

using LDFW.Network;

public class GrouponPanelGrouponBarController : MonoBehaviour, IPointerClickHandler {

    string grouponID;

    public RawImage image;
    public TextController titleTextController;
    public TextController dateTextController;
    public TextController timeTextController;

    private JSONObject grouponData;

    public void OnPointerClick (PointerEventData eventData) {
        RestaurantDetailPanelController.instance.OpenPanelForGroupon (grouponID);
    }

    public void ReloadData (JSONObject data) {
        grouponData = data;

        grouponID = data.GetField ("id").str;
        LDFWImageDownloadController.instance.AddToCacheList (new ImageDownloader2 (data.GetField ("img").str.Replace ("\\/", "/"), "groupon", image, 3, null, null));

        titleTextController.ResetUI (data.GetField ("groupon_name").str, data.GetField ("groupon_name_en").str);
        //dateTextController.ResetUI ("预定时间: " + data.GetField ("begin_time").str + " - " + data.GetField ("end_time").str, "Reserve: " + data.GetField ("begin_time").str + " - " + data.GetField ("end_time").str);
        //timeTextController.ResetUI ("配送时间: " + data.GetField ("send_time").str, "Delivery: " + data.GetField ("send_time").str);
        timeTextController.ResetUI (data.GetField ("describe").str, data.GetField ("describe_en").str);

        GetComponent<LayoutElement> ().preferredHeight = 250f / 375f * (transform as RectTransform).rect.size.x;
    }
}
