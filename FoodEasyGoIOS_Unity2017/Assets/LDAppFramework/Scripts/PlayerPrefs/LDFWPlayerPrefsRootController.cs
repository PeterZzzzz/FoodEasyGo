using UnityEngine;
using System.Collections;

public static class LDFWPlayerPrefsRootController {

	private static string LDFWInitiatedKey = "LDFWINITIATEDKEY";

	public static void ForceInitialize () {
		PlayerPrefs.DeleteAll();
		Initialize ();
	}

	public static void Initialize () {
		if (PlayerPrefs.GetInt (LDFWInitiatedKey) == 0) {

			LDFWPlayerPrefsSettingsController.Initiate ();
			LDFWPlayerPrefsLoadSceneController.Initiate ();
			LDFWPlayerPrefsServerController.Initiate ();

			PlayerPrefs.SetInt (LDFWInitiatedKey, 1);
		}
	}
}
