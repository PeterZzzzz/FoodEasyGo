using UnityEngine;
using UnityEngine.UI;
using System.Xml;
using System.Collections;

using LDFW;
using LDFW.Network;

using Debug = UnityEngine.Debug;

public class LeaveMessagePanelController : BasePanelController {

    public static LeaveMessagePanelController           instance;
    public InputFieldController nameInputField;
    public InputFieldController emailInputField;
    public InputFieldController contactInputField;
    public InputFieldController commentInputField;
    public ButtonController submitButton;
    public RectTransform panelRect;


    new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();

        headerTitle.ResetUI ("留言", "Leave a comment");

        if (Screen.width == 1125 || Screen.width == 1242 || Screen.width == 828)
        {
            // iPhoneX
            panelRect.offsetMin = new Vector2(panelRect.offsetMin.x, panelRect.offsetMin.y + 20);

            Debug.Log("iPhoneX适配17");
        }
    }


    #region Overrides
    public override void ResetPanel () {
        nameInputField.text = UserDataController.instance.firstName + " " + UserDataController.instance.lastName;
        emailInputField.text = UserDataController.instance.email;
        contactInputField.text = UserDataController.instance.phone;
        commentInputField.text = "";
    }
    public override void ReloadPanel () {
    }
    #endregion


    public void CheckForInputs () {
        if (string.IsNullOrEmpty (nameInputField.text) ||
            string.IsNullOrEmpty (emailInputField.text) ||
            string.IsNullOrEmpty (commentInputField.text)) {
            submitButton.interactable = false;
        } else {
            submitButton.interactable = true;
        }
    }

    public void OnSubmitButtonClicked () {
        WWWForm form = new WWWForm ();
        form.AddField ("first_name", nameInputField.text);
        form.AddField ("last_name", "_");
        form.AddField ("reply_email", emailInputField.text);
        form.AddField ("reply_phone", contactInputField.text);
        form.AddField ("message", commentInputField.text);

        UserDataNetworkController.instance.LeaveMessage (form,
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                MessagePanelController.instance.DisplayPanel ("Message has been sent");
                PanelListController.instance.RemovePanel ();
            }), null);
    }
}
