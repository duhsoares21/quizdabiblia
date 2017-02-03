#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SimpleJSON.JSONNode
struct JSONNode_t1250409636;
// SimpleJSON.JSONClass
struct JSONClass_t1609506608;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En190246304.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_922534120.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONClass/<>c__Iterator4
struct  U3CU3Ec__Iterator4_t466495840  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONClass/<>c__Iterator4::<$s_10>__0
	Enumerator_t190246304  ___U3CU24s_10U3E__0_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONClass/<>c__Iterator4::<N>__1
	KeyValuePair_2_t922534120  ___U3CNU3E__1_1;
	// System.Int32 SimpleJSON.JSONClass/<>c__Iterator4::$PC
	int32_t ___U24PC_2;
	// SimpleJSON.JSONNode SimpleJSON.JSONClass/<>c__Iterator4::$current
	JSONNode_t1250409636 * ___U24current_3;
	// SimpleJSON.JSONClass SimpleJSON.JSONClass/<>c__Iterator4::<>f__this
	JSONClass_t1609506608 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CU24s_10U3E__0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator4_t466495840, ___U3CU24s_10U3E__0_0)); }
	inline Enumerator_t190246304  get_U3CU24s_10U3E__0_0() const { return ___U3CU24s_10U3E__0_0; }
	inline Enumerator_t190246304 * get_address_of_U3CU24s_10U3E__0_0() { return &___U3CU24s_10U3E__0_0; }
	inline void set_U3CU24s_10U3E__0_0(Enumerator_t190246304  value)
	{
		___U3CU24s_10U3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator4_t466495840, ___U3CNU3E__1_1)); }
	inline KeyValuePair_2_t922534120  get_U3CNU3E__1_1() const { return ___U3CNU3E__1_1; }
	inline KeyValuePair_2_t922534120 * get_address_of_U3CNU3E__1_1() { return &___U3CNU3E__1_1; }
	inline void set_U3CNU3E__1_1(KeyValuePair_2_t922534120  value)
	{
		___U3CNU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator4_t466495840, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator4_t466495840, ___U24current_3)); }
	inline JSONNode_t1250409636 * get_U24current_3() const { return ___U24current_3; }
	inline JSONNode_t1250409636 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(JSONNode_t1250409636 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator4_t466495840, ___U3CU3Ef__this_4)); }
	inline JSONClass_t1609506608 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline JSONClass_t1609506608 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(JSONClass_t1609506608 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
