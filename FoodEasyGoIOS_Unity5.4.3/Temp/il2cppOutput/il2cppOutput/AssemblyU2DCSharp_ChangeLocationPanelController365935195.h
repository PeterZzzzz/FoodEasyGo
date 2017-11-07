#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ChangeLocationPanelController
struct ChangeLocationPanelController_t365935195;
// InputFieldController
struct InputFieldController_t3567925036;
// UnityEngine.UI.Button
struct Button_t3896396478;
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t2572795273;
// UnityEngine.Events.UnityAction`2<JSONObject,System.String>
struct UnityAction_2_t3241238934;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeLocationPanelController
struct  ChangeLocationPanelController_t365935195  : public BasePanelController_t1482191247
{
public:
	// InputFieldController ChangeLocationPanelController::manualZipCodeInputField
	InputFieldController_t3567925036 * ___manualZipCodeInputField_6;
	// UnityEngine.UI.Button ChangeLocationPanelController::manualZipCodeSubmitButton
	Button_t3896396478 * ___manualZipCodeSubmitButton_7;
	// System.Collections.Generic.Dictionary`2<System.String,JSONObject> ChangeLocationPanelController::regionDic
	Dictionary_2_t2572795273 * ___regionDic_8;

public:
	inline static int32_t get_offset_of_manualZipCodeInputField_6() { return static_cast<int32_t>(offsetof(ChangeLocationPanelController_t365935195, ___manualZipCodeInputField_6)); }
	inline InputFieldController_t3567925036 * get_manualZipCodeInputField_6() const { return ___manualZipCodeInputField_6; }
	inline InputFieldController_t3567925036 ** get_address_of_manualZipCodeInputField_6() { return &___manualZipCodeInputField_6; }
	inline void set_manualZipCodeInputField_6(InputFieldController_t3567925036 * value)
	{
		___manualZipCodeInputField_6 = value;
		Il2CppCodeGenWriteBarrier(&___manualZipCodeInputField_6, value);
	}

	inline static int32_t get_offset_of_manualZipCodeSubmitButton_7() { return static_cast<int32_t>(offsetof(ChangeLocationPanelController_t365935195, ___manualZipCodeSubmitButton_7)); }
	inline Button_t3896396478 * get_manualZipCodeSubmitButton_7() const { return ___manualZipCodeSubmitButton_7; }
	inline Button_t3896396478 ** get_address_of_manualZipCodeSubmitButton_7() { return &___manualZipCodeSubmitButton_7; }
	inline void set_manualZipCodeSubmitButton_7(Button_t3896396478 * value)
	{
		___manualZipCodeSubmitButton_7 = value;
		Il2CppCodeGenWriteBarrier(&___manualZipCodeSubmitButton_7, value);
	}

	inline static int32_t get_offset_of_regionDic_8() { return static_cast<int32_t>(offsetof(ChangeLocationPanelController_t365935195, ___regionDic_8)); }
	inline Dictionary_2_t2572795273 * get_regionDic_8() const { return ___regionDic_8; }
	inline Dictionary_2_t2572795273 ** get_address_of_regionDic_8() { return &___regionDic_8; }
	inline void set_regionDic_8(Dictionary_2_t2572795273 * value)
	{
		___regionDic_8 = value;
		Il2CppCodeGenWriteBarrier(&___regionDic_8, value);
	}
};

struct ChangeLocationPanelController_t365935195_StaticFields
{
public:
	// ChangeLocationPanelController ChangeLocationPanelController::instance
	ChangeLocationPanelController_t365935195 * ___instance_5;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> ChangeLocationPanelController::<>f__am$cache4
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache4_9;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(ChangeLocationPanelController_t365935195_StaticFields, ___instance_5)); }
	inline ChangeLocationPanelController_t365935195 * get_instance_5() const { return ___instance_5; }
	inline ChangeLocationPanelController_t365935195 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(ChangeLocationPanelController_t365935195 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_9() { return static_cast<int32_t>(offsetof(ChangeLocationPanelController_t365935195_StaticFields, ___U3CU3Ef__amU24cache4_9)); }
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
