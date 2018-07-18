using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RestaurantDetailPanelTransparentBarController : MonoBehaviour {

    public static RestaurantDetailPanelTransparentBarController     instance;
    private LayoutElement                                           layoutElement;
    private bool                                                    isResizing = false;
    private float                                                   resizingSpeed = 2000f;
    private bool                                                    isResizedDown = false;

    void Awake () {
        if (instance != null) {
            Destroy (instance.gameObject);
        }
        instance = this;
        
        layoutElement = GetComponent<LayoutElement> ();
        layoutElement.preferredHeight = 120;
        isResizing = false;
        isResizedDown = false;
    }

    void Update () {
        if (isResizing) {
            layoutElement.preferredHeight += Time.deltaTime * resizingSpeed;

            if (layoutElement.preferredHeight >= 120) {
                layoutElement.preferredHeight = 120;
                isResizing = false;
                isResizedDown = false;
            } else if (layoutElement.preferredHeight <= 0) {
                layoutElement.preferredHeight = 0;
                isResizing = false;
                isResizedDown = true;
            }
        }
    }

    public void ResizeDown () {
        if (!isResizing && !isResizedDown) {
            isResizing = true;
            resizingSpeed = -200;
        }
    }

    public void ResizeUp () {
        if (!isResizing && isResizedDown) {
            isResizing = true;
            resizingSpeed = 200;
        }
    }
}
