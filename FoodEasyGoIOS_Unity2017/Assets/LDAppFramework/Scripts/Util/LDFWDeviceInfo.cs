using UnityEngine;
using System.Collections;

public static class LDFWDeviceInfo
{
    public static Vector2 GetScreenDPVector()
    {
        
#if UNITY_IOS

        int screenWidth = Screen.width;
        int screenHeight = Screen.height;
        //Debug.Log("screen resolution : " + screenWidth + " X " + screenHeight);

        if (screenWidth == 320){
            // iPhone 2G, 3G
            return new Vector2(320, 480);
        }
        else if (screenWidth == 640){
            if (screenHeight == 960){
                // iPhone 4, 4s
                return new Vector2(320, 480);
            }
            else{
                // iPhone 5, 5c, 5s
                return new Vector2(320, 568);
            }
        }
        else if (screenWidth == 750){
            // iPhone 6, 6s, 7, 8
            return new Vector2(375, 667);
        }
        else if (screenWidth == 1080){
            // iPhone 6+, 6s+, 7+, 8+
            return new Vector2(414, 736);
        }
        else if (screenWidth == 1125){
            // iPhoneX, XS
            return new Vector2(375, 812);
        }
        else if (screenWidth == 1242)
        {
            // iPhoneXS Max
            return new Vector2(414, 896);
        }
        else if (screenWidth == 828)
        {
            // iPhoneXR
            return new Vector2(414, 896);
        }
        else if (screenWidth == 768)
        {
            // iPad, iPad2, iPad Mini
            return new Vector2(768, 1024);
        }
        else if (screenWidth == 1536)
        {
            // iPad3, iPad4, iPadAir, iPadAir2 iPadRetina, iPadMiniRetina, 
            return new Vector2(768, 1024);
        }
        else if (screenWidth == 2048)
        {
            // iPadPro
            return new Vector2(768, 1024);
        }

#else
        targetDPVector.x = 1080;
        targetDPVector.y = 1920;
#endif

        Debug.LogError("Unable to find target screen resolution");
        return new Vector2(375, 667);
    }
}
