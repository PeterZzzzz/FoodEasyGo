#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// JSONObject
struct JSONObject_t1752376903;
// System.Object
struct Il2CppObject;
// UnityEngine.RectOffset
struct RectOffset_t3056157787;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_RectOffset3056157787.h"
#include "UnityEngine_UnityEngine_AnimationCurve3667593487.h"
#include "UnityEngine_UnityEngine_Keyframe4079056114.h"

// System.Void JSONTemplates::.cctor()
extern "C"  void JSONTemplates__cctor_m3899724179 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::TOJSON(System.Object)
extern "C"  JSONObject_t1752376903 * JSONTemplates_TOJSON_m279302749 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 JSONTemplates::ToVector2(JSONObject)
extern "C"  Vector2_t4282066565  JSONTemplates_ToVector2_m254626048 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromVector2(UnityEngine.Vector2)
extern "C"  JSONObject_t1752376903 * JSONTemplates_FromVector2_m1811062663 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromVector3(UnityEngine.Vector3)
extern "C"  JSONObject_t1752376903 * JSONTemplates_FromVector3_m4067973701 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 JSONTemplates::ToVector3(JSONObject)
extern "C"  Vector3_t4282066566  JSONTemplates_ToVector3_m1594027040 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromVector4(UnityEngine.Vector4)
extern "C"  JSONObject_t1752376903 * JSONTemplates_FromVector4_m2029917443 (Il2CppObject * __this /* static, unused */, Vector4_t4282066567  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 JSONTemplates::ToVector4(JSONObject)
extern "C"  Vector4_t4282066567  JSONTemplates_ToVector4_m2933428032 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromMatrix4x4(UnityEngine.Matrix4x4)
extern "C"  JSONObject_t1752376903 * JSONTemplates_FromMatrix4x4_m4160908935 (Il2CppObject * __this /* static, unused */, Matrix4x4_t1651859333  ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 JSONTemplates::ToMatrix4x4(JSONObject)
extern "C"  Matrix4x4_t1651859333  JSONTemplates_ToMatrix4x4_m526891712 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromQuaternion(UnityEngine.Quaternion)
extern "C"  JSONObject_t1752376903 * JSONTemplates_FromQuaternion_m2769792967 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion JSONTemplates::ToQuaternion(JSONObject)
extern "C"  Quaternion_t1553702882  JSONTemplates_ToQuaternion_m143879028 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromColor(UnityEngine.Color)
extern "C"  JSONObject_t1752376903 * JSONTemplates_FromColor_m3935445983 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color JSONTemplates::ToColor(JSONObject)
extern "C"  Color_t4194546905  JSONTemplates_ToColor_m3720218816 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromLayerMask(UnityEngine.LayerMask)
extern "C"  JSONObject_t1752376903 * JSONTemplates_FromLayerMask_m2213785067 (Il2CppObject * __this /* static, unused */, LayerMask_t3236759763  ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask JSONTemplates::ToLayerMask(JSONObject)
extern "C"  LayerMask_t3236759763  JSONTemplates_ToLayerMask_m3613489664 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromRect(UnityEngine.Rect)
extern "C"  JSONObject_t1752376903 * JSONTemplates_FromRect_m557504967 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect JSONTemplates::ToRect(JSONObject)
extern "C"  Rect_t4241904616  JSONTemplates_ToRect_m2508697856 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromRectOffset(UnityEngine.RectOffset)
extern "C"  JSONObject_t1752376903 * JSONTemplates_FromRectOffset_m2884936679 (Il2CppObject * __this /* static, unused */, RectOffset_t3056157787 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset JSONTemplates::ToRectOffset(JSONObject)
extern "C"  RectOffset_t3056157787 * JSONTemplates_ToRectOffset_m1049041382 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve JSONTemplates::ToAnimationCurve(JSONObject)
extern "C"  AnimationCurve_t3667593487 * JSONTemplates_ToAnimationCurve_m620995278 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromAnimationCurve(UnityEngine.AnimationCurve)
extern "C"  JSONObject_t1752376903 * JSONTemplates_FromAnimationCurve_m1811970919 (Il2CppObject * __this /* static, unused */, AnimationCurve_t3667593487 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe JSONTemplates::ToKeyframe(JSONObject)
extern "C"  Keyframe_t4079056114  JSONTemplates_ToKeyframe_m311474580 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromKeyframe(UnityEngine.Keyframe)
extern "C"  JSONObject_t1752376903 * JSONTemplates_FromKeyframe_m3602882567 (Il2CppObject * __this /* static, unused */, Keyframe_t4079056114  ___k0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
