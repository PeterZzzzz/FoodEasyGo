using UnityEngine;
using System.Collections;

public static class CommonFunctions {

    public static int GetCurrentLanguageIndex () {
        return Config.currentLanguage == Language.english ? 0 : 1;
    }

    public static Color AppColor1 () {
        return new Color (255f / 255f, 153f / 255f, 0f, 1f);
    }

    public static Color AppColor2 () {
        return new Color (255f / 255f, 83f / 255f, 13f / 255f, 1f);
    }

    public static Color AppColor3 () {
        return new Color (255f / 255f, 24f / 255f, 13f / 255f, 1f);
    }

    public static Color AppWhiteColor () {
        return Color.white;
    }
}
