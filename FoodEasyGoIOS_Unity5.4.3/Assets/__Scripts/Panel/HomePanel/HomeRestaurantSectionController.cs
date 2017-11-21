using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW.Network;

public class HomeRestaurantSectionController : BaseUIController, LanguageInterface {
    

    private int loadedRestaurantCount = 0;
    private int recommendListLength = 6;

    protected new void Awake () {
        base.Awake ();
        loadedRestaurantCount = 0;
    }


    public void LoadData (JSONObject data) {
        RectTransform currentRestaurant;
        for (int i=0; i < 6; i++) {
            
            currentRestaurant = transform.GetChild (i) as RectTransform;
            //currentRestaurant.GetComponent<LayoutElement> ().preferredWidth = MainCanvasController.instance.canvasSize.x / 2f;
            //currentRestaurant.localScale = Vector3.one;

            if (data[i] == null) {
                currentRestaurant.gameObject.SetActive (false);
            } else {
                currentRestaurant.gameObject.SetActive (true);

                LDFWImageDownloadController.instance.AddToCacheList (
                    new ImageDownloader2 (data[i].GetField ("img").str.Replace ("\\/", "/"), "restaurant", currentRestaurant.Find ("Image").GetComponent<RawImage> (), 2, null, null));

                currentRestaurant.Find ("Title").GetComponent<TextController> ().textZH = data[i].GetField ("name").str;
                currentRestaurant.Find ("Title").GetComponent<TextController> ().textEN = data[i].GetField ("name_en").str;

                currentRestaurant.Find ("Text").GetComponent<TextController> ().textZH = "最低消费: $" + data[i].GetField ("min_consume").str;
                currentRestaurant.Find ("Text").GetComponent<TextController> ().textEN = "Min: $" + data[i].GetField ("min_consume").str;

                currentRestaurant.GetComponent<HomeRestaurantSectionElementController> ().restaurantID = data[i].GetField ("id").str;

            }
        }

        OnLanguageChanged (Config.currentLanguage);
    }   

    public void OnLeftButtonClicked () {

    }

    public void OnRightButtonClicked () {

    }

    public override void OnLanguageChanged (Language language) {
        base.OnLanguageChanged (language);

        for (int i = 0; i < transform.childCount; i++) {
            transform.GetChild (i).Find ("Title").GetComponent<LanguageInterface> ().OnLanguageChanged (language);
            transform.GetChild (i).Find ("Text").GetComponent<LanguageInterface> ().OnLanguageChanged (language);
        }
    }
}
