#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// SimpleJSON.JSONNode
struct JSONNode_t1250409636;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_SimpleJSON_JSONNode1250409636.h"

#pragma once
// SimpleJSON.JSONNode[]
struct JSONNodeU5BU5D_t3483773005  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) JSONNode_t1250409636 * m_Items[1];

public:
	inline JSONNode_t1250409636 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline JSONNode_t1250409636 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, JSONNode_t1250409636 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
