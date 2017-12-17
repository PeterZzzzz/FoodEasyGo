using UnityEngine;
using System.Collections;

public class LDFWPlayerPrefsLoadSceneController: LDFWPlayerPrefsBaseController {

	private static string IsReadyKey = "LDFWLOADSCENEISREADYKEY";

	private static string AdListJSONKey = "LDFWLOADSCENEADLISTJSONKEY";
	private static string DownloadedImageCountKey = "LDFWLOADSCENEDOWNLOADEDIMAGECOUNTKEY";
	private static string DisplayAdKey = "LDFWLOADSCENEDISPLAYADKEY";


	public static void Initiate () {
		SetAdList (new JSONObject (""));

		SetDownloadedImageCount (0);
		PlayerPrefs.SetInt (AdListJSONKey, 1);
	}

	// Getters
	public static int IsReady () {								return (int)GeneralGetter (IsReadyKey, typeof(int));									}
	public static JSONObject GetAdListJSON () {					return new JSONObject ((string) GeneralGetter (AdListJSONKey, typeof(string)));			}
	public static int GetDownloadedImageCount () {				return (int)GeneralGetter (DownloadedImageCountKey, typeof(int));						}
	public static int GetDisplayAdKey () {						return (int)GeneralGetter (DisplayAdKey, typeof(int));									}

	// Setters
	public static void SetAdList (JSONObject list) {			GeneralSetter (AdListJSONKey, list.ToString(), typeof(string));							}
	public static void SetIsReadyKey (int status) {				GeneralSetter (IsReadyKey, status, typeof(int));											}
	public static void SetDownloadedImageCount (int count) {	GeneralSetter (DownloadedImageCountKey, count, typeof(int));							}
	public static void SetDisplayAdKey (int value) {			GeneralSetter (DisplayAdKey, value, typeof(int));										}
}
