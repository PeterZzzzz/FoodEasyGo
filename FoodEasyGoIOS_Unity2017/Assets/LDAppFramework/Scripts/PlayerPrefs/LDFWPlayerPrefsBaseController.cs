using UnityEngine;
using System;

public class LDFWPlayerPrefsBaseController {

	static readonly object getterSetterLocker = new object ();

	public static void GeneralSetter (string key, object value, Type type) {
		lock (getterSetterLocker) {
			if (type == typeof(string)) {
				PlayerPrefs.SetString (key, (string) value);
			} else if (type == typeof(int)) {
				PlayerPrefs.SetInt (key, (int) value);
			} else if (type == typeof(float)) {
				PlayerPrefs.SetFloat (key, (float) value);
			}
		}
	}

	public static object GeneralGetter (string key, Type type) {
		lock (getterSetterLocker) {
			if (type == typeof(string)) {
				return PlayerPrefs.GetString (key);
			} else if (type == typeof(int)) {
				return PlayerPrefs.GetInt (key);
			} else {
				return PlayerPrefs.GetFloat (key);
			}
		}
	}
}
