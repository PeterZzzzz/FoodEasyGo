using UnityEngine;
using System.Collections;

public static class Config
{

    // Common
    public static Language currentLanguage = Language.chinese;
    public static float panelSlideTime = 0.3f;
    public static string versionNumberString = "Version 3.1.2";
#if UNITY_EDITOR
    public static bool isDebug = true;
#else
    public static bool isDebug = false;
#endif

    // StartUpPanel
    public static float startUpPanelDisplayTime = 2f;

    // HomePanel
    public static float slideShowTimeInterval = 3f;


    // MessagePanel
    public static float messageDisplayTime = 3f;

    // Server
    public static int serverCallGeneralAttemps = 3;
    public static string serverDomain = "https://www.foodeasygo.com/";
    //public static string serverDomain = "http://app.foodeasygo.com/";
    //public static string serverDomain = "http://192.168.1.102/";
    //public static string serverDomain = "http://127.0.0.1/";
    //public static string serverDomain = "localhost/";
    //public static string serverDomain = "http://10.0.1.52/";

    public static string serverAPIURL = serverDomain + "Appv8/";

    public static string infoControllerURL = serverAPIURL + "Info/";
    public static string accessControllerURL = serverAPIURL + "Access/";


    // ShareSDK
    public static string shareSDKAppKey = "1a6e90e0ee534";
    public static string shareSDKAppSecret = "ef8ea9f23424a8a3508212d307f5689b";

    public static string weChatAppID = "wxc6efbea908c59e29";
    public static string weChatAppSecret = "74d7f8bcc9022c75fd754e9d225ff50c";

    public static string facebookAppID = "253201838452917";
    public static string facebookAppSecret = "749b131ed3f9710a3823454d28cb7179";

    public static string googlePlusClicnetID = "168877847231-34cas9vfae5v4l4d1m99sbiirrc95lu9.apps.googleusercontent.com";

    // App download
    public static string iOSDownloadAddress = "https://itunes.apple.com/us/app/foodeasygo/id1207497369?mt=8";

    // Membership
    public static int premiumPlusMembershipRate = 20;
    public static int premiumMembershipRate = 15;
    public static int membershipRate = 10;
    public static int spendPointRate = 1000;
}
