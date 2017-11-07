#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// InputFieldController
struct InputFieldController_t3567925036;
// cn.sharesdk.unity3d.ShareSDK
struct ShareSDK_t3009509477;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Events.UnityAction`2<JSONObject,System.String>
struct UnityAction_2_t3241238934;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_3506026199.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShareSDKAuthenticationController
struct  ShareSDKAuthenticationController_t1600086863  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform ShareSDKAuthenticationController::bindEmailPanel
	Transform_t1659122786 * ___bindEmailPanel_2;
	// InputFieldController ShareSDKAuthenticationController::emailInputField
	InputFieldController_t3567925036 * ___emailInputField_3;
	// cn.sharesdk.unity3d.ShareSDK ShareSDKAuthenticationController::ssdk
	ShareSDK_t3009509477 * ___ssdk_4;
	// cn.sharesdk.unity3d.PlatformType ShareSDKAuthenticationController::platform
	int32_t ___platform_5;
	// System.String ShareSDKAuthenticationController::platformString
	String_t* ___platformString_6;
	// System.String ShareSDKAuthenticationController::thirdPartyUserID
	String_t* ___thirdPartyUserID_7;
	// System.String ShareSDKAuthenticationController::userEmail
	String_t* ___userEmail_8;
	// UnityEngine.GameObject ShareSDKAuthenticationController::wechatButton
	GameObject_t3674682005 * ___wechatButton_9;

public:
	inline static int32_t get_offset_of_bindEmailPanel_2() { return static_cast<int32_t>(offsetof(ShareSDKAuthenticationController_t1600086863, ___bindEmailPanel_2)); }
	inline Transform_t1659122786 * get_bindEmailPanel_2() const { return ___bindEmailPanel_2; }
	inline Transform_t1659122786 ** get_address_of_bindEmailPanel_2() { return &___bindEmailPanel_2; }
	inline void set_bindEmailPanel_2(Transform_t1659122786 * value)
	{
		___bindEmailPanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___bindEmailPanel_2, value);
	}

	inline static int32_t get_offset_of_emailInputField_3() { return static_cast<int32_t>(offsetof(ShareSDKAuthenticationController_t1600086863, ___emailInputField_3)); }
	inline InputFieldController_t3567925036 * get_emailInputField_3() const { return ___emailInputField_3; }
	inline InputFieldController_t3567925036 ** get_address_of_emailInputField_3() { return &___emailInputField_3; }
	inline void set_emailInputField_3(InputFieldController_t3567925036 * value)
	{
		___emailInputField_3 = value;
		Il2CppCodeGenWriteBarrier(&___emailInputField_3, value);
	}

	inline static int32_t get_offset_of_ssdk_4() { return static_cast<int32_t>(offsetof(ShareSDKAuthenticationController_t1600086863, ___ssdk_4)); }
	inline ShareSDK_t3009509477 * get_ssdk_4() const { return ___ssdk_4; }
	inline ShareSDK_t3009509477 ** get_address_of_ssdk_4() { return &___ssdk_4; }
	inline void set_ssdk_4(ShareSDK_t3009509477 * value)
	{
		___ssdk_4 = value;
		Il2CppCodeGenWriteBarrier(&___ssdk_4, value);
	}

	inline static int32_t get_offset_of_platform_5() { return static_cast<int32_t>(offsetof(ShareSDKAuthenticationController_t1600086863, ___platform_5)); }
	inline int32_t get_platform_5() const { return ___platform_5; }
	inline int32_t* get_address_of_platform_5() { return &___platform_5; }
	inline void set_platform_5(int32_t value)
	{
		___platform_5 = value;
	}

	inline static int32_t get_offset_of_platformString_6() { return static_cast<int32_t>(offsetof(ShareSDKAuthenticationController_t1600086863, ___platformString_6)); }
	inline String_t* get_platformString_6() const { return ___platformString_6; }
	inline String_t** get_address_of_platformString_6() { return &___platformString_6; }
	inline void set_platformString_6(String_t* value)
	{
		___platformString_6 = value;
		Il2CppCodeGenWriteBarrier(&___platformString_6, value);
	}

	inline static int32_t get_offset_of_thirdPartyUserID_7() { return static_cast<int32_t>(offsetof(ShareSDKAuthenticationController_t1600086863, ___thirdPartyUserID_7)); }
	inline String_t* get_thirdPartyUserID_7() const { return ___thirdPartyUserID_7; }
	inline String_t** get_address_of_thirdPartyUserID_7() { return &___thirdPartyUserID_7; }
	inline void set_thirdPartyUserID_7(String_t* value)
	{
		___thirdPartyUserID_7 = value;
		Il2CppCodeGenWriteBarrier(&___thirdPartyUserID_7, value);
	}

	inline static int32_t get_offset_of_userEmail_8() { return static_cast<int32_t>(offsetof(ShareSDKAuthenticationController_t1600086863, ___userEmail_8)); }
	inline String_t* get_userEmail_8() const { return ___userEmail_8; }
	inline String_t** get_address_of_userEmail_8() { return &___userEmail_8; }
	inline void set_userEmail_8(String_t* value)
	{
		___userEmail_8 = value;
		Il2CppCodeGenWriteBarrier(&___userEmail_8, value);
	}

	inline static int32_t get_offset_of_wechatButton_9() { return static_cast<int32_t>(offsetof(ShareSDKAuthenticationController_t1600086863, ___wechatButton_9)); }
	inline GameObject_t3674682005 * get_wechatButton_9() const { return ___wechatButton_9; }
	inline GameObject_t3674682005 ** get_address_of_wechatButton_9() { return &___wechatButton_9; }
	inline void set_wechatButton_9(GameObject_t3674682005 * value)
	{
		___wechatButton_9 = value;
		Il2CppCodeGenWriteBarrier(&___wechatButton_9, value);
	}
};

struct ShareSDKAuthenticationController_t1600086863_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> ShareSDKAuthenticationController::<>f__am$cache8
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache8_10;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> ShareSDKAuthenticationController::<>f__am$cache9
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache9_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_10() { return static_cast<int32_t>(offsetof(ShareSDKAuthenticationController_t1600086863_StaticFields, ___U3CU3Ef__amU24cache8_10)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache8_10() const { return ___U3CU3Ef__amU24cache8_10; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache8_10() { return &___U3CU3Ef__amU24cache8_10; }
	inline void set_U3CU3Ef__amU24cache8_10(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache8_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_11() { return static_cast<int32_t>(offsetof(ShareSDKAuthenticationController_t1600086863_StaticFields, ___U3CU3Ef__amU24cache9_11)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache9_11() const { return ___U3CU3Ef__amU24cache9_11; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache9_11() { return &___U3CU3Ef__amU24cache9_11; }
	inline void set_U3CU3Ef__amU24cache9_11(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache9_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
