using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW.UI;

public class RestaurantDishDetailAttributeToggleParentController : LDFWToggleController {
    public bool canSelectQuantity = false;

    public int leastAmount;
    public int mostAmount;


    public bool CheckForAmountValidity() {

        int totalAmount = 0;
        for (int i = 0; i < toggleElementParent.childCount; i++)
        {
            if (toggleElementParent.GetChild(i).GetComponent<RestaurantDishDetailAttributeToggleElementController>().isToggleOn)
                totalAmount += toggleElementParent.GetChild(i).GetComponent<RestaurantDishDetailAttributeToggleElementController>().quantity;

        }

        DebugLogger.Log("amount: " + totalAmount + ", " + leastAmount + ", " + mostAmount);
        if (leastAmount >= 0 && totalAmount < leastAmount)
            return false;
        if (mostAmount >= 0 && totalAmount > mostAmount)
            return false;

        return true;

    }

    public void DisplayInvalidMessageError() {
        MessagePanelController.instance.DisplayPanel("Quantity limit exceeded: " 
            + transform.Find("Title").GetComponent<TextController>().text
            + "[" + leastAmount + ", " + mostAmount + "]");
    }

}
