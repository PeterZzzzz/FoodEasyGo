using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.Network;

using Debug = UnityEngine.Debug;


public class AboutUsPanelController : BasePanelController {

    public static AboutUsPanelController            instance;

    public TextController                           contactSectionLeft;
    public TextController                           contactSectionRight;
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
        versionText.text = "Version :"+Application.version;

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
        contactSectionLeft.ResetUI ("", "");
        contactSectionRight.ResetUI ("", "");
        
        /*
        if (data != null && data.Count > 0) {
            for (int i = 0; data[i] != null; i++) {
                contactSectionLeft.Append ("\n", "\n");
                contactSectionRight.Append ("\n", "\n");

                contactSectionLeft.Append (data[i].GetField ("title_zh").str, data[i].GetField ("title_en").str);
                contactSectionRight.Append (data[i].GetField ("content_zh").str.Replace (",", "\n"), data[i].GetField ("content_en").str.Replace (",", "\n"));
                yield return null;
                while (contactSectionLeft.preferredHeight < contactSectionRight.preferredHeight) {
                    contactSectionLeft.Append ("\n", "\n");
                }
            }

        }
        */
        if (data != null && data.Count > 0) {
            for (int i = 0; data[i] != null; i++) {
                contactSectionLeft.Append ("\n", "\n");

                contactSectionLeft.Append (data[i].GetField ("title_zh").str, data[i].GetField ("title_en").str);
                contactSectionLeft.Append (": ", ": ");
                contactSectionLeft.Append (data[i].GetField ("content_zh").str.Replace (",", ", "), data[i].GetField ("content_en").str.Replace (",", ", "));
                yield return null;
                while (contactSectionLeft.preferredHeight < contactSectionRight.preferredHeight) {
                    contactSectionLeft.Append ("\n", "\n");
                }
            }

        }
        
    }
}