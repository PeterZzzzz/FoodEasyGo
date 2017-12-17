using UnityEngine;
using System;
using System.Xml;
using System.IO;
using System.Collections;



namespace LDFW.FileIO {

    public class LDFWAppConfigController {

#if UNITY_EDITOR
        private static string filePath = Application.dataPath + "/StreamingAssets/" + "config.xml";
#elif UNITY_IPHONE
        private static string filePath = Application.dataPath + "/Raw/" + "config.xml";
#elif UNITY_ANDROID
        private static string filePath = "jar:file://" + Application.dataPath + "!/assets//" + "config.xml";
#endif

        public static void CreateConfigFileIfNotExist () {
            StreamWriter sw;
            FileInfo t = new FileInfo (filePath);

            if (!t.Exists) {
                sw = t.CreateText ();
            } else {
                sw = t.AppendText ();
            }

            sw.Close ();
            sw.Dispose ();
        }


        public static void DeleteFile () {
            File.Delete (filePath);
        }

        public static void WriteToFile (XmlNode xmlData) {
            StreamWriter sw;
            FileInfo t = new FileInfo (filePath);

            sw = t.CreateText ();
            sw.WriteLine (xmlData.ToString ());

            sw.Close ();
            sw.Dispose ();
        }
    }

}