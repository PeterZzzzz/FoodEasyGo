using UnityEngine;
using UnityEngine.UI;
using System.Collections;


using LDFW;
using LDFW.Network;
using Debug = UnityEngine.Debug;

public class BusinessCooperationPanelController : BasePanelController {

    public static BusinessCooperationPanelController instance;


    new void Awake () {
        if (instance != null) {
            instance.gameObject.DestroyGO ();
        }
        instance = this;

        base.Awake ();

        headerTitle.ResetUI ("商务合作", "Business Cooperations");


    }


    public override void ResetPanel () {
    }
    public override void ReloadPanel () {
        LoadingPanelController.instance.DisplayPanel ();
        InfoNetworkController.instance.GetBusinessCooperation (
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();
                if (data != null && data.Count > 0) {
                    if (data[0] != null) {
                        transform.Find ("Panel/Section1/Title").GetComponent<TextController> ().ResetUI (
                            data[0].GetField ("title_zh").str, data[0].GetField ("title_en").str);
                        transform.Find ("Panel/Section1/Text").GetComponent<TextController> ().ResetUI (
                            data[0].GetField ("description_zh").str.Replace ("，", ", ").Replace (",", ", "), 
                            data[0].GetField ("description_en").str.Replace ("，", ", ").Replace (",", ", "));
                        LDFWImageDownloadController.instance.AddToCacheList (
                            new ImageDownloader2 (data[0].GetField ("img").str.Replace ("\\/", "/"), "general", transform.Find ("Panel/Section1/Icon").GetComponent<RawImage> (), 2, null, null));

                    }
                    if (data[1] != null) {
                        transform.Find ("Panel/Section2/Title").GetComponent<TextController> ().ResetUI (
                            data[1].GetField ("title_zh").str, data[1].GetField ("title_en").str);
                        transform.Find ("Panel/Section2/Text").GetComponent<TextController> ().ResetUI (
                            data[1].GetField ("description_zh").str.Replace ("，", ", ").Replace (",", ", "), 
                            data[1].GetField ("description_en").str.Replace ("，", ", ").Replace (",", ", "));
                        LDFWImageDownloadController.instance.AddToCacheList (
                            new ImageDownloader2 (data[1].GetField ("img").str.Replace ("\\/", "/"), "general", transform.Find ("Panel/Section2/Icon").GetComponent<RawImage> (), 2, null, null));
                    }
                    if (data[2] != null) {
                        transform.Find ("Panel/Section3/Title").GetComponent<TextController> ().ResetUI (
                            data[2].GetField ("title_zh").str, data[2].GetField ("title_en").str);
                        transform.Find ("Panel/Section3/Text").GetComponent<TextController> ().ResetUI (
                            data[2].GetField ("description_zh").str.Replace ("，", ", ").Replace (",", ", "), 
                            data[2].GetField ("description_en").str.Replace ("，", ", ").Replace (",", ", "));
                        LDFWImageDownloadController.instance.AddToCacheList (
                            new ImageDownloader2 (data[2].GetField ("img").str.Replace ("\\/", "/"), "general", transform.Find ("Panel/Section3/Icon").GetComponent<RawImage> (), 2, null, null));
                    }
                }


                

            }), 
            new LDFWServerResponseEvent ((JSONObject data, string m) => {
                LoadingPanelController.instance.HidePanelImmediately ();

            }));
        

    }



}
