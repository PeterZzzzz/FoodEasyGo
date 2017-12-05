using UnityEngine;
using UnityEngine.Events;
using System.Collections;

namespace LDFW.Tween {
    public abstract class LDFWTweenBase : MonoBehaviour {

        public enum TweenerStyle {
            Once,
            Loop,
            PingPong,
        }

        // Public Variables
        public Transform targetTransform = null;

        public bool autoPlay = false;
        public bool useCurrentValueAsStartingValue = false;
        public bool useRelativeValueBasedOnStartingValue = false;
        public bool generateRandomCurveBasedOnFromAndTo = false;

        public Vector3 fromValue = Vector3.zero;
        public Vector3 toValue = Vector3.zero;

        public AnimationCurve animationXCurve = new AnimationCurve (new Keyframe (0f, 0f, 0f, 1f), new Keyframe (1f, 1f, 1f, 0f));
        public AnimationCurve animationYCurve = new AnimationCurve (new Keyframe (0f, 0f, 0f, 1f), new Keyframe (1f, 1f, 1f, 0f));
        public AnimationCurve animationZCurve = new AnimationCurve (new Keyframe (0f, 0f, 0f, 1f), new Keyframe (1f, 1f, 1f, 0f));

        public TweenerStyle style = TweenerStyle.Once;

        public float startDelay = 0f;
        public float duration = 1f;
        public bool ignoreTimeScale = true;

        public UnityEvent tweenEndEvent = new UnityEvent ();

        // Private and protected variables
        protected Vector3                       startingValue = Vector3.zero;
        protected Vector3                       currentValue = Vector3.zero;
        protected Vector3                       diffValue = Vector3.zero;
        protected float                         accumulatedTime = 0f;
        protected bool                          isPlayingReverse = false;
        protected bool                          isCurrentAnimationBackwards = false;
        protected bool                          isTweenerPlaying = false;

        protected IEnumerator                   burstTweenIEnumerator = null;


        protected void Awake () {
            if (targetTransform == null) {
                targetTransform = transform;
            }
            //animationXCurve.
        }

        // PreStart is used to set the current values if any, it runs first in Start () method
        protected abstract void PreStart ();

        protected void Start () {
            PreStart ();
            Init ();

            if (autoPlay) {
                isTweenerPlaying = true;
            }
        }

        public void Init (Vector3 start, Vector3 end, float time, float delay, UnityAction endAction = null) {
            accumulatedTime = 0f;
            fromValue = start;
            toValue = end;
            duration = time;
            startDelay = delay;
            tweenEndEvent.RemoveAllListeners ();
            if (endAction != null) {
                tweenEndEvent.AddListener (endAction);
            }

            Init ();
        }

        protected void Init () {
            accumulatedTime = 0f;

            if (useRelativeValueBasedOnStartingValue) {
                fromValue += startingValue;
                toValue += startingValue;
            }
            currentValue = fromValue;
            diffValue = toValue - fromValue;

            if (generateRandomCurveBasedOnFromAndTo) {
                GenerateRandomCurve (animationXCurve);
                GenerateRandomCurve (animationYCurve);
                GenerateRandomCurve (animationZCurve);
            }
        }

        protected void GenerateRandomCurve (AnimationCurve curve, float slices = 10f) {
            while (curve.keys.Length > 0) {
                curve.RemoveKey (0);
            }

            for (int i = 0; i <= slices; i++) {
                curve.AddKey (i / slices, Random.Range (0f, 1f));
            }
        }

        protected void Update () {
            // only processes if isTweenerPlaying is true
            if (!isTweenerPlaying)
                return;


            // if there is a start delay, do nothing
            if (accumulatedTime < startDelay) {

            } else {
                // decrements accumualtedTime if it's greater than duration, meaning: next iteration has started
                if (accumulatedTime - startDelay > duration) {
                    accumulatedTime -= duration;
                    if (style == TweenerStyle.PingPong) {
                        isCurrentAnimationBackwards = !isCurrentAnimationBackwards;
                    } else if (style == TweenerStyle.Once) {
                        accumulatedTime = startDelay + duration;
                        isTweenerPlaying = false;
                        if (tweenEndEvent != null) {
                            tweenEndEvent.Invoke ();
                        }
                        //DisableTweener ();
                    }
                }

                float timeScale = 1;
                if (!ignoreTimeScale) {
                    timeScale = Time.timeScale;
                }

                // updates currentValue
                currentValue.x = GetValueBasedOnAnimationCurve (animationXCurve, diffValue.x, fromValue.x) * timeScale;
                currentValue.y = GetValueBasedOnAnimationCurve (animationYCurve, diffValue.y, fromValue.y) * timeScale;
                currentValue.z = GetValueBasedOnAnimationCurve (animationZCurve, diffValue.z, fromValue.z) * timeScale;

                PostCurrentValueCalculation ();
            }

            // increments accumualtedTime;
            accumulatedTime += Time.deltaTime;
        }

