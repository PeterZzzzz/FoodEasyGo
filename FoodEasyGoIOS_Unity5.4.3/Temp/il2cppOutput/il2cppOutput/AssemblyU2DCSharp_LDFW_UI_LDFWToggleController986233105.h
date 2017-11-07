#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// System.String
struct String_t;
// System.Boolean[]
struct BooleanU5BU5D_t3456302923;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t1266085011;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFW.UI.LDFWToggleController
struct  LDFWToggleController_t986233105  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform LDFW.UI.LDFWToggleController::toggleElementParent
	Transform_t1659122786 * ___toggleElementParent_2;
	// System.String LDFW.UI.LDFWToggleController::toggleParentID
	String_t* ___toggleParentID_3;
	// System.Boolean LDFW.UI.LDFWToggleController::autoReset
	bool ___autoReset_4;
	// System.Boolean LDFW.UI.LDFWToggleController::isSingleSelect
	bool ___isSingleSelect_5;
	// System.Boolean LDFW.UI.LDFWToggleController::isMust
	bool ___isMust_6;
	// System.Int32 LDFW.UI.LDFWToggleController::defaultIndex
	int32_t ___defaultIndex_7;
	// System.Boolean[] LDFW.UI.LDFWToggleController::selectedList
	BooleanU5BU5D_t3456302923* ___selectedList_8;
	// UnityEngine.Events.UnityEvent LDFW.UI.LDFWToggleController::onSelectEvent
	UnityEvent_t1266085011 * ___onSelectEvent_9;
	// UnityEngine.Events.UnityEvent LDFW.UI.LDFWToggleController::onDeselectEvent
	UnityEvent_t1266085011 * ___onDeselectEvent_10;

public:
	inline static int32_t get_offset_of_toggleElementParent_2() { return static_cast<int32_t>(offsetof(LDFWToggleController_t986233105, ___toggleElementParent_2)); }
	inline Transform_t1659122786 * get_toggleElementParent_2() const { return ___toggleElementParent_2; }
	inline Transform_t1659122786 ** get_address_of_toggleElementParent_2() { return &___toggleElementParent_2; }
	inline void set_toggleElementParent_2(Transform_t1659122786 * value)
	{
		___toggleElementParent_2 = value;
		Il2CppCodeGenWriteBarrier(&___toggleElementParent_2, value);
	}

	inline static int32_t get_offset_of_toggleParentID_3() { return static_cast<int32_t>(offsetof(LDFWToggleController_t986233105, ___toggleParentID_3)); }
	inline String_t* get_toggleParentID_3() const { return ___toggleParentID_3; }
	inline String_t** get_address_of_toggleParentID_3() { return &___toggleParentID_3; }
	inline void set_toggleParentID_3(String_t* value)
	{
		___toggleParentID_3 = value;
		Il2CppCodeGenWriteBarrier(&___toggleParentID_3, value);
	}

	inline static int32_t get_offset_of_autoReset_4() { return static_cast<int32_t>(offsetof(LDFWToggleController_t986233105, ___autoReset_4)); }
	inline bool get_autoReset_4() const { return ___autoReset_4; }
	inline bool* get_address_of_autoReset_4() { return &___autoReset_4; }
	inline void set_autoReset_4(bool value)
	{
		___autoReset_4 = value;
	}

	inline static int32_t get_offset_of_isSingleSelect_5() { return static_cast<int32_t>(offsetof(LDFWToggleController_t986233105, ___isSingleSelect_5)); }
	inline bool get_isSingleSelect_5() const { return ___isSingleSelect_5; }
	inline bool* get_address_of_isSingleSelect_5() { return &___isSingleSelect_5; }
	inline void set_isSingleSelect_5(bool value)
	{
		___isSingleSelect_5 = value;
	}

	inline static int32_t get_offset_of_isMust_6() { return static_cast<int32_t>(offsetof(LDFWToggleController_t986233105, ___isMust_6)); }
	inline bool get_isMust_6() const { return ___isMust_6; }
	inline bool* get_address_of_isMust_6() { return &___isMust_6; }
	inline void set_isMust_6(bool value)
	{
		___isMust_6 = value;
	}

	inline static int32_t get_offset_of_defaultIndex_7() { return static_cast<int32_t>(offsetof(LDFWToggleController_t986233105, ___defaultIndex_7)); }
	inline int32_t get_defaultIndex_7() const { return ___defaultIndex_7; }
	inline int32_t* get_address_of_defaultIndex_7() { return &___defaultIndex_7; }
	inline void set_defaultIndex_7(int32_t value)
	{
		___defaultIndex_7 = value;
	}

	inline static int32_t get_offset_of_selectedList_8() { return static_cast<int32_t>(offsetof(LDFWToggleController_t986233105, ___selectedList_8)); }
	inline BooleanU5BU5D_t3456302923* get_selectedList_8() const { return ___selectedList_8; }
	inline BooleanU5BU5D_t3456302923** get_address_of_selectedList_8() { return &___selectedList_8; }
	inline void set_selectedList_8(BooleanU5BU5D_t3456302923* value)
	{
		___selectedList_8 = value;
		Il2CppCodeGenWriteBarrier(&___selectedList_8, value);
	}

	inline static int32_t get_offset_of_onSelectEvent_9() { return static_cast<int32_t>(offsetof(LDFWToggleController_t986233105, ___onSelectEvent_9)); }
	inline UnityEvent_t1266085011 * get_onSelectEvent_9() const { return ___onSelectEvent_9; }
	inline UnityEvent_t1266085011 ** get_address_of_onSelectEvent_9() { return &___onSelectEvent_9; }
	inline void set_onSelectEvent_9(UnityEvent_t1266085011 * value)
	{
		___onSelectEvent_9 = value;
		Il2CppCodeGenWriteBarrier(&___onSelectEvent_9, value);
	}

	inline static int32_t get_offset_of_onDeselectEvent_10() { return static_cast<int32_t>(offsetof(LDFWToggleController_t986233105, ___onDeselectEvent_10)); }
	inline UnityEvent_t1266085011 * get_onDeselectEvent_10() const { return ___onDeselectEvent_10; }
	inline UnityEvent_t1266085011 ** get_address_of_onDeselectEvent_10() { return &___onDeselectEvent_10; }
	inline void set_onDeselectEvent_10(UnityEvent_t1266085011 * value)
	{
		___onDeselectEvent_10 = value;
		Il2CppCodeGenWriteBarrier(&___onDeselectEvent_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
