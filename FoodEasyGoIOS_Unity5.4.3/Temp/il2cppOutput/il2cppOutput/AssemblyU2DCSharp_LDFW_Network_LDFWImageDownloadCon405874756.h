#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LDFW.Network.LDFWImageDownloadController
struct LDFWImageDownloadController_t405874756;
// System.Collections.Generic.List`1<LDFW.Network.LDFWImageDownloader>
struct List_1_t52253957;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFW.Network.LDFWImageDownloadController
struct  LDFWImageDownloadController_t405874756  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<LDFW.Network.LDFWImageDownloader> LDFW.Network.LDFWImageDownloadController::cacheList
	List_1_t52253957 * ___cacheList_3;
	// System.Collections.Generic.List`1<LDFW.Network.LDFWImageDownloader> LDFW.Network.LDFWImageDownloadController::currentList
	List_1_t52253957 * ___currentList_4;
	// System.Int32 LDFW.Network.LDFWImageDownloadController::concurrentImageDownloadCount
	int32_t ___concurrentImageDownloadCount_5;
	// System.Single LDFW.Network.LDFWImageDownloadController::checkListTimeInterval
	float ___checkListTimeInterval_6;
	// System.Single LDFW.Network.LDFWImageDownloadController::checkListTimeCountDown
	float ___checkListTimeCountDown_7;
	// System.Single LDFW.Network.LDFWImageDownloadController::gcCollectCountdown
	float ___gcCollectCountdown_8;

public:
	inline static int32_t get_offset_of_cacheList_3() { return static_cast<int32_t>(offsetof(LDFWImageDownloadController_t405874756, ___cacheList_3)); }
	inline List_1_t52253957 * get_cacheList_3() const { return ___cacheList_3; }
	inline List_1_t52253957 ** get_address_of_cacheList_3() { return &___cacheList_3; }
	inline void set_cacheList_3(List_1_t52253957 * value)
	{
		___cacheList_3 = value;
		Il2CppCodeGenWriteBarrier(&___cacheList_3, value);
	}

	inline static int32_t get_offset_of_currentList_4() { return static_cast<int32_t>(offsetof(LDFWImageDownloadController_t405874756, ___currentList_4)); }
	inline List_1_t52253957 * get_currentList_4() const { return ___currentList_4; }
	inline List_1_t52253957 ** get_address_of_currentList_4() { return &___currentList_4; }
	inline void set_currentList_4(List_1_t52253957 * value)
	{
		___currentList_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentList_4, value);
	}

	inline static int32_t get_offset_of_concurrentImageDownloadCount_5() { return static_cast<int32_t>(offsetof(LDFWImageDownloadController_t405874756, ___concurrentImageDownloadCount_5)); }
	inline int32_t get_concurrentImageDownloadCount_5() const { return ___concurrentImageDownloadCount_5; }
	inline int32_t* get_address_of_concurrentImageDownloadCount_5() { return &___concurrentImageDownloadCount_5; }
	inline void set_concurrentImageDownloadCount_5(int32_t value)
	{
		___concurrentImageDownloadCount_5 = value;
	}

	inline static int32_t get_offset_of_checkListTimeInterval_6() { return static_cast<int32_t>(offsetof(LDFWImageDownloadController_t405874756, ___checkListTimeInterval_6)); }
	inline float get_checkListTimeInterval_6() const { return ___checkListTimeInterval_6; }
	inline float* get_address_of_checkListTimeInterval_6() { return &___checkListTimeInterval_6; }
	inline void set_checkListTimeInterval_6(float value)
	{
		___checkListTimeInterval_6 = value;
	}

	inline static int32_t get_offset_of_checkListTimeCountDown_7() { return static_cast<int32_t>(offsetof(LDFWImageDownloadController_t405874756, ___checkListTimeCountDown_7)); }
	inline float get_checkListTimeCountDown_7() const { return ___checkListTimeCountDown_7; }
	inline float* get_address_of_checkListTimeCountDown_7() { return &___checkListTimeCountDown_7; }
	inline void set_checkListTimeCountDown_7(float value)
	{
		___checkListTimeCountDown_7 = value;
	}

	inline static int32_t get_offset_of_gcCollectCountdown_8() { return static_cast<int32_t>(offsetof(LDFWImageDownloadController_t405874756, ___gcCollectCountdown_8)); }
	inline float get_gcCollectCountdown_8() const { return ___gcCollectCountdown_8; }
	inline float* get_address_of_gcCollectCountdown_8() { return &___gcCollectCountdown_8; }
	inline void set_gcCollectCountdown_8(float value)
	{
		___gcCollectCountdown_8 = value;
	}
};

struct LDFWImageDownloadController_t405874756_StaticFields
{
public:
	// LDFW.Network.LDFWImageDownloadController LDFW.Network.LDFWImageDownloadController::instance
	LDFWImageDownloadController_t405874756 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(LDFWImageDownloadController_t405874756_StaticFields, ___instance_2)); }
	inline LDFWImageDownloadController_t405874756 * get_instance_2() const { return ___instance_2; }
	inline LDFWImageDownloadController_t405874756 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(LDFWImageDownloadController_t405874756 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
