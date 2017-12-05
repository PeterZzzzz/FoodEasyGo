using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

using LDFW.Network;
using LDFW.FileIO;

public class ImageDownloader2 : LDFWImageDownloader {

    //string restaurantID;
    //string restaurantDishID;
    string dirPath = "restaurant";

    /// <summary>
    /// Download image
    /// </summary>
    /// <param name="imagePath"></param>
    /// <param name="cacheDirPath"></param>
    /// <param name="img"></param>
    /// <param name="size">1=small 2=mid 3=big >=4=huge</param>
    /// <param name="callbackEventSuccess"></param>
    /// <param name="callbackEventFailure"></param>
    /// <param name="saveCache"></param>
    public ImageDownloader2 (string imagePath, string cacheDirPath, RawImage img, int size, UnityAction callbackEventSuccess, UnityAction callbackEventFailure, bool saveCache = true) {

        string sizeExtension = "";
        if (size == 0) {
            sizeExtension = "";
        } else if (size == 1) {
            sizeExtension = "small";
        } else if (size == 2) {
            sizeExtension = "mid";
        } else if (size == 3) {
            sizeExtension = "big";
        } else {
            sizeExtension = "huge";
        }

        successCallback = new UnityEvent ();
        failureCallback = new UnityEvent ();

        dirPath = cacheDirPath;

        string filename = sizeExtension + "." + System.IO.Path.GetFileName (imagePath);
        PersistentDataControl.CreateDirIfNotExist (dirPath);

        if (saveCache && PersistentDataControl.CheckCacheByName (dirPath, filename)) {
            PersistentDataControl.instance.LoadCachedTextureToRawImage (dirPath, filename, img);
            if (callbackEventSuccess != null)
            {
                successCallback.AddListener (callbackEventSuccess);
                successCallback.Invoke ();
            }
        } else {

            string url = Config.serverAPIURL + "Image/get_image_with_custom_size_small";
            if (size == 0) {
                url = Config.serverAPIURL + "Image/get_image";
            } else if (size == 1) {
                url = Config.serverAPIURL + "Image/get_image_with_custom_size_small";
            } else if (size == 2) {
                url = Config.serverAPIURL + "Image/get_image_with_custom_size_mid";
            } else if (size == 3) {
                url = Config.serverAPIURL + "Image/get_image_with_custom_size_big";
            } else {
                url = Config.serverAPIURL + "Image/get_image_with_custom_size_huge";
            }
            WWWForm form = new WWWForm ();
            form.AddField ("access_token", UserDataController.instance.accessToken);
            form.AddField ("user_id", UserDataController.instance.userID);
            form.AddField ("path", imagePath);
            form.AddField ("width", img.rectTransform.rect.width.ToString ());
            form.AddField ("height", img.rectTransform.rect.height.ToString ());

            successCallback.AddListener (() => {
                PersistentDataControl.SaveToLocal (dirPath, filename, www.bytes);
            });

            //Debug.Log ("url = " + url);
            base.LDFWImageDownloader2 (url, form, img, callbackEventSuccess, callbackEventFailure);
        }
    }

}