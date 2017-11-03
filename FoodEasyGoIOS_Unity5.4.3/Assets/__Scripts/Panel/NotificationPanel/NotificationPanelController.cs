using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.UI;
using LDFW.Network;

public class NotificationPanelController : BasePanelController {

    public static NotificationPanelController       instance;
    public ScrollRect                               scrollRect;
    public NotificationPanelEndlessScrollController endlessScrollController;

    protected new void Awake () {
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
        endlessScrollController.LoadData ();
    }
    
    #endregion


    public void DeleteNotification (string id) {
        WWWForm form = new WWWForm ();
        form.AddField ("notification_id", id);

        NotificationNetworkController.instance.DeleteNotification (form,
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                endlessScrollController.LoadData ();
            }),
            null);
    }

    public void DeleteAllNotifications () {
        NotificationNetworkController.instance.DeleteAllNotifications (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                endlessScrollController.LoadData ();
            }),
            null);
    }
}
