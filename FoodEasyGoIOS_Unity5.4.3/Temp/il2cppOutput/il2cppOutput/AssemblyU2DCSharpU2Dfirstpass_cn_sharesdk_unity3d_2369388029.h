﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_1930566589.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cn.sharesdk.unity3d.GooglePlus
struct  GooglePlus_t2369388029  : public DevInfo_t1930566589
{
public:
	// System.String cn.sharesdk.unity3d.GooglePlus::client_id
	String_t* ___client_id_2;
	// System.String cn.sharesdk.unity3d.GooglePlus::client_secret
	String_t* ___client_secret_3;
	// System.String cn.sharesdk.unity3d.GooglePlus::redirect_uri
	String_t* ___redirect_uri_4;
	// System.String cn.sharesdk.unity3d.GooglePlus::auth_type
	String_t* ___auth_type_5;

public:
	inline static int32_t get_offset_of_client_id_2() { return static_cast<int32_t>(offsetof(GooglePlus_t2369388029, ___client_id_2)); }
	inline String_t* get_client_id_2() const { return ___client_id_2; }
	inline String_t** get_address_of_client_id_2() { return &___client_id_2; }
	inline void set_client_id_2(String_t* value)
	{
		___client_id_2 = value;
		Il2CppCodeGenWriteBarrier(&___client_id_2, value);
	}

	inline static int32_t get_offset_of_client_secret_3() { return static_cast<int32_t>(offsetof(GooglePlus_t2369388029, ___client_secret_3)); }
	inline String_t* get_client_secret_3() const { return ___client_secret_3; }
	inline String_t** get_address_of_client_secret_3() { return &___client_secret_3; }
	inline void set_client_secret_3(String_t* value)
	{
		___client_secret_3 = value;
		Il2CppCodeGenWriteBarrier(&___client_secret_3, value);
	}

	inline static int32_t get_offset_of_redirect_uri_4() { return static_cast<int32_t>(offsetof(GooglePlus_t2369388029, ___redirect_uri_4)); }
	inline String_t* get_redirect_uri_4() const { return ___redirect_uri_4; }
	inline String_t** get_address_of_redirect_uri_4() { return &___redirect_uri_4; }
	inline void set_redirect_uri_4(String_t* value)
	{
		___redirect_uri_4 = value;
		Il2CppCodeGenWriteBarrier(&___redirect_uri_4, value);
	}

	inline static int32_t get_offset_of_auth_type_5() { return static_cast<int32_t>(offsetof(GooglePlus_t2369388029, ___auth_type_5)); }
	inline String_t* get_auth_type_5() const { return ___auth_type_5; }
	inline String_t** get_address_of_auth_type_5() { return &___auth_type_5; }
	inline void set_auth_type_5(String_t* value)
	{
		___auth_type_5 = value;
		Il2CppCodeGenWriteBarrier(&___auth_type_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
