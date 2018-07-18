using UnityEngine;
using System.Collections.Generic;

namespace LDFW.Network {

    public class LDFWImageDownloadController : MonoBehaviour {

        public static LDFWImageDownloadController       instance;
        
        public List<LDFWImageDownloader>                cacheList = new List<LDFWImageDownloader> ();
        public List<LDFWImageDownloader>                currentList = new List<LDFWImageDownloader> ();

        private int                                     concurrentImageDownloadCount = 20;
        private float                                   checkListTimeInterval = 0.5f;
        private float                                   checkListTimeCountDown = 0.5f;
        private float                                   gcCollectCountdown = 1f;

        void Awake () {
            if (instance != null) {
                Destroy (this);
                return;
            }
            instance = this;

            checkListTimeCountDown = checkListTimeInterval;
        }

        void Update () {

            if (checkListTimeCountDown < 0f) {
                checkListTimeCountDown += checkListTimeInterval;

                for (var i = 0; i < currentList.Count; i++) {
                    if (currentList[i].isDone) {
                        currentList.Remove (currentList[i]);
                        i--;
                    }
                }

                while (currentList.Count < concurrentImageDownloadCount) {
                    if (cacheList.Count == 0)
                        break;

                    currentList.Add (cacheList[0]);
                    StartCoroutine (cacheList[0].StartDownloadCoroutine ());
                    cacheList.RemoveAt (0);
                }
            }

            gcCollectCountdown -= Time.deltaTime;
            checkListTimeCountDown -= Time.deltaTime;
        }

        public void AddToCacheList (LDFWImageDownloader newDownload) {
            cacheList.Add (newDownload);
        }

        private void OnDestroy()
        {
            if (instance == this)
                instance = null;
        }
    }

}