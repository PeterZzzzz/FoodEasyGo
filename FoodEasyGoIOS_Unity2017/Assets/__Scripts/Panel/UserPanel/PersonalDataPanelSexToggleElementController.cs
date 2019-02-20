using UnityEngine;
using UnityEngine.Events;
using System.Collections;

using LDFW.UI;

public class PersonalDataPanelSexToggleElementController : LDFWToggleElementController {

    public TextController textController;

    void Awake () {
        textController = GetComponent<TextController> ();
    }

    public override void SelectToggleElement () {
        base.SelectToggleElement ();
        textController.color = Extensions.MainColor ();
        PersonalDataPanelController.instance.SwitchSexPanel (0);
    }
    public override void DeselectToggleElement () {
        base.DeselectToggleElement ();
        textController.color = new Color (0.5f, 0.5f, 0.5f, 1f);
    }
}
