using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using System;
using System.Collections;

namespace LDFW.Network {

    [System.Serializable]
    public class LDFWImageDownloader {
        
        protected string                wwwURL = null;
        protected RawImage              image = null;
        protected WWW                   www = null;
        protected WWWForm               wwwForm = null;

        protected UnityEvent            successCallback = null;
        protected UnityEvent            failureCallback = null;

        public bool isDone {
            get { return www == null || www.isDone ? true : false; }
        }

        public float progress {
            get { return www == null ? 1f : www.progress; }
        }
        
        public void LDFWImageDownloader2 (string url, WWWForm form, RawImage img, UnityAction callbackEventSuccess, UnityAction callbackEventFailure) {
            wwwURL = url;
            wwwForm = form;
            
            image = img;

            if (callbackEventSuccess != null) {
                successCallback.AddListener (callbackEventSuccess);
            }

            if (callbackEventFailure != null) {
                failureCallback.AddListener (callbackEventFailure);
            }
        }

        public IEnumerator StartDownloadCoroutine () {
            //DebugLogger.Log ("ImageDownloader.StartDownloadCoroutine: " + wwwURL);
            if (!string.IsNullOrEmpty(wwwURL)) { 
                www = new WWW (wwwURL, wwwForm);
                yield return www;

                if (!string.IsNullOrEmpty (www.error)) {
                    //DebugLogger.Log ("url = " + wwwURL);
                    //DebugLogger.Log ("image download failed: " + www.error);
                    //DebugLogger.Log ("text = " + www.text);
                    if (failureCallback != null) {
                        failureCallback.Invoke ();
                    }
                } else {
                    //DebugLogger.Log ("ImageDown successful");
                    if (image != null) {
                        try
                        {
                            GameObject.Destroy (image.texture);
                            image.texture = www.texture;
                            if (successCallback != null)
                            {
                                successCallback.Invoke ();
                            }
                        }
                        catch (Exception e)
                        {
                            Debug.Log (e.StackTrace);
                        }
                    }
                }

                www = null;
            }
        }
    }

}