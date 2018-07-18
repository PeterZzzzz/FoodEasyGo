using UnityEngine;
using System;
using System.Collections;


using LDFW.UI;
using LDFW.Network;

public class NotificationPanelEndlessScrollController : LDFWRecursiveScrollview {


    JSONObject _data = null;
    private int _pageNumber = 0;
    private int _firstContentIndex;
    private int _lastContentIndex;
    private int _lastActiveIndex;




    public new void Reset () {
        base.Reset ();

        _data = null;
        _pageNumber = 0;
        _firstContentIndex = 0;
        _lastContentIndex = 0;
        targetElementParent = targetContent;


        scrollBottomRepositionAnchoredPosition = 1200f;
        scrollTopRepositionAnchoredPosition = 300f;

        for (int i = 0; i < targetElementParent.childCount; i++) {
            targetElementParent.GetChild (i).GetComponent<NotificationPanelNotificationBarController> ().Reset (null);
        }
    }

    public void LoadData () {
        Reset ();

        LoadingPanelController.instance.DisplayPanel ();
        NotificationNetworkController.instance.GetNotificationList (

            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                _data = data;

                if (_data == null || _data.str == "null" || _data.str == "" || _data.Count == 0) {
                    _pageNumber = 0;
                    for (int i = 0; i < elementParntChildCount; i++) {
                        targetElementParent.GetChild (i).gameObject.SetActive (false);
                    }
                } else {

                    for (int i = 0; i < targetElementParent.childCount; i++) {
                        if (_data[i] == null) {
                            targetElementParent.GetChild (i).gameObject.SetActive (false);
                        } else {
                            targetElementParent.GetChild (i).gameObject.SetActive (true);
                            _lastContentIndex = i;
                            _lastActiveIndex = i;
                            targetElementParent.GetChild (i).GetComponent<NotificationPanelNotificationBarController> ().Reset (_data[i]);
                        }
                    }

                }
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
            }));

        


    }



    public override void OnRepositionMoveToTop () {
        //DebugLogger.Log ("OnRepositionMoveToTop");
        base.OnRepositionMoveToTop ();
        if (_firstContentIndex > 0) {
            reAdjustCountDown = reAdjustCooldown;

            (targetScrollRect as NotificationPanelScrollRectController).BreakDrag ();
            targetElementParent.GetChild (targetElementParent.childCount - 1).SetAsFirstSibling ();
            targetContent.anchoredPosition = new Vector2 (targetContent.anchoredPosition.x, targetContent.anchoredPosition.y + (targetElementParent.GetChild (0) as RectTransform).rect.size.y);
            (targetScrollRect as NotificationPanelScrollRectController).ReDrag ();


            _firstContentIndex--;
            _lastContentIndex--;
            targetElementParent.GetChild (0).GetComponent<NotificationPanelNotificationBarController> ().Reset (_data[_firstContentIndex]);
        }
    }

    public override void OnRepositionMoveToBottom () {
        //DebugLogger.Log ("OnRepositionMoveToBottom");
        base.OnRepositionMoveToBottom ();
        if (_data != null && _data[_lastContentIndex + 1] != null) {
            reAdjustCountDown = reAdjustCooldown;

            _firstContentIndex++;
            _lastContentIndex++;
            targetElementParent.GetChild (0).GetComponent<NotificationPanelNotificationBarController> ().Reset (_data[_lastContentIndex]);


            (targetScrollRect as NotificationPanelScrollRectController).BreakDrag ();
            targetElementParent.GetChild (0).SetAsLastSibling ();
            targetContent.anchoredPosition = new Vector2 (targetContent.anchoredPosition.x, targetContent.anchoredPosition.y - (targetElementParent.GetChild (targetContent.childCount - 1) as RectTransform).rect.size.y);
            (targetScrollRect as NotificationPanelScrollRectController).ReDrag ();
        }
    }


}
