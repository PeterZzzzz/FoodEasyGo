#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LoadingPanelController
struct LoadingPanelController_t666040324;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2761310900;
// UnityEngine.UI.Image
struct Image_t538875265;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadingPanelController
struct  LoadingPanelController_t666040324  : public BasePanelController_t1482191247
{
public:
	// UnityEngine.Sprite[] LoadingPanelController::gifList
	SpriteU5BU5D_t2761310900* ___gifList_6;
	// UnityEngine.UI.Image LoadingPanelController::gifImage
	Image_t538875265 * ___gifImage_7;
	// UnityEngine.UI.Image LoadingPanelController::background
	Image_t538875265 * ___background_8;
	// System.Single LoadingPanelController::displayTime
	float ___displayTime_9;
	// System.Int32 LoadingPanelController::currentGifIndex
	int32_t ___currentGifIndex_10;

public:
	inline static int32_t get_offset_of_gifList_6() { return static_cast<int32_t>(offsetof(LoadingPanelController_t666040324, ___gifList_6)); }
	inline SpriteU5BU5D_t2761310900* get_gifList_6() const { return ___gifList_6; }
	inline SpriteU5BU5D_t2761310900** get_address_of_gifList_6() { return &___gifList_6; }
	inline void set_gifList_6(SpriteU5BU5D_t2761310900* value)
	{
		___gifList_6 = value;
		Il2CppCodeGenWriteBarrier(&___gifList_6, value);
	}

	inline static int32_t get_offset_of_gifImage_7() { return static_cast<int32_t>(offsetof(LoadingPanelController_t666040324, ___gifImage_7)); }
	inline Image_t538875265 * get_gifImage_7() const { return ___gifImage_7; }
	inline Image_t538875265 ** get_address_of_gifImage_7() { return &___gifImage_7; }
	inline void set_gifImage_7(Image_t538875265 * value)
	{
		___gifImage_7 = value;
		Il2CppCodeGenWriteBarrier(&___gifImage_7, value);
	}

	inline static int32_t get_offset_of_background_8() { return static_cast<int32_t>(offsetof(LoadingPanelController_t666040324, ___background_8)); }
	inline Image_t538875265 * get_background_8() const { return ___background_8; }
	inline Image_t538875265 ** get_address_of_background_8() { return &___background_8; }
	inline void set_background_8(Image_t538875265 * value)
	{
		___background_8 = value;
		Il2CppCodeGenWriteBarrier(&___background_8, value);
	}

	inline static int32_t get_offset_of_displayTime_9() { return static_cast<int32_t>(offsetof(LoadingPanelController_t666040324, ___displayTime_9)); }
	inline float get_displayTime_9() const { return ___displayTime_9; }
	inline float* get_address_of_displayTime_9() { return &___displayTime_9; }
	inline void set_displayTime_9(float value)
	{
		___displayTime_9 = value;
	}

	inline static int32_t get_offset_of_currentGifIndex_10() { return static_cast<int32_t>(offsetof(LoadingPanelController_t666040324, ___currentGifIndex_10)); }
	inline int32_t get_currentGifIndex_10() const { return ___currentGifIndex_10; }
	inline int32_t* get_address_of_currentGifIndex_10() { return &___currentGifIndex_10; }
	inline void set_currentGifIndex_10(int32_t value)
	{
		___currentGifIndex_10 = value;
	}
};

struct LoadingPanelController_t666040324_StaticFields
{
public:
	// LoadingPanelController LoadingPanelController::instance
	LoadingPanelController_t666040324 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(LoadingPanelController_t666040324_StaticFields, ___instance_5)); }
	inline LoadingPanelController_t666040324 * get_instance_5() const { return ___instance_5; }
	inline LoadingPanelController_t666040324 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(LoadingPanelController_t666040324 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
