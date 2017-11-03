using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.Network;

public class OrderCommentPanelController : BasePanelController {

    public static OrderCommentPanelController           instance;

    public Transform commodityCommentSection;
    public Transform driverCommentSection;
    public Button submitButton;
    public InputField commodityInputField;
    public InputField driverInputField;



    private string targetSubOrderID;
    private string targetRestaurantID;
    private OrderPanelOrderBarController targetOrderBar;
    private int commodityStarCount = 0;
    private int driverStarCount = 0;



    protected new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();

        headerTitle.ResetUI ("评价", "Comment");

    }



    #region Overrides
    public override void ResetPanel () {
        OnCommodityStarClicked (-1);
        OnDriverStarClicked (-1);
        commodityInputField.text = driverInputField.text = "";
    }

    public override void ReloadPanel () {
    }

    public void OpenPanel (OrderPanelOrderBarController orderBar, string subOrderID, string restaurantID) {
        base.OpenPanel ();
        targetOrderBar = orderBar;
        targetSubOrderID = subOrderID;
        targetRestaurantID = restaurantID;
    }

    #endregion






    #region Commodity
    public void OnCommodityStarClicked (int index) {
        commodityStarCount = index + 1;
        CheckSubmitButtonValidity ();
        for (int i=0; i<4; i++) {
            if (i <= index) {
                commodityCommentSection.Find ("Stars/Star" + i + "/Select").localScale = Vector3.one;
            } else {
                commodityCommentSection.Find ("Stars/Star" + i + "/Select").localScale = Vector3.zero;
            }
        }
    }


    #endregion


    #region Driver
    public void OnDriverStarClicked (int index) {
        driverStarCount = index + 1;
        CheckSubmitButtonValidity ();
        for (int i = 0; i < 4; i++) {
            if (i <= index) {
                driverCommentSection.Find ("Stars/Star" + i + "/Select").localScale = Vector3.one;
            } else {
                driverCommentSection.Find ("Stars/Star" + i + "/Select").localScale = Vector3.zero;
            }
        }
    }

    #endregion


    #region Submit
    public void CheckSubmitButtonValidity () {
        if (commodityStarCount > 0 && driverStarCount > 0) {
            submitButton.interactable = true;
        } else {
            submitButton.interactable = false;
        }
    }
    public void OnSubmitButtonClicked () {
        WWWForm form = new WWWForm ();
        form.AddField ("sub_order_id", targetSubOrderID);
        form.AddField ("driver_star_count", driverStarCount);
        form.AddField ("driver_comment", driverInputField.text);
        OrderNetworkController.instance.SubmitComment (form, null, null);



        form = new WWWForm ();
        form.AddField ("sub_order_id", targetSubOrderID);
        form.AddField ("restaurant_id", targetRestaurantID);
        form.AddField ("restaurant_star_count", commodityStarCount);
        form.AddField ("restaurant_comment", commodityInputField.text);
        RestaurantNetworkController.instance.PostRestaurantComment (form, null, null);


        

        MessagePanelController.instance.DisplayPanel ("Comment submitted");
        targetOrderBar.commentButton.gameObject.SetActive (false);
        PanelListController.instance.RemovePanel ();
    }

    #endregion

}
