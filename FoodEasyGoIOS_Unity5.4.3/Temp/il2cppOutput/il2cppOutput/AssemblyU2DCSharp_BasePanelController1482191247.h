#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TextController
struct TextController_t3861806281;
// System.Collections.Generic.List`1<LanguageInterface>
struct List_1_t56252273;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BasePanelController
struct  BasePanelController_t1482191247  : public MonoBehaviour_t667441552
{
public:
	// TextController BasePanelController::headerTitle
	TextController_t3861806281 * ___headerTitle_2;
	// System.Collections.Generic.List`1<LanguageInterface> BasePanelController::languageUIList
	List_1_t56252273 * ___languageUIList_3;
	// UnityEngine.Vector2 BasePanelController::panelSizeDelta
	Vector2_t4282066565  ___panelSizeDelta_4;

public:
	inline static int32_t get_offset_of_headerTitle_2() { return static_cast<int32_t>(offsetof(BasePanelController_t1482191247, ___headerTitle_2)); }
	inline TextController_t3861806281 * get_headerTitle_2() const { return ___headerTitle_2; }
	inline TextController_t3861806281 ** get_address_of_headerTitle_2() { return &___headerTitle_2; }
	inline void set_headerTitle_2(TextController_t3861806281 * value)
	{
		___headerTitle_2 = value;
		Il2CppCodeGenWriteBarrier(&___headerTitle_2, value);
	}

	inline static int32_t get_offset_of_languageUIList_3() { return static_cast<int32_t>(offsetof(BasePanelController_t1482191247, ___languageUIList_3)); }
	inline List_1_t56252273 * get_languageUIList_3() const { return ___languageUIList_3; }
	inline List_1_t56252273 ** get_address_of_languageUIList_3() { return &___languageUIList_3; }
	inline void set_languageUIList_3(List_1_t56252273 * value)
	{
		___languageUIList_3 = value;
		Il2CppCodeGenWriteBarrier(&___languageUIList_3, value);
	}

	inline static int32_t get_offset_of_panelSizeDelta_4() { return static_cast<int32_t>(offsetof(BasePanelController_t1482191247, ___panelSizeDelta_4)); }
	inline Vector2_t4282066565  get_panelSizeDelta_4() const { return ___panelSizeDelta_4; }
	inline Vector2_t4282066565 * get_address_of_panelSizeDelta_4() { return &___panelSizeDelta_4; }
	inline void set_panelSizeDelta_4(Vector2_t4282066565  value)
	{
		___panelSizeDelta_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
