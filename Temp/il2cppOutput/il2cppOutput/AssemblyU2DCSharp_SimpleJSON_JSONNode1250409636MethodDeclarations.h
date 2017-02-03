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

// SimpleJSON.JSONNode
struct JSONNode_t1250409636;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_t1542536681;
// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// SimpleJSON.JSONClass
struct JSONClass_t1609506608;
// System.Object
struct Il2CppObject;
// SimpleJSON.JSONData
struct JSONData_t531041784;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.IO.Stream
struct Stream_t3255436806;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_SimpleJSON_JSONNode1250409636.h"
#include "AssemblyU2DCSharp_SimpleJSON_JSONBinaryTag3856753551.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_IO_BinaryReader2491843768.h"

// System.Void SimpleJSON.JSONNode::.ctor()
extern "C"  void JSONNode__ctor_m2843907167 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONNode_Add_m1880589374 (JSONNode_t1250409636 * __this, String_t* ___aKey0, JSONNode_t1250409636 * ___aItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32)
extern "C"  JSONNode_t1250409636 * JSONNode_get_Item_m1126855581 (JSONNode_t1250409636 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONNode_set_Item_m3265246516 (JSONNode_t1250409636 * __this, int32_t ___aIndex0, JSONNode_t1250409636 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String)
extern "C"  JSONNode_t1250409636 * JSONNode_get_Item_m492082556 (JSONNode_t1250409636 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONNode_set_Item_m3709451321 (JSONNode_t1250409636 * __this, String_t* ___aKey0, JSONNode_t1250409636 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::get_Value()
extern "C"  String_t* JSONNode_get_Value_m3084749516 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Value(System.String)
extern "C"  void JSONNode_set_Value_m1721383243 (JSONNode_t1250409636 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::get_Count()
extern "C"  int32_t JSONNode_get_Count_m2347074783 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode)
extern "C"  void JSONNode_Add_m837804042 (JSONNode_t1250409636 * __this, JSONNode_t1250409636 * ___aItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.String)
extern "C"  JSONNode_t1250409636 * JSONNode_Remove_m2736851082 (JSONNode_t1250409636 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.Int32)
extern "C"  JSONNode_t1250409636 * JSONNode_Remove_m2816749171 (JSONNode_t1250409636 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(SimpleJSON.JSONNode)
extern "C"  JSONNode_t1250409636 * JSONNode_Remove_m2904160570 (JSONNode_t1250409636 * __this, JSONNode_t1250409636 * ___aNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Children()
extern "C"  Il2CppObject* JSONNode_get_Children_m3351936441 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChildren()
extern "C"  Il2CppObject* JSONNode_get_DeepChildren_m3329523593 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::ToString()
extern "C"  String_t* JSONNode_ToString_m3410281596 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::ToString(System.String)
extern "C"  String_t* JSONNode_ToString_m3020997818 (JSONNode_t1250409636 * __this, String_t* ___aPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONBinaryTag SimpleJSON.JSONNode::get_Tag()
extern "C"  int32_t JSONNode_get_Tag_m3610386242 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Tag(SimpleJSON.JSONBinaryTag)
extern "C"  void JSONNode_set_Tag_m2478154245 (JSONNode_t1250409636 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::get_AsInt()
extern "C"  int32_t JSONNode_get_AsInt_m4126623149 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32)
extern "C"  void JSONNode_set_AsInt_m2326483540 (JSONNode_t1250409636 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SimpleJSON.JSONNode::get_AsFloat()
extern "C"  float JSONNode_get_AsFloat_m4002601236 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single)
extern "C"  void JSONNode_set_AsFloat_m1918375005 (JSONNode_t1250409636 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double SimpleJSON.JSONNode::get_AsDouble()
extern "C"  double JSONNode_get_AsDouble_m3269212600 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double)
extern "C"  void JSONNode_set_AsDouble_m2756477287 (JSONNode_t1250409636 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::get_AsBool()
extern "C"  bool JSONNode_get_AsBool_m3431398284 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean)
extern "C"  void JSONNode_set_AsBool_m1656427513 (JSONNode_t1250409636 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONArray SimpleJSON.JSONNode::get_AsArray()
extern "C"  JSONArray_t3986483147 * JSONNode_get_AsArray_m2034660119 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONClass SimpleJSON.JSONNode::get_AsObject()
extern "C"  JSONClass_t1609506608 * JSONNode_get_AsObject_m609138584 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
extern "C"  bool JSONNode_Equals_m1751242992 (JSONNode_t1250409636 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::GetHashCode()
extern "C"  int32_t JSONNode_GetHashCode_m3708079496 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::Escape(System.String)
extern "C"  String_t* JSONNode_Escape_m1452464221 (Il2CppObject * __this /* static, unused */, String_t* ___aText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONData SimpleJSON.JSONNode::Numberize(System.String)
extern "C"  JSONData_t531041784 * JSONNode_Numberize_m768022915 (Il2CppObject * __this /* static, unused */, String_t* ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::AddElement(SimpleJSON.JSONNode,System.String,System.String,System.Boolean)
extern "C"  void JSONNode_AddElement_m2231444931 (Il2CppObject * __this /* static, unused */, JSONNode_t1250409636 * ___ctx0, String_t* ___token1, String_t* ___tokenName2, bool ___tokenIsString3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
extern "C"  JSONNode_t1250409636 * JSONNode_Parse_m2367447255 (Il2CppObject * __this /* static, unused */, String_t* ___aJSON0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONNode_Serialize_m3663482148 (JSONNode_t1250409636 * __this, BinaryWriter_t3179371318 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToStream(System.IO.Stream)
extern "C"  void JSONNode_SaveToStream_m2589699800 (JSONNode_t1250409636 * __this, Stream_t3255436806 * ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToCompressedStream(System.IO.Stream)
extern "C"  void JSONNode_SaveToCompressedStream_m2049660029 (JSONNode_t1250409636 * __this, Stream_t3255436806 * ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToCompressedFile(System.String)
extern "C"  void JSONNode_SaveToCompressedFile_m1751794998 (JSONNode_t1250409636 * __this, String_t* ___aFileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::SaveToCompressedBase64()
extern "C"  String_t* JSONNode_SaveToCompressedBase64_m714380442 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToFile(System.String)
extern "C"  void JSONNode_SaveToFile_m16761965 (JSONNode_t1250409636 * __this, String_t* ___aFileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::SaveToBase64()
extern "C"  String_t* JSONNode_SaveToBase64_m801674835 (JSONNode_t1250409636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Deserialize(System.IO.BinaryReader)
extern "C"  JSONNode_t1250409636 * JSONNode_Deserialize_m305572832 (Il2CppObject * __this /* static, unused */, BinaryReader_t2491843768 * ___aReader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedFile(System.String)
extern "C"  JSONNode_t1250409636 * JSONNode_LoadFromCompressedFile_m3679035739 (Il2CppObject * __this /* static, unused */, String_t* ___aFileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedStream(System.IO.Stream)
extern "C"  JSONNode_t1250409636 * JSONNode_LoadFromCompressedStream_m820051226 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedBase64(System.String)
extern "C"  JSONNode_t1250409636 * JSONNode_LoadFromCompressedBase64_m2251474920 (Il2CppObject * __this /* static, unused */, String_t* ___aBase640, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromStream(System.IO.Stream)
extern "C"  JSONNode_t1250409636 * JSONNode_LoadFromStream_m959960915 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromFile(System.String)
extern "C"  JSONNode_t1250409636 * JSONNode_LoadFromFile_m2714516592 (Il2CppObject * __this /* static, unused */, String_t* ___aFileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromBase64(System.String)
extern "C"  JSONNode_t1250409636 * JSONNode_LoadFromBase64_m3801755973 (Il2CppObject * __this /* static, unused */, String_t* ___aBase640, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
extern "C"  JSONNode_t1250409636 * JSONNode_op_Implicit_m1889743313 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  String_t* JSONNode_op_Implicit_m2649983725 (Il2CppObject * __this /* static, unused */, JSONNode_t1250409636 * ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Equality_m1474779225 (Il2CppObject * __this /* static, unused */, JSONNode_t1250409636 * ___a0, Il2CppObject * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Inequality_m4025825430 (Il2CppObject * __this /* static, unused */, JSONNode_t1250409636 * ___a0, Il2CppObject * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
