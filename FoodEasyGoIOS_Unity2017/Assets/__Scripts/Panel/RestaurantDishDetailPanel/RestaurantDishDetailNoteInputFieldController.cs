using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;

public class RestaurantDishDetailNoteInputFieldController : InputFieldController {

    public override void OnPointerDown (PointerEventData eventData) {
        base.OnPointerDown (eventData);

        RestaurantDishDetailPanelController.instance.OnNoteInputFieldPointerDown ();
    }
}
