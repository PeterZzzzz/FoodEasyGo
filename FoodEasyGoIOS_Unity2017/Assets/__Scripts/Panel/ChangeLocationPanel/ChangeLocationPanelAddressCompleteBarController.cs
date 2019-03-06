using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChangeLocationPanelAddressCompleteBarController : MonoBehaviour {

    public TextController address;

    public string addressString;
    public string streetNumber;
    public string route;
    public string city;
    public string state;
    public string zipCode;

    public void ResetAddressText(string str)
    {
        addressString = str;
        address.ResetUI(addressString);
    }

    public void OnAddressClick()
    {
        StartCoroutine(FetchAddressByString(addressString));

    }

    private IEnumerator FetchAddressByString(string str)
    {
        //WWW www = new WWW("https://maps.googleapis.com/maps/api/geocode/json?address=" + str + "&key=AIzaSyA7v466-13Perh6WnLg78uwEXTY9dYWmcQ&language=en");
        WWW www = new WWW("https://maps.googleapis.com/maps/api/geocode/json?address=" + str + "&key=" + UserDataController.instance.googleMapKey);

        yield return www;
        JSONObject data = new JSONObject(www.text);
        Debug.Log(data.GetField("status").str + "\n" + www.text);

        if (data.GetField("status") == null || data.GetField("status").str != "OK")
        {
            MessagePanelController.instance.DisplayPanel("Please try again later");
        }
        else
        {
            JSONObject addressComponent = data.GetField("results")[0].GetField("address_components");
            for (int i = 0; addressComponent[i] != null; i++)
            {
                string type = addressComponent[i].GetField("types")[0].str;
                switch (type)
                {
                    case "street_number":
                        streetNumber = addressComponent[i].GetField("long_name").str;
                        break;
                    case "route":
                        route = addressComponent[i].GetField("short_name").str;
                        break;
                    case "locality":
                        city = addressComponent[i].GetField("long_name").str;
                        break;
                    case "administrative_area_level_1":
                        state = addressComponent[i].GetField("short_name").str;
                        break;
                    case "postal_code":
                        zipCode = addressComponent[i].GetField("long_name").str;
                        break;

                    default:
                        break;
                }


            }

            if (string.IsNullOrEmpty(streetNumber) || string.IsNullOrEmpty(route))
            {
                MessagePanelController.instance.DisplayPanel("Please enter vaild address");
            }
            else
            {
                ChangeLocationPanelController.instance.addressCompleteInputField.text = streetNumber + " " + route + " ," + city + " ," + state + " ," + zipCode;
                ChangeLocationPanelController.instance.addAddressPanel.Find("Street/InputField").GetComponent<InputField>().text = streetNumber + " " + route;
                ChangeLocationPanelController.instance.addAddressPanel.Find("City/InputField").GetComponent<InputField>().text = city;
                ChangeLocationPanelController.instance.addAddressPanel.Find("State/InputField").GetComponent<InputField>().text = state;
                ChangeLocationPanelController.instance.addAddressPanel.Find("Postal/InputField").GetComponent<InputField>().text = zipCode;

                ChangeLocationPanelController.instance.ClearResults();
                ChangeLocationPanelController.instance.addressCompleteScrollRect.gameObject.SetActive(false);
            }
        }
        Debug.Log("street: " + streetNumber + "\nroute: " + route + "\ncity: " + city + "\nstate: " + state + "\nzipCode: " + zipCode);
    }
}
