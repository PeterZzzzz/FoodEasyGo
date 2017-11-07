#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InfoNetworkController
struct InfoNetworkController_t1148294460;
// System.String
struct String_t;
// LDFW.Network.LDFWWWWCallCoroutineWrapper
struct LDFWWWWCallCoroutineWrapper_t3645557397;

#include "AssemblyU2DCSharp_ServerCallController539269853.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfoNetworkController
struct  InfoNetworkController_t1148294460  : public ServerCallController_t539269853
{
public:
	// System.String InfoNetworkController::infoControllerURL
	String_t* ___infoControllerURL_5;
	// System.String InfoNetworkController::searchURL
	String_t* ___searchURL_6;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper InfoNetworkController::getBusinessCooperationCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getBusinessCooperationCall_7;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper InfoNetworkController::getRecruitCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getRecruitCall_8;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper InfoNetworkController::getContactInfoCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getContactInfoCall_9;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper InfoNetworkController::getFAQCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getFAQCall_10;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper InfoNetworkController::getRefundPolicyCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getRefundPolicyCall_11;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper InfoNetworkController::getPrivacyPolicyCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getPrivacyPolicyCall_12;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper InfoNetworkController::getImagesCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getImagesCall_13;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper InfoNetworkController::getProductCategoryCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getProductCategoryCall_14;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper InfoNetworkController::getReserveCOnfigCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getReserveCOnfigCall_15;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper InfoNetworkController::getGoogleMapZipCode
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getGoogleMapZipCode_16;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper InfoNetworkController::getSearchResult
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getSearchResult_17;

public:
	inline static int32_t get_offset_of_infoControllerURL_5() { return static_cast<int32_t>(offsetof(InfoNetworkController_t1148294460, ___infoControllerURL_5)); }
	inline String_t* get_infoControllerURL_5() const { return ___infoControllerURL_5; }
	inline String_t** get_address_of_infoControllerURL_5() { return &___infoControllerURL_5; }
	inline void set_infoControllerURL_5(String_t* value)
	{
		___infoControllerURL_5 = value;
		Il2CppCodeGenWriteBarrier(&___infoControllerURL_5, value);
	}

	inline static int32_t get_offset_of_searchURL_6() { return static_cast<int32_t>(offsetof(InfoNetworkController_t1148294460, ___searchURL_6)); }
	inline String_t* get_searchURL_6() const { return ___searchURL_6; }
	inline String_t** get_address_of_searchURL_6() { return &___searchURL_6; }
	inline void set_searchURL_6(String_t* value)
	{
		___searchURL_6 = value;
		Il2CppCodeGenWriteBarrier(&___searchURL_6, value);
	}

