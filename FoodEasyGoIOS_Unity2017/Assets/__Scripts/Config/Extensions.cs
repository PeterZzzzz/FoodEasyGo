using UnityEngine;

public static class Extensions {

    public static Color AppColor1 () {
        return new Color (255f / 255f, 153f / 255f, 0f, 1f);
    }

    public static Color AppColor2 () {
        return new Color (255f / 255f, 83f / 255f, 13f / 255f, 1f);
    }

    public static Color AppColor3 () {
        return new Color (255f / 255f, 24f / 255f, 13f / 255f, 1f);
    }

    public static Color MainColor () {
        return new Color (255f / 255f, 215f / 255f, 95f / 255f, 1f);
    }
    
    public static void DestroyAllChildren (this Transform trans) {
        Transform temp = null;
        while (trans.childCount > 0) {
            temp = trans.GetChild (0);
            temp.localScale = Vector3.zero;
            temp.gameObject.SetActive (false);
            temp.SetParent (null);
            MonoBehaviour.Destroy (temp.gameObject);
        }
    }

    public static void DestroyChildrenStartingFrom (this Transform trans, int startingIndex) {
        Transform temp = null;
        while (trans.childCount > startingIndex) {
            temp = trans.GetChild (startingIndex);
            temp.localScale = Vector3.zero;
            temp.gameObject.SetActive (false);
            temp.SetParent (null);
            MonoBehaviour.Destroy (temp.gameObject);
        }
    }

}
