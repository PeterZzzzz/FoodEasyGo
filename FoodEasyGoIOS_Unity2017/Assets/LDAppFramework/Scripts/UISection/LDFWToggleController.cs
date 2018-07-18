using UnityEngine;
using UnityEngine.Events;
using System;
using System.Collections;
using System.Collections.Generic;

namespace LDFW.UI {

    public class LDFWToggleController : MonoBehaviour {

        // There are 3 types of toggle:
        // 1. single select and is must (exactly one element is selected at all times)                  isSingleSelect = true && isMust = true
        // 2. single select and is not must (either one or no element is selected at all times)         isSingleSelect = true && isMust = false
        // 3. is not single select and is not must                                                      isSingleSelect = false && isMust = false
        // 4. is not single select and is must                                                          isSingleSelect = false && isMust = true

        public Transform                                    toggleElementParent;
        public string                                       toggleParentID;

        public bool                                         autoReset = true;
        public bool                                         isSingleSelect = true;
        public bool                                         isMust = true;
        public int                                          defaultIndex = 0;
        public bool[]                                       selectedList;

        public UnityEvent                                   onSelectEvent;
        public UnityEvent                                   onDeselectEvent;

        protected void Awake () {
            if (toggleElementParent == null) {
                toggleElementParent = transform;
            }
        }

        protected IEnumerator Start () {
            yield return null;
            if (autoReset) {
                Reset ();
            }
        }

        public virtual void Reset () {
            selectedList = new bool[toggleElementParent.childCount];

            onSelectEvent = new UnityEvent ();
            onDeselectEvent = new UnityEvent ();

            if ((isSingleSelect || isMust) && toggleElementParent.childCount >= 1) {
                SelectToggle (defaultIndex);
            }
        }

        public void UpdateSelectedList()
        {
            for (int i=0; i<selectedList.Length; i++)
            {
				Debug.Assert (toggleElementParent != null, "Toggle element parnet is null");
				if (i >= toggleElementParent.childCount)
					break;
				//Debug.Log ("i = " + i);
                if (toggleElementParent.GetChild(i) != null && toggleElementParent.GetChild(i).GetComponent<LDFWToggleElementController>().isToggleOn)
                    selectedList[i] = true;
                else
                    selectedList[i] = false;
            }
        }

        public virtual bool OnToggleElementClicked (int toggleSiblingIndex, bool isToggleOn) {
            if (isSingleSelect && isMust) {
                if (!isToggleOn) {
                    SelectToggle (toggleSiblingIndex);
                    return true;
                }
            } else if (isSingleSelect && !isMust) {
                if (!isToggleOn) {
                    SelectToggle (toggleSiblingIndex);
                    return true;
                } else {
                    DeselectToggle (toggleSiblingIndex);
                    return true;
                }
            } else if (!isSingleSelect) {
                if (!isToggleOn) {
                    SelectToggle (toggleSiblingIndex);
                    return true;
                } else {
                    DeselectToggle (toggleSiblingIndex);
                    return true;
                }
            }
            return false;
        }

        public virtual void SelectToggle (int index) {
			for (int i=0; i<toggleElementParent.childCount && i < selectedList.Length; i++) {
                if (i == index) {
                    toggleElementParent.GetChild (i).GetComponent<LDFWToggleElementController> ().SelectToggleElement ();
                    selectedList[i] = true;
                } else {
                    // deselect other is one of the following conditions are met:
                    // 1. is single select
                    if (isSingleSelect) {
                        toggleElementParent.GetChild (i).GetComponent<LDFWToggleElementController> ().DeselectToggleElement ();
                        selectedList[i] = false;
                    }
                }
            }
            if (onSelectEvent != null) {
                onSelectEvent.Invoke ();
            }
        }

        public virtual void DeselectToggle (int index) {
            // can deselect if one of the following conditions are met:
            // 1. is single select and is not a must
            // 2. is multi select (not single select) 
            if ((isSingleSelect && !isMust) || !isSingleSelect) {
                toggleElementParent.GetChild (index).GetComponent<LDFWToggleElementController> ().DeselectToggleElement ();
                selectedList[index] = false;
            }

            if (onDeselectEvent != null) {
                onDeselectEvent.Invoke ();
            }
        }

        public virtual string GetSelectedElements () {
            string result = "";
            for (int i = 0; i<selectedList.Length; i++) {
                if (selectedList[i]) {
                    if (string.IsNullOrEmpty (result)) {
                        result = i.ToString ();
                    } else {
                        result = result + "," + i.ToString ();
                    }
                }
            }
            return result;
        }

        public virtual string GetSelectedElementIDs () {
            string result = "";
            for (int i=0; i<selectedList.Length; i++) {
                if (selectedList[i]) {
                    if (result == "") {
                        result = toggleElementParent.GetChild (i).GetComponent<LDFWToggleElementController> ().toggleID;
                    } else {
                        result = result + "," + toggleElementParent.GetChild (i).GetComponent<LDFWToggleElementController> ().toggleID;
                    }
                }
            }

            return result;
        }

        public virtual void DestroyAllToggleElements () {
            DebugLogger.Log (transform.name + "Destroy all toggle elements is called");
            toggleElementParent.DestroyAllChildren ();
        }
    }

}