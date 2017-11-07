#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UserDataNetworkController
struct UserDataNetworkController_t124727989;
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

// UserDataNetworkController
struct  UserDataNetworkController_t124727989  : public ServerCallController_t539269853
{
public:
	// System.String UserDataNetworkController::userDataControllerURL
	String_t* ___userDataControllerURL_5;
	// System.String UserDataNetworkController::userAddressControllerURL
	String_t* ___userAddressControllerURL_6;
	// System.String UserDataNetworkController::userPaymentControllerURL
	String_t* ___userPaymentControllerURL_7;
	// System.String UserDataNetworkController::imageControllerURL
	String_t* ___imageControllerURL_8;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper UserDataNetworkController::updatePersonalDataCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___updatePersonalDataCall_9;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper UserDataNetworkController::userAddressCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___userAddressCall_10;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper UserDataNetworkController::userPaymentCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___userPaymentCall_11;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper UserDataNetworkController::couponCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___couponCall_12;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper UserDataNetworkController::invitationCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___invitationCall_13;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper UserDataNetworkController::leaveMessageCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___leaveMessageCall_14;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper UserDataNetworkController::updateUserIOSTokenCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___updateUserIOSTokenCall_15;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper UserDataNetworkController::uploadUserImageCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___uploadUserImageCall_16;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper UserDataNetworkController::downloadUserImageCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___downloadUserImageCall_17;

public:
	inline static int32_t get_offset_of_userDataControllerURL_5() { return static_cast<int32_t>(offsetof(UserDataNetworkController_t124727989, ___userDataControllerURL_5)); }
	inline String_t* get_userDataControllerURL_5() const { return ___userDataControllerURL_5; }
	inline String_t** get_address_of_userDataControllerURL_5() { return &___userDataControllerURL_5; }
	inline void set_userDataControllerURL_5(String_t* value)
	{
		___userDataControllerURL_5 = value;
		Il2CppCodeGenWriteBarrier(&___userDataControllerURL_5, value);
	}

	inline static int32_t get_offset_of_userAddressControllerURL_6() { return static_cast<int32_t>(offsetof(UserDataNetworkController_t124727989, ___userAddressControllerURL_6)); }
	inline String_t* get_userAddressControllerURL_6() const { return ___userAddressControllerURL_6; }
	inline String_t** get_address_of_userAddressControllerURL_6() { return &___userAddressControllerURL_6; }
	inline void set_userAddressControllerURL_6(String_t* value)
	{
		___userAddressControllerURL_6 = value;
		Il2CppCodeGenWriteBarrier(&___userAddressControllerURL_6, value);
	}

	inline static int32_t get_offset_of_userPaymentControllerURL_7() { return static_cast<int32_t>(offsetof(UserDataNetworkController_t124727989, ___userPaymentControllerURL_7)); }
	inline String_t* get_userPaymentControllerURL_7() const { return ___userPaymentControllerURL_7; }
	inline String_t** get_address_of_userPaymentControllerURL_7() { return &___userPaymentControllerURL_7; }
	inline void set_userPaymentControllerURL_7(String_t* value)
	{
		___userPaymentControllerURL_7 = value;
		Il2CppCodeGenWriteBarrier(&___userPaymentControllerURL_7, value);
	}

	inline static int32_t get_offset_of_imageControllerURL_8() { return static_cast<int32_t>(offsetof(UserDataNetworkController_t124727989, ___imageControllerURL_8)); }
	inline String_t* get_imageControllerURL_8() const { return ___imageControllerURL_8; }
	inline String_t** get_address_of_imageControllerURL_8() { return &___imageControllerURL_8; }
	inline void set_imageControllerURL_8(String_t* value)
	{
		___imageControllerURL_8 = value;
		Il2CppCodeGenWriteBarrier(&___imageControllerURL_8, value);
	}

