using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using LDFW.Network;

public class HomeGroceryScrollviewController : BaseUIController, LanguageInterface {

    public RectTransform content;

    private int loadedRestaurantCount = 0;
    private int recommendListLength = 9;

    protected new void Awake () {
        base.Awake ();
        loadedRestaurantCount = 0;
    }

    void Start () {
        content.sizeDelta = new Vector2 (MainCanvasController.instance.canvasSize.x * 3, 0f);
    }

    public void LoadData (JSONObject data) {
        RectTransform currentGrocery;
        for (int i = 0; data[i] != null; i++) {

            currentGrocery = (Instantiate (Resources.Load ("HomePanel/GroceryScrollviewElement")) as GameObject).transform as RectTransform;
            currentGrocery.SetParent (content);
            currentGrocery.name = i.ToString ();
            currentGrocery.GetComponent<LayoutElement> ().preferredWidth = MainCanvasController.instance.canvasSize.x / 3f;
            currentGrocery.localScale = Vector3.one;
            
            LDFWImageDownloadController.instance.AddToCacheList (new ImageDownloader2 (data[i].GetField ("img").str.Replace ("\\/", "/"), "grocery", currentGrocery.Find ("Image").GetComponent<RawImage> (), 1, null, null));

            currentGrocery.Find ("Title").GetComponent<TextController> ().textZH = data[i].GetField ("name").str;
            currentGrocery.Find ("Title").GetComponent<TextController> ().textEN = data[i].GetField ("name_en").str;

            currentGrocery.Find ("Text").GetComponent<TextController> ().textZH = "$" + data[i].GetField ("price").str;
            currentGrocery.Find ("Text").GetComponent<TextController> ().textEN = "$" + data[i].GetField ("price").str;
        }

        OnLanguageChanged (Config.currentLanguage);
    }

    public void OnLeftButtonClicked () {

    }

    public void OnRightButtonClicked () {

    }

    public override void OnLanguageChanged (Language language) {
        base.OnLanguageChanged (language);

        for (int i = 0; i < content.childCount; i++) {
            content.GetChild (i).FindChild ("Title").GetComponent<LanguageInterface> ().OnLanguageChanged (language);
            content.GetChild (i).FindChild ("Text").GetComponent<LanguageInterface> ().OnLanguageChanged (language);
        }
    }
}
