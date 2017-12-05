using UnityEngine;
using System.Collections;

namespace LDFW {
    public static class LDFWExtensions {

        public static void DestroyGO (this GameObject go) {
            LDFWGCController.instance.DestroyGO (go);
        }

        public static void DestroyAllChildren (this Transform trans) {
            while (trans.childCount > 0) {
                trans.GetChild (0).gameObject.DestroyGO ();
            }
        }

        public static void DestroyAllChildrenAfterSiblingIndex (this Transform trans, int sublingIndex) {
            while (trans.childCount > (sublingIndex + 1)) {
                trans.GetChild (sublingIndex + 1).gameObject.DestroyGO ();
            }
        }
    }

}