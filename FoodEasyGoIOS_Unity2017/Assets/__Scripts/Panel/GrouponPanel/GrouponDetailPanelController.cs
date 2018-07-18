using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.UI;
using LDFW.Network;

public class GrouponDetailPanelController : BasePanelController {

    public static GrouponDetailPanelController          instance;

    public string                                       grouponID;
    public JSONObject                                   grouponData;

    // Transform
    public Transform                                    regionPanel;
    public ScrollRect                                   dishScrollRect;
    public Transform                                    dishScrollRectContent;

    // Prefab
    public GameObject                                   grouponDishPrefab;

    protected new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();

        HideRegionPanel ();
    }

    #region Overrides
    public override void ReloadPanel () {
        
        ClosePanel ();
        /*

        WWWForm form = new WWWForm ();
        form.AddField ("groupon_id", grouponID);

        GrouponNetworkController.instance.GetGrouponDetail ( 
            form,
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadGrouponData (data);
            }),
            new LDFWServerResponseEvent ((JSONObject data, string m) => {

            }));
            */
    }

    public override void ResetPanel () {
        //dishScrollRectContent.DestroyAllChildren ();

    }
    #endregion


    #region LoadData
    private IEnumerator LoadGrouponData (JSONObject data) {
        yield return null;
    }


    #endregion



    #region Other
    public void DisplayRegionPanel () {
        regionPanel.localScale = Vector3.one;
    }

    public void HideRegionPanel () {
        regionPanel.localScale = Vector3.zero;
    }
    #endregion
}
