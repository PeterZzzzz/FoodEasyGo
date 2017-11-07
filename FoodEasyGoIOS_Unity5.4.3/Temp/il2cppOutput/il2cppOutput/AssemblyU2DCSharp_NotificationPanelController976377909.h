#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NotificationPanelController
struct NotificationPanelController_t976377909;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// NotificationPanelEndlessScrollController
struct NotificationPanelEndlessScrollController_t3950638948;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NotificationPanelController
struct  NotificationPanelController_t976377909  : public BasePanelController_t1482191247
{
public:
	// UnityEngine.UI.ScrollRect NotificationPanelController::scrollRect
	ScrollRect_t3606982749 * ___scrollRect_6;
	// NotificationPanelEndlessScrollController NotificationPanelController::endlessScrollController
	NotificationPanelEndlessScrollController_t3950638948 * ___endlessScrollController_7;

public:
	inline static int32_t get_offset_of_scrollRect_6() { return static_cast<int32_t>(offsetof(NotificationPanelController_t976377909, ___scrollRect_6)); }
	inline ScrollRect_t3606982749 * get_scrollRect_6() const { return ___scrollRect_6; }
	inline ScrollRect_t3606982749 ** get_address_of_scrollRect_6() { return &___scrollRect_6; }
	inline void set_scrollRect_6(ScrollRect_t3606982749 * value)
	{
		___scrollRect_6 = value;
		Il2CppCodeGenWriteBarrier(&___scrollRect_6, value);
	}

	inline static int32_t get_offset_of_endlessScrollController_7() { return static_cast<int32_t>(offsetof(NotificationPanelController_t976377909, ___endlessScrollController_7)); }
	inline NotificationPanelEndlessScrollController_t3950638948 * get_endlessScrollController_7() const { return ___endlessScrollController_7; }
	inline NotificationPanelEndlessScrollController_t3950638948 ** get_address_of_endlessScrollController_7() { return &___endlessScrollController_7; }
	inline void set_endlessScrollController_7(NotificationPanelEndlessScrollController_t3950638948 * value)
	{
		___endlessScrollController_7 = value;
		Il2CppCodeGenWriteBarrier(&___endlessScrollController_7, value);
	}
};

struct NotificationPanelController_t976377909_StaticFields
{
public:
	// NotificationPanelController NotificationPanelController::instance
	NotificationPanelController_t976377909 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(NotificationPanelController_t976377909_StaticFields, ___instance_5)); }
	inline NotificationPanelController_t976377909 * get_instance_5() const { return ___instance_5; }
	inline NotificationPanelController_t976377909 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(NotificationPanelController_t976377909 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
