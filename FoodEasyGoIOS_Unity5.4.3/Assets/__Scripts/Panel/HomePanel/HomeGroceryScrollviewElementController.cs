using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using System;

public class HomeGroceryScrollviewElementController : MonoBehaviour, IPointerClickHandler {

    public string groceryID;

    void Start () {
        GetComponent<LayoutElement> ().preferredWidth = MainCanvasController.instance.canvasSize.x * 0.25f;
    }

    public void OnPointerClick (PointerEventData eventData) {
        GroceryPanelController.instance.OpenPanel ();
    }
}
