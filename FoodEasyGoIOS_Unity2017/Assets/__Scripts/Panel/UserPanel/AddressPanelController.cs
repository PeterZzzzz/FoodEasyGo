using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.Network;

using Debug = UnityEngine.Debug;

public class AddressPanelController : BasePanelController
{

    public static AddressPanelController instance;
    public GameObject addressBarPrefab;
    public ScrollRect defaultScrollRect;
    public Transform modifyAddressPanel;
    public InputField codeInputField;
    public Button sendCodeBtn;
    public int waitForResend = 20;

    AddressPanelAddressBarController currentBar = null;

    private bool useYunPianServer = true;
    public bool isPhoneVerified = false;
    public bool isPhoneChanged = false;
    public string modifyAddressID;

    public InputField unitInputField;
    public InputField addressInputField;
    public GameObject addressCompleteBarPrefab;
    public ScrollRect addressCompleteScrollRect;

    new void Awake()
    {
        if (instance != null)
        {
            instance.gameObject.DestroyGO();
        }
        instance = this;

        base.Awake();

        SwitchModifyAddressPanel(false);

        if (Screen.width == 1125 || Screen.width == 1242 || Screen.width == 828)
        {
            // iPhoneX
            //defaultScrollRect.GetComponent<RectTransform>().offsetMin = new Vector2(defaultScrollRect.GetComponent<RectTransform>().offsetMin.x, defaultScrollRect.GetComponent<RectTransform>().offsetMin.y + 20);

            Debug.Log("iPhoneX适配14取消");
        }
    }



    #region Overrides
    public override void ResetPanel()
    {
        defaultScrollRect.content.DestroyAllChildren();

        SwitchModifyAddressPanel(false);
    }

    public override void ReloadPanel()
    {


        LoadingPanelController.instance.DisplayPanel();
        GetAddressList(new LDFWServerResponseEvent((JSONObject data, string m) =>
        {
            LoadingPanelController.instance.HidePanelImmediately();
            if (data != null && data.Count > 0)
            {
                for (int i = 0; data[i] != null; i++)
                {
                    Transform address = Instantiate(addressBarPrefab).transform;
                    address.GetComponent<AddressPanelAddressBarController>().Reset(
                        data[i].GetField("is_default").str == "1" ? true : false,
                        data[i].GetField("id").str,
                        data[i].GetField("name").str,
                        data[i].GetField("phone").str,
                        data[i].GetField("address").str,
                        data[i].GetField("street").str,
                        data[i].GetField("city").str,
                        data[i].GetField("state").str,
                        data[i].GetField("zip_code").str,
                        data[i].GetField("region_id").str,
                        data[i].GetField("phone_verified").str == "1" ? true : false
                    );
                    address.SetParent(defaultScrollRect.content);
                    address.localScale = Vector3.one;
                    address.GetComponent<AddressPanelAddressBarController>().parentScrollRect = defaultScrollRect;
                    if (address.GetComponent<AddressPanelAddressBarController>()._isDefault)
                    {
                        address.SetAsFirstSibling();
                    }
                }
            }

            if (defaultScrollRect.content.childCount <= 0)
            {
                defaultScrollRect.content.parent.Find("EmptyText").gameObject.SetActive(true);
            }
            else
            {
                defaultScrollRect.content.parent.Find("EmptyText").gameObject.SetActive(false);
            }
        }),
        new LDFWServerResponseEvent((JSONObject data, string m) =>
        {
            LoadingPanelController.instance.HidePanelImmediately();
        }));
    }

    private void ReloadModifyAddreessPanel()
    {


    }

    public void OnCloseButtonClicked()
    {
        AppDataController.instance.SyncAddressList();
    }
    #endregion



    #region ModifyAddress
    public void OnAddAddressButtonClicked()
    {
        isPhoneChanged = false;
        isPhoneVerified = false;
        modifyAddressID = "";
        SwitchModifyAddressPanel(true, null);
    }

