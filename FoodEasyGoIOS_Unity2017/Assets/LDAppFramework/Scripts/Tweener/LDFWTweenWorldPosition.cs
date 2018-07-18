using UnityEngine;
using System.Collections;

namespace LDFW.Tween {
    public class LDFWTweenWorldPosition : LDFWTweenBase {

        new void Awake () {
            base.Awake ();
        }

        protected override void PreStart () {
            startingValue = targetTransform.position;
            if (useCurrentValueAsStartingValue) {
                fromValue = targetTransform.position;
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
                targetTransform.position = currentValue;
            }
        }
    }
}
