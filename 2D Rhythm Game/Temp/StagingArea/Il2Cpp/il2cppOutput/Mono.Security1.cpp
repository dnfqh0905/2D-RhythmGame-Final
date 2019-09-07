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
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A;
// Mono.Security.X509.X509Store
struct X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB;
// Mono.Security.X509.X509Stores
struct X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralC276D29F33E8F3F411A0BAFB43D3E6BD00ECA48E;
IL2CPP_EXTERN_C String_t* _stringLiteralC7EB5BBC6C8481A27394D0B29BB892C16FF5D5B1;
IL2CPP_EXTERN_C String_t* _stringLiteralD013A00CC3B2473FDE9F7A61FDC9BFE531B1B6A3;
IL2CPP_EXTERN_C const RuntimeMethod* X509Stores_Open_mFB8D3E95E549891F1F63721EE2421D46D823B2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_CurrentUserPath_m9D30739764CC416AFE38521B3259B2199680A807_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_CurrentUser_mE6B27212DC2033EEF32C57ED898F9E158875D369_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_LocalMachinePath_m2FFA1E8899F38DDB697EBAAB0C24F90955AC3895_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_LocalMachine_m4742A449590646EDEF7C549270086795B0A5381E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Stores_Open_mFB8D3E95E549891F1F63721EE2421D46D823B2DA_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Mono.Security.X509.X509Store
struct  X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * ____certificates_1;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_2;
	// System.Boolean Mono.Security.X509.X509Store::_newFormat
	bool ____newFormat_3;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storePath_0), (void*)value);
	}

	inline static int32_t get_offset_of__certificates_1() { return static_cast<int32_t>(offsetof(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB, ____certificates_1)); }
	inline X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * get__certificates_1() const { return ____certificates_1; }
	inline X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A ** get_address_of__certificates_1() { return &____certificates_1; }
	inline void set__certificates_1(X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * value)
	{
		____certificates_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____certificates_1), (void*)value);
	}

	inline static int32_t get_offset_of__crl_2() { return static_cast<int32_t>(offsetof(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB, ____crl_2)); }
	inline bool get__crl_2() const { return ____crl_2; }
	inline bool* get_address_of__crl_2() { return &____crl_2; }
	inline void set__crl_2(bool value)
	{
		____crl_2 = value;
	}

	inline static int32_t get_offset_of__newFormat_3() { return static_cast<int32_t>(offsetof(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB, ____newFormat_3)); }
	inline bool get__newFormat_3() const { return ____newFormat_3; }
	inline bool* get_address_of__newFormat_3() { return &____newFormat_3; }
	inline void set__newFormat_3(bool value)
	{
		____newFormat_3 = value;
	}
};


// Mono.Security.X509.X509StoreManager
struct  X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0  : public RuntimeObject
{
public:

public:
};

struct X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields
{
public:
	// System.String Mono.Security.X509.X509StoreManager::_userPath
	String_t* ____userPath_0;
	// System.String Mono.Security.X509.X509StoreManager::_localMachinePath
	String_t* ____localMachinePath_1;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_userStore
	X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * ____userStore_2;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_machineStore
	X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * ____machineStore_3;

public:
	inline static int32_t get_offset_of__userPath_0() { return static_cast<int32_t>(offsetof(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields, ____userPath_0)); }
	inline String_t* get__userPath_0() const { return ____userPath_0; }
	inline String_t** get_address_of__userPath_0() { return &____userPath_0; }
	inline void set__userPath_0(String_t* value)
	{
		____userPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userPath_0), (void*)value);
	}

	inline static int32_t get_offset_of__localMachinePath_1() { return static_cast<int32_t>(offsetof(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields, ____localMachinePath_1)); }
	inline String_t* get__localMachinePath_1() const { return ____localMachinePath_1; }
	inline String_t** get_address_of__localMachinePath_1() { return &____localMachinePath_1; }
	inline void set__localMachinePath_1(String_t* value)
	{
		____localMachinePath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____localMachinePath_1), (void*)value);
	}

	inline static int32_t get_offset_of__userStore_2() { return static_cast<int32_t>(offsetof(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields, ____userStore_2)); }
	inline X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * get__userStore_2() const { return ____userStore_2; }
	inline X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 ** get_address_of__userStore_2() { return &____userStore_2; }
	inline void set__userStore_2(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * value)
	{
		____userStore_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userStore_2), (void*)value);
	}

	inline static int32_t get_offset_of__machineStore_3() { return static_cast<int32_t>(offsetof(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields, ____machineStore_3)); }
	inline X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * get__machineStore_3() const { return ____machineStore_3; }
	inline X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 ** get_address_of__machineStore_3() { return &____machineStore_3; }
	inline void set__machineStore_3(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * value)
	{
		____machineStore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____machineStore_3), (void*)value);
	}
};


