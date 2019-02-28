using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;

using LDFW;
using LDFW.UI;
using LDFW.Network;


public class RestaurantDetailPanelController : BasePanelController
{

    public static RestaurantDetailPanelController instance;

    public bool isRestaurantData = true;

    public string grouponID = "";
    public string restaurantID = "92";
    public string restaurantNameZH = "";
    public string restaurantNameEN = "";
    public bool isRestaurantOpen = false;

    public LDFWToggleController categoryToggleController;

    //public ScrollRectController                     parentScrolLRect;
    public RestaurantDetailPanelDishEndlessScroll dishEndlessScrollController;
    public RectTransform viewPortRect;
    public RectTransform dishContent;
    public RectTransform commentContent;
    public RectTransform noCommentBar;
    public RectTransform backgroundImageRect;
    public RectTransform basicInfoSection;
    public RectTransform contentRaiseDistance;

    // Prefab section
    public GameObject dishCategoryBarPrefab;
    public GameObject dishBarPrefab;
    public GameObject categoryBarPrefab;

    // Data section
    public Dictionary<string, JSONObject> dictionaryCategoryData;
    public Dictionary<string, JSONObject> dictionaryDishData;
    public Dictionary<string, JSONObject> dictionaryCommentData;

    public Dictionary<string, JSONObject> grouponRestaurantData;
    public Dictionary<string, JSONObject> grouponGoodsData;

    // User Comments
    public List<Transform> allComments;
    public List<Transform> positiveComments;
    public List<Transform> negativeComments;


    new void Awake()
    {
        if (instance != null)
        {
            instance.gameObject.DestroyGO();
        }
        instance = this;

        base.Awake();

        dictionaryCategoryData = null;
        dictionaryDishData = null;
        dictionaryCommentData = null;

        if (Screen.width == 1125 || Screen.width == 1242 || Screen.width == 828)
        {
            // iPhoneX
            viewPortRect.offsetMin = new Vector2(viewPortRect.offsetMin.x, viewPortRect.offsetMin.y + 20);

            Debug.Log("iPhoneX适配10");
        }
    }

    new void Start()
    {
        base.Start();

        dishContent.GetComponent<LayoutElement>().preferredHeight = panelSizeDelta.y - 100 - 30 - 50;
        if (Screen.width == 1125 || Screen.width == 1242 || Screen.width == 828)
        {
            dishContent.GetComponent<LayoutElement>().preferredHeight = panelSizeDelta.y - 100 - 30 - 50 - 20;
            Debug.Log("iPhoneX适配10");
        }
        backgroundImageRect.GetComponent<LayoutElement>().preferredHeight = panelSizeDelta.x / 2;
        //panelSizeDelta.x/2是背景图片的高度，基本信息面板下降高度为背景图高的3/4
        basicInfoSection.localPosition = new Vector2(basicInfoSection.localPosition.x, basicInfoSection.localPosition.y - panelSizeDelta.x / 8 * 3);
        contentRaiseDistance.GetComponent<LayoutElement>().preferredHeight = 90 + panelSizeDelta.x / 8 * 3;
    }

    #region Overrides
    public override void ResetPanel()
    {

        DestroyAllCategoryContents();
        backgroundImageRect.GetComponent<RawImage>().texture = null;
        basicInfoSection.Find("RestaurantName").GetComponent<TextController>().ResetUI("");
        basicInfoSection.Find("Address").GetComponent<TextController>().ResetUI("");
        basicInfoSection.Find("GrouponDescription").GetComponent<TextController>().ResetUI("");
        basicInfoSection.Find("RatingSection").gameObject.SetActive(false);
        basicInfoSection.Find("RestaurantStatus").GetComponent<TextController>().ResetUI("");
        basicInfoSection.Find("MinConsumption").GetComponent<TextController>().ResetUI("");

        SwitchToDishMode();

    }

    public override void ReloadPanel()
    {
        StartCoroutine(LoadDishDetailPanelCoroutine());
    }
    public override void OpenPanel()
    {
        Debug.LogError("OpenPanel() should not be called");
        // Do nothing
    }

    public void OpenPanel(string restaurant)
    {
        isRestaurantData = true;
        restaurantID = restaurant;
        base.OpenPanel();
    }

    public void OpenPanelForGroupon(string id)
    {
        DebugLogger.Log("OpenPanelForGroupon");
        isRestaurantData = false;
        grouponID = id;
        base.OpenPanel();
    }
    #endregion


