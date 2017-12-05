using UnityEngine;
using System.Collections;

public class ChangeLocationPanelToggleParent : MonoBehaviour {

    public string selectedID = "";
    public string regionZip = "";
    public string nameZH = "";
    public string nameEN = "";

    public void OnSelectButtonClicked () {
        if (!string.IsNullOrEmpty (selectedID)) {
            UserDataController.instance.targetServiceRegionID = selectedID;
            UserDataController.instance.targetServiceRegionZipCode = regionZip;
            UserDataController.instance.targetServiceRegionNameZH = nameZH;
            UserDataController.instance.targetServiceRegionNameEN = nameEN;

            //UserDataController.instance.deliveryFee = ChangeLocationPanelController.instance.regionDic[selectedID].GetField ("fee").str;

            PlayerPrefsController.SetUserRegionAndServiceRegion (UserDataController.instance.regionID, UserDataController.instance.zipCode, UserDataController.instance.targetServiceRegionID, UserDataController.instance.targetServiceRegionZipCode);

            PanelListController.instance.SetHomePanelAsBasePanel ();
        }
    }

    public void SelectToggleElement (string id) {
        DeselectAllElements ();
        selectedID = "";
        ChangeLocationPanelToggleElement currentElement;
        for (int i = 0; i < transform.childCount; i++) {
            currentElement = transform.GetChild (i).GetComponent<ChangeLocationPanelToggleElement> ();
            if (currentElement != null && currentElement.id == id) {
                currentElement.SelectElement ();
                selectedID = currentElement.id;
                regionZip = currentElement.zip;
                nameZH = currentElement.nameZH;
                nameEN = currentElement.nameEN;
            }
        }
    }

    public void DeselectToggleElement (string id) {
        ChangeLocationPanelToggleElement currentElement;
        for (int i = 0; i < transform.childCount; i++) {
            currentElement = transform.GetChild (i).GetComponent<ChangeLocationPanelToggleElement> ();
            if (currentElement != null && currentElement.id == id) {
                currentElement.DeselectElement ();
                if (selectedID == currentElement.id) {
                    selectedID = "";
                    regionZip = "";
                    nameZH = "";
                    nameEN = "";
                }
                break;
            }
        }
    }

    public void DeselectAllElements () {
        selectedID = "";
        ChangeLocationPanelToggleElement currentElement;
        for (int i=0; i<transform.childCount; i++) {
            currentElement = transform.GetChild (i).GetComponent<ChangeLocationPanelToggleElement> ();
            if (currentElement != null) {
                currentElement.DeselectElement ();
            }
        }
    }
}
