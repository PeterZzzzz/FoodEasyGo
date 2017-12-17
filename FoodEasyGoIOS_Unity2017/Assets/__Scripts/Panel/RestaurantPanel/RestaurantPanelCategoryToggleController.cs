using UnityEngine;
using System.Collections;

public class RestaurantPanelCategoryToggleController : MonoBehaviour {

    public Transform toggleParent;
    public Transform currentSelected;
    
    public void Awake () {
        toggleParent = transform;
    }

    public void Select (int index) {
        currentSelected = toggleParent.GetChild (index);
        DeselectAll ();
        currentSelected.GetComponent<RestaurantPanelCategoryToggle> ().SelectToggle ();
        //RestaurantPanelController.instance.LoadRestaurantList (true);
    }

    public void DeselectAll () {
        for (int i = 0; i < toggleParent.childCount; i++) {
            toggleParent.GetChild (i).GetComponent<RestaurantPanelCategoryToggle> ().DeselectToggle ();
        }
    }
}
