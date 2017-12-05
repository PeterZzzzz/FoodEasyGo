using UnityEngine;
using System.Collections;

public class LDFWBaseSceneObject : MonoBehaviour {
     
	protected Transform mTransform;

	protected void Awake () {
        mTransform = this.transform;
	}

	protected void Start () {
	
	}
	
	protected void Update () {
	
	}

	public virtual void OnBecameVisible () {
		Log ("OnBecameVisible is called: " + mTransform.name);
	}

	public virtual void OnBecameInvisible () {
		Log ("OnBecameVisible is called: " + mTransform.name);
	}

	protected void Log (string str) {
	}

    protected void Print (string str) {
        LDFWCommonLogController.Log (str);
    }

}
