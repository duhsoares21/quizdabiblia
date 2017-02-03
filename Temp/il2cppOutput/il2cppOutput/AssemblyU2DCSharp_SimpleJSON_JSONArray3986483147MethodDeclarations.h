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

// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
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
#include "AssemblyU2DCSharp_SimpleJSON_JSONNode1250409636.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"

// System.Void SimpleJSON.JSONArray::.ctor()
extern "C"  void JSONArray__ctor_m4129766796 (JSONArray_t3986483147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.Int32)
extern "C"  JSONNode_t1250409636 * JSONArray_get_Item_m843577212 (JSONArray_t3986483147 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONArray_set_Item_m3548367291 (JSONArray_t3986483147 * __this, int32_t ___aIndex0, JSONNode_t1250409636 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.String)
extern "C"  JSONNode_t1250409636 * JSONArray_get_Item_m3720918199 (JSONArray_t3986483147 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONArray_set_Item_m2155750306 (JSONArray_t3986483147 * __this, String_t* ___aKey0, JSONNode_t1250409636 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONArray::get_Count()
extern "C"  int32_t JSONArray_get_Count_m3342023662 (JSONArray_t3986483147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONArray_Add_m2104123857 (JSONArray_t3986483147 * __this, String_t* ___aKey0, JSONNode_t1250409636 * ___aItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(System.Int32)
extern "C"  JSONNode_t1250409636 * JSONArray_Remove_m3117321082 (JSONArray_t3986483147 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(SimpleJSON.JSONNode)
extern "C"  JSONNode_t1250409636 * JSONArray_Remove_m201393223 (JSONArray_t3986483147 * __this, JSONNode_t1250409636 * ___aNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::get_Children()
extern "C"  Il2CppObject* JSONArray_get_Children_m425458474 (JSONArray_t3986483147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimpleJSON.JSONArray::GetEnumerator()
extern "C"  Il2CppObject * JSONArray_GetEnumerator_m1669476858 (JSONArray_t3986483147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONArray::ToString()
extern "C"  String_t* JSONArray_ToString_m3698074869 (JSONArray_t3986483147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONArray::ToString(System.String)
extern "C"  String_t* JSONArray_ToString_m2057207447 (JSONArray_t3986483147 * __this, String_t* ___aPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONArray::ToJSON(System.Int32)
extern "C"  String_t* JSONArray_ToJSON_m360570301 (JSONArray_t3986483147 * __this, int32_t ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONArray_Serialize_m853616491 (JSONArray_t3986483147 * __this, BinaryWriter_t3179371318 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
