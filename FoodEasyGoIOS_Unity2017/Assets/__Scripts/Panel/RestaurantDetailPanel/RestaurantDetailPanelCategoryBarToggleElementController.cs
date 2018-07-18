using UnityEngine;
using System.Collections;

using LDFW.UI;

public class RestaurantDetailPanelCategoryBarToggleElementController : LDFWToggleElementController {

    public GameObject selectedImage;

    public override void SelectToggleElement () {
        base.SelectToggleElement ();
        selectedImage.SetActive (true);
    }

    public override void DeselectToggleElement () {
        base.DeselectToggleElement ();
        selectedImage.SetActive (false);
    }

}
