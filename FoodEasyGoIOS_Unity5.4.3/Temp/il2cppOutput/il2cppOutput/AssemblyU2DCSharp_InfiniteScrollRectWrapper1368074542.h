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
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfiniteScrollRectWrapper
struct  InfiniteScrollRectWrapper_t1368074542  : public ScrollRect_t3606982749
{
public:
	// UnityEngine.EventSystems.PointerEventData InfiniteScrollRectWrapper::currentPED
	PointerEventData_t1848751023 * ___currentPED_38;
	// UnityEngine.Vector2 InfiniteScrollRectWrapper::currentVelocity
	Vector2_t4282066565  ___currentVelocity_39;
	// System.Boolean InfiniteScrollRectWrapper::isDragging
	bool ___isDragging_40;

public:
	inline static int32_t get_offset_of_currentPED_38() { return static_cast<int32_t>(offsetof(InfiniteScrollRectWrapper_t1368074542, ___currentPED_38)); }
	inline PointerEventData_t1848751023 * get_currentPED_38() const { return ___currentPED_38; }
	inline PointerEventData_t1848751023 ** get_address_of_currentPED_38() { return &___currentPED_38; }
	inline void set_currentPED_38(PointerEventData_t1848751023 * value)
	{
		___currentPED_38 = value;
		Il2CppCodeGenWriteBarrier(&___currentPED_38, value);
	}

	inline static int32_t get_offset_of_currentVelocity_39() { return static_cast<int32_t>(offsetof(InfiniteScrollRectWrapper_t1368074542, ___currentVelocity_39)); }
	inline Vector2_t4282066565  get_currentVelocity_39() const { return ___currentVelocity_39; }
	inline Vector2_t4282066565 * get_address_of_currentVelocity_39() { return &___currentVelocity_39; }
	inline void set_currentVelocity_39(Vector2_t4282066565  value)
	{
		___currentVelocity_39 = value;
	}

	inline static int32_t get_offset_of_isDragging_40() { return static_cast<int32_t>(offsetof(InfiniteScrollRectWrapper_t1368074542, ___isDragging_40)); }
	inline bool get_isDragging_40() const { return ___isDragging_40; }
	inline bool* get_address_of_isDragging_40() { return &___isDragging_40; }
	inline void set_isDragging_40(bool value)
	{
		___isDragging_40 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
