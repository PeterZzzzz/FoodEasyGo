using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

using LDFW;
using LDFW.UI;
using LDFW.Network;


public class GrouponPanelController : BasePanelController {

    public static GrouponPanelController            instance;
    public ScrollRect                               scrollRect;
    public Transform                                scrollRectContent;
    public GameObject                               grouponBarPrefab;


    // Data
    private Dictionary<string, JSONObject>          restaurantData;

    protected new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();
    }

    #region Overrides
    public override void ReloadPanel () {
        DebugLogger.Log ("ReloadPanel is called");
        LoadingPanelController.instance.DisplayPanel ();
        GrouponNetworkController.instance.GetGrouponList (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                StartCoroutine (LoadGrouponListData (data));
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
            }));
    }

    public override void ResetPanel () {
        scrollRectContent.DestroyAllChildren ();
    }


    #endregion


    #region DataLoading
    private IEnumerator LoadGrouponListData (JSONObject data) {
        for (var i=0; data[i] != null; i++) {
            GrouponPanelGrouponBarController barController = (Instantiate (grouponBarPrefab).transform).GetComponent<GrouponPanelGrouponBarController>();
            barController.transform.SetParent (scrollRectContent);
            barController.transform.localScale = Vector3.one;

            LayoutElement layoutElement = barController.GetComponent<LayoutElement>();
            layoutElement.preferredWidth = (scrollRectContent as RectTransform).sizeDelta.x;
            yield return null;

            barController.ReloadData (data[i]);
            
        }
    }

    #endregion
}
