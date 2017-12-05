using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW.Network;

public class HomeGrouponScrollviewController : BaseUIController, LanguageInterface {
    

    private int loadedRestaurantCount = 0;
    private int recommendListLength = 6;

    protected new void Awake () {
        base.Awake ();
        loadedRestaurantCount = 0;
    }



    public void LoadData (JSONObject data) {
        RectTransform currentGroupon;
        for (int i = 0; i < 4; i++) {
            
            currentGroupon = transform.GetChild (i) as RectTransform;

            if (data[i] == null) {
                currentGroupon.gameObject.SetActive (false);
            } else {


                currentGroupon.GetComponent<LayoutElement> ().preferredHeight = MainCanvasController.instance.canvasSize.x * 0.9f;

                currentGroupon.GetComponent<HomeGrouponScrollviewElementController> ().grouponData = data[i];

                currentGroupon.GetComponent<HomeGrouponScrollviewElementController> ().ResetUI (
                    data[i].GetField ("id").str, data[i].GetField ("groupon_name").str, data[i].GetField ("groupon_name_en").str,
                    data[i].GetField ("describe").str,
                    data[i].GetField ("describe_en").str,
                    //"预定时间: " + data[i].GetField ("begin_time").str + "-" + data[i].GetField ("end_time").str + "/n" + "配送时间: " + data[i].GetField ("send_time").str,
                    //"Reserve: " + data[i].GetField ("begin_time").str + "-" + data[i].GetField ("end_time").str + "/n" + "Delivery: " + data[i].GetField ("send_time").str,
                    data[i].GetField ("img").str.Replace ("\\/", "/"));

            }
        }

        OnLanguageChanged (Config.currentLanguage);
    }

    
}
