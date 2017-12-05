using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections.Generic;


namespace LDFW.UI {

    public class LDFWToggleElementController : MonoBehaviour, IPointerClickHandler {

        public string                               toggleID;
        public LDFWToggleController                 toggleController;
        
        public bool                                 isToggleOn;

        // Events
        public UnityEvent                           onSelectEvent;
        public UnityEvent                           onDeselectEvent;


        
        void Start () {
            if (toggleController == null) {
                toggleController = transform.parent.GetComponent<LDFWToggleController> ();
            }
            DeselectToggleElement ();
        }

        public virtual void SelectToggleElement () {
            isToggleOn = true;
            if (onSelectEvent != null) {
                onSelectEvent.Invoke ();
            }

            if (toggleController != null)
                toggleController.UpdateSelectedList();
        }

        public virtual void DeselectToggleElement () {
            isToggleOn = false;
            if (onDeselectEvent != null) {
                onDeselectEvent.Invoke ();
            }

            if (toggleController != null)
                toggleController.UpdateSelectedList();
        }

        public virtual void OnPointerClick (PointerEventData eventData) {
            toggleController.OnToggleElementClicked (transform.GetSiblingIndex (), isToggleOn);
        }
    }
}