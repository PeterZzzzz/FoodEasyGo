using LDFW;
using LDFW.Network;
using LDFW.Tween;
using UnityEngine;
using UnityEngine.UI;

public class ChangeLocationPanelAddressBarController : MonoBehaviour {

    public ScrollRect parentScrollRect;
    public LDFWTweenUIAnchoredPosition anchoredPositionTweener;
    public RectTransform nameTransform;
    public RectTransform contactNumberTransform;
    public RectTransform addressTransform;
    public RectTransform selectAddressIcon;
    public RectTransform selectAddressText;

    public string _addressID;
    public string _name;
    public string _phone;
    public string _address;
    public string _street;
    public string _city;
    public string _state;
    public string _zipCode;
    public string _regionID;


    public void Reset(string id, string name, string phone, string address, string street, string city, string state, string zip, string region)
    {
        _addressID = id;
        _name = name;
        _phone = phone;
        _address = address;
        _street = street;
        _city = city;
        _state = state;
        _zipCode = zip;
        _regionID = region;

        ResetUI();
    }

    public void ResetUI()
    {
        nameTransform.GetComponent<TextController>().ResetUI(_name);
        contactNumberTransform.GetComponent<TextController>().ResetUI(_phone);
        addressTransform.GetComponent<TextController>().ResetUI(_address + " " + _street + ", " + _city + ", " + _state + ", " + _zipCode);

        selectAddressText.GetComponent<TextController>().ResetUI("未选择", "Unselected");
        selectAddressIcon.parent.GetComponent<Image>().color = new Color(1, 1, 1, 1);
        selectAddressIcon.gameObject.SetActive(false);
    }

    public void OnDeleteButtonCliced()
    {
        PopUpPanelController.instance.DisplayPopUpPanel(null, () => {
            AddressPanelController.instance.DeleteAddress(_addressID, new LDFWServerResponseEvent((JSONObject data, string m) => {
                transform.SetParent(null);
                gameObject.DestroyGO();
                ChangeLocationPanelController.instance.manualZipCodeInputField.text = "";
                if (Config.currentLanguage == Language.chinese)
                {
                    ChangeLocationPanelController.instance.noteText.text = "请选择配送地址或输入当前所在地区邮编\n(定位按钮可以帮您获取当前地址邮编)";
                }
                else if (Config.currentLanguage == Language.english)
                {
                    ChangeLocationPanelController.instance.noteText.text = "Please choose a address or enter your zip code.\nLocation Button will fetch your current zip";
                }
                AppDataController.instance.SyncAddressList();
                LoadingPanelController.instance.HidePanelImmediately();
            }), null);
        },
            "确定删除地址？",
            "Are you sure to delete this address?");
    }

    public void OnSelectButtonClicked()
    {
        if(ChangeLocationPanelController.instance.selectedAddressID != _addressID)
        {
            WWWForm form = new WWWForm();
            form.AddField("address_id", _addressID);

            ChangeLocationPanelController.instance.noteText.text = "Loading...";
            UserDataNetworkController.instance.SetDefaultAddress(form,
                new LDFWServerResponseEvent((JSONObject data, string m) =>
                {
                    ChangeLocationPanelController.instance.manualZipCodeInputField.text = _zipCode;
                    selectAddressText.GetComponent<TextController>().ResetUI("已选择", "Selected");
                    selectAddressIcon.parent.GetComponent<Image>().color = new Color(0, 0, 0, 0);
                    selectAddressIcon.gameObject.SetActive(true);
                    if (Config.currentLanguage == Language.chinese)
                    {
                        ChangeLocationPanelController.instance.noteText.text = "配送到选择的地址";
                    }
                    else if (Config.currentLanguage == Language.english)
                    {
                        ChangeLocationPanelController.instance.noteText.text = "Deliver to selected address";
                    }
                    ChangeLocationPanelController.instance.selectedAddressID = _addressID;
                }),
                new LDFWServerResponseEvent((JSONObject data, string m) =>
                {
                    ChangeLocationPanelController.instance.ResetPanel();
                    ChangeLocationPanelController.instance.ReloadPanel();
                    if (Config.currentLanguage == Language.chinese)
                    {
                        ChangeLocationPanelController.instance.noteText.text = "错误\n请输入当前所在邮编";
                    }
                    else if (Config.currentLanguage == Language.english)
                    {
                        ChangeLocationPanelController.instance.noteText.text = "Error\nPlease enter your zip code";
                    }
                    MessagePanelController.instance.DisplayPanel("Error\nPlease try again later");
                }));
        }else
        {
            Debug.Log("重复选择此地址");
        }
    }
}
