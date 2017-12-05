using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using System.Collections;

public class BaseRawImageController : BaseUIController {

    // Public Variables
    public WWW imageWWW;

    // Protected and Private Variables
    protected RawImage rawImage;
    protected IEnumerator loadImageIEnumerator;

    protected new void Awake () {
        base.Awake ();
    }

    public void LoadImage (string url) {
        if (loadImageIEnumerator != null) {
            StopCoroutine (loadImageIEnumerator);
        }

        loadImageIEnumerator = LoadImageCoroutine (url);
        StartCoroutine (loadImageIEnumerator);
    }

    private IEnumerator LoadImageCoroutine (string url) {
        imageWWW = new WWW (url);
        yield return imageWWW;
        rawImage.texture = imageWWW.texture;
    }
}
