using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.UI;

public class PlaceOrderPanelTipToggleElementController : LDFWToggleElementController {

    public override void SelectToggleElement () {
        base.SelectToggleElement ();
        GetComponent<Image> ().color = Extensions.AppColor2 ();
        transform.Find ("Background").gameObject.SetActive (false);
        transform.Find ("Text").GetComponent<Text> ().color = Color.white;
    }

    public override void DeselectToggleElement () {
        base.DeselectToggleElement ();
        GetComponent<Image> ().color = Color.white;
        transform.Find ("Background").gameObject.SetActive (true);
        transform.Find ("Text").GetComponent<Text> ().color = new Color (0.5f, 0.5f, 0.5f, 1f);
    }
}
