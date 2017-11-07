#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NotificationPanelScrollRectController
struct NotificationPanelScrollRectController_t1404149286;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;

#include "UnityEngine_UI_UnityEngine_UI_ScrollRect3606982749.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NotificationPanelScrollRectController
struct  NotificationPanelScrollRectController_t1404149286  : public ScrollRect_t3606982749
{
public:
	// System.Boolean NotificationPanelScrollRectController::canDrag
	bool ___canDrag_39;
	// UnityEngine.EventSystems.PointerEventData NotificationPanelScrollRectController::currentPED
	PointerEventData_t1848751023 * ___currentPED_40;

public:
	inline static int32_t get_offset_of_canDrag_39() { return static_cast<int32_t>(offsetof(NotificationPanelScrollRectController_t1404149286, ___canDrag_39)); }
	inline bool get_canDrag_39() const { return ___canDrag_39; }
	inline bool* get_address_of_canDrag_39() { return &___canDrag_39; }
	inline void set_canDrag_39(bool value)
	{
		___canDrag_39 = value;
	}

	inline static int32_t get_offset_of_currentPED_40() { return static_cast<int32_t>(offsetof(NotificationPanelScrollRectController_t1404149286, ___currentPED_40)); }
	inline PointerEventData_t1848751023 * get_currentPED_40() const { return ___currentPED_40; }
	inline PointerEventData_t1848751023 ** get_address_of_currentPED_40() { return &___currentPED_40; }
	inline void set_currentPED_40(PointerEventData_t1848751023 * value)
	{
		___currentPED_40 = value;
		Il2CppCodeGenWriteBarrier(&___currentPED_40, value);
	}
};

struct NotificationPanelScrollRectController_t1404149286_StaticFields
{
public:
	// NotificationPanelScrollRectController NotificationPanelScrollRectController::instance
	NotificationPanelScrollRectController_t1404149286 * ___instance_38;

public:
	inline static int32_t get_offset_of_instance_38() { return static_cast<int32_t>(offsetof(NotificationPanelScrollRectController_t1404149286_StaticFields, ___instance_38)); }
	inline NotificationPanelScrollRectController_t1404149286 * get_instance_38() const { return ___instance_38; }
	inline NotificationPanelScrollRectController_t1404149286 ** get_address_of_instance_38() { return &___instance_38; }
	inline void set_instance_38(NotificationPanelScrollRectController_t1404149286 * value)
	{
		___instance_38 = value;
		Il2CppCodeGenWriteBarrier(&___instance_38, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
