#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SearchPanelController
struct SearchPanelController_t1613967832;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// UnityEngine.UI.InputField
struct InputField_t609046876;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.UI.Text
struct Text_t9039225;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction`2<JSONObject,System.String>
struct UnityAction_2_t3241238934;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SearchPanelController
struct  SearchPanelController_t1613967832  : public BasePanelController_t1482191247
{
public:
	// UnityEngine.UI.ScrollRect SearchPanelController::historicalSearchScrollRect
	ScrollRect_t3606982749 * ___historicalSearchScrollRect_6;
	// UnityEngine.UI.InputField SearchPanelController::searchInput
	InputField_t609046876 * ___searchInput_7;
	// UnityEngine.RectTransform SearchPanelController::searchOptionSection
	RectTransform_t972643934 * ___searchOptionSection_8;
	// UnityEngine.UI.Text SearchPanelController::searchButtonText
	Text_t9039225 * ___searchButtonText_9;
	// System.Int32 SearchPanelController::searchOptionID
	int32_t ___searchOptionID_10;
	// System.Collections.Generic.List`1<System.String> SearchPanelController::historicalSearchList
	List_1_t1375417109 * ___historicalSearchList_11;
	// System.String SearchPanelController::historySearchPlayerPrefsPrefix
	String_t* ___historySearchPlayerPrefsPrefix_12;

public:
	inline static int32_t get_offset_of_historicalSearchScrollRect_6() { return static_cast<int32_t>(offsetof(SearchPanelController_t1613967832, ___historicalSearchScrollRect_6)); }
	inline ScrollRect_t3606982749 * get_historicalSearchScrollRect_6() const { return ___historicalSearchScrollRect_6; }
	inline ScrollRect_t3606982749 ** get_address_of_historicalSearchScrollRect_6() { return &___historicalSearchScrollRect_6; }
	inline void set_historicalSearchScrollRect_6(ScrollRect_t3606982749 * value)
	{
		___historicalSearchScrollRect_6 = value;
		Il2CppCodeGenWriteBarrier(&___historicalSearchScrollRect_6, value);
	}

	inline static int32_t get_offset_of_searchInput_7() { return static_cast<int32_t>(offsetof(SearchPanelController_t1613967832, ___searchInput_7)); }
	inline InputField_t609046876 * get_searchInput_7() const { return ___searchInput_7; }
	inline InputField_t609046876 ** get_address_of_searchInput_7() { return &___searchInput_7; }
	inline void set_searchInput_7(InputField_t609046876 * value)
	{
		___searchInput_7 = value;
		Il2CppCodeGenWriteBarrier(&___searchInput_7, value);
	}

	inline static int32_t get_offset_of_searchOptionSection_8() { return static_cast<int32_t>(offsetof(SearchPanelController_t1613967832, ___searchOptionSection_8)); }
	inline RectTransform_t972643934 * get_searchOptionSection_8() const { return ___searchOptionSection_8; }
	inline RectTransform_t972643934 ** get_address_of_searchOptionSection_8() { return &___searchOptionSection_8; }
	inline void set_searchOptionSection_8(RectTransform_t972643934 * value)
	{
		___searchOptionSection_8 = value;
		Il2CppCodeGenWriteBarrier(&___searchOptionSection_8, value);
	}

	inline static int32_t get_offset_of_searchButtonText_9() { return static_cast<int32_t>(offsetof(SearchPanelController_t1613967832, ___searchButtonText_9)); }
	inline Text_t9039225 * get_searchButtonText_9() const { return ___searchButtonText_9; }
	inline Text_t9039225 ** get_address_of_searchButtonText_9() { return &___searchButtonText_9; }
	inline void set_searchButtonText_9(Text_t9039225 * value)
	{
		___searchButtonText_9 = value;
		Il2CppCodeGenWriteBarrier(&___searchButtonText_9, value);
	}

	inline static int32_t get_offset_of_searchOptionID_10() { return static_cast<int32_t>(offsetof(SearchPanelController_t1613967832, ___searchOptionID_10)); }
	inline int32_t get_searchOptionID_10() const { return ___searchOptionID_10; }
	inline int32_t* get_address_of_searchOptionID_10() { return &___searchOptionID_10; }
	inline void set_searchOptionID_10(int32_t value)
	{
		___searchOptionID_10 = value;
	}

	inline static int32_t get_offset_of_historicalSearchList_11() { return static_cast<int32_t>(offsetof(SearchPanelController_t1613967832, ___historicalSearchList_11)); }
	inline List_1_t1375417109 * get_historicalSearchList_11() const { return ___historicalSearchList_11; }
	inline List_1_t1375417109 ** get_address_of_historicalSearchList_11() { return &___historicalSearchList_11; }
	inline void set_historicalSearchList_11(List_1_t1375417109 * value)
	{
		___historicalSearchList_11 = value;
		Il2CppCodeGenWriteBarrier(&___historicalSearchList_11, value);
	}

	inline static int32_t get_offset_of_historySearchPlayerPrefsPrefix_12() { return static_cast<int32_t>(offsetof(SearchPanelController_t1613967832, ___historySearchPlayerPrefsPrefix_12)); }
	inline String_t* get_historySearchPlayerPrefsPrefix_12() const { return ___historySearchPlayerPrefsPrefix_12; }
	inline String_t** get_address_of_historySearchPlayerPrefsPrefix_12() { return &___historySearchPlayerPrefsPrefix_12; }
	inline void set_historySearchPlayerPrefsPrefix_12(String_t* value)
	{
		___historySearchPlayerPrefsPrefix_12 = value;
		Il2CppCodeGenWriteBarrier(&___historySearchPlayerPrefsPrefix_12, value);
	}
};

struct SearchPanelController_t1613967832_StaticFields
{
public:
	// SearchPanelController SearchPanelController::instance
	SearchPanelController_t1613967832 * ___instance_5;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> SearchPanelController::<>f__am$cache8
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache8_13;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> SearchPanelController::<>f__am$cache9
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache9_14;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(SearchPanelController_t1613967832_StaticFields, ___instance_5)); }
	inline SearchPanelController_t1613967832 * get_instance_5() const { return ___instance_5; }
	inline SearchPanelController_t1613967832 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(SearchPanelController_t1613967832 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_13() { return static_cast<int32_t>(offsetof(SearchPanelController_t1613967832_StaticFields, ___U3CU3Ef__amU24cache8_13)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache8_13() const { return ___U3CU3Ef__amU24cache8_13; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache8_13() { return &___U3CU3Ef__amU24cache8_13; }
	inline void set_U3CU3Ef__amU24cache8_13(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache8_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_14() { return static_cast<int32_t>(offsetof(SearchPanelController_t1613967832_StaticFields, ___U3CU3Ef__amU24cache9_14)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache9_14() const { return ___U3CU3Ef__amU24cache9_14; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache9_14() { return &___U3CU3Ef__amU24cache9_14; }
	inline void set_U3CU3Ef__amU24cache9_14(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache9_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
