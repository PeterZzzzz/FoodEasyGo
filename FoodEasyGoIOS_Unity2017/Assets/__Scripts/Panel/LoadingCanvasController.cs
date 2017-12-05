using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.FileIO;
using LDFW.Network;

public class LoadingCanvasController : MonoBehaviour {

    public Transform mainCanvas;
    public RawImage guidePanel;
    public TextController countDownText;
    private float startTime = 0f;

    private string subDirPath = "guide";
    private string guideImageExtension = "jpg";

    void Awake () {
        DontDestroyOnLoad (gameObject);
        guidePanel.gameObject.SetActive (false);
    }

    IEnumerator Start () {
        yield return null;
        yield return new WaitForSeconds (1f);
        guidePanel.gameObject.SetActive (true);
        StartCoroutine (DisplayGuideImagesFromCache ());
        DownLoadGuideImages ();
    }

    private int attempts = 0;
    private void DownLoadGuideImages () {
        InfoNetworkController.instance.GetImages (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                StartCoroutine (DownLoadGuideImagesCoroutine (
                    data.GetField ("guide")[0].GetField ("img_link").str,
                    data.GetField ("guide")[1].GetField ("img_link").str,
                    data.GetField ("guide")[2].GetField ("img_link").str));
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                attempts++;
                if (attempts <= 3) {
                    DownLoadGuideImages ();
                }
            }));
    }

    private IEnumerator DownLoadGuideImagesCoroutine (string image0URL, string image1URL, string image2URL) {
        float startTime = Time.realtimeSinceStartup;
        PersistentDataControl.CreateDirIfNotExist (subDirPath);

        WWW www = new WWW (Config.serverDomain + image0URL.Replace ("\\/", "/").Substring (1));
        yield return www;
        if (www.error == null) {
            PersistentDataControl.SaveToLocal (subDirPath, "g0", www.bytes);
        }

        www = new WWW (Config.serverDomain + image1URL.Replace ("\\/", "/").Substring (1));
        yield return www;
        if (www.error == null) {
            PersistentDataControl.SaveToLocal (subDirPath, "g1", www.bytes);
        }

        www = new WWW (Config.serverDomain + image2URL.Replace ("\\/", "/").Substring (1));
        yield return www;
        if (www.error == null) {
            PersistentDataControl.SaveToLocal (subDirPath, "g2", www.bytes);
        }

        yield return new WaitForSeconds (5f);
        Destroy (this.gameObject);
    }

    private IEnumerator DisplayGuideImagesFromCache () {
        if (PersistentDataControl.CheckCacheByName (subDirPath, "g0") &&
            PersistentDataControl.CheckCacheByName (subDirPath, "g1") &&
            PersistentDataControl.CheckCacheByName (subDirPath, "g2")) {

            float startTime = Time.realtimeSinceStartup;
            countDownText.ResetUI ("跳过 (3)", "Skip (3)");
            PersistentDataControl.instance.LoadCachedTextureToRawImage (subDirPath, "g0", guidePanel);

            yield return new WaitForSeconds (1.5f);
            countDownText.ResetUI ("跳过 (2)", "Skip (2)");
            PersistentDataControl.instance.LoadCachedTextureToRawImage (subDirPath, "g1", guidePanel);

            yield return new WaitForSeconds (1.5f);
            countDownText.ResetUI ("跳过 (1)", "Skip (1)");
            PersistentDataControl.instance.LoadCachedTextureToRawImage (subDirPath, "g2", guidePanel);

            yield return new WaitForSeconds (1.5f);
        }

        LoadNextScene ();
    }

    public void LoadNextScene () {
        StopAllCoroutines ();
        SceneController.LoadLogInScene ();
    }
}
