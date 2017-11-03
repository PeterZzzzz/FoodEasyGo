using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class NotificationPanelNotificationBarController : MonoBehaviour {


    private Text dateText;
    private TextController titleText;

    void Awake () {
        dateText = transform.Find ("DateBar/Text").GetComponent<Text> ();
        titleText = transform.Find ("Title").GetComponent<TextController> ();
    }


    public void Reset (JSONObject data) {
        if (gameObject.activeSelf == false && data != null) {
            gameObject.SetActive (true);
            StartCoroutine (ResetCoroutine (data));
        } else if (data == null) {
            dateText.text = "";
            titleText.ResetUI ("");
        }
    }

    private IEnumerator ResetCoroutine (JSONObject data) {
        if (data != null) {
            dateText.text = data.GetField ("create_time").str;
            titleText.ResetUI (data.GetField ("message_title_zh").str, data.GetField ("message_title_en").str);
            yield return null;

            GetComponent<LayoutElement> ().preferredHeight =
                titleText.rectTransform.sizeDelta.y + 150;
        } else {
            gameObject.SetActive (false);
        }
    }
    
}
