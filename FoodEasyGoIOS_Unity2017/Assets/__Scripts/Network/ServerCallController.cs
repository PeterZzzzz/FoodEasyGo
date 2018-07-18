using UnityEngine;
using System;
using System.Collections;

using LDFW;
using LDFW.Network;

using Debug = UnityEngine.Debug;

public class ServerCallController : LDFWServerCallController {
    

    protected override LDFWWWWCallCoroutineWrapper CommonWWWCall (string url, WWWForm form, LDFWServerResponseEvent successCallBack, LDFWServerResponseEvent failureCallBack) {
        
        if (form == null) {
            form = new WWWForm ();
        }

        form.AddField ("access_token", UserDataController.instance.accessToken);
        form.AddField ("user_id", UserDataController.instance.userID);
        form.AddField ("zip_code", UserDataController.instance.zipCode);
        form.AddField ("region_id", UserDataController.instance.regionID);
        form.AddField ("target_region_id", UserDataController.instance.targetServiceRegionID);

        return base.CommonWWWCall (url, form, successCallBack, failureCallBack);
    }

    protected override LDFWWWWCallCoroutineWrapper CommonWWWCall (WWW www, LDFWServerResponseEvent successCallBack, LDFWServerResponseEvent failureCallBack) {
        return base.CommonWWWCall (www, successCallBack, failureCallBack);
    }

    protected override IEnumerator CommonWWWCallCoroutine (WWW www, LDFWServerResponseEvent successCallBack, LDFWServerResponseEvent failureCallBack) {

        string url = www.url;
        
        yield return www;
        //LoadingPanelController.instance.HidePanelImmediately ();
        JSONObject response = null;

        try {
            if (www != null) {
                if (!string.IsNullOrEmpty (www.error)) {
                    if (MessagePanelController.instance != null) {
                        MessagePanelController.instance.DisplayPanel (ErrorMessageConfig.GeneralError[CommonFunctions.GetCurrentLanguageIndex ()]);
                    }
                    //LoadingPanelController.instance.HidePanelImmediately ();
                    DebugLogger.Log ("www error: (" + www.url + ")" + www.error + "\n");
                    DebugLogger.Log (www.text);
                    yield break;
                }

                DebugLogger.Log ("www response: (" + www.url + ")");
                DebugLogger.Log (www.text);

                //DebugLogger.Log ("www.text length = " + www.text.Length);
                response = new JSONObject (www.text.Replace ("\\/", "/"));
                //DebugLogger.Log (response.ToString ());
                www.Dispose ();
                //MessagePanelController.instance.DisplayPanel (ErrorMessageConfig.GeneralError[CommonFunctions.GetCurrentLanguageIndex ()]);
            }
            
        } catch (Exception e) {
            //MessagePanelController.instance.DisplayPanel (ErrorMessageConfig.GeneralError[CommonFunctions.GetCurrentLanguageIndex ()]);
            DebugLogger.Log ("Normal Exception: " + url + "\n" + e.Message + "\n" + e.StackTrace);
            yield break;
        }
        
        if (response != null && response.GetField ("c") != null && response.GetField ("c").ToString () == "0") {
            if (successCallBack != null) {
                successCallBack.Invoke (response.GetField ("d"), response.GetField ("m").ToString ());
                yield break;
            }
        } else {
            if (response.GetField ("c") != null && response.GetField ("c").str == "10000") {
                AccountAccessNetworkController.instance.BackgroundUserLogin ();
                yield break;
            }
            if (failureCallBack != null) {
                if (response != null && response.GetField ("m") != null) {
                    if (MessagePanelController.instance != null) {
                        MessagePanelController.instance.DisplayPanel (response.GetField ("m").str);
                    }
                    failureCallBack.Invoke (response, response.GetField ("m").str);
                } else {
                    failureCallBack.Invoke (response, "Server error");
                }
                yield break;
            }
        }

    }
}
