using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.EventSystems;

public class RestaurantPanelMainScrollRectController : ScrollRect {

    private PointerEventData currentPED;
    private bool canDrag = false;

    public override void OnBeginDrag (PointerEventData eventData) {
        if (!canDrag) {
            canDrag = true;
            currentPED = eventData;
            base.OnBeginDrag (eventData);
        }
    }

    public override void OnEndDrag (PointerEventData eventData) {
        if (canDrag) {
            canDrag = false;
            currentPED = eventData;
            base.OnEndDrag (eventData);
        }
    }

    public override void OnDrag (PointerEventData eventData) {
        if (canDrag) {
            currentPED = eventData;
            base.OnDrag (eventData);
        }
    }

    public void BreakDrag () {
        OnEndDrag (currentPED);
    }

    public void ReDrag () {
        OnBeginDrag (currentPED);
    }

    public void RepositionContent (Vector2 anchoredPosition) {
        SetContentAnchoredPosition (anchoredPosition);
    }
    
}
