using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW.UI;
using LDFW.Network;

public class RestaurantDetailPanelCommentEndlessScroll : InfiniteScrollRectController
{

    public new JSONObject _data = null;

    public static RestaurantDetailPanelCommentEndlessScroll instance;

    public Transform noCommentBar;



    public void Reset (bool instantSend, string typeid, string sorttypeid)
    {
        Reset ();
        
        _scrollRectElementPreferredHeight = (int) (MainCanvasController.instance.canvasSize.x * 0.5f + 100);
    }


    public override void LoadData ()
    {

        LDFWWWWForm form = new LDFWWWWForm ();
        form.AddField ("restaurant_id", RestaurantDetailPanelController.instance.restaurantID);

        LoadingPanelController.instance.DisplayPanel ();
        RestaurantNetworkController.instance.GetRestaurantList (
            form.wwwForm,
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();

                data = data.GetField ("data");
                _data = data;
                _dataLength = _data.Count;
                base.LoadData ();

                for (int i = 0; i < _scrollRectElementParentContent.childCount && _data[i] != null; i++)
                {
                    _scrollRectElementParentContent.GetChild (i).GetComponent<Image> ().raycastTarget = RestaurantDetailPanelController.instance.isRestaurantOpen ? RestaurantDetailPanelController.instance.isRestaurantOpen : true;
                }
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
            }));
    }


    public override void LoadDataIntoScrollRectElement (int dataIndex, int scrollRectElementIndex)
    {
        if (dataIndex < _dataLength && scrollRectElementIndex < _contentElementCount)
        {
            _scrollRectElementParentContent.GetChild (scrollRectElementIndex).GetComponent<RestaurantPanelRestaurantBarController> ().ReloadUI (_data[dataIndex]);
        }
    }

    public override void CleanUp ()
    {
        for (int i = 0; i < _scrollRectElementParentContent.childCount; i++)
        {
            _scrollRectElementParentContent.GetChild (i).GetComponent<RestaurantPanelRestaurantBarController> ().Reset ();
        }
    }


}
