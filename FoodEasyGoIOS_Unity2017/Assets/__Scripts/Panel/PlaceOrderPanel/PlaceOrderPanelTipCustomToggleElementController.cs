using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

using LDFW;
using LDFW.UI;
using System;

public class PlaceOrderPanelTipCustomToggleElementController : LDFWToggleElementController, IPointerDownHandler {

    public InputField inputField;

    public override void SelectToggleElement () {
        base.SelectToggleElement ();
        transform.Find ("Background").GetComponent<Image> ().color = Extensions.AppColor2 ();
    }

    public override void DeselectToggleElement () {
        base.DeselectToggleElement ();
        transform.Find ("Background").GetComponent<Image> ().color = new Color (200f/255f, 200f / 255f, 200f / 255f, 1f);
        inputField.text = "";
    }

    //public void OnInputFieldEndEdit () {
    //    base.OnPointerClick (null);
    //    PlaceOrderPanelController.instance.OnCustomTipButtonClicked (inputField.text);
    //}

    public void OnPointerDown (PointerEventData eventData) {
        inputField.OnPointerDown (eventData);
    }

    public override void OnPointerClick (PointerEventData eventData) {
    }
}
