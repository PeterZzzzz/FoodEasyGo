using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.EventSystems;

public class ScrollRectController : ScrollRect {
   
    public ScrollRect parentScrollRect;

    private bool dragEventSendLock = false;
    private bool sendDragEventToParent = false;

    protected new void Awake () {
        base.Awake ();
    }
	
	protected new void Start () {
        base.Start ();
	}

    public override void OnBeginDrag (PointerEventData eventData) {
        // do nothing
    }

    public override void OnDrag (PointerEventData eventData) {
        if (!dragEventSendLock) {
            LockForDragEventSendDirection (eventData);

            if (sendDragEventToParent) {
                parentScrollRect.OnBeginDrag (eventData);
            } else {
                base.OnBeginDrag (eventData);
            }
        }

        if (sendDragEventToParent) {
            parentScrollRect.OnDrag (eventData);
        } else {
            base.OnDrag (eventData);
        }
    }

    public override void OnEndDrag (PointerEventData eventData) {
        if (sendDragEventToParent) {
            parentScrollRect.OnEndDrag (eventData);
        } else {
            base.OnEndDrag (eventData);
        }

        dragEventSendLock = false;
    }

    private void LockForDragEventSendDirection (PointerEventData eventData) {
        dragEventSendLock = true;
        if (parentScrollRect != null) {
            if (Mathf.Abs (eventData.delta.x) > Mathf.Abs (eventData.delta.y)) {
                if (!horizontal) {
                    sendDragEventToParent = true;
                    return;
                }
            } else {
                if (!vertical) {
                    sendDragEventToParent = true;
                    return;
                }
            }
        }
        sendDragEventToParent = false;
    }


    /*
    public override void OnBeginDrag (PointerEventData eventData) {
        
        if (InvokeParentScrollRect (eventData)) {
            parentScrollRect.OnBeginDrag (eventData);
        } else {
            base.OnBeginDrag (eventData);
        }
    }

    public override void OnDrag (PointerEventData eventData) {
        if (InvokeParentScrollRect (eventData)) {
            parentScrollRect.OnDrag (eventData);
        } else {
            base.OnDrag (eventData);
        }
    }

    public override void OnEndDrag (PointerEventData eventData) {
        if (InvokeParentScrollRect (eventData)) {
            parentScrollRect.OnEndDrag (eventData);
        } else {
            base.OnEndDrag (eventData);
        }
    }

    private bool InvokeParentScrollRect (PointerEventData eventData) {
        if (parentScrollRect != null) {
            if (Mathf.Abs (eventData.delta.x) > Mathf.Abs (eventData.delta.y)) {
                if (!horizontal) {
                    return true;
                }
            } else {
                if (!vertical) {
                    return true;
                }
            }
        }
        return false;
    }
    */
}
