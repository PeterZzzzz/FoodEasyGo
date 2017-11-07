#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;

#include "UnityEngine_UI_UnityEngine_UI_ScrollRect3606982749.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestaurantPanelMainScrollRectController
struct  RestaurantPanelMainScrollRectController_t2669501421  : public ScrollRect_t3606982749
{
public:
	// UnityEngine.EventSystems.PointerEventData RestaurantPanelMainScrollRectController::currentPED
	PointerEventData_t1848751023 * ___currentPED_38;
	// System.Boolean RestaurantPanelMainScrollRectController::canDrag
	bool ___canDrag_39;

public:
	inline static int32_t get_offset_of_currentPED_38() { return static_cast<int32_t>(offsetof(RestaurantPanelMainScrollRectController_t2669501421, ___currentPED_38)); }
	inline PointerEventData_t1848751023 * get_currentPED_38() const { return ___currentPED_38; }
	inline PointerEventData_t1848751023 ** get_address_of_currentPED_38() { return &___currentPED_38; }
	inline void set_currentPED_38(PointerEventData_t1848751023 * value)
	{
		___currentPED_38 = value;
		Il2CppCodeGenWriteBarrier(&___currentPED_38, value);
	}

	inline static int32_t get_offset_of_canDrag_39() { return static_cast<int32_t>(offsetof(RestaurantPanelMainScrollRectController_t2669501421, ___canDrag_39)); }
	inline bool get_canDrag_39() const { return ___canDrag_39; }
	inline bool* get_address_of_canDrag_39() { return &___canDrag_39; }
	inline void set_canDrag_39(bool value)
	{
		___canDrag_39 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
