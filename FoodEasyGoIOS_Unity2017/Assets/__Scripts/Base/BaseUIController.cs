using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System;

public class BaseUIController : MonoBehaviour, LanguageInterface {

    public RectTransform mRectTransform;
    
    protected void Awake () {
        mRectTransform = transform as RectTransform;
    }

    public virtual void OnLanguageChanged (Language language) {
        switch (language) {
            case Language.chinese:

                break;
            case Language.english:

                break;
        }
    }
    
}
