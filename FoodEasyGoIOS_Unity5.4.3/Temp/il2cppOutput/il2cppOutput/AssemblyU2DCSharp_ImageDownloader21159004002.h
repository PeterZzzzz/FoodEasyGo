#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_LDFW_Network_LDFWImageDownloader2979035701.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ImageDownloader2
struct  ImageDownloader2_t1159004002  : public LDFWImageDownloader_t2979035701
{
public:
	// System.String ImageDownloader2::dirPath
	String_t* ___dirPath_6;

public:
	inline static int32_t get_offset_of_dirPath_6() { return static_cast<int32_t>(offsetof(ImageDownloader2_t1159004002, ___dirPath_6)); }
	inline String_t* get_dirPath_6() const { return ___dirPath_6; }
	inline String_t** get_address_of_dirPath_6() { return &___dirPath_6; }
	inline void set_dirPath_6(String_t* value)
	{
		___dirPath_6 = value;
		Il2CppCodeGenWriteBarrier(&___dirPath_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
