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

// SimpleJSON.JSONData
struct JSONData_t531041784;
// System.String
struct String_t;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"

// System.Void SimpleJSON.JSONData::.ctor(System.String)
extern "C"  void JSONData__ctor_m2531653761 (JSONData_t531041784 * __this, String_t* ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Single)
extern "C"  void JSONData__ctor_m190773628 (JSONData_t531041784 * __this, float ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Double)
extern "C"  void JSONData__ctor_m2404334189 (JSONData_t531041784 * __this, double ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Boolean)
extern "C"  void JSONData__ctor_m1667522230 (JSONData_t531041784 * __this, bool ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Int32)
extern "C"  void JSONData__ctor_m3833971254 (JSONData_t531041784 * __this, int32_t ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONData::get_Value()
extern "C"  String_t* JSONData_get_Value_m3371226656 (JSONData_t531041784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::set_Value(System.String)
extern "C"  void JSONData_set_Value_m1337656627 (JSONData_t531041784 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONData::ToString()
extern "C"  String_t* JSONData_ToString_m2538917048 (JSONData_t531041784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONData::ToString(System.String)
extern "C"  String_t* JSONData_ToString_m867985202 (JSONData_t531041784 * __this, String_t* ___aPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONData::ToJSON(System.Int32)
extern "C"  String_t* JSONData_ToJSON_m1031623066 (JSONData_t531041784 * __this, int32_t ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONData_Serialize_m3816371868 (JSONData_t531041784 * __this, BinaryWriter_t3179371318 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
