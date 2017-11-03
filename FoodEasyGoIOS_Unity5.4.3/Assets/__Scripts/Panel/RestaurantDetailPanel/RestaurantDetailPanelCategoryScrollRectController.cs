using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

using System.Collections;

using LDFW;

public class RestaurantDetailPanelCategoryScrollRectController : ScrollRect {

    public static RestaurantDetailPanelCategoryScrollRectController instance;

    public RestaurantDetailPanelMainScrollRectController mainScrollRect;

    public bool sendToparent = true;
    

    new protected void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();
    }


    public override void OnBeginDrag (PointerEventData eventData) {
        base.OnBeginDrag (eventData);
    }

    public override void OnEndDrag (PointerEventData eventData) {
        base.OnEndDrag (eventData);
    }

    public override void OnDrag (PointerEventData eventData) {
        base.OnDrag (eventData);
    }
    
}
