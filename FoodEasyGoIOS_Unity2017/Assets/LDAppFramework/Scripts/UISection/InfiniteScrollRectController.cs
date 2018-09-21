using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;


namespace LDFW.UI {

    [RequireComponent (typeof (ScrollRect))]
    public class InfiniteScrollRectController : MonoBehaviour {

        public List<int> _data;

        public ScrollRect _scrollRect;
        public RectTransform _scrollRectContent;
        public RectTransform _scrollRectElementParentContent;
        public int _scrollRectElementPreferredHeight = 100;

        protected int _contentStartDataIndex;
        protected int _contentEndDataIndex;
        protected int _lastActiveIndex;
        protected int _dataLength;
        protected int _contentElementCount;

        protected float _contentTopActionPosition;
        protected float _contentBottomActionPosition;
        protected float _otherElementTotalHeight;

        protected void Awake () {
            _scrollRect.onValueChanged.AddListener (OnScrollRectContentValueChanged);
        }
        

        public virtual void Reset () {
            if (_scrollRect == null || _scrollRectContent == null || _scrollRectElementParentContent == null) {
                Debug.LogError ("Missing scroll rect info!");
                return;
            }

            // Set scroll rect content position
            _scrollRectContent.anchorMin = new Vector2 (0, 1);
            _scrollRectContent.anchorMax = new Vector2 (1, 1);
            _scrollRectContent.pivot = new Vector2 (0.5f, 1f);

            // Set scroll rect content size
            _otherElementTotalHeight = 0;
            for (int i=0; i<_scrollRectContent.childCount; i++) {
                if (_scrollRectContent.GetChild (i) != _scrollRectElementParentContent) {
                    _otherElementTotalHeight += (_scrollRectContent.GetChild (i).transform as RectTransform).rect.height;
                }
            }
            _scrollRectContent.sizeDelta = new Vector2 (_scrollRectContent.sizeDelta.x, _dataLength * _scrollRectElementPreferredHeight + _otherElementTotalHeight);

            // Set scroll rect element parent position
            _scrollRectElementParentContent.anchorMin = new Vector2 (0, 1);
            _scrollRectElementParentContent.anchorMax = new Vector2 (1, 1);
            _scrollRectElementParentContent.pivot = new Vector2 (0.5f, 1f);

            // Set scroll element layout preferred height
            for (int i = 0; i < _scrollRectElementParentContent.childCount; i++) {
                if (_scrollRectElementParentContent.GetChild (i).GetComponent<LayoutElement> () == null) {
                    _scrollRectElementParentContent.GetChild (i).gameObject.AddComponent<LayoutElement> ();
                }
                _scrollRectElementParentContent.GetChild (i).GetComponent<LayoutElement> ().preferredHeight = _scrollRectElementPreferredHeight;
            }

            // Set top action and bottom action trigger condition
            _contentTopActionPosition = _scrollRectElementPreferredHeight * 0.5f + _otherElementTotalHeight;
            _contentBottomActionPosition = _scrollRectElementPreferredHeight * (_scrollRectElementParentContent.childCount - 0.5f) - _scrollRect.viewport.rect.height + _otherElementTotalHeight;

            // Set starting and ending indices
            _contentStartDataIndex = 0;
            _contentEndDataIndex = 0;
            _lastActiveIndex = 0;
            
            _contentElementCount = _scrollRectElementParentContent.childCount;
        }

        public virtual void LoadData () {
            Reset ();
            
            for (int i = 0; i < _contentElementCount; i++) {
                if (i >= _dataLength) {
                    _scrollRectElementParentContent.GetChild (i).gameObject.SetActive (false);
                } else {
                    _scrollRectElementParentContent.GetChild (i).gameObject.SetActive (true);
                    _contentStartDataIndex = 0;
                    _contentEndDataIndex = i;
                    _lastActiveIndex = i;
                    LoadDataIntoScrollRectElement (i, i);
                }
            }
        }

        public virtual void LoadDataIntoScrollRectElement (int dataIndex, int scrollRectElementIndex) {
            if (dataIndex < _dataLength && scrollRectElementIndex < _contentElementCount) {
                _scrollRectElementParentContent.GetChild (scrollRectElementIndex).GetComponent<Text> ().text = "Index = " + dataIndex;
            }
        }

        public virtual void OnScrollRectContentValueChanged (Vector2 scrollVector) {
            //Debug.Log("_contentStartDataIndex: " + _contentStartDataIndex + " _contentEndDataIndex: " + _contentEndDataIndex);
            //Debug.Log("High: " + _scrollRectContent.anchoredPosition.y + " _contentTopActionPosition: " + _contentTopActionPosition + " _contentBottomActionPosition: " + _contentBottomActionPosition);

            if (_lastActiveIndex >= _contentElementCount - 1) {
                if (_scrollRectContent.anchoredPosition.y < _contentTopActionPosition) {
                    ContentTopAction ();
                } else if (_scrollRectContent.anchoredPosition.y > _contentBottomActionPosition) {
                    ContentBottomAction ();
                }
            }
        }

        public virtual void ContentTopAction () {
            if (_lastActiveIndex >= _contentElementCount - 1) {
                if (_contentStartDataIndex > 0) {

                    _scrollRectElementParentContent.GetChild (_contentElementCount - 1).SetAsFirstSibling ();
                    _scrollRectElementParentContent.anchoredPosition += new Vector2 (0f, _scrollRectElementPreferredHeight);
                    _contentTopActionPosition -= _scrollRectElementPreferredHeight;
                    _contentBottomActionPosition -= _scrollRectElementPreferredHeight;

                    _contentStartDataIndex--;
                    _contentEndDataIndex--;
                    LoadDataIntoScrollRectElement (_contentStartDataIndex, 0);
                }
            }
        }

        public virtual void ContentBottomAction () {
            if (_lastActiveIndex >= _contentElementCount - 1) {
                if (_contentEndDataIndex < _dataLength - 1) {

                    _scrollRectElementParentContent.GetChild (0).SetAsLastSibling ();
                    _scrollRectElementParentContent.anchoredPosition -= new Vector2 (0f, _scrollRectElementPreferredHeight);
                    _contentTopActionPosition += _scrollRectElementPreferredHeight;
                    _contentBottomActionPosition += _scrollRectElementPreferredHeight;


                    _contentStartDataIndex++;
                    _contentEndDataIndex++;
                    LoadDataIntoScrollRectElement (_contentEndDataIndex, _contentElementCount - 1);

                }
            }
        }

        public virtual void ContentTopReached () {
            // do nothing
        }

        public virtual void ContentBottomReached () {
            // do nothing
        }

        public virtual void CleanUp () {
            // do nothing
        }
    }
}
