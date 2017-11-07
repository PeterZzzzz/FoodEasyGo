#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PopUpTogglePanelController
struct PopUpTogglePanelController_t2896082304;
// UnityEngine.Transform
struct Transform_t1659122786;
// LDFW.UI.LDFWToggleController
struct LDFWToggleController_t986233105;
// TextController
struct TextController_t3861806281;
// System.Action
struct Action_t3771233898;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PopUpTogglePanelController
struct  PopUpTogglePanelController_t2896082304  : public BasePanelController_t1482191247
{
public:
	// UnityEngine.Transform PopUpTogglePanelController::togglePanel
	Transform_t1659122786 * ___togglePanel_6;
	// LDFW.UI.LDFWToggleController PopUpTogglePanelController::toggleController
	LDFWToggleController_t986233105 * ___toggleController_7;
	// UnityEngine.Transform PopUpTogglePanelController::toggleElementTemplate
	Transform_t1659122786 * ___toggleElementTemplate_8;
	// TextController PopUpTogglePanelController::title
	TextController_t3861806281 * ___title_9;
	// TextController PopUpTogglePanelController::cancel
	TextController_t3861806281 * ___cancel_10;
	// TextController PopUpTogglePanelController::confirm
	TextController_t3861806281 * ___confirm_11;
	// System.Action PopUpTogglePanelController::cancelAction
	Action_t3771233898 * ___cancelAction_12;
	// System.Action PopUpTogglePanelController::confirmAction
	Action_t3771233898 * ___confirmAction_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PopUpTogglePanelController::tempGOList
	List_1_t747900261 * ___tempGOList_14;

public:
	inline static int32_t get_offset_of_togglePanel_6() { return static_cast<int32_t>(offsetof(PopUpTogglePanelController_t2896082304, ___togglePanel_6)); }
	inline Transform_t1659122786 * get_togglePanel_6() const { return ___togglePanel_6; }
	inline Transform_t1659122786 ** get_address_of_togglePanel_6() { return &___togglePanel_6; }
	inline void set_togglePanel_6(Transform_t1659122786 * value)
	{
		___togglePanel_6 = value;
		Il2CppCodeGenWriteBarrier(&___togglePanel_6, value);
	}

	inline static int32_t get_offset_of_toggleController_7() { return static_cast<int32_t>(offsetof(PopUpTogglePanelController_t2896082304, ___toggleController_7)); }
	inline LDFWToggleController_t986233105 * get_toggleController_7() const { return ___toggleController_7; }
	inline LDFWToggleController_t986233105 ** get_address_of_toggleController_7() { return &___toggleController_7; }
	inline void set_toggleController_7(LDFWToggleController_t986233105 * value)
	{
		___toggleController_7 = value;
		Il2CppCodeGenWriteBarrier(&___toggleController_7, value);
	}

	inline static int32_t get_offset_of_toggleElementTemplate_8() { return static_cast<int32_t>(offsetof(PopUpTogglePanelController_t2896082304, ___toggleElementTemplate_8)); }
	inline Transform_t1659122786 * get_toggleElementTemplate_8() const { return ___toggleElementTemplate_8; }
	inline Transform_t1659122786 ** get_address_of_toggleElementTemplate_8() { return &___toggleElementTemplate_8; }
	inline void set_toggleElementTemplate_8(Transform_t1659122786 * value)
	{
		___toggleElementTemplate_8 = value;
		Il2CppCodeGenWriteBarrier(&___toggleElementTemplate_8, value);
	}

	inline static int32_t get_offset_of_title_9() { return static_cast<int32_t>(offsetof(PopUpTogglePanelController_t2896082304, ___title_9)); }
	inline TextController_t3861806281 * get_title_9() const { return ___title_9; }
	inline TextController_t3861806281 ** get_address_of_title_9() { return &___title_9; }
	inline void set_title_9(TextController_t3861806281 * value)
	{
		___title_9 = value;
		Il2CppCodeGenWriteBarrier(&___title_9, value);
	}

	inline static int32_t get_offset_of_cancel_10() { return static_cast<int32_t>(offsetof(PopUpTogglePanelController_t2896082304, ___cancel_10)); }
	inline TextController_t3861806281 * get_cancel_10() const { return ___cancel_10; }
	inline TextController_t3861806281 ** get_address_of_cancel_10() { return &___cancel_10; }
	inline void set_cancel_10(TextController_t3861806281 * value)
	{
		___cancel_10 = value;
		Il2CppCodeGenWriteBarrier(&___cancel_10, value);
	}

	inline static int32_t get_offset_of_confirm_11() { return static_cast<int32_t>(offsetof(PopUpTogglePanelController_t2896082304, ___confirm_11)); }
	inline TextController_t3861806281 * get_confirm_11() const { return ___confirm_11; }
	inline TextController_t3861806281 ** get_address_of_confirm_11() { return &___confirm_11; }
	inline void set_confirm_11(TextController_t3861806281 * value)
	{
		___confirm_11 = value;
		Il2CppCodeGenWriteBarrier(&___confirm_11, value);
	}

	inline static int32_t get_offset_of_cancelAction_12() { return static_cast<int32_t>(offsetof(PopUpTogglePanelController_t2896082304, ___cancelAction_12)); }
	inline Action_t3771233898 * get_cancelAction_12() const { return ___cancelAction_12; }
	inline Action_t3771233898 ** get_address_of_cancelAction_12() { return &___cancelAction_12; }
	inline void set_cancelAction_12(Action_t3771233898 * value)
	{
		___cancelAction_12 = value;
		Il2CppCodeGenWriteBarrier(&___cancelAction_12, value);
	}

	inline static int32_t get_offset_of_confirmAction_13() { return static_cast<int32_t>(offsetof(PopUpTogglePanelController_t2896082304, ___confirmAction_13)); }
	inline Action_t3771233898 * get_confirmAction_13() const { return ___confirmAction_13; }
	inline Action_t3771233898 ** get_address_of_confirmAction_13() { return &___confirmAction_13; }
	inline void set_confirmAction_13(Action_t3771233898 * value)
	{
		___confirmAction_13 = value;
		Il2CppCodeGenWriteBarrier(&___confirmAction_13, value);
	}

	inline static int32_t get_offset_of_tempGOList_14() { return static_cast<int32_t>(offsetof(PopUpTogglePanelController_t2896082304, ___tempGOList_14)); }
	inline List_1_t747900261 * get_tempGOList_14() const { return ___tempGOList_14; }
	inline List_1_t747900261 ** get_address_of_tempGOList_14() { return &___tempGOList_14; }
	inline void set_tempGOList_14(List_1_t747900261 * value)
	{
		___tempGOList_14 = value;
		Il2CppCodeGenWriteBarrier(&___tempGOList_14, value);
	}
};

struct PopUpTogglePanelController_t2896082304_StaticFields
{
public:
	// PopUpTogglePanelController PopUpTogglePanelController::instance
	PopUpTogglePanelController_t2896082304 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(PopUpTogglePanelController_t2896082304_StaticFields, ___instance_5)); }
	inline PopUpTogglePanelController_t2896082304 * get_instance_5() const { return ___instance_5; }
	inline PopUpTogglePanelController_t2896082304 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(PopUpTogglePanelController_t2896082304 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
