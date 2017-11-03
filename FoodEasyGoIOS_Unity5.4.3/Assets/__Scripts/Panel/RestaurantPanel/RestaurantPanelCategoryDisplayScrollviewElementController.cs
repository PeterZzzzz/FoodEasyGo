using UnityEngine;
using System.Collections;

public class RestaurantPanelCategoryDisplayScrollviewElementController : MonoBehaviour {

    public int indexID;

    public void OnButtonClicked () {
        RestaurantPanelController.instance.SwitchCategoryDisplay (0);
        RestaurantPanelController.instance.categoryScrollviewContent.GetComponent<RestaurantPanelCategoryToggleController> ().Select (indexID);
        RestaurantPanelController.instance.LoadRestaurantList ();

    }
}
