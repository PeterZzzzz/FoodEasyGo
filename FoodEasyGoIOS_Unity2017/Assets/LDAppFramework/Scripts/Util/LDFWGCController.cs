using UnityEngine;

using System.Collections.Generic;


namespace LDFW {

    public class LDFWGCController : MonoBehaviour {

        public static LDFWGCController instance;

        public List<GameObject> gcList = new List<GameObject> ();

        void Awake () {
            if (instance != null) {
                Destroy (this.gameObject);
            } else {
                instance = this;
            }
        }

        public void DestroyGO (GameObject temp) {
            temp.transform.parent = null;
            gcList.Add (temp);
        }

        public void ClearGCList () {
            GameObject temp = null;
            while (gcList.Count > 0) {
                temp = gcList[0];
                gcList.RemoveAt (0);

                temp.transform.localScale = Vector3.zero;
                Destroy (temp);
            }
        }
    }

}