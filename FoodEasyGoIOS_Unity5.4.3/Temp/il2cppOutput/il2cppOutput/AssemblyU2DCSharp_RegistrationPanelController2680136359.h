#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RegistrationPanelController
struct RegistrationPanelController_t2680136359;
// InputFieldController
struct InputFieldController_t3567925036;
// UnityEngine.UI.Button
struct Button_t3896396478;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.Events.UnityAction`2<JSONObject,System.String>
struct UnityAction_2_t3241238934;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RegistrationPanelController
struct  RegistrationPanelController_t2680136359  : public BasePanelController_t1482191247
{
public:
	// InputFieldController RegistrationPanelController::emailInputField
	InputFieldController_t3567925036 * ___emailInputField_6;
	// InputFieldController RegistrationPanelController::passwordInputField
	InputFieldController_t3567925036 * ___passwordInputField_7;
	// InputFieldController RegistrationPanelController::repasswordInputField
	InputFieldController_t3567925036 * ___repasswordInputField_8;
	// InputFieldController RegistrationPanelController::invitationCodeInputField
	InputFieldController_t3567925036 * ___invitationCodeInputField_9;
	// UnityEngine.UI.Button RegistrationPanelController::registrationButton
	Button_t3896396478 * ___registrationButton_10;
	// UnityEngine.RectTransform RegistrationPanelController::logoTransform
	RectTransform_t972643934 * ___logoTransform_11;

public:
	inline static int32_t get_offset_of_emailInputField_6() { return static_cast<int32_t>(offsetof(RegistrationPanelController_t2680136359, ___emailInputField_6)); }
	inline InputFieldController_t3567925036 * get_emailInputField_6() const { return ___emailInputField_6; }
	inline InputFieldController_t3567925036 ** get_address_of_emailInputField_6() { return &___emailInputField_6; }
	inline void set_emailInputField_6(InputFieldController_t3567925036 * value)
	{
		___emailInputField_6 = value;
		Il2CppCodeGenWriteBarrier(&___emailInputField_6, value);
	}

	inline static int32_t get_offset_of_passwordInputField_7() { return static_cast<int32_t>(offsetof(RegistrationPanelController_t2680136359, ___passwordInputField_7)); }
	inline InputFieldController_t3567925036 * get_passwordInputField_7() const { return ___passwordInputField_7; }
	inline InputFieldController_t3567925036 ** get_address_of_passwordInputField_7() { return &___passwordInputField_7; }
	inline void set_passwordInputField_7(InputFieldController_t3567925036 * value)
	{
		___passwordInputField_7 = value;
		Il2CppCodeGenWriteBarrier(&___passwordInputField_7, value);
	}

	inline static int32_t get_offset_of_repasswordInputField_8() { return static_cast<int32_t>(offsetof(RegistrationPanelController_t2680136359, ___repasswordInputField_8)); }
	inline InputFieldController_t3567925036 * get_repasswordInputField_8() const { return ___repasswordInputField_8; }
	inline InputFieldController_t3567925036 ** get_address_of_repasswordInputField_8() { return &___repasswordInputField_8; }
	inline void set_repasswordInputField_8(InputFieldController_t3567925036 * value)
	{
		___repasswordInputField_8 = value;
		Il2CppCodeGenWriteBarrier(&___repasswordInputField_8, value);
	}

	inline static int32_t get_offset_of_invitationCodeInputField_9() { return static_cast<int32_t>(offsetof(RegistrationPanelController_t2680136359, ___invitationCodeInputField_9)); }
	inline InputFieldController_t3567925036 * get_invitationCodeInputField_9() const { return ___invitationCodeInputField_9; }
	inline InputFieldController_t3567925036 ** get_address_of_invitationCodeInputField_9() { return &___invitationCodeInputField_9; }
	inline void set_invitationCodeInputField_9(InputFieldController_t3567925036 * value)
	{
		___invitationCodeInputField_9 = value;
		Il2CppCodeGenWriteBarrier(&___invitationCodeInputField_9, value);
	}

	inline static int32_t get_offset_of_registrationButton_10() { return static_cast<int32_t>(offsetof(RegistrationPanelController_t2680136359, ___registrationButton_10)); }
	inline Button_t3896396478 * get_registrationButton_10() const { return ___registrationButton_10; }
	inline Button_t3896396478 ** get_address_of_registrationButton_10() { return &___registrationButton_10; }
	inline void set_registrationButton_10(Button_t3896396478 * value)
	{
		___registrationButton_10 = value;
		Il2CppCodeGenWriteBarrier(&___registrationButton_10, value);
	}

	inline static int32_t get_offset_of_logoTransform_11() { return static_cast<int32_t>(offsetof(RegistrationPanelController_t2680136359, ___logoTransform_11)); }
	inline RectTransform_t972643934 * get_logoTransform_11() const { return ___logoTransform_11; }
	inline RectTransform_t972643934 ** get_address_of_logoTransform_11() { return &___logoTransform_11; }
	inline void set_logoTransform_11(RectTransform_t972643934 * value)
	{
		___logoTransform_11 = value;
		Il2CppCodeGenWriteBarrier(&___logoTransform_11, value);
	}
};

struct RegistrationPanelController_t2680136359_StaticFields
{
public:
	// RegistrationPanelController RegistrationPanelController::instance
	RegistrationPanelController_t2680136359 * ___instance_5;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> RegistrationPanelController::<>f__am$cache7
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache7_12;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(RegistrationPanelController_t2680136359_StaticFields, ___instance_5)); }
	inline RegistrationPanelController_t2680136359 * get_instance_5() const { return ___instance_5; }
	inline RegistrationPanelController_t2680136359 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(RegistrationPanelController_t2680136359 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_12() { return static_cast<int32_t>(offsetof(RegistrationPanelController_t2680136359_StaticFields, ___U3CU3Ef__amU24cache7_12)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache7_12() const { return ___U3CU3Ef__amU24cache7_12; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache7_12() { return &___U3CU3Ef__amU24cache7_12; }
	inline void set_U3CU3Ef__amU24cache7_12(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache7_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
