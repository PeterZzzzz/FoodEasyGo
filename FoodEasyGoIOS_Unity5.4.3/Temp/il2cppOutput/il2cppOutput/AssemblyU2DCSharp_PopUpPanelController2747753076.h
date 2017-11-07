#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PopUpPanelController
struct PopUpPanelController_t2747753076;
// TextController
struct TextController_t3861806281;
// System.Action
struct Action_t3771233898;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PopUpPanelController
struct  PopUpPanelController_t2747753076  : public BasePanelController_t1482191247
{
public:
	// TextController PopUpPanelController::title
	TextController_t3861806281 * ___title_6;
	// TextController PopUpPanelController::cancel
	TextController_t3861806281 * ___cancel_7;
	// TextController PopUpPanelController::confirm
	TextController_t3861806281 * ___confirm_8;
	// System.Action PopUpPanelController::cancelAction
	Action_t3771233898 * ___cancelAction_9;
	// System.Action PopUpPanelController::confirmAction
	Action_t3771233898 * ___confirmAction_10;

public:
	inline static int32_t get_offset_of_title_6() { return static_cast<int32_t>(offsetof(PopUpPanelController_t2747753076, ___title_6)); }
	inline TextController_t3861806281 * get_title_6() const { return ___title_6; }
	inline TextController_t3861806281 ** get_address_of_title_6() { return &___title_6; }
	inline void set_title_6(TextController_t3861806281 * value)
	{
		___title_6 = value;
		Il2CppCodeGenWriteBarrier(&___title_6, value);
	}

	inline static int32_t get_offset_of_cancel_7() { return static_cast<int32_t>(offsetof(PopUpPanelController_t2747753076, ___cancel_7)); }
	inline TextController_t3861806281 * get_cancel_7() const { return ___cancel_7; }
	inline TextController_t3861806281 ** get_address_of_cancel_7() { return &___cancel_7; }
	inline void set_cancel_7(TextController_t3861806281 * value)
	{
		___cancel_7 = value;
		Il2CppCodeGenWriteBarrier(&___cancel_7, value);
	}

	inline static int32_t get_offset_of_confirm_8() { return static_cast<int32_t>(offsetof(PopUpPanelController_t2747753076, ___confirm_8)); }
	inline TextController_t3861806281 * get_confirm_8() const { return ___confirm_8; }
	inline TextController_t3861806281 ** get_address_of_confirm_8() { return &___confirm_8; }
	inline void set_confirm_8(TextController_t3861806281 * value)
	{
		___confirm_8 = value;
		Il2CppCodeGenWriteBarrier(&___confirm_8, value);
	}

	inline static int32_t get_offset_of_cancelAction_9() { return static_cast<int32_t>(offsetof(PopUpPanelController_t2747753076, ___cancelAction_9)); }
	inline Action_t3771233898 * get_cancelAction_9() const { return ___cancelAction_9; }
	inline Action_t3771233898 ** get_address_of_cancelAction_9() { return &___cancelAction_9; }
	inline void set_cancelAction_9(Action_t3771233898 * value)
	{
		___cancelAction_9 = value;
		Il2CppCodeGenWriteBarrier(&___cancelAction_9, value);
	}

	inline static int32_t get_offset_of_confirmAction_10() { return static_cast<int32_t>(offsetof(PopUpPanelController_t2747753076, ___confirmAction_10)); }
	inline Action_t3771233898 * get_confirmAction_10() const { return ___confirmAction_10; }
	inline Action_t3771233898 ** get_address_of_confirmAction_10() { return &___confirmAction_10; }
	inline void set_confirmAction_10(Action_t3771233898 * value)
	{
		___confirmAction_10 = value;
		Il2CppCodeGenWriteBarrier(&___confirmAction_10, value);
	}
};

struct PopUpPanelController_t2747753076_StaticFields
{
public:
	// PopUpPanelController PopUpPanelController::instance
	PopUpPanelController_t2747753076 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(PopUpPanelController_t2747753076_StaticFields, ___instance_5)); }
	inline PopUpPanelController_t2747753076 * get_instance_5() const { return ___instance_5; }
	inline PopUpPanelController_t2747753076 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(PopUpPanelController_t2747753076 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
