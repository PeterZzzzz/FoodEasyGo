using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.Network;

using Debug = UnityEngine.Debug;


public class AboutUsPanelController : BasePanelController {

    public static AboutUsPanelController            instance;

    public TextController                           contactSection;
    public Text                                     versionText;


    new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();

        headerTitle.ResetUI ("关于我们", "About Us");
    }


    #region Overrides
    public override void ResetPanel () {
    }
    public override void ReloadPanel () {
        versionText.text = "Version :" + Application.version;

        LoadingPanelController.instance.DisplayPanel ();
        InfoNetworkController.instance.GetContactInfo (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                StartCoroutine (LoadData (data));
            }), 
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
            }));
    }
    #endregion


    private IEnumerator LoadData (JSONObject data) {
        contactSection.ResetUI ("", "");

        if (data != null && data.Count > 0) {
            for (int i = 0; data[i] != null; i++) {
                contactSection.Append ("\n", "\n");

                contactSection.Append (data[i].GetField ("title_zh").str, data[i].GetField ("title_en").str);
                contactSection.Append (": ", ": ");
                contactSection.Append (data[i].GetField ("content_zh").str.Replace (",", ", "), data[i].GetField ("content_en").str.Replace (",", ", "));
                yield return null;

            }
        }  
    }
}