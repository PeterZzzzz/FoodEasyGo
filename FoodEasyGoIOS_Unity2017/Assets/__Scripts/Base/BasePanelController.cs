using UnityEngine;
using System.Collections;
using System.Collections.Generic;

using LDFW;
using LDFW.Tween;


public class BasePanelController : MonoBehaviour {

    protected TextController headerTitle;


    // List of language interface instances under this panel
    public List<LanguageInterface>          languageUIList;

    protected Vector2 panelSizeDelta;


    // Awake
    protected void Awake () {
        if (transform.Find ("Header/Title") != null) {
            headerTitle = transform.Find ("Header/Title").GetComponent<TextController> ();
        }
        languageUIList = new List<LanguageInterface> ();

        // Set size
        panelSizeDelta = LDFWDeviceInfo.GetScreenDPVector ();
        (transform as RectTransform).sizeDelta = panelSizeDelta;
    }

    // Start
    protected void Start () {
        // Set size
        if (MainCanvasController.instance != null) {
            (transform as RectTransform).sizeDelta = MainCanvasController.instance.canvasSize;
        }

        AutoScreenAdjustment ();

        // Update Language
        UpdatePanelLanguage ();
        
        HidePanelImmediately ();
    }

    // Screen Resolution
    protected virtual void AutoScreenAdjustment() {

    }

    #region DataLoading
    public virtual void ResetPanel () {
        Debug.LogError (this.GetType () + " - this should not be called");
    }

    // Reset panel
    public virtual void ResetPanelUI () {
        UpdatePanelLanguage ();
    }

    // Reloads data
    public virtual void ReloadPanel () {
        Debug.LogError ("This should not be called");
    }

    public virtual void CleanupPanel () {
        //DebugLogger.LogError ("This should not be called");
    }
    #endregion


    #region OpenAndClose
    // OpenPanel and ClosePanel: calls PanelListController to add or remove panel

    public virtual void OpenPanel () {
        StopAllCoroutines ();
        CancelInvoke ();

        PanelListController.instance.AddPanel (this);
    }
    public virtual void ClosePanel () {
        StopAllCoroutines ();
        CancelInvoke ();
        
        PanelListController.instance.RemovePanel ();
    }
    #endregion


    #region DisplayAndHide
    // DisplayPanel: play positionTweener
    public virtual void DisplayPanel () {
        DisplayPanelImmediately ();
    }

    // DisplayPanelImmediately: doesn't play positionTweener
    public virtual void DisplayPanelImmediately () {
        //DebugLogger.Log (this.GetType ().Name + ".DisplayPanelImmediately is called");
        Resources.UnloadUnusedAssets ();
        System.GC.Collect ();
        //gameObject.SetActive (true);

        CancelInvoke ();
        StopAllCoroutines ();

        transform.localScale = Vector3.one;
        (transform as RectTransform).anchorMin = Vector2.zero;
        (transform as RectTransform).anchorMax = Vector2.one;
        (transform as RectTransform).sizeDelta = Vector2.zero;
        (transform as RectTransform).anchoredPosition = Vector2.zero;
        ResetPanel ();
        ReloadPanel ();
    }

    // HidePanel: play positionTweener
    public virtual void HidePanel (float delay = 0f) {
        Invoke ("HidePanelImmediately", delay);
    }

    // Hide panel: set scale to zero;
    public virtual void HidePanelImmediately () {
        //DebugLogger.LogWarning (this.GetType ().Name + ".HidePanelImmediately is called");

        CancelInvoke ();
        StopAllCoroutines ();

        (transform as RectTransform).anchoredPosition = new Vector3 (MainCanvasController.instance.canvasSize.x, 0f);
        transform.localScale = Vector3.zero;

        //ResetPanel ();
        CleanupPanel ();

        Resources.UnloadUnusedAssets ();
        System.GC.Collect ();
        //gameObject.SetActive (false);
    }

    #endregion


    #region LanguageRelated
    // Updates language
    public virtual void UpdatePanelLanguage () {
        GetLanguageUIList (transform);

        if (languageUIList != null) {
            int count = languageUIList.Count;
            for (int i = 0; i < count; i++) {
                //DebugLogger.Log ("i = " + i);
                if (languageUIList[i] != null) {
                    languageUIList[i].OnLanguageChanged (Config.currentLanguage);
                }
            }
        }
    }

    // Get language list
    protected void GetLanguageUIList (Transform rootTransform) {

        if (rootTransform.childCount > 0) {
            for (var i = 0; i < rootTransform.childCount; i++) {
                if (rootTransform.GetChild (i).GetComponent<LanguageInterface>() != null) {
                    languageUIList.Add (rootTransform.GetChild (i).GetComponent<LanguageInterface>());
                }
                GetLanguageUIList (rootTransform.GetChild (i));
            }
        }
    }
    #endregion
}
