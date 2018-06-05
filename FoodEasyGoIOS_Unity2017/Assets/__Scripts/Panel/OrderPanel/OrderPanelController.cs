using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.UI;
using LDFW.Network;

public class OrderPanelController : BasePanelController {

    public static OrderPanelController          instance;

    // Empty Order Panel
    public Transform                            emptyOrderPanel;
    

    // Order List
    public Transform                            orderListContent;
    public ScrollRect defaultScrollRect;


    protected new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();

        headerTitle.ResetUI ("订单列表", "Order List");

        if (Screen.width == 1125)
        {
            // iPhoneX
            defaultScrollRect.GetComponent<RectTransform>().offsetMin = new Vector2(defaultScrollRect.GetComponent<RectTransform>().offsetMin.x, defaultScrollRect.GetComponent<RectTransform>().offsetMin.y + 20);

            Debug.Log("iPhoneX适配6");
        }
    }

    protected new void Start () {
        base.Start ();

        SwitchEmptyOrderPanel (0);
    }


    #region Overrides
    public override void ResetPanel () {
        orderListContent.DestroyAllChildren ();
    }

    public override void ReloadPanel () {
        LoadingPanelController.instance.DisplayPanel ();
        OrderNetworkController.instance.GetOrderList (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanel ();
                StartCoroutine (LoadData (data));
            }), 
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanel ();

            }));
    }


    #endregion


    #region LoadData
    private IEnumerator LoadData (JSONObject data) {
        if (data != null && data.Count > 0) {
            for (int i=0; data[i] != null; i++) {
                JSONObject orderData = data[i];
                JSONObject subOrderData = orderData.GetField ("sub_order_list");

                if (subOrderData != null && subOrderData.Count > 0) {
                    for (int j=0; subOrderData[j] != null && orderListContent.childCount < 20; j++) {
                        OrderPanelOrderBarController orderBarController = Instantiate (Resources.Load ("OrderPanel/OrderBar") as GameObject).GetComponent<OrderPanelOrderBarController>();
                        orderBarController.transform.SetParent (orderListContent);
                        orderBarController.transform.localScale = Vector3.one;
                        orderBarController.Reset (
                            orderData.GetField ("id").str,
                            orderData.GetField ("status").str,
                            orderData.GetField ("create_time").str,
                            orderData,
                            subOrderData[j]);
                        yield return null;
                        orderBarController.SetLayoutHeight ();
                    }
                }
            }
        }
    }

    #endregion




    #region Other
    public void SwitchEmptyOrderPanel (int scale) {
        emptyOrderPanel.localScale = Vector3.one * scale;
    }

    public void RefershPage()
    {
        FooterPanelController.instance.OnOrdersButtonClicked();
    }

    #endregion
}
