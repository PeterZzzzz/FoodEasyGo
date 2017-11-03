using UnityEngine;
using System.Collections;

namespace LDFW.Tween {
    public class LDFWTweenWorldRotation : LDFWTweenBase {

        new void Awake () {
            base.Awake ();
        }

        protected override void PreStart () {
            startingValue = targetTransform.rotation.eulerAngles;
            if (useCurrentValueAsStartingValue) {
                fromValue = targetTransform.rotation.eulerAngles;
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
                targetTransform.eulerAngles = currentValue;
            }
        }
    }
}
