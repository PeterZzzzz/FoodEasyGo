using UnityEngine;
using System.Collections;

public class RestaurantPanelSearchDisplayController : MonoBehaviour {

    public Color selectedColor;
    public Color unselectedColor;

    public Transform contentTransform;

    public int searchTypeIndex = 0;

    void Start () {
        SelectSearchType (0);
    }

    public void SelectSearchType (int index) {
        if (searchTypeIndex != index) {
            searchTypeIndex = index;
            for (int i = 0; i < contentTransform.childCount; i++) {
                if (i == index) {
                    contentTransform.GetChild (i).Find ("Text").GetComponent<TextController> ().color = selectedColor;
                } else {
                    contentTransform.GetChild (i).Find ("Text").GetComponent<TextController> ().color = unselectedColor;
                }
            }
            RestaurantPanelController.instance.SwitchSearchTypeDisplay (0);
            RestaurantPanelController.instance.ReloadPanel ();
        }
    }

}
