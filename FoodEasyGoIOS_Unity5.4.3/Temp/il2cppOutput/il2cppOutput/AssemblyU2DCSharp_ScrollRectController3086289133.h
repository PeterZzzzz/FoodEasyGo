#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;

#include "UnityEngine_UI_UnityEngine_UI_ScrollRect3606982749.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollRectController
struct  ScrollRectController_t3086289133  : public ScrollRect_t3606982749
{
public:
	// UnityEngine.UI.ScrollRect ScrollRectController::parentScrollRect
	ScrollRect_t3606982749 * ___parentScrollRect_38;
	// System.Boolean ScrollRectController::dragEventSendLock
	bool ___dragEventSendLock_39;
	// System.Boolean ScrollRectController::sendDragEventToParent
	bool ___sendDragEventToParent_40;

public:
	inline static int32_t get_offset_of_parentScrollRect_38() { return static_cast<int32_t>(offsetof(ScrollRectController_t3086289133, ___parentScrollRect_38)); }
	inline ScrollRect_t3606982749 * get_parentScrollRect_38() const { return ___parentScrollRect_38; }
	inline ScrollRect_t3606982749 ** get_address_of_parentScrollRect_38() { return &___parentScrollRect_38; }
	inline void set_parentScrollRect_38(ScrollRect_t3606982749 * value)
	{
		___parentScrollRect_38 = value;
		Il2CppCodeGenWriteBarrier(&___parentScrollRect_38, value);
	}

	inline static int32_t get_offset_of_dragEventSendLock_39() { return static_cast<int32_t>(offsetof(ScrollRectController_t3086289133, ___dragEventSendLock_39)); }
	inline bool get_dragEventSendLock_39() const { return ___dragEventSendLock_39; }
	inline bool* get_address_of_dragEventSendLock_39() { return &___dragEventSendLock_39; }
	inline void set_dragEventSendLock_39(bool value)
	{
		___dragEventSendLock_39 = value;
	}

	inline static int32_t get_offset_of_sendDragEventToParent_40() { return static_cast<int32_t>(offsetof(ScrollRectController_t3086289133, ___sendDragEventToParent_40)); }
	inline bool get_sendDragEventToParent_40() const { return ___sendDragEventToParent_40; }
	inline bool* get_address_of_sendDragEventToParent_40() { return &___sendDragEventToParent_40; }
	inline void set_sendDragEventToParent_40(bool value)
	{
		___sendDragEventToParent_40 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
