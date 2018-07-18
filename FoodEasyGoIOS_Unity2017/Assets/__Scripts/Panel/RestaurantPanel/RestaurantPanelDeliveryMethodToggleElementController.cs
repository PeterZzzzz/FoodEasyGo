using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW.UI;
using UnityEngine.EventSystems;

public class RestaurantPanelDeliveryMethodToggleElementController : LDFWToggleElementController {

    public Image baseImage;
    public TextController text;
    public string reserveID;
    

    public override void SelectToggleElement () {
        base.SelectToggleElement ();
        
        text.color = new Color (0.25f, 0.25f, 0.25f, 1f);
    }

    public override void DeselectToggleElement () {
        base.DeselectToggleElement ();
        
        text.color = new Color (0.5f, 0.5f, 0.5f, 1f);
    }

    public override void OnPointerClick (PointerEventData eventData) {
        toggleController.OnToggleElementClicked (transform.GetSiblingIndex (), false);
    }
}