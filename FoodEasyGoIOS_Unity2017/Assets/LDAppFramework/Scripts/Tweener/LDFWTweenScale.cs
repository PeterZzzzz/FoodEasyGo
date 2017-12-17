using UnityEngine;
using System.Collections;

namespace LDFW.Tween {
    public class LDFWTweenScale : LDFWTweenBase {

        new void Awake () {
            base.Awake ();
        }

        protected override void PreStart () {
            startingValue = targetTransform.localScale;
            if (useCurrentValueAsStartingValue) {
                fromValue = targetTransform.localScale;
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
                targetTransform.localScale = currentValue;
            }
        }
    }
}
