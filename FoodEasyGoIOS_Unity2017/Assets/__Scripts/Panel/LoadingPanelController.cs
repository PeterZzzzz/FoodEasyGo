using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

using LDFW.Tween;

public class LoadingPanelController : BasePanelController
{

    public static LoadingPanelController    instance;
    public Sprite[]                         gifList;
    public Image                            gifImage;
    public Image                            background;

    private float                           displayTime;
    private int                             currentGifIndex = 0;

    protected new void Awake ()
    {
        if (instance != null)
        {
            Destroy (this);
            return;
        }
        instance = this;

        base.Awake ();

        gifImage.sprite = gifList[currentGifIndex];
        (transform as RectTransform).sizeDelta = Vector2.zero;
    }

    public void Update ()
    {
        displayTime += Time.deltaTime;

        gifImage.sprite = gifList[currentGifIndex++];

        if (currentGifIndex >= gifList.Length)
            currentGifIndex = 0;
    }

    protected new void Start ()
    {
        HidePanelImmediately ();
    }

    #region Override
    public override void ResetPanel ()
    {
    }

    public override void ReloadPanel ()
    {
    }

    public override void OpenPanel ()
    {
        //DebugLogger.Log ("do nothing");
    }

    public override void ClosePanel ()
    {
        //DebugLogger.Log ("do nothing");
    }

    public override void DisplayPanel ()
    {
        displayTime = 0f;
        transform.localScale = Vector3.one;

        CancelInvoke ();
        Invoke ("HidePanelImmediately", 10f);
    }

    public override void HidePanelImmediately ()
    {
        CancelInvoke ();
        if (displayTime < 1f)
        {
            Invoke ("HidePanelImmediately", (1f - displayTime));
            return;
        }
        transform.localScale = Vector3.zero;
    }
    #endregion

    public void OnLevelWasLoaded ()
    {
        if (SceneManager.GetActiveScene ().buildIndex == 0)
            background.color = new Color (0, 0, 0, 0);
        else
            background.color = new Color (0, 0, 0, 0.8f);
    }
}
