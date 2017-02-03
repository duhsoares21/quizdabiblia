#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// send_resposta
struct  send_resposta_t295482432  : public MonoBehaviour_t1158329972
{
public:
	// System.String send_resposta::url
	String_t* ___url_2;
	// System.String send_resposta::resposta_final
	String_t* ___resposta_final_3;

public:
	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(send_resposta_t295482432, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier(&___url_2, value);
	}

	inline static int32_t get_offset_of_resposta_final_3() { return static_cast<int32_t>(offsetof(send_resposta_t295482432, ___resposta_final_3)); }
	inline String_t* get_resposta_final_3() const { return ___resposta_final_3; }
	inline String_t** get_address_of_resposta_final_3() { return &___resposta_final_3; }
	inline void set_resposta_final_3(String_t* value)
	{
		___resposta_final_3 = value;
		Il2CppCodeGenWriteBarrier(&___resposta_final_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
