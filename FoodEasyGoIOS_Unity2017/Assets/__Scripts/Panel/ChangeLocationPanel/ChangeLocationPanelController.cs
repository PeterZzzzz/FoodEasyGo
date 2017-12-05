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
            noteText.text = "请输入当前所在地区邮编.";
        }
        else if (Config.currentLanguage == Language.english)
        {
            noteText.text = "Please enter the region\nyou are in right now.";
        }
    }

    public override void ReloadPanel ()
    {
        if (Config.isDebug && false)
        {
            manualZipCodeInputField.contentType = InputField.ContentType.Alphanumeric;
            manualZipCodeInputField.text = "02119";
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
    private IEnumerator FetchGeoLocationCoroutine ()
    {
        LoadingPanelController.instance.DisplayPanelImmediately ();
        // check if location is enabled
        if (!Input.location.isEnabledByUser)
        {
            MessagePanelController.instance.DisplayPanel ("Please turn on your gps");
            LoadingPanelController.instance.HidePanelImmediately ();
            yield break;
        }
        Input.location.Start ();


        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds (1);
            maxWait--;
        }

        if (maxWait < 1 || Input.location.status == LocationServiceStatus.Failed)
        {
            MessagePanelController.instance.DisplayPanel ("Failed to get location data");
            LoadingPanelController.instance.HidePanelImmediately ();
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
                MessagePanelController.instance.DisplayPanel ("Failed to get location data");
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
                        yield break;
                    }
                }
                MessagePanelController.instance.DisplayPanel ("Failed to get your current location");
                LoadingPanelController.instance.HidePanelImmediately ();
            }
        }
    }
    #endregion
}
