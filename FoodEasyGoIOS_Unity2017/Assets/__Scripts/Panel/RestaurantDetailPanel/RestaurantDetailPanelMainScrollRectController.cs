using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RestaurantDetailPanelMainScrollRectController : ScrollRect {

    public static RestaurantDetailPanelMainScrollRectController instance;

    new void Awake () {
        base.Awake ();
        if (instance != null) {
            Destroy (instance.gameObject);
        }

        instance = this;
    }

}
