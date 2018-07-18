using UnityEngine;
using System.Collections;

public static class ErrorMessageConfig {

    public static string[] GeneralError =       { "Network issue, please try again later", "网络延迟，请稍后再试" };

    // Access Control
    public static string[] EmailError =         { "Invalid email",      "您输入的邮箱格式有误" };
    public static string[] CaptchaError =       { "Invalid captcha",    "您输入的验证码有误" };
    public static string[] PasswordTooShort =   { "Password needs at least 6 characters", "密码需要至少6个字符" };
    public static string[] PasswordsNotMatch =  { "Passwords do not match", "输入的两个密码不一样" };
    public static string[] RegistrationSuccess= { "Registration successful", "注册成功" };


    // Home
    public static string[] GPSOffError =        { "Please turn on your GPS services", "请打开您的GPS服务" };

    // Set Location
    public static string[] InvalidZipCode =     { "Invalid zip code", "邮编格式错误" };
    public static string[] UnsupportZipCode =   { "Sorry, our services do not cover the area that you are currently in", "非常抱歉，您所在的地区暂未提供相关餐馆配送服务" };


}