        // runs right after currentValue has been calculated for this frame
        protected virtual void PostCurrentValueCalculation () {
            // default behaviour is to do nothing
        }

        protected virtual float GetValueBasedOnAnimationCurve (AnimationCurve curve, float diffValue, float fromValue) {
            if (isCurrentAnimationBackwards) {
                if (isPlayingReverse) {
                    return curve.Evaluate ((accumulatedTime - startDelay) / duration) * diffValue + fromValue;
                } else {
                    return curve.Evaluate ((duration - (accumulatedTime - startDelay)) / duration) * diffValue + fromValue;
                }
            } else {
                if (isPlayingReverse) {
                    return curve.Evaluate ((duration - (accumulatedTime - startDelay)) / duration) * diffValue + fromValue;
                } else {
                    return curve.Evaluate ((accumulatedTime - startDelay) / duration) * diffValue + fromValue;
                }
            }
        }

        #region notes
        /*
	     *		SetToBeginning ()
	     *			set accumulatedTime to startDelay value
	     *		SetToEndding ()
	     *			set accumulatedTime to startDelay value + duration value
	     *		SetToPercentagePoint (float)
	     *			set accumulated time to startDelay + duration * percentage
	     *		PauseTweener ()
	     *			set isTweenerPlaying to false
	     *		ResumeTweener ()
	     *			set isTweenerPlaying to true
	     *		ResetTweener ()
	     *			set accumulatedTime = 0
	     * 		Play ()
	     *			SetToBeginning ()
	     *			set isPlayingReverse to false
	     *			set isTweenPlaying to true
	     * 		PlayReverse ()
	     *			SetToBeginning ()
	     *			set isPlayingReverse to true
	     *			set isTweenPlaying to true
	     */
        #endregion

        public void SetToBeginning () {
            accumulatedTime = startDelay;
        }

        public void SetToEndding () {
            accumulatedTime = startDelay + duration;
        }

        public void SetToPercentagePoint (float percent) {
            if (percent < 0f || percent > 1f) {
                return;
            }

            accumulatedTime = startDelay + duration * percent;
        }

        public void PauseTweener () {
            isTweenerPlaying = false;
        }

        public void ResumeTweener () {
            isTweenerPlaying = true;
        }

        public void ResetTweener () {
            accumulatedTime = 0f;
        }

        public void Play () {
            Init ();
            SetToBeginning ();
            isPlayingReverse = false;
            isTweenerPlaying = true;
        }

        public void PlayReverse () {
            Init ();
            SetToBeginning ();
            isPlayingReverse = true;
            isTweenerPlaying = true;
        }

        public void BurstTweenBasedOnFrames (int framesNum) {
            if (burstTweenIEnumerator != null) {
                StopCoroutine (burstTweenIEnumerator);
            }

            burstTweenIEnumerator = BurstTweenBasedOnFramesCoroutine (framesNum);
            StartCoroutine (burstTweenIEnumerator);
        }

        private IEnumerator BurstTweenBasedOnFramesCoroutine (int framesNum) {

            ResumeTweener ();
            for (int i = 0; i < framesNum; i++) {
                yield return null;
            }
            PauseTweener ();
            burstTweenIEnumerator = null;
        }

        public void BurstTweenBasedOnTime (float time) {
            if (burstTweenIEnumerator != null) {
                StopCoroutine (burstTweenIEnumerator);
            }

            burstTweenIEnumerator = BurstTweenBasedOnTimeCoroutine (time);
            StartCoroutine (burstTweenIEnumerator);
        }

        private IEnumerator BurstTweenBasedOnTimeCoroutine (float time) {
            ResumeTweener ();
            yield return new WaitForSeconds (time);
            PauseTweener ();
            burstTweenIEnumerator = null;
        }
    }
}