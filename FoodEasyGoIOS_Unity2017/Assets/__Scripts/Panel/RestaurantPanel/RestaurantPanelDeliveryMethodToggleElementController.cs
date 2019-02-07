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
        
        text.color = Extensions.MainColor();
    }

    public override void DeselectToggleElement () {
        base.DeselectToggleElement ();
        
        text.color = new Color (51f / 255f, 51f / 255f, 51f / 255f, 1f);
    }

    public override void OnPointerClick (PointerEventData eventData) {
        toggleController.OnToggleElementClicked (transform.GetSiblingIndex (), false);
    }
}