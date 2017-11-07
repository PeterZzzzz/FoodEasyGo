#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OrderCommentPanelController
struct OrderCommentPanelController_t2182119727;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.UI.Button
struct Button_t3896396478;
// UnityEngine.UI.InputField
struct InputField_t609046876;
// System.String
struct String_t;
// OrderPanelOrderBarController
struct OrderPanelOrderBarController_t3029815671;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OrderCommentPanelController
struct  OrderCommentPanelController_t2182119727  : public BasePanelController_t1482191247
{
public:
	// UnityEngine.Transform OrderCommentPanelController::commodityCommentSection
	Transform_t1659122786 * ___commodityCommentSection_6;
	// UnityEngine.Transform OrderCommentPanelController::driverCommentSection
	Transform_t1659122786 * ___driverCommentSection_7;
	// UnityEngine.UI.Button OrderCommentPanelController::submitButton
	Button_t3896396478 * ___submitButton_8;
	// UnityEngine.UI.InputField OrderCommentPanelController::commodityInputField
	InputField_t609046876 * ___commodityInputField_9;
	// UnityEngine.UI.InputField OrderCommentPanelController::driverInputField
	InputField_t609046876 * ___driverInputField_10;
	// System.String OrderCommentPanelController::targetSubOrderID
	String_t* ___targetSubOrderID_11;
	// System.String OrderCommentPanelController::targetRestaurantID
	String_t* ___targetRestaurantID_12;
	// OrderPanelOrderBarController OrderCommentPanelController::targetOrderBar
	OrderPanelOrderBarController_t3029815671 * ___targetOrderBar_13;
	// System.Int32 OrderCommentPanelController::commodityStarCount
	int32_t ___commodityStarCount_14;
	// System.Int32 OrderCommentPanelController::driverStarCount
	int32_t ___driverStarCount_15;

public:
	inline static int32_t get_offset_of_commodityCommentSection_6() { return static_cast<int32_t>(offsetof(OrderCommentPanelController_t2182119727, ___commodityCommentSection_6)); }
	inline Transform_t1659122786 * get_commodityCommentSection_6() const { return ___commodityCommentSection_6; }
	inline Transform_t1659122786 ** get_address_of_commodityCommentSection_6() { return &___commodityCommentSection_6; }
	inline void set_commodityCommentSection_6(Transform_t1659122786 * value)
	{
		___commodityCommentSection_6 = value;
		Il2CppCodeGenWriteBarrier(&___commodityCommentSection_6, value);
	}

	inline static int32_t get_offset_of_driverCommentSection_7() { return static_cast<int32_t>(offsetof(OrderCommentPanelController_t2182119727, ___driverCommentSection_7)); }
	inline Transform_t1659122786 * get_driverCommentSection_7() const { return ___driverCommentSection_7; }
	inline Transform_t1659122786 ** get_address_of_driverCommentSection_7() { return &___driverCommentSection_7; }
	inline void set_driverCommentSection_7(Transform_t1659122786 * value)
	{
		___driverCommentSection_7 = value;
		Il2CppCodeGenWriteBarrier(&___driverCommentSection_7, value);
	}

	inline static int32_t get_offset_of_submitButton_8() { return static_cast<int32_t>(offsetof(OrderCommentPanelController_t2182119727, ___submitButton_8)); }
	inline Button_t3896396478 * get_submitButton_8() const { return ___submitButton_8; }
	inline Button_t3896396478 ** get_address_of_submitButton_8() { return &___submitButton_8; }
	inline void set_submitButton_8(Button_t3896396478 * value)
	{
		___submitButton_8 = value;
		Il2CppCodeGenWriteBarrier(&___submitButton_8, value);
	}

	inline static int32_t get_offset_of_commodityInputField_9() { return static_cast<int32_t>(offsetof(OrderCommentPanelController_t2182119727, ___commodityInputField_9)); }
	inline InputField_t609046876 * get_commodityInputField_9() const { return ___commodityInputField_9; }
	inline InputField_t609046876 ** get_address_of_commodityInputField_9() { return &___commodityInputField_9; }
	inline void set_commodityInputField_9(InputField_t609046876 * value)
	{
		___commodityInputField_9 = value;
		Il2CppCodeGenWriteBarrier(&___commodityInputField_9, value);
	}

