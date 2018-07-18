using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ChangeLocationPanelToggleElement : MonoBehaviour {

    public string id;
    public string zip;
    public string nameZH;
    public string nameEN;

    public Image background;
    public TextController text;
    public Color selectedColor;
    public Color deselectedColor;

    void Awake () {
        background = transform.GetChild (0).GetComponent<Image> ();
        text = transform.GetChild (0).GetChild (0).GetComponent<TextController> ();
    }

    void Start () {
        transform.parent.GetComponent<ChangeLocationPanelToggleParent> ().DeselectToggleElement (id);
    }
	
    public void SelectElement () {
        background.color = selectedColor;
        text.color = selectedColor;
    }

    public void DeselectElement () {
        background.color = deselectedColor;
        text.color = deselectedColor;
    }

    public void OnButtonClicked () {
        transform.parent.GetComponent<ChangeLocationPanelToggleParent> ().SelectToggleElement (id);
    }
}
