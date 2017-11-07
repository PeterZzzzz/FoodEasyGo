#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Texture
struct Texture_t2526458961;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangePhoto
struct  ChangePhoto_t4294160450  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Material ChangePhoto::targetMaterial
	Material_t3870600107 * ___targetMaterial_2;
	// UnityEngine.Texture ChangePhoto::defaultTexture
	Texture_t2526458961 * ___defaultTexture_3;
	// System.Boolean ChangePhoto::bUseOriginalImageSize
	bool ___bUseOriginalImageSize_4;
	// System.Boolean ChangePhoto::iPadPopover_DisableAutoClose
	bool ___iPadPopover_DisableAutoClose_5;
	// System.Boolean ChangePhoto::isDefaultFrontCamera
	bool ___isDefaultFrontCamera_6;
	// System.Boolean ChangePhoto::isSaveToLocalFile
	bool ___isSaveToLocalFile_7;
	// System.Int32 ChangePhoto::textureWidth
	int32_t ___textureWidth_8;
	// System.Int32 ChangePhoto::textureHeight
	int32_t ___textureHeight_9;
	// System.Boolean ChangePhoto::saveAsPng
	bool ___saveAsPng_10;
	// System.String ChangePhoto::lastMessage
	String_t* ___lastMessage_11;

public:
	inline static int32_t get_offset_of_targetMaterial_2() { return static_cast<int32_t>(offsetof(ChangePhoto_t4294160450, ___targetMaterial_2)); }
	inline Material_t3870600107 * get_targetMaterial_2() const { return ___targetMaterial_2; }
	inline Material_t3870600107 ** get_address_of_targetMaterial_2() { return &___targetMaterial_2; }
	inline void set_targetMaterial_2(Material_t3870600107 * value)
	{
		___targetMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetMaterial_2, value);
	}

	inline static int32_t get_offset_of_defaultTexture_3() { return static_cast<int32_t>(offsetof(ChangePhoto_t4294160450, ___defaultTexture_3)); }
	inline Texture_t2526458961 * get_defaultTexture_3() const { return ___defaultTexture_3; }
	inline Texture_t2526458961 ** get_address_of_defaultTexture_3() { return &___defaultTexture_3; }
	inline void set_defaultTexture_3(Texture_t2526458961 * value)
	{
		___defaultTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___defaultTexture_3, value);
	}

	inline static int32_t get_offset_of_bUseOriginalImageSize_4() { return static_cast<int32_t>(offsetof(ChangePhoto_t4294160450, ___bUseOriginalImageSize_4)); }
	inline bool get_bUseOriginalImageSize_4() const { return ___bUseOriginalImageSize_4; }
	inline bool* get_address_of_bUseOriginalImageSize_4() { return &___bUseOriginalImageSize_4; }
	inline void set_bUseOriginalImageSize_4(bool value)
	{
		___bUseOriginalImageSize_4 = value;
	}

	inline static int32_t get_offset_of_iPadPopover_DisableAutoClose_5() { return static_cast<int32_t>(offsetof(ChangePhoto_t4294160450, ___iPadPopover_DisableAutoClose_5)); }
	inline bool get_iPadPopover_DisableAutoClose_5() const { return ___iPadPopover_DisableAutoClose_5; }
	inline bool* get_address_of_iPadPopover_DisableAutoClose_5() { return &___iPadPopover_DisableAutoClose_5; }
	inline void set_iPadPopover_DisableAutoClose_5(bool value)
	{
		___iPadPopover_DisableAutoClose_5 = value;
	}

	inline static int32_t get_offset_of_isDefaultFrontCamera_6() { return static_cast<int32_t>(offsetof(ChangePhoto_t4294160450, ___isDefaultFrontCamera_6)); }
	inline bool get_isDefaultFrontCamera_6() const { return ___isDefaultFrontCamera_6; }
	inline bool* get_address_of_isDefaultFrontCamera_6() { return &___isDefaultFrontCamera_6; }
	inline void set_isDefaultFrontCamera_6(bool value)
	{
		___isDefaultFrontCamera_6 = value;
	}

	inline static int32_t get_offset_of_isSaveToLocalFile_7() { return static_cast<int32_t>(offsetof(ChangePhoto_t4294160450, ___isSaveToLocalFile_7)); }
	inline bool get_isSaveToLocalFile_7() const { return ___isSaveToLocalFile_7; }
	inline bool* get_address_of_isSaveToLocalFile_7() { return &___isSaveToLocalFile_7; }
	inline void set_isSaveToLocalFile_7(bool value)
	{
		___isSaveToLocalFile_7 = value;
	}

	inline static int32_t get_offset_of_textureWidth_8() { return static_cast<int32_t>(offsetof(ChangePhoto_t4294160450, ___textureWidth_8)); }
	inline int32_t get_textureWidth_8() const { return ___textureWidth_8; }
	inline int32_t* get_address_of_textureWidth_8() { return &___textureWidth_8; }
	inline void set_textureWidth_8(int32_t value)
	{
		___textureWidth_8 = value;
	}

	inline static int32_t get_offset_of_textureHeight_9() { return static_cast<int32_t>(offsetof(ChangePhoto_t4294160450, ___textureHeight_9)); }
	inline int32_t get_textureHeight_9() const { return ___textureHeight_9; }
	inline int32_t* get_address_of_textureHeight_9() { return &___textureHeight_9; }
	inline void set_textureHeight_9(int32_t value)
	{
		___textureHeight_9 = value;
	}

	inline static int32_t get_offset_of_saveAsPng_10() { return static_cast<int32_t>(offsetof(ChangePhoto_t4294160450, ___saveAsPng_10)); }
	inline bool get_saveAsPng_10() const { return ___saveAsPng_10; }
	inline bool* get_address_of_saveAsPng_10() { return &___saveAsPng_10; }
	inline void set_saveAsPng_10(bool value)
	{
		___saveAsPng_10 = value;
	}

	inline static int32_t get_offset_of_lastMessage_11() { return static_cast<int32_t>(offsetof(ChangePhoto_t4294160450, ___lastMessage_11)); }
	inline String_t* get_lastMessage_11() const { return ___lastMessage_11; }
	inline String_t** get_address_of_lastMessage_11() { return &___lastMessage_11; }
	inline void set_lastMessage_11(String_t* value)
	{
		___lastMessage_11 = value;
		Il2CppCodeGenWriteBarrier(&___lastMessage_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
