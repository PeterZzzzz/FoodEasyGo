#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UserPanelController
struct UserPanelController_t2036185429;
// UnityEngine.UI.RawImage
struct RawImage_t821930207;
// UnityEngine.UI.Text
struct Text_t9039225;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// ImageDownloader2
struct ImageDownloader2_t1159004002;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UserPanelController
struct  UserPanelController_t2036185429  : public BasePanelController_t1482191247
{
public:
	// UnityEngine.UI.RawImage UserPanelController::userImage
	RawImage_t821930207 * ___userImage_6;
	// UnityEngine.UI.Text UserPanelController::userName
	Text_t9039225 * ___userName_7;
	// System.Collections.IEnumerator UserPanelController::userImageDownloadIEnumerator
	Il2CppObject * ___userImageDownloadIEnumerator_8;
	// ImageDownloader2 UserPanelController::userImageDownloader
	ImageDownloader2_t1159004002 * ___userImageDownloader_9;

public:
	inline static int32_t get_offset_of_userImage_6() { return static_cast<int32_t>(offsetof(UserPanelController_t2036185429, ___userImage_6)); }
	inline RawImage_t821930207 * get_userImage_6() const { return ___userImage_6; }
	inline RawImage_t821930207 ** get_address_of_userImage_6() { return &___userImage_6; }
	inline void set_userImage_6(RawImage_t821930207 * value)
	{
		___userImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___userImage_6, value);
	}

	inline static int32_t get_offset_of_userName_7() { return static_cast<int32_t>(offsetof(UserPanelController_t2036185429, ___userName_7)); }
	inline Text_t9039225 * get_userName_7() const { return ___userName_7; }
	inline Text_t9039225 ** get_address_of_userName_7() { return &___userName_7; }
	inline void set_userName_7(Text_t9039225 * value)
	{
		___userName_7 = value;
		Il2CppCodeGenWriteBarrier(&___userName_7, value);
	}

	inline static int32_t get_offset_of_userImageDownloadIEnumerator_8() { return static_cast<int32_t>(offsetof(UserPanelController_t2036185429, ___userImageDownloadIEnumerator_8)); }
	inline Il2CppObject * get_userImageDownloadIEnumerator_8() const { return ___userImageDownloadIEnumerator_8; }
	inline Il2CppObject ** get_address_of_userImageDownloadIEnumerator_8() { return &___userImageDownloadIEnumerator_8; }
	inline void set_userImageDownloadIEnumerator_8(Il2CppObject * value)
	{
		___userImageDownloadIEnumerator_8 = value;
		Il2CppCodeGenWriteBarrier(&___userImageDownloadIEnumerator_8, value);
	}

	inline static int32_t get_offset_of_userImageDownloader_9() { return static_cast<int32_t>(offsetof(UserPanelController_t2036185429, ___userImageDownloader_9)); }
	inline ImageDownloader2_t1159004002 * get_userImageDownloader_9() const { return ___userImageDownloader_9; }
	inline ImageDownloader2_t1159004002 ** get_address_of_userImageDownloader_9() { return &___userImageDownloader_9; }
	inline void set_userImageDownloader_9(ImageDownloader2_t1159004002 * value)
	{
		___userImageDownloader_9 = value;
		Il2CppCodeGenWriteBarrier(&___userImageDownloader_9, value);
	}
};

struct UserPanelController_t2036185429_StaticFields
{
public:
	// UserPanelController UserPanelController::instance
	UserPanelController_t2036185429 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(UserPanelController_t2036185429_StaticFields, ___instance_5)); }
	inline UserPanelController_t2036185429 * get_instance_5() const { return ___instance_5; }
	inline UserPanelController_t2036185429 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(UserPanelController_t2036185429 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
