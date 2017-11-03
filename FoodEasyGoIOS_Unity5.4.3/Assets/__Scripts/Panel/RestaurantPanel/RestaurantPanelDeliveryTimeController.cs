using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.UI;
using UnityEngine.EventSystems;

public class RestaurantPanelDeliveryTimeController : LDFWToggleElementController {

    public Image background;
    public Text text;
    private bool isInteractable = true;

    void Awake () {
        background = GetComponent<Image> ();
        text = transform.Find ("Text").GetComponent<Text> ();
    }
    
    public void DisableInteraction () {
        isInteractable = false;
        background.color = new Color (244f / 255f, 244f / 255f, 244f / 255f, 1f);
    }

    public void EnableInteraction () {
        isInteractable = true;
        background.color = new Color (88f / 255f, 88f / 255f, 88f / 255f, 0f);
    }

    public override void SelectToggleElement () {
        if (isInteractable) {
            base.SelectToggleElement ();
            background.color = new Color (1, 176f / 255f, 58f / 255f, 1f);
        }
    }

    public override void DeselectToggleElement () {
        if (isInteractable) {
            base.DeselectToggleElement ();
            background.color = new Color (0.75f, 0.75f, 0.75f, 0f);
        }
    }

    public override void OnPointerClick (PointerEventData eventData) {
        if (isInteractable) {
            toggleController.OnToggleElementClicked (transform.GetSiblingIndex (), isToggleOn);
        }
    }

}
