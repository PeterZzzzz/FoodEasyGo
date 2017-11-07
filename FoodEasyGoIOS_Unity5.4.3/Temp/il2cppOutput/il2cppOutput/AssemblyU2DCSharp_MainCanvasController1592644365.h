#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MainCanvasController
struct MainCanvasController_t1592644365;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// LDFW.Network.LDFWImageDownloadController
struct LDFWImageDownloadController_t405874756;
// UserDataController
struct UserDataController_t1703319473;
// UniShare
struct UniShare_t4037055727;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainCanvasController
struct  MainCanvasController_t1592644365  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean MainCanvasController::autoLogin
	bool ___autoLogin_3;
	// System.Boolean MainCanvasController::testingMode
	bool ___testingMode_4;
	// UnityEngine.RectTransform MainCanvasController::mRectTransform
	RectTransform_t972643934 * ___mRectTransform_5;
	// UnityEngine.Vector2 MainCanvasController::canvasSize
	Vector2_t4282066565  ___canvasSize_6;
	// LDFW.Network.LDFWImageDownloadController MainCanvasController::imageDownloadController
	LDFWImageDownloadController_t405874756 * ___imageDownloadController_7;
	// UserDataController MainCanvasController::userDataController
	UserDataController_t1703319473 * ___userDataController_8;
	// UniShare MainCanvasController::uniShare
	UniShare_t4037055727 * ___uniShare_9;

public:
	inline static int32_t get_offset_of_autoLogin_3() { return static_cast<int32_t>(offsetof(MainCanvasController_t1592644365, ___autoLogin_3)); }
	inline bool get_autoLogin_3() const { return ___autoLogin_3; }
	inline bool* get_address_of_autoLogin_3() { return &___autoLogin_3; }
	inline void set_autoLogin_3(bool value)
	{
		___autoLogin_3 = value;
	}

	inline static int32_t get_offset_of_testingMode_4() { return static_cast<int32_t>(offsetof(MainCanvasController_t1592644365, ___testingMode_4)); }
	inline bool get_testingMode_4() const { return ___testingMode_4; }
	inline bool* get_address_of_testingMode_4() { return &___testingMode_4; }
	inline void set_testingMode_4(bool value)
	{
		___testingMode_4 = value;
	}

	inline static int32_t get_offset_of_mRectTransform_5() { return static_cast<int32_t>(offsetof(MainCanvasController_t1592644365, ___mRectTransform_5)); }
	inline RectTransform_t972643934 * get_mRectTransform_5() const { return ___mRectTransform_5; }
	inline RectTransform_t972643934 ** get_address_of_mRectTransform_5() { return &___mRectTransform_5; }
	inline void set_mRectTransform_5(RectTransform_t972643934 * value)
	{
		___mRectTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___mRectTransform_5, value);
	}

	inline static int32_t get_offset_of_canvasSize_6() { return static_cast<int32_t>(offsetof(MainCanvasController_t1592644365, ___canvasSize_6)); }
	inline Vector2_t4282066565  get_canvasSize_6() const { return ___canvasSize_6; }
	inline Vector2_t4282066565 * get_address_of_canvasSize_6() { return &___canvasSize_6; }
	inline void set_canvasSize_6(Vector2_t4282066565  value)
	{
		___canvasSize_6 = value;
	}

	inline static int32_t get_offset_of_imageDownloadController_7() { return static_cast<int32_t>(offsetof(MainCanvasController_t1592644365, ___imageDownloadController_7)); }
	inline LDFWImageDownloadController_t405874756 * get_imageDownloadController_7() const { return ___imageDownloadController_7; }
	inline LDFWImageDownloadController_t405874756 ** get_address_of_imageDownloadController_7() { return &___imageDownloadController_7; }
	inline void set_imageDownloadController_7(LDFWImageDownloadController_t405874756 * value)
	{
		___imageDownloadController_7 = value;
		Il2CppCodeGenWriteBarrier(&___imageDownloadController_7, value);
	}

	inline static int32_t get_offset_of_userDataController_8() { return static_cast<int32_t>(offsetof(MainCanvasController_t1592644365, ___userDataController_8)); }
	inline UserDataController_t1703319473 * get_userDataController_8() const { return ___userDataController_8; }
	inline UserDataController_t1703319473 ** get_address_of_userDataController_8() { return &___userDataController_8; }
	inline void set_userDataController_8(UserDataController_t1703319473 * value)
	{
		___userDataController_8 = value;
		Il2CppCodeGenWriteBarrier(&___userDataController_8, value);
	}

	inline static int32_t get_offset_of_uniShare_9() { return static_cast<int32_t>(offsetof(MainCanvasController_t1592644365, ___uniShare_9)); }
	inline UniShare_t4037055727 * get_uniShare_9() const { return ___uniShare_9; }
	inline UniShare_t4037055727 ** get_address_of_uniShare_9() { return &___uniShare_9; }
	inline void set_uniShare_9(UniShare_t4037055727 * value)
	{
		___uniShare_9 = value;
		Il2CppCodeGenWriteBarrier(&___uniShare_9, value);
	}
};

struct MainCanvasController_t1592644365_StaticFields
{
public:
	// MainCanvasController MainCanvasController::instance
	MainCanvasController_t1592644365 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MainCanvasController_t1592644365_StaticFields, ___instance_2)); }
	inline MainCanvasController_t1592644365 * get_instance_2() const { return ___instance_2; }
	inline MainCanvasController_t1592644365 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MainCanvasController_t1592644365 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
