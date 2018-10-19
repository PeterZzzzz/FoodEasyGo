using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class FooterPanelController : MonoBehaviour {

    public static FooterPanelController instance;

    public Button homeButton;
    public Sprite homeIconNormal;
    public Sprite homeIconSelected;
    private Image homeIcon;
    private Text homeText;

    public Button cartButton;
    public Sprite cartIconNormal;
    public Sprite cartIconSelected;
    private Image cartIcon;
    private Text cartText;

    public Button orderButton;
    public Sprite orderIconNormal;
    public Sprite orderIconSelected;
    private Image orderIcon;
    private Text orderText;

    public Button mineButton;
    public Sprite mineIconNormal;
    public Sprite mineIconSelected;
    private Image mineIcon;
    private Text mineText;

    public RectTransform tabbarRect;
    public RectTransform homeBtnTextRect;
    public RectTransform cartBtnTextRect;
    public RectTransform orderBtnTextRect;
    public RectTransform mineBtnTextRect;

    private Color turnOffColor = new Color (0.37f, 0.37f, 0.37f, 1f);

    void Awake () {
        if (instance != null) {
            Destroy (instance.gameObject);
        }
        instance = this;

        homeIcon = homeButton.transform.Find ("Icon").GetComponent<Image> ();
        homeText = homeButton.transform.Find ("Text").GetComponent<Text> ();

        cartIcon = cartButton.transform.Find ("Icon").GetComponent<Image> ();
        cartText = cartButton.transform.Find ("Text").GetComponent<Text> ();

        orderIcon = orderButton.transform.Find ("Icon").GetComponent<Image> ();
        orderText = orderButton.transform.Find ("Text").GetComponent<Text> ();

        mineIcon = mineButton.transform.Find ("Icon").GetComponent<Image> ();
        mineText = mineButton.transform.Find ("Text").GetComponent<Text> ();

    }

    void Start () {
        TurnOffAllButtons ();
        homeIcon.sprite = homeIconSelected;
        homeText.color = Extensions.MainColor ();


        if (Screen.width == 1125 || Screen.width == 1242 || Screen.width == 828)
        {
            // iPhoneX
            tabbarRect.sizeDelta = new Vector2(0, 70);

            Vector2 pos = homeBtnTextRect.position;
            pos.y += 20;
            homeBtnTextRect.position = pos;
            cartBtnTextRect.position = pos;
            orderBtnTextRect.position = pos;
            mineBtnTextRect.position = pos;

            Debug.Log("iPhoneX适配1");
        }

    }


    #region OnButtonClickedCallback
    public void OnHomeButtonClicked () {
        TurnOffAllButtons ();
        homeIcon.sprite = homeIconSelected;
        homeText.color = Extensions.MainColor ();
        SwitchCartNotification (CartController.instance.cart._keys.Count);

        PanelListController.instance.SetHomePanelAsBasePanel ();
    }

    public void OnCartButtonClicked () {
        TurnOffAllButtons ();
        cartIcon.sprite = cartIconSelected;
        cartText.color = Extensions.MainColor ();
        SwitchCartNotification (CartController.instance.cart._keys.Count);

        PanelListController.instance.SetCartPanelAsBasePanel ();
    }

    public void OnOrdersButtonClicked () {
        TurnOffAllButtons ();
        orderIcon.sprite = orderIconSelected;
        orderText.color = Extensions.MainColor ();
        SwitchCartNotification (CartController.instance.cart._keys.Count);

        PanelListController.instance.SetOrderPanelAsBasePanel ();
    }

    public void OnMineButtonClicked () {
        TurnOffAllButtons ();
        mineIcon.sprite = mineIconSelected;
        mineText.color = Extensions.MainColor ();
        SwitchCartNotification (CartController.instance.cart._keys.Count);

        PanelListController.instance.SetUserPanelAsBasePanel ();
    }
    #endregion


    #region NotificationSwitches
    public void SwitchHomeNotification (bool state) {

    }

    public void SwitchCartNotification (int num) {
        if (cartButton.transform.Find ("Icon/Notification") != null) {
            if (num > 0) {
                cartButton.transform.Find ("Icon/Notification").gameObject.SetActive (true);
                cartButton.transform.Find ("Icon/Notification/Text").GetComponent<Text> ().text = num.ToString ();
            } else {
                cartButton.transform.Find ("Icon/Notification").gameObject.SetActive (false);
                cartButton.transform.Find ("Icon/Notification/Text").GetComponent<Text> ().text = num.ToString ();
            }
        }
    }

    public void SwitchOrderNotification (bool state) {

    }

    public void SwitchMineNotification (bool state) {
        if (mineButton.transform.Find ("Icon/Notification") != null) {
            mineButton.transform.Find ("Icon/Notification").gameObject.SetActive (state);
        }
    }
    #endregion


    #region Others
    private void TurnOffAllButtons () {
        homeIcon.sprite = homeIconNormal;
        homeText.color = turnOffColor;
        SwitchHomeNotification (false);

        cartIcon.sprite = cartIconNormal;
        cartText.color = turnOffColor;
        SwitchCartNotification (0);

        orderIcon.sprite = orderIconNormal;
        orderText.color = turnOffColor;
        SwitchOrderNotification (false);

        mineIcon.sprite = mineIconNormal;
        mineText.color = turnOffColor;
        SwitchMineNotification (false);
    }
    #endregion
}
