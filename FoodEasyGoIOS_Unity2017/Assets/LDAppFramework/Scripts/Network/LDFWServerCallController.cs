using UnityEngine;
using UnityEngine.Events;
using System.Collections;
using System.Collections.Generic;


namespace LDFW.Network {

    public class LDFWServerResponseEvent : UnityEvent<JSONObject, string> {
        public LDFWServerResponseEvent (UnityAction<JSONObject, string> action) {
            this.AddListener (action);
        }
    }

    [System.Serializable]
    public class LDFWWWWCallCoroutineWrapper {
        public string wwwURL;
        public LDFWServerCallController caller;
        public WWW www;
        public Coroutine coroutine;
        public IEnumerator coroutineIEnumerator;
        public float startTime;
        public int callingTime = 1;
        
        public LDFWWWWCallCoroutineWrapper (string url, LDFWServerCallController parent, WWW wwwInstance, IEnumerator coroutineIEnum, float time) {
            wwwURL = url;
            caller = parent;
            www = wwwInstance;
            coroutineIEnumerator = coroutineIEnum;
            startTime = time;
        }

        public void StartWWWCall () {
            callingTime = 1;
            coroutine = caller.StartCoroutine (coroutineIEnumerator);
        }

        public void Dispose () {
            //caller.StopCoroutine (coroutineIEnumerator);
            if (www != null) {
                www.Dispose ();
                www = null;
            }
        }
    }

    public class LDFWServerCallController : MonoBehaviour {

        public List<LDFWWWWCallCoroutineWrapper> wwwList = new List<LDFWWWWCallCoroutineWrapper> ();

        private float wwwCheckTimeInterval = 5f;

        protected void Update () {
            if (wwwCheckTimeInterval < 0f) {
                wwwCheckTimeInterval += 5f;
                for (int i = 0; i < wwwList.Count; i++) {
                    if (Time.time - wwwList[i].startTime > 10f) {
                        if (wwwList[i].coroutineIEnumerator != null) {
                            StopCoroutine (wwwList[i].coroutineIEnumerator);
                        }
                        wwwList[i].Dispose ();
                        wwwList.Remove (wwwList[i]);
                        i--;
                    }
                }
            }

            wwwCheckTimeInterval -= Time.deltaTime;
        }

        protected virtual LDFWWWWCallCoroutineWrapper CommonWWWCall (string url, WWWForm form, LDFWServerResponseEvent successCallBack, LDFWServerResponseEvent failureCallBack) {
            WWW www = new WWW(url, form);
            IEnumerator newCall = CommonWWWCallCoroutine (www, successCallBack, failureCallBack);

            LDFWWWWCallCoroutineWrapper newWrapper = new LDFWWWWCallCoroutineWrapper (url, this, www, newCall, Time.time);
            wwwList.Add (newWrapper);

            newWrapper.StartWWWCall ();

            return newWrapper;
        }

        protected virtual LDFWWWWCallCoroutineWrapper CommonWWWCall (WWW www, LDFWServerResponseEvent successCallBack, LDFWServerResponseEvent failureCallBack) {
            IEnumerator newCall = CommonWWWCallCoroutine (www, successCallBack, failureCallBack);

            LDFWWWWCallCoroutineWrapper newWrapper = new LDFWWWWCallCoroutineWrapper (www.url, this, www, newCall, Time.time);
            wwwList.Add (newWrapper);

            newWrapper.StartWWWCall ();

            return newWrapper;
        }

        protected virtual IEnumerator CommonWWWCallCoroutine (WWW www, LDFWServerResponseEvent successCallBack, LDFWServerResponseEvent failureCallBack) {

            Debug.LogError ("Please implement your own version of this method");

            yield return www;

            if (!string.IsNullOrEmpty (www.error)) {
                DebugLogger.Log ("www error: (" + www.url + ")" + www.error + "\n" + www.text);
                yield break;
            }

            www.Dispose ();
            www = null;
        }
    }
}
