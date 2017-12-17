using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Collections.Generic;

using LDFW;

public class PanelListController : MonoBehaviour {

    public static PanelListController instance;

    public List<BasePanelController> panelList = new List<BasePanelController> ();

    public Action removePanelAction = null;

    private BasePanelController currentBasePanel;
    
    void Awake () {
        if (instance != null) {
            Destroy (instance.gameObject);
        }
        instance = this;
    }

    public void AddPanel (BasePanelController panel) {
        /*
        if (panelList.Count > 0 && panel == panelList[panelList.Count - 1]) {
            panelList[panelList.Count - 1].HidePanelImmediately ();
            panelList.RemoveAt (panelList.Count - 1);
        } else {
            if (currentBasePanel != null) {
                currentBasePanel.HidePanelImmediately ();
            }
        }
        */

        panel.DisplayPanel ();
        panelList.Add (panel);
        //HideSecondLastPanelDelay (2f);
    }

    public void RemovePanel () {
        LDFWGCController.instance.ClearGCList ();
        if (panelList.Count > 0) {
            panelList[panelList.Count - 1].HidePanelImmediately ();
            panelList.RemoveAt (panelList.Count - 1);
            
            if (panelList.Count > 0 && panelList[panelList.Count -1].transform.localScale == Vector3.zero) {
                panelList[panelList.Count - 1].transform.localScale = Vector3.one;
            } 

            if (removePanelAction != null) {
                removePanelAction ();
                removePanelAction = null;
            }
            /*
            else {
                if (currentBasePanel != null) {
                    currentBasePanel.DisplayPanel ();
                }
            }
            */
        }
    }
    
    public void HideSecondLastPanelDelay (float delay) {
        if (panelList.Count >= 2) {
            panelList[panelList.Count - 2].HidePanel (delay);
        }
    }

    public void HideAllPanels () {
        foreach (var panel in panelList) {
            panel.HidePanelImmediately ();
        }
        panelList = new List<BasePanelController> ();
    }

    public void HideAllPanelUntilHome () {
        HideAllPanels ();
        HomePanelController.instance.OpenPanel ();
    }

//    public void SetUserNotLoggedInMode2 () {
//        HideAllPanels ();
//    }

//    public void SetUserLoggedInMode2 () {
//        HideAllPanels ();
//    }

    public void SetHomePanelAsBasePanel () {
        currentBasePanel = HomePanelController.instance;
        HomePanelController.instance.DisplayPanel ();
        CartPanelController.instance.HidePanel ();
        OrderPanelController.instance.HidePanel ();
        UserPanelController.instance.HidePanel ();
        HideAllPanels ();
    }

    public void SetCartPanelAsBasePanel () {
        currentBasePanel = CartPanelController.instance;
        HomePanelController.instance.HidePanel ();
        CartPanelController.instance.DisplayPanel ();
        OrderPanelController.instance.HidePanel ();
        UserPanelController.instance.HidePanel ();
        HideAllPanels ();
    }

    public void SetOrderPanelAsBasePanel () {
        currentBasePanel = OrderPanelController.instance;
        HomePanelController.instance.HidePanel ();
        CartPanelController.instance.HidePanel ();
        OrderPanelController.instance.DisplayPanel ();
        UserPanelController.instance.HidePanel ();
        HideAllPanels ();
    }

    public void SetUserPanelAsBasePanel () {
        currentBasePanel = UserPanelController.instance;
        HomePanelController.instance.HidePanel ();
        CartPanelController.instance.HidePanel ();
        OrderPanelController.instance.HidePanel ();
        UserPanelController.instance.DisplayPanel ();
        HideAllPanels ();
    }
    
}
