using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.UI;

public class GroceryPanelDefaultDisplayCategoryBarElementController : LDFWToggleElementController {

    public string categoryID;
    private Transform line;

    void Awake() {
        line = transform.Find ("Title/Line");
    }

    public void Reset (string id, string nameZH, string nameEN) {
        transform.Find ("Title").GetComponent<TextController> ().ResetUI (nameZH, nameEN);
        categoryID = id;
        toggleID = id;
    }

    public override void SelectToggleElement () {
        if (line != null)
            line.GetComponent<Image> ().color = CommonFunctions.AppColor1 ();
    }

    public override void DeselectToggleElement () {
        if (line != null)
            line.GetComponent<Image> ().color = CommonFunctions.AppWhiteColor ();
    }
}
