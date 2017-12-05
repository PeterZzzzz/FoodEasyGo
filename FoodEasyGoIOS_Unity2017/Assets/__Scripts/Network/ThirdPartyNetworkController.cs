using UnityEngine;
using System.Collections;

using LDFW.Network;

public class ThirdPartyNetworkController : ServerCallController {

    public static ThirdPartyNetworkController instance;
    public string thirdPartyLoginURL;

    protected void Awake () {
        if (instance != null) {
            Destroy (this);
            return;
        }

        instance = this;
        thirdPartyLoginURL = Config.serverAPIURL + "ThirdParty/";
    }

    // Set binding email
    LDFWWWWCallCoroutineWrapper setBindingEmailCall = null;
    public void SetBindingEmail (string thirdPartyUserID, string platform, string email, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (setBindingEmailCall != null) {
            setBindingEmailCall.Dispose ();
        }

        WWWForm form = new WWWForm ();
        form.AddField ("userid", thirdPartyUserID);
        form.AddField ("platform", platform);
        form.AddField ("email", email);

        setBindingEmailCall = CommonWWWCall (thirdPartyLoginURL + "set_binding_email", form, success, failure);
    }

}