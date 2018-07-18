using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

using LDFW.UI;

public class CartPanelHeader2ToggleElementController : LDFWToggleElementController
{

    public Image line;
    public TextController text;

    public override void SelectToggleElement()
    {
        base.SelectToggleElement();
        line.color = Extensions.AppColor2();
        text.color = Extensions.AppColor2();
    }

    public override void DeselectToggleElement()
    {
        base.DeselectToggleElement();
        line.color = Color.white;
        text.color = new Color(0.5f, 0.5f, 0.5f, 1f);
    }

    public override void OnPointerClick(PointerEventData eventData)
    {
        base.OnPointerClick(eventData);
        CartPanelController.instance.ReloadPanel();
    }
}
