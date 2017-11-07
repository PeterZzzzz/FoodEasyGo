#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.WWW
struct WWW_t3134621005;
// UnityEngine.UI.RawImage
struct RawImage_t821930207;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "AssemblyU2DCSharp_BaseUIController1679080129.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseRawImageController
struct  BaseRawImageController_t2792004320  : public BaseUIController_t1679080129
{
public:
	// UnityEngine.WWW BaseRawImageController::imageWWW
	WWW_t3134621005 * ___imageWWW_3;
	// UnityEngine.UI.RawImage BaseRawImageController::rawImage
	RawImage_t821930207 * ___rawImage_4;
	// System.Collections.IEnumerator BaseRawImageController::loadImageIEnumerator
	Il2CppObject * ___loadImageIEnumerator_5;

public:
	inline static int32_t get_offset_of_imageWWW_3() { return static_cast<int32_t>(offsetof(BaseRawImageController_t2792004320, ___imageWWW_3)); }
	inline WWW_t3134621005 * get_imageWWW_3() const { return ___imageWWW_3; }
	inline WWW_t3134621005 ** get_address_of_imageWWW_3() { return &___imageWWW_3; }
	inline void set_imageWWW_3(WWW_t3134621005 * value)
	{
		___imageWWW_3 = value;
		Il2CppCodeGenWriteBarrier(&___imageWWW_3, value);
	}

	inline static int32_t get_offset_of_rawImage_4() { return static_cast<int32_t>(offsetof(BaseRawImageController_t2792004320, ___rawImage_4)); }
	inline RawImage_t821930207 * get_rawImage_4() const { return ___rawImage_4; }
	inline RawImage_t821930207 ** get_address_of_rawImage_4() { return &___rawImage_4; }
	inline void set_rawImage_4(RawImage_t821930207 * value)
	{
		___rawImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___rawImage_4, value);
	}

	inline static int32_t get_offset_of_loadImageIEnumerator_5() { return static_cast<int32_t>(offsetof(BaseRawImageController_t2792004320, ___loadImageIEnumerator_5)); }
	inline Il2CppObject * get_loadImageIEnumerator_5() const { return ___loadImageIEnumerator_5; }
	inline Il2CppObject ** get_address_of_loadImageIEnumerator_5() { return &___loadImageIEnumerator_5; }
	inline void set_loadImageIEnumerator_5(Il2CppObject * value)
	{
		___loadImageIEnumerator_5 = value;
		Il2CppCodeGenWriteBarrier(&___loadImageIEnumerator_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
