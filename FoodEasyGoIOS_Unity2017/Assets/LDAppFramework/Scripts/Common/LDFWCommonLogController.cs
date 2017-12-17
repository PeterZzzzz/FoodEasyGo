using UnityEngine;

using System.Collections;


public static class LDFWCommonLogController {

	// wrapper function for DebugLogger.Log
	public static void Log (string message, int logLevel=1) {
		if (logLevel >= LDFWCommonConfig.LogLevel) {
            Debug.Log (message);
		}
	}

	// wrapper function for DebugLogger.LogWarning
	public static void Warning (string message, int warningLevel=1) {
		if (warningLevel >= LDFWCommonConfig.WarningLevel) {
            Debug.LogWarning (message);
		}
	}

	// wrapper function for DebugLogger.LogError
	public static void Error (string message, int errorLevel=1) {
		if (errorLevel >= LDFWCommonConfig.ErrorLevel) {
            Debug.LogError (message);
		}
	}
}
