using UnityEngine;
using UnityEngine.UI;
using System.Collections;


using LDFW;
using LDFW.Network;
using Debug = UnityEngine.Debug;

public class MyInvitationsPanelController : BasePanelController {

    public static MyInvitationsPanelController instance;
    public GameObject userbarPrefab;
    public ScrollRect defaultScrollRect;
    public Transform emptyText;

    public Text todayCount;
    public Text historicalCount;


    new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();
    }

    #region Overrides
    public override void ResetPanel () {
        defaultScrollRect.content.DestroyAllChildren ();
    }

    public override void ReloadPanel () {
        headerTitle.ResetUI ("我的邀请", "My Invitations");

        LoadingPanelController.instance.DisplayPanel ();
        UserDataNetworkController.instance.GetUserInviteList (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                if (data != null && data.Count > 0) {
                    for (int i=0; data[i] != null; i++) {
                        Transform bar = Instantiate (userbarPrefab).transform;
                        bar.SetParent (defaultScrollRect.content);
                        bar.localScale = Vector3.one;

                        bar.Find ("Panel/Email").GetComponent<TextController> ().ResetUI (data[i].GetField ("email").str);
                        bar.Find ("Panel/RegistrationTime").GetComponent<TextController> ().ResetUI ("注册时间: " + data[i].GetField ("register_time").str);

                        if (defaultScrollRect.content.childCount > 0) {
                            emptyText.gameObject.SetActive (false);
                        } else {
                            emptyText.gameObject.SetActive (true);
                        }
                        historicalCount.text = i.ToString ();
                    }
                }
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();

            }));

        
    }
    #endregion
}