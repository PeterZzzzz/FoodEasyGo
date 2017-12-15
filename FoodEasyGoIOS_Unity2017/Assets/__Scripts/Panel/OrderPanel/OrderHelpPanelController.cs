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

    public void MissingItemBtnClick(){
        OrderHelpInputPanelController.instance.OpenPanel(1);
    }

    public void IncorrectItemBtnClick()
    {
        OrderHelpInputPanelController.instance.OpenPanel(2);
    }

    public void ChangeAddressBtnClick()
    {
        OrderHelpInputPanelController.instance.OpenPanel(3);
    }

    public void CancelOrderBtnClick()
    {
        OrderHelpInputPanelController.instance.OpenPanel(4);
    }

    public void PoorQualityBtnClick()
    {
        OrderHelpInputPanelController.instance.OpenPanel(5);
    }

    public void RefundBtnClick()
    {
        OrderHelpInputPanelController.instance.OpenPanel(6);
    }

    public void OtherBtnClick()
    {
        OrderHelpInputPanelController.instance.OpenPanel(7);
    }

    public void ContactUsBtnClick()
    {
        //OrderHelpInputPanelController.instance.OpenPanel(8);
    }


}
