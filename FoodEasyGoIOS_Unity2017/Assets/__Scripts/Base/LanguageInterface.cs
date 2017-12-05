using UnityEngine;
using System.Collections;


public enum Language {
    chinese, english
}

public interface LanguageInterface {
    void OnLanguageChanged (Language language);
}
