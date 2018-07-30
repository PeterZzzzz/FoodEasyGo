using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using System;

using LDFW.Network;

public class HomeGrouponScrollviewElementController : MonoBehaviour, IPointerClickHandler {

    public string grouponID;
    public JSONObject grouponData;

    public void OnPointerClick (PointerEventData eventData) {
        /*
        GrouponDetailPanelController.instance.grouponID = grouponID;
        GrouponDetailPanelController.instance.grouponData = grouponData;
        GrouponDetailPanelController.instance.OpenPanel ();
        */

        if(grouponID == "56")
        {
            Debug.Log("分享好友活动");
            InvitationPanelController.instance.OpenPanel();
        }else
        {
            RestaurantDetailPanelController.instance.OpenPanelForGroupon(grouponID);
        }
    }

    public void ResetUI (string id, string title_zh, string title_en, string text_zh, string text_en, string imgURL) {
        grouponID = id;

        LDFWImageDownloadController.instance.AddToCacheList (
                new ImageDownloader2 (imgURL, "groupon", transform.Find ("Image").GetComponent<RawImage> (), 4, null, null));

        
        transform.Find ("Title").GetComponent<TextController> ().ResetUI (title_zh.Replace ("/n", "\n"), title_en.Replace ("/n", "\n"));

        transform.Find ("Text").GetComponent<TextController> ().ResetUI (text_zh.Replace ("/n", "\n"), text_en.Replace ("/n", "\n"));

    }
}
