using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RestaurantDetailPanelTransparentBarController : MonoBehaviour {

    public static RestaurantDetailPanelTransparentBarController     instance;
    public bool                                                     isResized = false;
    private LayoutElement                                           layoutElement;
    public bool                                                     isResizing = false;
    private float                                                   resizingSpeed = 2000f;
    public float                                                    resizeRange;

    void Awake () {
        if (instance != null) {
            Destroy (instance.gameObject);
        }
        instance = this;
        layoutElement = GetComponent<LayoutElement> ();
        isResizing = false;
        isResized = false;
        resizeRange = 0;
    }

    //void Update () {
    //    if (isResizing) {
    //        layoutElement.preferredHeight += Time.deltaTime * resizingSpeed;

    //        if (layoutElement.preferredHeight <= 0) {
    //            layoutElement.preferredHeight = 0;
    //            isResizing = false;
    //            isResized = true;
    //        }
    //    }
    //}

    //public void Resize () {
    //    if (!isResizing && !isResized) {
    //        isResizing = true;
    //        resizingSpeed = -200;
    //    }
    //}




    void Update () {
        if (resizeRange < layoutElement.preferredHeight)
            resizeRange = layoutElement.preferredHeight;

        if (isResizing) {
            layoutElement.preferredHeight += Time.deltaTime * resizingSpeed;

            if (layoutElement.preferredHeight >= resizeRange) {
                layoutElement.preferredHeight = resizeRange;
                isResizing = false;
                isResized = false;
            } else if (layoutElement.preferredHeight <= 0) {
                layoutElement.preferredHeight = 0;
                isResizing = false;
                isResized = true;
            }
        }
    }

    public void ResizeDown () {
        if (!isResizing && !isResized) {
            isResizing = true;
            resizingSpeed = -300;
        }
    }

    public void ResizeUp () {
        if (!isResizing && isResized) {
            isResizing = true;
            resizingSpeed = 300;
        }
    }
}
