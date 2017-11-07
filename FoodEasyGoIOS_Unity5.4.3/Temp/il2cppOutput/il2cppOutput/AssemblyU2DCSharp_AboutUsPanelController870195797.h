#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AboutUsPanelController
struct AboutUsPanelController_t870195797;
// TextController
struct TextController_t3861806281;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.Events.UnityAction`2<JSONObject,System.String>
struct UnityAction_2_t3241238934;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AboutUsPanelController
struct  AboutUsPanelController_t870195797  : public BasePanelController_t1482191247
{
public:
	// TextController AboutUsPanelController::contactSectionLeft
	TextController_t3861806281 * ___contactSectionLeft_6;
	// TextController AboutUsPanelController::contactSectionRight
	TextController_t3861806281 * ___contactSectionRight_7;
	// UnityEngine.UI.Text AboutUsPanelController::versionText
	Text_t9039225 * ___versionText_8;

public:
	inline static int32_t get_offset_of_contactSectionLeft_6() { return static_cast<int32_t>(offsetof(AboutUsPanelController_t870195797, ___contactSectionLeft_6)); }
	inline TextController_t3861806281 * get_contactSectionLeft_6() const { return ___contactSectionLeft_6; }
	inline TextController_t3861806281 ** get_address_of_contactSectionLeft_6() { return &___contactSectionLeft_6; }
	inline void set_contactSectionLeft_6(TextController_t3861806281 * value)
	{
		___contactSectionLeft_6 = value;
		Il2CppCodeGenWriteBarrier(&___contactSectionLeft_6, value);
	}

	inline static int32_t get_offset_of_contactSectionRight_7() { return static_cast<int32_t>(offsetof(AboutUsPanelController_t870195797, ___contactSectionRight_7)); }
	inline TextController_t3861806281 * get_contactSectionRight_7() const { return ___contactSectionRight_7; }
	inline TextController_t3861806281 ** get_address_of_contactSectionRight_7() { return &___contactSectionRight_7; }
	inline void set_contactSectionRight_7(TextController_t3861806281 * value)
	{
		___contactSectionRight_7 = value;
		Il2CppCodeGenWriteBarrier(&___contactSectionRight_7, value);
	}

	inline static int32_t get_offset_of_versionText_8() { return static_cast<int32_t>(offsetof(AboutUsPanelController_t870195797, ___versionText_8)); }
	inline Text_t9039225 * get_versionText_8() const { return ___versionText_8; }
	inline Text_t9039225 ** get_address_of_versionText_8() { return &___versionText_8; }
	inline void set_versionText_8(Text_t9039225 * value)
	{
		___versionText_8 = value;
		Il2CppCodeGenWriteBarrier(&___versionText_8, value);
	}
};

struct AboutUsPanelController_t870195797_StaticFields
{
public:
	// AboutUsPanelController AboutUsPanelController::instance
	AboutUsPanelController_t870195797 * ___instance_5;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> AboutUsPanelController::<>f__am$cache4
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache4_9;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(AboutUsPanelController_t870195797_StaticFields, ___instance_5)); }
	inline AboutUsPanelController_t870195797 * get_instance_5() const { return ___instance_5; }
	inline AboutUsPanelController_t870195797 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(AboutUsPanelController_t870195797 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_9() { return static_cast<int32_t>(offsetof(AboutUsPanelController_t870195797_StaticFields, ___U3CU3Ef__amU24cache4_9)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache4_9() const { return ___U3CU3Ef__amU24cache4_9; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache4_9() { return &___U3CU3Ef__amU24cache4_9; }
	inline void set_U3CU3Ef__amU24cache4_9(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache4_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
