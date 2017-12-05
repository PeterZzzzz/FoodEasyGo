using UnityEngine;
using System.Collections;
using System.Collections.Generic;



public class LDFWWWWForm {

    private class LDFWWWWFormField {
        public string key;
        public string value;

        public LDFWWWWFormField (string k, string v) {
            key = k;
            value = v;
        }
    }

    public WWWForm                      wwwForm;
    private List<LDFWWWWFormField>      fieldList;

    public LDFWWWWForm () {
        wwwForm = new WWWForm ();
        fieldList = new List<LDFWWWWFormField> ();
    }

    public void AddField (string k, string v) {
        fieldList.Add (new LDFWWWWFormField (k, v));
        wwwForm.AddField (k, v);
    }

    public void AddField (string k, int v) {
        fieldList.Add (new LDFWWWWFormField (k, v.ToString ()));
        wwwForm.AddField (k, v);
    }

    public override string ToString () {
        string result = "";
        foreach (var field in fieldList) {
            result = result + "field: " + field.key + "-" + field.value + "\n";
        }
        return result;
    }
}
