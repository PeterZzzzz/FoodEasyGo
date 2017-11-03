using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class LoginCanvasController : MonoBehaviour {

    public Transform                    loginPanel;
    public Transform                    registerPanel;
    public Transform                    passwordResetPanel;
    public CanvasScaler                 canvasScaler;
    public Vector2                      canvasSize;


    public static LoginCanvasController instance;

    void Awake () {
        if (instance != null) {
            Destroy (gameObject);
            return;
        }
        instance = this;

        canvasSize = LDFWDeviceInfo.GetScreenDPVector ();
        canvasScaler.referenceResolution = canvasSize;
    }

    public void UpdateLanguageOnAllPanels () {
        foreach (var languageObject in transform.GetComponentsInChildren<LanguageInterface> ()) {
            languageObject.OnLanguageChanged (Config.currentLanguage);
        }
        /*
        for (int i=0; i<transform.childCount; i++) {
            currentPanel = transform.GetChild (i).GetComponent<BasePanelController> ();
            if (currentPanel != null) {
                currentPanel.UpdatePanelLanguage ();
            }
        }
        */
    }
}
