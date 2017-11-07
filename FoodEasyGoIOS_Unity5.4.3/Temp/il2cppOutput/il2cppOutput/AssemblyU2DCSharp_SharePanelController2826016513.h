#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SharePanelController
struct SharePanelController_t2826016513;
// cn.sharesdk.unity3d.ShareSDK
struct ShareSDK_t3009509477;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SharePanelController
struct  SharePanelController_t2826016513  : public BasePanelController_t1482191247
{
public:
	// cn.sharesdk.unity3d.ShareSDK SharePanelController::ssdk
	ShareSDK_t3009509477 * ___ssdk_6;
	// UnityEngine.Transform SharePanelController::weChatButton
	Transform_t1659122786 * ___weChatButton_7;
	// UnityEngine.Transform SharePanelController::googleButton
	Transform_t1659122786 * ___googleButton_8;
	// UnityEngine.Transform SharePanelController::facebookButton
	Transform_t1659122786 * ___facebookButton_9;
	// UnityEngine.Transform SharePanelController::copyButton
	Transform_t1659122786 * ___copyButton_10;
	// UnityEngine.Transform SharePanelController::cancelButton
	Transform_t1659122786 * ___cancelButton_11;

public:
	inline static int32_t get_offset_of_ssdk_6() { return static_cast<int32_t>(offsetof(SharePanelController_t2826016513, ___ssdk_6)); }
	inline ShareSDK_t3009509477 * get_ssdk_6() const { return ___ssdk_6; }
	inline ShareSDK_t3009509477 ** get_address_of_ssdk_6() { return &___ssdk_6; }
	inline void set_ssdk_6(ShareSDK_t3009509477 * value)
	{
		___ssdk_6 = value;
		Il2CppCodeGenWriteBarrier(&___ssdk_6, value);
	}

	inline static int32_t get_offset_of_weChatButton_7() { return static_cast<int32_t>(offsetof(SharePanelController_t2826016513, ___weChatButton_7)); }
	inline Transform_t1659122786 * get_weChatButton_7() const { return ___weChatButton_7; }
	inline Transform_t1659122786 ** get_address_of_weChatButton_7() { return &___weChatButton_7; }
	inline void set_weChatButton_7(Transform_t1659122786 * value)
	{
		___weChatButton_7 = value;
		Il2CppCodeGenWriteBarrier(&___weChatButton_7, value);
	}

	inline static int32_t get_offset_of_googleButton_8() { return static_cast<int32_t>(offsetof(SharePanelController_t2826016513, ___googleButton_8)); }
	inline Transform_t1659122786 * get_googleButton_8() const { return ___googleButton_8; }
	inline Transform_t1659122786 ** get_address_of_googleButton_8() { return &___googleButton_8; }
	inline void set_googleButton_8(Transform_t1659122786 * value)
	{
		___googleButton_8 = value;
		Il2CppCodeGenWriteBarrier(&___googleButton_8, value);
	}

	inline static int32_t get_offset_of_facebookButton_9() { return static_cast<int32_t>(offsetof(SharePanelController_t2826016513, ___facebookButton_9)); }
	inline Transform_t1659122786 * get_facebookButton_9() const { return ___facebookButton_9; }
	inline Transform_t1659122786 ** get_address_of_facebookButton_9() { return &___facebookButton_9; }
	inline void set_facebookButton_9(Transform_t1659122786 * value)
	{
		___facebookButton_9 = value;
		Il2CppCodeGenWriteBarrier(&___facebookButton_9, value);
	}

	inline static int32_t get_offset_of_copyButton_10() { return static_cast<int32_t>(offsetof(SharePanelController_t2826016513, ___copyButton_10)); }
	inline Transform_t1659122786 * get_copyButton_10() const { return ___copyButton_10; }
	inline Transform_t1659122786 ** get_address_of_copyButton_10() { return &___copyButton_10; }
	inline void set_copyButton_10(Transform_t1659122786 * value)
	{
		___copyButton_10 = value;
		Il2CppCodeGenWriteBarrier(&___copyButton_10, value);
	}

	inline static int32_t get_offset_of_cancelButton_11() { return static_cast<int32_t>(offsetof(SharePanelController_t2826016513, ___cancelButton_11)); }
	inline Transform_t1659122786 * get_cancelButton_11() const { return ___cancelButton_11; }
	inline Transform_t1659122786 ** get_address_of_cancelButton_11() { return &___cancelButton_11; }
	inline void set_cancelButton_11(Transform_t1659122786 * value)
	{
		___cancelButton_11 = value;
		Il2CppCodeGenWriteBarrier(&___cancelButton_11, value);
	}
};

struct SharePanelController_t2826016513_StaticFields
{
public:
	// SharePanelController SharePanelController::instance
	SharePanelController_t2826016513 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(SharePanelController_t2826016513_StaticFields, ___instance_5)); }
	inline SharePanelController_t2826016513 * get_instance_5() const { return ___instance_5; }
	inline SharePanelController_t2826016513 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(SharePanelController_t2826016513 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
