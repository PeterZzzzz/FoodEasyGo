#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PanelListController
struct PanelListController_t3144944094;
// System.Collections.Generic.List`1<BasePanelController>
struct List_1_t2850376799;
// System.Action
struct Action_t3771233898;
// BasePanelController
struct BasePanelController_t1482191247;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelListController
struct  PanelListController_t3144944094  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<BasePanelController> PanelListController::panelList
	List_1_t2850376799 * ___panelList_3;
	// System.Action PanelListController::removePanelAction
	Action_t3771233898 * ___removePanelAction_4;
	// BasePanelController PanelListController::currentBasePanel
	BasePanelController_t1482191247 * ___currentBasePanel_5;

public:
	inline static int32_t get_offset_of_panelList_3() { return static_cast<int32_t>(offsetof(PanelListController_t3144944094, ___panelList_3)); }
	inline List_1_t2850376799 * get_panelList_3() const { return ___panelList_3; }
	inline List_1_t2850376799 ** get_address_of_panelList_3() { return &___panelList_3; }
	inline void set_panelList_3(List_1_t2850376799 * value)
	{
		___panelList_3 = value;
		Il2CppCodeGenWriteBarrier(&___panelList_3, value);
	}

	inline static int32_t get_offset_of_removePanelAction_4() { return static_cast<int32_t>(offsetof(PanelListController_t3144944094, ___removePanelAction_4)); }
	inline Action_t3771233898 * get_removePanelAction_4() const { return ___removePanelAction_4; }
	inline Action_t3771233898 ** get_address_of_removePanelAction_4() { return &___removePanelAction_4; }
	inline void set_removePanelAction_4(Action_t3771233898 * value)
	{
		___removePanelAction_4 = value;
		Il2CppCodeGenWriteBarrier(&___removePanelAction_4, value);
	}

	inline static int32_t get_offset_of_currentBasePanel_5() { return static_cast<int32_t>(offsetof(PanelListController_t3144944094, ___currentBasePanel_5)); }
	inline BasePanelController_t1482191247 * get_currentBasePanel_5() const { return ___currentBasePanel_5; }
	inline BasePanelController_t1482191247 ** get_address_of_currentBasePanel_5() { return &___currentBasePanel_5; }
	inline void set_currentBasePanel_5(BasePanelController_t1482191247 * value)
	{
		___currentBasePanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentBasePanel_5, value);
	}
};

struct PanelListController_t3144944094_StaticFields
{
public:
	// PanelListController PanelListController::instance
	PanelListController_t3144944094 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(PanelListController_t3144944094_StaticFields, ___instance_2)); }
	inline PanelListController_t3144944094 * get_instance_2() const { return ___instance_2; }
	inline PanelListController_t3144944094 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(PanelListController_t3144944094 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