    public void SwitchModifyAddressPanel(bool state, AddressPanelAddressBarController bar = null)
    {
        modifyAddressPanel.gameObject.SetActive(state);
        currentBar = null;

        if (state && bar != null)
        {

            currentBar = bar;
            modifyAddressPanel.Find("PersonInfoSection/Name/InputField").GetComponent<InputField>().text = currentBar._name;
            modifyAddressPanel.Find("PersonInfoSection/ContactNumber/InputField").GetComponent<InputField>().text = currentBar._phone;
            modifyAddressPanel.Find("Unit/InputField").GetComponent<InputField>().text = currentBar._address;
            modifyAddressPanel.Find("Street/InputField").GetComponent<InputField>().text = currentBar._street;
            modifyAddressPanel.Find("City/InputField").GetComponent<InputField>().text = currentBar._city;
            modifyAddressPanel.Find("State/InputField").GetComponent<InputField>().text = currentBar._state;
            modifyAddressPanel.Find("Postal/InputField").GetComponent<InputField>().text = currentBar._zipCode;
            codeInputField.text = "";

            unitInputField.text = currentBar._address;
            addressInputField.text = currentBar._street + ", " + currentBar._city + ", " + currentBar._zipCode;
            ClearResults();
        }
        else
        {

            modifyAddressPanel.Find("PersonInfoSection/Name/InputField").GetComponent<InputField>().text = "";
            modifyAddressPanel.Find("PersonInfoSection/ContactNumber/InputField").GetComponent<InputField>().text = "";
            modifyAddressPanel.Find("Unit/InputField").GetComponent<InputField>().text = "";
            modifyAddressPanel.Find("Street/InputField").GetComponent<InputField>().text = "";
            modifyAddressPanel.Find("City/InputField").GetComponent<InputField>().text = "";
            modifyAddressPanel.Find("State/InputField").GetComponent<InputField>().text = "";
            modifyAddressPanel.Find("Postal/InputField").GetComponent<InputField>().text = "";
            codeInputField.text = "";

            unitInputField.text = "";
            addressInputField.text = "";
            ClearResults();
        }
    }

    public void OnSaveModifyAddressButtonClicked()
    {
        if (ValidateModifyAddressPanel())
        {
            if (currentBar == null)
            {
                AddAddress(
                    modifyAddressPanel.Find("PersonInfoSection/Name/InputField").GetComponent<InputField>().text,
                    modifyAddressPanel.Find("PersonInfoSection/ContactNumber/InputField").GetComponent<InputField>().text,
                    unitInputField.text,
                    modifyAddressPanel.Find("Street/InputField").GetComponent<InputField>().text,
                    modifyAddressPanel.Find("City/InputField").GetComponent<InputField>().text,
                    modifyAddressPanel.Find("State/InputField").GetComponent<InputField>().text,
                    modifyAddressPanel.Find("Postal/InputField").GetComponent<InputField>().text,
                    new LDFWServerResponseEvent((JSONObject data, string m) =>
                    {
                        AppDataController.instance.SyncAddressList(() =>
                        {
                            Debug.Log("本地更新地址成功");
                        });

                        if (isPhoneChanged)
                        {
                            Debug.Log("新用户添加地址成功后开始验证电话" + "手机号有改动：" + isPhoneChanged.ToString() + "手机号已验证：" + isPhoneVerified.ToString());
                            SetPhoneVerified();
                        }
                    }),
                    new LDFWServerResponseEvent((JSONObject data, string m) =>
                    {
                        MessagePanelController.instance.DisplayPanel(m);
                    }));


            }
            else
            {
                ModifyAddress(
                    currentBar._addressID,
                    modifyAddressPanel.Find("PersonInfoSection/Name/InputField").GetComponent<InputField>().text,
                    modifyAddressPanel.Find("PersonInfoSection/ContactNumber/InputField").GetComponent<InputField>().text,
                    unitInputField.text,
                    modifyAddressPanel.Find("Street/InputField").GetComponent<InputField>().text,
                    modifyAddressPanel.Find("City/InputField").GetComponent<InputField>().text,
                    modifyAddressPanel.Find("State/InputField").GetComponent<InputField>().text,
                    modifyAddressPanel.Find("Postal/InputField").GetComponent<InputField>().text,
                    new LDFWServerResponseEvent((JSONObject data, string m) =>
                    {
                        AppDataController.instance.SyncAddressList(() =>
                        {
                            Debug.Log("本地更新地址成功");
                        });

                        Debug.Log("修改地址成功后");
                        if (isPhoneChanged)
                        {
                            Debug.Log("老用户已验证改电话+老用户未验证改电话" + "手机号有改动：" + isPhoneChanged.ToString() + "手机号已验证：" + isPhoneVerified.ToString());
                            SetPhoneVerified();
                        }
                        else
                        {
                            Debug.Log("只是修改地址或者名字" + "手机号有改动：" + isPhoneChanged.ToString() + "手机号已验证：" + isPhoneVerified.ToString());
                            SwitchModifyAddressPanel(false);
                            AddressPanelController.instance.ResetPanel();
                            AddressPanelController.instance.ReloadPanel();
                        }


                    }),
                    new LDFWServerResponseEvent((JSONObject data, string m) =>
                    {

                        if (isPhoneChanged)
                        {
                            Debug.Log("老用户未验证来验证，不用改电话，直接点击发送code" + "手机号有改动：" + isPhoneChanged.ToString() + "手机号已验证：" + isPhoneVerified.ToString());
                            SetPhoneVerified();
                        }
                        else
                        {
                            Debug.Log("已有数据，已验证，再次点击了验证" + "手机号有改动：" + isPhoneChanged.ToString() + "手机号已验证：" + isPhoneVerified.ToString());
                            SwitchModifyAddressPanel(false);
                            AddressPanelController.instance.ResetPanel();
                            AddressPanelController.instance.ReloadPanel();
                        }
                    }));
            }
        }
    }

