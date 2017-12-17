using UnityEngine;
using System.Collections;

public static class LDFWPlayerPrefsSettingsController {

	public static string SoundVolumeKey = "LDFWSOUNDVOLUMEKEY";
	public static string FrameRateDisplayKey = "LDFWFPSDISPLAYKEY";


	public static void Initiate () {
		SetSoundVolume (1f);
		SetFPSDisplay (1);
	}

	public static void SetSoundVolume (float value) {					PlayerPrefs.SetFloat (SoundVolumeKey, value);				}
	public static void SetFPSDisplay (int value) {						PlayerPrefs.SetInt (FrameRateDisplayKey, value);			}

	public static float GetSoundVolume () {								return PlayerPrefs.GetFloat (SoundVolumeKey);				}
	public static int GetFPSDisplay () {								return PlayerPrefs.GetInt (FrameRateDisplayKey);			}



}