    #region RestaurantDishData
    public void SwitchToDishMode()
    {
        commentContent.gameObject.SetActive(false);
        dishContent.gameObject.SetActive(true);

        transform.Find("Viewport/DishContent/TitleSection/DishesButton").GetComponent<RestaurantDetailPanelTitleSectionToggleElementController>().SelectToggleElement();
        transform.Find("Viewport/DishContent/TitleSection/CommentsButton").GetComponent<RestaurantDetailPanelTitleSectionToggleElementController>().DeselectToggleElement();
        if (!isRestaurantData)
        {
            transform.Find("Viewport/DishContent/TitleSection/CommentsButton").gameObject.SetActive(false);
        }
        else
        {
            transform.Find("Viewport/DishContent/TitleSection/CommentsButton").gameObject.SetActive(true);
        }
    }

    private IEnumerator LoadDishDetailPanelCoroutine()
    {
        yield return null;
        if (isRestaurantData)
        {
            JSONObject cachedData = RestaurantCacheController.instance.RetrieveCachedRestaurant(restaurantID);

            if (cachedData != null)
            {
                StartCoroutine(LoadContentAndDishData(cachedData));
            }
            else
            {
                LoadingPanelController.instance.DisplayPanel();
                LDFWWWWForm form = new LDFWWWWForm();
                form.AddField("restaurant_id", restaurantID);
                RestaurantNetworkController.instance.GetRestaurantDetail(
                    form.wwwForm,
                    new LDFWServerResponseEvent((JSONObject data, string m) =>
                    {
                        LoadingPanelController.instance.HidePanelImmediately();
                        RestaurantCacheController.instance.CacheRestaurant(data.GetField("restaurant").GetField("id").str, data);
                        StartCoroutine(LoadContentAndDishData(data));
                    }),
                    new LDFWServerResponseEvent((JSONObject data, string m) =>
                    {
                        LoadingPanelController.instance.HidePanelImmediately();
                    }));
            }
        }
        else
        {
            if (string.IsNullOrEmpty(grouponID))
            {
                Debug.LogError("Missing groupon iD!");
                yield break;
            }
            LoadingPanelController.instance.DisplayPanel();
            WWWForm form = new WWWForm();
            form.AddField("groupon_id", grouponID);
            GrouponNetworkController.instance.GetGrouponDetail(
                form,
                new LDFWServerResponseEvent((JSONObject data, string m) =>
                {
                    LoadingPanelController.instance.HidePanelImmediately();
                    StartCoroutine(LoadGrouponData(data));
                }),
                new LDFWServerResponseEvent((JSONObject data, string m) =>
                {
                    LoadingPanelController.instance.HidePanelImmediately();
                }));



        }
    }

    private void DestroyAllCategoryContents()
    {
        RectTransform categoryContent = RestaurantDetailPanelCategoryScrollRectController.instance.content;
        RestaurantDetailPanelCategoryScrollRectController.instance.normalizedPosition = new Vector2(0, 0);
        while (categoryContent.childCount > 0)
        {
            Transform temp = categoryContent.GetChild(0);
            temp.SetParent(null);
            temp.localScale = Vector3.zero;
            temp.gameObject.DestroyGO();
        }
        LDFWGCController.instance.ClearGCList();
    }


