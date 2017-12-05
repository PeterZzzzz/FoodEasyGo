using UnityEngine;
using System.Collections;

public class LDFWPlayerPrefsServerController : LDFWPlayerPrefsBaseController {

	private static string AutoLogInUsernameKey = "AUTOLOGINUSERNAMEKEY";
	private static string AutoLogInPasswordKey = "AUTOLOGINPASSWORDKEY";



	public static void Initiate () {
		SetAutoLogInUsername ("");
		SetAutoLogInPassword ("");
	}

	public static string GetAutoLogInUsername () {				return (string)GeneralGetter (AutoLogInUsernameKey, typeof(string));	}
	public static string GetAutoLogInPassword () {				return (string)GeneralGetter (AutoLogInPasswordKey, typeof(string));	}

	public static void SetAutoLogInUsername (string value) {	GeneralSetter (AutoLogInUsernameKey, value, typeof(string));	}
	public static void SetAutoLogInPassword (string value) {	GeneralSetter (AutoLogInPasswordKey, value, typeof(string));	}

}
