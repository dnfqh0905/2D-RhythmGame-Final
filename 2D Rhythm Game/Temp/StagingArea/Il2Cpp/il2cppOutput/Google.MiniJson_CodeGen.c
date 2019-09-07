#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Object Google.MiniJSON.Json::Deserialize(System.String)
extern void Json_Deserialize_mD699722297018E092C83389766941F0529549E60 ();
// 0x00000002 System.Void Google.MiniJSON.Json_Parser::.ctor(System.String)
extern void Parser__ctor_m916CFE212FBBEBFA158603FB6548B6CA0361EAAE ();
// 0x00000003 System.Boolean Google.MiniJSON.Json_Parser::IsWordBreak(System.Char)
extern void Parser_IsWordBreak_mA56D686E73A8A690F7812A696645712E9580CC35 ();
// 0x00000004 System.Object Google.MiniJSON.Json_Parser::Parse(System.String)
extern void Parser_Parse_mB6472FC35FA562056210D8EFC45A38C5D18CD6DC ();
// 0x00000005 System.Void Google.MiniJSON.Json_Parser::Dispose()
extern void Parser_Dispose_m37B29BB65B022FE063F4007FD639B63627DE3FF2 ();
// 0x00000006 System.Collections.Generic.Dictionary`2<System.String,System.Object> Google.MiniJSON.Json_Parser::ParseObject()
extern void Parser_ParseObject_m9539B6152B785B5A8BBDE819F07C5CD716A0B36D ();
// 0x00000007 System.Collections.Generic.List`1<System.Object> Google.MiniJSON.Json_Parser::ParseArray()
extern void Parser_ParseArray_mA2E28FF2721815E11BC2C1B2AE3DD6EF6EF86B48 ();
// 0x00000008 System.Object Google.MiniJSON.Json_Parser::ParseValue()
extern void Parser_ParseValue_mE9382FACE65E715DD2B560F55FAFDC3C6161F484 ();
// 0x00000009 System.Object Google.MiniJSON.Json_Parser::ParseByToken(Google.MiniJSON.Json_Parser_TOKEN)
extern void Parser_ParseByToken_m29A07098C4DC1CC2F2D29332B6B8F135E9B49331 ();
// 0x0000000A System.String Google.MiniJSON.Json_Parser::ParseString()
extern void Parser_ParseString_m7FE7D383B751B8E39E21903319B91709157980AD ();
// 0x0000000B System.Object Google.MiniJSON.Json_Parser::ParseNumber()
extern void Parser_ParseNumber_mA9B7CDB0673BE5B7C64FCA8F176D8840A44FAA4D ();
// 0x0000000C System.Void Google.MiniJSON.Json_Parser::EatWhitespace()
extern void Parser_EatWhitespace_mB59675843F9F28AE3140C97AA7B51CB4A4C6DF9A ();
// 0x0000000D System.Char Google.MiniJSON.Json_Parser::get_PeekChar()
extern void Parser_get_PeekChar_mD86ED0CC323770598B17362DA900149B9210CE9F ();
// 0x0000000E System.Char Google.MiniJSON.Json_Parser::get_NextChar()
extern void Parser_get_NextChar_m2553FEB9993011BED7AB4490BE8E19FF302AF984 ();
// 0x0000000F System.String Google.MiniJSON.Json_Parser::get_NextWord()
extern void Parser_get_NextWord_mE4E2AA81FD95EF52C134C8CBAB734FE1C5B4FA4A ();
// 0x00000010 Google.MiniJSON.Json_Parser_TOKEN Google.MiniJSON.Json_Parser::get_NextToken()
extern void Parser_get_NextToken_m10D54939930F8CFCEB19987B4255107376DDAD74 ();
static Il2CppMethodPointer s_methodPointers[16] = 
{
	Json_Deserialize_mD699722297018E092C83389766941F0529549E60,
	Parser__ctor_m916CFE212FBBEBFA158603FB6548B6CA0361EAAE,
	Parser_IsWordBreak_mA56D686E73A8A690F7812A696645712E9580CC35,
	Parser_Parse_mB6472FC35FA562056210D8EFC45A38C5D18CD6DC,
	Parser_Dispose_m37B29BB65B022FE063F4007FD639B63627DE3FF2,
	Parser_ParseObject_m9539B6152B785B5A8BBDE819F07C5CD716A0B36D,
	Parser_ParseArray_mA2E28FF2721815E11BC2C1B2AE3DD6EF6EF86B48,
	Parser_ParseValue_mE9382FACE65E715DD2B560F55FAFDC3C6161F484,
	Parser_ParseByToken_m29A07098C4DC1CC2F2D29332B6B8F135E9B49331,
	Parser_ParseString_m7FE7D383B751B8E39E21903319B91709157980AD,
	Parser_ParseNumber_mA9B7CDB0673BE5B7C64FCA8F176D8840A44FAA4D,
	Parser_EatWhitespace_mB59675843F9F28AE3140C97AA7B51CB4A4C6DF9A,
	Parser_get_PeekChar_mD86ED0CC323770598B17362DA900149B9210CE9F,
	Parser_get_NextChar_m2553FEB9993011BED7AB4490BE8E19FF302AF984,
	Parser_get_NextWord_mE4E2AA81FD95EF52C134C8CBAB734FE1C5B4FA4A,
	Parser_get_NextToken_m10D54939930F8CFCEB19987B4255107376DDAD74,
};
static const int32_t s_InvokerIndices[16] = 
{
	0,
	26,
	48,
	0,
	23,
	14,
	14,
	14,
	34,
	14,
	14,
	23,
	255,
	255,
	14,
	10,
};
extern const Il2CppCodeGenModule g_Google_MiniJsonCodeGenModule;
const Il2CppCodeGenModule g_Google_MiniJsonCodeGenModule = 
{
	"Google.MiniJson.dll",
	16,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
};
