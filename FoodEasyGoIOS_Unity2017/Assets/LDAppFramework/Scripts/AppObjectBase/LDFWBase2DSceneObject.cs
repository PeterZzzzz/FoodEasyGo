using UnityEngine;
using System.Collections;

public class LDFWBase2DSceneObject : LDFWBaseSceneObject {

	protected new void Awake () {
		base.Awake ();
	}

	protected new void Start () {
		base.Start ();
	}

	protected new void Update () {
		base.Update ();
	}

	public override void OnBecameVisible () {
		Log ("OnBecameVisible is called: " + mTransform.name);
	}

	public override void OnBecameInvisible () {
		Log ("OnBecameVisible is called: " + mTransform.name);
	}
}
