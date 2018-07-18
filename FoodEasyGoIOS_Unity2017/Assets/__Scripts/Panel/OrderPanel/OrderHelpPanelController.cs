using System.Collections;
using System.Collections.Generic;
using LDFW;
using UnityEngine;
using UnityEngine.UI;

public class OrderHelpPanelController : BasePanelController {

    public static OrderHelpPanelController instance;
    public Button missingItemBtn;
    public Button incorrectItemBtn;
    public Button changeAddressBtn;
    public Button cancelOrderBtn;
    public Button poorQualityBtn;
    public Button refundBtn;
    public Button otherBtn;
    public Button contactUsBtn;

    private string subOrderID;

    new void Awake()
    {
        if (instance != null)
        {
            instance.gameObject.DestroyGO();
        }
        instance = this;

        base.Awake();

        headerTitle.ResetUI("帮助", "Help");

    }

    public void OpenPanel(string orderID)
    {
        base.OpenPanel();
        subOrderID = orderID;
    }
 
    public override void ResetPanel()
    {
    
    }

    public override void ReloadPanel()
    {
        
    }

    public void MissingItemBtnClick(){
        OrderHelpInputPanelController.instance.OpenPanel(1, subOrderID);
    }

    public void IncorrectItemBtnClick()
    {
        OrderHelpInputPanelController.instance.OpenPanel(2, subOrderID);
    }

    public void ChangeAddressBtnClick()
    {
        OrderHelpInputPanelController.instance.OpenPanel(3, subOrderID);
    }

    public void CancelOrderBtnClick()
    {
        OrderHelpInputPanelController.instance.OpenPanel(4, subOrderID);
    }

    public void PoorQualityBtnClick()
    {
        OrderHelpInputPanelController.instance.OpenPanel(5, subOrderID);
    }

    public void RefundBtnClick()
    {
        OrderHelpInputPanelController.instance.OpenPanel(6, subOrderID);
    }

    public void OtherBtnClick()
    {
        OrderHelpInputPanelController.instance.OpenPanel(7, subOrderID);
    }

    public void ContactUsBtnClick()
    {
        Application.OpenURL("tel://6666666666");
    }


}
