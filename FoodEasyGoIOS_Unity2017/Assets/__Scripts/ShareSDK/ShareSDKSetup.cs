using UnityEngine;
using System.Collections;

using cn.sharesdk.unity3d;

public class ShareSDKSetup : MonoBehaviour {

    ShareSDK shareSDK;

    // Use this for initialization
    void Awake () {
        shareSDK = GetComponent<ShareSDK> ();
        if (shareSDK != null) {
            shareSDK.appKey = Config.shareSDKAppKey;

            shareSDK.devInfo.facebook.api_key = Config.facebookAppID;
            shareSDK.devInfo.facebook.app_secret = Config.facebookAppSecret;

            shareSDK.devInfo.wechat.app_id = Config.weChatAppID;
            shareSDK.devInfo.wechat.app_secret = Config.weChatAppSecret;

            shareSDK.devInfo.googlePlus.client_id = Config.googlePlusClicnetID;
        }
	}
	
}
