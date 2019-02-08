using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections;

using LDFW.UI;

public class RestaurantDishDetailAttributeToggleElementController : LDFWToggleElementController {

    public GameObject selecteCover;
    public TextController text;
    public string _textZH;
    public string _textEN;
    public bool canSelectQuantity = false;
    public float price = 0f;
    public int quantity = 1;

    public override void SelectToggleElement () {
        if (canSelectQuantity) {
            base.SelectToggleElement ();
            selecteCover.SetActive (true);
            text.color = new Color(151f / 255f, 96f / 255, 54f / 255f, 1f);
            
            RestaurantDishDetailPanelSelectQuantityController.instance.OpenController (
                this, Config.currentLanguage == Language.chinese ? _textZH : _textEN, quantity);
            
        } else {
            base.SelectToggleElement ();
            selecteCover.SetActive (true);
            text.color = new Color(151f / 255f, 96f / 255, 54f / 255f, 1f);
        }

        toggleController.UpdateSelectedList();
    }

    public override void DeselectToggleElement () {
        if (canSelectQuantity && quantity > 0) {
            RestaurantDishDetailPanelSelectQuantityController.instance.OpenController (
                this, Config.currentLanguage == Language.chinese ? _textZH : _textEN, quantity);
        } else {
            base.DeselectToggleElement ();
            selecteCover.SetActive (false);
            text.color = new Color(51f / 255f, 51f / 255, 51f / 255f, 1f);
        }

        toggleController.UpdateSelectedList();
    }

    public void ResetUI (string textZH, string textEN) {
        _textZH = textZH;
        _textEN = textEN;

        UpdateUI ();
    }

    public void UpdateUI() {
        string quantityString = "";
        if (isToggleOn && quantity > 0) {
            quantityString = "X" + quantity + " ";
        }

        transform.Find ("Text").GetComponent<TextController> ().ResetUI (
            quantityString + _textZH + (price == 0f ? "" : " (+$" + price + ")"),
            quantityString + _textEN + (price == 0f ? "" : " (+$" + price + ")"));
    }

    /*
    public override void OnPointerClick(PointerEventData eventData)
    {
        toggleController.SelectToggle(transform.GetSiblingIndex());
    }*/
}
