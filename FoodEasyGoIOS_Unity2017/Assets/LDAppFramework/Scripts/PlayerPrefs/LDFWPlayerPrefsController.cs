using UnityEngine;
using System.Collections;

namespace LDFW {

    public static class LDFWPlayerPrefsController {
        
        public static void DeleteAll () {
            PlayerPrefs.DeleteAll ();
        }

        public static void DeleteKey (string key) {
            PlayerPrefs.DeleteKey (key);
        }

        public static int GetInt (string key) {
            return PlayerPrefs.GetInt (key);
        }

        public static float GetFloat (string key) {
            return PlayerPrefs.GetFloat (key);
        }

        public static string GetString (string key) {
            return PlayerPrefs.GetString (key);
        }

        public static void SetInt (string key, int val) {
            PlayerPrefs.SetInt (key, val);
        }

        public static void SetFloat (string key, float val) {
            PlayerPrefs.SetFloat (key, val);
        }

        public static void SetString (string key, string val) {
            PlayerPrefs.SetString (key, val);
        }

        public static void Save () {
            PlayerPrefs.Save ();
        }

        public static bool HasKey (string key) {
            return PlayerPrefs.HasKey (key);
        }
    }
}