// Mono.Security.X509.X509Stores
struct  X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// System.Boolean Mono.Security.X509.X509Stores::_newFormat
	bool ____newFormat_1;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storePath_0), (void*)value);
	}

	inline static int32_t get_offset_of__newFormat_1() { return static_cast<int32_t>(offsetof(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325, ____newFormat_1)); }
	inline bool get__newFormat_1() const { return ____newFormat_1; }
	inline bool* get_address_of__newFormat_1() { return &____newFormat_1; }
	inline void set__newFormat_1(bool value)
	{
		____newFormat_1 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// System.Environment_SpecialFolder
struct  SpecialFolder_t5A2C2AE97BD6C2DF95061C8904B2225228AC9BA0 
{
public:
	// System.Int32 System.Environment_SpecialFolder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialFolder_t5A2C2AE97BD6C2DF95061C8904B2225228AC9BA0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetFolderPath_m536A7D7C29197A7B66B60EA9A78B63C7B0BE9C17 (int32_t ___folder0, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509StoreManager::get_CurrentUserPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509StoreManager_get_CurrentUserPath_m9D30739764CC416AFE38521B3259B2199680A807 (const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Stores::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Stores__ctor_m5C72B0FDAD6A19C57DBA655B10D28499580C0093 (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * __this, String_t* ___path0, bool ___newFormat1, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509StoreManager::get_LocalMachinePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509StoreManager_get_LocalMachinePath_m2FFA1E8899F38DDB697EBAAB0C24F90955AC3895 (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_mB77956D89305E16FEFCBDFC55CCC98F03AEE4D84 (String_t* ___path0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store__ctor_m9B43F02DA2040FD3041270FA71B0F7D9F96D1AEB (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___path0, bool ___crl1, bool ___newFormat2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Mono.Security.X509.X509StoreManager::get_CurrentUserPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509StoreManager_get_CurrentUserPath_m9D30739764CC416AFE38521B3259B2199680A807 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_CurrentUserPath_m9D30739764CC416AFE38521B3259B2199680A807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__userPath_0();
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_1 = Environment_GetFolderPath_m536A7D7C29197A7B66B60EA9A78B63C7B0BE9C17(((int32_t)26), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, _stringLiteralD013A00CC3B2473FDE9F7A61FDC9BFE531B1B6A3, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__userPath_0(L_2);
		String_t* L_3 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__userPath_0();
		String_t* L_4 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_3, _stringLiteralC7EB5BBC6C8481A27394D0B29BB892C16FF5D5B1, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__userPath_0(L_4);
	}

IL_0031:
	{
		String_t* L_5 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__userPath_0();
		return L_5;
	}
}
// System.String Mono.Security.X509.X509StoreManager::get_LocalMachinePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509StoreManager_get_LocalMachinePath_m2FFA1E8899F38DDB697EBAAB0C24F90955AC3895 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_LocalMachinePath_m2FFA1E8899F38DDB697EBAAB0C24F90955AC3895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__localMachinePath_1();
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_1 = Environment_GetFolderPath_m536A7D7C29197A7B66B60EA9A78B63C7B0BE9C17(((int32_t)35), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, _stringLiteralD013A00CC3B2473FDE9F7A61FDC9BFE531B1B6A3, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__localMachinePath_1(L_2);
		String_t* L_3 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__localMachinePath_1();
		String_t* L_4 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_3, _stringLiteralC7EB5BBC6C8481A27394D0B29BB892C16FF5D5B1, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__localMachinePath_1(L_4);
	}

IL_0031:
	{
		String_t* L_5 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__localMachinePath_1();
		return L_5;
	}
}
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_CurrentUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * X509StoreManager_get_CurrentUser_mE6B27212DC2033EEF32C57ED898F9E158875D369 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_CurrentUser_mE6B27212DC2033EEF32C57ED898F9E158875D369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_0 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__userStore_2();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = X509StoreManager_get_CurrentUserPath_m9D30739764CC416AFE38521B3259B2199680A807(/*hidden argument*/NULL);
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_2 = (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 *)il2cpp_codegen_object_new(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325_il2cpp_TypeInfo_var);
		X509Stores__ctor_m5C72B0FDAD6A19C57DBA655B10D28499580C0093(L_2, L_1, (bool)0, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__userStore_2(L_2);
	}

IL_0017:
	{
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_3 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__userStore_2();
		return L_3;
	}
}
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_LocalMachine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * X509StoreManager_get_LocalMachine_m4742A449590646EDEF7C549270086795B0A5381E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_LocalMachine_m4742A449590646EDEF7C549270086795B0A5381E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_0 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__machineStore_3();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = X509StoreManager_get_LocalMachinePath_m2FFA1E8899F38DDB697EBAAB0C24F90955AC3895(/*hidden argument*/NULL);
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_2 = (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 *)il2cpp_codegen_object_new(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325_il2cpp_TypeInfo_var);
		X509Stores__ctor_m5C72B0FDAD6A19C57DBA655B10D28499580C0093(L_2, L_1, (bool)0, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__machineStore_3(L_2);
	}

IL_0017:
	{
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_3 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__machineStore_3();
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X509Stores::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Stores__ctor_m5C72B0FDAD6A19C57DBA655B10D28499580C0093 (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * __this, String_t* ___path0, bool ___newFormat1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___path0;
		__this->set__storePath_0(L_0);
		bool L_1 = ___newFormat1;
		__this->set__newFormat_1(L_1);
		return;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::Open(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * X509Stores_Open_mFB8D3E95E549891F1F63721EE2421D46D823B2DA (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * __this, String_t* ___storeName0, bool ___create1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_Open_mFB8D3E95E549891F1F63721EE2421D46D823B2DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___storeName0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralC276D29F33E8F3F411A0BAFB43D3E6BD00ECA48E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, X509Stores_Open_mFB8D3E95E549891F1F63721EE2421D46D823B2DA_RuntimeMethod_var);
	}

IL_000e:
	{
		String_t* L_2 = __this->get__storePath_0();
		String_t* L_3 = ___storeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_4 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = ___create1;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7 = Directory_Exists_mB77956D89305E16FEFCBDFC55CCC98F03AEE4D84(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0028;
		}
	}
	{
		return (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB *)NULL;
	}

IL_0028:
	{
		String_t* L_8 = V_0;
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_9 = (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB *)il2cpp_codegen_object_new(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB_il2cpp_TypeInfo_var);
		X509Store__ctor_m9B43F02DA2040FD3041270FA71B0F7D9F96D1AEB(L_9, L_8, (bool)1, (bool)0, /*hidden argument*/NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
