#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.String
struct String_t;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniShare
struct  UniShare_t4037055727  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Texture2D UniShare::createdTexture
	Texture2D_t3884108195 * ___createdTexture_2;
	// System.Boolean UniShare::instantShare
	bool ___instantShare_3;
	// System.String UniShare::screenshotPath
	String_t* ___screenshotPath_4;
	// System.String UniShare::VK_ID
	String_t* ___VK_ID_5;
	// UnityEngine.UI.Image UniShare::SharePopupImage
	Image_t538875265 * ___SharePopupImage_6;
	// UnityEngine.GameObject UniShare::SharePopupWindow
	GameObject_t3674682005 * ___SharePopupWindow_7;
	// UnityEngine.GameObject UniShare::SharePopupWatermark
	GameObject_t3674682005 * ___SharePopupWatermark_8;
	// System.String UniShare::ScreenshotName
	String_t* ___ScreenshotName_9;
	// System.String UniShare::ShareText
	String_t* ___ShareText_10;
	// System.Boolean UniShare::simulateCapturedArea
	bool ___simulateCapturedArea_11;
	// System.Single UniShare::BorderTop
	float ___BorderTop_12;
	// System.Single UniShare::BorderBottom
	float ___BorderBottom_13;
	// System.Single UniShare::BorderLeft
	float ___BorderLeft_14;
	// System.Single UniShare::BorderRight
	float ___BorderRight_15;

