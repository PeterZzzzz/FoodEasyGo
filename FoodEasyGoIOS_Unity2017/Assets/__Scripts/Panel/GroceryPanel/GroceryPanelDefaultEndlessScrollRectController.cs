using UnityEngine;
using System;
using System.Collections;

using LDFW.UI;
using LDFW.Network;

public class GroceryPanelDefaultEndlessScrollRectController : InfiniteScrollRectController {

    public new JSONObject _data = null;
    
    // data
    private string _typeID = "";
    
    public void Reset (string groceryType) {
        _data = null;
        _typeID = groceryType;
        _scrollRect.StopMovement ();
        _scrollRectElementParentContent.anchoredPosition = Vector2.zero;
        _scrollRect.normalizedPosition = new Vector2(1, 1);
        base.Reset ();
    }

    public override void LoadData () {
        Reset ();

        LDFWWWWForm form = new LDFWWWWForm ();
        form.AddField ("type_id", _typeID);

        LoadingPanelController.instance.DisplayPanel ();
        GroceryNetworkController.instance.GetGroceryList (
            form.wwwForm,
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();

				_data = data;
				_dataLength = Mathf.CeilToInt((float)_data.Count / 2f);

				Reset();

                //for (int i = 0; _data[i] != null; i++)
                    //DebugLogger.Log(i.ToString() + " = " + _data[i].GetField("name").str);
            
                for (int i = 0; i/2 < _contentElementCount; i+=2) {
                    if (i/2 >= _dataLength) {
                        _scrollRectElementParentContent.GetChild (i/2).gameObject.SetActive (false);
                    } else {
                        _scrollRectElementParentContent.GetChild (i/2).gameObject.SetActive (true);
                        _contentStartDataIndex = 0;
                        _contentEndDataIndex = i/2;
                        _lastActiveIndex = i/2;
                        LoadDataIntoScrollRectElement (i, i/2);
                    }
                }
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
            }));
    }

    public override void LoadDataIntoScrollRectElement (int dataIndex, int scrollRectElementIndex) {
        if (dataIndex / 2 < _dataLength && scrollRectElementIndex < _contentElementCount) {
            //DebugLogger.Log(_data[dataIndex].GetField("name").str);
            _scrollRectElementParentContent.GetChild (scrollRectElementIndex).GetComponent<GroceryPanelGroceryBarElementController> ().Reset (_data[dataIndex], _data[dataIndex+1]);
        }
    }

    public override void CleanUp () {
        for (int i = 0; i < _scrollRectElementParentContent.childCount; i++) {
            _scrollRectElementParentContent.GetChild (i).GetComponent<GroceryPanelGroceryBarElementController> ().Reset (null, null);
        }
    }

    public override void ContentTopAction () {
        if (_lastActiveIndex >= _contentElementCount - 1) {
            if (_contentStartDataIndex > 0) {

                _scrollRectElementParentContent.GetChild (_contentElementCount - 1).SetAsFirstSibling ();
                _scrollRectElementParentContent.anchoredPosition += new Vector2 (0f, _scrollRectElementPreferredHeight);
                _contentTopActionPosition -= _scrollRectElementPreferredHeight;
                _contentBottomActionPosition -= _scrollRectElementPreferredHeight;

                _contentStartDataIndex--;
                _contentEndDataIndex--;
                LoadDataIntoScrollRectElement (_contentStartDataIndex * 2, 0);
            }
        }
    }

    public override void ContentBottomAction () {
        if (_lastActiveIndex >= _contentElementCount - 1) {
            if (_contentEndDataIndex < _dataLength - 1) {

                _scrollRectElementParentContent.GetChild (0).SetAsLastSibling ();
                _scrollRectElementParentContent.anchoredPosition -= new Vector2 (0f, _scrollRectElementPreferredHeight);
                _contentTopActionPosition += _scrollRectElementPreferredHeight;
                _contentBottomActionPosition += _scrollRectElementPreferredHeight;


                _contentStartDataIndex++;
                _contentEndDataIndex++;
                //DebugLogger.Log("Loading " + (_contentEndDataIndex * 2).ToString() + " at " + (_contentElementCount - 1).ToString() + " position ");
                LoadDataIntoScrollRectElement (_contentEndDataIndex * 2, _contentElementCount - 1);

            }
        }
    }

}
