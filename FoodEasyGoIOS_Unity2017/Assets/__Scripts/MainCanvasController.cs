using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.UI;
using LDFW.Network;
    

public class MainCanvasController : MonoBehaviour {

    public static MainCanvasController                          instance;

    private bool                                                autoLogin;
    public bool                                                 testingMode;

    private RectTransform                                       mRectTransform;
    
    public Vector2                                              canvasSize = Vector2.zero;
    public LDFWImageDownloadController                          imageDownloadController = null;
    public UserDataController                                   userDataController = null;

    public UniShare                                             uniShare;

    void Awake () {
        if (instance != null) {
            Destroy (instance.gameObject);
        }
        instance = this;

        canvasSize = LDFWDeviceInfo.GetScreenDPVector ();
        GetComponent<CanvasScaler> ().referenceResolution = canvasSize;

        mRectTransform = transform as RectTransform;

        transform.localScale = Vector3.one;
    }

    IEnumerator Start () {
        imageDownloadController = LDFWImageDownloadController.instance;
        userDataController = UserDataController.instance;

        yield return null;

        if (string.IsNullOrEmpty (userDataController.accessToken)) {
            // not logged in
            //if (testingMode) {
#if UNITY_EDITOR
            if (testingMode) {
                PlayerPrefsController.SetUserCredentials ("longjdai1@gmail.com", "123456");
                AccountAccessNetworkController.instance.UserLogin (
                    PlayerPrefsController.GetUserEmail (),
                    PlayerPrefsController.GetPassword (),
                    new LDFWServerResponseEvent ((JSONObject data, string message) => {
                        StartCoroutine (OnAppLoaded ());
                    }),
                    new LDFWServerResponseEvent ((JSONObject data, string message) => {
                        SceneController.LoadLogInScene ();
                    }));
                UserDataController.instance.zipCode = "02111";
            } else {
                SceneController.LoadLogInScene ();
            }
#else
            SceneController.LoadLogInScene ();
#endif
        } else {
            yield return null;
            StartCoroutine (OnAppLoaded ());
        }

        
    }
    

    public void UpdateLanguageOnAllPanels () {
        foreach (var languageObject in transform.GetComponentsInChildren<LanguageInterface> ()) {
            languageObject.OnLanguageChanged (Config.currentLanguage);
        }
        /*
        for (int i=0; i<transform.childCount; i++) {
            currentPanel = transform.GetChild (i).GetComponent<BasePanelController> ();
            if (currentPanel != null) {
                currentPanel.UpdatePanelLanguage ();
            }
        }
        */
    }

    public IEnumerator OnAppLoaded () {
        //DebugLogger.Log ("OnAppLoaded");
        yield return new WaitForSeconds (0.5f);
        //FooterPanelController.instance.OnHomeButtonClicked ();
        AppDataController.instance.SyncAddressList ();
        AppDataController.instance.SyncCreditCardList ();
        AppDataController.instance.SyncCouponList ();

        ChangeLocationPanelController.instance.OpenPanel ();

        /*
        if (PlayerPrefsController.GetUserRegionData (out userDataController.regionID, out userDataController.zipCode, out userDataController.targetServiceRegionID, out userDataController.targetServiceRegionZipCode)) {
            FooterPanelController.instance.OnHomeButtonClicked ();
        } else {
            ChangeLocationPanelController.instance.OpenPanel ();
        }
        */
        
        
        Debug.Log ("Calling register for notifications...");
        string deviceToken = "";

#if UNITY_IPHONE && !UNITY_EDITOR
        UnityEngine.iOS.NotificationServices.RegisterForNotifications (UnityEngine.iOS.NotificationType.Alert | UnityEngine.iOS.NotificationType.Badge | UnityEngine.iOS.NotificationType.Sound);
        while (true)
        {
            yield return new WaitForSeconds (1);
            byte[] token = UnityEngine.iOS.NotificationServices.deviceToken;
            if (token == null) {
                Debug.Log ("Token is still null");
            } else {
                deviceToken = System.BitConverter.ToString(token).Replace("-", "");
                Debug.Log ("Device Token = " + deviceToken);
                break;
            }
            
        }
#elif UNITY_EDITOR
        deviceToken = "21345678901234567890321";
        Debug.Log ("Device Token = " + deviceToken);
#endif
        if (deviceToken.Length > 0 && deviceToken != userDataController.iosToken)
        {
            WWWForm form = new WWWForm();
            form.AddField ("ios_token", deviceToken);
            UserDataNetworkController.instance.UpdateUserIOSToken (form, null, null);
        }

        Debug.Log ("Device Token = " + deviceToken);
    }

    public void ShareFoodEasyGo (string text = null) {
        if (string.IsNullOrEmpty (text))
            text = "Come and download FoodEasyGo: " + Config.iOSDownloadAddress;

        SharePanelController.instance.ShareContent (text);
    }


}
