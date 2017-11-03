using UnityEngine;
using System.Collections;

using LDFW.UI;

public class RestaurantDishDetailPanelSelectQuantityController : MonoBehaviour {

    public static RestaurantDishDetailPanelSelectQuantityController instance;
    public RestaurantDishDetailAttributeToggleElementController attributeToggleElementController;
    public TextController dishText;
    public TextController attrText;
    public TextController quantityText;
    public int selectedQuantity;

    private TextController attributeText;

    void Awake() {
        if (instance != null)
            Destroy (gameObject);
        else
            instance = this;

        CloseController ();
    }

    public void OpenController(RestaurantDishDetailAttributeToggleElementController toggleElement, string attributeName, int quantity) {
        attributeToggleElementController = toggleElement;
        dishText.ResetUI (RestaurantDishDetailPanelController.instance.nameText.text);
        attrText.ResetUI (attributeName);
        selectedQuantity = quantity;
        quantityText.ResetUI (selectedQuantity.ToString ());

        transform.localScale = Vector3.one;
    }

    public void OnConfirmButtonClicked() {
        CloseController ();

        int oldQuantity = attributeToggleElementController.quantity;
        RestaurantDishDetailAttributeToggleParentController toggleParentController = 
            attributeToggleElementController.toggleController as RestaurantDishDetailAttributeToggleParentController;

        attributeToggleElementController.quantity = selectedQuantity;
        attributeToggleElementController.UpdateUI();

        //if (toggleParentController.CheckForAmountValidity())
        //{
        //    attributeToggleElementController.quantity = selectedQuantity;
        //    attributeToggleElementController.UpdateUI();
        //}
        //else
        //{
        //    selectedQuantity = attributeToggleElementController.quantity;
        //    MessagePanelController.instance.DisplayPanel("Cannot select less than " + toggleParentController.leastAmount + " and more than " + toggleParentController.mostAmount + " quantities");
        //}

        if (selectedQuantity <= 0) {
            attributeToggleElementController.DeselectToggleElement ();
        }
        toggleParentController.UpdateSelectedList();
    }

    public void OnCancelButtonClicked() {
        CloseController ();
        if (selectedQuantity <= 0) {
            attributeToggleElementController.DeselectToggleElement ();
        }
        (attributeToggleElementController.toggleController as RestaurantDishDetailAttributeToggleParentController).UpdateSelectedList();
    }

    private void CloseController() {
        transform.localScale = Vector3.zero;
    }

    public void OnPlusButtonClicked() {
        selectedQuantity++;
        quantityText.ResetUI (selectedQuantity.ToString ());
    }

    public void OnMinusButtonClicked() {
        if (selectedQuantity > 0)
            selectedQuantity--;

        quantityText.ResetUI (selectedQuantity.ToString ());
    }
    
}
