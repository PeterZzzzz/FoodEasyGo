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

// LDFW.Tween.LDFWTweenBase
struct LDFWTweenBase_t342943053;
// UnityEngine.Events.UnityAction
struct UnityAction_t594794173;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Events_UnityAction594794173.h"
#include "UnityEngine_UnityEngine_AnimationCurve3667593487.h"

// System.Void LDFW.Tween.LDFWTweenBase::.ctor()
extern "C"  void LDFWTweenBase__ctor_m1056767216 (LDFWTweenBase_t342943053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::Awake()
extern "C"  void LDFWTweenBase_Awake_m1294372435 (LDFWTweenBase_t342943053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::Start()
extern "C"  void LDFWTweenBase_Start_m3905008 (LDFWTweenBase_t342943053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::Init(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Events.UnityAction)
extern "C"  void LDFWTweenBase_Init_m3489678599 (LDFWTweenBase_t342943053 * __this, Vector3_t4282066566  ___start0, Vector3_t4282066566  ___end1, float ___time2, float ___delay3, UnityAction_t594794173 * ___endAction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::Init()
extern "C"  void LDFWTweenBase_Init_m2202383204 (LDFWTweenBase_t342943053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::GenerateRandomCurve(UnityEngine.AnimationCurve,System.Single)
extern "C"  void LDFWTweenBase_GenerateRandomCurve_m3088780520 (LDFWTweenBase_t342943053 * __this, AnimationCurve_t3667593487 * ___curve0, float ___slices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::Update()
extern "C"  void LDFWTweenBase_Update_m126907421 (LDFWTweenBase_t342943053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::PostCurrentValueCalculation()
extern "C"  void LDFWTweenBase_PostCurrentValueCalculation_m3618513279 (LDFWTweenBase_t342943053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LDFW.Tween.LDFWTweenBase::GetValueBasedOnAnimationCurve(UnityEngine.AnimationCurve,System.Single,System.Single)
extern "C"  float LDFWTweenBase_GetValueBasedOnAnimationCurve_m362066284 (LDFWTweenBase_t342943053 * __this, AnimationCurve_t3667593487 * ___curve0, float ___diffValue1, float ___fromValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::SetToBeginning()
extern "C"  void LDFWTweenBase_SetToBeginning_m1536182644 (LDFWTweenBase_t342943053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::SetToEndding()
extern "C"  void LDFWTweenBase_SetToEndding_m1340289904 (LDFWTweenBase_t342943053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::SetToPercentagePoint(System.Single)
extern "C"  void LDFWTweenBase_SetToPercentagePoint_m1869354462 (LDFWTweenBase_t342943053 * __this, float ___percent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::PauseTweener()
extern "C"  void LDFWTweenBase_PauseTweener_m42814550 (LDFWTweenBase_t342943053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::ResumeTweener()
extern "C"  void LDFWTweenBase_ResumeTweener_m2521165241 (LDFWTweenBase_t342943053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::ResetTweener()
extern "C"  void LDFWTweenBase_ResetTweener_m2629667101 (LDFWTweenBase_t342943053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::Play()
extern "C"  void LDFWTweenBase_Play_m2400706696 (LDFWTweenBase_t342943053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::PlayReverse()
extern "C"  void LDFWTweenBase_PlayReverse_m2430711260 (LDFWTweenBase_t342943053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::BurstTweenBasedOnFrames(System.Int32)
extern "C"  void LDFWTweenBase_BurstTweenBasedOnFrames_m671537964 (LDFWTweenBase_t342943053 * __this, int32_t ___framesNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LDFW.Tween.LDFWTweenBase::BurstTweenBasedOnFramesCoroutine(System.Int32)
extern "C"  Il2CppObject * LDFWTweenBase_BurstTweenBasedOnFramesCoroutine_m3658867384 (LDFWTweenBase_t342943053 * __this, int32_t ___framesNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Tween.LDFWTweenBase::BurstTweenBasedOnTime(System.Single)
extern "C"  void LDFWTweenBase_BurstTweenBasedOnTime_m366410025 (LDFWTweenBase_t342943053 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LDFW.Tween.LDFWTweenBase::BurstTweenBasedOnTimeCoroutine(System.Single)
extern "C"  Il2CppObject * LDFWTweenBase_BurstTweenBasedOnTimeCoroutine_m956929355 (LDFWTweenBase_t342943053 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
