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
// UnityEngine.UI.RawImage
struct RawImage_t821930207;
// TextController
struct TextController_t3861806281;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadingCanvasController
struct  LoadingCanvasController_t1588194384  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform LoadingCanvasController::mainCanvas
	Transform_t1659122786 * ___mainCanvas_2;
	// UnityEngine.UI.RawImage LoadingCanvasController::guidePanel
	RawImage_t821930207 * ___guidePanel_3;
	// TextController LoadingCanvasController::countDownText
	TextController_t3861806281 * ___countDownText_4;
	// System.Single LoadingCanvasController::startTime
	float ___startTime_5;
	// System.String LoadingCanvasController::subDirPath
	String_t* ___subDirPath_6;
	// System.String LoadingCanvasController::guideImageExtension
	String_t* ___guideImageExtension_7;
	// System.Int32 LoadingCanvasController::attempts
	int32_t ___attempts_8;

public:
	inline static int32_t get_offset_of_mainCanvas_2() { return static_cast<int32_t>(offsetof(LoadingCanvasController_t1588194384, ___mainCanvas_2)); }
	inline Transform_t1659122786 * get_mainCanvas_2() const { return ___mainCanvas_2; }
	inline Transform_t1659122786 ** get_address_of_mainCanvas_2() { return &___mainCanvas_2; }
	inline void set_mainCanvas_2(Transform_t1659122786 * value)
	{
		___mainCanvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainCanvas_2, value);
	}

	inline static int32_t get_offset_of_guidePanel_3() { return static_cast<int32_t>(offsetof(LoadingCanvasController_t1588194384, ___guidePanel_3)); }
	inline RawImage_t821930207 * get_guidePanel_3() const { return ___guidePanel_3; }
	inline RawImage_t821930207 ** get_address_of_guidePanel_3() { return &___guidePanel_3; }
	inline void set_guidePanel_3(RawImage_t821930207 * value)
	{
		___guidePanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___guidePanel_3, value);
	}

	inline static int32_t get_offset_of_countDownText_4() { return static_cast<int32_t>(offsetof(LoadingCanvasController_t1588194384, ___countDownText_4)); }
	inline TextController_t3861806281 * get_countDownText_4() const { return ___countDownText_4; }
	inline TextController_t3861806281 ** get_address_of_countDownText_4() { return &___countDownText_4; }
	inline void set_countDownText_4(TextController_t3861806281 * value)
	{
		___countDownText_4 = value;
		Il2CppCodeGenWriteBarrier(&___countDownText_4, value);
	}

	inline static int32_t get_offset_of_startTime_5() { return static_cast<int32_t>(offsetof(LoadingCanvasController_t1588194384, ___startTime_5)); }
	inline float get_startTime_5() const { return ___startTime_5; }
	inline float* get_address_of_startTime_5() { return &___startTime_5; }
	inline void set_startTime_5(float value)
	{
		___startTime_5 = value;
	}

	inline static int32_t get_offset_of_subDirPath_6() { return static_cast<int32_t>(offsetof(LoadingCanvasController_t1588194384, ___subDirPath_6)); }
	inline String_t* get_subDirPath_6() const { return ___subDirPath_6; }
	inline String_t** get_address_of_subDirPath_6() { return &___subDirPath_6; }
	inline void set_subDirPath_6(String_t* value)
	{
		___subDirPath_6 = value;
		Il2CppCodeGenWriteBarrier(&___subDirPath_6, value);
	}

	inline static int32_t get_offset_of_guideImageExtension_7() { return static_cast<int32_t>(offsetof(LoadingCanvasController_t1588194384, ___guideImageExtension_7)); }
	inline String_t* get_guideImageExtension_7() const { return ___guideImageExtension_7; }
	inline String_t** get_address_of_guideImageExtension_7() { return &___guideImageExtension_7; }
	inline void set_guideImageExtension_7(String_t* value)
	{
		___guideImageExtension_7 = value;
		Il2CppCodeGenWriteBarrier(&___guideImageExtension_7, value);
	}

	inline static int32_t get_offset_of_attempts_8() { return static_cast<int32_t>(offsetof(LoadingCanvasController_t1588194384, ___attempts_8)); }
	inline int32_t get_attempts_8() const { return ___attempts_8; }
	inline int32_t* get_address_of_attempts_8() { return &___attempts_8; }
	inline void set_attempts_8(int32_t value)
	{
		___attempts_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
