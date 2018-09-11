using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.Network;
using LDFW.FileIO;

using Debug = UnityEngine.Debug;

public class UserPanelController : BasePanelController {

    public static UserPanelController           instance;
    public RawImage                             userImage;
    public Text                                 userName;
    public TextController                       pendingBtnText;
    public TextController                       AvailableBtnText;
    public Transform                            membershipInfoPanel;
    public Sprite membershipInfoEn;
    public Sprite membershipInfoZh;


    private IEnumerator                         userImageDownloadIEnumerator;
    private ImageDownloader2                    userImageDownloader;

    new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();
    }


    #region Overrides
    public override void ResetPanel () {
        membershipInfoPanel.gameObject.SetActive(false);
        PersistentDataControl.instance.LoadCachedTextureToRawImage("UserIcon", UserDataController.instance.userID + ".png", userImage);
        DownloadUserImage ();
    }
    public override void ReloadPanel () {
        userName.text = UserDataController.instance.firstName;
        switch(UserDataController.instance.membershipStatus)
        {
            case "1":
                pendingBtnText.ResetUI("会员等级 :\n普通会员", "Membership Status :\nMember");
                break;
            case "2":
                pendingBtnText.ResetUI("会员等级 :\n优享会员", "Membership Status :\nPremium Member");
                break;
            case "3":
                pendingBtnText.ResetUI("会员等级 :\n尊享会员", "Membership Status :\nPremium+ Member");
                break;
            default:
                break;
        }
        AvailableBtnText.ResetUI("待处理积分 :" + UserDataController.instance.pendingPoint + "\n" + "可兑换积分 :" + UserDataController.instance.availablePoint,
                                 "Pending points :" + UserDataController.instance.pendingPoint + "\n" + "Available points :" + UserDataController.instance.availablePoint);
    }
    #endregion

    public void MessageButtonClicked () {
        NotificationPanelController.instance.OpenPanel ();
    }

    public void PersonalDataButtonClicked () {
        PersonalDataPanelController.instance.OpenPanel ();
    }

    public void AddressButtonClicked () {
        AddressPanelController.instance.OpenPanel ();
    }

    public void CreditCardButtonClicked () {
        PaymentPanelController.instance.OpenPanel ();
    }

    public void CouponButtonClicked () {
        CouponPanelController.instance.OpenPanel ();
    }

    public void InviteFriendsButtonClicked () {
        InvitationPanelController.instance.OpenPanel ();
    }

    public void BusinessCooperationButtonClicked () {
        BusinessCooperationPanelController.instance.OpenPanel ();
    }

    public void RecruitButtonClicked () {
        RecruitPanel.instance.OpenPanel ();
    }

    public void SettingsButtonClicked () {
        SettingsPanelController.instance.OpenPanel ();
    }

    public void OnUserImageClicked()
    {
#if UNITY_IPHONE && !UNITY_EDITOR

        LoadTextureFromImagePicker.ShowPhotoLibrary(gameObject.name, "OnFinishedImagePicker");

#elif UNITY_EDITOR
        UploadUserImage();

#endif
        
    }

    private void OnFinishedImagePicker (string message)
    {
        if (userImageDownloadIEnumerator != null)
        {
            StopCoroutine (userImageDownloadIEnumerator);
        }
#if UNITY_IPHONE && !UNITY_EDITOR
        Texture2D texture = LoadTextureFromImagePicker.GetLoadedTexture(message, 512, 512);
        if (texture)
        {
            userImage.texture = texture;
        }
#endif
        UploadUserImage ();
        /*
        PersistentDataControl.SaveToLocal ("UserIcon", UserDataController.instance.userID + ".png", (userImage.texture as Texture2D).EncodeToPNG ());
        */
    }

    private void UploadUserImage()
    {
        WWWForm form = new WWWForm();
        form.AddBinaryData (UserDataController.instance.userID + ".png", (userImage.texture as Texture2D).EncodeToPNG ());
        UserDataNetworkController.instance.UploadUserImage (form, null, null);
    }

    private void DownloadUserImage()
    {
        int lastTwo = int.Parse(UserDataController.instance.userID) % 100;
        int secondLastTwo = int.Parse(UserDataController.instance.userID) / 100 % 100;
        userImageDownloader = new ImageDownloader2(
            "/Uploads/UserImages/" + lastTwo + "/" + secondLastTwo + "/" + UserDataController.instance.userID + ".png", "UserImage", 
            userImage, 0, null, null, false);

        if (userImageDownloadIEnumerator != null)
            StopCoroutine (userImageDownloadIEnumerator);
        StartCoroutine (userImageDownloadIEnumerator = userImageDownloader.StartDownloadCoroutine ());
    }

    public void OnMemberStatusButtonClicked()
    {
        membershipInfoPanel.gameObject.SetActive(true);
        if(Config.currentLanguage == Language.english)
            membershipInfoPanel.Find("Content").GetComponent<SpriteRenderer>().sprite = membershipInfoEn;
        else
            membershipInfoPanel.Find("Content").GetComponent<SpriteRenderer>().sprite = membershipInfoZh;
    }

    public void OnCloseMembershipPanelButtonClicked()
    {
        membershipInfoPanel.gameObject.SetActive(false);
    }
}
