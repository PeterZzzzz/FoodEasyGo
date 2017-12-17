using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.IO;

namespace LDFW.FileIO
{

    public class PersistentDataControl : MonoBehaviour
    {

        public static PersistentDataControl             instance;

        private void Awake ()
        {
            if (instance != null)
            {
                Destroy (this);
                return;
            }
            instance = this;
        }

        /// <summary>
        /// Create a dir if it's missing
        /// </summary>
        /// <param name="subDirpath"></param>
        public static void CreateDirIfNotExist (string subDirpath)
        {
            //DebugLogger.Log ("PersistentDataPath: " + GetPersistentDatapathDirPath (subDirpath));
            if (!System.IO.Directory.Exists (GetPersistentDatapathDirPath (subDirpath)))
                System.IO.Directory.CreateDirectory (GetPersistentDatapathDirPath (subDirpath));
        }

        /// <summary>
        /// Check if there is a cache available
        /// </summary>
        public static bool CheckCacheByName (string subDirPath, string name)
        {
            return System.IO.File.Exists (GetPersistentDatapathFullPath (subDirPath, name));
        }

        /// <summary>
        /// Load cached texture into RawImage
        /// </summary>
        public void LoadCachedTextureToRawImage (string subDirPath, string name, RawImage image)
        {
            StartCoroutine (LoadCachedTextureToRawImageCoroutine (subDirPath, name, image));
        }

        /// <summary>
        /// Save data to local
        /// </summary>
        public static bool SaveToLocal (string subDirpath, string name, byte[] bytes)
        {
            CreateDirIfNotExist (subDirpath);

            if (string.IsNullOrEmpty (name))
            {
                DebugLogger.Log ("file name cannot be empty");
                return false;
            }
            //DebugLogger.Log ("Saving to: " + GetPersistentDatapathFullPath (subDirpath, name));
            System.IO.File.WriteAllBytes (GetPersistentDatapathFullPath (subDirpath, name), bytes);
            return CheckCacheByName (subDirpath, name);
        }

        /// <summary>
        /// Get dir size
        /// </summary>
        public static long GetDirSize (string subDirpath)
        {
            long totalSize = 0;
            string fullPath = GetPersistentDatapathDirPath (subDirpath);
            if (System.IO.Directory.Exists (fullPath))
            {
                FileInfo[] files = new DirectoryInfo (fullPath).GetFiles ("*.*", SearchOption.AllDirectories);
                foreach (FileInfo f in files)
                    totalSize += f.Length;
            }

            return totalSize;
        }

        /// <summary>
        /// Clear dir 
        /// </summary>
        public static void ClearDir (string subDirpath)
        {
            string fullPath = GetPersistentDatapathDirPath (subDirpath);
            DirectoryInfo di = new DirectoryInfo (fullPath);
            foreach (FileInfo file in di.GetFiles ())
                file.Delete ();

            foreach (DirectoryInfo dir in di.GetDirectories ())
                dir.Delete (true);
        }

        /// <summary>
        /// Get dir size
        /// </summary>
        /// <returns></returns>
        public static long GetPersistentDataPathDirSize ()
        {
            return GetDirSize ("");
        }

        /// <summary>
        /// Clear dir
        /// </summary>
        public static void ClearPersistentDataPathDir ()
        {
            ClearDir ("");
        }



        private IEnumerator LoadCachedTextureToRawImageCoroutine (string subDirPath, string name, RawImage image)
        {
            //DebugLogger.Log ("LoadingCachedTexture: " + "file:///" + GetPersistentDatapathFullPath (subDirPath, name));
            if (CheckCacheByName (subDirPath, name))
            {
                var www = new WWW ("file:///" + GetPersistentDatapathFullPath (subDirPath, name));
                yield return www;
                while (!www.isDone)
                    yield return null;

                if (www.error != null)
                    Debug.LogError ("wwwError: " + www.error);

                //www.texture.Resize ((int) image.rectTransform.rect.size.x, (int) image.rectTransform.rect.size.y);
                //www.texture.Apply (false, false);

                //DebugLogger.Log ("Image size: " + image.rectTransform.rect.size.ToString ());
                //DebugLogger.Log ("WWWTexture size: " + www.texture.width + ", " + www.texture.height);

                image.texture = www.texture;

                www.Dispose ();
                Resources.UnloadUnusedAssets ();
                System.GC.Collect ();
            }
        }

        private static string GetPersistentDatapathFullPath (string subDirPath, string name)
        {
            return Path.Combine (Path.Combine (Application.persistentDataPath, subDirPath), name);
        }

        private static string GetPersistentDatapathDirPath (string subDirPath)
        {
            return Path.Combine (Application.persistentDataPath, subDirPath);
        }

        private void OnDestroy ()
        {
            if (instance == this)
                instance = null;
        }
    }
}