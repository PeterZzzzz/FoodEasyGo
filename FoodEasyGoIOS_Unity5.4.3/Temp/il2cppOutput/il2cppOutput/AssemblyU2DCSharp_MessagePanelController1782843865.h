#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MessagePanelController
struct MessagePanelController_t1782843865;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MessagePanelController
struct  MessagePanelController_t1782843865  : public BasePanelController_t1482191247
{
public:
	// UnityEngine.UI.Text MessagePanelController::messageText
	Text_t9039225 * ___messageText_6;

public:
	inline static int32_t get_offset_of_messageText_6() { return static_cast<int32_t>(offsetof(MessagePanelController_t1782843865, ___messageText_6)); }
	inline Text_t9039225 * get_messageText_6() const { return ___messageText_6; }
	inline Text_t9039225 ** get_address_of_messageText_6() { return &___messageText_6; }
	inline void set_messageText_6(Text_t9039225 * value)
	{
		___messageText_6 = value;
		Il2CppCodeGenWriteBarrier(&___messageText_6, value);
	}
};

struct MessagePanelController_t1782843865_StaticFields
{
public:
	// MessagePanelController MessagePanelController::instance
	MessagePanelController_t1782843865 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(MessagePanelController_t1782843865_StaticFields, ___instance_5)); }
	inline MessagePanelController_t1782843865 * get_instance_5() const { return ___instance_5; }
	inline MessagePanelController_t1782843865 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(MessagePanelController_t1782843865 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