    private IEnumerator LoadContentAndDishData(JSONObject data)
    {

        dictionaryCategoryData = new Dictionary<string, JSONObject>();
        dictionaryDishData = new Dictionary<string, JSONObject>();

        yield return null;

        // Restaurant General Info
        JSONObject restaurantData = data.GetField("restaurant");
        restaurantID = restaurantData.GetField("id").str;
        restaurantNameZH = restaurantData.GetField("name").str;
        restaurantNameEN = restaurantData.GetField("name_en").str;

        //load basic info
        LDFWImageDownloadController.instance.AddToCacheList(new ImageDownloader2(restaurantData.GetField("img").str.Replace("\\/", "/"), "restaurant", backgroundImageRect.GetComponent<RawImage>(), 5, null, null));
        basicInfoSection.Find("RestaurantName").GetComponent<TextController>().ResetUI(restaurantNameZH, restaurantNameEN);
        basicInfoSection.Find("Address").GetComponent<TextController>().ResetUI(restaurantData.GetField("address").str, restaurantData.GetField("address_en").str);
        //Ratings
        basicInfoSection.Find("RatingSection").gameObject.SetActive(true);
        for (int i = 1; i <= 5; i++)
        {
            if (i <= double.Parse(restaurantData.GetField("ratings").str) || restaurantData.GetField("ratings").str == "0.0")
            {
                basicInfoSection.Find("RatingSection/Stars/Star" + i + "/Select").localScale = Vector3.one;
            }
            else
            {
                basicInfoSection.Find("RatingSection/Stars/Star" + i + "/Select").localScale = Vector3.zero;
            }
        }
        basicInfoSection.Find("RatingSection/Rate").GetComponent<Text>().text = restaurantData.GetField("ratings").str;
        //Open status
        if (restaurantData.GetField("is_open").str == "1")
        {
            isRestaurantOpen = true;
            basicInfoSection.Find("RestaurantStatus").GetComponent<TextController>().ResetUI("营业中", "Open");
            basicInfoSection.Find("RestaurantStatus").GetComponent<TextController>().color = new Color(4f / 255f, 212f / 255f, 119f / 255f, 1f);
        }
        else
        {
            isRestaurantOpen = false;
            basicInfoSection.Find("RestaurantStatus").GetComponent<TextController>().ResetUI("休息中", "Closed");
            basicInfoSection.Find("RestaurantStatus").GetComponent<TextController>().color = new Color(239f / 255f, 70f / 255f, 64f / 255f, 1f);
        }
        basicInfoSection.Find("MinConsumption").GetComponent<TextController>().ResetUI("最低消费: $" + restaurantData.GetField("min_consume").str, "Min Order: $" + restaurantData.GetField("min_consume").str);

        //计算开门时间的code
        //string[] startTime = restaurantData.GetField("from_time").str.Split(',');
        //string[] toTime = restaurantData.GetField("to_time").str.Split(',');
        //string[] secondStartTime = restaurantData.GetField("second_from_time").str.Split(',');
        //string[] secondToTime = restaurantData.GetField("second_to_time").str.Split(',');

        //int currentWeekday = (int)DateTime.Now.DayOfWeek; //0:sunday ~ 6:saturday
        //string hour = "";
        //if (startTime.Length > currentWeekday)
        //{
        //    hour = startTime[currentWeekday] + " - ";
        //}
        //if (toTime.Length > currentWeekday)
        //{
        //    hour += toTime[currentWeekday];
        //}
        //if (secondStartTime.Length > currentWeekday)
        //{
        //    hour += ", " + secondStartTime[currentWeekday] + " - " + secondToTime[currentWeekday];
        //}
        //basicInfoSection.Find("HourIcon/Text").GetComponent<TextController>().ResetUI(hour);


        JSONObject typeData = data.GetField("dish");
        RestaurantDetailPanelCategoryScrollRectController.instance.content.sizeDelta = new Vector2(100 * typeData.Count, RestaurantDetailPanelCategoryScrollRectController.instance.content.sizeDelta.y);

        for (int typeIndex = 0; typeIndex < typeData.Count; typeIndex++)
        {
            // cache categoryData
            dictionaryCategoryData.Add(typeData[typeIndex].GetField("type_id").str, typeData[typeIndex]);

            RectTransform categoryBar = Instantiate(categoryBarPrefab).transform as RectTransform;
            categoryBar.Find("Text").GetComponent<TextController>().ResetUI(typeData[typeIndex].GetField("title").str, typeData[typeIndex].GetField("title_en").str);
            categoryBar.SetParent(RestaurantDetailPanelCategoryScrollRectController.instance.content);
            categoryBar.localScale = Vector3.one;
            categoryBar.anchorMin = Vector2.zero;
            categoryBar.anchorMax = new Vector2(0, 1);
            categoryBar.pivot = new Vector2(0, 1);
            categoryBar.anchoredPosition = new Vector2(typeIndex * 100, 0);
            categoryBar.sizeDelta = new Vector2(100, 0);

            categoryBar.GetComponent<RestaurantDetailPanelCategoryBarController>().Reset(typeData[typeIndex].GetField("dish_details"), typeData[typeIndex].GetField("type_id").str);
            JSONObject dishData = typeData[typeIndex].GetField("dish_details");
            for (int dishIndex = 0; dishIndex < dishData.Count; dishIndex++)
            {
                if(!dictionaryDishData.ContainsKey(dishData[dishIndex].GetField("id").str))
                {
                    //Debug.Log("zzzzzzzz" + dishData[dishIndex].GetField("id").str + "::::" + dishData[dishIndex]);
                    dictionaryDishData.Add(dishData[dishIndex].GetField("id").str, dishData[dishIndex]);
                }
            }
        }

        yield return null;
        RestaurantDetailPanelCategoryScrollRectController.instance.content.GetComponent<LDFWToggleController>().Reset();
        RestaurantDetailPanelCategoryScrollRectController.instance.CalculateLayoutInputVertical();
        RestaurantDetailPanelCategoryScrollRectController.instance.CalculateLayoutInputHorizontal();

        if (typeData[0] != null)
        {
            LoadCategoryDishData(typeData[0].GetField("type_id").str);
        }
    }


