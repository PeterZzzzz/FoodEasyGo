#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// TextController
struct TextController_t3861806281;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NotificationPanelNotificationBarController
struct  NotificationPanelNotificationBarController_t3326927659  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text NotificationPanelNotificationBarController::dateText
	Text_t9039225 * ___dateText_2;
	// TextController NotificationPanelNotificationBarController::titleText
	TextController_t3861806281 * ___titleText_3;

public:
	inline static int32_t get_offset_of_dateText_2() { return static_cast<int32_t>(offsetof(NotificationPanelNotificationBarController_t3326927659, ___dateText_2)); }
	inline Text_t9039225 * get_dateText_2() const { return ___dateText_2; }
	inline Text_t9039225 ** get_address_of_dateText_2() { return &___dateText_2; }
	inline void set_dateText_2(Text_t9039225 * value)
	{
		___dateText_2 = value;
		Il2CppCodeGenWriteBarrier(&___dateText_2, value);
	}

	inline static int32_t get_offset_of_titleText_3() { return static_cast<int32_t>(offsetof(NotificationPanelNotificationBarController_t3326927659, ___titleText_3)); }
	inline TextController_t3861806281 * get_titleText_3() const { return ___titleText_3; }
	inline TextController_t3861806281 ** get_address_of_titleText_3() { return &___titleText_3; }
	inline void set_titleText_3(TextController_t3861806281 * value)
	{
		___titleText_3 = value;
		Il2CppCodeGenWriteBarrier(&___titleText_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
