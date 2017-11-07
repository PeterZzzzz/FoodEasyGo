#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RecruitPanel
struct RecruitPanel_t2866855302;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// UnityEngine.Events.UnityAction`2<JSONObject,System.String>
struct UnityAction_2_t3241238934;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RecruitPanel
struct  RecruitPanel_t2866855302  : public BasePanelController_t1482191247
{
public:
	// UnityEngine.GameObject RecruitPanel::jobpositionBar
	GameObject_t3674682005 * ___jobpositionBar_6;
	// UnityEngine.UI.ScrollRect RecruitPanel::defaultScrollRect
	ScrollRect_t3606982749 * ___defaultScrollRect_7;

public:
	inline static int32_t get_offset_of_jobpositionBar_6() { return static_cast<int32_t>(offsetof(RecruitPanel_t2866855302, ___jobpositionBar_6)); }
	inline GameObject_t3674682005 * get_jobpositionBar_6() const { return ___jobpositionBar_6; }
	inline GameObject_t3674682005 ** get_address_of_jobpositionBar_6() { return &___jobpositionBar_6; }
	inline void set_jobpositionBar_6(GameObject_t3674682005 * value)
	{
		___jobpositionBar_6 = value;
		Il2CppCodeGenWriteBarrier(&___jobpositionBar_6, value);
	}

	inline static int32_t get_offset_of_defaultScrollRect_7() { return static_cast<int32_t>(offsetof(RecruitPanel_t2866855302, ___defaultScrollRect_7)); }
	inline ScrollRect_t3606982749 * get_defaultScrollRect_7() const { return ___defaultScrollRect_7; }
	inline ScrollRect_t3606982749 ** get_address_of_defaultScrollRect_7() { return &___defaultScrollRect_7; }
	inline void set_defaultScrollRect_7(ScrollRect_t3606982749 * value)
	{
		___defaultScrollRect_7 = value;
		Il2CppCodeGenWriteBarrier(&___defaultScrollRect_7, value);
	}
};

struct RecruitPanel_t2866855302_StaticFields
{
public:
	// RecruitPanel RecruitPanel::instance
	RecruitPanel_t2866855302 * ___instance_5;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> RecruitPanel::<>f__am$cache3
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache3_8;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(RecruitPanel_t2866855302_StaticFields, ___instance_5)); }
	inline RecruitPanel_t2866855302 * get_instance_5() const { return ___instance_5; }
	inline RecruitPanel_t2866855302 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(RecruitPanel_t2866855302 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_8() { return static_cast<int32_t>(offsetof(RecruitPanel_t2866855302_StaticFields, ___U3CU3Ef__amU24cache3_8)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache3_8() const { return ___U3CU3Ef__amU24cache3_8; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache3_8() { return &___U3CU3Ef__amU24cache3_8; }
	inline void set_U3CU3Ef__amU24cache3_8(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache3_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
