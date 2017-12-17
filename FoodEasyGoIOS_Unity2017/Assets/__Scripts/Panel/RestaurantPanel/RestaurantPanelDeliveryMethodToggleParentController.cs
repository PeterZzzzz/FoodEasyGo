using UnityEngine;
using System.Collections;


using LDFW.UI;

public class RestaurantPanelDeliveryMethodToggleParentController : LDFWToggleController {

    public override bool OnToggleElementClicked (int toggleSiblingIndex, bool isToggleOn) {
        if (base.OnToggleElementClicked (toggleSiblingIndex, isToggleOn)) {
            if (toggleSiblingIndex == 0) {
                RestaurantPanelController.instance.ReloadPanel ();
            } else if (toggleSiblingIndex == 1) {
                RestaurantPanelController.instance.SwitchReserveDisplay (1);
            }
            return true;
        }
        return false;
    }
}
