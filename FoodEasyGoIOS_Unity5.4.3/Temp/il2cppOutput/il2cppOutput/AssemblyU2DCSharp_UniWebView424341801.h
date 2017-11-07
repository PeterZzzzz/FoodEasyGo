#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UniWebViewEdgeInsets
struct UniWebViewEdgeInsets_t2575124764;
// System.String
struct String_t;
// System.Action
struct Action_t3771233898;
// UniWebView/LoadCompleteDelegate
struct LoadCompleteDelegate_t233340970;
// UniWebView/LoadBeginDelegate
struct LoadBeginDelegate_t443494018;
// UniWebView/ReceivedMessageDelegate
struct ReceivedMessageDelegate_t1738560389;
// UniWebView/EvalJavaScriptFinishedDelegate
struct EvalJavaScriptFinishedDelegate_t1102887750;
// UniWebView/WebViewShouldCloseDelegate
struct WebViewShouldCloseDelegate_t2943758487;
// UniWebView/ReceivedKeyCodeDelegate
struct ReceivedKeyCodeDelegate_t559028074;
// UniWebView/InsetsForScreenOreitationDelegate
struct InsetsForScreenOreitationDelegate_t3825785926;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebView
struct  UniWebView_t424341801  : public MonoBehaviour_t667441552
{
public:
	// UniWebViewEdgeInsets UniWebView::_insets
	UniWebViewEdgeInsets_t2575124764 * ____insets_2;
	// System.String UniWebView::url
	String_t* ___url_3;
	// System.Boolean UniWebView::loadOnStart
	bool ___loadOnStart_4;
	// System.Boolean UniWebView::autoShowWhenLoadComplete
	bool ___autoShowWhenLoadComplete_5;
	// System.Boolean UniWebView::_backButtonEnable
	bool ____backButtonEnable_6;
	// System.Boolean UniWebView::_bouncesEnable
	bool ____bouncesEnable_7;
	// System.Boolean UniWebView::_zoomEnable
	bool ____zoomEnable_8;
	// System.String UniWebView::_currentGUID
	String_t* ____currentGUID_9;
	// System.Int32 UniWebView::_lastScreenHeight
	int32_t ____lastScreenHeight_10;
	// System.Boolean UniWebView::_immersiveMode
	bool ____immersiveMode_11;
	// System.Action UniWebView::_showTransitionAction
	Action_t3771233898 * ____showTransitionAction_12;
	// System.Action UniWebView::_hideTransitionAction
	Action_t3771233898 * ____hideTransitionAction_13;
	// System.Boolean UniWebView::toolBarShow
	bool ___toolBarShow_14;
	// UniWebView/LoadCompleteDelegate UniWebView::OnLoadComplete
	LoadCompleteDelegate_t233340970 * ___OnLoadComplete_15;
	// UniWebView/LoadBeginDelegate UniWebView::OnLoadBegin
	LoadBeginDelegate_t443494018 * ___OnLoadBegin_16;
	// UniWebView/ReceivedMessageDelegate UniWebView::OnReceivedMessage
	ReceivedMessageDelegate_t1738560389 * ___OnReceivedMessage_17;
	// UniWebView/EvalJavaScriptFinishedDelegate UniWebView::OnEvalJavaScriptFinished
	EvalJavaScriptFinishedDelegate_t1102887750 * ___OnEvalJavaScriptFinished_18;
	// UniWebView/WebViewShouldCloseDelegate UniWebView::OnWebViewShouldClose
	WebViewShouldCloseDelegate_t2943758487 * ___OnWebViewShouldClose_19;
	// UniWebView/ReceivedKeyCodeDelegate UniWebView::OnReceivedKeyCode
	ReceivedKeyCodeDelegate_t559028074 * ___OnReceivedKeyCode_20;
	// UniWebView/InsetsForScreenOreitationDelegate UniWebView::InsetsForScreenOreitation
	InsetsForScreenOreitationDelegate_t3825785926 * ___InsetsForScreenOreitation_21;

public:
	inline static int32_t get_offset_of__insets_2() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ____insets_2)); }
	inline UniWebViewEdgeInsets_t2575124764 * get__insets_2() const { return ____insets_2; }
	inline UniWebViewEdgeInsets_t2575124764 ** get_address_of__insets_2() { return &____insets_2; }
	inline void set__insets_2(UniWebViewEdgeInsets_t2575124764 * value)
	{
		____insets_2 = value;
		Il2CppCodeGenWriteBarrier(&____insets_2, value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier(&___url_3, value);
	}

	inline static int32_t get_offset_of_loadOnStart_4() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ___loadOnStart_4)); }
	inline bool get_loadOnStart_4() const { return ___loadOnStart_4; }
	inline bool* get_address_of_loadOnStart_4() { return &___loadOnStart_4; }
	inline void set_loadOnStart_4(bool value)
	{
		___loadOnStart_4 = value;
	}

	inline static int32_t get_offset_of_autoShowWhenLoadComplete_5() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ___autoShowWhenLoadComplete_5)); }
	inline bool get_autoShowWhenLoadComplete_5() const { return ___autoShowWhenLoadComplete_5; }
	inline bool* get_address_of_autoShowWhenLoadComplete_5() { return &___autoShowWhenLoadComplete_5; }
	inline void set_autoShowWhenLoadComplete_5(bool value)
	{
		___autoShowWhenLoadComplete_5 = value;
	}

	inline static int32_t get_offset_of__backButtonEnable_6() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ____backButtonEnable_6)); }
	inline bool get__backButtonEnable_6() const { return ____backButtonEnable_6; }
	inline bool* get_address_of__backButtonEnable_6() { return &____backButtonEnable_6; }
	inline void set__backButtonEnable_6(bool value)
	{
		____backButtonEnable_6 = value;
	}

	inline static int32_t get_offset_of__bouncesEnable_7() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ____bouncesEnable_7)); }
	inline bool get__bouncesEnable_7() const { return ____bouncesEnable_7; }
	inline bool* get_address_of__bouncesEnable_7() { return &____bouncesEnable_7; }
	inline void set__bouncesEnable_7(bool value)
	{
		____bouncesEnable_7 = value;
	}

	inline static int32_t get_offset_of__zoomEnable_8() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ____zoomEnable_8)); }
	inline bool get__zoomEnable_8() const { return ____zoomEnable_8; }
	inline bool* get_address_of__zoomEnable_8() { return &____zoomEnable_8; }
	inline void set__zoomEnable_8(bool value)
	{
		____zoomEnable_8 = value;
	}

	inline static int32_t get_offset_of__currentGUID_9() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ____currentGUID_9)); }
	inline String_t* get__currentGUID_9() const { return ____currentGUID_9; }
	inline String_t** get_address_of__currentGUID_9() { return &____currentGUID_9; }
	inline void set__currentGUID_9(String_t* value)
	{
		____currentGUID_9 = value;
		Il2CppCodeGenWriteBarrier(&____currentGUID_9, value);
	}

	inline static int32_t get_offset_of__lastScreenHeight_10() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ____lastScreenHeight_10)); }
	inline int32_t get__lastScreenHeight_10() const { return ____lastScreenHeight_10; }
	inline int32_t* get_address_of__lastScreenHeight_10() { return &____lastScreenHeight_10; }
	inline void set__lastScreenHeight_10(int32_t value)
	{
		____lastScreenHeight_10 = value;
	}

	inline static int32_t get_offset_of__immersiveMode_11() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ____immersiveMode_11)); }
	inline bool get__immersiveMode_11() const { return ____immersiveMode_11; }
	inline bool* get_address_of__immersiveMode_11() { return &____immersiveMode_11; }
	inline void set__immersiveMode_11(bool value)
	{
		____immersiveMode_11 = value;
	}

	inline static int32_t get_offset_of__showTransitionAction_12() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ____showTransitionAction_12)); }
	inline Action_t3771233898 * get__showTransitionAction_12() const { return ____showTransitionAction_12; }
	inline Action_t3771233898 ** get_address_of__showTransitionAction_12() { return &____showTransitionAction_12; }
	inline void set__showTransitionAction_12(Action_t3771233898 * value)
	{
		____showTransitionAction_12 = value;
		Il2CppCodeGenWriteBarrier(&____showTransitionAction_12, value);
	}

	inline static int32_t get_offset_of__hideTransitionAction_13() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ____hideTransitionAction_13)); }
	inline Action_t3771233898 * get__hideTransitionAction_13() const { return ____hideTransitionAction_13; }
	inline Action_t3771233898 ** get_address_of__hideTransitionAction_13() { return &____hideTransitionAction_13; }
	inline void set__hideTransitionAction_13(Action_t3771233898 * value)
	{
		____hideTransitionAction_13 = value;
		Il2CppCodeGenWriteBarrier(&____hideTransitionAction_13, value);
	}

	inline static int32_t get_offset_of_toolBarShow_14() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ___toolBarShow_14)); }
	inline bool get_toolBarShow_14() const { return ___toolBarShow_14; }
	inline bool* get_address_of_toolBarShow_14() { return &___toolBarShow_14; }
	inline void set_toolBarShow_14(bool value)
	{
		___toolBarShow_14 = value;
	}

	inline static int32_t get_offset_of_OnLoadComplete_15() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ___OnLoadComplete_15)); }
	inline LoadCompleteDelegate_t233340970 * get_OnLoadComplete_15() const { return ___OnLoadComplete_15; }
	inline LoadCompleteDelegate_t233340970 ** get_address_of_OnLoadComplete_15() { return &___OnLoadComplete_15; }
	inline void set_OnLoadComplete_15(LoadCompleteDelegate_t233340970 * value)
	{
		___OnLoadComplete_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnLoadComplete_15, value);
	}

	inline static int32_t get_offset_of_OnLoadBegin_16() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ___OnLoadBegin_16)); }
	inline LoadBeginDelegate_t443494018 * get_OnLoadBegin_16() const { return ___OnLoadBegin_16; }
	inline LoadBeginDelegate_t443494018 ** get_address_of_OnLoadBegin_16() { return &___OnLoadBegin_16; }
	inline void set_OnLoadBegin_16(LoadBeginDelegate_t443494018 * value)
	{
		___OnLoadBegin_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnLoadBegin_16, value);
	}

	inline static int32_t get_offset_of_OnReceivedMessage_17() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ___OnReceivedMessage_17)); }
	inline ReceivedMessageDelegate_t1738560389 * get_OnReceivedMessage_17() const { return ___OnReceivedMessage_17; }
	inline ReceivedMessageDelegate_t1738560389 ** get_address_of_OnReceivedMessage_17() { return &___OnReceivedMessage_17; }
	inline void set_OnReceivedMessage_17(ReceivedMessageDelegate_t1738560389 * value)
	{
		___OnReceivedMessage_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnReceivedMessage_17, value);
	}

	inline static int32_t get_offset_of_OnEvalJavaScriptFinished_18() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ___OnEvalJavaScriptFinished_18)); }
	inline EvalJavaScriptFinishedDelegate_t1102887750 * get_OnEvalJavaScriptFinished_18() const { return ___OnEvalJavaScriptFinished_18; }
	inline EvalJavaScriptFinishedDelegate_t1102887750 ** get_address_of_OnEvalJavaScriptFinished_18() { return &___OnEvalJavaScriptFinished_18; }
	inline void set_OnEvalJavaScriptFinished_18(EvalJavaScriptFinishedDelegate_t1102887750 * value)
	{
		___OnEvalJavaScriptFinished_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnEvalJavaScriptFinished_18, value);
	}

	inline static int32_t get_offset_of_OnWebViewShouldClose_19() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ___OnWebViewShouldClose_19)); }
	inline WebViewShouldCloseDelegate_t2943758487 * get_OnWebViewShouldClose_19() const { return ___OnWebViewShouldClose_19; }
	inline WebViewShouldCloseDelegate_t2943758487 ** get_address_of_OnWebViewShouldClose_19() { return &___OnWebViewShouldClose_19; }
	inline void set_OnWebViewShouldClose_19(WebViewShouldCloseDelegate_t2943758487 * value)
	{
		___OnWebViewShouldClose_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnWebViewShouldClose_19, value);
	}

	inline static int32_t get_offset_of_OnReceivedKeyCode_20() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ___OnReceivedKeyCode_20)); }
	inline ReceivedKeyCodeDelegate_t559028074 * get_OnReceivedKeyCode_20() const { return ___OnReceivedKeyCode_20; }
	inline ReceivedKeyCodeDelegate_t559028074 ** get_address_of_OnReceivedKeyCode_20() { return &___OnReceivedKeyCode_20; }
	inline void set_OnReceivedKeyCode_20(ReceivedKeyCodeDelegate_t559028074 * value)
	{
		___OnReceivedKeyCode_20 = value;
		Il2CppCodeGenWriteBarrier(&___OnReceivedKeyCode_20, value);
	}

	inline static int32_t get_offset_of_InsetsForScreenOreitation_21() { return static_cast<int32_t>(offsetof(UniWebView_t424341801, ___InsetsForScreenOreitation_21)); }
	inline InsetsForScreenOreitationDelegate_t3825785926 * get_InsetsForScreenOreitation_21() const { return ___InsetsForScreenOreitation_21; }
	inline InsetsForScreenOreitationDelegate_t3825785926 ** get_address_of_InsetsForScreenOreitation_21() { return &___InsetsForScreenOreitation_21; }
	inline void set_InsetsForScreenOreitation_21(InsetsForScreenOreitationDelegate_t3825785926 * value)
	{
		___InsetsForScreenOreitation_21 = value;
		Il2CppCodeGenWriteBarrier(&___InsetsForScreenOreitation_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
