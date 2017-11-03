using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

using LDFW;

public class SearchPanelSearchResultScrollRect : ScrollRect {

    public static SearchPanelSearchResultScrollRect instance;

    private bool canDrag = false;
    private PointerEventData currentPED;


    new protected void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();
        
    }


    public override void OnBeginDrag (PointerEventData eventData) {
        if (!canDrag) {
            currentPED = eventData;
            canDrag = true;
            base.OnBeginDrag (eventData);
            
        }
    }

    public override void OnEndDrag (PointerEventData eventData) {
        if (canDrag) {
            currentPED = eventData;
            canDrag = false;
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
}
