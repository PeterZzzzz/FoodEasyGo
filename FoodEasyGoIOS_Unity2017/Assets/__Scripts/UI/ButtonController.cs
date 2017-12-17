using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System;
using UnityEngine.EventSystems;

public class ButtonController : Button,  LanguageInterface {

    public string buttonTextZH;
    public string buttonTextEN;

    public Text text;
    
    public new void Start () {
        base.Start ();
        OnLanguageChanged (Config.currentLanguage);
    }

    public void OnLanguageChanged (Language language) {
        switch (language) {
            case Language.chinese:
                text.text = buttonTextZH;
                break;
            case Language.english:
                text.text = buttonTextEN;
                break;
        }
    }

    public override void OnPointerUp (PointerEventData eventData) {
        base.OnPointerUp (eventData);
        this.OnDeselect (null);
    }
}
