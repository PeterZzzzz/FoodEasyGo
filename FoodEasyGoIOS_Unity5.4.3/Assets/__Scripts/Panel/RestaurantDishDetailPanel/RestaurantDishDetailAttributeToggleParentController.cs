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
            totalAmount += toggleElementParent.GetChild(i).GetComponent<RestaurantDishDetailAttributeToggleElementController>().quantity;

        }

        if (totalAmount >= leastAmount && totalAmount <= mostAmount)
            return true;
        else
            return false;
    }

}
