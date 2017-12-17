using UnityEngine;
using System.Collections;

public class DebugLogger : MonoBehaviour {


    public static void Log (string str) {
        if (Debug.isDebugBuild && Config.isDebug) {
        //if (Debug.isDebugBuild) {
            Debug.Log (str);
        }
    }
}
