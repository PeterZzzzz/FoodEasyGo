using UnityEngine;
using System.Collections;

using LDFW;
using LDFW.UI;

public class PopUpTogglePanelToggleElementController : LDFWToggleElementController {


    public override void SelectToggleElement () {
        base.SelectToggleElement ();
        transform.Find ("CheckMark").gameObject.SetActive (true);
    }

    public override void DeselectToggleElement () {
        base.DeselectToggleElement ();
        transform.Find ("CheckMark").gameObject.SetActive (false);
    }

    public void Reset (string textZH, string textEN, string id) {
        transform.Find ("Text").GetComponent<TextController> ().ResetUI (textZH, textEN);
        toggleID = id;
    }
}
