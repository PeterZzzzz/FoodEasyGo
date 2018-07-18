using UnityEngine;
using System.Collections;

public static class LDFWCommonFunctionController {

	// Processes URLS so the code will understand
	public static string ProcessURLS (string input) {
		input = input.Replace ("\\/", "/");

		return input;
	}

    // Converts month index into short string
    public static string MonthIntToShortString (int index) {
        switch (index) {
            case 1: return "Jan";
            case 2: return "Feb";
            case 3: return "Mar";
            case 4: return "Apr";
            case 5: return "May";
            case 6: return "Jun";
            case 7: return "Jul";
            case 8: return "Aug";
            case 9: return "Sept";
            case 10: return "Oct";
            case 11: return "Nov";
            case 12: return "Dec";
        }
        return "";
    }



}
