using UnityEngine;
using System.Collections;

namespace LDFW {
    public static class Debug2 {

        public static int loggingLevel = 0;
        public static int warningLevel = 0;
        public static int errorLevel = 0;

        public static bool forceLogging = false;

        public static void Log (string msg, bool overrideLevel = false, int level = 1) {
            if (overrideLevel || forceLogging || level > loggingLevel) {
                UnityEngine.Debug.Log (msg);
            }
        }

        public static void Warning (string msg, bool overrideLevel = false, int level = 1) {
            if (overrideLevel || forceLogging || level > warningLevel) {
                UnityEngine.Debug.LogWarning (msg);
            }
        }

        public static void Error (string msg, bool overrideLevel = false, int level = 1) {
            if (overrideLevel || forceLogging || level > errorLevel) {
                UnityEngine.Debug.LogError (msg);
            }
        }
    }
}