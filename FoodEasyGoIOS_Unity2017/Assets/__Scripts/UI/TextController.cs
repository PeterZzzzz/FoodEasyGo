using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System;

public class TextController : Text, LanguageInterface {

    public string textZH;
    public string textEN;

    public new void Start () {
        base.Start ();
        OnLanguageChanged (Config.currentLanguage);
    }

    public void OnLanguageChanged (Language language) {
        if (this.text != null) {
            switch (language) {
                case Language.chinese:
                    this.text = textZH;
                    break;
                case Language.english:
                    this.text = textEN;
                    break;
            }
        }
    }

    public void ResetUI (string zh, string en) {
        textZH = zh;
        textEN = en;
        OnLanguageChanged (Config.currentLanguage);
    }

    public void Append (string zh, string en) {
        textZH += zh;
        textEN += en;
        OnLanguageChanged (Config.currentLanguage);
    }

    public void ResetUI (string str) {
        textZH = str;
        textEN = str;
        OnLanguageChanged (Config.currentLanguage);
    }

    public void Append (string str) {
        textZH += str;
        textEN += str;
        OnLanguageChanged (Config.currentLanguage);
    }

    public bool IsTextEmpty()
    {
        if (Config.currentLanguage == Language.chinese && string.IsNullOrEmpty(textZH))
            return true;
        if (Config.currentLanguage == Language.english && string.IsNullOrEmpty(textEN))
            return true;
        if (string.IsNullOrEmpty(text))
            return true;

        return false;
    }
}
