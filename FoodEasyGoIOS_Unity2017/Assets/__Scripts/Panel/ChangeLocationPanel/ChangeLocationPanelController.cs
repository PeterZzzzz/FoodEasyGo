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

    public GameObject savedAddressBarfab;
    public ScrollRect addressScrollRect;
    public string selectedAddressID;
    public Transform addAddressPanel;
    public InputField codeInputField;
    public Button sendCodeBtn;
    public Coroutine sendCodeCoroutine;
    public int waitForResend = 20;
    public bool isPhoneVerified;
    public InputField unitInputField;
    public InputField addressCompleteInputField;
    public GameObject addressCompleteBarPrefab;
    public ScrollRect addressCompleteScrollRect;

    private bool useYunPianServer = true;

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
        addressScrollRect.content.DestroyAllChildren();
        manualZipCodeInputField.text = "";
        selectedAddressID = "0";
        addAddressPanel.gameObject.SetActive(false);

        if (Config.currentLanguage == Language.chinese)
        {
            noteText.text = "请选择配送地址或输入当前所在地区邮编\n(定位按钮可以帮您获取当前地址邮编)";
        }
        else if (Config.currentLanguage == Language.english)
        {
            noteText.text = "Please choose a address or enter your zip code.\nLocation Button will fetch your current zip";
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

        //Loading saved address for select panel
        GetAddressList(new LDFWServerResponseEvent((JSONObject data, string m) =>
        {
            LoadingPanelController.instance.HidePanelImmediately();
            if (data != null && data.Count > 0)
            {
                for (int i = 0; data[i] != null; i++)
                {
                    Transform address = Instantiate(savedAddressBarfab).transform;
                    address.GetComponent<ChangeLocationPanelAddressBarController>().Reset(
                        data[i].GetField("id").str,
                        data[i].GetField("name").str,
                        data[i].GetField("phone").str,
                        data[i].GetField("address").str,
                        data[i].GetField("street").str,
                        data[i].GetField("city").str,
                        data[i].GetField("state").str,
                        data[i].GetField("zip_code").str,
                        data[i].GetField("region_id").str
                    );
                    address.SetParent(addressScrollRect.content);
                    address.localScale = Vector3.one;
                    address.GetComponent<ChangeLocationPanelAddressBarController>().parentScrollRect = addressScrollRect;
                }
            }

            if (addressScrollRect.content.childCount <= 0)
            {
                addressScrollRect.content.parent.Find("EmptyText").gameObject.SetActive(true);
            }
            else
            {
                addressScrollRect.content.parent.Find("EmptyText").gameObject.SetActive(false);
            }
        }),
        new LDFWServerResponseEvent((JSONObject data, string m) =>
        {
            LoadingPanelController.instance.HidePanelImmediately();
        }));
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
                PanelListController.instance.isHomeRefresh = true;
                PanelListController.instance.SetHomePanelAsBasePanel ();
                AppDataController.instance.SyncAddressList();

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
        //reset address select button UI
        int addressCount = addressScrollRect.content.childCount;
        for (int i = 0; i < addressCount; i++)
        {
            addressScrollRect.content.GetChild(i).Find("AddressBar/SelectBtn/Text").GetComponent<TextController>().ResetUI("未选择", "Unselected");
            addressScrollRect.content.GetChild(i).Find("AddressBar/SelectBtn/CricleBackground").GetComponent<Image>().color = new Color(1, 1, 1, 1);
            addressScrollRect.content.GetChild(i).Find("AddressBar/SelectBtn/CricleBackground/SelectIcon").gameObject.SetActive(false);

        }
        //unselect of address
        selectedAddressID = "0";

        if (Config.currentLanguage == Language.chinese)
        {
            noteText.text = "配送到此邮编";
        }
        else if (Config.currentLanguage == Language.english)
        {
            noteText.text = "Deliver to this zip code";
        }

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

    public void OnAddAddressBtnClicked()
    {
        addAddressPanel.gameObject.SetActive(true);
        isPhoneVerified = false;
        addAddressPanel.Find("Content/Name/InputField").GetComponent<InputField>().text = "";
        addAddressPanel.Find("Content/ContactNumber/InputField").GetComponent<InputField>().text = "";
        addAddressPanel.Find("Content/ContactNumber/InputField").GetComponent<InputField>().interactable = true;
        addAddressPanel.Find("Content/Verification/InputField").GetComponent<InputField>().text = "";
        unitInputField.text = "";
        addressCompleteInputField.text = "";
        ClearResults();
        addAddressPanel.Find("Content/Street/InputField").GetComponent<InputField>().text = "";
        addAddressPanel.Find("Content/City/InputField").GetComponent<InputField>().text = "";
        addAddressPanel.Find("Content/State/InputField").GetComponent<InputField>().text = "";
        addAddressPanel.Find("Content/Postal/InputField").GetComponent<InputField>().text = "";

        addAddressPanel.Find("Content/SendCodeButton/Text").GetComponent<TextController>().ResetUI("发送验证码", "Send Verification Code");
        sendCodeBtn.interactable = true;
    }

    public void OnCancelBtnClicked()
    {
        if(sendCodeCoroutine != null)
            StopCoroutine(sendCodeCoroutine);
        
        ResetPanel();
        ReloadPanel();
    }

    public void OnSaveAddressBtnClicked()
    {
        if (ValidateModifyAddressPanel())
        {

            AddAddress(
                addAddressPanel.Find("Content/Name/InputField").GetComponent<InputField>().text,
                addAddressPanel.Find("Content/ContactNumber/InputField").GetComponent<InputField>().text,
                unitInputField.text,
                addAddressPanel.Find("Content/Street/InputField").GetComponent<InputField>().text,
                addAddressPanel.Find("Content/City/InputField").GetComponent<InputField>().text,
                addAddressPanel.Find("Content/State/InputField").GetComponent<InputField>().text,
                addAddressPanel.Find("Content/Postal/InputField").GetComponent<InputField>().text,
                new LDFWServerResponseEvent((JSONObject data, string m) =>
                {
                    AppDataController.instance.SyncAddressList(() =>
                    {
                        SetPhoneVerified();
                        Debug.Log("本地更新地址成功");
                    });
                    //需要放到上面的括号里才能按顺序执行异步后台交互，不然直接执行SetPhoneVerified()而不会执行本地地址更新
                    //SetPhoneVerified();
                }),
                new LDFWServerResponseEvent((JSONObject data, string m) =>
                {
                    MessagePanelController.instance.DisplayPanel(m);
                }));
        }
    }

    public void OnSendCodeBtnClicked()
    {
        if (addAddressPanel.Find("Content/ContactNumber/InputField").GetComponent<InputField>().text.Length == 10)
        {
            sendCodeCoroutine = StartCoroutine(CodeCoroutine());
        }
        else
        {
            MessagePanelController.instance.DisplayPanel("Please enter 10 digits Phone number");
        }
    }

    private IEnumerator CodeCoroutine()
    {
        sendCodeBtn.interactable = false;
        SendVerificationCode();

        for (int i = waitForResend; i >= 0; i--)
        {
            addAddressPanel.Find("Content/SendCodeButton/Text").GetComponent<TextController>().ResetUI("重新发送" + i + "s", "Resend in" + i + "s");
            yield return new WaitForSeconds(1.0f);
        }
        addAddressPanel.Find("Content/SendCodeButton/Text").GetComponent<TextController>().ResetUI("发送验证码", "Send Verification Code");
        sendCodeBtn.interactable = true;

    }

    public void CheckVerificationCode()
    {

        if (codeInputField.text.Length == 4)
        {
            Debug.Log("Check code now");

            WWWForm form = new WWWForm();
            form.AddField("phone", addAddressPanel.Find("Content/ContactNumber/InputField").GetComponent<InputField>().text);
            form.AddField("code", codeInputField.text);
            UserDataNetworkController.instance.CheckVerificationCode(form,
                                                                     new LDFWServerResponseEvent((JSONObject data, string m) =>
                                                                     {
                                                                         MessagePanelController.instance.DisplayPanel(m.Replace("\"", ""));
                                                                         isPhoneVerified = true;
                                                                         addAddressPanel.Find("Content/ContactNumber/InputField").GetComponent<InputField>().interactable = false;
                                                                         Debug.Log("code正确");
                                                                     }),
                                                                     new LDFWServerResponseEvent((JSONObject data, string m) =>
                                                                     {
                                                                         MessagePanelController.instance.DisplayPanel(m);
                                                                         isPhoneVerified = false;
                                                                         Debug.Log("code错误");
                                                                     }));
        }
    }


    public bool ValidateModifyAddressPanel()
    {
        if (string.IsNullOrEmpty(addAddressPanel.Find("Content/Name/InputField").GetComponent<InputField>().text))
        {
            MessagePanelController.instance.DisplayPanel("Name cannot be null");
            return false;
        }
        else if (string.IsNullOrEmpty(addAddressPanel.Find("Content/ContactNumber/InputField").GetComponent<InputField>().text))
        {
            MessagePanelController.instance.DisplayPanel("Phone number cannot be null");
            return false;
        }
        else if (addAddressPanel.Find("Content/ContactNumber/InputField").GetComponent<InputField>().text.Length != 10)
        {
            MessagePanelController.instance.DisplayPanel("Please enter 10 digits Phone number");
            return false;
        }
        else if (string.IsNullOrEmpty(addAddressPanel.Find("Content/Street/InputField").GetComponent<InputField>().text))
        {
            MessagePanelController.instance.DisplayPanel("Please choose your address");
            return false;
        }
        else if (string.IsNullOrEmpty(addAddressPanel.Find("Content/City/InputField").GetComponent<InputField>().text))
        {
            MessagePanelController.instance.DisplayPanel("City cannot be null");
            return false;
        }
        else if (string.IsNullOrEmpty(addAddressPanel.Find("Content/State/InputField").GetComponent<InputField>().text))
        {
            MessagePanelController.instance.DisplayPanel("State cannot be null");
            return false;
        }
        else if (string.IsNullOrEmpty(addAddressPanel.Find("Content/Postal/InputField").GetComponent<InputField>().text))
        {
            MessagePanelController.instance.DisplayPanel("Postal cannot be null");
            return false;
        }
        else if (!isPhoneVerified)
        {
            MessagePanelController.instance.DisplayPanel("Verification code incorrect");
            return false;
        }
        else
        {
            return true;
        }
    }

    public void SetPhoneVerified()
    {
        WWWForm form = new WWWForm();
        form.AddField("phoneNumber", addAddressPanel.Find("Content/ContactNumber/InputField").GetComponent<InputField>().text);
        UserDataNetworkController.instance.SetPhoneNumberVerified(form,
                                                                new LDFWServerResponseEvent((JSONObject data, string m) =>
                                                                {
                                                                    MessagePanelController.instance.DisplayPanel(m.Replace("\"", ""));
                                                                    Debug.Log("验证电话成功");
                                                                    addAddressPanel.gameObject.SetActive(false);
                                                                    ResetPanel();
                                                                    ReloadPanel();
                                                                }),
                                                                new LDFWServerResponseEvent((JSONObject data, string m) =>
                                                                {
                                                                    MessagePanelController.instance.DisplayPanel(m);
                                                                    Debug.Log("验证电话失败");
                                                                    addAddressPanel.gameObject.SetActive(false);
                                                                    ResetPanel();
                                                                    ReloadPanel();
                                                                }));
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

    public void OnAddressCompleteInputFieldValueChanged()
    {
        addressCompleteScrollRect.gameObject.SetActive(true);
        ClearResults();
        StartCoroutine(CreateAutoCompleteAddressBar(addressCompleteInputField.text));

    }

    public void ClearResults()
    {
        // Reverse loop since you destroy children
        for (int childIndex = addressCompleteScrollRect.content.childCount - 1; childIndex >= 0; --childIndex)
        {
            Transform child = addressCompleteScrollRect.content.GetChild(childIndex);
            child.SetParent(null);
            Destroy(child.gameObject);
        }
    }

    private IEnumerator CreateAutoCompleteAddressBar(string str)
    {
        string addressInput = str;
        //WWW www = new WWW("https://maps.googleapis.com/maps/api/place/autocomplete/json?input=" + addressInput + "&key=" + "AIzaSyB-90I6TCqL7RwtxTQ3YyB4KqsfgddIqic");
        WWW www = new WWW("https://maps.googleapis.com/maps/api/place/autocomplete/json?input=" + addressInput + "&key=" + UserDataController.instance.googlePlaceKey);

        yield return www;
        JSONObject data = new JSONObject(www.text);
        Debug.Log(data.GetField("status").str + "\n" + www.text);

        if (data.GetField("status") == null || data.GetField("status").str != "OK")
        {
            //改为实时输入联想之后就注释掉了，因为在输入过程中会有返回status != OK
            //MessagePanelController.instance.DisplayPanel("Please try again later");
        }
        else
        {
            JSONObject addressComponent = data.GetField("predictions");
            //Debug.Log(addressComponent[0].GetField("description").str);
            for (int i = 0; addressComponent[i] != null; i++)
            {
                Transform child = Instantiate(addressCompleteBarPrefab).transform;
                child.GetComponent<ChangeLocationPanelAddressCompleteBarController>().ResetAddressText(addressComponent[i].GetField("description").str);
                child.SetParent(addressCompleteScrollRect.content);
                child.localScale = Vector3.one;
            }
        }


    }
    #endregion

    #region ServerCall

    public void GetAddressList(LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        LoadingPanelController.instance.DisplayPanel();
        UserDataNetworkController.instance.GetUserAddressList(success, failure);
    }

    public void AddAddress(string name, string phone, string address, string street, string city, string state, string zipCode, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        LoadingPanelController.instance.DisplayPanel();
        WWWForm form = new WWWForm();
        form.AddField("name", name);
        form.AddField("phone", phone);
        form.AddField("address", address);
        form.AddField("street", street);
        form.AddField("city", city);
        form.AddField("state", state);
        form.AddField("address_zip_code", zipCode);
        UserDataNetworkController.instance.AddUserAddress(form, success, failure);
    }

    public void SendVerificationCode()
    {
        WWWForm form = new WWWForm();
        form.AddField("phone", addAddressPanel.Find("Content/ContactNumber/InputField").GetComponent<InputField>().text);

        if (!useYunPianServer)
        {
            Debug.Log("使用云片");
            form.AddField("service", "Yunpian/send_sms");
            useYunPianServer = !useYunPianServer;
        }
        else
        {
            Debug.Log("使用AWS");
            form.AddField("service", "Aws/send_sms");
            useYunPianServer = !useYunPianServer;
        }

        UserDataNetworkController.instance.SendVerificationCode(form,
                                                                new LDFWServerResponseEvent((JSONObject data, string m) => { MessagePanelController.instance.DisplayPanel(m.Replace("\"", "")); }),
                                                                new LDFWServerResponseEvent((JSONObject data, string m) => { MessagePanelController.instance.DisplayPanel(data.GetField("c").f.ToString() + ":" + m); }));
    }



    #endregion
}
