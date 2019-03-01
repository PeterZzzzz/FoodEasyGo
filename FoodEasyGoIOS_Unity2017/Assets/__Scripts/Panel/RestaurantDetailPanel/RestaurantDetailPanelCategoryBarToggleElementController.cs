using UnityEngine;
using System.Collections;

using LDFW.UI;

public class RestaurantDetailPanelCategoryBarToggleElementController : LDFWToggleElementController {

    public GameObject selectedImage;
    public TextController text;

    public override void SelectToggleElement () {
        base.SelectToggleElement ();
        selectedImage.SetActive (true);
        text.color = Extensions.MainColor();
    }

    public override void DeselectToggleElement () {
        base.DeselectToggleElement ();
        selectedImage.SetActive (false);
        text.color = new Color(51f / 255f, 51f / 255f, 51f / 255f, 1f);
    }

}
