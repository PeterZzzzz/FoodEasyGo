using UnityEngine;
using System.Collections;


namespace LDFW.Tween {
    [RequireComponent (typeof (RectTransform))]
    public class LDFWTweenUIAnchoredPosition : LDFWTweenBase {
        // Public Variables
        public RectTransform targetRectTransform;

        // Private Variables
        private Vector2 tempVector = Vector2.zero;

        new void Awake () {
            base.Awake ();

            if (targetRectTransform == null) {
                targetRectTransform = GetComponent<RectTransform> ();
            }
        }

        protected override void PreStart () {
            startingValue.x = targetRectTransform.anchoredPosition.x;
            startingValue.y = targetRectTransform.anchoredPosition.y;
            if (useCurrentValueAsStartingValue) {
                fromValue.x = targetRectTransform.anchoredPosition.x;
                fromValue.y = targetRectTransform.anchoredPosition.y;
            }
        }

        new void Update () {
            if (!isTweenerPlaying) {
                return;
            }
            base.Update ();

            if (accumulatedTime > startDelay) {
                tempVector.x = currentValue.x;
                tempVector.y = currentValue.y;

                targetRectTransform.anchoredPosition = tempVector;
            }
        }

    }
}