	inline static int32_t get_offset_of_driverInputField_10() { return static_cast<int32_t>(offsetof(OrderCommentPanelController_t2182119727, ___driverInputField_10)); }
	inline InputField_t609046876 * get_driverInputField_10() const { return ___driverInputField_10; }
	inline InputField_t609046876 ** get_address_of_driverInputField_10() { return &___driverInputField_10; }
	inline void set_driverInputField_10(InputField_t609046876 * value)
	{
		___driverInputField_10 = value;
		Il2CppCodeGenWriteBarrier(&___driverInputField_10, value);
	}

	inline static int32_t get_offset_of_targetSubOrderID_11() { return static_cast<int32_t>(offsetof(OrderCommentPanelController_t2182119727, ___targetSubOrderID_11)); }
	inline String_t* get_targetSubOrderID_11() const { return ___targetSubOrderID_11; }
	inline String_t** get_address_of_targetSubOrderID_11() { return &___targetSubOrderID_11; }
	inline void set_targetSubOrderID_11(String_t* value)
	{
		___targetSubOrderID_11 = value;
		Il2CppCodeGenWriteBarrier(&___targetSubOrderID_11, value);
	}

	inline static int32_t get_offset_of_targetRestaurantID_12() { return static_cast<int32_t>(offsetof(OrderCommentPanelController_t2182119727, ___targetRestaurantID_12)); }
	inline String_t* get_targetRestaurantID_12() const { return ___targetRestaurantID_12; }
	inline String_t** get_address_of_targetRestaurantID_12() { return &___targetRestaurantID_12; }
	inline void set_targetRestaurantID_12(String_t* value)
	{
		___targetRestaurantID_12 = value;
		Il2CppCodeGenWriteBarrier(&___targetRestaurantID_12, value);
	}

	inline static int32_t get_offset_of_targetOrderBar_13() { return static_cast<int32_t>(offsetof(OrderCommentPanelController_t2182119727, ___targetOrderBar_13)); }
	inline OrderPanelOrderBarController_t3029815671 * get_targetOrderBar_13() const { return ___targetOrderBar_13; }
	inline OrderPanelOrderBarController_t3029815671 ** get_address_of_targetOrderBar_13() { return &___targetOrderBar_13; }
	inline void set_targetOrderBar_13(OrderPanelOrderBarController_t3029815671 * value)
	{
		___targetOrderBar_13 = value;
		Il2CppCodeGenWriteBarrier(&___targetOrderBar_13, value);
	}

	inline static int32_t get_offset_of_commodityStarCount_14() { return static_cast<int32_t>(offsetof(OrderCommentPanelController_t2182119727, ___commodityStarCount_14)); }
	inline int32_t get_commodityStarCount_14() const { return ___commodityStarCount_14; }
	inline int32_t* get_address_of_commodityStarCount_14() { return &___commodityStarCount_14; }
	inline void set_commodityStarCount_14(int32_t value)
	{
		___commodityStarCount_14 = value;
	}

	inline static int32_t get_offset_of_driverStarCount_15() { return static_cast<int32_t>(offsetof(OrderCommentPanelController_t2182119727, ___driverStarCount_15)); }
	inline int32_t get_driverStarCount_15() const { return ___driverStarCount_15; }
	inline int32_t* get_address_of_driverStarCount_15() { return &___driverStarCount_15; }
	inline void set_driverStarCount_15(int32_t value)
	{
		___driverStarCount_15 = value;
	}
};

struct OrderCommentPanelController_t2182119727_StaticFields
{
public:
	// OrderCommentPanelController OrderCommentPanelController::instance
	OrderCommentPanelController_t2182119727 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(OrderCommentPanelController_t2182119727_StaticFields, ___instance_5)); }
	inline OrderCommentPanelController_t2182119727 * get_instance_5() const { return ___instance_5; }
	inline OrderCommentPanelController_t2182119727 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(OrderCommentPanelController_t2182119727 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
