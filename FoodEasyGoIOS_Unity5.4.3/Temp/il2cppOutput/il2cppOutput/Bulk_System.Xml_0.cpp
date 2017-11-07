#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t901819716;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Xml.XmlNodeList
struct XmlNodeList_t991860617;
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t1675009921;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t3993110696;
// System.Xml.IHasXmlChildNode
struct IHasXmlChildNode_t954813494;
// System.Xml.XmlNodeListChildren/Enumerator
struct Enumerator_t3708952179;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "System_Xml_U3CModuleU3E86524790.h"
#include "System_Xml_U3CModuleU3E86524790MethodDeclarations.h"
#include "System_Xml_System_Xml_XmlLinkedNode901819716.h"
#include "System_Xml_System_Xml_XmlLinkedNode901819716MethodDeclarations.h"
#include "System_Xml_System_Xml_XmlNode856910923.h"
#include "System_Xml_System_Xml_XmlNode856910923MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "System_Xml_System_Xml_XmlNode_EmptyNodeList1675009921MethodDeclarations.h"
#include "System_Xml_System_Xml_XmlNode_EmptyNodeList1675009921.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_XmlNodeList991860617.h"
#include "System_Xml_System_Xml_XmlNodeListChildren3993110696MethodDeclarations.h"
#include "System_Xml_System_Xml_XmlNodeListChildren3993110696.h"
#include "mscorlib_System_Boolean476798718.h"
#include "System_Xml_System_Xml_XmlNodeList991860617MethodDeclarations.h"
#include "mscorlib_System_Array1146569071MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "System_Xml_System_Xml_XmlNodeListChildren_Enumerat3708952179MethodDeclarations.h"
#include "System_Xml_System_Xml_XmlNodeListChildren_Enumerat3708952179.h"
#include "mscorlib_System_InvalidOperationException1589641621MethodDeclarations.h"
#include "mscorlib_System_InvalidOperationException1589641621.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::get_NextLinkedSibling()
extern "C"  XmlLinkedNode_t901819716 * XmlLinkedNode_get_NextLinkedSibling_m979414879 (XmlLinkedNode_t901819716 * __this, const MethodInfo* method)
{
	{
		XmlLinkedNode_t901819716 * L_0 = __this->get_nextSibling_2();
		return L_0;
	}
}
// System.Void System.Xml.XmlNode::.cctor()
extern Il2CppClass* EmptyNodeList_t1675009921_il2cpp_TypeInfo_var;
extern Il2CppClass* XmlNode_t856910923_il2cpp_TypeInfo_var;
extern const uint32_t XmlNode__cctor_m3750010027_MetadataUsageId;
extern "C"  void XmlNode__cctor_m3750010027 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (XmlNode__cctor_m3750010027_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		EmptyNodeList_t1675009921 * L_0 = (EmptyNodeList_t1675009921 *)il2cpp_codegen_object_new(EmptyNodeList_t1675009921_il2cpp_TypeInfo_var);
		EmptyNodeList__ctor_m1101004932(L_0, /*hidden argument*/NULL);
		((XmlNode_t856910923_StaticFields*)XmlNode_t856910923_il2cpp_TypeInfo_var->static_fields)->set_emptyList_0(L_0);
		return;
	}
}
// System.Object System.Xml.XmlNode::System.ICloneable.Clone()
extern "C"  Il2CppObject * XmlNode_System_ICloneable_Clone_m132385191 (XmlNode_t856910923 * __this, const MethodInfo* method)
{
	{
		XmlNode_t856910923 * L_0 = VirtFuncInvoker0< XmlNode_t856910923 * >::Invoke(7 /* System.Xml.XmlNode System.Xml.XmlNode::Clone() */, __this);
		return L_0;
	}
}
// System.Collections.IEnumerator System.Xml.XmlNode::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * XmlNode_System_Collections_IEnumerable_GetEnumerator_m2007552963 (XmlNode_t856910923 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = XmlNode_GetEnumerator_m1468861310(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes()
extern Il2CppClass* IHasXmlChildNode_t954813494_il2cpp_TypeInfo_var;
extern Il2CppClass* XmlNode_t856910923_il2cpp_TypeInfo_var;
extern Il2CppClass* XmlNodeListChildren_t3993110696_il2cpp_TypeInfo_var;
extern const uint32_t XmlNode_get_ChildNodes_m4017826864_MetadataUsageId;
extern "C"  XmlNodeList_t991860617 * XmlNode_get_ChildNodes_m4017826864 (XmlNode_t856910923 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (XmlNode_get_ChildNodes_m4017826864_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	{
		V_0 = ((Il2CppObject *)IsInst(__this, IHasXmlChildNode_t954813494_il2cpp_TypeInfo_var));
		Il2CppObject * L_0 = V_0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlNode_t856910923_il2cpp_TypeInfo_var);
		EmptyNodeList_t1675009921 * L_1 = ((XmlNode_t856910923_StaticFields*)XmlNode_t856910923_il2cpp_TypeInfo_var->static_fields)->get_emptyList_0();
		return L_1;
	}

IL_0013:
	{
		XmlNodeListChildren_t3993110696 * L_2 = __this->get_childNodes_1();
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		Il2CppObject * L_3 = V_0;
		XmlNodeListChildren_t3993110696 * L_4 = (XmlNodeListChildren_t3993110696 *)il2cpp_codegen_object_new(XmlNodeListChildren_t3993110696_il2cpp_TypeInfo_var);
		XmlNodeListChildren__ctor_m2590049695(L_4, L_3, /*hidden argument*/NULL);
		__this->set_childNodes_1(L_4);
	}

IL_002a:
	{
		XmlNodeListChildren_t3993110696 * L_5 = __this->get_childNodes_1();
		return L_5;
	}
}
// System.Xml.XmlNode System.Xml.XmlNode::Clone()
extern "C"  XmlNode_t856910923 * XmlNode_Clone_m2225215247 (XmlNode_t856910923 * __this, const MethodInfo* method)
{
	{
		XmlNode_t856910923 * L_0 = VirtFuncInvoker1< XmlNode_t856910923 *, bool >::Invoke(8 /* System.Xml.XmlNode System.Xml.XmlNode::CloneNode(System.Boolean) */, __this, (bool)1);
		return L_0;
	}
}
// System.Collections.IEnumerator System.Xml.XmlNode::GetEnumerator()
extern "C"  Il2CppObject * XmlNode_GetEnumerator_m1468861310 (XmlNode_t856910923 * __this, const MethodInfo* method)
{
	{
		XmlNodeList_t991860617 * L_0 = VirtFuncInvoker0< XmlNodeList_t991860617 * >::Invoke(6 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, __this);
		NullCheck(L_0);
		Il2CppObject * L_1 = VirtFuncInvoker0< Il2CppObject * >::Invoke(5 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Void System.Xml.XmlNode/EmptyNodeList::.ctor()
extern "C"  void EmptyNodeList__ctor_m1101004932 (EmptyNodeList_t1675009921 * __this, const MethodInfo* method)
{
	{
		XmlNodeList__ctor_m3335844036(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlNode/EmptyNodeList::.cctor()
extern Il2CppClass* ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var;
extern Il2CppClass* EmptyNodeList_t1675009921_il2cpp_TypeInfo_var;
extern const uint32_t EmptyNodeList__cctor_m3584285609_MetadataUsageId;
extern "C"  void EmptyNodeList__cctor_m3584285609 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (EmptyNodeList__cctor_m3584285609_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Il2CppArray *)(Il2CppArray *)((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)0)));
		Il2CppObject * L_0 = Array_GetEnumerator_m2728734362((Il2CppArray *)(Il2CppArray *)((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		((EmptyNodeList_t1675009921_StaticFields*)EmptyNodeList_t1675009921_il2cpp_TypeInfo_var->static_fields)->set_emptyEnumerator_0(L_0);
		return;
	}
}
// System.Collections.IEnumerator System.Xml.XmlNode/EmptyNodeList::GetEnumerator()
extern Il2CppClass* EmptyNodeList_t1675009921_il2cpp_TypeInfo_var;
extern const uint32_t EmptyNodeList_GetEnumerator_m2541630400_MetadataUsageId;
extern "C"  Il2CppObject * EmptyNodeList_GetEnumerator_m2541630400 (EmptyNodeList_t1675009921 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (EmptyNodeList_GetEnumerator_m2541630400_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EmptyNodeList_t1675009921_il2cpp_TypeInfo_var);
		Il2CppObject * L_0 = ((EmptyNodeList_t1675009921_StaticFields*)EmptyNodeList_t1675009921_il2cpp_TypeInfo_var->static_fields)->get_emptyEnumerator_0();
		return L_0;
	}
}
// System.Void System.Xml.XmlNodeList::.ctor()
extern "C"  void XmlNodeList__ctor_m3335844036 (XmlNodeList_t991860617 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlNodeListChildren::.ctor(System.Xml.IHasXmlChildNode)
extern "C"  void XmlNodeListChildren__ctor_m2590049695 (XmlNodeListChildren_t3993110696 * __this, Il2CppObject * ___parent0, const MethodInfo* method)
{
	{
		XmlNodeList__ctor_m3335844036(__this, /*hidden argument*/NULL);
		Il2CppObject * L_0 = ___parent0;
		__this->set_parent_0(L_0);
		return;
	}
}
// System.Collections.IEnumerator System.Xml.XmlNodeListChildren::GetEnumerator()
extern Il2CppClass* Enumerator_t3708952179_il2cpp_TypeInfo_var;
extern const uint32_t XmlNodeListChildren_GetEnumerator_m90577857_MetadataUsageId;
extern "C"  Il2CppObject * XmlNodeListChildren_GetEnumerator_m90577857 (XmlNodeListChildren_t3993110696 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (XmlNodeListChildren_GetEnumerator_m90577857_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = __this->get_parent_0();
		Enumerator_t3708952179 * L_1 = (Enumerator_t3708952179 *)il2cpp_codegen_object_new(Enumerator_t3708952179_il2cpp_TypeInfo_var);
		Enumerator__ctor_m1583025462(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlNodeListChildren/Enumerator::.ctor(System.Xml.IHasXmlChildNode)
extern "C"  void Enumerator__ctor_m1583025462 (Enumerator_t3708952179 * __this, Il2CppObject * ___parent0, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		__this->set_currentChild_1((XmlLinkedNode_t901819716 *)NULL);
		Il2CppObject * L_0 = ___parent0;
		__this->set_parent_0(L_0);
		__this->set_passedLastNode_2((bool)0);
		return;
	}
}
// System.Object System.Xml.XmlNodeListChildren/Enumerator::get_Current()
extern Il2CppClass* IHasXmlChildNode_t954813494_il2cpp_TypeInfo_var;
extern Il2CppClass* InvalidOperationException_t1589641621_il2cpp_TypeInfo_var;
extern const uint32_t Enumerator_get_Current_m1942501873_MetadataUsageId;
extern "C"  Il2CppObject * Enumerator_get_Current_m1942501873 (Enumerator_t3708952179 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_get_Current_m1942501873_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlLinkedNode_t901819716 * L_0 = __this->get_currentChild_1();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		Il2CppObject * L_1 = __this->get_parent_0();
		NullCheck(L_1);
		XmlLinkedNode_t901819716 * L_2 = InterfaceFuncInvoker0< XmlLinkedNode_t901819716 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t954813494_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		bool L_3 = __this->get_passedLastNode_2();
		if (!L_3)
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		InvalidOperationException_t1589641621 * L_4 = (InvalidOperationException_t1589641621 *)il2cpp_codegen_object_new(InvalidOperationException_t1589641621_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m355676978(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_002c:
	{
		XmlLinkedNode_t901819716 * L_5 = __this->get_currentChild_1();
		return L_5;
	}
}
// System.Boolean System.Xml.XmlNodeListChildren/Enumerator::MoveNext()
extern Il2CppClass* IHasXmlChildNode_t954813494_il2cpp_TypeInfo_var;
extern const uint32_t Enumerator_MoveNext_m2489713170_MetadataUsageId;
extern "C"  bool Enumerator_MoveNext_m2489713170 (Enumerator_t3708952179 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_MoveNext_m2489713170_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)1;
		Il2CppObject * L_0 = __this->get_parent_0();
		NullCheck(L_0);
		XmlLinkedNode_t901819716 * L_1 = InterfaceFuncInvoker0< XmlLinkedNode_t901819716 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t954813494_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0079;
	}

IL_0019:
	{
		XmlLinkedNode_t901819716 * L_2 = __this->get_currentChild_1();
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		Il2CppObject * L_3 = __this->get_parent_0();
		NullCheck(L_3);
		XmlLinkedNode_t901819716 * L_4 = InterfaceFuncInvoker0< XmlLinkedNode_t901819716 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t954813494_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		XmlLinkedNode_t901819716 * L_5 = XmlLinkedNode_get_NextLinkedSibling_m979414879(L_4, /*hidden argument*/NULL);
		__this->set_currentChild_1(L_5);
		goto IL_0079;
	}

IL_003f:
	{
		XmlLinkedNode_t901819716 * L_6 = __this->get_currentChild_1();
		Il2CppObject * L_7 = __this->get_parent_0();
		NullCheck(L_7);
		XmlLinkedNode_t901819716 * L_8 = InterfaceFuncInvoker0< XmlLinkedNode_t901819716 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t954813494_il2cpp_TypeInfo_var, L_7);
		bool L_9 = Object_ReferenceEquals_m3695130242(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0068;
		}
	}
	{
		V_0 = (bool)0;
		__this->set_passedLastNode_2((bool)1);
		goto IL_0079;
	}

IL_0068:
	{
		XmlLinkedNode_t901819716 * L_10 = __this->get_currentChild_1();
		NullCheck(L_10);
		XmlLinkedNode_t901819716 * L_11 = XmlLinkedNode_get_NextLinkedSibling_m979414879(L_10, /*hidden argument*/NULL);
		__this->set_currentChild_1(L_11);
	}

IL_0079:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Void System.Xml.XmlNodeListChildren/Enumerator::Reset()
extern "C"  void Enumerator_Reset_m3781311995 (Enumerator_t3708952179 * __this, const MethodInfo* method)
{
	{
		__this->set_currentChild_1((XmlLinkedNode_t901819716 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
