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

    public int todayInvite = 0;
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
        todayInvite = 0;
        LoadingPanelController.instance.DisplayPanel ();
        UserDataNetworkController.instance.GetUserInviteList (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                if (data != null && data.Count > 0) 
                {
                    for (int i=0; data[i] != null; i++) {
                        Transform bar = Instantiate (userbarPrefab).transform;
                        bar.SetParent (defaultScrollRect.content);
                        bar.localScale = Vector3.one;

                        bar.Find ("Panel/Email").GetComponent<TextController> ().ResetUI (data[i].GetField ("email").str);
                        bar.Find("Panel/RegistrationTime").GetComponent<TextController>().ResetUI("注册时间: " + data[i].GetField("register_time").str, "Register Time: " + data[i].GetField("register_time").str);

                        if (defaultScrollRect.content.childCount > 0) {
                            emptyText.gameObject.SetActive (false);
                        } else {
                            emptyText.gameObject.SetActive (true);
                        }

                        if(data[i].GetField("today").str.Equals("1")){
                            todayInvite += 1;
                        }
                        todayCount.text = todayInvite.ToString();
                        historicalCount.text = (i + 1).ToString();
                    }
                }else
                {
                    //返回的数组为空，没有邀请对象，但是还是可以正常后台交互，走的不是交互失败的callback
                    todayCount.text = "0";
                    historicalCount.text = "0";
                    emptyText.gameObject.SetActive(true);
                    Debug.Log("没有邀请好友");
                }
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {

                LoadingPanelController.instance.HidePanelImmediately ();

            }));

        
    }
    #endregion
}