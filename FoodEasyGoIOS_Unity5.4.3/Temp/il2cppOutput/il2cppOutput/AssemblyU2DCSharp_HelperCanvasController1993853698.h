#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HelperCanvasController
struct HelperCanvasController_t1993853698;
// cn.sharesdk.unity3d.ShareSDK
struct ShareSDK_t3009509477;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HelperCanvasController
struct  HelperCanvasController_t1993853698  : public MonoBehaviour_t667441552
{
public:
	// cn.sharesdk.unity3d.ShareSDK HelperCanvasController::ssdk
	ShareSDK_t3009509477 * ___ssdk_3;

public:
	inline static int32_t get_offset_of_ssdk_3() { return static_cast<int32_t>(offsetof(HelperCanvasController_t1993853698, ___ssdk_3)); }
	inline ShareSDK_t3009509477 * get_ssdk_3() const { return ___ssdk_3; }
	inline ShareSDK_t3009509477 ** get_address_of_ssdk_3() { return &___ssdk_3; }
	inline void set_ssdk_3(ShareSDK_t3009509477 * value)
	{
		___ssdk_3 = value;
		Il2CppCodeGenWriteBarrier(&___ssdk_3, value);
	}
};

struct HelperCanvasController_t1993853698_StaticFields
{
public:
	// HelperCanvasController HelperCanvasController::instance
	HelperCanvasController_t1993853698 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(HelperCanvasController_t1993853698_StaticFields, ___instance_2)); }
	inline HelperCanvasController_t1993853698 * get_instance_2() const { return ___instance_2; }
	inline HelperCanvasController_t1993853698 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(HelperCanvasController_t1993853698 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
