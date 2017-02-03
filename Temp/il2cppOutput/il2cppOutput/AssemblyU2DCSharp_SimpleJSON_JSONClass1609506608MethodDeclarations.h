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

// SimpleJSON.JSONClass
struct JSONClass_t1609506608;
// SimpleJSON.JSONNode
struct JSONNode_t1250409636;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_t1542536681;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_SimpleJSON_JSONNode1250409636.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"

// System.Void SimpleJSON.JSONClass::.ctor()
extern "C"  void JSONClass__ctor_m2824783081 (JSONClass_t1609506608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String)
extern "C"  JSONNode_t1250409636 * JSONClass_get_Item_m1151487306 (JSONClass_t1609506608 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONClass_set_Item_m294281623 (JSONClass_t1609506608 * __this, String_t* ___aKey0, JSONNode_t1250409636 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.Int32)
extern "C"  JSONNode_t1250409636 * JSONClass_get_Item_m1614518043 (JSONClass_t1609506608 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONClass_set_Item_m1892718524 (JSONClass_t1609506608 * __this, int32_t ___aIndex0, JSONNode_t1250409636 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONClass::get_Count()
extern "C"  int32_t JSONClass_get_Count_m1087342269 (JSONClass_t1609506608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONClass_Add_m3353809646 (JSONClass_t1609506608 * __this, String_t* ___aKey0, JSONNode_t1250409636 * ___aItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(System.String)
extern "C"  JSONNode_t1250409636 * JSONClass_Remove_m49393784 (JSONClass_t1609506608 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(System.Int32)
extern "C"  JSONNode_t1250409636 * JSONClass_Remove_m393697153 (JSONClass_t1609506608 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(SimpleJSON.JSONNode)
extern "C"  JSONNode_t1250409636 * JSONClass_Remove_m1114414420 (JSONClass_t1609506608 * __this, JSONNode_t1250409636 * ___aNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONClass::get_Children()
extern "C"  Il2CppObject* JSONClass_get_Children_m3176321675 (JSONClass_t1609506608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimpleJSON.JSONClass::GetEnumerator()
extern "C"  Il2CppObject * JSONClass_GetEnumerator_m578951965 (JSONClass_t1609506608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONClass::ToString()
extern "C"  String_t* JSONClass_ToString_m2697413506 (JSONClass_t1609506608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONClass::ToString(System.String)
extern "C"  String_t* JSONClass_ToString_m3380567836 (JSONClass_t1609506608 * __this, String_t* ___aPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONClass::ToJSON(System.Int32)
extern "C"  String_t* JSONClass_ToJSON_m24907740 (JSONClass_t1609506608 * __this, int32_t ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONClass_Serialize_m1517398992 (JSONClass_t1609506608 * __this, BinaryWriter_t3179371318 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
