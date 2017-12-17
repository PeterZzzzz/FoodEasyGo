using UnityEngine;
using System.Collections;

public class LanguageButtonController : MonoBehaviour {

    public Transform EN;
    public Transform ZH;

    void Awake () {
        SetLanguage ();
    }

    public void SetLanguage () {
        if (Config.currentLanguage == Language.chinese) {
            EN.gameObject.SetActive (true);
            ZH.gameObject.SetActive (false);
        } else {
            EN.gameObject.SetActive (false);
            ZH.gameObject.SetActive (true);
        }
    }

    public void OnLanguageButtonClicked () {
        if (Config.currentLanguage == Language.chinese) {
            Config.currentLanguage = Language.english;
        } else {
            Config.currentLanguage = Language.chinese;
        }

        SetLanguage ();
        if (MainCanvasController.instance != null) {
            MainCanvasController.instance.UpdateLanguageOnAllPanels ();
        }
        if (LoginCanvasController.instance != null) {
            LoginCanvasController.instance.UpdateLanguageOnAllPanels ();
        }
    }
}
