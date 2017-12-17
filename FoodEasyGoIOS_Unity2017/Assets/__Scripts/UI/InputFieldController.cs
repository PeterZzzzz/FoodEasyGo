using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.EventSystems;
using System;

[System.Serializable]
public class InputFieldController : InputField, LanguageInterface {

    public Image backgroundImage;

    public string placeholderZH;
    public string placeholderEN;

    public Color onSelectColor;
    public Color onDeselectColor;

    public new void Start () {
        base.Start ();
        OnLanguageChanged (Config.currentLanguage);
        OnDeselect (null);
    }

    public override void OnSelect (BaseEventData eventData) {
        base.OnSelect (eventData);
        if (backgroundImage != null) {
            backgroundImage.color = onSelectColor;
        }
    }

    public override void OnDeselect (BaseEventData eventData) {
        base.OnDeselect (eventData);
        if (backgroundImage != null) {
            backgroundImage.color = onDeselectColor;
        }
    }

    public void OnLanguageChanged (Language language) {
        switch (language) {
            case Language.chinese:
                if (placeholder != null) {
                    placeholder.GetComponent<Text> ().text = placeholderZH;
                }
                break;
            case Language.english:
                if (placeholder != null) {
                    placeholder.GetComponent<Text> ().text = placeholderEN;
                }
                break;
        }
    }

    public void OnValueChanged () {

    }

    public void OnEndEdit () {

    }
}