public:
	inline static int32_t get_offset_of_createdTexture_2() { return static_cast<int32_t>(offsetof(UniShare_t4037055727, ___createdTexture_2)); }
	inline Texture2D_t3884108195 * get_createdTexture_2() const { return ___createdTexture_2; }
	inline Texture2D_t3884108195 ** get_address_of_createdTexture_2() { return &___createdTexture_2; }
	inline void set_createdTexture_2(Texture2D_t3884108195 * value)
	{
		___createdTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___createdTexture_2, value);
	}

	inline static int32_t get_offset_of_instantShare_3() { return static_cast<int32_t>(offsetof(UniShare_t4037055727, ___instantShare_3)); }
	inline bool get_instantShare_3() const { return ___instantShare_3; }
	inline bool* get_address_of_instantShare_3() { return &___instantShare_3; }
	inline void set_instantShare_3(bool value)
	{
		___instantShare_3 = value;
	}

	inline static int32_t get_offset_of_screenshotPath_4() { return static_cast<int32_t>(offsetof(UniShare_t4037055727, ___screenshotPath_4)); }
	inline String_t* get_screenshotPath_4() const { return ___screenshotPath_4; }
	inline String_t** get_address_of_screenshotPath_4() { return &___screenshotPath_4; }
	inline void set_screenshotPath_4(String_t* value)
	{
		___screenshotPath_4 = value;
		Il2CppCodeGenWriteBarrier(&___screenshotPath_4, value);
	}

	inline static int32_t get_offset_of_VK_ID_5() { return static_cast<int32_t>(offsetof(UniShare_t4037055727, ___VK_ID_5)); }
	inline String_t* get_VK_ID_5() const { return ___VK_ID_5; }
	inline String_t** get_address_of_VK_ID_5() { return &___VK_ID_5; }
	inline void set_VK_ID_5(String_t* value)
	{
		___VK_ID_5 = value;
		Il2CppCodeGenWriteBarrier(&___VK_ID_5, value);
	}

	inline static int32_t get_offset_of_SharePopupImage_6() { return static_cast<int32_t>(offsetof(UniShare_t4037055727, ___SharePopupImage_6)); }
	inline Image_t538875265 * get_SharePopupImage_6() const { return ___SharePopupImage_6; }
	inline Image_t538875265 ** get_address_of_SharePopupImage_6() { return &___SharePopupImage_6; }
	inline void set_SharePopupImage_6(Image_t538875265 * value)
	{
		___SharePopupImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___SharePopupImage_6, value);
	}

	inline static int32_t get_offset_of_SharePopupWindow_7() { return static_cast<int32_t>(offsetof(UniShare_t4037055727, ___SharePopupWindow_7)); }
	inline GameObject_t3674682005 * get_SharePopupWindow_7() const { return ___SharePopupWindow_7; }
	inline GameObject_t3674682005 ** get_address_of_SharePopupWindow_7() { return &___SharePopupWindow_7; }
	inline void set_SharePopupWindow_7(GameObject_t3674682005 * value)
	{
		___SharePopupWindow_7 = value;
		Il2CppCodeGenWriteBarrier(&___SharePopupWindow_7, value);
	}

	inline static int32_t get_offset_of_SharePopupWatermark_8() { return static_cast<int32_t>(offsetof(UniShare_t4037055727, ___SharePopupWatermark_8)); }
	inline GameObject_t3674682005 * get_SharePopupWatermark_8() const { return ___SharePopupWatermark_8; }
	inline GameObject_t3674682005 ** get_address_of_SharePopupWatermark_8() { return &___SharePopupWatermark_8; }
	inline void set_SharePopupWatermark_8(GameObject_t3674682005 * value)
	{
		___SharePopupWatermark_8 = value;
		Il2CppCodeGenWriteBarrier(&___SharePopupWatermark_8, value);
	}

	inline static int32_t get_offset_of_ScreenshotName_9() { return static_cast<int32_t>(offsetof(UniShare_t4037055727, ___ScreenshotName_9)); }
	inline String_t* get_ScreenshotName_9() const { return ___ScreenshotName_9; }
	inline String_t** get_address_of_ScreenshotName_9() { return &___ScreenshotName_9; }
	inline void set_ScreenshotName_9(String_t* value)
	{
		___ScreenshotName_9 = value;
		Il2CppCodeGenWriteBarrier(&___ScreenshotName_9, value);
	}

	inline static int32_t get_offset_of_ShareText_10() { return static_cast<int32_t>(offsetof(UniShare_t4037055727, ___ShareText_10)); }
	inline String_t* get_ShareText_10() const { return ___ShareText_10; }
	inline String_t** get_address_of_ShareText_10() { return &___ShareText_10; }
	inline void set_ShareText_10(String_t* value)
	{
		___ShareText_10 = value;
		Il2CppCodeGenWriteBarrier(&___ShareText_10, value);
	}

	inline static int32_t get_offset_of_simulateCapturedArea_11() { return static_cast<int32_t>(offsetof(UniShare_t4037055727, ___simulateCapturedArea_11)); }
	inline bool get_simulateCapturedArea_11() const { return ___simulateCapturedArea_11; }
	inline bool* get_address_of_simulateCapturedArea_11() { return &___simulateCapturedArea_11; }
	inline void set_simulateCapturedArea_11(bool value)
	{
		___simulateCapturedArea_11 = value;
	}

	inline static int32_t get_offset_of_BorderTop_12() { return static_cast<int32_t>(offsetof(UniShare_t4037055727, ___BorderTop_12)); }
	inline float get_BorderTop_12() const { return ___BorderTop_12; }
	inline float* get_address_of_BorderTop_12() { return &___BorderTop_12; }
	inline void set_BorderTop_12(float value)
	{
		___BorderTop_12 = value;
	}

	inline static int32_t get_offset_of_BorderBottom_13() { return static_cast<int32_t>(offsetof(UniShare_t4037055727, ___BorderBottom_13)); }
	inline float get_BorderBottom_13() const { return ___BorderBottom_13; }
	inline float* get_address_of_BorderBottom_13() { return &___BorderBottom_13; }
	inline void set_BorderBottom_13(float value)
	{
		___BorderBottom_13 = value;
	}

	inline static int32_t get_offset_of_BorderLeft_14() { return static_cast<int32_t>(offsetof(UniShare_t4037055727, ___BorderLeft_14)); }
	inline float get_BorderLeft_14() const { return ___BorderLeft_14; }
	inline float* get_address_of_BorderLeft_14() { return &___BorderLeft_14; }
	inline void set_BorderLeft_14(float value)
	{
		___BorderLeft_14 = value;
	}

	inline static int32_t get_offset_of_BorderRight_15() { return static_cast<int32_t>(offsetof(UniShare_t4037055727, ___BorderRight_15)); }
	inline float get_BorderRight_15() const { return ___BorderRight_15; }
	inline float* get_address_of_BorderRight_15() { return &___BorderRight_15; }
	inline void set_BorderRight_15(float value)
	{
		___BorderRight_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
