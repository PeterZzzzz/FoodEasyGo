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
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t2777732396;
// LoginCanvasController
struct LoginCanvasController_t2983426173;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoginCanvasController
struct  LoginCanvasController_t2983426173  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform LoginCanvasController::loginPanel
	Transform_t1659122786 * ___loginPanel_2;
	// UnityEngine.Transform LoginCanvasController::registerPanel
	Transform_t1659122786 * ___registerPanel_3;
	// UnityEngine.Transform LoginCanvasController::passwordResetPanel
	Transform_t1659122786 * ___passwordResetPanel_4;
	// UnityEngine.UI.CanvasScaler LoginCanvasController::canvasScaler
	CanvasScaler_t2777732396 * ___canvasScaler_5;
	// UnityEngine.Vector2 LoginCanvasController::canvasSize
	Vector2_t4282066565  ___canvasSize_6;

public:
	inline static int32_t get_offset_of_loginPanel_2() { return static_cast<int32_t>(offsetof(LoginCanvasController_t2983426173, ___loginPanel_2)); }
	inline Transform_t1659122786 * get_loginPanel_2() const { return ___loginPanel_2; }
	inline Transform_t1659122786 ** get_address_of_loginPanel_2() { return &___loginPanel_2; }
	inline void set_loginPanel_2(Transform_t1659122786 * value)
	{
		___loginPanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___loginPanel_2, value);
	}

	inline static int32_t get_offset_of_registerPanel_3() { return static_cast<int32_t>(offsetof(LoginCanvasController_t2983426173, ___registerPanel_3)); }
	inline Transform_t1659122786 * get_registerPanel_3() const { return ___registerPanel_3; }
	inline Transform_t1659122786 ** get_address_of_registerPanel_3() { return &___registerPanel_3; }
	inline void set_registerPanel_3(Transform_t1659122786 * value)
	{
		___registerPanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___registerPanel_3, value);
	}

	inline static int32_t get_offset_of_passwordResetPanel_4() { return static_cast<int32_t>(offsetof(LoginCanvasController_t2983426173, ___passwordResetPanel_4)); }
	inline Transform_t1659122786 * get_passwordResetPanel_4() const { return ___passwordResetPanel_4; }
	inline Transform_t1659122786 ** get_address_of_passwordResetPanel_4() { return &___passwordResetPanel_4; }
	inline void set_passwordResetPanel_4(Transform_t1659122786 * value)
	{
		___passwordResetPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___passwordResetPanel_4, value);
	}

	inline static int32_t get_offset_of_canvasScaler_5() { return static_cast<int32_t>(offsetof(LoginCanvasController_t2983426173, ___canvasScaler_5)); }
	inline CanvasScaler_t2777732396 * get_canvasScaler_5() const { return ___canvasScaler_5; }
	inline CanvasScaler_t2777732396 ** get_address_of_canvasScaler_5() { return &___canvasScaler_5; }
	inline void set_canvasScaler_5(CanvasScaler_t2777732396 * value)
	{
		___canvasScaler_5 = value;
		Il2CppCodeGenWriteBarrier(&___canvasScaler_5, value);
	}

	inline static int32_t get_offset_of_canvasSize_6() { return static_cast<int32_t>(offsetof(LoginCanvasController_t2983426173, ___canvasSize_6)); }
	inline Vector2_t4282066565  get_canvasSize_6() const { return ___canvasSize_6; }
	inline Vector2_t4282066565 * get_address_of_canvasSize_6() { return &___canvasSize_6; }
	inline void set_canvasSize_6(Vector2_t4282066565  value)
	{
		___canvasSize_6 = value;
	}
};

struct LoginCanvasController_t2983426173_StaticFields
{
public:
	// LoginCanvasController LoginCanvasController::instance
	LoginCanvasController_t2983426173 * ___instance_7;

public:
	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(LoginCanvasController_t2983426173_StaticFields, ___instance_7)); }
	inline LoginCanvasController_t2983426173 * get_instance_7() const { return ___instance_7; }
	inline LoginCanvasController_t2983426173 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(LoginCanvasController_t2983426173 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier(&___instance_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
