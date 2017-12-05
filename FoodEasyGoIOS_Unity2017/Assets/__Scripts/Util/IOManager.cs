using UnityEngine;
using System.IO;
using System.Collections;

public class IOManager {

    public static Texture2D LoadImage (string relativePath) {
        string fileName = Path.Combine (Application.persistentDataPath, relativePath);
        //DebugLogger.Log ("Loading image: " + fileName);

        if (File.Exists (fileName)) {
            var bytes = File.ReadAllBytes (fileName);
            Texture2D texture = new Texture2D (10, 10);
            texture.LoadImage (bytes);
            return texture;
        } else {
            DebugLogger.Log ("Could not load file: " + fileName);
            return null;
        }
    }

    public static void SaveImage (Texture2D texture, string path, string filename) {
        //DebugLogger.Log ("Save image to: " + path);
        string fullPath = Path.Combine (Application.persistentDataPath, Path.Combine (path, filename));
        FileInfo file = new FileInfo (fullPath);
        file.Directory.Create ();
        File.WriteAllBytes (fullPath, texture.EncodeToPNG ());

        //DebugLogger.Log ("file path = " + file.FullName);
    }
}
