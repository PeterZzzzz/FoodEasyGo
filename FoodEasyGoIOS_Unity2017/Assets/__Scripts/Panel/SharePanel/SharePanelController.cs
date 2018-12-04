using UnityEngine;
using System.Collections;

using cn.sharesdk.unity3d;
using System.IO;
using UnityEngine.UI;

public class SharePanelController : BasePanelController {

    public static SharePanelController instance;
    public ShareSDK ssdk;
    public Transform weChatButton;
    public Transform googleButton;
    public Transform facebookButton;
    public Transform copyButton;
    public Transform cancelButton;
    public Image img;


    protected new void Awake () {

        if (instance != null) {
            Destroy (gameObject);
            return;
        }
        instance = this;

        base.Awake ();

        ssdk = GetComponent<ShareSDK> ();
        ssdk.shareHandler = ShareResultHandler;
    }

    protected new void Start () {
        transform.localScale = Vector3.zero;
    }

    public void ShareContent (string title, string content) {
       
        ShareContent sContent = new ShareContent();
        sContent.SetText(content);
        sContent.SetImageUrl("https://www.foodeasygo.com/Public/Home/images/WeChatShareLogo.png");
        sContent.SetTitle(title);
        sContent.SetUrl(Config.iOSDownloadAddress);
        sContent.SetShareType(ContentType.Webpage);
        ssdk.ShowPlatformList(null, sContent, 100, 100);
    }

    public void ShareMomentsContent(string content)
    {
        //FileStream fileStream = new FileStream(imgPath, FileMode.Open, FileAccess.Read);
        //fileStream.Seek(0, SeekOrigin.Begin);
        //byte[] bytes = new byte[fileStream.Length];
        //fileStream.Read(bytes, 0, (int)fileStream.Length);
        //fileStream.Close();
        //fileStream.Dispose();
        //fileStream = null;
        //int w = 600;
        //int h = 600;
        //Texture2D texture = new Texture2D(w, h);
        //texture.LoadImage(bytes);
        //Sprite sprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), new Vector2(0.5f, 0.5f));
        //img.sprite = sprite;
        //img.gameObject.SetActive(true);

        ShareContent sContent = new ShareContent();
        sContent.SetImageUrl("https://www.foodeasygo.com/Public/Home/images/WeChatShareLogo.png");
        sContent.SetTitle(content);
        //Alex暂时改为app下载链接
        //sContent.SetUrl("http://www.foodeasygo.com");
        sContent.SetUrl(Config.iOSDownloadAddress);
        sContent.SetShareType(ContentType.Webpage);
        ssdk.ShareContent(PlatformType.WeChatMoments, sContent);

    }

    public void ShareResultHandler (int reqID, ResponseState state, PlatformType type, Hashtable result) {
        if (state == ResponseState.Success) {
            MessagePanelController.instance.DisplayPanel ("Shared successfully");
        } else if (state == ResponseState.Fail) {
            MessagePanelController.instance.DisplayPanel ("fail! error code = " + result["error_code"] + "; error msg = " + result["error_msg"]);
        } else if (state == ResponseState.Cancel) {
            MessagePanelController.instance.DisplayPanel ("cancel");
        }
    }
}
