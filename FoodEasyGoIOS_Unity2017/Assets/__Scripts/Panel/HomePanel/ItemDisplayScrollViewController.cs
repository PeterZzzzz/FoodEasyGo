using System.Collections;
using System.Collections.Generic;
using LDFW.Network;
using UnityEngine;
using UnityEngine.UI;

public class ItemDisplayScrollViewController : BaseUIController, LanguageInterface {

    public RectTransform content;

    void Start()
    {
        //content.sizeDelta = new Vector2(MainCanvasController.instance.canvasSize.x * 3, 0f);
    }

    public void LoadRestaurantData(JSONObject data)
    {
        RectTransform currentRestaurant;
        for (int i = 0; data[i] != null; i++)
        {

            currentRestaurant = (Instantiate(Resources.Load("HomePanel/RestaurantDisplayScrollViewElement")) as GameObject).transform as RectTransform;
            currentRestaurant.SetParent(content);
            currentRestaurant.name = i.ToString();
            //currentRestaurant.GetComponent<LayoutElement>().preferredWidth = MainCanvasController.instance.canvasSize.x / 3f;
            currentRestaurant.localScale = Vector3.one;

            LDFWImageDownloadController.instance.AddToCacheList(new ImageDownloader2(data[i].GetField("img").str.Replace("\\/", "/"), "restaurant", currentRestaurant.Find("Image").GetComponent<RawImage>(), 2, null, null));

            currentRestaurant.Find("Title").GetComponent<TextController>().textZH = data[i].GetField("name").str;
            currentRestaurant.Find("Title").GetComponent<TextController>().textEN = data[i].GetField("name_en").str;

            for (int j = 1; j <= 5; j++)
            {
                if (j <= double.Parse(data[i].GetField("ratings").str) || data[i].GetField("ratings").str == "0.0")
                {
                    currentRestaurant.Find("RatingSection/Stars/Star" + j + "/Select").localScale = Vector3.one;
                }
                else
                {
                    currentRestaurant.Find("RatingSection/Stars/Star" + j + "/Select").localScale = Vector3.zero;
                }
            }
            if (data[i].GetField("ratings").str == "0.0")
                currentRestaurant.Find("RatingSection/Rating").GetComponent<Text>().text = "5.0";
            else
                currentRestaurant.Find("RatingSection/Rating").GetComponent<Text>().text = data[i].GetField("ratings").str;

            currentRestaurant.GetComponent<HomeRestaurantSectionElementController>().restaurantID = data[i].GetField("id").str;

        }

        OnLanguageChanged(Config.currentLanguage);
    }

    public override void OnLanguageChanged(Language language)
    {
        base.OnLanguageChanged(language);

        for (int i = 0; i < content.childCount; i++)
        {
            content.GetChild(i).Find("Title").GetComponent<LanguageInterface>().OnLanguageChanged(language);
        }
    }
}
