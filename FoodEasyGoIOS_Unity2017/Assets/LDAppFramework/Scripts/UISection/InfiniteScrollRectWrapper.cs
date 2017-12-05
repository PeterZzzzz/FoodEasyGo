using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using System.Collections;
using UnityEngine.EventSystems;

public class InfiniteScrollRectWrapper : ScrollRect {


    public PointerEventData currentPED;
    public Vector2 currentVelocity;
    public bool isDragging = false;

    public override void OnBeginDrag (PointerEventData eventData) {
        if (!isDragging) {
            isDragging = true;
            currentPED = eventData;
            base.OnBeginDrag (eventData);
        }
        
    }

    public override void OnEndDrag (PointerEventData eventData) {
        if (isDragging) {
            isDragging = false;
            currentPED = eventData;
            base.OnEndDrag (eventData);
        }
    }

    public override void OnDrag (PointerEventData eventData) {
        if (isDragging) {
            currentPED = eventData;
            base.OnDrag (eventData);
        }
    }
    
    public void RepositionContent (Vector2 anchoredPosition) {
        SetContentAnchoredPosition (anchoredPosition);
        ResetDrag ();
    }

    public void ResetDrag () {
        OnEndDrag (currentPED);
        OnBeginDrag (currentPED);
    }
}
