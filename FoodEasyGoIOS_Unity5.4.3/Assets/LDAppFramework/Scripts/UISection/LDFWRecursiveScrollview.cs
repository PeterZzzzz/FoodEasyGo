using UnityEngine;
using UnityEngine.UI;

namespace LDFW.UI {

    public class LDFWRecursiveScrollview : MonoBehaviour {

        public ScrollDirection scrollDirection;
        public float reAdjustCooldown = 0f;

        // Scroll view and transform variables
        public ScrollRect targetScrollRect;
        public RectTransform targetContent;
        public RectTransform targetElementParent;

        // Some constant variables
        protected Vector2 viewportSize;
        protected int elementParntChildCount;
        protected float topSectionTargetAnchoredPosition = 0;
        protected float scrollBottomRepositionAnchoredPosition = 1000f;
        protected float scrollTopRepositionAnchoredPosition = 1000f;


        // temp variables
        protected float reAdjustCountDown;

        public enum ScrollDirection {
            Horizontal,
            Vertical
        }

        protected void Awake () {
            reAdjustCountDown = reAdjustCooldown;

            targetScrollRect = GetComponent<ScrollRect> ();
            if (targetScrollRect.vertical) {
                scrollDirection = ScrollDirection.Vertical;
            } else {
                scrollDirection = ScrollDirection.Horizontal;
            }
            targetContent = targetScrollRect.content;
            targetElementParent = targetContent;

            elementParntChildCount = targetElementParent.childCount;
        }

        protected void Start () {
            Reset ();
        }

        void Update () {
            if (reAdjustCountDown >= 0) {
                reAdjustCountDown -= Time.deltaTime;
            }
        }

        protected void Reset () {
            reAdjustCountDown = reAdjustCooldown;

            targetScrollRect = GetComponent<ScrollRect> ();
            if (targetScrollRect.vertical) {
                scrollDirection = ScrollDirection.Vertical;
            } else {
                scrollDirection = ScrollDirection.Horizontal;
            }

            targetContent = targetScrollRect.content;
            targetElementParent = targetContent;
            elementParntChildCount = targetElementParent.childCount;
            topSectionTargetAnchoredPosition = 0;
            scrollBottomRepositionAnchoredPosition = 0;
            scrollTopRepositionAnchoredPosition = targetContent.rect.size.y * 0.8f;

            targetContent.pivot = new Vector2 (0, 1);
            viewportSize = targetScrollRect.viewport.rect.size;
            targetScrollRect.onValueChanged.AddListener (DragScrollRectReadjustment);

            targetContent.anchoredPosition = Vector2.zero;
            targetElementParent.anchoredPosition = Vector2.zero;
        }

        public virtual void DragScrollRectReadjustment (Vector2 delta) {
            if (reAdjustCountDown < 0) {
                if (targetContent.anchoredPosition.y <= topSectionTargetAnchoredPosition + 10) {
                    OnTopSectionReached ();
                } else if (targetContent.anchoredPosition.y < scrollTopRepositionAnchoredPosition) {
                    OnRepositionMoveToTop ();
                } else if (targetContent.anchoredPosition.y >= (targetContent.rect.size.y - targetScrollRect.viewport.rect.size.y - 10)) {
                    OnBottomSectionReached ();
                } else if (targetContent.anchoredPosition.y > scrollBottomRepositionAnchoredPosition) {
                    OnRepositionMoveToBottom ();
                }
            }
        }

        public virtual void OnTopSectionReached () {
            //DebugLogger.Log ("OnTopSectionReched");
        }

        public virtual void OnBottomSectionReached () {
            //DebugLogger.Log ("OnBottomSectionReached");
        }

        public virtual void OnRepositionMoveToTop () {
            //DebugLogger.Log ("OnRepositionMoveToTop");
        }

        public virtual void OnRepositionMoveToBottom () {
            //DebugLogger.Log ("OnRepositionMoveToBottom");
        }
    }
}