#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RestaurantDetailPanelCategoryScrollRectController
struct RestaurantDetailPanelCategoryScrollRectController_t545198753;
// RestaurantDetailPanelMainScrollRectController
struct RestaurantDetailPanelMainScrollRectController_t3410164444;

#include "UnityEngine_UI_UnityEngine_UI_ScrollRect3606982749.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestaurantDetailPanelCategoryScrollRectController
struct  RestaurantDetailPanelCategoryScrollRectController_t545198753  : public ScrollRect_t3606982749
{
public:
	// RestaurantDetailPanelMainScrollRectController RestaurantDetailPanelCategoryScrollRectController::mainScrollRect
	RestaurantDetailPanelMainScrollRectController_t3410164444 * ___mainScrollRect_39;
	// System.Boolean RestaurantDetailPanelCategoryScrollRectController::sendToparent
	bool ___sendToparent_40;

public:
	inline static int32_t get_offset_of_mainScrollRect_39() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelCategoryScrollRectController_t545198753, ___mainScrollRect_39)); }
	inline RestaurantDetailPanelMainScrollRectController_t3410164444 * get_mainScrollRect_39() const { return ___mainScrollRect_39; }
	inline RestaurantDetailPanelMainScrollRectController_t3410164444 ** get_address_of_mainScrollRect_39() { return &___mainScrollRect_39; }
	inline void set_mainScrollRect_39(RestaurantDetailPanelMainScrollRectController_t3410164444 * value)
	{
		___mainScrollRect_39 = value;
		Il2CppCodeGenWriteBarrier(&___mainScrollRect_39, value);
	}

	inline static int32_t get_offset_of_sendToparent_40() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelCategoryScrollRectController_t545198753, ___sendToparent_40)); }
	inline bool get_sendToparent_40() const { return ___sendToparent_40; }
	inline bool* get_address_of_sendToparent_40() { return &___sendToparent_40; }
	inline void set_sendToparent_40(bool value)
	{
		___sendToparent_40 = value;
	}
};

struct RestaurantDetailPanelCategoryScrollRectController_t545198753_StaticFields
{
public:
	// RestaurantDetailPanelCategoryScrollRectController RestaurantDetailPanelCategoryScrollRectController::instance
	RestaurantDetailPanelCategoryScrollRectController_t545198753 * ___instance_38;

public:
	inline static int32_t get_offset_of_instance_38() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelCategoryScrollRectController_t545198753_StaticFields, ___instance_38)); }
	inline RestaurantDetailPanelCategoryScrollRectController_t545198753 * get_instance_38() const { return ___instance_38; }
	inline RestaurantDetailPanelCategoryScrollRectController_t545198753 ** get_address_of_instance_38() { return &___instance_38; }
	inline void set_instance_38(RestaurantDetailPanelCategoryScrollRectController_t545198753 * value)
	{
		___instance_38 = value;
		Il2CppCodeGenWriteBarrier(&___instance_38, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
