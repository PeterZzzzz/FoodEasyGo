using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.IO;

using LDFW;
using LDFW.Tween;
using LDFW.Network;


public class HomeSlideController : BaseUIController
{
    

    public int slideNumber;

    private RectTransform imageParent;
    private IEnumerator startSlideShowIEnumerator = null;

    protected new void Awake()
    {
        base.Awake();
        imageParent = mRectTransform.Find("ImageParent") as RectTransform;
        
        slideNumber = mRectTransform.childCount;
        
    }

    public void AddImage(RectTransform image, string externalURL)
    {
        image.SetParent(imageParent);
        image.localScale = Vector3.one;
        image.sizeDelta = new Vector2(MainCanvasController.instance.canvasSize.x, GetComponent<LayoutElement>().preferredHeight);
        image.gameObject.AddComponent<Button>().onClick.AddListener(() =>
            {
                DebugLogger.Log ("Open url: " + externalURL);
                if (!string.IsNullOrEmpty(externalURL)) {
                    Application.OpenURL(externalURL);
                }
            });
    }

    public void StartSlideShow(JSONObject data)
    {
        if (startSlideShowIEnumerator != null)
        {
            StopCoroutine(startSlideShowIEnumerator);
        }

        startSlideShowIEnumerator = StartSlideShowCoroutine(data);
        StartCoroutine(startSlideShowIEnumerator);
    }

    private IEnumerator StartSlideShowCoroutine(JSONObject data)
    {
        while (imageParent.childCount > 0)
        {
            Transform temp = imageParent.GetChild(0);
            temp.SetParent(null);
            Destroy(temp.gameObject);
        }

        for (int i = 0; data[i] != null; i++)
        {
            Transform slide = (Instantiate(Resources.Load("HomePanel/SlideImage")) as GameObject).transform;
            LDFWImageDownloadController.instance.AddToCacheList(
                new ImageDownloader2(data[i].GetField("img_link").str.Replace("\\/", "/"), "general", slide.GetComponent<RawImage>(), 4, null, null));
            AddImage(slide as RectTransform, data[i].GetField("external_link").str.Replace("\\/", "/"));
        }
        
        yield return null;

        slideNumber = imageParent.childCount;

        for (int i = 0; i < slideNumber; i++)
        {
            imageParent.GetChild(i).localPosition = new Vector3(MainCanvasController.instance.canvasSize.x, 0f, 0f);
            //(imageParent.GetChild (i) as RectTransform).sizeDelta = slideSize;
            //imageParent.GetChild (i).GetComponent<RawImage> ().texture = IOManager.LoadImage (Path.Combine (PersistentDataPathConfig.slideImageDir, i.ToString () + ".png"));

            //           DebugLogger.Log ("SizeDelta = " + (imageParent.GetChild (i) as RectTransform).sizeDelta.ToString ());
        }
        imageParent.GetChild(0).localPosition = Vector3.zero;
        yield return new WaitForSeconds(Config.slideShowTimeInterval);

        LDFWTweenPosition tp;
        for (int i = 0; i < imageParent.childCount; i++)
        {
            tp = imageParent.GetChild(i).GetComponent<LDFWTweenPosition>();
            tp.Init(Vector3.zero, new Vector3(-MainCanvasController.instance.canvasSize.x, 0f, 0f), 0.5f, 0f);
            tp.Play();

            if (i < slideNumber - 1)
            {
                tp = imageParent.GetChild(i + 1).GetComponent<LDFWTweenPosition>();
            }
            else
            {
                tp = imageParent.GetChild(0).GetComponent<LDFWTweenPosition>();
            }
            tp.Init(new Vector3(MainCanvasController.instance.canvasSize.x, 0f, 0f), Vector3.zero, 0.5f, 0f);
            tp.Play();

            if (i == slideNumber - 1)
            {
                i -= slideNumber;
            }
            
            yield return new WaitForSeconds(Config.slideShowTimeInterval);
        }
    }

}
