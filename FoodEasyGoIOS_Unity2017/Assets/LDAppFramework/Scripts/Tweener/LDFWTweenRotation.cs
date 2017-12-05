using UnityEngine;
using System.Collections;

namespace LDFW.Tween {
    public class LDFWTweenRotation : LDFWTweenBase {

        new void Awake () {
            base.Awake ();
        }

        protected override void PreStart () {
            startingValue = targetTransform.localRotation.eulerAngles;
            if (useCurrentValueAsStartingValue) {
                fromValue = targetTransform.localRotation.eulerAngles;
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
                targetTransform.localEulerAngles = currentValue;
            }
        }
    }
}