	inline static int32_t get_offset_of_updatePersonalDataCall_9() { return static_cast<int32_t>(offsetof(UserDataNetworkController_t124727989, ___updatePersonalDataCall_9)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_updatePersonalDataCall_9() const { return ___updatePersonalDataCall_9; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_updatePersonalDataCall_9() { return &___updatePersonalDataCall_9; }
	inline void set_updatePersonalDataCall_9(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___updatePersonalDataCall_9 = value;
		Il2CppCodeGenWriteBarrier(&___updatePersonalDataCall_9, value);
	}

	inline static int32_t get_offset_of_userAddressCall_10() { return static_cast<int32_t>(offsetof(UserDataNetworkController_t124727989, ___userAddressCall_10)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_userAddressCall_10() const { return ___userAddressCall_10; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_userAddressCall_10() { return &___userAddressCall_10; }
	inline void set_userAddressCall_10(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___userAddressCall_10 = value;
		Il2CppCodeGenWriteBarrier(&___userAddressCall_10, value);
	}

	inline static int32_t get_offset_of_userPaymentCall_11() { return static_cast<int32_t>(offsetof(UserDataNetworkController_t124727989, ___userPaymentCall_11)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_userPaymentCall_11() const { return ___userPaymentCall_11; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_userPaymentCall_11() { return &___userPaymentCall_11; }
	inline void set_userPaymentCall_11(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___userPaymentCall_11 = value;
		Il2CppCodeGenWriteBarrier(&___userPaymentCall_11, value);
	}

	inline static int32_t get_offset_of_couponCall_12() { return static_cast<int32_t>(offsetof(UserDataNetworkController_t124727989, ___couponCall_12)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_couponCall_12() const { return ___couponCall_12; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_couponCall_12() { return &___couponCall_12; }
	inline void set_couponCall_12(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___couponCall_12 = value;
		Il2CppCodeGenWriteBarrier(&___couponCall_12, value);
	}

	inline static int32_t get_offset_of_invitationCall_13() { return static_cast<int32_t>(offsetof(UserDataNetworkController_t124727989, ___invitationCall_13)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_invitationCall_13() const { return ___invitationCall_13; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_invitationCall_13() { return &___invitationCall_13; }
	inline void set_invitationCall_13(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___invitationCall_13 = value;
		Il2CppCodeGenWriteBarrier(&___invitationCall_13, value);
	}

	inline static int32_t get_offset_of_leaveMessageCall_14() { return static_cast<int32_t>(offsetof(UserDataNetworkController_t124727989, ___leaveMessageCall_14)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_leaveMessageCall_14() const { return ___leaveMessageCall_14; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_leaveMessageCall_14() { return &___leaveMessageCall_14; }
	inline void set_leaveMessageCall_14(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___leaveMessageCall_14 = value;
		Il2CppCodeGenWriteBarrier(&___leaveMessageCall_14, value);
	}

	inline static int32_t get_offset_of_updateUserIOSTokenCall_15() { return static_cast<int32_t>(offsetof(UserDataNetworkController_t124727989, ___updateUserIOSTokenCall_15)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_updateUserIOSTokenCall_15() const { return ___updateUserIOSTokenCall_15; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_updateUserIOSTokenCall_15() { return &___updateUserIOSTokenCall_15; }
	inline void set_updateUserIOSTokenCall_15(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___updateUserIOSTokenCall_15 = value;
		Il2CppCodeGenWriteBarrier(&___updateUserIOSTokenCall_15, value);
	}

	inline static int32_t get_offset_of_uploadUserImageCall_16() { return static_cast<int32_t>(offsetof(UserDataNetworkController_t124727989, ___uploadUserImageCall_16)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_uploadUserImageCall_16() const { return ___uploadUserImageCall_16; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_uploadUserImageCall_16() { return &___uploadUserImageCall_16; }
	inline void set_uploadUserImageCall_16(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___uploadUserImageCall_16 = value;
		Il2CppCodeGenWriteBarrier(&___uploadUserImageCall_16, value);
	}

	inline static int32_t get_offset_of_downloadUserImageCall_17() { return static_cast<int32_t>(offsetof(UserDataNetworkController_t124727989, ___downloadUserImageCall_17)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_downloadUserImageCall_17() const { return ___downloadUserImageCall_17; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_downloadUserImageCall_17() { return &___downloadUserImageCall_17; }
	inline void set_downloadUserImageCall_17(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___downloadUserImageCall_17 = value;
		Il2CppCodeGenWriteBarrier(&___downloadUserImageCall_17, value);
	}
};

struct UserDataNetworkController_t124727989_StaticFields
{
public:
	// UserDataNetworkController UserDataNetworkController::instance
	UserDataNetworkController_t124727989 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(UserDataNetworkController_t124727989_StaticFields, ___instance_4)); }
	inline UserDataNetworkController_t124727989 * get_instance_4() const { return ___instance_4; }
	inline UserDataNetworkController_t124727989 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(UserDataNetworkController_t124727989 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
