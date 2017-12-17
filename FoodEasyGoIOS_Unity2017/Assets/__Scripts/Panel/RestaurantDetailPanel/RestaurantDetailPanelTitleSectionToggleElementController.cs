using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW.UI;

public class RestaurantDetailPanelTitleSectionToggleElementController : LDFWToggleElementController {

    public Text text;
    public Image underline;

    public override void SelectToggleElement () {
        base.SelectToggleElement ();
        text.color = Extensions.AppColor2 ();
        underline.gameObject.SetActive (true);
    }

    public override void DeselectToggleElement () {
        base.DeselectToggleElement ();
        text.color = new Color (0.5f, 0.5f, 0.5f, 1f);
        underline.gameObject.SetActive (false);
    }
}
