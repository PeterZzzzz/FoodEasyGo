using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections;
using System;

public class GroceryPanelCategoryBarElementController : MonoBehaviour, IPointerClickHandler {
    public void OnPointerClick (PointerEventData eventData) {
        GroceryPanelController.instance.SelectCategoryBar (transform.GetSiblingIndex ());
    }

    public void SelectElement () {

    }

    public void DeselectElement () {

    }
}
