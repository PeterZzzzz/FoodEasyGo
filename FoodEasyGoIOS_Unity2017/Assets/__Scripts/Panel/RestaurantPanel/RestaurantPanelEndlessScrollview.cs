using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;

using LDFW.UI;
using LDFW.Network;

public class RestaurantPanelEndlessScrollview : InfiniteScrollRectController
{

    public new JSONObject _data = null;

    // data
    private bool _supportInstantSend = true;
    private bool _isSchedule;
    private string _scheduleID;
    private string _restaurantTypeID = "";
    private string _sortTypeID = "";


    public void Reset(bool instantSend, bool isSchedule, string scheduleID, string typeid, string sorttypeid)
    {
        Reset();

        _supportInstantSend = instantSend;
        _isSchedule = isSchedule;
        _scheduleID = scheduleID;

        _restaurantTypeID = typeid;
        _sortTypeID = sorttypeid;

        _scrollRectElementPreferredHeight = (int)(MainCanvasController.instance.canvasSize.x * 0.5f + 100);
    }

    public override void LoadData()
    {

        Debug.Log("Is schedule = " + _isSchedule);
        LDFWWWWForm form = new LDFWWWWForm();
        form.AddField("instant_send", _supportInstantSend ? "1" : "0");
        form.AddField("is_schedule", _isSchedule ? "1" : "0");
        form.AddField("schedule_id", _scheduleID);
        form.AddField("restaurant_type_id", _restaurantTypeID);
        form.AddField("sort_type_id", _sortTypeID);

        LoadingPanelController.instance.DisplayPanel();

        if (_isSchedule)
        {
            RestaurantNetworkController.instance.GetRestaurantReserveList(
                form.wwwForm,
                new LDFWServerResponseEvent((JSONObject data, string m) =>
                    {
                        LoadingPanelController.instance.HidePanelImmediately();

                        data = data.GetField("data");
                        _data = data;
                        _dataLength = _data.Count;
                        base.LoadData();

                        for (int i = 0; i < _scrollRectElementParentContent.childCount; i++)
                        {
                            _scrollRectElementParentContent.GetChild(i).GetComponent<Image>().raycastTarget = RestaurantDetailPanelController.instance.isRestaurantOpen ? RestaurantDetailPanelController.instance.isRestaurantOpen : true;
                        }
                    }),
                new LDFWServerResponseEvent((JSONObject data, string m) =>
                    {
                        LoadingPanelController.instance.HidePanelImmediately();
                    }));
        }
        else
        {
            
            RestaurantNetworkController.instance.GetRestaurantList(
                form.wwwForm,
                new LDFWServerResponseEvent((JSONObject data, string m) =>
                    {
                        LoadingPanelController.instance.HidePanelImmediately();

                        data = data.GetField("data");
                        _data = data;
                        _dataLength = _data.Count;
                        base.LoadData();

                        for (int i = 0; i < _scrollRectElementParentContent.childCount; i++)
                        {
                            _scrollRectElementParentContent.GetChild(i).GetComponent<Image>().raycastTarget = RestaurantDetailPanelController.instance.isRestaurantOpen ? RestaurantDetailPanelController.instance.isRestaurantOpen : true;
                        }
                    }),
                new LDFWServerResponseEvent((JSONObject data, string m) =>
                    {
                        LoadingPanelController.instance.HidePanelImmediately();
                    }));
        }
    }


    public override void LoadDataIntoScrollRectElement(int dataIndex, int scrollRectElementIndex)
    {
        if (dataIndex < _dataLength && scrollRectElementIndex < _contentElementCount)
        {
            _scrollRectElementParentContent.GetChild(scrollRectElementIndex).GetComponent<RestaurantPanelRestaurantBarController>().ReloadUI(_data[dataIndex]);
        }
    }

    public override void CleanUp()
    {
        for (int i = 0; i < _scrollRectElementParentContent.childCount; i++)
        {
            _scrollRectElementParentContent.GetChild(i).GetComponent<RestaurantPanelRestaurantBarController>().Reset();
        }
    }

}
