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
        PersistentDataControl.instance.LoadCachedTextureToRawImage("UserIcon", UserDataController.instance.userID + ".png", userImage);
        DownloadUserImage ();
    }
    public override void ReloadPanel () {
        userName.text = UserDataController.instance.firstName;
        //pendingBtnText.ResetUI("待处理积分 :\n" + UserDataController.instance.pendingPoint, "Pending points :\n" + UserDataController.instance.pendingPoint);
        //AvailableBtnText.ResetUI("可兑换积分 :\n" + (int.Parse(UserDataController.instance.earnedPoint) - int.Parse(UserDataController.instance.pendingPoint)).ToString(), "Available points:\n" + (int.Parse(UserDataController.instance.earnedPoint) - int.Parse(UserDataController.instance.redeemedPoint)).ToString());
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
}
