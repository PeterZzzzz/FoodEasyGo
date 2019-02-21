using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.Network;



public class PersonalDataPanelController : BasePanelController {

    public static PersonalDataPanelController instance;

    public Transform sexPanel;

    public InputFieldController lastName;
    public InputFieldController firstname;
    public TextController sexText;
    public TextController email;
    public InputFieldController contactNumber;



    // private and temp variables
    private string sexStringZH;
    private string sexStringEN;


    new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();
    }




    #region Overrides

    public override void ResetPanel () {
    }

    public override void ReloadPanel () {
        SwitchSexPanel (0);
        lastName.text = UserDataController.instance.lastName;
        firstname.text = UserDataController.instance.firstName;
        sexText.ResetUI (UserDataController.instance.sex);
        contactNumber.text = UserDataController.instance.phone;
        email.ResetUI (UserDataController.instance.email);
    }


    #endregion


    #region Sex
    public void OnUnspecifiedButtonClicked () {
        sexStringZH = "未指定";
        sexStringEN = "Unknown";
        sexText.ResetUI (sexStringZH, sexStringEN);
    }

    public void OnMaleButtonClicked () {
        sexStringZH = "男";
        sexStringEN = "M";
        sexText.ResetUI (sexStringZH, sexStringEN);
    }

    public void OnFemaleButtonClicked () {
        sexStringZH = "女";
        sexStringEN = "F";
        sexText.ResetUI (sexStringZH, sexStringEN);
    }

    public void OnCancelSexButtonClicked () {
        SwitchSexPanel (0);
    }

    public void OnConfirmSexButtonClicked () {
        SwitchSexPanel (0);
    }

    public void SwitchSexPanel (int scale) {
        sexPanel.localScale = Vector3.one * scale;
    }
    #endregion

    #region Other
    public void OnSaveButtonClicked () {

        if (string.IsNullOrEmpty(firstname.text) || string.IsNullOrEmpty(lastName.text) || string.IsNullOrEmpty(sexText.text) || string.IsNullOrEmpty(contactNumber.text)) 
        {
            MessagePanelController.instance.DisplayPanel("Please enter all info");
            return;
        }
        WWWForm form = new WWWForm ();
        form.AddField ("first_name", firstname.text);
        form.AddField ("last_name", lastName.text);
        form.AddField ("sex", sexText.textEN);
        form.AddField ("phone", contactNumber.text);

        LoadingPanelController.instance.DisplayPanel ();
        UserDataNetworkController.instance.UpdatePersonalData (form,
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                AccountAccessNetworkController.instance.BackgroundUserLogin ();
                UserPanelController.instance.userName.text = firstname.text;
                LoadingPanelController.instance.HidePanelImmediately ();
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                MessagePanelController.instance.DisplayPanel (m);
                LoadingPanelController.instance.HidePanelImmediately ();
            }));
    }

    public void OnChangePasswordButtonClicked () {
        ChangePasswordPanel.instance.OpenPanel ();
    }

    public void OnSexButtonClicked () {
        SwitchSexPanel (1);
    }
    #endregion;
}
