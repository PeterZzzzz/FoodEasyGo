using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

using LDFW.Network;

public class ChangeLocationPanelController : BasePanelController
{

    public static ChangeLocationPanelController instance;
    public InputFieldController manualZipCodeInputField;
    public Button manualZipCodeSubmitButton;
    public Text noteText;
    

    public Dictionary<string, JSONObject> regionDic;

    protected new void Awake ()
    {
        base.Awake ();

        if (instance != null)
        {
            Destroy (this);
            return;
        }
        instance = this;
    }

    protected new void Start ()
    {
        base.Start ();

        OnInputFieldsChanged ();
    }

    #region Overrides
    public override void ResetPanel ()
    {
        manualZipCodeInputField.text = "";

        if (Config.currentLanguage == Language.chinese)
        {
            noteText.text = "请输入当前所在地区邮编\n(定位按钮可以帮您获取当前地址邮编)";
        }
        else if (Config.currentLanguage == Language.english)
        {
            noteText.text = "Please enter the your zip code.\nLocation Button will fetch your current zip";
        }
    }

    public override void ReloadPanel ()
    {
        if (Config.isDebug && false)
        {
            manualZipCodeInputField.contentType = InputField.ContentType.Alphanumeric;
            manualZipCodeInputField.text = "02170";
            OnSubmitButtonClicked ();
        }
    }

    public override void DisplayPanel ()
    {
        base.DisplayPanel ();
    }
    #endregion

    public void OnSubmitButtonClicked ()
    {
        LoadingPanelController.instance.DisplayPanel ();
        AccountAccessNetworkController.instance.ValidateZipCode (
            manualZipCodeInputField.text,
            new LDFWServerResponseEvent ((JSONObject json, string m) =>
            {
                LoadingPanelController.instance.HidePanelImmediately ();

                UserDataController.instance.zipCode = manualZipCodeInputField.text;
                UserDataController.instance.regionID = json.GetField ("id").str;
                UserDataController.instance.targetServiceRegionID = json.GetField ("id").str;
                UserDataController.instance.targetServiceRegionZipCode = json.GetField ("zipcode").str;
                UserDataController.instance.targetServiceRegionNameEN = json.GetField ("name_en").str;
                UserDataController.instance.targetServiceRegionNameZH = json.GetField ("name").str;

                PanelListController.instance.SetHomePanelAsBasePanel ();
                //GetAvailableRegions ();

                //HomePanelController.instance.ReloadPanel ();
                //PanelListController.instance.RemovePanel ();
            }),
            new LDFWServerResponseEvent ((JSONObject json, string m) =>
            {
                LoadingPanelController.instance.HidePanelImmediately ();
                MessagePanelController.instance.DisplayPanel (ErrorMessageConfig.UnsupportZipCode[CommonFunctions.GetCurrentLanguageIndex ()]);
            }));
    }
    
    private IEnumerator DisplayAvailableRegions (JSONObject data)
    {
        yield return null;
    }

    public void OnInputFieldsChanged ()
    {
        if (string.IsNullOrEmpty (manualZipCodeInputField.text) || manualZipCodeInputField.text.Length < 5)
            manualZipCodeSubmitButton.interactable = false;
        else
            manualZipCodeSubmitButton.interactable = true;
    }

    public void OnCloseButtonClicked ()
    {
        if (UserDataController.instance.regionID == "" || UserDataController.instance.zipCode == "" || UserDataController.instance.targetServiceRegionID == "" || UserDataController.instance.targetServiceRegionZipCode == "")
        {
            MessagePanelController.instance.DisplayPanel ("Please select your service region");
            return;
        }
        else
        {
            PanelListController.instance.RemovePanel ();
        }
    }


    #region GeoLocation
    public void OnFetchGeoButtonClicked()
    {
        StartCoroutine(FetchGeoLocationCoroutine());
    }

    private IEnumerator FetchGeoLocationCoroutine ()
    {
        if (Config.currentLanguage == Language.chinese)
        {
            noteText.text = "正在获取您的地址...";
        }
        else if (Config.currentLanguage == Language.english)
        {
            noteText.text = "Loading Your Location...";
        }
        //LoadingPanelController.instance.DisplayPanelImmediately ();
        // check if location is enabled
        if (!Input.location.isEnabledByUser)
        {
            if (Config.currentLanguage == Language.chinese)
            {
                noteText.text = "请在设置中允许FoodEasyGo获取您的位置";
            }
            else if (Config.currentLanguage == Language.english)
            {
                noteText.text = "Please turn on your gps";
            }
            //MessagePanelController.instance.DisplayPanel ("Please turn on your gps");
            //LoadingPanelController.instance.HidePanelImmediately ();
            yield break;
        }
        Input.location.Start();

        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds (1);
            maxWait--;
        }

        if (maxWait < 1)
        {
            if (Config.currentLanguage == Language.chinese)
            {
                noteText.text = "请求超时";
            }
            else if (Config.currentLanguage == Language.english)
            {
                noteText.text = "Time Out";
            }            
            //MessagePanelController.instance.DisplayPanel("Time out");
            //LoadingPanelController.instance.HidePanelImmediately ();
            yield break;
        }

        if(Input.location.status == LocationServiceStatus.Failed)
        {
            if (Config.currentLanguage == Language.chinese)
            {
                noteText.text = "获取位置失败";
            }
            else if (Config.currentLanguage == Language.english)
            {
                noteText.text = "Fetch Location Failed";
            }
            //MessagePanelController.instance.DisplayPanel("Fetch Location Failed");
            //LoadingPanelController.instance.HidePanelImmediately();
            yield break;
        }
        else
        {
            float lat = Input.location.lastData.latitude;
            float lng = Input.location.lastData.longitude;

            WWW www = new WWW ("https://maps.googleapis.com/maps/api/geocode/json?latlng=" + lat + "," + lng + "&key=" + UserDataController.instance.googleMapKey);
            yield return www;

            JSONObject data = new JSONObject (www.text);
            if (data.GetField ("status") == null || data.GetField ("status").str != "OK")
            {
                if (Config.currentLanguage == Language.chinese)
                {
                    noteText.text = "获取位置失败";
                }
                else if (Config.currentLanguage == Language.english)
                {
                    noteText.text = "Failed to get location data";
                }
                //MessagePanelController.instance.DisplayPanel ("Failed to get location data");
                LoadingPanelController.instance.HidePanelImmediately ();
                yield break;
            }
            else
            {
                DebugLogger.Log (www.text);
                JSONObject addressComponent = data.GetField ("results")[0].GetField ("address_components");

                for (int i = 0; addressComponent[i] != null; i++)
                {
                    if (addressComponent[i].GetField ("types")[0].str == "postal_code")
                    {
                        string zipCode = addressComponent[i].GetField ("long_name").str;
                        UserDataController.instance.zipCode = zipCode;

                        if (Config.currentLanguage == Language.chinese)
                        {
                            noteText.text = "您所在地址的邮编是：\n" + zipCode;
                        }
                        else if (Config.currentLanguage == Language.english)
                        {
                            noteText.text = "Your zip code is :\n" + zipCode;
                        }
                        //LoadingPanelController.instance.HidePanelImmediately();
                        yield break;
                    }
                }
                if (Config.currentLanguage == Language.chinese)
                {
                    noteText.text = "获取当前位置失败";
                }
                else if (Config.currentLanguage == Language.english)
                {
                    noteText.text = "Failed to get your current location";
                }
                //MessagePanelController.instance.DisplayPanel ("Failed to get your current location");
                LoadingPanelController.instance.HidePanelImmediately ();
            }
            Input.location.Stop();
        }
    }
    #endregion
}
