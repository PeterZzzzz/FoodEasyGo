#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SearchPanelSearchResultScrollRect
struct SearchPanelSearchResultScrollRect_t3394508882;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;

#include "UnityEngine_UI_UnityEngine_UI_ScrollRect3606982749.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SearchPanelSearchResultScrollRect
struct  SearchPanelSearchResultScrollRect_t3394508882  : public ScrollRect_t3606982749
{
public:
	// System.Boolean SearchPanelSearchResultScrollRect::canDrag
	bool ___canDrag_39;
	// UnityEngine.EventSystems.PointerEventData SearchPanelSearchResultScrollRect::currentPED
	PointerEventData_t1848751023 * ___currentPED_40;

public:
	inline static int32_t get_offset_of_canDrag_39() { return static_cast<int32_t>(offsetof(SearchPanelSearchResultScrollRect_t3394508882, ___canDrag_39)); }
	inline bool get_canDrag_39() const { return ___canDrag_39; }
	inline bool* get_address_of_canDrag_39() { return &___canDrag_39; }
	inline void set_canDrag_39(bool value)
	{
		___canDrag_39 = value;
	}

	inline static int32_t get_offset_of_currentPED_40() { return static_cast<int32_t>(offsetof(SearchPanelSearchResultScrollRect_t3394508882, ___currentPED_40)); }
	inline PointerEventData_t1848751023 * get_currentPED_40() const { return ___currentPED_40; }
	inline PointerEventData_t1848751023 ** get_address_of_currentPED_40() { return &___currentPED_40; }
	inline void set_currentPED_40(PointerEventData_t1848751023 * value)
	{
		___currentPED_40 = value;
		Il2CppCodeGenWriteBarrier(&___currentPED_40, value);
	}
};

struct SearchPanelSearchResultScrollRect_t3394508882_StaticFields
{
public:
	// SearchPanelSearchResultScrollRect SearchPanelSearchResultScrollRect::instance
	SearchPanelSearchResultScrollRect_t3394508882 * ___instance_38;

public:
	inline static int32_t get_offset_of_instance_38() { return static_cast<int32_t>(offsetof(SearchPanelSearchResultScrollRect_t3394508882_StaticFields, ___instance_38)); }
	inline SearchPanelSearchResultScrollRect_t3394508882 * get_instance_38() const { return ___instance_38; }
	inline SearchPanelSearchResultScrollRect_t3394508882 ** get_address_of_instance_38() { return &___instance_38; }
	inline void set_instance_38(SearchPanelSearchResultScrollRect_t3394508882 * value)
	{
		___instance_38 = value;
		Il2CppCodeGenWriteBarrier(&___instance_38, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
