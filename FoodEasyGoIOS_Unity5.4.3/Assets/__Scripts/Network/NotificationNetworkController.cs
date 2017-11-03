using UnityEngine;
using System.Collections;

using LDFW.Network;

public class NotificationNetworkController : ServerCallController {

    public static NotificationNetworkController instance;
    public string notificationControllerURL;

    protected void Awake () {
        if (instance != null) {
            Destroy (this);
            return;
        }

        instance = this;
        notificationControllerURL = Config.serverAPIURL + "Notifications/";
    }

    // Get Notification
    LDFWWWWCallCoroutineWrapper getNotificationListCall = null;
    public void GetNotificationList (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (getNotificationListCall != null) {
            getNotificationListCall.Dispose ();
        }
        getNotificationListCall = CommonWWWCall (notificationControllerURL + "get_notification_list", new WWWForm (), success, failure);
    }

    // Delete Notification
    LDFWWWWCallCoroutineWrapper deleteNotificationCall = null;
    public void DeleteNotification (WWWForm form, LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (deleteNotificationCall != null) {
            deleteNotificationCall.Dispose ();
        }
        deleteNotificationCall = CommonWWWCall (notificationControllerURL + "delete_notification", form, success, failure);
    }

    // Delete all notifications
    LDFWWWWCallCoroutineWrapper deleteAllNotificationsCall = null;
    public void DeleteAllNotifications (LDFWServerResponseEvent success, LDFWServerResponseEvent failure) {
        if (deleteAllNotificationsCall != null) {
            deleteAllNotificationsCall.Dispose ();
        }
        deleteAllNotificationsCall = CommonWWWCall (notificationControllerURL + "delete_all_notifications", new WWWForm (), success, failure);
    }
}
