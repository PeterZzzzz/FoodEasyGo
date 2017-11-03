using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using cn.sharesdk.unity3d;

public class HelperCanvasController : MonoBehaviour {

    public static HelperCanvasController            instance;
    public ShareSDK                                 ssdk;
    
    void Awake () {
        if (instance != null) {
            if (transform.parent != null) {
                Destroy (transform.parent.gameObject);
            } else {
                Destroy (gameObject);
            }
            return;
        }
        instance = this;

        GetComponent<CanvasScaler> ().referenceResolution = LDFWDeviceInfo.GetScreenDPVector ();

        DontDestroyOnLoad (transform.parent.gameObject);
    }

    void OnDestroy()
    {
        if (instance == this)
            instance = null;
    }
}
