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
    public RectTransform dishContent;
    public RectTransform commentContent;
    public RectTransform noCommentBar;

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
    }

    new void Start()
    {
        base.Start();

        dishContent.GetComponent<LayoutElement>().preferredHeight = panelSizeDelta.y - 70 - 30 - 50;

        SwitchToDishMode();
    }

    #region Overrides
    public override void ResetPanel()
    {

        DestroyAllCategoryContents();

        Transform basicInfoSection = transform.Find("RestaurantImage");
        basicInfoSection.Find("Image").GetComponent<RawImage>().texture = null;
        basicInfoSection.Find("Title").GetComponent<TextController>().ResetUI("");
        basicInfoSection.Find("MinConsumption").GetComponent<TextController>().ResetUI("");
        basicInfoSection.Find("OpenIcon").gameObject.SetActive(false);
        basicInfoSection.Find("CloseIcon").gameObject.SetActive(false);
        basicInfoSection.Find("PhoneIcon/Text").GetComponent<TextController>().ResetUI("");
        basicInfoSection.Find("HourIcon/Text").GetComponent<TextController>().ResetUI("");
        basicInfoSection.Find("AddressIcon/Text").GetComponent<TextController>().ResetUI("");


        SwitchToDishMode();
        //basicInfoSection.Find ("Tip").gameObject.SetActive (true);

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
        if(!isRestaurantData)
        {
            transform.Find("Viewport/DishContent/TitleSection/CommentsButton").gameObject.SetActive(false);
        }else{
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


        Transform restaurantImageBar = transform.Find("RestaurantImage");
        //Texture2D cachedImage = AppImageCacheController.instance.RetrieveRestaurantImage (restaurantID.ToString ());
        LDFWImageDownloadController.instance.AddToCacheList(
            new ImageDownloader2(restaurantData.GetField("img").str.Replace("\\/", "/"), "restaurant", restaurantImageBar.Find("Image").GetComponent<RawImage>(), 1, null, null));

        LDFWImageDownloadController.instance.AddToCacheList(
            new ImageDownloader2(restaurantData.GetField("img").str.Replace("\\/", "/"), "restaurant", restaurantImageBar.GetComponent<RawImage>(), 2, null, null));

        restaurantImageBar.Find("Title").GetComponent<TextController>().ResetUI(restaurantData.GetField("name").str, restaurantData.GetField("name_en").str);
        restaurantImageBar.Find("MinConsumption").GetComponent<TextController>().ResetUI("最低消费: $" + restaurantData.GetField("min_consume").str, "Min Order: $" + restaurantData.GetField("min_consume").str);
        restaurantImageBar.Find("PhoneIcon/Text").GetComponent<TextController>().ResetUI(restaurantData.GetField("telphone").str);
        restaurantImageBar.Find("OpenIcon").gameObject.SetActive(false);
        restaurantImageBar.Find("CloseIcon").gameObject.SetActive(false);
        if (restaurantData.GetField("is_open").str == "1")
        {
            isRestaurantOpen = true;
            restaurantImageBar.Find("OpenIcon").gameObject.SetActive(true);
        }
        else
        {
            isRestaurantOpen = false;
            restaurantImageBar.Find("CloseIcon").gameObject.SetActive(true);
        }

        string[] startTime = restaurantData.GetField("from_time").str.Split(',');
        string[] toTime = restaurantData.GetField("to_time").str.Split(',');
        string[] secondStartTime = restaurantData.GetField("second_from_time").str.Split(',');
        string[] secondToTime = restaurantData.GetField("second_to_time").str.Split(',');

        int currentWeekday = (int)DateTime.Now.DayOfWeek; //0:sunday ~ 6:saturday
        string hour = "";
        if (startTime.Length > currentWeekday)
        {
            hour = startTime[currentWeekday] + " - ";
        }
        if (toTime.Length > currentWeekday)
        {
            hour += toTime[currentWeekday];
        }
        if (secondStartTime.Length > currentWeekday)
        {
            hour += ", " + secondStartTime[currentWeekday] + " - " + secondToTime[currentWeekday];
        }
        restaurantImageBar.Find("HourIcon/Text").GetComponent<TextController>().ResetUI(hour);

        restaurantImageBar.Find("AddressIcon/Text").GetComponent<TextController>().ResetUI(restaurantData.GetField("address").str, restaurantData.GetField("address_en").str);

        JSONObject typeData = data.GetField("dish");
        RestaurantDetailPanelCategoryScrollRectController.instance.content.sizeDelta = new Vector2(
            RestaurantDetailPanelCategoryScrollRectController.instance.content.sizeDelta.x, 50 * typeData.Count);

        for (int typeIndex = 0; typeIndex < typeData.Count; typeIndex++)
        {
            // cache categoryData
            dictionaryCategoryData.Add(typeData[typeIndex].GetField("type_id").str, typeData[typeIndex]);

            RectTransform categoryBar = Instantiate(categoryBarPrefab).transform as RectTransform;
            categoryBar.Find("Text").GetComponent<TextController>().ResetUI(typeData[typeIndex].GetField("title").str, typeData[typeIndex].GetField("title_en").str);
            categoryBar.SetParent(RestaurantDetailPanelCategoryScrollRectController.instance.content);
            categoryBar.localScale = Vector3.one;

            categoryBar.anchorMin = new Vector2(0, 1);
            categoryBar.anchorMax = Vector2.one;
            categoryBar.pivot = new Vector2(0.5f, 1);
            categoryBar.anchoredPosition = new Vector2(0, -typeIndex * 50);
            categoryBar.sizeDelta = new Vector2(0, 50);

            categoryBar.GetComponent<RestaurantDetailPanelCategoryBarController>().Reset(typeData[typeIndex].GetField("type_id").str);
            JSONObject dishData = typeData[typeIndex].GetField("dish_details");
            for (int dishIndex = 0; dishIndex < dishData.Count; dishIndex++)
            {
                dictionaryDishData.Add(dishData[dishIndex].GetField("id").str, dishData[dishIndex]);
            }
        }

        yield return null;
        RestaurantDetailPanelCategoryScrollRectController.instance.content.GetComponent<LDFWToggleController>().Reset();
        //Debug.Log ("Length = " +  RestaurantDetailPanelCategoryScrollRectController.instance.content.GetComponent<LDFWToggleController> ().selectedList.Length);
        //RestaurantDetailPanelCategoryScrollRectController.instance.content.GetComponent<LDFWToggleController> ().SelectToggle (0);
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

        // General Data
        Transform restaurantImageBar = transform.Find("RestaurantImage");
        //Texture2D cachedImage = AppImageCacheController.instance.RetrieveRestaurantImage (restaurantID.ToString ());
        LDFWImageDownloadController.instance.AddToCacheList(
            new ImageDownloader2(groupon.GetField("img").str.Replace("\\/", "/"), "restaurant", restaurantImageBar.Find("Image").GetComponent<RawImage>(), 1, null, null));

        LDFWImageDownloadController.instance.AddToCacheList(
            new ImageDownloader2(groupon.GetField("img").str.Replace("\\/", "/"), "restaurant", restaurantImageBar.GetComponent<RawImage>(), 2, null, null));

        restaurantImageBar.Find("Title").GetComponent<TextController>().ResetUI(groupon.GetField("groupon_name").str, groupon.GetField("groupon_name_en").str);
        restaurantImageBar.Find("MinConsumption").GetComponent<TextController>().ResetUI("");
        restaurantImageBar.Find("PhoneIcon/Text").GetComponent<TextController>().ResetUI(groupon.GetField("begin_time").str + " - " + groupon.GetField("end_time").str);
        restaurantImageBar.Find("OpenIcon").gameObject.SetActive(false);
        restaurantImageBar.Find("CloseIcon").gameObject.SetActive(false);
        restaurantImageBar.Find("HourIcon/Text").GetComponent<TextController>().ResetUI(groupon.GetField("send_time").str);
        restaurantImageBar.Find("AddressIcon/Text").GetComponent<TextController>().ResetUI(groupon.GetField("region_link").str.Replace("&nbsp;", ","));


        for (int i = 0; i < data.Count; i++)
        {
            grouponRestaurantData.Add(data[i].GetField("id").str, data[i]);

            Transform categoryBar = Instantiate(categoryBarPrefab).transform;
            categoryBar.Find("Text").GetComponent<TextController>().ResetUI(data[i].GetField("name").str, data[i].GetField("name_en").str);
            categoryBar.SetParent(RestaurantDetailPanelCategoryScrollRectController.instance.content);
            categoryBar.localScale = Vector3.one;
            categoryBar.GetComponent<RestaurantDetailPanelCategoryBarController>().Reset(data[i].GetField("id").str, false);
            JSONObject dishData = data[i].GetField("groupon_list");

        }
        if (groupon.Count > 0)
        {
            LoadGrouponListData(data[0].GetField("id").str);
        }
        //var grouponListData = new List<JSONObject>();
        //if (groupon.Count > 0)
        //{
        //    for(int i = 0;i<groupon.Count;i++){
        //        grouponListData.Add();
        //    }
        //    LoadGrouponListData(data[i].GetField("id").str);

        //}
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
