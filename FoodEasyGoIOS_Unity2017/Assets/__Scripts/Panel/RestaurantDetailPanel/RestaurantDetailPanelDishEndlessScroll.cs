using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;

using LDFW.UI;
using LDFW.Network;

public class RestaurantDetailPanelDishEndlessScroll : InfiniteScrollRectController {
    
    public new JSONObject _data = null;
    private float lastContentYPosition = 0f;
    private bool isRestaurant;
    private string grouponID;

    public new void Reset () {
        base.Reset ();
        
        for (int i = 0; i < _scrollRectElementParentContent.childCount; i++) {
            _scrollRectElementParentContent.GetChild (i).GetComponent<RestaurantDetailPanelDishBarController> ().Reset (null, "");
        }
        
    }
    

    public void LoadData (JSONObject data) {
        isRestaurant = true;
        _data = data;
        _dataLength = data.Count;
        _scrollRectElementParentContent.anchoredPosition = Vector2.zero;

        base.LoadData ();
    }

    public void LoadGrouponData (string grouponID, JSONObject data) {
        DebugLogger.Log ("grouponid = " + grouponID + ", data = " + data.ToString ());
        isRestaurant = false;
        _data = data;
        _dataLength = _data.Count;
        _scrollRectElementParentContent.anchoredPosition = Vector2.zero;
        this.grouponID = grouponID;

        base.LoadData ();
    }

    public override void LoadDataIntoScrollRectElement (int dataIndex, int scrollRectElementIndex) {
        if (dataIndex < _dataLength && scrollRectElementIndex < _contentElementCount) {
            if (isRestaurant) {
                _scrollRectElementParentContent.GetChild (scrollRectElementIndex).GetComponent<RestaurantDetailPanelDishBarController> ().Reset (_data[dataIndex], "");
            } else {
                _scrollRectElementParentContent.GetChild (scrollRectElementIndex).GetComponent<RestaurantDetailPanelDishBarController> ().Reset (_data[dataIndex].GetField ("goods_details"), "", false, grouponID, _data[dataIndex].GetField ("id").str);
            }
        }
    }

    public override void CleanUp () {
        for (int i = 0; i < _scrollRectElementParentContent.childCount; i++) {
            _scrollRectElementParentContent.GetChild (i).GetComponent<RestaurantDetailPanelDishBarController> ().Reset (null, "");
        }
    }

    public override void OnScrollRectContentValueChanged (Vector2 scrollVector) {
        if (lastContentYPosition <= 0 && _scrollRectContent.localPosition.y > 0) {
            RestaurantDetailPanelTransparentBarController.instance.ResizeDown ();
        } else if (lastContentYPosition > 0 && _scrollRectContent.localPosition.y <= 0) {
            RestaurantDetailPanelTransparentBarController.instance.ResizeUp ();
        }

        lastContentYPosition = _scrollRectContent.localPosition.y;

        base.OnScrollRectContentValueChanged (scrollVector);
    }
    

}