    private IEnumerator LoadGrouponData(JSONObject data)
    {

        grouponRestaurantData = new Dictionary<string, JSONObject>();
        grouponGoodsData = new Dictionary<string, JSONObject>();

        yield return null;
        JSONObject groupon = data.GetField("groupon");
        data = data.GetField("data");

        //Texture2D cachedImage = AppImageCacheController.instance.RetrieveRestaurantImage (restaurantID.ToString ());
        LDFWImageDownloadController.instance.AddToCacheList(new ImageDownloader2(groupon.GetField("img").str.Replace("\\/", "/"), "restaurant", backgroundImageRect.GetComponent<RawImage>(), 5, null, null));
        basicInfoSection.Find("RestaurantName").GetComponent<TextController>().ResetUI(groupon.GetField("groupon_name").str, groupon.GetField("groupon_name_en").str);
        basicInfoSection.Find("GrouponDescription").GetComponent<TextController>().ResetUI(groupon.GetField("region_link").str.Replace("&nbsp;", ","));
        basicInfoSection.Find("Address").GetComponent<TextController>().ResetUI("");
        basicInfoSection.Find("MinConsumption").GetComponent<TextController>().ResetUI("");
        basicInfoSection.Find("RatingSection").gameObject.SetActive(false);
        basicInfoSection.Find("RestaurantStatus").GetComponent<TextController>().ResetUI("");

        for (int i = 0; i < data.Count; i++)
        {
            grouponRestaurantData.Add(data[i].GetField("id").str, data[i]);

            Transform categoryBar = Instantiate(categoryBarPrefab).transform;
            categoryBar.Find("Text").GetComponent<TextController>().ResetUI(data[i].GetField("name").str, data[i].GetField("name_en").str);
            categoryBar.SetParent(RestaurantDetailPanelCategoryScrollRectController.instance.content);
            categoryBar.localScale = Vector3.one;
            categoryBar.GetComponent<RestaurantDetailPanelCategoryBarController>().Reset(null, data[i].GetField("id").str, false);
            JSONObject dishData = data[i].GetField("groupon_list");

        }
        if (data.Count > 0)
        {
            LoadGrouponListData(data[0].GetField("id").str);
        }

    }


    public void LoadCategoryDishData(string categoryID)
    {
        JSONObject categoryData = dictionaryCategoryData[categoryID];
        dishEndlessScrollController.LoadData(categoryData.GetField("dish_details"));
    }

    public void LoadGrouponListData(string restaurantID)
    {
        JSONObject grouponData = grouponRestaurantData[restaurantID];
        DebugLogger.Log("groupon data = " + grouponData.ToString());
        dishEndlessScrollController.LoadGrouponData(grouponID, grouponData.GetField("groupon_list"));
    }

    #endregion


    #region CommentData
    public void SwitchToCommentMode()
    {
        commentContent.gameObject.SetActive(true);
        dishContent.gameObject.SetActive(false);
        if (dictionaryCommentData == null)
        {
            LoadCommentData();
        }
    }

    private void LoadCommentData()
    {

        LDFWWWWForm form = new LDFWWWWForm();
        form.AddField("restaurant_id", restaurantID);
        LoadingPanelController.instance.DisplayPanel();
        RestaurantNetworkController.instance.GetRestaurantComment(
            form.wwwForm,
            new LDFWServerResponseEvent((JSONObject data, string m) =>
            {
                LoadingPanelController.instance.HidePanelImmediately();
                Transform contentParent = commentContent.Find("Viewport/Content");
                if (data[0] != null)
                    noCommentBar.gameObject.SetActive(false);
                else
                    noCommentBar.gameObject.SetActive(true);

                for (int i = 0; i < contentParent.childCount; i++)
                {
                    if (data[i] == null)
                    {
                        contentParent.GetChild(i).gameObject.SetActive(false);
                    }
                    else
                    {
                        contentParent.GetChild(i).gameObject.SetActive(true);
                        contentParent.GetChild(i).Find("Time").GetComponent<Text>().text = data[i].GetField("create_time").str;
                        contentParent.GetChild(i).Find("Comment").GetComponent<Text>().text = data[i].GetField("user_comment").str;
                    }
                }
            }),
            new LDFWServerResponseEvent((JSONObject data, string m) =>
            {
                LoadingPanelController.instance.HidePanelImmediately();
            }));

    }


    #endregion
}
