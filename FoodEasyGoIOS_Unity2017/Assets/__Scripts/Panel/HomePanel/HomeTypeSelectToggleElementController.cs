using System.Collections;
using System.Collections.Generic;
using LDFW.UI;
using UnityEngine;
using UnityEngine.UI;

public class HomeTypeSelectToggleElementController : LDFWToggleElementController{

    public Font PingFangSCRegular;
    public Font PingFangSCBold;

    public override void SelectToggleElement()
    {
        base.SelectToggleElement();
        transform.Find("Text").GetComponent<TextController>().color = Extensions.MainColor();
        transform.Find("Text").GetComponent<TextController>().fontSize = 19;
        transform.Find("Text").GetComponent<TextController>().font = PingFangSCBold;

    }

    public override void DeselectToggleElement()
    {
        base.DeselectToggleElement();
        transform.Find("Text").GetComponent<TextController>().color = new Color(51f / 255f, 51f / 255f, 51f / 255f, 1f);
        transform.Find("Text").GetComponent<TextController>().fontSize = 16;
        transform.Find("Text").GetComponent<TextController>().font = PingFangSCRegular;


    }
}
