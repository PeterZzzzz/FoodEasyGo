using UnityEngine;
using UnityEngine.UI;
using System.Xml;
using System.Collections;

using LDFW;
using LDFW.Network;
using LDFW.FileIO;

using Debug = UnityEngine.Debug;


public class SettingsPanelController : BasePanelController {

    public static SettingsPanelController           instance;

    public Transform                                dataSubPanel;
    public TextController                           dataSubPanelTitle;
    public TextController                           dataSubPanelText;


    new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();

        headerTitle.ResetUI ("设置", "Settings");
        SwitchDataSubPanel (false);
    }


    #region Overrides
    public override void ResetPanel () {
        SwitchDataSubPanel (false);
    }
    public override void ReloadPanel () {
        UpdateCacheDirSize ();
    }
    #endregion

    public void OnLanguangeButtonClicked () {
        PopUpPanelController.instance.DisplayPopUpPanel (
            () => {
                Config.currentLanguage = Language.english;
                MainCanvasController.instance.UpdateLanguageOnAllPanels ();
                PlayerPrefs.SetString("language", "en");
            }, 
            () => {
                Config.currentLanguage = Language.chinese;
                MainCanvasController.instance.UpdateLanguageOnAllPanels ();
                PlayerPrefs.SetString("language", "zh");
            }, 
            "请选择语言", "Please select your language", "English", "English", "中文", "中文");
    }
    
    public void OnAbountUsButtonClicked () {
        AboutUsPanelController.instance.OpenPanel ();
    }

    public void OnFAQButtonClicked () {

        LoadingPanelController.instance.DisplayPanelImmediately ();
        InfoNetworkController.instance.GetFAQ (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                dataSubPanelTitle.ResetUI ("常见问题", "FAQ");
                SwitchDataSubPanel (true);
                dataSubPanelText.ResetUI ("", "");
                if (data != null && data.Count > 0) {
                    for (int i=0; data[i] != null; i++) {

                        // Title
                        dataSubPanelText.Append ("\n", "\n");
                        dataSubPanelText.Append (data[i].GetField ("title_zh").str, data[i].GetField ("title_en").str);

                        // Content
                        dataSubPanelText.Append ("\n", "\n");
                        dataSubPanelText.Append (data[i].GetField ("content_zh").str, data[i].GetField ("content_en").str);

                        dataSubPanelText.Append ("\n", "\n");
                    }

                    dataSubPanelText.ResetUI (
                        dataSubPanelText.textZH.Replace ("\\r\\n", "\n"),
                        dataSubPanelText.textEN.Replace ("\\r\\n", "\n"));
                }

                
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
            }));
    }

    public void OnRefundPolicyButtonClicked () {
        LoadingPanelController.instance.DisplayPanelImmediately ();
        InfoNetworkController.instance.GetRefundPolicy (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                dataSubPanelTitle.ResetUI ("退单退款", "Refund");
                SwitchDataSubPanel (true);
                dataSubPanelText.ResetUI ("", "");
                if (data != null && data.Count > 0) {
                    for (int i = 0; data[i] != null; i++) {

                        // Content
                        dataSubPanelText.Append ("\n", "\n");
                        dataSubPanelText.Append (data[i].GetField ("description_zh").str, data[i].GetField ("description_en").str);

                        dataSubPanelText.Append ("\n", "\n");
                    }

                    dataSubPanelText.ResetUI (
                        dataSubPanelText.textZH.Replace ("\\r\\n", "\n"),
                        dataSubPanelText.textEN.Replace ("\\r\\n", "\n"));
                }


            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
            }));
    }

    public void OnLeaveMessageButtonClicked () {
        LeaveMessagePanelController.instance.OpenPanel ();
    }

    public void OnDeleteCacheButtonClicked () {
        PersistentDataControl.ClearDir ("general");
        PersistentDataControl.ClearDir ("grocery");
        PersistentDataControl.ClearDir ("groupon");
        PersistentDataControl.ClearDir ("order");
        PersistentDataControl.ClearDir ("restaurant");
        
        UpdateCacheDirSize ();
    }

    public void OnLogoutButtonClicked () {
        PlayerPrefsController.SetAutoLogin (false);
        SceneController.LoadLogInScene ();
    }


    #region DataSubPanel
    public void SwitchDataSubPanel (bool state) {
        dataSubPanel.gameObject.SetActive (state);
    }


    #endregion


    #region Other
    public void UpdateCacheDirSize () {
        long size = PersistentDataControl.GetPersistentDataPathDirSize ();
        string sizeText = "";
        if (size > 1000000) {
            sizeText = (size / 1000000).ToString () + "MB";
        } else {
            sizeText = (size / 1000).ToString () + "KB";
        }

        transform.Find ("Content/Button6/Data").GetComponent<Text> ().text = sizeText;
    }

    #endregion
}
