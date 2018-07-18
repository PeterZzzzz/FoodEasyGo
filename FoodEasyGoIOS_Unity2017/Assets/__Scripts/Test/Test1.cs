using UnityEngine;
using UnityEngine.UI;
using System.Text;
using System.Security.Cryptography;
using System.Collections;

[ExecuteInEditMode]
public class Test1 : MonoBehaviour {


    public Transform rootTransform;
    public Font targetFont;

    
	void Start () {
        string source = "Shanghai";
        using (MD5 md5Hash = MD5.Create ()) {
            string hash = GetMd5Hash(md5Hash, source);

            DebugLogger.Log ("The MD5 hash of " + source + " is: " + hash + ".");
            
        }
    }

    [ContextMenu ("StartProcess")]
    void StartProcess () {
        ReplaceFont (rootTransform);
    }

    static string GetMd5Hash (MD5 md5Hash, string input) {

        // Convert the input string to a byte array and compute the hash.
        byte[] data = md5Hash.ComputeHash(Encoding.UTF8.GetBytes(input));

        // Create a new Stringbuilder to collect the bytes and create a string.
        StringBuilder sBuilder = new StringBuilder();

        // Loop through each byte of the hashed data and format each one as a hexadecimal string.
        for (int i = 0; i < data.Length; i++) {
            sBuilder.Append (data[i].ToString ("x2"));
        }

        // Return the hexadecimal string.
        return sBuilder.ToString ();
    }

    public void ReplaceFont (Transform root) {
        Text text = root.GetComponent<Text>();
        if (text != null) {
            DebugLogger.Log ("Found a text component: " + root.name);
            text.font = targetFont;   
        }
        for (int i = 0; i < root.childCount; i++) {
            ReplaceFont (root.GetChild (i));
        }
    }
}
