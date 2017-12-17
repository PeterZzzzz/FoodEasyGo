using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.EventSystems;
using System;

public class RestaurantPanelCategoryToggle : MonoBehaviour, IPointerClickHandler {
    
    public RestaurantPanelCategoryToggleController toggleController;
    public Color selectColor;
    public Color deselectColor;
    public Color transparentColor;
    public Text title;
    public Image underline;

    public int categoryID = 0;

    protected void Awake () {
    }

    IEnumerator Start () {
        yield return null;
        toggleController = transform.parent.GetComponent<RestaurantPanelCategoryToggleController> ();
    }

    public void ResetUI (int id, string zh, string en) {
        categoryID = id;
        transform.Find ("Title").GetComponent<TextController> ().ResetUI (zh, en);
    }


    public void SelectToggle () {
        title.color = selectColor;
        underline.color = selectColor;
    }

    public void DeselectToggle () {
        title.color = deselectColor;
        underline.color = transparentColor;
    }

    public void OnPointerClick (PointerEventData eventData) {
        toggleController.Select (transform.GetSiblingIndex ());
        RestaurantPanelController.instance.LoadRestaurantList ();
    }

    
}
