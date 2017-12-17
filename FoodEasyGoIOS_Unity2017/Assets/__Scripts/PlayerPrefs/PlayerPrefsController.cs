using UnityEngine;
using System;
using System.Collections;

using LDFW;

public static class PlayerPrefsController {

    // Auto Login
    static string autoLoginKey = "AUTOLOGIN";
    public static void SetAutoLogin (bool state) {
        LDFWPlayerPrefsController.SetString (autoLoginKey, state.ToString ());
    }
    public static bool GetAutoLoginStatus () {
        try {
            bool state = bool.Parse (LDFWPlayerPrefsController.GetString (autoLoginKey));
            return state;
        } catch (Exception e) {
            return false;
        }
    }

    // User login
    static string userEmailKey = "USEREMAIL";
    static string passwordKey = "PASSWORD";
    public static void SetUserCredentials (string email, string password) {
        LDFWPlayerPrefsController.SetString (userEmailKey, email);
        LDFWPlayerPrefsController.SetString (passwordKey, password);
    }
    public static string GetUserEmail () {
        return LDFWPlayerPrefsController.GetString (userEmailKey);
    }
    public static string GetPassword () {
        return LDFWPlayerPrefsController.GetString (passwordKey);
    }

    // Region
    static string userRegionIDKey = "USERREGIONID";
    static string userRegionZipKey = "USERREGIONZIP";
    static string userServiceRegionIDKey = "USERSERVICEREGIONID";
    static string userServiceRegionZipKey = "USERSERVICEREGIONZIP";
    public static void SetUserRegionAndServiceRegion (string userRegionID, string userRegionZip, string userServiceRegionID, string userServiceRegionZip) {
        LDFWPlayerPrefsController.SetString (userRegionIDKey, userRegionID);
        LDFWPlayerPrefsController.SetString (userRegionZipKey, userRegionZip);
        LDFWPlayerPrefsController.SetString (userServiceRegionIDKey, userServiceRegionID);
        LDFWPlayerPrefsController.SetString (userServiceRegionZipKey, userServiceRegionZip);
    }
    public static bool GetUserRegionData (out string regionid, out string regionzip, out string serviceregionid, out string serviceregionzip) {
        regionid = LDFWPlayerPrefsController.GetString (userRegionIDKey);
        regionzip = LDFWPlayerPrefsController.GetString (userRegionZipKey);
        serviceregionid = LDFWPlayerPrefsController.GetString (userServiceRegionIDKey);
        serviceregionzip = LDFWPlayerPrefsController.GetString (userServiceRegionZipKey);

        if (string.IsNullOrEmpty (regionid) || string.IsNullOrEmpty (regionzip) || string.IsNullOrEmpty (serviceregionid) || string.IsNullOrEmpty (serviceregionzip)) {
            return false;
        } else {
            return true;
        }
    }

    // Search result
    static string historicalSearchIndexPrefix = "HISTORICALSEARCHITEM";
    public static void SetHistoricalSearchIndex (int i, string searchValue) {
        LDFWPlayerPrefsController.SetString (historicalSearchIndexPrefix + i, searchValue);
    }
    public static string GetHistoricalSearchIndex (int i) {
        return LDFWPlayerPrefsController.GetString (historicalSearchIndexPrefix + i);
    }
    
}
