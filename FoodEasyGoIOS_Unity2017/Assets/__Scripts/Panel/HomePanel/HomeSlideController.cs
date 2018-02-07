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
    private float time = 0.0f;
    private float interval = Config.slideShowTimeInterval;
    private int indexOfImage = 0;

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
                Application.OpenURL(externalURL);
            });
        image.gameObject.AddComponent<MobileInputController>();
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
        }
        imageParent.GetChild(0).localPosition = Vector3.zero;
        yield return new WaitForSeconds(Config.slideShowTimeInterval);

       

    }

    private void Update()
    {
        if(imageParent.childCount > 0)
        {
            time += Time.deltaTime;
            //Debug.Log(indexOfImage);
            if (MobileInputController.instance != null)
            {
                if (MobileInputController.instance.SwipeLeft)
                {
                    Debug.Log("向左滑");
                    LDFWTweenPosition tp;
                    tp = imageParent.GetChild(indexOfImage).GetComponent<LDFWTweenPosition>();
                    tp.Init(Vector3.zero, new Vector3(-MainCanvasController.instance.canvasSize.x, 0f, 0f), 0.5f, 0f);
                    tp.Play();

                    if (indexOfImage < slideNumber - 1)
                    {
                        tp = imageParent.GetChild(indexOfImage + 1).GetComponent<LDFWTweenPosition>();
                    }
                    else
                    {
                        tp = imageParent.GetChild(0).GetComponent<LDFWTweenPosition>();
                    }
                    tp.Init(new Vector3(MainCanvasController.instance.canvasSize.x, 0f, 0f), Vector3.zero, 0.5f, 0f);
                    tp.Play();
                    if (indexOfImage == slideNumber - 1)
                    {
                        indexOfImage -= slideNumber;
                    }
                    indexOfImage += 1;
                    time = 0;

                }

                if (MobileInputController.instance.SwipeRight)
                {
                    Debug.Log("向右滑");
                    LDFWTweenPosition tp;
                    tp = imageParent.GetChild(indexOfImage).GetComponent<LDFWTweenPosition>();
                    tp.Init(Vector3.zero, new Vector3(MainCanvasController.instance.canvasSize.x, 0f, 0f), 0.5f, 0f);
                    tp.Play();

                    if (indexOfImage > 0)
                    {
                        tp = imageParent.GetChild(indexOfImage - 1).GetComponent<LDFWTweenPosition>();
                    }
                    else
                    {
                        tp = imageParent.GetChild(slideNumber - 1).GetComponent<LDFWTweenPosition>();
                    }
                    tp.Init(new Vector3(-MainCanvasController.instance.canvasSize.x, 0f, 0f), Vector3.zero, 0.5f, 0f);
                    tp.Play();
                    if (indexOfImage == 0)
                    {
                        indexOfImage = slideNumber;
                    }
                    indexOfImage -= 1;
                    time = 0;
                }
            }

            if (time >= interval)
            {
                time -= interval;
                //Debug.Log("每三秒执行一次");

                LDFWTweenPosition tp;
                if (indexOfImage < slideNumber)
                {
                    tp = imageParent.GetChild(indexOfImage).GetComponent<LDFWTweenPosition>();
                    tp.Init(Vector3.zero, new Vector3(-MainCanvasController.instance.canvasSize.x, 0f, 0f), 0.5f, 0f);
                    tp.Play();

                    if (indexOfImage < slideNumber - 1)
                    {
                        tp = imageParent.GetChild(indexOfImage + 1).GetComponent<LDFWTweenPosition>();
                    }
                    else
                    {
                        tp = imageParent.GetChild(0).GetComponent<LDFWTweenPosition>();
                    }
                    tp.Init(new Vector3(MainCanvasController.instance.canvasSize.x, 0f, 0f), Vector3.zero, 0.5f, 0f);
                    tp.Play();

                    if (indexOfImage == slideNumber - 1)
                    {
                        indexOfImage -= slideNumber;
                    }

                    indexOfImage += 1;

                }

            }   
        }
    }
   
}
