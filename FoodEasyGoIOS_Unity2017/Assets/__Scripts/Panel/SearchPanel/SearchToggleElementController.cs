using System.Collections;
using System.Collections.Generic;
using LDFW.UI;
using UnityEngine;

public class SearchToggleElementController : LDFWToggleElementController
{
    public Font PingFangSCRegular;
    public Font PingFangSCBold;
    public GameObject underLine;

    public override void SelectToggleElement()
    {
        base.SelectToggleElement();
        transform.Find("Text").GetComponent<TextController>().color = Extensions.MainColor();
        transform.Find("Text").GetComponent<TextController>().fontSize = 17;
        transform.Find("Text").GetComponent<TextController>().font = PingFangSCBold;
        underLine.SetActive(true);
    }

    public override void DeselectToggleElement()
    {
        base.DeselectToggleElement();
        transform.Find("Text").GetComponent<TextController>().color = new Color(51f / 255f, 51f / 255f, 51f / 255f, 1f);
        transform.Find("Text").GetComponent<TextController>().fontSize = 15;
        transform.Find("Text").GetComponent<TextController>().font = PingFangSCRegular;
        underLine.SetActive(false);
    }
}