    public void SendCodeButtonClicked()
    {
        isPhoneChanged = true;
        if (modifyAddressPanel.Find("PersonInfoSection/ContactNumber/InputField").GetComponent<InputField>().text.Length == 10)
        {
            StartCoroutine(SendCodeCoroutine());
        }
        else
        {
            MessagePanelController.instance.DisplayPanel("Please enter 10 digits Phone number");
        }

    }

    private IEnumerator SendCodeCoroutine()
    {
        sendCodeBtn.interactable = false;
        SendVerificationCode();

        for (int i = waitForResend; i >= 0; i--)
        {
            modifyAddressPanel.Find("PersonInfoSection/Verification/SendCodeButton/Text").GetComponent<TextController>().ResetUI("重新发送" + i + "s", "Resend in" + i + "s");
            yield return new WaitForSeconds(1.0f);
        }
        modifyAddressPanel.Find("PersonInfoSection/Verification/SendCodeButton/Text").GetComponent<TextController>().ResetUI("发送验证码", "Send Verification Code");
        sendCodeBtn.interactable = true;

    }


    public bool ValidateModifyAddressPanel()
    {
        if (isPhoneChanged)
        {
            Debug.Log("改电话后最后check一下code");
            CheckVerificationCode();
            if (string.IsNullOrEmpty(modifyAddressPanel.Find("PersonInfoSection/Name/InputField").GetComponent<InputField>().text))
            {
                MessagePanelController.instance.DisplayPanel("Name cannot be null");
                return false;
            }
            else if (string.IsNullOrEmpty(modifyAddressPanel.Find("PersonInfoSection/ContactNumber/InputField").GetComponent<InputField>().text))
            {
                MessagePanelController.instance.DisplayPanel("Phone number cannot be null");
                return false;
            }
            else if (modifyAddressPanel.Find("PersonInfoSection/ContactNumber/InputField").GetComponent<InputField>().text.Length != 10)
            {
                MessagePanelController.instance.DisplayPanel("Please enter 10 digits Phone number");
                return false;
            }
            else if (string.IsNullOrEmpty(modifyAddressPanel.Find("Street/InputField").GetComponent<InputField>().text))
            {
                MessagePanelController.instance.DisplayPanel("Please choose your address");
                return false;
            }
            else if (string.IsNullOrEmpty(modifyAddressPanel.Find("City/InputField").GetComponent<InputField>().text))
            {
                MessagePanelController.instance.DisplayPanel("City cannot be null");
                return false;
            }
            else if (string.IsNullOrEmpty(modifyAddressPanel.Find("State/InputField").GetComponent<InputField>().text))
            {
                MessagePanelController.instance.DisplayPanel("State cannot be null");
                return false;
            }
            else if (string.IsNullOrEmpty(modifyAddressPanel.Find("Postal/InputField").GetComponent<InputField>().text))
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
        else
        {
            Debug.Log("不改电话只是修改地址");
            if (string.IsNullOrEmpty(modifyAddressPanel.Find("PersonInfoSection/Name/InputField").GetComponent<InputField>().text))
            {
                MessagePanelController.instance.DisplayPanel("Name cannot be null");
                return false;
            }
            else if (string.IsNullOrEmpty(modifyAddressPanel.Find("PersonInfoSection/ContactNumber/InputField").GetComponent<InputField>().text))
            {
                MessagePanelController.instance.DisplayPanel("Phone number cannot be null");
                return false;
            }
            else if (modifyAddressPanel.Find("PersonInfoSection/ContactNumber/InputField").GetComponent<InputField>().text.Length != 10)
            {
                MessagePanelController.instance.DisplayPanel("Please enter 10 digits Phone number");
                return false;
            }
            else if (string.IsNullOrEmpty(modifyAddressPanel.Find("Street/InputField").GetComponent<InputField>().text))
            {
                MessagePanelController.instance.DisplayPanel("Please choose your address");
                return false;
            }
            else if (string.IsNullOrEmpty(modifyAddressPanel.Find("City/InputField").GetComponent<InputField>().text))
            {
                MessagePanelController.instance.DisplayPanel("City cannot be null");
                return false;
            }
            else if (string.IsNullOrEmpty(modifyAddressPanel.Find("State/InputField").GetComponent<InputField>().text))
            {
                MessagePanelController.instance.DisplayPanel("State cannot be null");
                return false;
            }
            else if (string.IsNullOrEmpty(modifyAddressPanel.Find("Postal/InputField").GetComponent<InputField>().text))
            {
                MessagePanelController.instance.DisplayPanel("Postal cannot be null");
                return false;
            }
            else
            {
                return true;
            }
        }

    }

    public void OnAddressCompleteInputFieldValueChanged()
    {
        addressCompleteScrollRect.gameObject.SetActive(true);
        ClearResults();
        StartCoroutine(CreateAutoCompleteAddressBar(addressInputField.text));

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
                child.GetComponent<AddressPanelCompleteBarController>().ResetAddressText(addressComponent[i].GetField("description").str);
                child.SetParent(addressCompleteScrollRect.content);
                child.localScale = Vector3.one;
            }
        }
    }

    public void OnCloseModifyAddressPanelBtnClicked()
    {
        modifyAddressPanel.gameObject.SetActive(false);
    }
    #endregion



    #region ServerCalls
    public void GetAddressList(LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        LoadingPanelController.instance.DisplayPanel();
        UserDataNetworkController.instance.GetUserAddressList(success, failure);
    }

    public void SetDefaultAddress(string defaultAddressID, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        LoadingPanelController.instance.DisplayPanel();
        WWWForm form = new WWWForm();
        form.AddField("address_id", defaultAddressID);
        UserDataNetworkController.instance.SetDefaultAddress(form, success, failure);
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

    public void DeleteAddress(string addressID, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        LoadingPanelController.instance.DisplayPanel();
        WWWForm form = new WWWForm();
        form.AddField("address_id", addressID);
        UserDataNetworkController.instance.DeleteUserAddress(form, success, failure);
    }

    public void ModifyAddress(string id, string name, string phone, string address, string street, string city, string state, string zipCode, LDFWServerResponseEvent success, LDFWServerResponseEvent failure)
    {
        LoadingPanelController.instance.DisplayPanel();
        WWWForm form = new WWWForm();
        form.AddField("address_id", id);
        form.AddField("name", name);
        form.AddField("phone", phone);
        form.AddField("address", address);
        form.AddField("street", street);
        form.AddField("city", city);
        form.AddField("state", state);
        form.AddField("address_zip_code", zipCode);
        UserDataNetworkController.instance.ModifyUserAddress(form, success, failure);
    }

    public void SetPhoneVerified()
    {
        WWWForm form = new WWWForm();
        form.AddField("phoneNumber", modifyAddressPanel.Find("PersonInfoSection/ContactNumber/InputField").GetComponent<InputField>().text);
        UserDataNetworkController.instance.SetPhoneNumberVerified(form,
                                                                new LDFWServerResponseEvent((JSONObject data, string m) =>
                                                                {
                                                                    MessagePanelController.instance.DisplayPanel(m.Replace("\"", ""));
                                                                    Debug.Log("验证电话成功");
                                                                    SwitchModifyAddressPanel(false);
                                                                    AddressPanelController.instance.ResetPanel();
                                                                    AddressPanelController.instance.ReloadPanel();
                                                                }),
                                                                new LDFWServerResponseEvent((JSONObject data, string m) =>
                                                                {
                                                                    MessagePanelController.instance.DisplayPanel(m);
                                                                    Debug.Log("验证电话失败");
                                                                    SwitchModifyAddressPanel(false);
                                                                    AddressPanelController.instance.ResetPanel();
                                                                    AddressPanelController.instance.ReloadPanel();
                                                                }));
    }

    public void SendVerificationCode()
    {
        WWWForm form = new WWWForm();
        form.AddField("phone", modifyAddressPanel.Find("PersonInfoSection/ContactNumber/InputField").GetComponent<InputField>().text);

        if (useYunPianServer)
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

    public void CheckVerificationCode()
    {

        if (codeInputField.text.Length == 4)
        {
            Debug.Log("Check code now");

            WWWForm form = new WWWForm();
            form.AddField("phone", modifyAddressPanel.Find("PersonInfoSection/ContactNumber/InputField").GetComponent<InputField>().text);
            form.AddField("code", codeInputField.text);
            UserDataNetworkController.instance.CheckVerificationCode(form,
                                                                     new LDFWServerResponseEvent((JSONObject data, string m) =>
                                                                     {
                                                                         //MessagePanelController.instance.DisplayPanel(m.Replace("\"", ""));
                                                                         isPhoneVerified = true;
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

    public void PhoneInputFieldChanged()
    {
        if (currentBar != null)
        {
            Debug.Log("修改的时候测试有没有改电话");

            if (modifyAddressPanel.Find("PersonInfoSection/ContactNumber/InputField").GetComponent<InputField>().text != currentBar._phone)
            {
                isPhoneChanged = true;
                isPhoneVerified = false;
                Debug.Log("用户修改电话" + modifyAddressID);
                //把后台的此ID电话verify改为0，否则新的号码验证信息写不进去。之后可以把此方法放在解锁点击事件中
                WWWForm form = new WWWForm();
                form.AddField("addressID", modifyAddressID);
                UserDataNetworkController.instance.SetPhoneNumberUnverified(form,
                                                                         new LDFWServerResponseEvent((JSONObject data, string m) =>
                                                                         {
                                                                             Debug.Log("解除验证成功");
                                                                         }),
                                                                         new LDFWServerResponseEvent((JSONObject data, string m) =>
                                                                         {
                                                                             Debug.Log("解除验证失败");
                                                                         }));
            }
            else
            {
                Debug.Log("电话号码相同" + currentBar._phone);
                isPhoneChanged = false;
                isPhoneVerified = false;
            }
        }
        else
        {
            Debug.Log("第一次无信息");
            isPhoneChanged = true;
            isPhoneVerified = false;
            Debug.Log("用户修改电话 这时候ID应该为空：" + modifyAddressID);
        }

    }

    #endregion
}
