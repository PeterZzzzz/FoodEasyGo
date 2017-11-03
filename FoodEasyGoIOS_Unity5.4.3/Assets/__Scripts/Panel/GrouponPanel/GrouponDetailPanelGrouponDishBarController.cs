using UnityEngine;
using UnityEngine.UI;
using System.Collections;

using LDFW;
using LDFW.UI;
using LDFW.Network;

public class GrouponDetailPanelGrouponDishBarController : MonoBehaviour {

    public string dishID;

    public RawImage image;
    public TextController title;
    public TextController price;
    public TextController quantity;

    public void ReloadData (JSONObject data) {

    }
}