	inline static int32_t get_offset_of_getBusinessCooperationCall_7() { return static_cast<int32_t>(offsetof(InfoNetworkController_t1148294460, ___getBusinessCooperationCall_7)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getBusinessCooperationCall_7() const { return ___getBusinessCooperationCall_7; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getBusinessCooperationCall_7() { return &___getBusinessCooperationCall_7; }
	inline void set_getBusinessCooperationCall_7(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getBusinessCooperationCall_7 = value;
		Il2CppCodeGenWriteBarrier(&___getBusinessCooperationCall_7, value);
	}

	inline static int32_t get_offset_of_getRecruitCall_8() { return static_cast<int32_t>(offsetof(InfoNetworkController_t1148294460, ___getRecruitCall_8)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getRecruitCall_8() const { return ___getRecruitCall_8; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getRecruitCall_8() { return &___getRecruitCall_8; }
	inline void set_getRecruitCall_8(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getRecruitCall_8 = value;
		Il2CppCodeGenWriteBarrier(&___getRecruitCall_8, value);
	}

	inline static int32_t get_offset_of_getContactInfoCall_9() { return static_cast<int32_t>(offsetof(InfoNetworkController_t1148294460, ___getContactInfoCall_9)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getContactInfoCall_9() const { return ___getContactInfoCall_9; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getContactInfoCall_9() { return &___getContactInfoCall_9; }
	inline void set_getContactInfoCall_9(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getContactInfoCall_9 = value;
		Il2CppCodeGenWriteBarrier(&___getContactInfoCall_9, value);
	}

	inline static int32_t get_offset_of_getFAQCall_10() { return static_cast<int32_t>(offsetof(InfoNetworkController_t1148294460, ___getFAQCall_10)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getFAQCall_10() const { return ___getFAQCall_10; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getFAQCall_10() { return &___getFAQCall_10; }
	inline void set_getFAQCall_10(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getFAQCall_10 = value;
		Il2CppCodeGenWriteBarrier(&___getFAQCall_10, value);
	}

	inline static int32_t get_offset_of_getRefundPolicyCall_11() { return static_cast<int32_t>(offsetof(InfoNetworkController_t1148294460, ___getRefundPolicyCall_11)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getRefundPolicyCall_11() const { return ___getRefundPolicyCall_11; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getRefundPolicyCall_11() { return &___getRefundPolicyCall_11; }
	inline void set_getRefundPolicyCall_11(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getRefundPolicyCall_11 = value;
		Il2CppCodeGenWriteBarrier(&___getRefundPolicyCall_11, value);
	}

	inline static int32_t get_offset_of_getPrivacyPolicyCall_12() { return static_cast<int32_t>(offsetof(InfoNetworkController_t1148294460, ___getPrivacyPolicyCall_12)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getPrivacyPolicyCall_12() const { return ___getPrivacyPolicyCall_12; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getPrivacyPolicyCall_12() { return &___getPrivacyPolicyCall_12; }
	inline void set_getPrivacyPolicyCall_12(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getPrivacyPolicyCall_12 = value;
		Il2CppCodeGenWriteBarrier(&___getPrivacyPolicyCall_12, value);
	}

	inline static int32_t get_offset_of_getImagesCall_13() { return static_cast<int32_t>(offsetof(InfoNetworkController_t1148294460, ___getImagesCall_13)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getImagesCall_13() const { return ___getImagesCall_13; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getImagesCall_13() { return &___getImagesCall_13; }
	inline void set_getImagesCall_13(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getImagesCall_13 = value;
		Il2CppCodeGenWriteBarrier(&___getImagesCall_13, value);
	}

	inline static int32_t get_offset_of_getProductCategoryCall_14() { return static_cast<int32_t>(offsetof(InfoNetworkController_t1148294460, ___getProductCategoryCall_14)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getProductCategoryCall_14() const { return ___getProductCategoryCall_14; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getProductCategoryCall_14() { return &___getProductCategoryCall_14; }
	inline void set_getProductCategoryCall_14(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getProductCategoryCall_14 = value;
		Il2CppCodeGenWriteBarrier(&___getProductCategoryCall_14, value);
	}

	inline static int32_t get_offset_of_getReserveCOnfigCall_15() { return static_cast<int32_t>(offsetof(InfoNetworkController_t1148294460, ___getReserveCOnfigCall_15)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getReserveCOnfigCall_15() const { return ___getReserveCOnfigCall_15; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getReserveCOnfigCall_15() { return &___getReserveCOnfigCall_15; }
	inline void set_getReserveCOnfigCall_15(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getReserveCOnfigCall_15 = value;
		Il2CppCodeGenWriteBarrier(&___getReserveCOnfigCall_15, value);
	}

	inline static int32_t get_offset_of_getGoogleMapZipCode_16() { return static_cast<int32_t>(offsetof(InfoNetworkController_t1148294460, ___getGoogleMapZipCode_16)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getGoogleMapZipCode_16() const { return ___getGoogleMapZipCode_16; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getGoogleMapZipCode_16() { return &___getGoogleMapZipCode_16; }
	inline void set_getGoogleMapZipCode_16(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getGoogleMapZipCode_16 = value;
		Il2CppCodeGenWriteBarrier(&___getGoogleMapZipCode_16, value);
	}

	inline static int32_t get_offset_of_getSearchResult_17() { return static_cast<int32_t>(offsetof(InfoNetworkController_t1148294460, ___getSearchResult_17)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getSearchResult_17() const { return ___getSearchResult_17; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getSearchResult_17() { return &___getSearchResult_17; }
	inline void set_getSearchResult_17(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getSearchResult_17 = value;
		Il2CppCodeGenWriteBarrier(&___getSearchResult_17, value);
	}
};

struct InfoNetworkController_t1148294460_StaticFields
{
public:
	// InfoNetworkController InfoNetworkController::instance
	InfoNetworkController_t1148294460 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(InfoNetworkController_t1148294460_StaticFields, ___instance_4)); }
	inline InfoNetworkController_t1148294460 * get_instance_4() const { return ___instance_4; }
	inline InfoNetworkController_t1148294460 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(InfoNetworkController_t1148294460 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
