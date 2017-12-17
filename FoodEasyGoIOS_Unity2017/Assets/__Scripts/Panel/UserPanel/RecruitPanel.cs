using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.Network;
using Debug = UnityEngine.Debug;

public class RecruitPanel : BasePanelController {

    public static RecruitPanel instance;
    public GameObject jobpositionBar;
    public ScrollRect defaultScrollRect;

    new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();

        headerTitle.ResetUI ("职位招聘", "Recruit");
    }


    public override void ResetPanel () {
        defaultScrollRect.content.DestroyAllChildrenAfterSiblingIndex (1);
    }
    public override void ReloadPanel () {

        LayoutElement imageLayoutElement = defaultScrollRect.content.Find ("Image").GetComponent<LayoutElement>();
        imageLayoutElement.preferredHeight = 518f / 735f * (imageLayoutElement.transform as RectTransform).rect.size.x;

        LoadingPanelController.instance.DisplayPanel ();
        defaultScrollRect.content.Find ("Title/Text").GetComponent<TextController> ().ResetUI (
            "发送邮件至: info@foodeasygo.com\n" +
            "邮件标题为: \"应聘xx(岗位名称) - 姓名\"\n" +
            "FoodEasyGo 期待您的加入！",

            "Send your email to: info@foodeasygo.com\n" +
            "Title should be: \"Applying for xx position - your name\"\n" +
            "FoodEasyGo is looking forward to hearing from you");

        InfoNetworkController.instance.GetRecruit (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                StartCoroutine (LoadRecruitData (data));
            }), 
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
            }));
    }

    private IEnumerator LoadRecruitData (JSONObject data) {
        if (data != null && data.Count > 0) {
            for (int i=0; data[i] != null; i++) {
                Transform positionBar = Instantiate (jobpositionBar).transform;
                positionBar.SetParent (defaultScrollRect.content);
                positionBar.localScale = Vector3.one;

                positionBar.Find ("Title").GetComponent<TextController> ().ResetUI (
                    data[i].GetField ("job_title_zh").str, data[i].GetField ("job_title_en").str);
                positionBar.Find ("Description").GetComponent<TextController> ().ResetUI (
                    "职责：\n" + data[i].GetField ("operating_duty_zh").str.Replace (",", ", ").Replace ("，", ", ").Replace ("\\r\\n", "\n") + "\n\n" +
                    "需求：\n" + data[i].GetField ("job_requirements_zh").str.Replace (",", ", ").Replace ("，", ", ").Replace ("\\r\\n", "\n"),
                    "Duty: \n" + data[i].GetField ("operating_duty_en").str.Replace (",", ", ").Replace ("，", ", ").Replace ("\\r\\n", "\n") + "\n\n" +
                    "Requirements：\n" + data[i].GetField ("job_requirements_en").str.Replace (",", ", ").Replace ("，", ", ").Replace ("\\r\\n", "\n"));
                
                yield return null;

                positionBar.GetComponent<LayoutElement> ().preferredHeight =
                    positionBar.Find ("Title").GetComponent<RectTransform> ().sizeDelta.y +
                    positionBar.Find ("Description").GetComponent<RectTransform> ().sizeDelta.y + 100;
            }
        }
    }
}
