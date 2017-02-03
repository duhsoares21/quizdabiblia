#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_t3575446586;
// SimpleJSON.JSONNode
struct JSONNode_t1250409636;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// SimpleJSON.JSONClass
struct JSONClass_t1609506608;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SimpleJSON_JSONNode1250409636.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_SimpleJSON_JSONLazyCreator3575446586.h"

// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator__ctor_m2091515461 (JSONLazyCreator_t3575446586 * __this, JSONNode_t1250409636 * ___aNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
extern "C"  void JSONLazyCreator__ctor_m903678563 (JSONLazyCreator_t3575446586 * __this, JSONNode_t1250409636 * ___aNode0, String_t* ___aKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::Set(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_Set_m4078789623 (JSONLazyCreator_t3575446586 * __this, JSONNode_t1250409636 * ___aVal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.Int32)
extern "C"  JSONNode_t1250409636 * JSONLazyCreator_get_Item_m827336555 (JSONLazyCreator_t3575446586 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_set_Item_m886657346 (JSONLazyCreator_t3575446586 * __this, int32_t ___aIndex0, JSONNode_t1250409636 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.String)
extern "C"  JSONNode_t1250409636 * JSONLazyCreator_get_Item_m2570601580 (JSONLazyCreator_t3575446586 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_set_Item_m567181327 (JSONLazyCreator_t3575446586 * __this, String_t* ___aKey0, JSONNode_t1250409636 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::Add(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_Add_m1872029232 (JSONLazyCreator_t3575446586 * __this, JSONNode_t1250409636 * ___aItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_Add_m2801656752 (JSONLazyCreator_t3575446586 * __this, String_t* ___aKey0, JSONNode_t1250409636 * ___aItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::Equals(System.Object)
extern "C"  bool JSONLazyCreator_Equals_m3816966850 (JSONLazyCreator_t3575446586 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONLazyCreator::GetHashCode()
extern "C"  int32_t JSONLazyCreator_GetHashCode_m2071540894 (JSONLazyCreator_t3575446586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONLazyCreator::ToString()
extern "C"  String_t* JSONLazyCreator_ToString_m2006043772 (JSONLazyCreator_t3575446586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONLazyCreator::ToString(System.String)
extern "C"  String_t* JSONLazyCreator_ToString_m2173505466 (JSONLazyCreator_t3575446586 * __this, String_t* ___aPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONLazyCreator::ToJSON(System.Int32)
extern "C"  String_t* JSONLazyCreator_ToJSON_m896254474 (JSONLazyCreator_t3575446586 * __this, int32_t ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONLazyCreator::get_AsInt()
extern "C"  int32_t JSONLazyCreator_get_AsInt_m1554086779 (JSONLazyCreator_t3575446586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsInt(System.Int32)
extern "C"  void JSONLazyCreator_set_AsInt_m3987969462 (JSONLazyCreator_t3575446586 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SimpleJSON.JSONLazyCreator::get_AsFloat()
extern "C"  float JSONLazyCreator_get_AsFloat_m4246168682 (JSONLazyCreator_t3575446586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsFloat(System.Single)
extern "C"  void JSONLazyCreator_set_AsFloat_m2943361563 (JSONLazyCreator_t3575446586 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double SimpleJSON.JSONLazyCreator::get_AsDouble()
extern "C"  double JSONLazyCreator_get_AsDouble_m1014878756 (JSONLazyCreator_t3575446586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsDouble(System.Double)
extern "C"  void JSONLazyCreator_set_AsDouble_m543370665 (JSONLazyCreator_t3575446586 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::get_AsBool()
extern "C"  bool JSONLazyCreator_get_AsBool_m403888598 (JSONLazyCreator_t3575446586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsBool(System.Boolean)
extern "C"  void JSONLazyCreator_set_AsBool_m3691699011 (JSONLazyCreator_t3575446586 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONArray SimpleJSON.JSONLazyCreator::get_AsArray()
extern "C"  JSONArray_t3986483147 * JSONLazyCreator_get_AsArray_m479900713 (JSONLazyCreator_t3575446586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONClass SimpleJSON.JSONLazyCreator::get_AsObject()
extern "C"  JSONClass_t1609506608 * JSONLazyCreator_get_AsObject_m4024075500 (JSONLazyCreator_t3575446586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C"  bool JSONLazyCreator_op_Equality_m1028497305 (Il2CppObject * __this /* static, unused */, JSONLazyCreator_t3575446586 * ___a0, Il2CppObject * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::op_Inequality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C"  bool JSONLazyCreator_op_Inequality_m2642303396 (Il2CppObject * __this /* static, unused */, JSONLazyCreator_t3575446586 * ___a0, Il2CppObject * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
