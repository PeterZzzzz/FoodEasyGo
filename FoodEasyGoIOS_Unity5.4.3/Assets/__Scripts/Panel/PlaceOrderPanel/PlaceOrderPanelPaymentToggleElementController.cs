using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.UI;

public class PlaceOrderPanelPaymentToggleElementController : LDFWToggleElementController {

    public Image toggleBackground;
    public Image toggleCheckMark;

    public override void SelectToggleElement () {
        base.SelectToggleElement ();
        toggleBackground.color = Extensions.AppColor2 ();
        toggleCheckMark.color = Extensions.AppColor2 ();
        toggleCheckMark.gameObject.SetActive (true);
    }

    public override void DeselectToggleElement () {
        base.DeselectToggleElement ();

        toggleBackground.color = Color.grey;
        toggleCheckMark.color = Color.grey;
        toggleCheckMark.gameObject.SetActive (false);
    }
}
