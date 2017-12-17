using UnityEngine;
using System.Collections;

namespace LDFW.Tween {
    public class LDFWTweenPosition : LDFWTweenBase {

        new void Awake () {
            base.Awake ();
        }

        protected override void PreStart () {
            startingValue = targetTransform.localPosition;

            if (useCurrentValueAsStartingValue) {
                fromValue = targetTransform.localPosition;
            }
        }

        new void Start () {
            base.Start ();
        }

        new void Update () {
            if (!isTweenerPlaying) {
                return;
            }
            base.Update ();

            if (accumulatedTime > startDelay) {
                targetTransform.localPosition = currentValue;
            }
        }


    }
}
