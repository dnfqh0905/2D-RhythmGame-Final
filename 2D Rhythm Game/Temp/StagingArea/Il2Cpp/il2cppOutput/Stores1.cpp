﻿#include "il2cpp-config.h"

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

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`2<System.Boolean,System.Int32>
struct Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t6C33D80670016FFA10F03F59FB542306FA60F1F3;
// System.Action`2<System.Boolean,System.String>
struct Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2;
// System.Action`3<System.Boolean,System.Object,System.Object>
struct Action_3_tB8290CEDF89EF089545D691C8F6D6C7A3A6003A9;
// System.Action`3<System.Boolean,System.String,System.String>
struct Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF;
// System.Action`3<System.Boolean,System.String,System.String>[]
struct Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>[]
struct EntryU5BU5D_t237B01EF14BFE7A1372652A4D60127D54EC2E03D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.UDP.PurchaseInfo>[]
struct EntryU5BU5D_t84BD4D1D23AF0EB3E45C602129497E5E913544FC;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>
struct KeyCollection_tD7436E962618D5850BB9C69D6D020177F9D2B713;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_tC73654392B284B89334464107B696C9BD89776D9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.UDP.PurchaseInfo>
struct KeyCollection_tC3DCE923EA2A7D2781DC4962ECBAC6F31A5BDBFE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>
struct ValueCollection_t9B146FDCC591FFA0153233453D4CE25DF705E21E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.UDP.PurchaseInfo>
struct ValueCollection_t362ED6A883A8F2292609789D6008DAE94F6259C8;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t9F401E8FAE13945DFBD264E317248AB9CC9C36CA;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>
struct Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UDP.ProductInfo>
struct Dictionary_2_t07DA6C3B2CF326BAFAB70924A7FE83C347CD89D3;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UDP.PurchaseInfo>
struct Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Purchasing.Extension.ProductDescription>[]
struct SlotU5BU5D_tB5A624A8A9AF9C81132936BE938E63C62336A21F;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_tE69581B2FBB736F3DE03D470AE10601F835DF863;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem>
struct ICollection_1_t10B4543F18C5DC89840C85E513B7A7047BC614B6;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.UDP.PurchaseInfo>
struct IDictionary_2_t830C52CE7928BE34A54E2EDEC9065849CE9894E1;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Default.WinProductDescription>
struct IEnumerable_1_t1481940173588FB0F383AF99276F4C3953A77197;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct IEnumerable_1_t724BC191F9F2A40FF74CD12C3DC80DFE7813D875;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductDefinition>
struct IEnumerable_1_tDB472B55AE16CC5753D88358865F4C867D4F2F34;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_tDDB69E91697CCB64C7993B651487CEEC287DB7E8;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductDefinition>
struct IEnumerator_1_t03AC33D97EBA418F757A9065CE29CE44AA6487BB;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct IEqualityComparer_1_t2AA6E2F817DDD5A3A0ACB3B623A42C3B23950949;
// System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductDefinition>
struct IList_1_t7824A0F765D2F0CE61693435F4544AB7C81BD878;
// System.Collections.Generic.IList`1<UnityEngine.UDP.ProductInfo>
struct IList_1_tB0E84ABED5446F4B8927CEF5962ED14321B0C58B;
// System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>
struct List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Default.WinProductDescription>
struct List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription>
struct List_1_t4A5E4DB145DD9798C5FEB91EE0F1A7C77E1F43EB;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem>
struct List_1_tA1C6463853DC035280694FB65B564ECD8A3453EC;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout>
struct List_1_t6EBBFBE956641E9855F6E08AA6671EDB7E9F0B2B;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductDefinition>
struct List_1_tFE611315D844DCEE9F38C09B0EADEFEBCCC51DBB;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID>
struct List_1_tE827FDB9C085BDBF2BD397CEC9BC2DAE20C9AB01;
// System.Collections.Generic.List`1<UnityEngine.UDP.PurchaseInfo>
struct List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t9FC1E3F4F8E4068616D377F61C3B6D6DBA4DCF9E;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tCBED74C5DF8E6C00526CE677BF8B96675B5C3A94;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean>
struct Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String>
struct Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>
struct Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Uniject.IUtil
struct IUtil_tB75866153468EC27B475231CBF717C98B349ED25;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.ChannelPurchase.IPurchaseListener
struct IPurchaseListener_tA4C69AC7EE35CB962A593E99A70F4C64F5D49C4B;
// UnityEngine.ChannelPurchase.PurchaseInfo
struct PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802;
// UnityEngine.ChannelPurchase.ReceiptInfo
struct ReceiptInfo_t5A3A3B53B5FFCFEA460A254C320E9B72FB82FC9D;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t6684191CFC2ADB0DD66DD195174D92F017862442;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ILogger
struct ILogger_t572B66532D8EB6E76240476A788384A26D70866F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Purchasing.Default.IWindowsIAP
struct IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD;
// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43;
// UnityEngine.Purchasing.Default.WinProductDescription[]
struct WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892;
// UnityEngine.Purchasing.EventQueue
struct EventQueue_tD991D20FAD4203922A13A31871F6046F925548FA;
// UnityEngine.Purchasing.Extension.AbstractStore
struct AbstractStore_t0809CE12BFD8191F29B7B77FC730AE3E8A3C039C;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60;
// UnityEngine.Purchasing.Extension.ProductDescription
struct ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582;
// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C;
// UnityEngine.Purchasing.FakeStore
struct FakeStore_t3C59ECE7995BF7D5967D562BF25F0413F7CA790D;
// UnityEngine.Purchasing.INativeStore
struct INativeStore_t633ED2639CF4215EEC1E8529554BBF02771FDDB0;
// UnityEngine.Purchasing.INativeTizenStore
struct INativeTizenStore_tBE922CEC3C79DD943B7C161F236B1B5ABDF45A02;
// UnityEngine.Purchasing.INativeUDPStore
struct INativeUDPStore_tBE7EDA1F2F8E7E0A51D58063951C6B21F19C96DB;
// UnityEngine.Purchasing.INativeUnityChannelStore
struct INativeUnityChannelStore_t18D6F9F734AC2D2B0CCAED9A071D89456B57B15D;
// UnityEngine.Purchasing.IProductCatalogImpl
struct IProductCatalogImpl_t4F57C22DC2B60BC60B64D91ED7DC678CA262264D;
// UnityEngine.Purchasing.InvalidProductTypeException
struct InvalidProductTypeException_t181DA391DEF28CE27D63CE5B99F1F05D8EA29874;
// UnityEngine.Purchasing.JSONStore
struct JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3;
// UnityEngine.Purchasing.LocalizedProductDescription
struct LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1;
// UnityEngine.Purchasing.Price
struct Price_t5D55521A645803976E0809F8941E8317C80E129C;
// UnityEngine.Purchasing.ProductCatalog
struct ProductCatalog_t7643D269828196E196CDF8B0ACC4AE00EA1A15F6;
// UnityEngine.Purchasing.ProductCatalogItem
struct ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48;
// UnityEngine.Purchasing.ProfileData
struct ProfileData_t59F197E40BC007C791FD64C4E05735F692CEB96B;
// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt
struct AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC;
// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_tDAF0BD8C9F2C251F5B2F92CA8CA91B664970422A;
// UnityEngine.Purchasing.StoreCatalogImpl
struct StoreCatalogImpl_tF33B4AB1E4D4A5DF713AA3F94354BAE32CD2F6AB;
// UnityEngine.Purchasing.SubscriptionInfo
struct SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133;
// UnityEngine.Purchasing.TizenStoreImpl
struct TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F;
// UnityEngine.Purchasing.UDPBindings
struct UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE;
// UnityEngine.Purchasing.UDPImpl
struct UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76;
// UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154;
// UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tABAF20373A271E8D799FE1C91217AE25EC57E359;
// UnityEngine.Purchasing.UIFakeStore
struct UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C;
// UnityEngine.Purchasing.UIFakeStore/<>c
struct U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD;
// UnityEngine.Purchasing.UIFakeStore/DialogRequest
struct DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343;
// UnityEngine.Purchasing.UIFakeStore/LifecycleNotifier
struct LifecycleNotifier_t7BC53FAB36050746A837703F74A7CF3B63A075DE;
// UnityEngine.Purchasing.UnifiedReceipt
struct UnifiedReceipt_t5FA6AF4B29A5CFCE5DE0C9FA4EF63454266E035B;
// UnityEngine.Purchasing.UnityChannelBindings
struct UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6;
// UnityEngine.Purchasing.UnityChannelBindings/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tB91567274B7906CE554758FDB7180DBA22B1A9A5;
// UnityEngine.Purchasing.UnityChannelImpl
struct UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616;
// UnityEngine.Purchasing.UnityChannelImpl/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0;
// UnityEngine.Purchasing.UnityChannelImpl/<>c__DisplayClass7_1
struct U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE;
// UnityEngine.Purchasing.UnityChannelPurchaseReceipt
struct UnityChannelPurchaseReceipt_t22BA5D3915A198D116BB4813CF1D5A9C66DC6D69;
// UnityEngine.Purchasing.UnityNativePurchasingCallback
struct UnityNativePurchasingCallback_t58A016E25D4C5E8E9C7709A2EE87766ED4D02136;
// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F;
// UnityEngine.Purchasing.WinRTStore/<>c
struct U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UDP.AppInfo
struct AppInfo_tCA4BF037393743799729827487AFC4C1502E37B8;
// UnityEngine.UDP.IInitListener
struct IInitListener_t32D654643DBC1FCAB2167C53E79FE97950FC31F9;
// UnityEngine.UDP.IPurchaseListener
struct IPurchaseListener_t6A634C3BDC04EC511965F742C6F8DED4616662B7;
// UnityEngine.UDP.Inventory
struct Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3;
// UnityEngine.UDP.ProductInfo
struct ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE;
// UnityEngine.UDP.PurchaseInfo
struct PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27;
// UnityEngine.UDP.PurchaseInfo[]
struct PurchaseInfoU5BU5D_t3D41B4DF7E53C8E3D658701A404D0A62BAC9E3AC;
// UnityEngine.UDP.UserInfo
struct UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF;
// UnityEngine.UI.Dropdown
struct Dropdown_tF6331401084B1213CAB10587A6EC81461501930F;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_tE70C398434952658ED61EEEDC56766239E2C856D;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppleStoreProductType_tADAB43B081D09C4D7F08145CED6B7EB52716076A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t830C52CE7928BE34A54E2EDEC9065849CE9894E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t4545446D1C1AE3455C6AD58C13A9959C4A6CBDA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF8936778E24A7D2D4125F01B62C2BACAA6FF8F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t03AC33D97EBA418F757A9065CE29CE44AA6487BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tB898879314A14BE7158EFFB02E08A6E240FB2429_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tC195E33DFDF39BB7E73302781F8D7D6F36202CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeTizenStore_tBE922CEC3C79DD943B7C161F236B1B5ABDF45A02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeUDPStore_tBE7EDA1F2F8E7E0A51D58063951C6B21F19C96DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeUnityChannelStore_t18D6F9F734AC2D2B0CCAED9A071D89456B57B15D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidProductTypeException_t181DA391DEF28CE27D63CE5B99F1F05D8EA29874_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchaseService_t7F12D5C55BBD81DB4420C2853172B9FED0FF3830_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_tB91567274B7906CE554758FDB7180DBA22B1A9A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tABAF20373A271E8D799FE1C91217AE25EC57E359_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityNativePurchasingCallback_t58A016E25D4C5E8E9C7709A2EE87766ED4D02136_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XiaomiPriceTiers_t277154F32924391EF362A479856C47A2A43A6E5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t5700F4D01A9810563DD6E295A10965B13B4B76DF____8ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05D97E6E9834CCF063C552E404B9ECAFC5E4D662;
IL2CPP_EXTERN_C String_t* _stringLiteral0650DE9E26E2AA79CC57EDED9B8928F8668B9EA5;
IL2CPP_EXTERN_C String_t* _stringLiteral0DF9EEA0BAD5A55395DB9EC290DFCF4A883D5D3E;
IL2CPP_EXTERN_C String_t* _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671;
IL2CPP_EXTERN_C String_t* _stringLiteral182DE3C6D2348C0A762814A36E91F0114F6A55E9;
IL2CPP_EXTERN_C String_t* _stringLiteral1ADA184F1D1A8E8B4B4B2D86D2C26C1CB9D8F313;
IL2CPP_EXTERN_C String_t* _stringLiteral256DAE5FE812DD0A653073C3C142A5D806F220A4;
IL2CPP_EXTERN_C String_t* _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D;
IL2CPP_EXTERN_C String_t* _stringLiteral33A60B6050387A625453A7D063EA527F5CB71AFF;
IL2CPP_EXTERN_C String_t* _stringLiteral3B64CAA4AC5332E2069F86F967064FE587AF7820;
IL2CPP_EXTERN_C String_t* _stringLiteral3CA230360D8FF1EB1494B9AFEFA28AE96B3D2DFA;
IL2CPP_EXTERN_C String_t* _stringLiteral3D6A970D4287352BB3A6FB409DD0F9DF8FF9920A;
IL2CPP_EXTERN_C String_t* _stringLiteral3E2A8439E4695DDC6BC1202334D8B1BB4B30A081;
IL2CPP_EXTERN_C String_t* _stringLiteral41455A2F6CACC62D6A112E95764B80F533243ECE;
IL2CPP_EXTERN_C String_t* _stringLiteral44E949CB95D4BBD927D61FBE6D06D28EB4960DD6;
IL2CPP_EXTERN_C String_t* _stringLiteral57814CFBAE5C6D00F5CAB49E34B9AA2CE8269EB9;
IL2CPP_EXTERN_C String_t* _stringLiteral57B4B0A1A4CF3BDCB8E8681D5D4224017FA907BC;
IL2CPP_EXTERN_C String_t* _stringLiteral5E559229B29D569C60E8DBD544459654886372FE;
IL2CPP_EXTERN_C String_t* _stringLiteral5F2391220833847E88FA717EB295A329DD3B3C55;
IL2CPP_EXTERN_C String_t* _stringLiteral612CCEAFC5E6C12AB161F0817E11A34091FDC66F;
IL2CPP_EXTERN_C String_t* _stringLiteral63EFC5D5F600359FF5C4570EE809D7671AC9E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteral68DEF667D36D69C74A4858297D53552058192BC2;
IL2CPP_EXTERN_C String_t* _stringLiteral6924EAA29A3250A2EDE96D82BEEED19218ED1778;
IL2CPP_EXTERN_C String_t* _stringLiteral6AA2CA83CEC56CC9378EC0E01B0BF752281D2A45;
IL2CPP_EXTERN_C String_t* _stringLiteral71A19FF0E8CBC63DDF6D1A795769E70AC9F69212;
IL2CPP_EXTERN_C String_t* _stringLiteral7F5643317CCA2EBF82CE3DC5BFC3D332182F9C5F;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C59D560D31CCE9A5B206D8EA5F6C38267C1D0;
IL2CPP_EXTERN_C String_t* _stringLiteral862E356EFB96FF23BE395FDD8CF34602BA87D015;
IL2CPP_EXTERN_C String_t* _stringLiteral86479F128971C5FEA69496AB7A91F4897C770FAC;
IL2CPP_EXTERN_C String_t* _stringLiteral865D8C1E90DC1EDA4DC9155444CD1C69A57057C4;
IL2CPP_EXTERN_C String_t* _stringLiteral86CFC158C16EBD828F9FD0FFE04C280216023CA9;
IL2CPP_EXTERN_C String_t* _stringLiteral879F0B1BEF59EEEBF78CFD3A22F6F8077810CECF;
IL2CPP_EXTERN_C String_t* _stringLiteral8D07EC60F2CF6909F3E4F72A9EE7313D45135EE3;
IL2CPP_EXTERN_C String_t* _stringLiteral90B6C7CAE0684A0F98CF10CC368E2592F0962CCD;
IL2CPP_EXTERN_C String_t* _stringLiteral91307256DBF150F37E879000F1FC6DD8A4F61A55;
IL2CPP_EXTERN_C String_t* _stringLiteral97CF83B8420705673DD9E20FFB51124368B3F7BC;
IL2CPP_EXTERN_C String_t* _stringLiteral97EDC12A699B77CD7DCA0C6ECC5E0AB625126F74;
IL2CPP_EXTERN_C String_t* _stringLiteralA3D9B910FBD7D49B662799307CC6280BB829F841;
IL2CPP_EXTERN_C String_t* _stringLiteralAB24B7DAD62C09393BDE30850ADE4F172414F6F4;
IL2CPP_EXTERN_C String_t* _stringLiteralB0235FCB25E3CDF64B64EA7A2EAEC25032CBEE36;
IL2CPP_EXTERN_C String_t* _stringLiteralB41F2D713DC92217B42B25AA193107BD2F8863D6;
IL2CPP_EXTERN_C String_t* _stringLiteralBC7819B34FF87570745FBE461E36A16F80E562CE;
IL2CPP_EXTERN_C String_t* _stringLiteralBE679B9DD2C045389AC1E47C3F738BDD301988B2;
IL2CPP_EXTERN_C String_t* _stringLiteralC039C05D919B5F6F72A138DFB099EAE2E67B89A6;
IL2CPP_EXTERN_C String_t* _stringLiteralC0AC4842418E34583859262C033965CFD49454E0;
IL2CPP_EXTERN_C String_t* _stringLiteralC7A91F521E4D9BB48785CB95247C02A5B1E37394;
IL2CPP_EXTERN_C String_t* _stringLiteralC9470C99119C4E0DCB89D108BEAC5078E9E95560;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9D01ECC70A5325ED60FF47E843538E385AE1F6;
IL2CPP_EXTERN_C String_t* _stringLiteralCBBD8674892389F6016A1136956BE7787E630B76;
IL2CPP_EXTERN_C String_t* _stringLiteralCCF62FF573F6DB000404C805BC30B60CDD90564B;
IL2CPP_EXTERN_C String_t* _stringLiteralCDBA822F8324B05B69E1AA552687ED7C8B37C97F;
IL2CPP_EXTERN_C String_t* _stringLiteralCE303C0991F6ED665CA1B89420A443F1CB8BD6A0;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE66CC26E22895F7AE954C26F1E677F566A371E;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
IL2CPP_EXTERN_C String_t* _stringLiteralD8556CF7451C22FF4E069B286916B24EBBF72F1F;
IL2CPP_EXTERN_C String_t* _stringLiteralD8FAE6A4434F8709F349B6E9420638C8FD6886E8;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA311F79A1B844489695C2C2BEFE0C0A5A83928;
IL2CPP_EXTERN_C String_t* _stringLiteralDE3FFEF980E651436BDA1810C67530580D1328C8;
IL2CPP_EXTERN_C String_t* _stringLiteralE005CDF78FC36965B839E7115A56CAE84B2994B3;
IL2CPP_EXTERN_C String_t* _stringLiteralE25E43159D118DB0FB2B8A6457B0D9FBC5635779;
IL2CPP_EXTERN_C String_t* _stringLiteralE429FB2288A21731831D07F6A3F28574CAD4130E;
IL2CPP_EXTERN_C String_t* _stringLiteralE75AEFABDAA785AC2B8267F716185360ED501BCB;
IL2CPP_EXTERN_C String_t* _stringLiteralE9A6F622E340090FEB219EB5C94B0DF756E8E486;
IL2CPP_EXTERN_C String_t* _stringLiteralEDEDA8D96D6BEFA5C97172CAF6624B6A80182222;
IL2CPP_EXTERN_C String_t* _stringLiteralEE1FDF0EDBB24CBF96DFA0339B642B2085C163F6;
IL2CPP_EXTERN_C String_t* _stringLiteralEEC947EFA94259F79FE7A8031A0644FA4D6F7E55;
IL2CPP_EXTERN_C String_t* _stringLiteralF4B93D791AC7157AD28161C767FFDE25B19D3F5C;
IL2CPP_EXTERN_C String_t* _stringLiteralF98961015A0AC393630F4EDA3749D644A716DA64;
IL2CPP_EXTERN_C String_t* _stringLiteralFAB5F62863CDEDC5143552C9D37D6679E3304F7A;
IL2CPP_EXTERN_C String_t* _stringLiteralFF5DD0E304B39EF8CC99D49375CDF1C3C3FF885E;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mA199F71186277902986DCB3DA9E001BADC5A9584_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_m1CB35C4D32922E1BCF8ADEFEE4B7A317CA8F8672_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_mCF36739F19ED5E1D79C77CBE83B1B23BEC60A50A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mD8A7AB2EFD21D08C7853DD671529F088C93CCB43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m68CC5D5B45084241DED93C201D279662BEB5CB2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m30E10525DFE9B016974C4A7C4717989602B574BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m54A4154018F67810E53B6EAA9750532B482EB576_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mE6ABD18DFBF5822700D6F69EF732F65BD12AACD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4100552BFA81C576088D6C8247BBA22E2552D05C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7AA3194A16B23BA1E1D60E463385BBE476347B39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m06227059A7D084647BD2FAC6BF6382E86D667E74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mBA9D37305B4A8406DDF4E91FA2B49168A4270AA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisString_t_m6128E5476EE06203D4946C1E17607FB7A959E774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisWinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_m005AB802FC8196952DC2A0151E68AB648544D47E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_m9CD974FCA5759B5EF1795B1307BBDB1C7114486E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m1BAD76FB02571EB3CCC5BB00D4D581399F8523FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisWinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_mE3D3472C4553BFEAC57A272A18CF5874C1B64530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_m1A96F66F6EFA8BB873220824E46F0751F974DF28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0A75A4CFFB837ECE42A0DB9FD281D1685E4D233F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m514C11E20FD89F7F296D3066554C7AE9DCBA12F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB2C9414AA5B4B278BE21C819515F3DCB94DC50CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9B1DB257A9F9A3CEA69542101B953689A4AD978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m129741E497FB617DC9845CFEE4CB27B84C86301A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m79E9E093FAC0C0A6F683262FBF0A30B25000D5D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7D2CB9FC4662B992F4AF38F30E26C536059A1B68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF280E27F474C1EBF8049A2EE26CB51523D353BA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m56DEB3D7F65E4E5BF8907D3E8CA99BB2BFDD7C45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6633FB5534752211DB3450762F2DCF5C63403416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m894E7226842A0AB920967095678A311EFF7C5737_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8DAE6A6BE9E43946A72752EC47B875512C8DCFE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m0766B82246E2FCFE8FE8C28831BAAA0A3F82E13D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m2038F3104EEA592CAD20C70731ADFDDD5B6FDAA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m666791AAB6A75CF7280C43B9B7276C1C6C60A98A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLifecycleNotifier_t7BC53FAB36050746A837703F74A7CF3B63A075DE_m1012B33F5C8FD4A2CB3F78EBC3E66FC192441238_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5_m0445A53FE77C70A43D4C0BC3E8634647FD00EFCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m5EA55BE80E8E0FB0551D6C16C2BC57A726758C9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDropdown_tF6331401084B1213CAB10587A6EC81461501930F_mCEDADB496C533D2B1022FE5C0B5D68493866A5E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF8C3766EFA306E384BD10BC05F1601F5549AC331_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC094CC8497A333D659AB37D62F5510FFB9FFB5D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD69EB259EC04E27C535F5B89BAE5CCE4444D6863_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m28CB823F772535151E966A56E1E2B5138AD538D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m517F898ECAAFAF57D6607F86F1BCF057C0E615D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m17A48F63DE3D34232B01F1A7D55BC3FAFD2FBFFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m722EB7DBBB8377AD8196FB4971A17EA146FAAFC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mDFFBEE5A0B86EF1F068C4ED0ABC0F39B7CA7677E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF7F3DD6B7B370EFC404FF50E5A0897B80C1193EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m21D978936866998FD41335DC29174A855115EBBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_m351F3750964F87C51FA489576CFA6F6DFE341C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m17FC8F26192881EA230827EB7DD05F91C54B9412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_m4DAE5244E68062F3211869C745AF7AEEFF5B3556_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Count_m743564A469EBA084937406D3D96A90487419C64B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubscriptionInfo__ctor_m451D866F02BB1E5E57CA89DA19717FE1FC8CC49B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TizenStoreImpl_MessageCallback_m65782C3F5BD31A3D4598ACDC7C31BFD8921ACD6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__18_0_mA005CCB7DE1CDEB9D36C17809390CC29A813ADB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m141D08D9967D1346ECC87F2DCE27FE7584E90BAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m0AB721703472B612731E56E29EE94BA51860219D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CValidateReceiptU3Eb__0_mB74DBD0867B3ACEFCACC6DEEFD3257E1FB48F974_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CPurchaseU3Eb__0_mEE15F0E915AF3F9B8BF6874696937894E9C30DE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_mDEBE8D3B281E69ED69925AF2B16F2488553AAF59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_1_U3CPurchaseU3Eb__1_m241F92731F2595B51F7433EE874868474416259F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_mD3C2C50F2786DBA92CB8CD83705BFA9C535D8C81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPBindings_FinishTransaction_m39A9FEA06CB34FB32ADFFA5900316CA4F113F7FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPBindings_Purchase_mFD3E0BE371A838228098A33BA7CB33BE42C98299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPBindings_RetrieveProducts_m0098BAF030D3968F726482206721AB03A0A608F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UDPImpl_U3CRetrieveProductsU3Eb__7_0_m10F210D0F874C810532C0DE8971720C5FD6E9000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIFakeStore_U3CInstantiateDialogU3Eb__16_0_m96B4847D3494ECFB309D657A729D76421E7F72F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIFakeStore_U3CInstantiateDialogU3Eb__16_1_m9A5C7BAC57C4AE56CA2A683AEF6D9D89F6FF6688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIFakeStore_U3CInstantiateDialogU3Eb__16_2_m721404F2C54B1295BBB369F024063270879229D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIFakeStore_U3CInstantiateDialogU3Eb__16_3_m46DF94DA8161177272DBBF75286A81738E98073F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m1B6BC02D4B03D2CACC864BC5854EE5B318492036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityChannelBindings_FinishTransaction_m33A01DB5A80FD222D0E64DE24A9BE9C11DA29634_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityChannelBindings_Purchase_mBD1E269D5D9E1A0ACFE332123AFDECAD37FD4E8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityChannelBindings_RetrieveProducts_m708E6ED5EA90B9E7F6B1E72921120B8AB86DE951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityChannelImpl_U3CRetrieveProductsU3Eb__6_0_m019AAAA768C375ADD560319043E2FCF47DC2B658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AppleStoreProductType_tADAB43B081D09C4D7F08145CED6B7EB52716076A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t SubscriptionInfo__ctor_m451D866F02BB1E5E57CA89DA19717FE1FC8CC49B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TizenStoreImpl_MessageCallback_m65782C3F5BD31A3D4598ACDC7C31BFD8921ACD6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TizenStoreImpl_ProcessMessage_mD7007794AB8AA3A88650816CBBC8FCF8B5C11293_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TizenStoreImpl_SetGroupId_mFDFA710651D5A19DE81CE28F9F88BCA7BB0BBDCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TizenStoreImpl_SetNativeStore_m793D9286E36D9D55FA74D81EC191A269850D5DA5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TizenStoreImpl__ctor_m321DCE8FEC335296806C36189F051ECAB2D71BE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m0AB721703472B612731E56E29EE94BA51860219D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass16_0_U3CValidateReceiptU3Eb__0_mB74DBD0867B3ACEFCACC6DEEFD3257E1FB48F974_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass7_0_U3CPurchaseU3Eb__0_mEE15F0E915AF3F9B8BF6874696937894E9C30DE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_mDEBE8D3B281E69ED69925AF2B16F2488553AAF59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass7_1_U3CPurchaseU3Eb__1_m241F92731F2595B51F7433EE874868474416259F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_mD3C2C50F2786DBA92CB8CD83705BFA9C535D8C81_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m3C3B04F551E87B4C62C26D2754A8C74D685B0215_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m9AA3FF14C9BEB6CFA07029C005D1EAD457F57391_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_FindPurchaseInfo_mCC90D19D926F00D68C304C0D92261E977824CF72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_FinishTransaction_m39A9FEA06CB34FB32ADFFA5900316CA4F113F7FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_Initialize_m4103FD0B719C6DFD3DF91D77E9FC7B69D064A8D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_OnInitializeFailed_mB31DD8C25EC798C29B85818CA1402965C192834A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_OnInitialized_m105419A4BD4517BF3CBA844FD6695B82F611ABE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_OnPurchaseConsumeFailed_m755AD2F195FCCEB8C036E66D292A6A084F5F34A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_OnPurchaseConsume_m6AE3C58AD8D05E4379BDAA414732CF3ADC837B65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_OnPurchaseFailed_m287C30F2D2F0A40044CE5E5781B808FD2E9A0D32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_OnPurchase_m9545DD5169EE8EAEF50D7A9A160A9F4BCFABE975_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_OnQueryInventoryFailed_mDD39B74A00639BDAF17AF10ABF76C625E761E15A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_OnQueryInventory_mC8FCC1375F4AA3B56D7ECD4E72FD1F81A58850FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_Purchase_m4C7DDF41FD704CAE189004CED06A9D2BC7D7EEED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_Purchase_mFD3E0BE371A838228098A33BA7CB33BE42C98299_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_RetrieveProducts_m0098BAF030D3968F726482206721AB03A0A608F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_RetrieveProducts_m92BEEB5D0A5ABEBE12021986DB48C219E56A0A9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPBindings_StringPropertyToDictionary_mC7D430868B5247E8A0FF6E425A7D6340E56C3C35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPImpl_DictionaryToStringProperty_mF0801906914108998E612C027C9EC295B936D753_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPImpl_FinishTransaction_m8522DB9E6274BF817E9DE1B2E40C245D846A3447_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPImpl_Purchase_mB0C04B80DF20323B14E0440E4A62CDA41EAC42A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPImpl_RetrieveProducts_m179F17D30A4EC8BDEBA7237735DBBD79C44B500D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDPImpl_U3CRetrieveProductsU3Eb__7_0_m10F210D0F874C810532C0DE8971720C5FD6E9000_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UDP_get_Name_m6398AF6AB3D6F42AC6C7199F78DE3A25E76DD259_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_CancelButtonClicked_mFD886AEE2ECDDD07C5CE9CF686DCB20B7B162E22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_CloseDialog_mA39A1BB699C95E8CC4A2C5E2391EC016D7A17633_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_CreatePurchaseQuestion_m116D7ED832AB2C2836A6C4131697D8E970D6FAD8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_CreateRetrieveProductsQuestion_m27212A3469F96121CADECBC2BCECB8791C29BF40_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetCancelButtonGameObject_m1E28ADAE8496502B2E90A552C98CF92A09F4F805_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetCancelButtonText_m50EDCF51AA30CE089F5F69C2FD3919F22E684244_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetCancelButton_mCECFA7D8AE216E79FEFCDADF53021BB2DD3BA276_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetDropdownContainerGameObject_mDE243039E020E475B22A878594E9A635D31DEF76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetDropdown_mF5334EBA98397AE9DCBD9FB24F0C1D52DA54684B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetOkayButtonText_m18D9AE8AF1047D564DF67594ABDA8761C9BD9860_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_GetOkayButton_m3C825F45738A90ACC7ABD879394AEC5B471EB81B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_InstantiateDialog_m96CB73823DE7939FC68A77A01FC6BB93BC79793F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_OkayButtonClicked_m6FF8BCD5C3618BEC6355B66F1FEB81200BDDB719_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIFakeStore_StartUI_mFA62BF453CA16184D4B13BDB7C64728D2929F74A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_FinishTransaction_m33A01DB5A80FD222D0E64DE24A9BE9C11DA29634_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_OnPurchaseConfirm_mCADE4A6499D735A7EDA2A6FE3E355EBAEE23A643_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_OnPurchaseFailed_m5D2B9A34F99F7F582EA092CA61048B3FAE578840_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_OnPurchaseRepeated_mD1112F2AE9DE4620E9C24D7A773DDF9D689D1B77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_OnPurchase_m02E8FD376C99A35BFF79566DA80F61C0082CD533_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_OnResponseCallbackDispatcher_mB85DA6F8929B25434CC6BCFF91399BA08E60BAA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_PurchaseInfoToDictionary_mD9A74BE343086068E2C5E9FCEAFB8842FCA537A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_Purchase_m83EFC886B82F131BDAEDAAC8A28162AC4AD5E95B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_Purchase_mBD1E269D5D9E1A0ACFE332123AFDECAD37FD4E8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_RequestUniquely_m594C392FBB940E65F11BE27C777E3EDFA3D6AAE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_RetrieveProducts_m1AEEEB87BE559507FFBBC7285EA7D4777EA08162_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_RetrieveProducts_m708E6ED5EA90B9E7F6B1E72921120B8AB86DE951_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings_ValidateReceipt_mA4CB92E494612CF75EA1357601F71C7016BB343C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelBindings__ctor_m800B818DBBB149123B52A1AC81E3ABFF998EB3E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelImpl_Purchase_m26F65FC9DFD5C3D0C7CFB3CE4639E84736EE6B50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelImpl_RetrieveProducts_m4D12752F37BFF5A91A277640645DFE9173C3D8A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelImpl_ValidateReceipt_mA1272B9852E698F8F30BBC28E285050C0DB1AD3F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelImpl__ctor_m1D38687AB894D06177083B9E4916E0411E12B012_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityChannelImpl_extractDeveloperPayload_mF3A5C6FB70814A17FE64E825F9412B2E27065D0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_FinishTransaction_m294B693324F8361C80643002F9178C62BEEBFF52_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_Purchase_m22CA7017FF66D0BDDDBEA41DC2E9086E126C950A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_RestoreTransactions_m0678C966E5A84AA80AC7CECA9557194ED0E0824E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_RetrieveProducts_m298D0B88F2668D331E8DF3097FD3EF43F0711835_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_init_m1FFD23EEF3EFE9E6985DD722ED21D721191BEC59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinRTStore_restoreTransactions_m7A6CCA12CF944C0BE65EC772A3B190DBD088A18A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XiaomiPriceTiers__cctor_mC479CA8DD4C96EC6643A8D1890F534B79AC6431D_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>
struct  Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t237B01EF14BFE7A1372652A4D60127D54EC2E03D* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tD7436E962618D5850BB9C69D6D020177F9D2B713 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9B146FDCC591FFA0153233453D4CE25DF705E21E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___entries_1)); }
	inline EntryU5BU5D_t237B01EF14BFE7A1372652A4D60127D54EC2E03D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t237B01EF14BFE7A1372652A4D60127D54EC2E03D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t237B01EF14BFE7A1372652A4D60127D54EC2E03D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___keys_7)); }
	inline KeyCollection_tD7436E962618D5850BB9C69D6D020177F9D2B713 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD7436E962618D5850BB9C69D6D020177F9D2B713 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD7436E962618D5850BB9C69D6D020177F9D2B713 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ___values_8)); }
	inline ValueCollection_t9B146FDCC591FFA0153233453D4CE25DF705E21E * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9B146FDCC591FFA0153233453D4CE25DF705E21E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9B146FDCC591FFA0153233453D4CE25DF705E21E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___entries_1)); }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___keys_7)); }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___values_8)); }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___entries_1)); }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___keys_7)); }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___values_8)); }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UDP.PurchaseInfo>
struct  Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t84BD4D1D23AF0EB3E45C602129497E5E913544FC* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC3DCE923EA2A7D2781DC4962ECBAC6F31A5BDBFE * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t362ED6A883A8F2292609789D6008DAE94F6259C8 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9, ___entries_1)); }
	inline EntryU5BU5D_t84BD4D1D23AF0EB3E45C602129497E5E913544FC* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t84BD4D1D23AF0EB3E45C602129497E5E913544FC** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t84BD4D1D23AF0EB3E45C602129497E5E913544FC* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9, ___keys_7)); }
	inline KeyCollection_tC3DCE923EA2A7D2781DC4962ECBAC6F31A5BDBFE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC3DCE923EA2A7D2781DC4962ECBAC6F31A5BDBFE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC3DCE923EA2A7D2781DC4962ECBAC6F31A5BDBFE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9, ___values_8)); }
	inline ValueCollection_t362ED6A883A8F2292609789D6008DAE94F6259C8 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t362ED6A883A8F2292609789D6008DAE94F6259C8 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t362ED6A883A8F2292609789D6008DAE94F6259C8 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct  HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tB5A624A8A9AF9C81132936BE938E63C62336A21F* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A, ____slots_8)); }
	inline SlotU5BU5D_tB5A624A8A9AF9C81132936BE938E63C62336A21F* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tB5A624A8A9AF9C81132936BE938E63C62336A21F** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tB5A624A8A9AF9C81132936BE938E63C62336A21F* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>
struct  List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008, ____items_1)); }
	inline Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4* get__items_1() const { return ____items_1; }
	inline Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008_StaticFields, ____emptyArray_5)); }
	inline Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Action_3U5BU5D_tB1A53E28DF1EB36479A3E08BCA9B92C4B7F7BBC4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Purchasing.Default.WinProductDescription>
struct  List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92, ____items_1)); }
	inline WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892* get__items_1() const { return ____items_1; }
	inline WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92_StaticFields, ____emptyArray_5)); }
	inline WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WinProductDescriptionU5BU5D_t939C7CBDF89E98BF14C1E6AEB4B9C45FE04A9892* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UDP.PurchaseInfo>
struct  List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PurchaseInfoU5BU5D_t3D41B4DF7E53C8E3D658701A404D0A62BAC9E3AC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419, ____items_1)); }
	inline PurchaseInfoU5BU5D_t3D41B4DF7E53C8E3D658701A404D0A62BAC9E3AC* get__items_1() const { return ____items_1; }
	inline PurchaseInfoU5BU5D_t3D41B4DF7E53C8E3D658701A404D0A62BAC9E3AC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PurchaseInfoU5BU5D_t3D41B4DF7E53C8E3D658701A404D0A62BAC9E3AC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PurchaseInfoU5BU5D_t3D41B4DF7E53C8E3D658701A404D0A62BAC9E3AC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419_StaticFields, ____emptyArray_5)); }
	inline PurchaseInfoU5BU5D_t3D41B4DF7E53C8E3D658701A404D0A62BAC9E3AC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PurchaseInfoU5BU5D_t3D41B4DF7E53C8E3D658701A404D0A62BAC9E3AC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PurchaseInfoU5BU5D_t3D41B4DF7E53C8E3D658701A404D0A62BAC9E3AC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown_OptionData>
struct  List_1_tCBED74C5DF8E6C00526CE677BF8B96675B5C3A94  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCBED74C5DF8E6C00526CE677BF8B96675B5C3A94, ____items_1)); }
	inline OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8* get__items_1() const { return ____items_1; }
	inline OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCBED74C5DF8E6C00526CE677BF8B96675B5C3A94, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCBED74C5DF8E6C00526CE677BF8B96675B5C3A94, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCBED74C5DF8E6C00526CE677BF8B96675B5C3A94, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCBED74C5DF8E6C00526CE677BF8B96675B5C3A94_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCBED74C5DF8E6C00526CE677BF8B96675B5C3A94_StaticFields, ____emptyArray_5)); }
	inline OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(OptionDataU5BU5D_t7594674D67B75BA053EC688A05603EC89B1F36A8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct  ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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

// UnityEngine.ChannelPurchase.PurchaseInfo
struct  PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802  : public RuntimeObject
{
public:
	// System.String UnityEngine.ChannelPurchase.PurchaseInfo::<productCode>k__BackingField
	String_t* ___U3CproductCodeU3Ek__BackingField_0;
	// System.String UnityEngine.ChannelPurchase.PurchaseInfo::<gameOrderId>k__BackingField
	String_t* ___U3CgameOrderIdU3Ek__BackingField_1;
	// System.String UnityEngine.ChannelPurchase.PurchaseInfo::<orderQueryToken>k__BackingField
	String_t* ___U3CorderQueryTokenU3Ek__BackingField_2;
	// System.String UnityEngine.ChannelPurchase.PurchaseInfo::<developerPayload>k__BackingField
	String_t* ___U3CdeveloperPayloadU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CproductCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802, ___U3CproductCodeU3Ek__BackingField_0)); }
	inline String_t* get_U3CproductCodeU3Ek__BackingField_0() const { return ___U3CproductCodeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CproductCodeU3Ek__BackingField_0() { return &___U3CproductCodeU3Ek__BackingField_0; }
	inline void set_U3CproductCodeU3Ek__BackingField_0(String_t* value)
	{
		___U3CproductCodeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproductCodeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgameOrderIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802, ___U3CgameOrderIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CgameOrderIdU3Ek__BackingField_1() const { return ___U3CgameOrderIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CgameOrderIdU3Ek__BackingField_1() { return &___U3CgameOrderIdU3Ek__BackingField_1; }
	inline void set_U3CgameOrderIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CgameOrderIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgameOrderIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CorderQueryTokenU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802, ___U3CorderQueryTokenU3Ek__BackingField_2)); }
	inline String_t* get_U3CorderQueryTokenU3Ek__BackingField_2() const { return ___U3CorderQueryTokenU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CorderQueryTokenU3Ek__BackingField_2() { return &___U3CorderQueryTokenU3Ek__BackingField_2; }
	inline void set_U3CorderQueryTokenU3Ek__BackingField_2(String_t* value)
	{
		___U3CorderQueryTokenU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CorderQueryTokenU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeveloperPayloadU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802, ___U3CdeveloperPayloadU3Ek__BackingField_3)); }
	inline String_t* get_U3CdeveloperPayloadU3Ek__BackingField_3() const { return ___U3CdeveloperPayloadU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CdeveloperPayloadU3Ek__BackingField_3() { return &___U3CdeveloperPayloadU3Ek__BackingField_3; }
	inline void set_U3CdeveloperPayloadU3Ek__BackingField_3(String_t* value)
	{
		___U3CdeveloperPayloadU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeveloperPayloadU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.ChannelPurchase.ReceiptInfo
struct  ReceiptInfo_t5A3A3B53B5FFCFEA460A254C320E9B72FB82FC9D  : public RuntimeObject
{
public:
	// System.String UnityEngine.ChannelPurchase.ReceiptInfo::<gameOrderId>k__BackingField
	String_t* ___U3CgameOrderIdU3Ek__BackingField_0;
	// System.String UnityEngine.ChannelPurchase.ReceiptInfo::<signData>k__BackingField
	String_t* ___U3CsignDataU3Ek__BackingField_1;
	// System.String UnityEngine.ChannelPurchase.ReceiptInfo::<signature>k__BackingField
	String_t* ___U3CsignatureU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CgameOrderIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReceiptInfo_t5A3A3B53B5FFCFEA460A254C320E9B72FB82FC9D, ___U3CgameOrderIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CgameOrderIdU3Ek__BackingField_0() const { return ___U3CgameOrderIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CgameOrderIdU3Ek__BackingField_0() { return &___U3CgameOrderIdU3Ek__BackingField_0; }
	inline void set_U3CgameOrderIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CgameOrderIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgameOrderIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsignDataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReceiptInfo_t5A3A3B53B5FFCFEA460A254C320E9B72FB82FC9D, ___U3CsignDataU3Ek__BackingField_1)); }
	inline String_t* get_U3CsignDataU3Ek__BackingField_1() const { return ___U3CsignDataU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CsignDataU3Ek__BackingField_1() { return &___U3CsignDataU3Ek__BackingField_1; }
	inline void set_U3CsignDataU3Ek__BackingField_1(String_t* value)
	{
		___U3CsignDataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsignDataU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsignatureU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ReceiptInfo_t5A3A3B53B5FFCFEA460A254C320E9B72FB82FC9D, ___U3CsignatureU3Ek__BackingField_2)); }
	inline String_t* get_U3CsignatureU3Ek__BackingField_2() const { return ___U3CsignatureU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CsignatureU3Ek__BackingField_2() { return &___U3CsignatureU3Ek__BackingField_2; }
	inline void set_U3CsignatureU3Ek__BackingField_2(String_t* value)
	{
		___U3CsignatureU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsignatureU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TypeName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};


// UnityEngine.Purchasing.Extension.AbstractStore
struct  AbstractStore_t0809CE12BFD8191F29B7B77FC730AE3E8A3C039C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.ProductCatalog
struct  ProductCatalog_t7643D269828196E196CDF8B0ACC4AE00EA1A15F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Purchasing.ProductCatalog::enableCodelessAutoInitialization
	bool ___enableCodelessAutoInitialization_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::products
	List_1_tA1C6463853DC035280694FB65B564ECD8A3453EC * ___products_2;

public:
	inline static int32_t get_offset_of_enableCodelessAutoInitialization_1() { return static_cast<int32_t>(offsetof(ProductCatalog_t7643D269828196E196CDF8B0ACC4AE00EA1A15F6, ___enableCodelessAutoInitialization_1)); }
	inline bool get_enableCodelessAutoInitialization_1() const { return ___enableCodelessAutoInitialization_1; }
	inline bool* get_address_of_enableCodelessAutoInitialization_1() { return &___enableCodelessAutoInitialization_1; }
	inline void set_enableCodelessAutoInitialization_1(bool value)
	{
		___enableCodelessAutoInitialization_1 = value;
	}

	inline static int32_t get_offset_of_products_2() { return static_cast<int32_t>(offsetof(ProductCatalog_t7643D269828196E196CDF8B0ACC4AE00EA1A15F6, ___products_2)); }
	inline List_1_tA1C6463853DC035280694FB65B564ECD8A3453EC * get_products_2() const { return ___products_2; }
	inline List_1_tA1C6463853DC035280694FB65B564ECD8A3453EC ** get_address_of_products_2() { return &___products_2; }
	inline void set_products_2(List_1_tA1C6463853DC035280694FB65B564ECD8A3453EC * value)
	{
		___products_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___products_2), (void*)value);
	}
};

struct ProductCatalog_t7643D269828196E196CDF8B0ACC4AE00EA1A15F6_StaticFields
{
public:
	// UnityEngine.Purchasing.IProductCatalogImpl UnityEngine.Purchasing.ProductCatalog::instance
	RuntimeObject* ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(ProductCatalog_t7643D269828196E196CDF8B0ACC4AE00EA1A15F6_StaticFields, ___instance_0)); }
	inline RuntimeObject* get_instance_0() const { return ___instance_0; }
	inline RuntimeObject** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(RuntimeObject* value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// UnityEngine.Purchasing.StoreID
struct  StoreID_t4C8817F5B62D22D6E04A2B82069F15C7420A9605  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.StoreID::store
	String_t* ___store_0;
	// System.String UnityEngine.Purchasing.StoreID::id
	String_t* ___id_1;

public:
	inline static int32_t get_offset_of_store_0() { return static_cast<int32_t>(offsetof(StoreID_t4C8817F5B62D22D6E04A2B82069F15C7420A9605, ___store_0)); }
	inline String_t* get_store_0() const { return ___store_0; }
	inline String_t** get_address_of_store_0() { return &___store_0; }
	inline void set_store_0(String_t* value)
	{
		___store_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(StoreID_t4C8817F5B62D22D6E04A2B82069F15C7420A9605, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UDP
struct  UDP_t90A3ABD1AA681B1CA1FC9EC6B4A3B14200CCEFB3  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Purchasing.UDPBindings
struct  UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE  : public RuntimeObject
{
public:
	// System.Action`2<System.Boolean,System.String> UnityEngine.Purchasing.UDPBindings::m_PurchaseCallback
	Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * ___m_PurchaseCallback_0;
	// System.Action`2<System.Boolean,System.String> UnityEngine.Purchasing.UDPBindings::m_InitCallback
	Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * ___m_InitCallback_1;
	// System.Action`2<System.Boolean,System.String> UnityEngine.Purchasing.UDPBindings::m_RetrieveProductsCallback
	Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * ___m_RetrieveProductsCallback_2;
	// UnityEngine.UDP.Inventory UnityEngine.Purchasing.UDPBindings::m_Inventory
	Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3 * ___m_Inventory_3;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UDP.PurchaseInfo> UnityEngine.Purchasing.UDPBindings::m_LocalPurchasesCache
	Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * ___m_LocalPurchasesCache_4;

public:
	inline static int32_t get_offset_of_m_PurchaseCallback_0() { return static_cast<int32_t>(offsetof(UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE, ___m_PurchaseCallback_0)); }
	inline Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * get_m_PurchaseCallback_0() const { return ___m_PurchaseCallback_0; }
	inline Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 ** get_address_of_m_PurchaseCallback_0() { return &___m_PurchaseCallback_0; }
	inline void set_m_PurchaseCallback_0(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * value)
	{
		___m_PurchaseCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PurchaseCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_InitCallback_1() { return static_cast<int32_t>(offsetof(UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE, ___m_InitCallback_1)); }
	inline Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * get_m_InitCallback_1() const { return ___m_InitCallback_1; }
	inline Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 ** get_address_of_m_InitCallback_1() { return &___m_InitCallback_1; }
	inline void set_m_InitCallback_1(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * value)
	{
		___m_InitCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InitCallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_RetrieveProductsCallback_2() { return static_cast<int32_t>(offsetof(UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE, ___m_RetrieveProductsCallback_2)); }
	inline Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * get_m_RetrieveProductsCallback_2() const { return ___m_RetrieveProductsCallback_2; }
	inline Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 ** get_address_of_m_RetrieveProductsCallback_2() { return &___m_RetrieveProductsCallback_2; }
	inline void set_m_RetrieveProductsCallback_2(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * value)
	{
		___m_RetrieveProductsCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RetrieveProductsCallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Inventory_3() { return static_cast<int32_t>(offsetof(UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE, ___m_Inventory_3)); }
	inline Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3 * get_m_Inventory_3() const { return ___m_Inventory_3; }
	inline Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3 ** get_address_of_m_Inventory_3() { return &___m_Inventory_3; }
	inline void set_m_Inventory_3(Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3 * value)
	{
		___m_Inventory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Inventory_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalPurchasesCache_4() { return static_cast<int32_t>(offsetof(UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE, ___m_LocalPurchasesCache_4)); }
	inline Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * get_m_LocalPurchasesCache_4() const { return ___m_LocalPurchasesCache_4; }
	inline Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 ** get_address_of_m_LocalPurchasesCache_4() { return &___m_LocalPurchasesCache_4; }
	inline void set_m_LocalPurchasesCache_4(Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * value)
	{
		___m_LocalPurchasesCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalPurchasesCache_4), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0
struct  U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154  : public RuntimeObject
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::products
	ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * ___products_0;
	// System.Action`2<System.Boolean,System.String> UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::retrieveCallback
	Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * ___retrieveCallback_1;
	// UnityEngine.Purchasing.UDPImpl UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::<>4__this
	UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_products_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154, ___products_0)); }
	inline ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * get_products_0() const { return ___products_0; }
	inline ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D ** get_address_of_products_0() { return &___products_0; }
	inline void set_products_0(ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * value)
	{
		___products_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___products_0), (void*)value);
	}

	inline static int32_t get_offset_of_retrieveCallback_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154, ___retrieveCallback_1)); }
	inline Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * get_retrieveCallback_1() const { return ___retrieveCallback_1; }
	inline Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 ** get_address_of_retrieveCallback_1() { return &___retrieveCallback_1; }
	inline void set_retrieveCallback_1(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * value)
	{
		___retrieveCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___retrieveCallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154, ___U3CU3E4__this_2)); }
	inline UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass8_0
struct  U3CU3Ec__DisplayClass8_0_tABAF20373A271E8D799FE1C91217AE25EC57E359  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass8_0::product
	ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product_0;
	// UnityEngine.Purchasing.UDPImpl UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass8_0::<>4__this
	UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_product_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tABAF20373A271E8D799FE1C91217AE25EC57E359, ___product_0)); }
	inline ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * get_product_0() const { return ___product_0; }
	inline ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 ** get_address_of_product_0() { return &___product_0; }
	inline void set_product_0(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * value)
	{
		___product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___product_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tABAF20373A271E8D799FE1C91217AE25EC57E359, ___U3CU3E4__this_1)); }
	inline UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UIFakeStore_<>c
struct  U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD_StaticFields
{
public:
	// UnityEngine.Purchasing.UIFakeStore_<>c UnityEngine.Purchasing.UIFakeStore_<>c::<>9
	U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String> UnityEngine.Purchasing.UIFakeStore_<>c::<>9__18_0
	Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A * ___U3CU3E9__18_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD_StaticFields, ___U3CU3E9__18_0_1)); }
	inline Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UIFakeStore_DialogRequest
struct  DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.UIFakeStore_DialogRequest::QueryText
	String_t* ___QueryText_0;
	// System.String UnityEngine.Purchasing.UIFakeStore_DialogRequest::OkayButtonText
	String_t* ___OkayButtonText_1;
	// System.String UnityEngine.Purchasing.UIFakeStore_DialogRequest::CancelButtonText
	String_t* ___CancelButtonText_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Purchasing.UIFakeStore_DialogRequest::Options
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___Options_3;
	// System.Action`2<System.Boolean,System.Int32> UnityEngine.Purchasing.UIFakeStore_DialogRequest::Callback
	Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC * ___Callback_4;

public:
	inline static int32_t get_offset_of_QueryText_0() { return static_cast<int32_t>(offsetof(DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343, ___QueryText_0)); }
	inline String_t* get_QueryText_0() const { return ___QueryText_0; }
	inline String_t** get_address_of_QueryText_0() { return &___QueryText_0; }
	inline void set_QueryText_0(String_t* value)
	{
		___QueryText_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QueryText_0), (void*)value);
	}

	inline static int32_t get_offset_of_OkayButtonText_1() { return static_cast<int32_t>(offsetof(DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343, ___OkayButtonText_1)); }
	inline String_t* get_OkayButtonText_1() const { return ___OkayButtonText_1; }
	inline String_t** get_address_of_OkayButtonText_1() { return &___OkayButtonText_1; }
	inline void set_OkayButtonText_1(String_t* value)
	{
		___OkayButtonText_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OkayButtonText_1), (void*)value);
	}

	inline static int32_t get_offset_of_CancelButtonText_2() { return static_cast<int32_t>(offsetof(DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343, ___CancelButtonText_2)); }
	inline String_t* get_CancelButtonText_2() const { return ___CancelButtonText_2; }
	inline String_t** get_address_of_CancelButtonText_2() { return &___CancelButtonText_2; }
	inline void set_CancelButtonText_2(String_t* value)
	{
		___CancelButtonText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CancelButtonText_2), (void*)value);
	}

	inline static int32_t get_offset_of_Options_3() { return static_cast<int32_t>(offsetof(DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343, ___Options_3)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_Options_3() const { return ___Options_3; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_Options_3() { return &___Options_3; }
	inline void set_Options_3(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___Options_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Options_3), (void*)value);
	}

	inline static int32_t get_offset_of_Callback_4() { return static_cast<int32_t>(offsetof(DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343, ___Callback_4)); }
	inline Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC * get_Callback_4() const { return ___Callback_4; }
	inline Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC ** get_address_of_Callback_4() { return &___Callback_4; }
	inline void set_Callback_4(Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC * value)
	{
		___Callback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_4), (void*)value);
	}
};


// UnityEngine.Purchasing.UnifiedReceipt
struct  UnifiedReceipt_t5FA6AF4B29A5CFCE5DE0C9FA4EF63454266E035B  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.UnifiedReceipt::Payload
	String_t* ___Payload_0;

public:
	inline static int32_t get_offset_of_Payload_0() { return static_cast<int32_t>(offsetof(UnifiedReceipt_t5FA6AF4B29A5CFCE5DE0C9FA4EF63454266E035B, ___Payload_0)); }
	inline String_t* get_Payload_0() const { return ___Payload_0; }
	inline String_t** get_address_of_Payload_0() { return &___Payload_0; }
	inline void set_Payload_0(String_t* value)
	{
		___Payload_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Payload_0), (void*)value);
	}
};


// UnityEngine.Purchasing.UnityChannelBindings
struct  UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6  : public RuntimeObject
{
public:
	// System.Action`2<System.Boolean,System.String> UnityEngine.Purchasing.UnityChannelBindings::m_PurchaseCallback
	Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * ___m_PurchaseCallback_0;
	// System.String UnityEngine.Purchasing.UnityChannelBindings::m_PurchaseGuid
	String_t* ___m_PurchaseGuid_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>> UnityEngine.Purchasing.UnityChannelBindings::m_ValidateCallbacks
	Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * ___m_ValidateCallbacks_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>> UnityEngine.Purchasing.UnityChannelBindings::m_PurchaseConfirmCallbacks
	Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * ___m_PurchaseConfirmCallbacks_3;

public:
	inline static int32_t get_offset_of_m_PurchaseCallback_0() { return static_cast<int32_t>(offsetof(UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6, ___m_PurchaseCallback_0)); }
	inline Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * get_m_PurchaseCallback_0() const { return ___m_PurchaseCallback_0; }
	inline Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 ** get_address_of_m_PurchaseCallback_0() { return &___m_PurchaseCallback_0; }
	inline void set_m_PurchaseCallback_0(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * value)
	{
		___m_PurchaseCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PurchaseCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PurchaseGuid_1() { return static_cast<int32_t>(offsetof(UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6, ___m_PurchaseGuid_1)); }
	inline String_t* get_m_PurchaseGuid_1() const { return ___m_PurchaseGuid_1; }
	inline String_t** get_address_of_m_PurchaseGuid_1() { return &___m_PurchaseGuid_1; }
	inline void set_m_PurchaseGuid_1(String_t* value)
	{
		___m_PurchaseGuid_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PurchaseGuid_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValidateCallbacks_2() { return static_cast<int32_t>(offsetof(UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6, ___m_ValidateCallbacks_2)); }
	inline Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * get_m_ValidateCallbacks_2() const { return ___m_ValidateCallbacks_2; }
	inline Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 ** get_address_of_m_ValidateCallbacks_2() { return &___m_ValidateCallbacks_2; }
	inline void set_m_ValidateCallbacks_2(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * value)
	{
		___m_ValidateCallbacks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ValidateCallbacks_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PurchaseConfirmCallbacks_3() { return static_cast<int32_t>(offsetof(UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6, ___m_PurchaseConfirmCallbacks_3)); }
	inline Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * get_m_PurchaseConfirmCallbacks_3() const { return ___m_PurchaseConfirmCallbacks_3; }
	inline Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 ** get_address_of_m_PurchaseConfirmCallbacks_3() { return &___m_PurchaseConfirmCallbacks_3; }
	inline void set_m_PurchaseConfirmCallbacks_3(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * value)
	{
		___m_PurchaseConfirmCallbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PurchaseConfirmCallbacks_3), (void*)value);
	}
};


// UnityEngine.Purchasing.UnityChannelBindings_<>c__DisplayClass16_0
struct  U3CU3Ec__DisplayClass16_0_tB91567274B7906CE554758FDB7180DBA22B1A9A5  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.UnityChannelBindings_<>c__DisplayClass16_0::transactionId
	String_t* ___transactionId_0;
	// UnityEngine.Purchasing.UnityChannelBindings UnityEngine.Purchasing.UnityChannelBindings_<>c__DisplayClass16_0::<>4__this
	UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_transactionId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tB91567274B7906CE554758FDB7180DBA22B1A9A5, ___transactionId_0)); }
	inline String_t* get_transactionId_0() const { return ___transactionId_0; }
	inline String_t** get_address_of_transactionId_0() { return &___transactionId_0; }
	inline void set_transactionId_0(String_t* value)
	{
		___transactionId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionId_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tB91567274B7906CE554758FDB7180DBA22B1A9A5, ___U3CU3E4__this_1)); }
	inline UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_0
struct  U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_0::product
	ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product_0;
	// UnityEngine.Purchasing.UnityChannelImpl UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_0::<>4__this
	UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_product_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0, ___product_0)); }
	inline ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * get_product_0() const { return ___product_0; }
	inline ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 ** get_address_of_product_0() { return &___product_0; }
	inline void set_product_0(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * value)
	{
		___product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___product_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0, ___U3CU3E4__this_1)); }
	inline UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_1
struct  U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_1::dic
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dic_0;
	// System.String UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_1::transactionId
	String_t* ___transactionId_1;
	// UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_0 UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_1::CSU24<>8__locals1
	U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 * ___CSU24U3CU3E8__locals1_2;

public:
	inline static int32_t get_offset_of_dic_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE, ___dic_0)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_dic_0() const { return ___dic_0; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_dic_0() { return &___dic_0; }
	inline void set_dic_0(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___dic_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dic_0), (void*)value);
	}

	inline static int32_t get_offset_of_transactionId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE, ___transactionId_1)); }
	inline String_t* get_transactionId_1() const { return ___transactionId_1; }
	inline String_t** get_address_of_transactionId_1() { return &___transactionId_1; }
	inline void set_transactionId_1(String_t* value)
	{
		___transactionId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionId_1), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE, ___CSU24U3CU3E8__locals1_2)); }
	inline U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 * get_CSU24U3CU3E8__locals1_2() const { return ___CSU24U3CU3E8__locals1_2; }
	inline U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 ** get_address_of_CSU24U3CU3E8__locals1_2() { return &___CSU24U3CU3E8__locals1_2; }
	inline void set_CSU24U3CU3E8__locals1_2(U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 * value)
	{
		___CSU24U3CU3E8__locals1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_2), (void*)value);
	}
};


// UnityEngine.Purchasing.UnityChannelPurchaseReceipt
struct  UnityChannelPurchaseReceipt_t22BA5D3915A198D116BB4813CF1D5A9C66DC6D69  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.UnityChannelPurchaseReceipt::storeSpecificId
	String_t* ___storeSpecificId_0;
	// System.String UnityEngine.Purchasing.UnityChannelPurchaseReceipt::transactionId
	String_t* ___transactionId_1;
	// System.String UnityEngine.Purchasing.UnityChannelPurchaseReceipt::orderQueryToken
	String_t* ___orderQueryToken_2;

public:
	inline static int32_t get_offset_of_storeSpecificId_0() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseReceipt_t22BA5D3915A198D116BB4813CF1D5A9C66DC6D69, ___storeSpecificId_0)); }
	inline String_t* get_storeSpecificId_0() const { return ___storeSpecificId_0; }
	inline String_t** get_address_of_storeSpecificId_0() { return &___storeSpecificId_0; }
	inline void set_storeSpecificId_0(String_t* value)
	{
		___storeSpecificId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storeSpecificId_0), (void*)value);
	}

	inline static int32_t get_offset_of_transactionId_1() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseReceipt_t22BA5D3915A198D116BB4813CF1D5A9C66DC6D69, ___transactionId_1)); }
	inline String_t* get_transactionId_1() const { return ___transactionId_1; }
	inline String_t** get_address_of_transactionId_1() { return &___transactionId_1; }
	inline void set_transactionId_1(String_t* value)
	{
		___transactionId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transactionId_1), (void*)value);
	}

	inline static int32_t get_offset_of_orderQueryToken_2() { return static_cast<int32_t>(offsetof(UnityChannelPurchaseReceipt_t22BA5D3915A198D116BB4813CF1D5A9C66DC6D69, ___orderQueryToken_2)); }
	inline String_t* get_orderQueryToken_2() const { return ___orderQueryToken_2; }
	inline String_t** get_address_of_orderQueryToken_2() { return &___orderQueryToken_2; }
	inline void set_orderQueryToken_2(String_t* value)
	{
		___orderQueryToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orderQueryToken_2), (void*)value);
	}
};


// UnityEngine.Purchasing.WinRTStore_<>c
struct  U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_StaticFields
{
public:
	// UnityEngine.Purchasing.WinRTStore_<>c UnityEngine.Purchasing.WinRTStore_<>c::<>9
	U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean> UnityEngine.Purchasing.WinRTStore_<>c::<>9__8_0
	Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * ___U3CU3E9__8_0_1;
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription> UnityEngine.Purchasing.WinRTStore_<>c::<>9__8_1
	Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * ___U3CU3E9__8_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_StaticFields, ___U3CU3E9__8_1_2)); }
	inline Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * get_U3CU3E9__8_1_2() const { return ___U3CU3E9__8_1_2; }
	inline Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E ** get_address_of_U3CU3E9__8_1_2() { return &___U3CU3E9__8_1_2; }
	inline void set_U3CU3E9__8_1_2(Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * value)
	{
		___U3CU3E9__8_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_1_2), (void*)value);
	}
};


// UnityEngine.Purchasing.XiaomiPriceTiers
struct  XiaomiPriceTiers_t277154F32924391EF362A479856C47A2A43A6E5B  : public RuntimeObject
{
public:

public:
};

struct XiaomiPriceTiers_t277154F32924391EF362A479856C47A2A43A6E5B_StaticFields
{
public:
	// System.Int32[] UnityEngine.Purchasing.XiaomiPriceTiers::XiaomiPriceTierPrices
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___XiaomiPriceTierPrices_0;

public:
	inline static int32_t get_offset_of_XiaomiPriceTierPrices_0() { return static_cast<int32_t>(offsetof(XiaomiPriceTiers_t277154F32924391EF362A479856C47A2A43A6E5B_StaticFields, ___XiaomiPriceTierPrices_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_XiaomiPriceTierPrices_0() const { return ___XiaomiPriceTierPrices_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_XiaomiPriceTierPrices_0() { return &___XiaomiPriceTierPrices_0; }
	inline void set_XiaomiPriceTierPrices_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___XiaomiPriceTierPrices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XiaomiPriceTierPrices_0), (void*)value);
	}
};


// UnityEngine.UDP.AppInfo
struct  AppInfo_tCA4BF037393743799729827487AFC4C1502E37B8  : public RuntimeObject
{
public:
	// System.String UnityEngine.UDP.AppInfo::<ClientId>k__BackingField
	String_t* ___U3CClientIdU3Ek__BackingField_0;
	// System.String UnityEngine.UDP.AppInfo::<AppSlug>k__BackingField
	String_t* ___U3CAppSlugU3Ek__BackingField_1;
	// System.String UnityEngine.UDP.AppInfo::<ClientKey>k__BackingField
	String_t* ___U3CClientKeyU3Ek__BackingField_2;
	// System.String UnityEngine.UDP.AppInfo::<RSAPublicKey>k__BackingField
	String_t* ___U3CRSAPublicKeyU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CClientIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppInfo_tCA4BF037393743799729827487AFC4C1502E37B8, ___U3CClientIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CClientIdU3Ek__BackingField_0() const { return ___U3CClientIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CClientIdU3Ek__BackingField_0() { return &___U3CClientIdU3Ek__BackingField_0; }
	inline void set_U3CClientIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CClientIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppSlugU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppInfo_tCA4BF037393743799729827487AFC4C1502E37B8, ___U3CAppSlugU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppSlugU3Ek__BackingField_1() const { return ___U3CAppSlugU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppSlugU3Ek__BackingField_1() { return &___U3CAppSlugU3Ek__BackingField_1; }
	inline void set_U3CAppSlugU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppSlugU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppSlugU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClientKeyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppInfo_tCA4BF037393743799729827487AFC4C1502E37B8, ___U3CClientKeyU3Ek__BackingField_2)); }
	inline String_t* get_U3CClientKeyU3Ek__BackingField_2() const { return ___U3CClientKeyU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CClientKeyU3Ek__BackingField_2() { return &___U3CClientKeyU3Ek__BackingField_2; }
	inline void set_U3CClientKeyU3Ek__BackingField_2(String_t* value)
	{
		___U3CClientKeyU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientKeyU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRSAPublicKeyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppInfo_tCA4BF037393743799729827487AFC4C1502E37B8, ___U3CRSAPublicKeyU3Ek__BackingField_3)); }
	inline String_t* get_U3CRSAPublicKeyU3Ek__BackingField_3() const { return ___U3CRSAPublicKeyU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CRSAPublicKeyU3Ek__BackingField_3() { return &___U3CRSAPublicKeyU3Ek__BackingField_3; }
	inline void set_U3CRSAPublicKeyU3Ek__BackingField_3(String_t* value)
	{
		___U3CRSAPublicKeyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRSAPublicKeyU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.UDP.Inventory
struct  Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UDP.PurchaseInfo> UnityEngine.UDP.Inventory::_purchaseDictionary
	Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * ____purchaseDictionary_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UDP.ProductInfo> UnityEngine.UDP.Inventory::_productDictionary
	Dictionary_2_t07DA6C3B2CF326BAFAB70924A7FE83C347CD89D3 * ____productDictionary_1;

public:
	inline static int32_t get_offset_of__purchaseDictionary_0() { return static_cast<int32_t>(offsetof(Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3, ____purchaseDictionary_0)); }
	inline Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * get__purchaseDictionary_0() const { return ____purchaseDictionary_0; }
	inline Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 ** get_address_of__purchaseDictionary_0() { return &____purchaseDictionary_0; }
	inline void set__purchaseDictionary_0(Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * value)
	{
		____purchaseDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____purchaseDictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of__productDictionary_1() { return static_cast<int32_t>(offsetof(Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3, ____productDictionary_1)); }
	inline Dictionary_2_t07DA6C3B2CF326BAFAB70924A7FE83C347CD89D3 * get__productDictionary_1() const { return ____productDictionary_1; }
	inline Dictionary_2_t07DA6C3B2CF326BAFAB70924A7FE83C347CD89D3 ** get_address_of__productDictionary_1() { return &____productDictionary_1; }
	inline void set__productDictionary_1(Dictionary_2_t07DA6C3B2CF326BAFAB70924A7FE83C347CD89D3 * value)
	{
		____productDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____productDictionary_1), (void*)value);
	}
};


// UnityEngine.UDP.PurchaseInfo
struct  PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27  : public RuntimeObject
{
public:
	// System.String UnityEngine.UDP.PurchaseInfo::<ItemType>k__BackingField
	String_t* ___U3CItemTypeU3Ek__BackingField_0;
	// System.String UnityEngine.UDP.PurchaseInfo::<ProductId>k__BackingField
	String_t* ___U3CProductIdU3Ek__BackingField_1;
	// System.String UnityEngine.UDP.PurchaseInfo::<GameOrderId>k__BackingField
	String_t* ___U3CGameOrderIdU3Ek__BackingField_2;
	// System.String UnityEngine.UDP.PurchaseInfo::<OrderQueryToken>k__BackingField
	String_t* ___U3COrderQueryTokenU3Ek__BackingField_3;
	// System.String UnityEngine.UDP.PurchaseInfo::<DeveloperPayload>k__BackingField
	String_t* ___U3CDeveloperPayloadU3Ek__BackingField_4;
	// System.String UnityEngine.UDP.PurchaseInfo::<StorePurchaseJsonString>k__BackingField
	String_t* ___U3CStorePurchaseJsonStringU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CItemTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27, ___U3CItemTypeU3Ek__BackingField_0)); }
	inline String_t* get_U3CItemTypeU3Ek__BackingField_0() const { return ___U3CItemTypeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CItemTypeU3Ek__BackingField_0() { return &___U3CItemTypeU3Ek__BackingField_0; }
	inline void set_U3CItemTypeU3Ek__BackingField_0(String_t* value)
	{
		___U3CItemTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProductIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27, ___U3CProductIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CProductIdU3Ek__BackingField_1() const { return ___U3CProductIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CProductIdU3Ek__BackingField_1() { return &___U3CProductIdU3Ek__BackingField_1; }
	inline void set_U3CProductIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CProductIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProductIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameOrderIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27, ___U3CGameOrderIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CGameOrderIdU3Ek__BackingField_2() const { return ___U3CGameOrderIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CGameOrderIdU3Ek__BackingField_2() { return &___U3CGameOrderIdU3Ek__BackingField_2; }
	inline void set_U3CGameOrderIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CGameOrderIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameOrderIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrderQueryTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27, ___U3COrderQueryTokenU3Ek__BackingField_3)); }
	inline String_t* get_U3COrderQueryTokenU3Ek__BackingField_3() const { return ___U3COrderQueryTokenU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3COrderQueryTokenU3Ek__BackingField_3() { return &___U3COrderQueryTokenU3Ek__BackingField_3; }
	inline void set_U3COrderQueryTokenU3Ek__BackingField_3(String_t* value)
	{
		___U3COrderQueryTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COrderQueryTokenU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDeveloperPayloadU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27, ___U3CDeveloperPayloadU3Ek__BackingField_4)); }
	inline String_t* get_U3CDeveloperPayloadU3Ek__BackingField_4() const { return ___U3CDeveloperPayloadU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CDeveloperPayloadU3Ek__BackingField_4() { return &___U3CDeveloperPayloadU3Ek__BackingField_4; }
	inline void set_U3CDeveloperPayloadU3Ek__BackingField_4(String_t* value)
	{
		___U3CDeveloperPayloadU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeveloperPayloadU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStorePurchaseJsonStringU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27, ___U3CStorePurchaseJsonStringU3Ek__BackingField_5)); }
	inline String_t* get_U3CStorePurchaseJsonStringU3Ek__BackingField_5() const { return ___U3CStorePurchaseJsonStringU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CStorePurchaseJsonStringU3Ek__BackingField_5() { return &___U3CStorePurchaseJsonStringU3Ek__BackingField_5; }
	inline void set_U3CStorePurchaseJsonStringU3Ek__BackingField_5(String_t* value)
	{
		___U3CStorePurchaseJsonStringU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStorePurchaseJsonStringU3Ek__BackingField_5), (void*)value);
	}
};


// UnityEngine.UDP.UserInfo
struct  UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD  : public RuntimeObject
{
public:
	// System.String UnityEngine.UDP.UserInfo::<Channel>k__BackingField
	String_t* ___U3CChannelU3Ek__BackingField_0;
	// System.String UnityEngine.UDP.UserInfo::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_1;
	// System.String UnityEngine.UDP.UserInfo::<UserLoginToken>k__BackingField
	String_t* ___U3CUserLoginTokenU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CChannelU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD, ___U3CChannelU3Ek__BackingField_0)); }
	inline String_t* get_U3CChannelU3Ek__BackingField_0() const { return ___U3CChannelU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CChannelU3Ek__BackingField_0() { return &___U3CChannelU3Ek__BackingField_0; }
	inline void set_U3CChannelU3Ek__BackingField_0(String_t* value)
	{
		___U3CChannelU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChannelU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD, ___U3CUserIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_1() const { return ___U3CUserIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_1() { return &___U3CUserIdU3Ek__BackingField_1; }
	inline void set_U3CUserIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserLoginTokenU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD, ___U3CUserLoginTokenU3Ek__BackingField_2)); }
	inline String_t* get_U3CUserLoginTokenU3Ek__BackingField_2() const { return ___U3CUserLoginTokenU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CUserLoginTokenU3Ek__BackingField_2() { return &___U3CUserLoginTokenU3Ek__BackingField_2; }
	inline void set_U3CUserLoginTokenU3Ek__BackingField_2(String_t* value)
	{
		___U3CUserLoginTokenU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserLoginTokenU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.UI.Dropdown_OptionData
struct  OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831  : public RuntimeObject
{
public:
	// System.String UnityEngine.UI.Dropdown_OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown_OptionData::m_Image
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Image_1;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831, ___m_Image_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Image_1() const { return ___m_Image_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D368
struct  __StaticArrayInitTypeSizeU3D368_t8BB928D4F9886B0D6826C35BA2302EC36DF7F0FB 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D368_t8BB928D4F9886B0D6826C35BA2302EC36DF7F0FB__padding[368];
	};

public:
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UDP.PurchaseInfo>
struct  KeyValuePair_2_t2111E3493A19FE16C45F0C03E1268EE474491464 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2111E3493A19FE16C45F0C03E1268EE474491464, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2111E3493A19FE16C45F0C03E1268EE474491464, ___value_1)); }
	inline PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * get_value_1() const { return ___value_1; }
	inline PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Action`3<System.Boolean,System.String,System.String>>
struct  Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E, ___list_0)); }
	inline List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * get_list_0() const { return ___list_0; }
	inline List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E, ___current_3)); }
	inline Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * get_current_3() const { return ___current_3; }
	inline Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.String>
struct  Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813, ___list_0)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_list_0() const { return ___list_0; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.UDP.PurchaseInfo>
struct  Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2, ___list_0)); }
	inline List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419 * get_list_0() const { return ___list_0; }
	inline List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2, ___current_3)); }
	inline PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * get_current_3() const { return ___current_3; }
	inline PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
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


// System.Nullable`1<System.Boolean>
struct  Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Purchasing.WinRTStore
struct  WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F  : public AbstractStore_t0809CE12BFD8191F29B7B77FC730AE3E8A3C039C
{
public:
	// UnityEngine.Purchasing.Default.IWindowsIAP UnityEngine.Purchasing.WinRTStore::win8
	RuntimeObject* ___win8_0;
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.WinRTStore::callback
	RuntimeObject* ___callback_1;
	// Uniject.IUtil UnityEngine.Purchasing.WinRTStore::util
	RuntimeObject* ___util_2;
	// UnityEngine.ILogger UnityEngine.Purchasing.WinRTStore::logger
	RuntimeObject* ___logger_3;
	// System.Boolean UnityEngine.Purchasing.WinRTStore::m_CanReceivePurchases
	bool ___m_CanReceivePurchases_4;

public:
	inline static int32_t get_offset_of_win8_0() { return static_cast<int32_t>(offsetof(WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F, ___win8_0)); }
	inline RuntimeObject* get_win8_0() const { return ___win8_0; }
	inline RuntimeObject** get_address_of_win8_0() { return &___win8_0; }
	inline void set_win8_0(RuntimeObject* value)
	{
		___win8_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win8_0), (void*)value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F, ___callback_1)); }
	inline RuntimeObject* get_callback_1() const { return ___callback_1; }
	inline RuntimeObject** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(RuntimeObject* value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}

	inline static int32_t get_offset_of_util_2() { return static_cast<int32_t>(offsetof(WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F, ___util_2)); }
	inline RuntimeObject* get_util_2() const { return ___util_2; }
	inline RuntimeObject** get_address_of_util_2() { return &___util_2; }
	inline void set_util_2(RuntimeObject* value)
	{
		___util_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___util_2), (void*)value);
	}

	inline static int32_t get_offset_of_logger_3() { return static_cast<int32_t>(offsetof(WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F, ___logger_3)); }
	inline RuntimeObject* get_logger_3() const { return ___logger_3; }
	inline RuntimeObject** get_address_of_logger_3() { return &___logger_3; }
	inline void set_logger_3(RuntimeObject* value)
	{
		___logger_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanReceivePurchases_4() { return static_cast<int32_t>(offsetof(WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F, ___m_CanReceivePurchases_4)); }
	inline bool get_m_CanReceivePurchases_4() const { return ___m_CanReceivePurchases_4; }
	inline bool* get_address_of_m_CanReceivePurchases_4() { return &___m_CanReceivePurchases_4; }
	inline void set_m_CanReceivePurchases_4(bool value)
	{
		___m_CanReceivePurchases_4 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t5700F4D01A9810563DD6E295A10965B13B4B76DF  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t5700F4D01A9810563DD6E295A10965B13B4B76DF_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D368 <PrivateImplementationDetails>::8ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41
	__StaticArrayInitTypeSizeU3D368_t8BB928D4F9886B0D6826C35BA2302EC36DF7F0FB  ___8ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0;

public:
	inline static int32_t get_offset_of_U38ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t5700F4D01A9810563DD6E295A10965B13B4B76DF_StaticFields, ___8ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0)); }
	inline __StaticArrayInitTypeSizeU3D368_t8BB928D4F9886B0D6826C35BA2302EC36DF7F0FB  get_U38ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0() const { return ___8ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0; }
	inline __StaticArrayInitTypeSizeU3D368_t8BB928D4F9886B0D6826C35BA2302EC36DF7F0FB * get_address_of_U38ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0() { return &___8ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0; }
	inline void set_U38ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0(__StaticArrayInitTypeSizeU3D368_t8BB928D4F9886B0D6826C35BA2302EC36DF7F0FB  value)
	{
		___8ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Object,System.Object>
struct  Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___current_3)); }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.String,UnityEngine.UDP.PurchaseInfo>
struct  Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t2111E3493A19FE16C45F0C03E1268EE474491464  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4, ___dictionary_0)); }
	inline Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4, ___current_3)); }
	inline KeyValuePair_2_t2111E3493A19FE16C45F0C03E1268EE474491464  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2111E3493A19FE16C45F0C03E1268EE474491464 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2111E3493A19FE16C45F0C03E1268EE474491464  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.LogType
struct  LogType_t6B6C6234E8B44B73937581ACFBE15DE28227849D 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_t6B6C6234E8B44B73937581ACFBE15DE28227849D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Purchasing.AppleStoreProductType
struct  AppleStoreProductType_tADAB43B081D09C4D7F08145CED6B7EB52716076A 
{
public:
	// System.Int32 UnityEngine.Purchasing.AppleStoreProductType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppleStoreProductType_tADAB43B081D09C4D7F08145CED6B7EB52716076A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.Default.WinProductDescription
struct  WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<platformSpecificID>k__BackingField
	String_t* ___U3CplatformSpecificIDU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<price>k__BackingField
	String_t* ___U3CpriceU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<title>k__BackingField
	String_t* ___U3CtitleU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<description>k__BackingField
	String_t* ___U3CdescriptionU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<ISOCurrencyCode>k__BackingField
	String_t* ___U3CISOCurrencyCodeU3Ek__BackingField_4;
	// System.Decimal UnityEngine.Purchasing.Default.WinProductDescription::<priceDecimal>k__BackingField
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___U3CpriceDecimalU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_6;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Purchasing.Default.WinProductDescription::<consumable>k__BackingField
	bool ___U3CconsumableU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CplatformSpecificIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CplatformSpecificIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CplatformSpecificIDU3Ek__BackingField_0() const { return ___U3CplatformSpecificIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CplatformSpecificIDU3Ek__BackingField_0() { return &___U3CplatformSpecificIDU3Ek__BackingField_0; }
	inline void set_U3CplatformSpecificIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CplatformSpecificIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplatformSpecificIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpriceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CpriceU3Ek__BackingField_1)); }
	inline String_t* get_U3CpriceU3Ek__BackingField_1() const { return ___U3CpriceU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CpriceU3Ek__BackingField_1() { return &___U3CpriceU3Ek__BackingField_1; }
	inline void set_U3CpriceU3Ek__BackingField_1(String_t* value)
	{
		___U3CpriceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpriceU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtitleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CtitleU3Ek__BackingField_2)); }
	inline String_t* get_U3CtitleU3Ek__BackingField_2() const { return ___U3CtitleU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CtitleU3Ek__BackingField_2() { return &___U3CtitleU3Ek__BackingField_2; }
	inline void set_U3CtitleU3Ek__BackingField_2(String_t* value)
	{
		___U3CtitleU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtitleU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdescriptionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CdescriptionU3Ek__BackingField_3)); }
	inline String_t* get_U3CdescriptionU3Ek__BackingField_3() const { return ___U3CdescriptionU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CdescriptionU3Ek__BackingField_3() { return &___U3CdescriptionU3Ek__BackingField_3; }
	inline void set_U3CdescriptionU3Ek__BackingField_3(String_t* value)
	{
		___U3CdescriptionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdescriptionU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CISOCurrencyCodeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CISOCurrencyCodeU3Ek__BackingField_4)); }
	inline String_t* get_U3CISOCurrencyCodeU3Ek__BackingField_4() const { return ___U3CISOCurrencyCodeU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CISOCurrencyCodeU3Ek__BackingField_4() { return &___U3CISOCurrencyCodeU3Ek__BackingField_4; }
	inline void set_U3CISOCurrencyCodeU3Ek__BackingField_4(String_t* value)
	{
		___U3CISOCurrencyCodeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CISOCurrencyCodeU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpriceDecimalU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CpriceDecimalU3Ek__BackingField_5)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_U3CpriceDecimalU3Ek__BackingField_5() const { return ___U3CpriceDecimalU3Ek__BackingField_5; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_U3CpriceDecimalU3Ek__BackingField_5() { return &___U3CpriceDecimalU3Ek__BackingField_5; }
	inline void set_U3CpriceDecimalU3Ek__BackingField_5(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___U3CpriceDecimalU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CreceiptU3Ek__BackingField_6)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_6() const { return ___U3CreceiptU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_6() { return &___U3CreceiptU3Ek__BackingField_6; }
	inline void set_U3CreceiptU3Ek__BackingField_6(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CtransactionIDU3Ek__BackingField_7)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_7() const { return ___U3CtransactionIDU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_7() { return &___U3CtransactionIDU3Ek__BackingField_7; }
	inline void set_U3CtransactionIDU3Ek__BackingField_7(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CconsumableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43, ___U3CconsumableU3Ek__BackingField_8)); }
	inline bool get_U3CconsumableU3Ek__BackingField_8() const { return ___U3CconsumableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CconsumableU3Ek__BackingField_8() { return &___U3CconsumableU3Ek__BackingField_8; }
	inline void set_U3CconsumableU3Ek__BackingField_8(bool value)
	{
		___U3CconsumableU3Ek__BackingField_8 = value;
	}
};


// UnityEngine.Purchasing.FakeStoreUIMode
struct  FakeStoreUIMode_tC9023D94845BDC28E71412A4D078CAB33C129834 
{
public:
	// System.Int32 UnityEngine.Purchasing.FakeStoreUIMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FakeStoreUIMode_tC9023D94845BDC28E71412A4D078CAB33C129834, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.InitializationFailureReason
struct  InitializationFailureReason_t5A6284D67FA09D301793E67D8B7003299F4D3062 
{
public:
	// System.Int32 UnityEngine.Purchasing.InitializationFailureReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializationFailureReason_t5A6284D67FA09D301793E67D8B7003299F4D3062, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.ProductMetadata
struct  ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedPriceString>k__BackingField
	String_t* ___U3ClocalizedPriceStringU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedTitle>k__BackingField
	String_t* ___U3ClocalizedTitleU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedDescription>k__BackingField
	String_t* ___U3ClocalizedDescriptionU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.ProductMetadata::<isoCurrencyCode>k__BackingField
	String_t* ___U3CisoCurrencyCodeU3Ek__BackingField_3;
	// System.Decimal UnityEngine.Purchasing.ProductMetadata::<localizedPrice>k__BackingField
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___U3ClocalizedPriceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ClocalizedPriceStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3ClocalizedPriceStringU3Ek__BackingField_0)); }
	inline String_t* get_U3ClocalizedPriceStringU3Ek__BackingField_0() const { return ___U3ClocalizedPriceStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3ClocalizedPriceStringU3Ek__BackingField_0() { return &___U3ClocalizedPriceStringU3Ek__BackingField_0; }
	inline void set_U3ClocalizedPriceStringU3Ek__BackingField_0(String_t* value)
	{
		___U3ClocalizedPriceStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalizedPriceStringU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalizedTitleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3ClocalizedTitleU3Ek__BackingField_1)); }
	inline String_t* get_U3ClocalizedTitleU3Ek__BackingField_1() const { return ___U3ClocalizedTitleU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3ClocalizedTitleU3Ek__BackingField_1() { return &___U3ClocalizedTitleU3Ek__BackingField_1; }
	inline void set_U3ClocalizedTitleU3Ek__BackingField_1(String_t* value)
	{
		___U3ClocalizedTitleU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalizedTitleU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalizedDescriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3ClocalizedDescriptionU3Ek__BackingField_2)); }
	inline String_t* get_U3ClocalizedDescriptionU3Ek__BackingField_2() const { return ___U3ClocalizedDescriptionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3ClocalizedDescriptionU3Ek__BackingField_2() { return &___U3ClocalizedDescriptionU3Ek__BackingField_2; }
	inline void set_U3ClocalizedDescriptionU3Ek__BackingField_2(String_t* value)
	{
		___U3ClocalizedDescriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalizedDescriptionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisoCurrencyCodeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3CisoCurrencyCodeU3Ek__BackingField_3)); }
	inline String_t* get_U3CisoCurrencyCodeU3Ek__BackingField_3() const { return ___U3CisoCurrencyCodeU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CisoCurrencyCodeU3Ek__BackingField_3() { return &___U3CisoCurrencyCodeU3Ek__BackingField_3; }
	inline void set_U3CisoCurrencyCodeU3Ek__BackingField_3(String_t* value)
	{
		___U3CisoCurrencyCodeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisoCurrencyCodeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalizedPriceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48, ___U3ClocalizedPriceU3Ek__BackingField_4)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_U3ClocalizedPriceU3Ek__BackingField_4() const { return ___U3ClocalizedPriceU3Ek__BackingField_4; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_U3ClocalizedPriceU3Ek__BackingField_4() { return &___U3ClocalizedPriceU3Ek__BackingField_4; }
	inline void set_U3ClocalizedPriceU3Ek__BackingField_4(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___U3ClocalizedPriceU3Ek__BackingField_4 = value;
	}
};


// UnityEngine.Purchasing.ProductType
struct  ProductType_tC52C3BA25156195ACF6AE97650D056434BD51075 
{
public:
	// System.Int32 UnityEngine.Purchasing.ProductType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProductType_tC52C3BA25156195ACF6AE97650D056434BD51075, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.PurchaseFailureReason
struct  PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseFailureReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.Result
struct  Result_t5191579D8310B3B0258ADC727B5BA9BDE174C572 
{
public:
	// System.Int32 UnityEngine.Purchasing.Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t5191579D8310B3B0258ADC727B5BA9BDE174C572, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt
struct  AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<quantity>k__BackingField
	int32_t ___U3CquantityU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<productID>k__BackingField
	String_t* ___U3CproductIDU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<originalTransactionIdentifier>k__BackingField
	String_t* ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<purchaseDate>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CpurchaseDateU3Ek__BackingField_4;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<originalPurchaseDate>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CoriginalPurchaseDateU3Ek__BackingField_5;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<subscriptionExpirationDate>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CsubscriptionExpirationDateU3Ek__BackingField_6;
	// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<cancellationDate>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CcancellationDateU3Ek__BackingField_7;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<isFreeTrial>k__BackingField
	int32_t ___U3CisFreeTrialU3Ek__BackingField_8;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<productType>k__BackingField
	int32_t ___U3CproductTypeU3Ek__BackingField_9;
	// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::<isIntroductoryPricePeriod>k__BackingField
	int32_t ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CquantityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC, ___U3CquantityU3Ek__BackingField_0)); }
	inline int32_t get_U3CquantityU3Ek__BackingField_0() const { return ___U3CquantityU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CquantityU3Ek__BackingField_0() { return &___U3CquantityU3Ek__BackingField_0; }
	inline void set_U3CquantityU3Ek__BackingField_0(int32_t value)
	{
		___U3CquantityU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproductIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC, ___U3CproductIDU3Ek__BackingField_1)); }
	inline String_t* get_U3CproductIDU3Ek__BackingField_1() const { return ___U3CproductIDU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CproductIDU3Ek__BackingField_1() { return &___U3CproductIDU3Ek__BackingField_1; }
	inline void set_U3CproductIDU3Ek__BackingField_1(String_t* value)
	{
		___U3CproductIDU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproductIDU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC, ___U3CtransactionIDU3Ek__BackingField_2)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_2() const { return ___U3CtransactionIDU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_2() { return &___U3CtransactionIDU3Ek__BackingField_2; }
	inline void set_U3CtransactionIDU3Ek__BackingField_2(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIDU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC, ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3)); }
	inline String_t* get_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() const { return ___U3CoriginalTransactionIdentifierU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CoriginalTransactionIdentifierU3Ek__BackingField_3() { return &___U3CoriginalTransactionIdentifierU3Ek__BackingField_3; }
	inline void set_U3CoriginalTransactionIdentifierU3Ek__BackingField_3(String_t* value)
	{
		___U3CoriginalTransactionIdentifierU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoriginalTransactionIdentifierU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpurchaseDateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC, ___U3CpurchaseDateU3Ek__BackingField_4)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CpurchaseDateU3Ek__BackingField_4() const { return ___U3CpurchaseDateU3Ek__BackingField_4; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CpurchaseDateU3Ek__BackingField_4() { return &___U3CpurchaseDateU3Ek__BackingField_4; }
	inline void set_U3CpurchaseDateU3Ek__BackingField_4(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CpurchaseDateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CoriginalPurchaseDateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC, ___U3CoriginalPurchaseDateU3Ek__BackingField_5)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CoriginalPurchaseDateU3Ek__BackingField_5() const { return ___U3CoriginalPurchaseDateU3Ek__BackingField_5; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CoriginalPurchaseDateU3Ek__BackingField_5() { return &___U3CoriginalPurchaseDateU3Ek__BackingField_5; }
	inline void set_U3CoriginalPurchaseDateU3Ek__BackingField_5(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CoriginalPurchaseDateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsubscriptionExpirationDateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC, ___U3CsubscriptionExpirationDateU3Ek__BackingField_6)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CsubscriptionExpirationDateU3Ek__BackingField_6() const { return ___U3CsubscriptionExpirationDateU3Ek__BackingField_6; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CsubscriptionExpirationDateU3Ek__BackingField_6() { return &___U3CsubscriptionExpirationDateU3Ek__BackingField_6; }
	inline void set_U3CsubscriptionExpirationDateU3Ek__BackingField_6(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CsubscriptionExpirationDateU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CcancellationDateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC, ___U3CcancellationDateU3Ek__BackingField_7)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CcancellationDateU3Ek__BackingField_7() const { return ___U3CcancellationDateU3Ek__BackingField_7; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CcancellationDateU3Ek__BackingField_7() { return &___U3CcancellationDateU3Ek__BackingField_7; }
	inline void set_U3CcancellationDateU3Ek__BackingField_7(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CcancellationDateU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CisFreeTrialU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC, ___U3CisFreeTrialU3Ek__BackingField_8)); }
	inline int32_t get_U3CisFreeTrialU3Ek__BackingField_8() const { return ___U3CisFreeTrialU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CisFreeTrialU3Ek__BackingField_8() { return &___U3CisFreeTrialU3Ek__BackingField_8; }
	inline void set_U3CisFreeTrialU3Ek__BackingField_8(int32_t value)
	{
		___U3CisFreeTrialU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CproductTypeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC, ___U3CproductTypeU3Ek__BackingField_9)); }
	inline int32_t get_U3CproductTypeU3Ek__BackingField_9() const { return ___U3CproductTypeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CproductTypeU3Ek__BackingField_9() { return &___U3CproductTypeU3Ek__BackingField_9; }
	inline void set_U3CproductTypeU3Ek__BackingField_9(int32_t value)
	{
		___U3CproductTypeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC, ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10)); }
	inline int32_t get_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() const { return ___U3CisIntroductoryPricePeriodU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CisIntroductoryPricePeriodU3Ek__BackingField_10() { return &___U3CisIntroductoryPricePeriodU3Ek__BackingField_10; }
	inline void set_U3CisIntroductoryPricePeriodU3Ek__BackingField_10(int32_t value)
	{
		___U3CisIntroductoryPricePeriodU3Ek__BackingField_10 = value;
	}
};


// UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode
struct  StoreSpecificPurchaseErrorCode_t98BECD468210A3936A568F742D016DB19BB6B976 
{
public:
	// System.Int32 UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StoreSpecificPurchaseErrorCode_t98BECD468210A3936A568F742D016DB19BB6B976, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.SubscriptionPeriodUnit
struct  SubscriptionPeriodUnit_tBA4BCE498384075C6C808971B029C03CE0CA9673 
{
public:
	// System.Int32 UnityEngine.Purchasing.SubscriptionPeriodUnit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SubscriptionPeriodUnit_tBA4BCE498384075C6C808971B029C03CE0CA9673, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.TradeSeqState
struct  TradeSeqState_tDF84A3AE5E3CF5A03E78D0384F21EE26C3014886 
{
public:
	// System.Int32 UnityEngine.Purchasing.TradeSeqState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TradeSeqState_tDF84A3AE5E3CF5A03E78D0384F21EE26C3014886, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.TranslationLocale
struct  TranslationLocale_tA4EC10521BA9E8CAECCDC04789A2A7B5A9AF4905 
{
public:
	// System.Int32 UnityEngine.Purchasing.TranslationLocale::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TranslationLocale_tA4EC10521BA9E8CAECCDC04789A2A7B5A9AF4905, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Purchasing.ValidateReceiptState
struct  ValidateReceiptState_t0120C792B9918AAFC7BBE8CB84D119A6904C0B46 
{
public:
	// System.Int32 UnityEngine.Purchasing.ValidateReceiptState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ValidateReceiptState_t0120C792B9918AAFC7BBE8CB84D119A6904C0B46, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UDP.ProductInfo
struct  ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE  : public RuntimeObject
{
public:
	// System.String UnityEngine.UDP.ProductInfo::<ItemType>k__BackingField
	String_t* ___U3CItemTypeU3Ek__BackingField_0;
	// System.String UnityEngine.UDP.ProductInfo::<ProductId>k__BackingField
	String_t* ___U3CProductIdU3Ek__BackingField_1;
	// System.Nullable`1<System.Boolean> UnityEngine.UDP.ProductInfo::<Consumable>k__BackingField
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___U3CConsumableU3Ek__BackingField_2;
	// System.String UnityEngine.UDP.ProductInfo::<Price>k__BackingField
	String_t* ___U3CPriceU3Ek__BackingField_3;
	// System.Int64 UnityEngine.UDP.ProductInfo::<PriceAmountMicros>k__BackingField
	int64_t ___U3CPriceAmountMicrosU3Ek__BackingField_4;
	// System.String UnityEngine.UDP.ProductInfo::<Currency>k__BackingField
	String_t* ___U3CCurrencyU3Ek__BackingField_5;
	// System.String UnityEngine.UDP.ProductInfo::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_6;
	// System.String UnityEngine.UDP.ProductInfo::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CItemTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE, ___U3CItemTypeU3Ek__BackingField_0)); }
	inline String_t* get_U3CItemTypeU3Ek__BackingField_0() const { return ___U3CItemTypeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CItemTypeU3Ek__BackingField_0() { return &___U3CItemTypeU3Ek__BackingField_0; }
	inline void set_U3CItemTypeU3Ek__BackingField_0(String_t* value)
	{
		___U3CItemTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProductIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE, ___U3CProductIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CProductIdU3Ek__BackingField_1() const { return ___U3CProductIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CProductIdU3Ek__BackingField_1() { return &___U3CProductIdU3Ek__BackingField_1; }
	inline void set_U3CProductIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CProductIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProductIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConsumableU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE, ___U3CConsumableU3Ek__BackingField_2)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_U3CConsumableU3Ek__BackingField_2() const { return ___U3CConsumableU3Ek__BackingField_2; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_U3CConsumableU3Ek__BackingField_2() { return &___U3CConsumableU3Ek__BackingField_2; }
	inline void set_U3CConsumableU3Ek__BackingField_2(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___U3CConsumableU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CPriceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE, ___U3CPriceU3Ek__BackingField_3)); }
	inline String_t* get_U3CPriceU3Ek__BackingField_3() const { return ___U3CPriceU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CPriceU3Ek__BackingField_3() { return &___U3CPriceU3Ek__BackingField_3; }
	inline void set_U3CPriceU3Ek__BackingField_3(String_t* value)
	{
		___U3CPriceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPriceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriceAmountMicrosU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE, ___U3CPriceAmountMicrosU3Ek__BackingField_4)); }
	inline int64_t get_U3CPriceAmountMicrosU3Ek__BackingField_4() const { return ___U3CPriceAmountMicrosU3Ek__BackingField_4; }
	inline int64_t* get_address_of_U3CPriceAmountMicrosU3Ek__BackingField_4() { return &___U3CPriceAmountMicrosU3Ek__BackingField_4; }
	inline void set_U3CPriceAmountMicrosU3Ek__BackingField_4(int64_t value)
	{
		___U3CPriceAmountMicrosU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CCurrencyU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE, ___U3CCurrencyU3Ek__BackingField_5)); }
	inline String_t* get_U3CCurrencyU3Ek__BackingField_5() const { return ___U3CCurrencyU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CCurrencyU3Ek__BackingField_5() { return &___U3CCurrencyU3Ek__BackingField_5; }
	inline void set_U3CCurrencyU3Ek__BackingField_5(String_t* value)
	{
		___U3CCurrencyU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrencyU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTitleU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE, ___U3CTitleU3Ek__BackingField_6)); }
	inline String_t* get_U3CTitleU3Ek__BackingField_6() const { return ___U3CTitleU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CTitleU3Ek__BackingField_6() { return &___U3CTitleU3Ek__BackingField_6; }
	inline void set_U3CTitleU3Ek__BackingField_6(String_t* value)
	{
		___U3CTitleU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTitleU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE, ___U3CDescriptionU3Ek__BackingField_7)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_7() const { return ___U3CDescriptionU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_7() { return &___U3CDescriptionU3Ek__BackingField_7; }
	inline void set_U3CDescriptionU3Ek__BackingField_7(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDescriptionU3Ek__BackingField_7), (void*)value);
	}
};


// UnityEngine.UI.Button_ButtonClickedEvent
struct  ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB  : public UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F
{
public:

public:
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Dropdown_DropdownEvent
struct  DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306  : public UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914
{
public:

public:
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Purchasing.Extension.ProductDescription
struct  ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.Extension.ProductDescription::type
	int32_t ___type_1;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Extension.ProductDescription::<metadata>k__BackingField
	ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * ___U3CmetadataU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<transactionId>k__BackingField
	String_t* ___U3CtransactionIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582, ___U3CstoreSpecificIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_0() const { return ___U3CstoreSpecificIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_0() { return &___U3CstoreSpecificIdU3Ek__BackingField_0; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreSpecificIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582, ___U3CmetadataU3Ek__BackingField_2)); }
	inline ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * get_U3CmetadataU3Ek__BackingField_2() const { return ___U3CmetadataU3Ek__BackingField_2; }
	inline ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 ** get_address_of_U3CmetadataU3Ek__BackingField_2() { return &___U3CmetadataU3Ek__BackingField_2; }
	inline void set_U3CmetadataU3Ek__BackingField_2(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * value)
	{
		___U3CmetadataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmetadataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582, ___U3CreceiptU3Ek__BackingField_3)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_3() const { return ___U3CreceiptU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_3() { return &___U3CreceiptU3Ek__BackingField_3; }
	inline void set_U3CreceiptU3Ek__BackingField_3(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreceiptU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransactionIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582, ___U3CtransactionIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CtransactionIdU3Ek__BackingField_4() const { return ___U3CtransactionIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CtransactionIdU3Ek__BackingField_4() { return &___U3CtransactionIdU3Ek__BackingField_4; }
	inline void set_U3CtransactionIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CtransactionIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransactionIdU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct  PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<productId>k__BackingField
	String_t* ___U3CproductIdU3Ek__BackingField_0;
	// UnityEngine.Purchasing.PurchaseFailureReason UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<reason>k__BackingField
	int32_t ___U3CreasonU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CproductIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C, ___U3CproductIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CproductIdU3Ek__BackingField_0() const { return ___U3CproductIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CproductIdU3Ek__BackingField_0() { return &___U3CproductIdU3Ek__BackingField_0; }
	inline void set_U3CproductIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CproductIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproductIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreasonU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C, ___U3CreasonU3Ek__BackingField_1)); }
	inline int32_t get_U3CreasonU3Ek__BackingField_1() const { return ___U3CreasonU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CreasonU3Ek__BackingField_1() { return &___U3CreasonU3Ek__BackingField_1; }
	inline void set_U3CreasonU3Ek__BackingField_1(int32_t value)
	{
		___U3CreasonU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C, ___U3CmessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CmessageU3Ek__BackingField_2() const { return ___U3CmessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CmessageU3Ek__BackingField_2() { return &___U3CmessageU3Ek__BackingField_2; }
	inline void set_U3CmessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CmessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmessageU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Purchasing.JSONStore
struct  JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3  : public AbstractStore_t0809CE12BFD8191F29B7B77FC730AE3E8A3C039C
{
public:
	// UnityEngine.Purchasing.StoreCatalogImpl UnityEngine.Purchasing.JSONStore::m_managedStore
	StoreCatalogImpl_tF33B4AB1E4D4A5DF713AA3F94354BAE32CD2F6AB * ___m_managedStore_0;
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.JSONStore::unity
	RuntimeObject* ___unity_1;
	// UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.JSONStore::store
	RuntimeObject* ___store_2;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.JSONStore::m_storeCatalog
	List_1_tFE611315D844DCEE9F38C09B0EADEFEBCCC51DBB * ___m_storeCatalog_3;
	// System.Boolean UnityEngine.Purchasing.JSONStore::isManagedStoreEnabled
	bool ___isManagedStoreEnabled_4;
	// UnityEngine.Purchasing.ProfileData UnityEngine.Purchasing.JSONStore::m_profileData
	ProfileData_t59F197E40BC007C791FD64C4E05735F692CEB96B * ___m_profileData_5;
	// System.Boolean UnityEngine.Purchasing.JSONStore::isRefreshing
	bool ___isRefreshing_6;
	// System.Boolean UnityEngine.Purchasing.JSONStore::isFirstTimeRetrievingProducts
	bool ___isFirstTimeRetrievingProducts_7;
	// System.Action UnityEngine.Purchasing.JSONStore::refreshCallback
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___refreshCallback_8;
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.JSONStore::m_Module
	StandardPurchasingModule_tDAF0BD8C9F2C251F5B2F92CA8CA91B664970422A * ___m_Module_9;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.JSONStore::m_BuilderProducts
	HashSet_1_tE69581B2FBB736F3DE03D470AE10601F835DF863 * ___m_BuilderProducts_10;
	// UnityEngine.ILogger UnityEngine.Purchasing.JSONStore::m_Logger
	RuntimeObject* ___m_Logger_11;
	// UnityEngine.Purchasing.EventQueue UnityEngine.Purchasing.JSONStore::m_EventQueue
	EventQueue_tD991D20FAD4203922A13A31871F6046F925548FA * ___m_EventQueue_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.JSONStore::promoPayload
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___promoPayload_13;
	// System.Boolean UnityEngine.Purchasing.JSONStore::catalogDisabled
	bool ___catalogDisabled_14;
	// System.Boolean UnityEngine.Purchasing.JSONStore::testStore
	bool ___testStore_15;
	// System.String UnityEngine.Purchasing.JSONStore::iapBaseUrl
	String_t* ___iapBaseUrl_16;
	// System.String UnityEngine.Purchasing.JSONStore::eventBaseUrl
	String_t* ___eventBaseUrl_17;
	// UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.JSONStore::lastPurchaseFailureDescription
	PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * ___lastPurchaseFailureDescription_18;
	// UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.JSONStore::_lastPurchaseErrorCode
	int32_t ____lastPurchaseErrorCode_19;
	// System.String UnityEngine.Purchasing.JSONStore::kStoreSpecificErrorCodeKey
	String_t* ___kStoreSpecificErrorCodeKey_20;

public:
	inline static int32_t get_offset_of_m_managedStore_0() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___m_managedStore_0)); }
	inline StoreCatalogImpl_tF33B4AB1E4D4A5DF713AA3F94354BAE32CD2F6AB * get_m_managedStore_0() const { return ___m_managedStore_0; }
	inline StoreCatalogImpl_tF33B4AB1E4D4A5DF713AA3F94354BAE32CD2F6AB ** get_address_of_m_managedStore_0() { return &___m_managedStore_0; }
	inline void set_m_managedStore_0(StoreCatalogImpl_tF33B4AB1E4D4A5DF713AA3F94354BAE32CD2F6AB * value)
	{
		___m_managedStore_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_managedStore_0), (void*)value);
	}

	inline static int32_t get_offset_of_unity_1() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___unity_1)); }
	inline RuntimeObject* get_unity_1() const { return ___unity_1; }
	inline RuntimeObject** get_address_of_unity_1() { return &___unity_1; }
	inline void set_unity_1(RuntimeObject* value)
	{
		___unity_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unity_1), (void*)value);
	}

	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___store_2)); }
	inline RuntimeObject* get_store_2() const { return ___store_2; }
	inline RuntimeObject** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(RuntimeObject* value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_storeCatalog_3() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___m_storeCatalog_3)); }
	inline List_1_tFE611315D844DCEE9F38C09B0EADEFEBCCC51DBB * get_m_storeCatalog_3() const { return ___m_storeCatalog_3; }
	inline List_1_tFE611315D844DCEE9F38C09B0EADEFEBCCC51DBB ** get_address_of_m_storeCatalog_3() { return &___m_storeCatalog_3; }
	inline void set_m_storeCatalog_3(List_1_tFE611315D844DCEE9F38C09B0EADEFEBCCC51DBB * value)
	{
		___m_storeCatalog_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_storeCatalog_3), (void*)value);
	}

	inline static int32_t get_offset_of_isManagedStoreEnabled_4() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___isManagedStoreEnabled_4)); }
	inline bool get_isManagedStoreEnabled_4() const { return ___isManagedStoreEnabled_4; }
	inline bool* get_address_of_isManagedStoreEnabled_4() { return &___isManagedStoreEnabled_4; }
	inline void set_isManagedStoreEnabled_4(bool value)
	{
		___isManagedStoreEnabled_4 = value;
	}

	inline static int32_t get_offset_of_m_profileData_5() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___m_profileData_5)); }
	inline ProfileData_t59F197E40BC007C791FD64C4E05735F692CEB96B * get_m_profileData_5() const { return ___m_profileData_5; }
	inline ProfileData_t59F197E40BC007C791FD64C4E05735F692CEB96B ** get_address_of_m_profileData_5() { return &___m_profileData_5; }
	inline void set_m_profileData_5(ProfileData_t59F197E40BC007C791FD64C4E05735F692CEB96B * value)
	{
		___m_profileData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_profileData_5), (void*)value);
	}

	inline static int32_t get_offset_of_isRefreshing_6() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___isRefreshing_6)); }
	inline bool get_isRefreshing_6() const { return ___isRefreshing_6; }
	inline bool* get_address_of_isRefreshing_6() { return &___isRefreshing_6; }
	inline void set_isRefreshing_6(bool value)
	{
		___isRefreshing_6 = value;
	}

	inline static int32_t get_offset_of_isFirstTimeRetrievingProducts_7() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___isFirstTimeRetrievingProducts_7)); }
	inline bool get_isFirstTimeRetrievingProducts_7() const { return ___isFirstTimeRetrievingProducts_7; }
	inline bool* get_address_of_isFirstTimeRetrievingProducts_7() { return &___isFirstTimeRetrievingProducts_7; }
	inline void set_isFirstTimeRetrievingProducts_7(bool value)
	{
		___isFirstTimeRetrievingProducts_7 = value;
	}

	inline static int32_t get_offset_of_refreshCallback_8() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___refreshCallback_8)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_refreshCallback_8() const { return ___refreshCallback_8; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_refreshCallback_8() { return &___refreshCallback_8; }
	inline void set_refreshCallback_8(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___refreshCallback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refreshCallback_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Module_9() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___m_Module_9)); }
	inline StandardPurchasingModule_tDAF0BD8C9F2C251F5B2F92CA8CA91B664970422A * get_m_Module_9() const { return ___m_Module_9; }
	inline StandardPurchasingModule_tDAF0BD8C9F2C251F5B2F92CA8CA91B664970422A ** get_address_of_m_Module_9() { return &___m_Module_9; }
	inline void set_m_Module_9(StandardPurchasingModule_tDAF0BD8C9F2C251F5B2F92CA8CA91B664970422A * value)
	{
		___m_Module_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Module_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_BuilderProducts_10() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___m_BuilderProducts_10)); }
	inline HashSet_1_tE69581B2FBB736F3DE03D470AE10601F835DF863 * get_m_BuilderProducts_10() const { return ___m_BuilderProducts_10; }
	inline HashSet_1_tE69581B2FBB736F3DE03D470AE10601F835DF863 ** get_address_of_m_BuilderProducts_10() { return &___m_BuilderProducts_10; }
	inline void set_m_BuilderProducts_10(HashSet_1_tE69581B2FBB736F3DE03D470AE10601F835DF863 * value)
	{
		___m_BuilderProducts_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BuilderProducts_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Logger_11() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___m_Logger_11)); }
	inline RuntimeObject* get_m_Logger_11() const { return ___m_Logger_11; }
	inline RuntimeObject** get_address_of_m_Logger_11() { return &___m_Logger_11; }
	inline void set_m_Logger_11(RuntimeObject* value)
	{
		___m_Logger_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventQueue_12() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___m_EventQueue_12)); }
	inline EventQueue_tD991D20FAD4203922A13A31871F6046F925548FA * get_m_EventQueue_12() const { return ___m_EventQueue_12; }
	inline EventQueue_tD991D20FAD4203922A13A31871F6046F925548FA ** get_address_of_m_EventQueue_12() { return &___m_EventQueue_12; }
	inline void set_m_EventQueue_12(EventQueue_tD991D20FAD4203922A13A31871F6046F925548FA * value)
	{
		___m_EventQueue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventQueue_12), (void*)value);
	}

	inline static int32_t get_offset_of_promoPayload_13() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___promoPayload_13)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_promoPayload_13() const { return ___promoPayload_13; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_promoPayload_13() { return &___promoPayload_13; }
	inline void set_promoPayload_13(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___promoPayload_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promoPayload_13), (void*)value);
	}

	inline static int32_t get_offset_of_catalogDisabled_14() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___catalogDisabled_14)); }
	inline bool get_catalogDisabled_14() const { return ___catalogDisabled_14; }
	inline bool* get_address_of_catalogDisabled_14() { return &___catalogDisabled_14; }
	inline void set_catalogDisabled_14(bool value)
	{
		___catalogDisabled_14 = value;
	}

	inline static int32_t get_offset_of_testStore_15() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___testStore_15)); }
	inline bool get_testStore_15() const { return ___testStore_15; }
	inline bool* get_address_of_testStore_15() { return &___testStore_15; }
	inline void set_testStore_15(bool value)
	{
		___testStore_15 = value;
	}

	inline static int32_t get_offset_of_iapBaseUrl_16() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___iapBaseUrl_16)); }
	inline String_t* get_iapBaseUrl_16() const { return ___iapBaseUrl_16; }
	inline String_t** get_address_of_iapBaseUrl_16() { return &___iapBaseUrl_16; }
	inline void set_iapBaseUrl_16(String_t* value)
	{
		___iapBaseUrl_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iapBaseUrl_16), (void*)value);
	}

	inline static int32_t get_offset_of_eventBaseUrl_17() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___eventBaseUrl_17)); }
	inline String_t* get_eventBaseUrl_17() const { return ___eventBaseUrl_17; }
	inline String_t** get_address_of_eventBaseUrl_17() { return &___eventBaseUrl_17; }
	inline void set_eventBaseUrl_17(String_t* value)
	{
		___eventBaseUrl_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventBaseUrl_17), (void*)value);
	}

	inline static int32_t get_offset_of_lastPurchaseFailureDescription_18() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___lastPurchaseFailureDescription_18)); }
	inline PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * get_lastPurchaseFailureDescription_18() const { return ___lastPurchaseFailureDescription_18; }
	inline PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C ** get_address_of_lastPurchaseFailureDescription_18() { return &___lastPurchaseFailureDescription_18; }
	inline void set_lastPurchaseFailureDescription_18(PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * value)
	{
		___lastPurchaseFailureDescription_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastPurchaseFailureDescription_18), (void*)value);
	}

	inline static int32_t get_offset_of__lastPurchaseErrorCode_19() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ____lastPurchaseErrorCode_19)); }
	inline int32_t get__lastPurchaseErrorCode_19() const { return ____lastPurchaseErrorCode_19; }
	inline int32_t* get_address_of__lastPurchaseErrorCode_19() { return &____lastPurchaseErrorCode_19; }
	inline void set__lastPurchaseErrorCode_19(int32_t value)
	{
		____lastPurchaseErrorCode_19 = value;
	}

	inline static int32_t get_offset_of_kStoreSpecificErrorCodeKey_20() { return static_cast<int32_t>(offsetof(JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3, ___kStoreSpecificErrorCodeKey_20)); }
	inline String_t* get_kStoreSpecificErrorCodeKey_20() const { return ___kStoreSpecificErrorCodeKey_20; }
	inline String_t** get_address_of_kStoreSpecificErrorCodeKey_20() { return &___kStoreSpecificErrorCodeKey_20; }
	inline void set_kStoreSpecificErrorCodeKey_20(String_t* value)
	{
		___kStoreSpecificErrorCodeKey_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kStoreSpecificErrorCodeKey_20), (void*)value);
	}
};


// UnityEngine.Purchasing.LocalizedProductDescription
struct  LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.TranslationLocale UnityEngine.Purchasing.LocalizedProductDescription::googleLocale
	int32_t ___googleLocale_0;
	// System.String UnityEngine.Purchasing.LocalizedProductDescription::title
	String_t* ___title_1;
	// System.String UnityEngine.Purchasing.LocalizedProductDescription::description
	String_t* ___description_2;

public:
	inline static int32_t get_offset_of_googleLocale_0() { return static_cast<int32_t>(offsetof(LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1, ___googleLocale_0)); }
	inline int32_t get_googleLocale_0() const { return ___googleLocale_0; }
	inline int32_t* get_address_of_googleLocale_0() { return &___googleLocale_0; }
	inline void set_googleLocale_0(int32_t value)
	{
		___googleLocale_0 = value;
	}

	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_1), (void*)value);
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductCatalogItem
struct  ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductCatalogItem::id
	String_t* ___id_0;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductCatalogItem::type
	int32_t ___type_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::storeIDs
	List_1_tE827FDB9C085BDBF2BD397CEC9BC2DAE20C9AB01 * ___storeIDs_2;
	// UnityEngine.Purchasing.LocalizedProductDescription UnityEngine.Purchasing.ProductCatalogItem::defaultDescription
	LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * ___defaultDescription_3;
	// System.Int32 UnityEngine.Purchasing.ProductCatalogItem::applePriceTier
	int32_t ___applePriceTier_4;
	// System.Int32 UnityEngine.Purchasing.ProductCatalogItem::xiaomiPriceTier
	int32_t ___xiaomiPriceTier_5;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::googlePrice
	Price_t5D55521A645803976E0809F8941E8317C80E129C * ___googlePrice_6;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription> UnityEngine.Purchasing.ProductCatalogItem::descriptions
	List_1_t4A5E4DB145DD9798C5FEB91EE0F1A7C77E1F43EB * ___descriptions_7;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::udpPrice
	Price_t5D55521A645803976E0809F8941E8317C80E129C * ___udpPrice_8;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::payouts
	List_1_t6EBBFBE956641E9855F6E08AA6671EDB7E9F0B2B * ___payouts_9;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_storeIDs_2() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D, ___storeIDs_2)); }
	inline List_1_tE827FDB9C085BDBF2BD397CEC9BC2DAE20C9AB01 * get_storeIDs_2() const { return ___storeIDs_2; }
	inline List_1_tE827FDB9C085BDBF2BD397CEC9BC2DAE20C9AB01 ** get_address_of_storeIDs_2() { return &___storeIDs_2; }
	inline void set_storeIDs_2(List_1_tE827FDB9C085BDBF2BD397CEC9BC2DAE20C9AB01 * value)
	{
		___storeIDs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storeIDs_2), (void*)value);
	}

	inline static int32_t get_offset_of_defaultDescription_3() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D, ___defaultDescription_3)); }
	inline LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * get_defaultDescription_3() const { return ___defaultDescription_3; }
	inline LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 ** get_address_of_defaultDescription_3() { return &___defaultDescription_3; }
	inline void set_defaultDescription_3(LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * value)
	{
		___defaultDescription_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultDescription_3), (void*)value);
	}

	inline static int32_t get_offset_of_applePriceTier_4() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D, ___applePriceTier_4)); }
	inline int32_t get_applePriceTier_4() const { return ___applePriceTier_4; }
	inline int32_t* get_address_of_applePriceTier_4() { return &___applePriceTier_4; }
	inline void set_applePriceTier_4(int32_t value)
	{
		___applePriceTier_4 = value;
	}

	inline static int32_t get_offset_of_xiaomiPriceTier_5() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D, ___xiaomiPriceTier_5)); }
	inline int32_t get_xiaomiPriceTier_5() const { return ___xiaomiPriceTier_5; }
	inline int32_t* get_address_of_xiaomiPriceTier_5() { return &___xiaomiPriceTier_5; }
	inline void set_xiaomiPriceTier_5(int32_t value)
	{
		___xiaomiPriceTier_5 = value;
	}

	inline static int32_t get_offset_of_googlePrice_6() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D, ___googlePrice_6)); }
	inline Price_t5D55521A645803976E0809F8941E8317C80E129C * get_googlePrice_6() const { return ___googlePrice_6; }
	inline Price_t5D55521A645803976E0809F8941E8317C80E129C ** get_address_of_googlePrice_6() { return &___googlePrice_6; }
	inline void set_googlePrice_6(Price_t5D55521A645803976E0809F8941E8317C80E129C * value)
	{
		___googlePrice_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___googlePrice_6), (void*)value);
	}

	inline static int32_t get_offset_of_descriptions_7() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D, ___descriptions_7)); }
	inline List_1_t4A5E4DB145DD9798C5FEB91EE0F1A7C77E1F43EB * get_descriptions_7() const { return ___descriptions_7; }
	inline List_1_t4A5E4DB145DD9798C5FEB91EE0F1A7C77E1F43EB ** get_address_of_descriptions_7() { return &___descriptions_7; }
	inline void set_descriptions_7(List_1_t4A5E4DB145DD9798C5FEB91EE0F1A7C77E1F43EB * value)
	{
		___descriptions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptions_7), (void*)value);
	}

	inline static int32_t get_offset_of_udpPrice_8() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D, ___udpPrice_8)); }
	inline Price_t5D55521A645803976E0809F8941E8317C80E129C * get_udpPrice_8() const { return ___udpPrice_8; }
	inline Price_t5D55521A645803976E0809F8941E8317C80E129C ** get_address_of_udpPrice_8() { return &___udpPrice_8; }
	inline void set_udpPrice_8(Price_t5D55521A645803976E0809F8941E8317C80E129C * value)
	{
		___udpPrice_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___udpPrice_8), (void*)value);
	}

	inline static int32_t get_offset_of_payouts_9() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D, ___payouts_9)); }
	inline List_1_t6EBBFBE956641E9855F6E08AA6671EDB7E9F0B2B * get_payouts_9() const { return ___payouts_9; }
	inline List_1_t6EBBFBE956641E9855F6E08AA6671EDB7E9F0B2B ** get_address_of_payouts_9() { return &___payouts_9; }
	inline void set_payouts_9(List_1_t6EBBFBE956641E9855F6E08AA6671EDB7E9F0B2B * value)
	{
		___payouts_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payouts_9), (void*)value);
	}
};


// UnityEngine.Purchasing.ProductDefinition
struct  ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductDefinition::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductDefinition::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_1;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Purchasing.ProductDefinition::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition> UnityEngine.Purchasing.ProductDefinition::m_Payouts
	List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A * ___m_Payouts_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___U3CstoreSpecificIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_1() const { return ___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return &___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstoreSpecificIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___U3CtypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CenabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___U3CenabledU3Ek__BackingField_3)); }
	inline bool get_U3CenabledU3Ek__BackingField_3() const { return ___U3CenabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CenabledU3Ek__BackingField_3() { return &___U3CenabledU3Ek__BackingField_3; }
	inline void set_U3CenabledU3Ek__BackingField_3(bool value)
	{
		___U3CenabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_Payouts_4() { return static_cast<int32_t>(offsetof(ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10, ___m_Payouts_4)); }
	inline List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A * get_m_Payouts_4() const { return ___m_Payouts_4; }
	inline List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A ** get_address_of_m_Payouts_4() { return &___m_Payouts_4; }
	inline void set_m_Payouts_4(List_1_t3BB189095B85DE5B71713AA7779513A84EB7EB9A * value)
	{
		___m_Payouts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Payouts_4), (void*)value);
	}
};


// UnityEngine.Purchasing.ReceiptParserException
struct  ReceiptParserException_t4EC712CC520D73254E440FE48C01F4DFE1D42EF8  : public Exception_t
{
public:

public:
};


// UnityEngine.Purchasing.SubscriptionInfo
struct  SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_subscribed
	int32_t ___is_subscribed_0;
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_expired
	int32_t ___is_expired_1;
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_cancelled
	int32_t ___is_cancelled_2;
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_free_trial
	int32_t ___is_free_trial_3;
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_auto_renewing
	int32_t ___is_auto_renewing_4;
	// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::is_introductory_price_period
	int32_t ___is_introductory_price_period_5;
	// System.String UnityEngine.Purchasing.SubscriptionInfo::productId
	String_t* ___productId_6;
	// System.DateTime UnityEngine.Purchasing.SubscriptionInfo::purchaseDate
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___purchaseDate_7;
	// System.DateTime UnityEngine.Purchasing.SubscriptionInfo::subscriptionExpireDate
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___subscriptionExpireDate_8;
	// System.DateTime UnityEngine.Purchasing.SubscriptionInfo::subscriptionCancelDate
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___subscriptionCancelDate_9;
	// System.TimeSpan UnityEngine.Purchasing.SubscriptionInfo::remainedTime
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___remainedTime_10;
	// System.String UnityEngine.Purchasing.SubscriptionInfo::introductory_price
	String_t* ___introductory_price_11;
	// System.TimeSpan UnityEngine.Purchasing.SubscriptionInfo::introductory_price_period
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___introductory_price_period_12;
	// System.Int64 UnityEngine.Purchasing.SubscriptionInfo::introductory_price_cycles
	int64_t ___introductory_price_cycles_13;

public:
	inline static int32_t get_offset_of_is_subscribed_0() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133, ___is_subscribed_0)); }
	inline int32_t get_is_subscribed_0() const { return ___is_subscribed_0; }
	inline int32_t* get_address_of_is_subscribed_0() { return &___is_subscribed_0; }
	inline void set_is_subscribed_0(int32_t value)
	{
		___is_subscribed_0 = value;
	}

	inline static int32_t get_offset_of_is_expired_1() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133, ___is_expired_1)); }
	inline int32_t get_is_expired_1() const { return ___is_expired_1; }
	inline int32_t* get_address_of_is_expired_1() { return &___is_expired_1; }
	inline void set_is_expired_1(int32_t value)
	{
		___is_expired_1 = value;
	}

	inline static int32_t get_offset_of_is_cancelled_2() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133, ___is_cancelled_2)); }
	inline int32_t get_is_cancelled_2() const { return ___is_cancelled_2; }
	inline int32_t* get_address_of_is_cancelled_2() { return &___is_cancelled_2; }
	inline void set_is_cancelled_2(int32_t value)
	{
		___is_cancelled_2 = value;
	}

	inline static int32_t get_offset_of_is_free_trial_3() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133, ___is_free_trial_3)); }
	inline int32_t get_is_free_trial_3() const { return ___is_free_trial_3; }
	inline int32_t* get_address_of_is_free_trial_3() { return &___is_free_trial_3; }
	inline void set_is_free_trial_3(int32_t value)
	{
		___is_free_trial_3 = value;
	}

	inline static int32_t get_offset_of_is_auto_renewing_4() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133, ___is_auto_renewing_4)); }
	inline int32_t get_is_auto_renewing_4() const { return ___is_auto_renewing_4; }
	inline int32_t* get_address_of_is_auto_renewing_4() { return &___is_auto_renewing_4; }
	inline void set_is_auto_renewing_4(int32_t value)
	{
		___is_auto_renewing_4 = value;
	}

	inline static int32_t get_offset_of_is_introductory_price_period_5() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133, ___is_introductory_price_period_5)); }
	inline int32_t get_is_introductory_price_period_5() const { return ___is_introductory_price_period_5; }
	inline int32_t* get_address_of_is_introductory_price_period_5() { return &___is_introductory_price_period_5; }
	inline void set_is_introductory_price_period_5(int32_t value)
	{
		___is_introductory_price_period_5 = value;
	}

	inline static int32_t get_offset_of_productId_6() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133, ___productId_6)); }
	inline String_t* get_productId_6() const { return ___productId_6; }
	inline String_t** get_address_of_productId_6() { return &___productId_6; }
	inline void set_productId_6(String_t* value)
	{
		___productId_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___productId_6), (void*)value);
	}

	inline static int32_t get_offset_of_purchaseDate_7() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133, ___purchaseDate_7)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_purchaseDate_7() const { return ___purchaseDate_7; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_purchaseDate_7() { return &___purchaseDate_7; }
	inline void set_purchaseDate_7(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___purchaseDate_7 = value;
	}

	inline static int32_t get_offset_of_subscriptionExpireDate_8() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133, ___subscriptionExpireDate_8)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_subscriptionExpireDate_8() const { return ___subscriptionExpireDate_8; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_subscriptionExpireDate_8() { return &___subscriptionExpireDate_8; }
	inline void set_subscriptionExpireDate_8(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___subscriptionExpireDate_8 = value;
	}

	inline static int32_t get_offset_of_subscriptionCancelDate_9() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133, ___subscriptionCancelDate_9)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_subscriptionCancelDate_9() const { return ___subscriptionCancelDate_9; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_subscriptionCancelDate_9() { return &___subscriptionCancelDate_9; }
	inline void set_subscriptionCancelDate_9(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___subscriptionCancelDate_9 = value;
	}

	inline static int32_t get_offset_of_remainedTime_10() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133, ___remainedTime_10)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_remainedTime_10() const { return ___remainedTime_10; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_remainedTime_10() { return &___remainedTime_10; }
	inline void set_remainedTime_10(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___remainedTime_10 = value;
	}

	inline static int32_t get_offset_of_introductory_price_11() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133, ___introductory_price_11)); }
	inline String_t* get_introductory_price_11() const { return ___introductory_price_11; }
	inline String_t** get_address_of_introductory_price_11() { return &___introductory_price_11; }
	inline void set_introductory_price_11(String_t* value)
	{
		___introductory_price_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___introductory_price_11), (void*)value);
	}

	inline static int32_t get_offset_of_introductory_price_period_12() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133, ___introductory_price_period_12)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_introductory_price_period_12() const { return ___introductory_price_period_12; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_introductory_price_period_12() { return &___introductory_price_period_12; }
	inline void set_introductory_price_period_12(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___introductory_price_period_12 = value;
	}

	inline static int32_t get_offset_of_introductory_price_cycles_13() { return static_cast<int32_t>(offsetof(SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133, ___introductory_price_cycles_13)); }
	inline int64_t get_introductory_price_cycles_13() const { return ___introductory_price_cycles_13; }
	inline int64_t* get_address_of_introductory_price_cycles_13() { return &___introductory_price_cycles_13; }
	inline void set_introductory_price_cycles_13(int64_t value)
	{
		___introductory_price_cycles_13 = value;
	}
};


// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,System.Int32>
struct  Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,System.String>
struct  Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Boolean,System.String,System.String>
struct  Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean>
struct  Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String>
struct  Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>
struct  Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E  : public MulticastDelegate_t
{
public:

public:
};


// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Int32>
struct  UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Purchasing.FakeStore
struct  FakeStore_t3C59ECE7995BF7D5967D562BF25F0413F7CA790D  : public JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3
{
public:
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.FakeStore::m_Biller
	RuntimeObject* ___m_Biller_21;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Purchasing.FakeStore::m_PurchasedProducts
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___m_PurchasedProducts_22;
	// System.Boolean UnityEngine.Purchasing.FakeStore::purchaseCalled
	bool ___purchaseCalled_23;
	// System.String UnityEngine.Purchasing.FakeStore::<unavailableProductId>k__BackingField
	String_t* ___U3CunavailableProductIdU3Ek__BackingField_24;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.FakeStore::UIMode
	int32_t ___UIMode_25;

public:
	inline static int32_t get_offset_of_m_Biller_21() { return static_cast<int32_t>(offsetof(FakeStore_t3C59ECE7995BF7D5967D562BF25F0413F7CA790D, ___m_Biller_21)); }
	inline RuntimeObject* get_m_Biller_21() const { return ___m_Biller_21; }
	inline RuntimeObject** get_address_of_m_Biller_21() { return &___m_Biller_21; }
	inline void set_m_Biller_21(RuntimeObject* value)
	{
		___m_Biller_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Biller_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_PurchasedProducts_22() { return static_cast<int32_t>(offsetof(FakeStore_t3C59ECE7995BF7D5967D562BF25F0413F7CA790D, ___m_PurchasedProducts_22)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_m_PurchasedProducts_22() const { return ___m_PurchasedProducts_22; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_m_PurchasedProducts_22() { return &___m_PurchasedProducts_22; }
	inline void set_m_PurchasedProducts_22(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___m_PurchasedProducts_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PurchasedProducts_22), (void*)value);
	}

	inline static int32_t get_offset_of_purchaseCalled_23() { return static_cast<int32_t>(offsetof(FakeStore_t3C59ECE7995BF7D5967D562BF25F0413F7CA790D, ___purchaseCalled_23)); }
	inline bool get_purchaseCalled_23() const { return ___purchaseCalled_23; }
	inline bool* get_address_of_purchaseCalled_23() { return &___purchaseCalled_23; }
	inline void set_purchaseCalled_23(bool value)
	{
		___purchaseCalled_23 = value;
	}

	inline static int32_t get_offset_of_U3CunavailableProductIdU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(FakeStore_t3C59ECE7995BF7D5967D562BF25F0413F7CA790D, ___U3CunavailableProductIdU3Ek__BackingField_24)); }
	inline String_t* get_U3CunavailableProductIdU3Ek__BackingField_24() const { return ___U3CunavailableProductIdU3Ek__BackingField_24; }
	inline String_t** get_address_of_U3CunavailableProductIdU3Ek__BackingField_24() { return &___U3CunavailableProductIdU3Ek__BackingField_24; }
	inline void set_U3CunavailableProductIdU3Ek__BackingField_24(String_t* value)
	{
		___U3CunavailableProductIdU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CunavailableProductIdU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_UIMode_25() { return static_cast<int32_t>(offsetof(FakeStore_t3C59ECE7995BF7D5967D562BF25F0413F7CA790D, ___UIMode_25)); }
	inline int32_t get_UIMode_25() const { return ___UIMode_25; }
	inline int32_t* get_address_of_UIMode_25() { return &___UIMode_25; }
	inline void set_UIMode_25(int32_t value)
	{
		___UIMode_25 = value;
	}
};


// UnityEngine.Purchasing.InvalidProductTypeException
struct  InvalidProductTypeException_t181DA391DEF28CE27D63CE5B99F1F05D8EA29874  : public ReceiptParserException_t4EC712CC520D73254E440FE48C01F4DFE1D42EF8
{
public:

public:
};


// UnityEngine.Purchasing.TizenStoreImpl
struct  TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F  : public JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3
{
public:
	// UnityEngine.Purchasing.INativeTizenStore UnityEngine.Purchasing.TizenStoreImpl::m_Native
	RuntimeObject* ___m_Native_22;

public:
	inline static int32_t get_offset_of_m_Native_22() { return static_cast<int32_t>(offsetof(TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F, ___m_Native_22)); }
	inline RuntimeObject* get_m_Native_22() const { return ___m_Native_22; }
	inline RuntimeObject** get_address_of_m_Native_22() { return &___m_Native_22; }
	inline void set_m_Native_22(RuntimeObject* value)
	{
		___m_Native_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Native_22), (void*)value);
	}
};

struct TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F_StaticFields
{
public:
	// UnityEngine.Purchasing.TizenStoreImpl UnityEngine.Purchasing.TizenStoreImpl::instance
	TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F * ___instance_21;

public:
	inline static int32_t get_offset_of_instance_21() { return static_cast<int32_t>(offsetof(TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F_StaticFields, ___instance_21)); }
	inline TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F * get_instance_21() const { return ___instance_21; }
	inline TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F ** get_address_of_instance_21() { return &___instance_21; }
	inline void set_instance_21(TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F * value)
	{
		___instance_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_21), (void*)value);
	}
};


// UnityEngine.Purchasing.UDPImpl
struct  UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76  : public JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3
{
public:
	// UnityEngine.Purchasing.INativeUDPStore UnityEngine.Purchasing.UDPImpl::m_Bindings
	RuntimeObject* ___m_Bindings_21;
	// UnityEngine.UDP.UserInfo UnityEngine.Purchasing.UDPImpl::m_UserInfo
	UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD * ___m_UserInfo_22;
	// System.String UnityEngine.Purchasing.UDPImpl::m_LastInitError
	String_t* ___m_LastInitError_23;
	// System.Boolean UnityEngine.Purchasing.UDPImpl::m_Initialized
	bool ___m_Initialized_24;

public:
	inline static int32_t get_offset_of_m_Bindings_21() { return static_cast<int32_t>(offsetof(UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76, ___m_Bindings_21)); }
	inline RuntimeObject* get_m_Bindings_21() const { return ___m_Bindings_21; }
	inline RuntimeObject** get_address_of_m_Bindings_21() { return &___m_Bindings_21; }
	inline void set_m_Bindings_21(RuntimeObject* value)
	{
		___m_Bindings_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_UserInfo_22() { return static_cast<int32_t>(offsetof(UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76, ___m_UserInfo_22)); }
	inline UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD * get_m_UserInfo_22() const { return ___m_UserInfo_22; }
	inline UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD ** get_address_of_m_UserInfo_22() { return &___m_UserInfo_22; }
	inline void set_m_UserInfo_22(UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD * value)
	{
		___m_UserInfo_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UserInfo_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastInitError_23() { return static_cast<int32_t>(offsetof(UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76, ___m_LastInitError_23)); }
	inline String_t* get_m_LastInitError_23() const { return ___m_LastInitError_23; }
	inline String_t** get_address_of_m_LastInitError_23() { return &___m_LastInitError_23; }
	inline void set_m_LastInitError_23(String_t* value)
	{
		___m_LastInitError_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastInitError_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_Initialized_24() { return static_cast<int32_t>(offsetof(UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76, ___m_Initialized_24)); }
	inline bool get_m_Initialized_24() const { return ___m_Initialized_24; }
	inline bool* get_address_of_m_Initialized_24() { return &___m_Initialized_24; }
	inline void set_m_Initialized_24(bool value)
	{
		___m_Initialized_24 = value;
	}
};


// UnityEngine.Purchasing.UnityChannelImpl
struct  UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616  : public JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3
{
public:
	// UnityEngine.Purchasing.INativeUnityChannelStore UnityEngine.Purchasing.UnityChannelImpl::m_Bindings
	RuntimeObject* ___m_Bindings_21;
	// System.String UnityEngine.Purchasing.UnityChannelImpl::m_LastPurchaseError
	String_t* ___m_LastPurchaseError_22;
	// System.Boolean UnityEngine.Purchasing.UnityChannelImpl::<fetchReceiptPayloadOnPurchase>k__BackingField
	bool ___U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_m_Bindings_21() { return static_cast<int32_t>(offsetof(UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616, ___m_Bindings_21)); }
	inline RuntimeObject* get_m_Bindings_21() const { return ___m_Bindings_21; }
	inline RuntimeObject** get_address_of_m_Bindings_21() { return &___m_Bindings_21; }
	inline void set_m_Bindings_21(RuntimeObject* value)
	{
		___m_Bindings_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastPurchaseError_22() { return static_cast<int32_t>(offsetof(UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616, ___m_LastPurchaseError_22)); }
	inline String_t* get_m_LastPurchaseError_22() const { return ___m_LastPurchaseError_22; }
	inline String_t** get_address_of_m_LastPurchaseError_22() { return &___m_LastPurchaseError_22; }
	inline void set_m_LastPurchaseError_22(String_t* value)
	{
		___m_LastPurchaseError_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastPurchaseError_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616, ___U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23)); }
	inline bool get_U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23() const { return ___U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23() { return &___U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23; }
	inline void set_U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23(bool value)
	{
		___U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.Purchasing.UnityNativePurchasingCallback
struct  UnityNativePurchasingCallback_t58A016E25D4C5E8E9C7709A2EE87766ED4D02136  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Canvas
struct  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields
{
public:
	// UnityEngine.Canvas_WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_4), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Purchasing.UIFakeStore
struct  UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C  : public FakeStore_t3C59ECE7995BF7D5967D562BF25F0413F7CA790D
{
public:
	// UnityEngine.Purchasing.UIFakeStore_DialogRequest UnityEngine.Purchasing.UIFakeStore::m_CurrentDialog
	DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * ___m_CurrentDialog_26;
	// System.Int32 UnityEngine.Purchasing.UIFakeStore::m_LastSelectedDropdownIndex
	int32_t ___m_LastSelectedDropdownIndex_27;
	// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::UIFakeStoreCanvasPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___UIFakeStoreCanvasPrefab_28;
	// UnityEngine.Canvas UnityEngine.Purchasing.UIFakeStore::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_29;
	// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::m_EventSystem
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_EventSystem_30;
	// System.String UnityEngine.Purchasing.UIFakeStore::m_ParentGameObjectPath
	String_t* ___m_ParentGameObjectPath_31;

public:
	inline static int32_t get_offset_of_m_CurrentDialog_26() { return static_cast<int32_t>(offsetof(UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C, ___m_CurrentDialog_26)); }
	inline DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * get_m_CurrentDialog_26() const { return ___m_CurrentDialog_26; }
	inline DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 ** get_address_of_m_CurrentDialog_26() { return &___m_CurrentDialog_26; }
	inline void set_m_CurrentDialog_26(DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * value)
	{
		___m_CurrentDialog_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentDialog_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastSelectedDropdownIndex_27() { return static_cast<int32_t>(offsetof(UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C, ___m_LastSelectedDropdownIndex_27)); }
	inline int32_t get_m_LastSelectedDropdownIndex_27() const { return ___m_LastSelectedDropdownIndex_27; }
	inline int32_t* get_address_of_m_LastSelectedDropdownIndex_27() { return &___m_LastSelectedDropdownIndex_27; }
	inline void set_m_LastSelectedDropdownIndex_27(int32_t value)
	{
		___m_LastSelectedDropdownIndex_27 = value;
	}

	inline static int32_t get_offset_of_UIFakeStoreCanvasPrefab_28() { return static_cast<int32_t>(offsetof(UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C, ___UIFakeStoreCanvasPrefab_28)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_UIFakeStoreCanvasPrefab_28() const { return ___UIFakeStoreCanvasPrefab_28; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_UIFakeStoreCanvasPrefab_28() { return &___UIFakeStoreCanvasPrefab_28; }
	inline void set_UIFakeStoreCanvasPrefab_28(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___UIFakeStoreCanvasPrefab_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UIFakeStoreCanvasPrefab_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_29() { return static_cast<int32_t>(offsetof(UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C, ___m_Canvas_29)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_29() const { return ___m_Canvas_29; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_29() { return &___m_Canvas_29; }
	inline void set_m_Canvas_29(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_30() { return static_cast<int32_t>(offsetof(UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C, ___m_EventSystem_30)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_EventSystem_30() const { return ___m_EventSystem_30; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_EventSystem_30() { return &___m_EventSystem_30; }
	inline void set_m_EventSystem_30(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_EventSystem_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentGameObjectPath_31() { return static_cast<int32_t>(offsetof(UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C, ___m_ParentGameObjectPath_31)); }
	inline String_t* get_m_ParentGameObjectPath_31() const { return ___m_ParentGameObjectPath_31; }
	inline String_t** get_address_of_m_ParentGameObjectPath_31() { return &___m_ParentGameObjectPath_31; }
	inline void set_m_ParentGameObjectPath_31(String_t* value)
	{
		___m_ParentGameObjectPath_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentGameObjectPath_31), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier
struct  LifecycleNotifier_t7BC53FAB36050746A837703F74A7CF3B63A075DE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Action UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier::OnDestroyCallback
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___OnDestroyCallback_4;

public:
	inline static int32_t get_offset_of_OnDestroyCallback_4() { return static_cast<int32_t>(offsetof(LifecycleNotifier_t7BC53FAB36050746A837703F74A7CF3B63A075DE, ___OnDestroyCallback_4)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_OnDestroyCallback_4() const { return ___OnDestroyCallback_4; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_OnDestroyCallback_4() { return &___OnDestroyCallback_4; }
	inline void set_OnDestroyCallback_4(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___OnDestroyCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDestroyCallback_4), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t6684191CFC2ADB0DD66DD195174D92F017862442 * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_RaycastResultCache_4)); }
	inline List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_AxisEventData_5)); }
	inline AxisEventData_t6684191CFC2ADB0DD66DD195174D92F017862442 * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t6684191CFC2ADB0DD66DD195174D92F017862442 ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t6684191CFC2ADB0DD66DD195174D92F017862442 * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_EventSystem_6)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_BaseEventData_7)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_InputOverride_8)); }
	inline BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939, ___m_DefaultInput_9)); }
	inline BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SystemInputModules_4)); }
	inline List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_FirstSelected_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentSelected_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DummyData_13)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Boolean UnityEngine.UI.Selectable::m_WillRemove
	bool ___m_WillRemove_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_WillRemove_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_WillRemove_15)); }
	inline bool get_m_WillRemove_15() const { return ___m_WillRemove_15; }
	inline bool* get_address_of_m_WillRemove_15() { return &___m_WillRemove_15; }
	inline void set_m_WillRemove_15(bool value)
	{
		___m_WillRemove_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
	// System.Boolean UnityEngine.UI.Selectable::s_IsDirty
	bool ___s_IsDirty_6;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}

	inline static int32_t get_offset_of_s_IsDirty_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_IsDirty_6)); }
	inline bool get_s_IsDirty_6() const { return ___s_IsDirty_6; }
	inline bool* get_address_of_s_IsDirty_6() { return &___s_IsDirty_6; }
	inline void set_s_IsDirty_6(bool value)
	{
		___s_IsDirty_6 = value;
	}
};


// UnityEngine.EventSystems.PointerInputModule
struct  PointerInputModule_tE8CB9BDC38DAF3162843E22541093DADDE1BB19C  : public BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t9F401E8FAE13945DFBD264E317248AB9CC9C36CA * ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule_MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7 * ___m_MouseState_15;

public:
	inline static int32_t get_offset_of_m_PointerData_14() { return static_cast<int32_t>(offsetof(PointerInputModule_tE8CB9BDC38DAF3162843E22541093DADDE1BB19C, ___m_PointerData_14)); }
	inline Dictionary_2_t9F401E8FAE13945DFBD264E317248AB9CC9C36CA * get_m_PointerData_14() const { return ___m_PointerData_14; }
	inline Dictionary_2_t9F401E8FAE13945DFBD264E317248AB9CC9C36CA ** get_address_of_m_PointerData_14() { return &___m_PointerData_14; }
	inline void set_m_PointerData_14(Dictionary_2_t9F401E8FAE13945DFBD264E317248AB9CC9C36CA * value)
	{
		___m_PointerData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerData_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseState_15() { return static_cast<int32_t>(offsetof(PointerInputModule_tE8CB9BDC38DAF3162843E22541093DADDE1BB19C, ___m_MouseState_15)); }
	inline MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7 * get_m_MouseState_15() const { return ___m_MouseState_15; }
	inline MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7 ** get_address_of_m_MouseState_15() { return &___m_MouseState_15; }
	inline void set_m_MouseState_15(MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7 * value)
	{
		___m_MouseState_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseState_15), (void*)value);
	}
};


// UnityEngine.UI.Button
struct  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button_ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_20)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.Dropdown
struct  Dropdown_tF6331401084B1213CAB10587A6EC81461501930F  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown_OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_tE70C398434952658ED61EEEDC56766239E2C856D * ___m_Options_26;
	// UnityEngine.UI.Dropdown_DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown_DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t9FC1E3F4F8E4068616D377F61C3B6D6DBA4DCF9E * ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;

public:
	inline static int32_t get_offset_of_m_Template_20() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_Template_20)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_Template_20() const { return ___m_Template_20; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_Template_20() { return &___m_Template_20; }
	inline void set_m_Template_20(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_Template_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Template_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionText_21() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_CaptionText_21)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_m_CaptionText_21() const { return ___m_CaptionText_21; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_m_CaptionText_21() { return &___m_CaptionText_21; }
	inline void set_m_CaptionText_21(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___m_CaptionText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionText_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_22() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_CaptionImage_22)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_m_CaptionImage_22() const { return ___m_CaptionImage_22; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_m_CaptionImage_22() { return &___m_CaptionImage_22; }
	inline void set_m_CaptionImage_22(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___m_CaptionImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionImage_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemText_23() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_ItemText_23)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_m_ItemText_23() const { return ___m_ItemText_23; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_m_ItemText_23() { return &___m_ItemText_23; }
	inline void set_m_ItemText_23(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___m_ItemText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemImage_24() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_ItemImage_24)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_m_ItemImage_24() const { return ___m_ItemImage_24; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_m_ItemImage_24() { return &___m_ItemImage_24; }
	inline void set_m_ItemImage_24(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___m_ItemImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_Value_25)); }
	inline int32_t get_m_Value_25() const { return ___m_Value_25; }
	inline int32_t* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(int32_t value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_Options_26() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_Options_26)); }
	inline OptionDataList_tE70C398434952658ED61EEEDC56766239E2C856D * get_m_Options_26() const { return ___m_Options_26; }
	inline OptionDataList_tE70C398434952658ED61EEEDC56766239E2C856D ** get_address_of_m_Options_26() { return &___m_Options_26; }
	inline void set_m_Options_26(OptionDataList_tE70C398434952658ED61EEEDC56766239E2C856D * value)
	{
		___m_Options_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_OnValueChanged_27)); }
	inline DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaFadeSpeed_28() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_AlphaFadeSpeed_28)); }
	inline float get_m_AlphaFadeSpeed_28() const { return ___m_AlphaFadeSpeed_28; }
	inline float* get_address_of_m_AlphaFadeSpeed_28() { return &___m_AlphaFadeSpeed_28; }
	inline void set_m_AlphaFadeSpeed_28(float value)
	{
		___m_AlphaFadeSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_Dropdown_29() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_Dropdown_29)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_Dropdown_29() const { return ___m_Dropdown_29; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_Dropdown_29() { return &___m_Dropdown_29; }
	inline void set_m_Dropdown_29(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_Dropdown_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dropdown_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Blocker_30() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_Blocker_30)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_Blocker_30() const { return ___m_Blocker_30; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_Blocker_30() { return &___m_Blocker_30; }
	inline void set_m_Blocker_30(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_Blocker_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Blocker_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_Items_31() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_Items_31)); }
	inline List_1_t9FC1E3F4F8E4068616D377F61C3B6D6DBA4DCF9E * get_m_Items_31() const { return ___m_Items_31; }
	inline List_1_t9FC1E3F4F8E4068616D377F61C3B6D6DBA4DCF9E ** get_address_of_m_Items_31() { return &___m_Items_31; }
	inline void set_m_Items_31(List_1_t9FC1E3F4F8E4068616D377F61C3B6D6DBA4DCF9E * value)
	{
		___m_Items_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_32() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___m_AlphaTweenRunner_32)); }
	inline TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * get_m_AlphaTweenRunner_32() const { return ___m_AlphaTweenRunner_32; }
	inline TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF ** get_address_of_m_AlphaTweenRunner_32() { return &___m_AlphaTweenRunner_32; }
	inline void set_m_AlphaTweenRunner_32(TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * value)
	{
		___m_AlphaTweenRunner_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlphaTweenRunner_32), (void*)value);
	}

	inline static int32_t get_offset_of_validTemplate_33() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F, ___validTemplate_33)); }
	inline bool get_validTemplate_33() const { return ___validTemplate_33; }
	inline bool* get_address_of_validTemplate_33() { return &___validTemplate_33; }
	inline void set_validTemplate_33(bool value)
	{
		___validTemplate_33 = value;
	}
};

struct Dropdown_tF6331401084B1213CAB10587A6EC81461501930F_StaticFields
{
public:
	// UnityEngine.UI.Dropdown_OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 * ___s_NoOptionData_34;

public:
	inline static int32_t get_offset_of_s_NoOptionData_34() { return static_cast<int32_t>(offsetof(Dropdown_tF6331401084B1213CAB10587A6EC81461501930F_StaticFields, ___s_NoOptionData_34)); }
	inline OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 * get_s_NoOptionData_34() const { return ___s_NoOptionData_34; }
	inline OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 ** get_address_of_s_NoOptionData_34() { return &___s_NoOptionData_34; }
	inline void set_s_NoOptionData_34(OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 * value)
	{
		___s_NoOptionData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NoOptionData_34), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.EventSystems.StandaloneInputModule
struct  StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5  : public PointerInputModule_tE8CB9BDC38DAF3162843E22541093DADDE1BB19C
{
public:
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;

public:
	inline static int32_t get_offset_of_m_PrevActionTime_16() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_PrevActionTime_16)); }
	inline float get_m_PrevActionTime_16() const { return ___m_PrevActionTime_16; }
	inline float* get_address_of_m_PrevActionTime_16() { return &___m_PrevActionTime_16; }
	inline void set_m_PrevActionTime_16(float value)
	{
		___m_PrevActionTime_16 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_17() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_LastMoveVector_17)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_LastMoveVector_17() const { return ___m_LastMoveVector_17; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_LastMoveVector_17() { return &___m_LastMoveVector_17; }
	inline void set_m_LastMoveVector_17(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_LastMoveVector_17 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_18() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_ConsecutiveMoveCount_18)); }
	inline int32_t get_m_ConsecutiveMoveCount_18() const { return ___m_ConsecutiveMoveCount_18; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_18() { return &___m_ConsecutiveMoveCount_18; }
	inline void set_m_ConsecutiveMoveCount_18(int32_t value)
	{
		___m_ConsecutiveMoveCount_18 = value;
	}

	inline static int32_t get_offset_of_m_LastMousePosition_19() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_LastMousePosition_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_LastMousePosition_19() const { return ___m_LastMousePosition_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_LastMousePosition_19() { return &___m_LastMousePosition_19; }
	inline void set_m_LastMousePosition_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_LastMousePosition_19 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_20() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_MousePosition_20)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_MousePosition_20() const { return ___m_MousePosition_20; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_MousePosition_20() { return &___m_MousePosition_20; }
	inline void set_m_MousePosition_20(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_MousePosition_20 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFocusedGameObject_21() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_CurrentFocusedGameObject_21)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentFocusedGameObject_21() const { return ___m_CurrentFocusedGameObject_21; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentFocusedGameObject_21() { return &___m_CurrentFocusedGameObject_21; }
	inline void set_m_CurrentFocusedGameObject_21(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentFocusedGameObject_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentFocusedGameObject_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputPointerEvent_22() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_InputPointerEvent_22)); }
	inline PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * get_m_InputPointerEvent_22() const { return ___m_InputPointerEvent_22; }
	inline PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 ** get_address_of_m_InputPointerEvent_22() { return &___m_InputPointerEvent_22; }
	inline void set_m_InputPointerEvent_22(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * value)
	{
		___m_InputPointerEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputPointerEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_23() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_HorizontalAxis_23)); }
	inline String_t* get_m_HorizontalAxis_23() const { return ___m_HorizontalAxis_23; }
	inline String_t** get_address_of_m_HorizontalAxis_23() { return &___m_HorizontalAxis_23; }
	inline void set_m_HorizontalAxis_23(String_t* value)
	{
		___m_HorizontalAxis_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalAxis_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_24() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_VerticalAxis_24)); }
	inline String_t* get_m_VerticalAxis_24() const { return ___m_VerticalAxis_24; }
	inline String_t** get_address_of_m_VerticalAxis_24() { return &___m_VerticalAxis_24; }
	inline void set_m_VerticalAxis_24(String_t* value)
	{
		___m_VerticalAxis_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalAxis_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_25() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_SubmitButton_25)); }
	inline String_t* get_m_SubmitButton_25() const { return ___m_SubmitButton_25; }
	inline String_t** get_address_of_m_SubmitButton_25() { return &___m_SubmitButton_25; }
	inline void set_m_SubmitButton_25(String_t* value)
	{
		___m_SubmitButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubmitButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelButton_26() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_CancelButton_26)); }
	inline String_t* get_m_CancelButton_26() const { return ___m_CancelButton_26; }
	inline String_t** get_address_of_m_CancelButton_26() { return &___m_CancelButton_26; }
	inline void set_m_CancelButton_26(String_t* value)
	{
		___m_CancelButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_27() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_InputActionsPerSecond_27)); }
	inline float get_m_InputActionsPerSecond_27() const { return ___m_InputActionsPerSecond_27; }
	inline float* get_address_of_m_InputActionsPerSecond_27() { return &___m_InputActionsPerSecond_27; }
	inline void set_m_InputActionsPerSecond_27(float value)
	{
		___m_InputActionsPerSecond_27 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_28() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_RepeatDelay_28)); }
	inline float get_m_RepeatDelay_28() const { return ___m_RepeatDelay_28; }
	inline float* get_address_of_m_RepeatDelay_28() { return &___m_RepeatDelay_28; }
	inline void set_m_RepeatDelay_28(float value)
	{
		___m_RepeatDelay_28 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_29() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5, ___m_ForceModuleActive_29)); }
	inline bool get_m_ForceModuleActive_29() const { return ___m_ForceModuleActive_29; }
	inline bool* get_address_of_m_ForceModuleActive_29() { return &___m_ForceModuleActive_29; }
	inline void set_m_ForceModuleActive_29(bool value)
	{
		___m_ForceModuleActive_29 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_34;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_35;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_37;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_40;

public:
	inline static int32_t get_offset_of_m_FontData_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_34)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_34() const { return ___m_FontData_34; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_34() { return &___m_FontData_34; }
	inline void set_m_FontData_34(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_35)); }
	inline String_t* get_m_Text_35() const { return ___m_Text_35; }
	inline String_t** get_address_of_m_Text_35() { return &___m_Text_35; }
	inline void set_m_Text_35(String_t* value)
	{
		___m_Text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_36)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_36() const { return ___m_TextCache_36; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_36() { return &___m_TextCache_36; }
	inline void set_m_TextCache_36(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_37() const { return ___m_TextCacheForLayout_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_37() { return &___m_TextCacheForLayout_37; }
	inline void set_m_TextCacheForLayout_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_39)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_39() const { return ___m_DisableFontTextureRebuiltCallback_39; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_39() { return &___m_DisableFontTextureRebuiltCallback_39; }
	inline void set_m_DisableFontTextureRebuiltCallback_39(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_39 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_40)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_40() const { return ___m_TempVerts_40; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_40() { return &___m_TempVerts_40; }
	inline void set_m_TempVerts_40(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_40), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_38;

public:
	inline static int32_t get_offset_of_s_DefaultText_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_38)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_38() const { return ___s_DefaultText_38; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_38() { return &___s_DefaultText_38; }
	inline void set_s_DefaultText_38(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_38), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`2<System.Boolean,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_mA21ADF47E3138BEEB6A3E0015B2587A341D9FC36_gshared (Action_2_t6C33D80670016FFA10F03F59FB542306FA60F1F3 * __this, bool ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m0C8A9A1DBCB1FEFD1FF6A4E807D329949B925A76_gshared (ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB  Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD42210B24B60EF3FE585AC51F7D237FB59F8C1D7_gshared (HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m5C5C93EC82B1448E5890A57160FE0700FBE62DDC_gshared (HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m554B24ED5873B2CD7DF609F61D2D11CC35DF6AE7_gshared (Action_2_t6C33D80670016FFA10F03F59FB542306FA60F1F3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4566F033303F52A6D430A06E5FA2D29E2A8D6ED3_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m5D8E761EC92CF92D391744DE422D5E24DE57123E_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m1B6BC02D4B03D2CACC864BC5854EE5B318492036_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___call0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisRuntimeObject_mA1235AD67F867740508E2A972DE38CE21BC9CF07_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m93DBD723B5A365BD92FAF21BECDDCAFF67D0CA72_gshared (RuntimeObject* ___source0, Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Enumerable_ToArray_TisRuntimeObject_m90391AD23AB688BA42D238D4512C858F912D7A67_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB938771D2527F09D99453FD856F1E33EBC83F9F2_gshared (ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Int32>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_mA199F71186277902986DCB3DA9E001BADC5A9584_gshared (Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC * __this, bool ___arg10, int32_t ___arg21, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Object,System.Object>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_m61510A0DEB05A70217B0698145657BEC6C0401B1_gshared (Action_3_tB8290CEDF89EF089545D691C8F6D6C7A3A6003A9 * __this, bool ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m1595AB638474543FA079C9E7F2B313722EF691EF_gshared (Action_3_tB8290CEDF89EF089545D691C8F6D6C7A3A6003A9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m52B660F7AF11A491D7A162298208BFA7A5CF26A3_gshared (Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m77C4748BC22520E365AB1F6A46B2C8A8BF525492_gshared (RuntimeObject* ___source0, Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * ___predicate1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Enumerable_ToList_TisRuntimeObject_m4E22BE033B818CC1081A3C0D02E9D139A4DABFD3_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_productType_m2DA99284539D348A942577EBD8A4B8C1BE6CEE3E_inline (AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_m8677C5E01F1258902058D844824B93F7836BF4C3 (Type_t * ___enumType0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.InvalidProductTypeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidProductTypeException__ctor_m6FC69F836DF510EFA4E5B98B255D44D30DE59B87 (InvalidProductTypeException_t181DA391DEF28CE27D63CE5B99F1F05D8EA29874 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Object UnityEngine.Purchasing.MiniJson::JsonDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MiniJson_JsonDecode_m4F90554E3C783D4EA66473DCB81826937A6BA268 (String_t* ___json0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.SerializationExtensions::TryGetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationExtensions_TryGetString_m8F8B073925F70982925072AC0AB1EDC9C0B8223F (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dic0, String_t* ___key1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m740F0CA2696F5D04F06456FCBFE08E942B12B4A6 (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m9394611E7CF9B83AADB891D865FFE74002F80365 (String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_mFA75EC397E067D09FD66D56B4E7692C3FCC3E960 (const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromDays(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  TimeSpan_FromDays_m99DCC655C53C2898FF0C41D1DDFE17A749081DDB (double ___value0, const RuntimeMethod* method);
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  TimeSpan_FromTicks_mDF1F429F18294D57DE2739DBD2F33637E4E5F8F4 (int64_t ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::AddMonths(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_AddMonths_mFACFF352D9DFA0D4B3AC47BFFEA0564F163D7AEC (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, int32_t ___months0, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___d10, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___d21, const RuntimeMethod* method);
// System.DateTime System.DateTime::AddYears(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_AddYears_m4D66AFB61758D852CEEFE29D103C88106C6847A2 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1 (const RuntimeMethod* method);
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_purchaseDate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleInAppPurchaseReceipt_get_purchaseDate_m2C89AC4D5465294E277EEF2832A5515A4F4EF1B5_inline (AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productID()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_productID_m22C58ECEC095ABAAF053542BBED665FEFADFFF5C_inline (AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * __this, const RuntimeMethod* method);
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_subscriptionExpirationDate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m0E73DA493554DCAB6DBE2B01967949C9F7BC014C_inline (AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * __this, const RuntimeMethod* method);
// System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_cancellationDate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleInAppPurchaseReceipt_get_cancellationDate_m59B0DF878625D0223E0CCADD81E9AE31F203E4AC_inline (AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * __this, const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isFreeTrial()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isFreeTrial_mCF6FB5E7AA1D774393C62C991555F14CA7A6F2A6_inline (AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isIntroductoryPricePeriod()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isIntroductoryPricePeriod_m904EBFAEC867D70EF9F9BE66F7EE82152D8EAAAA_inline (AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * __this, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  DateTime_Subtract_m12814A53110B4E3887A84A911C5F9C1402D98842 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.TizenStoreImpl::MessageCallback(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TizenStoreImpl_MessageCallback_m65782C3F5BD31A3D4598ACDC7C31BFD8921ACD6F (String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.JSONStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONStore__ctor_m570AB189D1235ABACA377D61EBED022A6E38106A (JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.JSONStore::SetNativeStore(UnityEngine.Purchasing.INativeStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONStore_SetNativeStore_m3736579E1263AF2F1E9296FB9C65BCB2A71C7EAA (JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3 * __this, RuntimeObject* ___native0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UnityNativePurchasingCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityNativePurchasingCallback__ctor_mB78EE550A774D3E98D4F9057777372466C571A1D (UnityNativePurchasingCallback_t58A016E25D4C5E8E9C7709A2EE87766ED4D02136 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.TizenStoreImpl::ProcessMessage(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TizenStoreImpl_ProcessMessage_mD7007794AB8AA3A88650816CBBC8FCF8B5C11293 (TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.JSONStore::OnSetupFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONStore_OnSetupFailed_mC3A81D5E4F165955CF01B34EA3B4E25E9604FC20 (JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3 * __this, String_t* ___reason0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.JSONStore::OnPurchaseFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONStore_OnPurchaseFailed_mB52127D8AEB6C50D1F322BEA7CACF907E34EB3C9 (JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3 * __this, String_t* ___json0, const RuntimeMethod* method);
// System.String UnityEngine.UDP.StoreService::get_StoreName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StoreService_get_StoreName_m330CEB11AD2E4EDC492803B814482FB1BD30BB23 (const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903 (Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * __this, bool ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *, bool, String_t*, const RuntimeMethod*))Action_2_Invoke_mA21ADF47E3138BEEB6A3E0015B2587A341D9FC36_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UDP.PurchaseInfo>::.ctor()
inline void Dictionary_2__ctor_m4100552BFA81C576088D6C8247BBA22E2552D05C (Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void UnityEngine.UDP.StoreService::Initialize(UnityEngine.UDP.IInitListener,UnityEngine.UDP.AppInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreService_Initialize_mFC32F839FB1E996792BECE585C81AB9B59263DB0 (RuntimeObject* ___listener0, AppInfo_tCA4BF037393743799729827487AFC4C1502E37B8 * ___appInfo1, const RuntimeMethod* method);
// System.Void UnityEngine.UDP.StoreService::Purchase(System.String,System.String,UnityEngine.UDP.IPurchaseListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreService_Purchase_mA4D0893997740F87B339AC644E00CA4C1A605F9A (String_t* ___productId0, String_t* ___developerPayload1, RuntimeObject* ___listener2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m4DAE5244E68062F3211869C745AF7AEEFF5B3556 (ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D *, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m0C8A9A1DBCB1FEFD1FF6A4E807D329949B925A76_gshared)(__this, method);
}
// System.String UnityEngine.Purchasing.ProductDefinition::get_storeSpecificId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.UDP.StoreService::QueryInventory(System.Collections.Generic.List`1<System.String>,UnityEngine.UDP.IPurchaseListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreService_QueryInventory_m97F54D6DA103F2BE96C58EDE49572F88CADE02BE (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___productIds0, RuntimeObject* ___listener1, const RuntimeMethod* method);
// UnityEngine.UDP.PurchaseInfo UnityEngine.Purchasing.UDPBindings::FindPurchaseInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * UDPBindings_FindPurchaseInfo_mCC90D19D926F00D68C304C0D92261E977824CF72 (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, String_t* ___transactionId0, const RuntimeMethod* method);
// System.Void UnityEngine.UDP.StoreService::ConsumePurchase(UnityEngine.UDP.PurchaseInfo,UnityEngine.UDP.IPurchaseListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoreService_ConsumePurchase_mD4C7060E9D4649FCDBD9CFC48F8410B134C10533 (PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * ___purchaseInfo0, RuntimeObject* ___listener1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.UDP.PurchaseInfo> UnityEngine.UDP.Inventory::GetPurchaseList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419 * Inventory_GetPurchaseList_mD70DFAD8D7FBE377CFC971A4A861982DE02218E4 (Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.UDP.PurchaseInfo>::GetEnumerator()
inline Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2  List_1_GetEnumerator_mF7F3DD6B7B370EFC404FF50E5A0897B80C1193EC (List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2  (*) (List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.UDP.PurchaseInfo>::get_Current()
inline PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * Enumerator_get_Current_m56DEB3D7F65E4E5BF8907D3E8CA99BB2BFDD7C45_inline (Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2 * __this, const RuntimeMethod* method)
{
	return ((  PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * (*) (Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.String UnityEngine.UDP.PurchaseInfo::get_GameOrderId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_GameOrderId_m72B0F3D50BA4F455E255E8D84C4EF2AB4B0568B5_inline (PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.UDP.PurchaseInfo> UnityEngine.UDP.Inventory::GetPurchaseDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Inventory_GetPurchaseDictionary_m2871E56A7ACBDE30029D2B5D456EEBA16E10928F (Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UDP.PurchaseInfo::get_ProductId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_ProductId_m5A66D147951003A6AE84A0E48E1B9CC83B792559_inline (PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UDP.PurchaseInfo>::MoveNext()
inline bool Enumerator_MoveNext_m7D2CB9FC4662B992F4AF38F30E26C536059A1B68 (Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UDP.PurchaseInfo>::Dispose()
inline void Enumerator_Dispose_m514C11E20FD89F7F296D3066554C7AE9DCBA12F6 (Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UDP.PurchaseInfo>::GetEnumerator()
inline Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4  Dictionary_2_GetEnumerator_m30E10525DFE9B016974C4A7C4717989602B574BE (Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4  (*) (Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UDP.PurchaseInfo>::get_Current()
inline KeyValuePair_2_t2111E3493A19FE16C45F0C03E1268EE474491464  Enumerator_get_Current_m6633FB5534752211DB3450762F2DCF5C63403416_inline (Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t2111E3493A19FE16C45F0C03E1268EE474491464  (*) (Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4 *, const RuntimeMethod*))Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UDP.PurchaseInfo>::get_Value()
inline PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * KeyValuePair_2_get_Value_mD69EB259EC04E27C535F5B89BAE5CCE4444D6863_inline (KeyValuePair_2_t2111E3493A19FE16C45F0C03E1268EE474491464 * __this, const RuntimeMethod* method)
{
	return ((  PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * (*) (KeyValuePair_2_t2111E3493A19FE16C45F0C03E1268EE474491464 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UDP.PurchaseInfo>::Remove(!0)
inline bool Dictionary_2_Remove_mE6ABD18DFBF5822700D6F69EF732F65BD12AACD6 (Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UDP.PurchaseInfo>::MoveNext()
inline bool Enumerator_MoveNext_m79E9E093FAC0C0A6F683262FBF0A30B25000D5D5 (Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4 *, const RuntimeMethod*))Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UDP.PurchaseInfo>::Dispose()
inline void Enumerator_Dispose_m0A75A4CFFB837ECE42A0DB9FD281D1685E4D233F (Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4 *, const RuntimeMethod*))Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.UDPBindings::StringPropertyToDictionary(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * UDPBindings_StringPropertyToDictionary_mC7D430868B5247E8A0FF6E425A7D6340E56C3C35 (RuntimeObject * ___info0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::toJson(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_toJson_mD043B50E39DCA34D4279C22E1A444A29645008F9 (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UDP.PurchaseInfo>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mBA9D37305B4A8406DDF4E91FA2B49168A4270AA3 (Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * __this, String_t* ___key0, PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 *, String_t*, PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::toJson(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_toJson_m990366CD4919BF3809E5C83E6F64A7B12D19F2DB (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Extension.ProductDescription>::.ctor()
inline void HashSet_1__ctor_mC094CC8497A333D659AB37D62F5510FFB9FFB5D0 (HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A *, const RuntimeMethod*))HashSet_1__ctor_mD42210B24B60EF3FE585AC51F7D237FB59F8C1D7_gshared)(__this, method);
}
// System.Collections.Generic.IList`1<UnityEngine.UDP.ProductInfo> UnityEngine.UDP.Inventory::GetProductList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Inventory_GetProductList_m9678BB02F6C6D9A5B65055127959E563EA508723 (Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UDP.ProductInfo::get_Price()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductInfo_get_Price_mC20BE4DAF0ACEF1FD8E3D73A7B822392A8507F06_inline (ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * __this, const RuntimeMethod* method);
// System.String UnityEngine.UDP.ProductInfo::get_Title()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductInfo_get_Title_mC4CA7A45F2B62F059EC6D15EF9B61143195A6DE2_inline (ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * __this, const RuntimeMethod* method);
// System.String UnityEngine.UDP.ProductInfo::get_Description()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductInfo_get_Description_m53DAEB7FBE4BC4578CF76432E7D9A425A6BE3DF8_inline (ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * __this, const RuntimeMethod* method);
// System.String UnityEngine.UDP.ProductInfo::get_Currency()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductInfo_get_Currency_mBD8B233524D8F45A7540BE2CE32B2E56A44A3EC9_inline (ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.UDP.ProductInfo::get_PriceAmountMicros()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t ProductInfo_get_PriceAmountMicros_mEADCB6715E057C8FC274E4C087849835CD977528_inline (ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * __this, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Convert_ToDecimal_mECE2EDC28EBA5F0B88702C15D0A3A1DABEE8D6A1 (int64_t ___value0, const RuntimeMethod* method);
// System.Void System.Decimal::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_m6AEED1DCCFC59CB0AEBEC253F049953427BA4912 (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Decimal_op_Division_m5A14CCDBC929DEB14F9AC195C7456DF0AE76F514 (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___d10, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___d21, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.ProductMetadata::.ctor(System.String,System.String,System.String,System.String,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductMetadata__ctor_m70965CC8C6DAC8C37A0C8FC08FAE2DE7C091435C (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * __this, String_t* ___priceString0, String_t* ___title1, String_t* ___description2, String_t* ___currencyCode3, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___localizedPrice4, const RuntimeMethod* method);
// System.String UnityEngine.UDP.ProductInfo::get_ProductId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductInfo_get_ProductId_m242CEBB620758129A347F64915E3804C0A0377FE_inline (ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductDescription__ctor_m8832B1A2CE8063B4AD5ACF5B0E9F8AC68AC35B84 (ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * __this, String_t* ___id0, ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * ___metadata1, const RuntimeMethod* method);
// System.Boolean UnityEngine.UDP.Inventory::HasPurchase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inventory_HasPurchase_mF85934E2955EA88D3DFA490B64F4B79CE06B4545 (Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3 * __this, String_t* ___productId0, const RuntimeMethod* method);
// UnityEngine.UDP.PurchaseInfo UnityEngine.UDP.Inventory::GetPurchaseInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * Inventory_GetPurchaseInfo_m2F79B35198C5FB4DE4D15321047B6090F82F2AB7 (Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3 * __this, String_t* ___productId0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductDescription__ctor_m15AFAD4A4B454B69A3468511F3BE9B41F6A61DBF (ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * __this, String_t* ___id0, ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * ___metadata1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Extension.ProductDescription>::Add(!0)
inline bool HashSet_1_Add_mF8C3766EFA306E384BD10BC05F1601F5549AC331 (HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A * __this, ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A *, ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 *, const RuntimeMethod*))HashSet_1_Add_m5C5C93EC82B1448E5890A57160FE0700FBE62DDC_gshared)(__this, ___item0, method);
}
// System.String UnityEngine.Purchasing.JSONSerializer::SerializeProductDescs(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Extension.ProductDescription>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONSerializer_SerializeProductDescs_m6AD2FE8137CE5613A9477109D31AE1FB40C27E21 (RuntimeObject* ___products0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* Type_GetProperties_mEAE2A4049447E8BD9D18989A80E4C8BC742AE97D (Type_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m6BCF46851996136C0EC3C3584AD1FB58B15C6620 (U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8 (Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m554B24ED5873B2CD7DF609F61D2D11CC35DF6AE7_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Purchasing.UDPImpl/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m9DF9504D3629A013CA4D9ED278B1066DAE2F5F5B (U3CU3Ec__DisplayClass8_0_tABAF20373A271E8D799FE1C91217AE25EC57E359 * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::get_type()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ProductDefinition_get_type_mA29E160E9BB1D4A18009F3832F4743A43A499E07_inline (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::GetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_GetString_mB42DECB2528309B3A49269120548258B3E0B6142 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dic0, String_t* ___key1, String_t* ___defaultValue2, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::HashtableFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * MiniJsonExtensions_HashtableFromJson_m924DE4EC163F926FCAC0ACB6890D9865E1A3D0D9 (String_t* ___json0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.UDP.UserInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfo__ctor_m9C49199B6D47983375F3083236CE028280961B44 (UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UDPImpl::DictionaryToStringProperty(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_DictionaryToStringProperty_mF0801906914108998E612C027C9EC295B936D753 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dic0, RuntimeObject * ___info1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::.ctor(System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseFailureDescription__ctor_mD1B896C37FDB5EBB659FED6024169FFB1CAE0CF1 (PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * __this, String_t* ___productId0, int32_t ___reason1, String_t* ___message2, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.FakeStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FakeStore__ctor_m56562124AF5016DA7CEA64A75D0CAC807EAD60DF (FakeStore_t3C59ECE7995BF7D5967D562BF25F0413F7CA790D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.UIFakeStore::IsShowingDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIFakeStore_IsShowingDialog_mC04B809565B735E7CEC2BDF8688726D0E24D4598 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore/DialogRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogRequest__ctor_mC8090E2ED1AAE2190BF62023F3074D99E50CF531 (DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore::InstantiateDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_InstantiateDialog_m96CB73823DE7939FC68A77A01FC6BB93BC79793F (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1 (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * GameObject_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m5EA55BE80E8E0FB0551D6C16C2BC57A726758C9A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Canvas>(!!0)
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * Object_Instantiate_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m17FC8F26192881EA230827EB7DD05F91C54B9412 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___original0, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4566F033303F52A6D430A06E5FA2D29E2A8D6ED3_gshared)(___original0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Purchasing.UIFakeStore/LifecycleNotifier>()
inline LifecycleNotifier_t7BC53FAB36050746A837703F74A7CF3B63A075DE * GameObject_AddComponent_TisLifecycleNotifier_t7BC53FAB36050746A837703F74A7CF3B63A075DE_m1012B33F5C8FD4A2CB3F78EBC3E66FC192441238 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  LifecycleNotifier_t7BC53FAB36050746A837703F74A7CF3B63A075DE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * Object_FindObjectOfType_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_m351F3750964F87C51FA489576CFA6F6DFE341C5B (const RuntimeMethod* method)
{
	return ((  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m5D8E761EC92CF92D391744DE422D5E24DE57123E_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m20BE06980A232E1D64016957059A9DD834173F68 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___components1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
inline StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5 * GameObject_AddComponent_TisStandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5_m0445A53FE77C70A43D4C0BC3E8634647FD00EFCE (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetOkayButtonText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * UIFakeStore_GetOkayButtonText_m18D9AE8AF1047D564DF67594ABDA8761C9BD9860 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method);
// UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetCancelButtonText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * UIFakeStore_GetCancelButtonText_m50EDCF51AA30CE089F5F69C2FD3919F22E684244 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method);
// UnityEngine.UI.Dropdown UnityEngine.Purchasing.UIFakeStore::GetDropdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * UIFakeStore_GetDropdown_mF5334EBA98397AE9DCBD9FB24F0C1D52DA54684B (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCBED74C5DF8E6C00526CE677BF8B96675B5C3A94 * Dropdown_get_options_mF01AB08188E47DA9CD1488723FCBC453F29BDFA6 (Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Clear()
inline void List_1_Clear_m17A48F63DE3D34232B01F1A7D55BC3FAFD2FBFFF (List_1_tCBED74C5DF8E6C00526CE677BF8B96675B5C3A94 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCBED74C5DF8E6C00526CE677BF8B96675B5C3A94 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813  List_1_GetEnumerator_mDFFBEE5A0B86EF1F068C4ED0ABC0F39B7CA7677E (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813  (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m894E7226842A0AB920967095678A311EFF7C5737_inline (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m72F6900DD27A92731D7B1FA02623D50440D747C3 (OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Add(!0)
inline void List_1_Add_m517F898ECAAFAF57D6607F86F1BCF057C0E615D7 (List_1_tCBED74C5DF8E6C00526CE677BF8B96675B5C3A94 * __this, OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCBED74C5DF8E6C00526CE677BF8B96675B5C3A94 *, OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_m129741E497FB617DC9845CFEE4CB27B84C86301A (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_mD9B1DB257A9F9A3CEA69542101B953689A4AD978 (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Dropdown::RefreshShownValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_RefreshShownValue_mA221C69078DAADC64EF227C7F66390A1D49E32F1 (Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetOkayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * UIFakeStore_GetOkayButton_m3C825F45738A90ACC7ABD879394AEC5B471EB81B (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___call0, const RuntimeMethod* method);
// UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetCancelButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * UIFakeStore_GetCancelButton_mCECFA7D8AE216E79FEFCDADF53021BB2DD3BA276 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method);
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * Dropdown_get_onValueChanged_m4EE82DC9AE8618C52CECA362EBDE6284F41E88FE_inline (Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m1B6BC02D4B03D2CACC864BC5854EE5B318492036 (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m1B6BC02D4B03D2CACC864BC5854EE5B318492036_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967 (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 *, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetDropdownContainerGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * UIFakeStore_GetDropdownContainerGameObject_mDE243039E020E475B22A878594E9A635D31DEF76 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetCancelButtonGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * UIFakeStore_GetCancelButtonGameObject_m1E28ADAE8496502B2E90A552C98CF92A09F4F805 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468_inline (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<UnityEngine.Purchasing.ProductDefinition>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_m9CD974FCA5759B5EF1795B1307BBDB1C7114486E (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisRuntimeObject_mA1235AD67F867740508E2A972DE38CE21BC9CF07_gshared)(___source0, ___count1, method);
}
// System.Void System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0766B82246E2FCFE8FE8C28831BAAA0A3F82E13D (Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<UnityEngine.Purchasing.ProductDefinition,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisString_t_m6128E5476EE06203D4946C1E17607FB7A959E774 (RuntimeObject* ___source0, Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m93DBD723B5A365BD92FAF21BECDDCAFF67D0CA72_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Enumerable_ToArray_TisString_t_m1BAD76FB02571EB3CCC5BB00D4D581399F8523FC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m90391AD23AB688BA42D238D4512C858F912D7A67_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4 (String_t* ___separator0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_m743564A469EBA084937406D3D96A90487419C64B (ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D *, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mB938771D2527F09D99453FD856F1E33EBC83F9F2_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Dropdown>()
inline Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * GameObject_GetComponent_TisDropdown_tF6331401084B1213CAB10587A6EC81461501930F_mCEDADB496C533D2B1022FE5C0B5D68493866A5E2 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mA99E48BB021F2E4B62D4EA9F52EA6928EED618A2 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Int32>::Invoke(!0,!1)
inline void Action_2_Invoke_mA199F71186277902986DCB3DA9E001BADC5A9584 (Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC * __this, bool ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC *, bool, int32_t, const RuntimeMethod*))Action_2_Invoke_mA199F71186277902986DCB3DA9E001BADC5A9584_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void UnityEngine.Purchasing.UIFakeStore::CloseDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_CloseDialog_mA39A1BB699C95E8CC4A2C5E2391EC016D7A17633 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore::OkayButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_OkayButtonClicked_m6FF8BCD5C3618BEC6355B66F1FEB81200BDDB719 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore::CancelButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_CancelButtonClicked_mFD886AEE2ECDDD07C5CE9CF686DCB20B7B162E22 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore::DropdownValueChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_DropdownValueChanged_m7C2241CF7883B9EBB6C2815CE481710C45D303C7 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, int32_t ___selectedItem0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UIFakeStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m41D08227321C1E6FED1614916F79CAADEFACCB0A (U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.UnityChannelBindings::PurchaseInfoToDictionary(UnityEngine.ChannelPurchase.PurchaseInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * UnityChannelBindings_PurchaseInfoToDictionary_mD9A74BE343086068E2C5E9FCEAFB8842FCA537A7 (PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * ___purchaseInfo0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UnityChannelBindings::OnPurchaseConfirmCallbackDispatcher(System.String,System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_OnPurchaseConfirmCallbackDispatcher_m48C4680BE8A22D89F2F577D4D3999C504EFC74A1 (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___transactionId0, bool ___result1, String_t* ___param12, String_t* ___param23, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UnityChannelBindings::OnResponseCallbackDispatcher(System.String,System.Boolean,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_OnResponseCallbackDispatcher_mB85DA6F8929B25434CC6BCFF91399BA08E60BAA9 (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___transactionId0, bool ___result1, String_t* ___param12, String_t* ___param23, Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * ___callbackDictionary4, const RuntimeMethod* method);
// System.String UnityEngine.ChannelPurchase.ReceiptInfo::get_gameOrderId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ReceiptInfo_get_gameOrderId_m2ED31482237AEBCB4441FFFE22A9D3CAEF328790_inline (ReceiptInfo_t5A3A3B53B5FFCFEA460A254C320E9B72FB82FC9D * __this, const RuntimeMethod* method);
// System.String UnityEngine.ChannelPurchase.ReceiptInfo::get_signData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ReceiptInfo_get_signData_m1534F5C3DC45EECF4016DA072C82FDC1B0973510_inline (ReceiptInfo_t5A3A3B53B5FFCFEA460A254C320E9B72FB82FC9D * __this, const RuntimeMethod* method);
// System.String UnityEngine.ChannelPurchase.ReceiptInfo::get_signature()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ReceiptInfo_get_signature_m0E9B934D58401FEA73AE4B83B3FDC718D796339A_inline (ReceiptInfo_t5A3A3B53B5FFCFEA460A254C320E9B72FB82FC9D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UnityChannelBindings::OnReceiptValidateCallbackDispatcher(System.String,System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_OnReceiptValidateCallbackDispatcher_mF442A79ED70B684B458AB8D8B3616318BEB0EF9E (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___transactionId0, bool ___result1, String_t* ___param12, String_t* ___param23, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m68CC5D5B45084241DED93C201D279662BEB5CB2F (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>::get_Item(!0)
inline List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * Dictionary_2_get_Item_m06227059A7D084647BD2FAC6BF6382E86D667E74 (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * (*) (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>::Remove(!0)
inline bool Dictionary_2_Remove_m54A4154018F67810E53B6EAA9750532B482EB576 (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>::GetEnumerator()
inline Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E  List_1_GetEnumerator_m722EB7DBBB8377AD8196FB4971A17EA146FAAFC6 (List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E  (*) (List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Action`3<System.Boolean,System.String,System.String>>::get_Current()
inline Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * Enumerator_get_Current_m8DAE6A6BE9E43946A72752EC47B875512C8DCFE8_inline (Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E * __this, const RuntimeMethod* method)
{
	return ((  Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * (*) (Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void System.Action`3<System.Boolean,System.String,System.String>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m1CB35C4D32922E1BCF8ADEFEE4B7A317CA8F8672 (Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * __this, bool ___arg10, String_t* ___arg21, String_t* ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF *, bool, String_t*, String_t*, const RuntimeMethod*))Action_3_Invoke_m61510A0DEB05A70217B0698145657BEC6C0401B1_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action`3<System.Boolean,System.String,System.String>>::MoveNext()
inline bool Enumerator_MoveNext_mF280E27F474C1EBF8049A2EE26CB51523D353BA2 (Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action`3<System.Boolean,System.String,System.String>>::Dispose()
inline void Enumerator_Dispose_mB2C9414AA5B4B278BE21C819515F3DCB94DC50CC (Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m541CAC23EBB140DFD3AB5B313315647E95FADB29 (const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5 (Guid_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ChannelPurchase.PurchaseService::Purchase(System.String,System.String,UnityEngine.ChannelPurchase.IPurchaseListener,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseService_Purchase_mC65FF5DFE61961585B7E1666DADBA5DC047BE46A (String_t* ___productCode0, String_t* ___gameOrderId1, RuntimeObject* ___listener2, String_t* ___developerPayload3, const RuntimeMethod* method);
// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::LoadDefaultCatalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProductCatalog_t7643D269828196E196CDF8B0ACC4AE00EA1A15F6 * ProductCatalog_LoadDefaultCatalog_mB49AAA6ED516337EBE6E6C7D68D1254891CC5F61 (const RuntimeMethod* method);
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allValidProducts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProductCatalog_get_allValidProducts_m858AA5134A97D7B2F4CFFA6E9894C6A2A74B9279 (ProductCatalog_t7643D269828196E196CDF8B0ACC4AE00EA1A15F6 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m90EB651A751C3444BADBBD5401109CE05B3E1CFB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// UnityEngine.Purchasing.LocalizedProductDescription UnityEngine.Purchasing.ProductCatalogItem::GetDescription(UnityEngine.Purchasing.TranslationLocale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * ProductCatalogItem_GetDescription_mF654237D9C36BD39D6951E7334535DC9CA42227B (ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D * __this, int32_t ___locale0, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.LocalizedProductDescription::get_Title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizedProductDescription_get_Title_m448F93EC6EF5EECB012A5EA8BEC2BC45D619A0E1 (LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.LocalizedProductDescription::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizedProductDescription_get_Description_m3BA64F0AA47F51B25955288D69248CC5110D1834 (LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * __this, const RuntimeMethod* method);
// System.Decimal System.Decimal::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Decimal_op_Implicit_m654C5710B68EAA7C5E606F28F084CE5FDA339415 (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UnityChannelBindings/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m15D07433179BF2E06D3D623A40AFE4AC35835796 (U3CU3Ec__DisplayClass16_0_tB91567274B7906CE554758FDB7180DBA22B1A9A5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UnityChannelBindings::RequestUniquely(System.String,System.Action`3<System.Boolean,System.String,System.String>,System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_RequestUniquely_m594C392FBB940E65F11BE27C777E3EDFA3D6AAE5 (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___transactionId0, Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * ___callback1, Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * ___callbackDictionary2, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___requestAction3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>::.ctor()
inline void List_1__ctor_m21D978936866998FD41335DC29174A855115EBBC (List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>::Add(!0)
inline void List_1_Add_m28CB823F772535151E966A56E1E2B5138AD538D0 (List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * __this, Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 *, Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>::Add(!0,!1)
inline void Dictionary_2_Add_mD8A7AB2EFD21D08C7853DD671529F088C93CCB43 (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * __this, String_t* ___key0, List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 *, String_t*, List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// System.String UnityEngine.ChannelPurchase.PurchaseInfo::get_gameOrderId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_gameOrderId_m019A81061C04FF551917377B24E1A68427581738_inline (PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * __this, const RuntimeMethod* method);
// System.String UnityEngine.ChannelPurchase.PurchaseInfo::get_productCode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_productCode_mF7064DB7FD1EC1919094CC4CF9A41C42D567682B_inline (PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * __this, const RuntimeMethod* method);
// System.String UnityEngine.ChannelPurchase.PurchaseInfo::get_orderQueryToken()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_orderQueryToken_mCA0B114664FE5CDFCAC7506834C6F18469BCF945_inline (PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * __this, const RuntimeMethod* method);
// System.String UnityEngine.ChannelPurchase.PurchaseInfo::get_developerPayload()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_developerPayload_m1287F3D31A9FCFFDA0189089D987C410AEA3D6DA_inline (PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>::.ctor()
inline void Dictionary_2__ctor_m7AA3194A16B23BA1E1D60E463385BBE476347B39 (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void UnityEngine.ChannelPurchase.PurchaseService::ValidateReceipt(System.String,UnityEngine.ChannelPurchase.IPurchaseListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseService_ValidateReceipt_m98B3D125BE4906AB67D40336B9F20CA5B79CED82 (String_t* ___gameOrderId0, RuntimeObject* ___listener1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UnityChannelImpl/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m3B9093B4E407AF43B2F4942BABC26C76A5283411 (U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UnityChannelImpl/<>c__DisplayClass7_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_1__ctor_m7E08D72B9AFE8EB28E60A8BAC95FD54EAAE15A14 (U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Purchasing.UnityChannelImpl::get_fetchReceiptPayloadOnPurchase()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool UnityChannelImpl_get_fetchReceiptPayloadOnPurchase_m6F02B48EE38983D0F5794E0C81A62E39F2328E78_inline (UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<System.Boolean,System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mCF36739F19ED5E1D79C77CBE83B1B23BEC60A50A (Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_m1595AB638474543FA079C9E7F2B313722EF691EF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::ValidateReceipt(System.String,System.Action`3<System.Boolean,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_ValidateReceipt_mA1272B9852E698F8F30BBC28E285050C0DB1AD3F (UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * __this, String_t* ___transactionIdentifier0, Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * ___callback1, const RuntimeMethod* method);
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_m5EA8C5E47A3BF0223FD368503B36206256937A61 (String_t* ___value0, bool* ___result1, const RuntimeMethod* method);
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_mA573B15329CA2AA7C59367D514D2927FC66217E2 (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UnityChannelImpl::extractDeveloperPayload(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_extractDeveloperPayload_mF3A5C6FB70814A17FE64E825F9412B2E27065D0A (UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dic0, String_t* ___signData1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Extension.AbstractStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractStore__ctor_mD841D92381EA66878B36E6CC24970523A01068B3 (AbstractStore_t0809CE12BFD8191F29B7B77FC730AE3E8A3C039C * __this, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.Purchasing.ProductDefinition,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m666791AAB6A75CF7280C43B9B7276C1C6C60A98A (Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m52B660F7AF11A491D7A162298208BFA7A5CF26A3_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<UnityEngine.Purchasing.ProductDefinition>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_m1A96F66F6EFA8BB873220824E46F0751F974DF28 (RuntimeObject* ___source0, Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m77C4748BC22520E365AB1F6A46B2C8A8BF525492_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2038F3104EEA592CAD20C70731ADFDDD5B6FDAA5 (Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Default.WinProductDescription>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisWinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_m005AB802FC8196952DC2A0151E68AB648544D47E (RuntimeObject* ___source0, Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m93DBD723B5A365BD92FAF21BECDDCAFF67D0CA72_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.Purchasing.Default.WinProductDescription>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92 * Enumerable_ToList_TisWinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_mE3D3472C4553BFEAC57A272A18CF5874C1B64530 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m4E22BE033B818CC1081A3C0D02E9D139A4DABFD3_gshared)(___source0, method);
}
// System.Void UnityEngine.Purchasing.WinRTStore::init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_init_m1FFD23EEF3EFE9E6985DD722ED21D721191BEC59 (WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F * __this, int32_t ___delay0, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.WinRTStore/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0155A413AC109FB1436303325286E17DA5FA0A8A (U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669 * __this, const RuntimeMethod* method);
// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_mD2BEAABCBAC5D1AF62D0F8E01B2DCD2B725B2C2C (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * __this, int32_t ___lo0, int32_t ___mid1, int32_t ___hi2, bool ___isNegative3, uint8_t ___scale4, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::.ctor(System.String,System.String,System.String,System.String,System.String,System.Decimal,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription__ctor_mAAEF8B336277574079D4490C9100998BF237AF8F (WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43 * __this, String_t* ___id0, String_t* ___price1, String_t* ___title2, String_t* ___description3, String_t* ___isoCode4, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___priceD5, String_t* ___receipt6, String_t* ___transactionId7, bool ___consumable8, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * ___array0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  ___fldHandle1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.SubscriptionInfo::.ctor(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubscriptionInfo__ctor_m451D866F02BB1E5E57CA89DA19717FE1FC8CC49B (SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * __this, AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * ___r0, String_t* ___intro_json1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubscriptionInfo__ctor_m451D866F02BB1E5E57CA89DA19717FE1FC8CC49B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Exception_t * V_10 = NULL;
	int32_t V_11 = 0;
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_12;
	memset((&V_12), 0, sizeof(V_12));
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_13;
	memset((&V_13), 0, sizeof(V_13));
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B25_0 = NULL;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B24_0 = NULL;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B26_0 = NULL;
	int32_t G_B27_0 = 0;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B27_1 = NULL;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B29_0 = NULL;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B30_1 = NULL;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B32_0 = NULL;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B31_0 = NULL;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B33_0 = NULL;
	int32_t G_B34_0 = 0;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B34_1 = NULL;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B36_0 = NULL;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B35_0 = NULL;
	int32_t G_B37_0 = 0;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B37_1 = NULL;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B40_0 = NULL;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B38_0 = NULL;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B39_0 = NULL;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B41_0 = NULL;
	int32_t G_B42_0 = 0;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B42_1 = NULL;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B44_0 = NULL;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B43_0 = NULL;
	int32_t G_B45_0 = 0;
	SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * G_B45_1 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (AppleStoreProductType_tADAB43B081D09C4D7F08145CED6B7EB52716076A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * L_2 = ___r0;
		NullCheck(L_2);
		int32_t L_3 = AppleInAppPurchaseReceipt_get_productType_m2DA99284539D348A942577EBD8A4B8C1BE6CEE3E_inline(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		String_t* L_4 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeObject * L_5 = Enum_Parse_m8677C5E01F1258902058D844824B93F7836BF4C3(L_1, L_4, /*hidden argument*/NULL);
		V_0 = ((*(int32_t*)((int32_t*)UnBox(L_5, AppleStoreProductType_tADAB43B081D09C4D7F08145CED6B7EB52716076A_il2cpp_TypeInfo_var))));
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0036;
	}

IL_0035:
	{
		G_B3_0 = 1;
	}

IL_0036:
	{
		V_3 = (bool)G_B3_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		InvalidProductTypeException_t181DA391DEF28CE27D63CE5B99F1F05D8EA29874 * L_9 = (InvalidProductTypeException_t181DA391DEF28CE27D63CE5B99F1F05D8EA29874 *)il2cpp_codegen_object_new(InvalidProductTypeException_t181DA391DEF28CE27D63CE5B99F1F05D8EA29874_il2cpp_TypeInfo_var);
		InvalidProductTypeException__ctor_m6FC69F836DF510EFA4E5B98B255D44D30DE59B87(L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, SubscriptionInfo__ctor_m451D866F02BB1E5E57CA89DA19717FE1FC8CC49B_RuntimeMethod_var);
	}

IL_0041:
	{
		String_t* L_10 = ___intro_json1;
		bool L_11 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_10, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_01f0;
		}
	}
	{
		String_t* L_13 = ___intro_json1;
		RuntimeObject * L_14 = MiniJson_JsonDecode_m4F90554E3C783D4EA66473DCB81826937A6BA268(L_13, /*hidden argument*/NULL);
		V_5 = ((Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)CastclassClass((RuntimeObject*)L_14, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var));
		V_6 = (-1);
		V_7 = 4;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_15 = V_5;
		String_t* L_16 = SerializationExtensions_TryGetString_m8F8B073925F70982925072AC0AB1EDC9C0B8223F(L_15, _stringLiteralDDA311F79A1B844489695C2C2BEFE0C0A5A83928, /*hidden argument*/NULL);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_17 = V_5;
		String_t* L_18 = SerializationExtensions_TryGetString_m8F8B073925F70982925072AC0AB1EDC9C0B8223F(L_17, _stringLiteralFF5DD0E304B39EF8CC99D49375CDF1C3C3FF885E, /*hidden argument*/NULL);
		String_t* L_19 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_16, L_18, /*hidden argument*/NULL);
		__this->set_introductory_price_11(L_19);
		String_t* L_20 = __this->get_introductory_price_11();
		bool L_21 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_20, /*hidden argument*/NULL);
		V_9 = L_21;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00aa;
		}
	}
	{
		__this->set_introductory_price_11(_stringLiteral5F2391220833847E88FA717EB295A329DD3B3C55);
		goto IL_0108;
	}

IL_00aa:
	{
	}

IL_00ab:
	try
	{ // begin try (depth: 1)
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_23 = V_5;
		String_t* L_24 = SerializationExtensions_TryGetString_m8F8B073925F70982925072AC0AB1EDC9C0B8223F(L_23, _stringLiteralA3D9B910FBD7D49B662799307CC6280BB829F841, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int64_t L_25 = Convert_ToInt64_m740F0CA2696F5D04F06456FCBFE08E942B12B4A6(L_24, /*hidden argument*/NULL);
		__this->set_introductory_price_cycles_13(L_25);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_26 = V_5;
		String_t* L_27 = SerializationExtensions_TryGetString_m8F8B073925F70982925072AC0AB1EDC9C0B8223F(L_26, _stringLiteral6AA2CA83CEC56CC9378EC0E01B0BF752281D2A45, /*hidden argument*/NULL);
		int32_t L_28 = Convert_ToInt32_m9394611E7CF9B83AADB891D865FFE74002F80365(L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_29 = V_5;
		String_t* L_30 = SerializationExtensions_TryGetString_m8F8B073925F70982925072AC0AB1EDC9C0B8223F(L_29, _stringLiteral0DF9EEA0BAD5A55395DB9EC290DFCF4A883D5D3E, /*hidden argument*/NULL);
		int32_t L_31 = Convert_ToInt32_m9394611E7CF9B83AADB891D865FFE74002F80365(L_30, /*hidden argument*/NULL);
		V_7 = L_31;
		goto IL_0107;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00ec;
		throw e;
	}

CATCH_00ec:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		RuntimeObject* L_32 = Debug_get_unityLogger_mFA75EC397E067D09FD66D56B4E7692C3FCC3E960(/*hidden argument*/NULL);
		Exception_t * L_33 = V_10;
		NullCheck(L_32);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(4 /* System.Void UnityEngine.ILogger::Log(System.String,System.Object) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_32, _stringLiteral3D6A970D4287352BB3A6FB409DD0F9DF8FF9920A, L_33);
		V_7 = 4;
		goto IL_0107;
	} // end catch (depth: 1)

IL_0107:
	{
	}

IL_0108:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_34 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_8 = L_34;
		int32_t L_35 = V_7;
		V_11 = L_35;
		int32_t L_36 = V_11;
		switch (L_36)
		{
			case 0:
			{
				goto IL_0133;
			}
			case 1:
			{
				goto IL_015e;
			}
			case 2:
			{
				goto IL_0187;
			}
			case 3:
			{
				goto IL_01af;
			}
			case 4:
			{
				goto IL_01d8;
			}
		}
	}
	{
		goto IL_01ed;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_37 = TimeSpan_FromDays_m99DCC655C53C2898FF0C41D1DDFE17A749081DDB((1.0), /*hidden argument*/NULL);
		V_14 = L_37;
		int64_t L_38 = TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_14), /*hidden argument*/NULL);
		int32_t L_39 = V_6;
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_40 = TimeSpan_FromTicks_mDF1F429F18294D57DE2739DBD2F33637E4E5F8F4(((int64_t)il2cpp_codegen_multiply((int64_t)L_38, (int64_t)(((int64_t)((int64_t)L_39))))), /*hidden argument*/NULL);
		__this->set_introductory_price_period_12(L_40);
		goto IL_01ed;
	}

IL_015e:
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_41 = DateTime_AddMonths_mFACFF352D9DFA0D4B3AC47BFFEA0564F163D7AEC((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_8), 1, /*hidden argument*/NULL);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_42 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_43 = DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021(L_41, L_42, /*hidden argument*/NULL);
		V_12 = L_43;
		int64_t L_44 = TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_12), /*hidden argument*/NULL);
		int32_t L_45 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_46 = TimeSpan_FromTicks_mDF1F429F18294D57DE2739DBD2F33637E4E5F8F4(((int64_t)il2cpp_codegen_multiply((int64_t)L_44, (int64_t)(((int64_t)((int64_t)L_45))))), /*hidden argument*/NULL);
		__this->set_introductory_price_period_12(L_46);
		goto IL_01ed;
	}

IL_0187:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_47 = TimeSpan_FromDays_m99DCC655C53C2898FF0C41D1DDFE17A749081DDB((7.0), /*hidden argument*/NULL);
		V_14 = L_47;
		int64_t L_48 = TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_14), /*hidden argument*/NULL);
		int32_t L_49 = V_6;
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_50 = TimeSpan_FromTicks_mDF1F429F18294D57DE2739DBD2F33637E4E5F8F4(((int64_t)il2cpp_codegen_multiply((int64_t)L_48, (int64_t)(((int64_t)((int64_t)L_49))))), /*hidden argument*/NULL);
		__this->set_introductory_price_period_12(L_50);
		goto IL_01ed;
	}

IL_01af:
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_51 = DateTime_AddYears_m4D66AFB61758D852CEEFE29D103C88106C6847A2((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_8), 1, /*hidden argument*/NULL);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_52 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_53 = DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021(L_51, L_52, /*hidden argument*/NULL);
		V_13 = L_53;
		int64_t L_54 = TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_13), /*hidden argument*/NULL);
		int32_t L_55 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_56 = TimeSpan_FromTicks_mDF1F429F18294D57DE2739DBD2F33637E4E5F8F4(((int64_t)il2cpp_codegen_multiply((int64_t)L_54, (int64_t)(((int64_t)((int64_t)L_55))))), /*hidden argument*/NULL);
		__this->set_introductory_price_period_12(L_56);
		goto IL_01ed;
	}

IL_01d8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_57 = ((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var))->get_Zero_0();
		__this->set_introductory_price_period_12(L_57);
		__this->set_introductory_price_cycles_13((((int64_t)((int64_t)0))));
		goto IL_01ed;
	}

IL_01ed:
	{
		goto IL_0210;
	}

IL_01f0:
	{
		__this->set_introductory_price_11(_stringLiteral5F2391220833847E88FA717EB295A329DD3B3C55);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_58 = ((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var))->get_Zero_0();
		__this->set_introductory_price_period_12(L_58);
		__this->set_introductory_price_cycles_13((((int64_t)((int64_t)0))));
	}

IL_0210:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_59 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
		V_1 = L_59;
		AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * L_60 = ___r0;
		NullCheck(L_60);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_61 = AppleInAppPurchaseReceipt_get_purchaseDate_m2C89AC4D5465294E277EEF2832A5515A4F4EF1B5_inline(L_60, /*hidden argument*/NULL);
		__this->set_purchaseDate_7(L_61);
		AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * L_62 = ___r0;
		NullCheck(L_62);
		String_t* L_63 = AppleInAppPurchaseReceipt_get_productID_m22C58ECEC095ABAAF053542BBED665FEFADFFF5C_inline(L_62, /*hidden argument*/NULL);
		__this->set_productId_6(L_63);
		AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * L_64 = ___r0;
		NullCheck(L_64);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_65 = AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m0E73DA493554DCAB6DBE2B01967949C9F7BC014C_inline(L_64, /*hidden argument*/NULL);
		__this->set_subscriptionExpireDate_8(L_65);
		AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * L_66 = ___r0;
		NullCheck(L_66);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_67 = AppleInAppPurchaseReceipt_get_cancellationDate_m59B0DF878625D0223E0CCADD81E9AE31F203E4AC_inline(L_66, /*hidden argument*/NULL);
		__this->set_subscriptionCancelDate_9(L_67);
		int32_t L_68 = V_0;
		V_15 = (bool)((((int32_t)L_68) == ((int32_t)2))? 1 : 0);
		bool L_69 = V_15;
		if (!L_69)
		{
			goto IL_0281;
		}
	}
	{
		__this->set_is_subscribed_0(2);
		__this->set_is_expired_1(2);
		__this->set_is_cancelled_2(2);
		__this->set_is_free_trial_3(2);
		__this->set_is_auto_renewing_4(2);
		__this->set_is_introductory_price_period_5(2);
		goto IL_0355;
	}

IL_0281:
	{
		AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * L_70 = ___r0;
		NullCheck(L_70);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_71 = AppleInAppPurchaseReceipt_get_cancellationDate_m59B0DF878625D0223E0CCADD81E9AE31F203E4AC_inline(L_70, /*hidden argument*/NULL);
		V_16 = L_71;
		int64_t L_72 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_16), /*hidden argument*/NULL);
		G_B24_0 = __this;
		if ((((int64_t)L_72) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			G_B25_0 = __this;
			goto IL_02ae;
		}
	}
	{
		AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * L_73 = ___r0;
		NullCheck(L_73);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_74 = AppleInAppPurchaseReceipt_get_cancellationDate_m59B0DF878625D0223E0CCADD81E9AE31F203E4AC_inline(L_73, /*hidden argument*/NULL);
		V_16 = L_74;
		int64_t L_75 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_16), /*hidden argument*/NULL);
		int64_t L_76 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), /*hidden argument*/NULL);
		G_B25_0 = G_B24_0;
		if ((((int64_t)L_75) < ((int64_t)L_76)))
		{
			G_B26_0 = G_B24_0;
			goto IL_02b1;
		}
	}

IL_02ae:
	{
		G_B27_0 = 1;
		G_B27_1 = G_B25_0;
		goto IL_02b2;
	}

IL_02b1:
	{
		G_B27_0 = 0;
		G_B27_1 = G_B26_0;
	}

IL_02b2:
	{
		NullCheck(G_B27_1);
		G_B27_1->set_is_cancelled_2(G_B27_0);
		AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * L_77 = ___r0;
		NullCheck(L_77);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_78 = AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m0E73DA493554DCAB6DBE2B01967949C9F7BC014C_inline(L_77, /*hidden argument*/NULL);
		V_16 = L_78;
		int64_t L_79 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_16), /*hidden argument*/NULL);
		int64_t L_80 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), /*hidden argument*/NULL);
		G_B28_0 = __this;
		if ((((int64_t)L_79) >= ((int64_t)L_80)))
		{
			G_B29_0 = __this;
			goto IL_02d3;
		}
	}
	{
		G_B30_0 = 1;
		G_B30_1 = G_B28_0;
		goto IL_02d4;
	}

IL_02d3:
	{
		G_B30_0 = 0;
		G_B30_1 = G_B29_0;
	}

IL_02d4:
	{
		NullCheck(G_B30_1);
		G_B30_1->set_is_subscribed_0(G_B30_0);
		AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * L_81 = ___r0;
		NullCheck(L_81);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_82 = AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m0E73DA493554DCAB6DBE2B01967949C9F7BC014C_inline(L_81, /*hidden argument*/NULL);
		V_16 = L_82;
		int64_t L_83 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_16), /*hidden argument*/NULL);
		G_B31_0 = __this;
		if ((((int64_t)L_83) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			G_B32_0 = __this;
			goto IL_0305;
		}
	}
	{
		AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * L_84 = ___r0;
		NullCheck(L_84);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_85 = AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m0E73DA493554DCAB6DBE2B01967949C9F7BC014C_inline(L_84, /*hidden argument*/NULL);
		V_16 = L_85;
		int64_t L_86 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_16), /*hidden argument*/NULL);
		int64_t L_87 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), /*hidden argument*/NULL);
		G_B32_0 = G_B31_0;
		if ((((int64_t)L_86) < ((int64_t)L_87)))
		{
			G_B33_0 = G_B31_0;
			goto IL_0308;
		}
	}

IL_0305:
	{
		G_B34_0 = 1;
		G_B34_1 = G_B32_0;
		goto IL_0309;
	}

IL_0308:
	{
		G_B34_0 = 0;
		G_B34_1 = G_B33_0;
	}

IL_0309:
	{
		NullCheck(G_B34_1);
		G_B34_1->set_is_expired_1(G_B34_0);
		AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * L_88 = ___r0;
		NullCheck(L_88);
		int32_t L_89 = AppleInAppPurchaseReceipt_get_isFreeTrial_mCF6FB5E7AA1D774393C62C991555F14CA7A6F2A6_inline(L_88, /*hidden argument*/NULL);
		G_B35_0 = __this;
		if ((((int32_t)L_89) == ((int32_t)1)))
		{
			G_B36_0 = __this;
			goto IL_031b;
		}
	}
	{
		G_B37_0 = 1;
		G_B37_1 = G_B35_0;
		goto IL_031c;
	}

IL_031b:
	{
		G_B37_0 = 0;
		G_B37_1 = G_B36_0;
	}

IL_031c:
	{
		NullCheck(G_B37_1);
		G_B37_1->set_is_free_trial_3(G_B37_0);
		int32_t L_90 = V_0;
		G_B38_0 = __this;
		if ((!(((uint32_t)L_90) == ((uint32_t)3))))
		{
			G_B40_0 = __this;
			goto IL_0338;
		}
	}
	{
		int32_t L_91 = __this->get_is_cancelled_2();
		G_B39_0 = G_B38_0;
		if ((!(((uint32_t)L_91) == ((uint32_t)1))))
		{
			G_B40_0 = G_B38_0;
			goto IL_0338;
		}
	}
	{
		int32_t L_92 = __this->get_is_expired_1();
		G_B40_0 = G_B39_0;
		if ((((int32_t)L_92) == ((int32_t)1)))
		{
			G_B41_0 = G_B39_0;
			goto IL_033b;
		}
	}

IL_0338:
	{
		G_B42_0 = 1;
		G_B42_1 = G_B40_0;
		goto IL_033c;
	}

IL_033b:
	{
		G_B42_0 = 0;
		G_B42_1 = G_B41_0;
	}

IL_033c:
	{
		NullCheck(G_B42_1);
		G_B42_1->set_is_auto_renewing_4(G_B42_0);
		AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * L_93 = ___r0;
		NullCheck(L_93);
		int32_t L_94 = AppleInAppPurchaseReceipt_get_isIntroductoryPricePeriod_m904EBFAEC867D70EF9F9BE66F7EE82152D8EAAAA_inline(L_93, /*hidden argument*/NULL);
		G_B43_0 = __this;
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			G_B44_0 = __this;
			goto IL_034e;
		}
	}
	{
		G_B45_0 = 1;
		G_B45_1 = G_B43_0;
		goto IL_034f;
	}

IL_034e:
	{
		G_B45_0 = 0;
		G_B45_1 = G_B44_0;
	}

IL_034f:
	{
		NullCheck(G_B45_1);
		G_B45_1->set_is_introductory_price_period_5(G_B45_0);
	}

IL_0355:
	{
		int32_t L_95 = __this->get_is_subscribed_0();
		V_17 = (bool)((((int32_t)L_95) == ((int32_t)0))? 1 : 0);
		bool L_96 = V_17;
		if (!L_96)
		{
			goto IL_037e;
		}
	}
	{
		AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * L_97 = ___r0;
		NullCheck(L_97);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_98 = AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m0E73DA493554DCAB6DBE2B01967949C9F7BC014C_inline(L_97, /*hidden argument*/NULL);
		V_16 = L_98;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_99 = V_1;
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_100 = DateTime_Subtract_m12814A53110B4E3887A84A911C5F9C1402D98842((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_16), L_99, /*hidden argument*/NULL);
		__this->set_remainedTime_10(L_100);
		goto IL_038b;
	}

IL_037e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_101 = ((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_il2cpp_TypeInfo_var))->get_Zero_0();
		__this->set_remainedTime_10(L_101);
	}

IL_038b:
	{
		return;
	}
}
// UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::isExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubscriptionInfo_isExpired_mEA7DA0CCEC72876AD82592656ECA11B17C1C64FF (SubscriptionInfo_t32C4ADDD2146194CB2C6540C693A977AFA158133 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_is_expired_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TizenStoreImpl_MessageCallback_m65782C3F5BD31A3D4598ACDC7C31BFD8921ACD6F(char* ___subject0, char* ___payload1, char* ___receipt2, char* ___transactionId3)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___subject0' to managed representation
	String_t* ____subject0_unmarshaled = NULL;
	____subject0_unmarshaled = il2cpp_codegen_marshal_string_result(___subject0);

	// Marshaling of parameter '___payload1' to managed representation
	String_t* ____payload1_unmarshaled = NULL;
	____payload1_unmarshaled = il2cpp_codegen_marshal_string_result(___payload1);

	// Marshaling of parameter '___receipt2' to managed representation
	String_t* ____receipt2_unmarshaled = NULL;
	____receipt2_unmarshaled = il2cpp_codegen_marshal_string_result(___receipt2);

	// Marshaling of parameter '___transactionId3' to managed representation
	String_t* ____transactionId3_unmarshaled = NULL;
	____transactionId3_unmarshaled = il2cpp_codegen_marshal_string_result(___transactionId3);

	// Managed method invocation
	TizenStoreImpl_MessageCallback_m65782C3F5BD31A3D4598ACDC7C31BFD8921ACD6F(____subject0_unmarshaled, ____payload1_unmarshaled, ____receipt2_unmarshaled, ____transactionId3_unmarshaled, NULL);

}
// System.Void UnityEngine.Purchasing.TizenStoreImpl::.ctor(Uniject.IUtil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TizenStoreImpl__ctor_m321DCE8FEC335296806C36189F051ECAB2D71BE6 (TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F * __this, RuntimeObject* ___util0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TizenStoreImpl__ctor_m321DCE8FEC335296806C36189F051ECAB2D71BE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JSONStore__ctor_m570AB189D1235ABACA377D61EBED022A6E38106A(__this, /*hidden argument*/NULL);
		((TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F_StaticFields*)il2cpp_codegen_static_fields_for(TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F_il2cpp_TypeInfo_var))->set_instance_21(__this);
		return;
	}
}
// System.Void UnityEngine.Purchasing.TizenStoreImpl::SetNativeStore(UnityEngine.Purchasing.INativeTizenStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TizenStoreImpl_SetNativeStore_m793D9286E36D9D55FA74D81EC191A269850D5DA5 (TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F * __this, RuntimeObject* ___tizen0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TizenStoreImpl_SetNativeStore_m793D9286E36D9D55FA74D81EC191A269850D5DA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___tizen0;
		JSONStore_SetNativeStore_m3736579E1263AF2F1E9296FB9C65BCB2A71C7EAA(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___tizen0;
		__this->set_m_Native_22(L_1);
		RuntimeObject* L_2 = __this->get_m_Native_22();
		UnityNativePurchasingCallback_t58A016E25D4C5E8E9C7709A2EE87766ED4D02136 * L_3 = (UnityNativePurchasingCallback_t58A016E25D4C5E8E9C7709A2EE87766ED4D02136 *)il2cpp_codegen_object_new(UnityNativePurchasingCallback_t58A016E25D4C5E8E9C7709A2EE87766ED4D02136_il2cpp_TypeInfo_var);
		UnityNativePurchasingCallback__ctor_mB78EE550A774D3E98D4F9057777372466C571A1D(L_3, NULL, (intptr_t)((intptr_t)TizenStoreImpl_MessageCallback_m65782C3F5BD31A3D4598ACDC7C31BFD8921ACD6F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< UnityNativePurchasingCallback_t58A016E25D4C5E8E9C7709A2EE87766ED4D02136 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.INativeTizenStore::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityNativePurchasingCallback) */, INativeTizenStore_tBE922CEC3C79DD943B7C161F236B1B5ABDF45A02_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
// System.Void UnityEngine.Purchasing.TizenStoreImpl::SetGroupId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TizenStoreImpl_SetGroupId_mFDFA710651D5A19DE81CE28F9F88BCA7BB0BBDCD (TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F * __this, String_t* ___group0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TizenStoreImpl_SetGroupId_mFDFA710651D5A19DE81CE28F9F88BCA7BB0BBDCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_m_Native_22();
		String_t* L_1 = ___group0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Purchasing.INativeTizenStore::SetGroupId(System.String) */, INativeTizenStore_tBE922CEC3C79DD943B7C161F236B1B5ABDF45A02_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Purchasing.TizenStoreImpl::MessageCallback(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TizenStoreImpl_MessageCallback_m65782C3F5BD31A3D4598ACDC7C31BFD8921ACD6F (String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TizenStoreImpl_MessageCallback_m65782C3F5BD31A3D4598ACDC7C31BFD8921ACD6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F * L_0 = ((TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F_StaticFields*)il2cpp_codegen_static_fields_for(TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F_il2cpp_TypeInfo_var))->get_instance_21();
		String_t* L_1 = ___subject0;
		String_t* L_2 = ___payload1;
		String_t* L_3 = ___receipt2;
		String_t* L_4 = ___transactionId3;
		NullCheck(L_0);
		TizenStoreImpl_ProcessMessage_mD7007794AB8AA3A88650816CBBC8FCF8B5C11293(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.TizenStoreImpl::ProcessMessage(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TizenStoreImpl_ProcessMessage_mD7007794AB8AA3A88650816CBBC8FCF8B5C11293 (TizenStoreImpl_tF23FF287F877F13281519611FC812EF7FB3E426F * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TizenStoreImpl_ProcessMessage_mD7007794AB8AA3A88650816CBBC8FCF8B5C11293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral33A60B6050387A625453A7D063EA527F5CB71AFF);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral33A60B6050387A625453A7D063EA527F5CB71AFF);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		String_t* L_3 = ___subject0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral7F5643317CCA2EBF82CE3DC5BFC3D332182F9C5F);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7F5643317CCA2EBF82CE3DC5BFC3D332182F9C5F);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		String_t* L_6 = ___payload1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral63EFC5D5F600359FF5C4570EE809D7671AC9E5C7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral63EFC5D5F600359FF5C4570EE809D7671AC9E5C7);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		String_t* L_9 = ___receipt2;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_9);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralE25E43159D118DB0FB2B8A6457B0D9FBC5635779);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralE25E43159D118DB0FB2B8A6457B0D9FBC5635779);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		String_t* L_12 = ___transactionId3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_12);
		String_t* L_13 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_13, /*hidden argument*/NULL);
		String_t* L_14 = ___subject0;
		V_0 = L_14;
		String_t* L_15 = V_0;
		bool L_16 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_15, _stringLiteralB0235FCB25E3CDF64B64EA7A2EAEC25032CBEE36, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_007b;
		}
	}
	{
		String_t* L_17 = V_0;
		bool L_18 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_17, _stringLiteralBE679B9DD2C045389AC1E47C3F738BDD301988B2, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0085;
		}
	}
	{
		String_t* L_19 = V_0;
		bool L_20 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_19, _stringLiteral41455A2F6CACC62D6A112E95764B80F533243ECE, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_21 = V_0;
		bool L_22 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_21, _stringLiteral71A19FF0E8CBC63DDF6D1A795769E70AC9F69212, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_009c;
		}
	}
	{
		goto IL_00a6;
	}

IL_007b:
	{
		String_t* L_23 = ___payload1;
		JSONStore_OnSetupFailed_mC3A81D5E4F165955CF01B34EA3B4E25E9604FC20(__this, L_23, /*hidden argument*/NULL);
		goto IL_00a6;
	}

IL_0085:
	{
		String_t* L_24 = ___payload1;
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void UnityEngine.Purchasing.JSONStore::OnProductsRetrieved(System.String) */, __this, L_24);
		goto IL_00a6;
	}

IL_008f:
	{
		String_t* L_25 = ___payload1;
		String_t* L_26 = ___receipt2;
		String_t* L_27 = ___transactionId3;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(21 /* System.Void UnityEngine.Purchasing.JSONStore::OnPurchaseSucceeded(System.String,System.String,System.String) */, __this, L_25, L_26, L_27);
		goto IL_00a6;
	}

IL_009c:
	{
		String_t* L_28 = ___payload1;
		JSONStore_OnPurchaseFailed_mB52127D8AEB6C50D1F322BEA7CACF907E34EB3C9(__this, L_28, /*hidden argument*/NULL);
		goto IL_00a6;
	}

IL_00a6:
	{
		return;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Purchasing.UDP::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UDP_get_Name_m6398AF6AB3D6F42AC6C7199F78DE3A25E76DD259 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDP_get_Name_m6398AF6AB3D6F42AC6C7199F78DE3A25E76DD259_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = StoreService_get_StoreName_m330CEB11AD2E4EDC492803B814482FB1BD30BB23(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0014;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000a;
		throw e;
	}

CATCH_000a:
	{ // begin catch(System.Exception)
		V_0 = _stringLiteralE9A6F622E340090FEB219EB5C94B0DF756E8E486;
		goto IL_0014;
	} // end catch (depth: 1)

IL_0014:
	{
		String_t* L_1 = V_0;
		return L_1;
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
// System.Void UnityEngine.Purchasing.UDPBindings::Initialize(System.Action`2<System.Boolean,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_Initialize_m4103FD0B719C6DFD3DF91D77E9FC7B69D064A8D4 (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_Initialize_m4103FD0B719C6DFD3DF91D77E9FC7B69D064A8D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_0 = ___callback0;
		V_0 = (bool)((((RuntimeObject*)(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0043;
	}

IL_000c:
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_2 = __this->get_m_InitCallback_1();
		V_1 = (bool)((!(((RuntimeObject*)(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_4 = ___callback0;
		NullCheck(L_4);
		Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903(L_4, (bool)0, _stringLiteralAB24B7DAD62C09393BDE30850ADE4F172414F6F4, /*hidden argument*/Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var);
		goto IL_0043;
	}

IL_0029:
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_5 = ___callback0;
		__this->set_m_InitCallback_1(L_5);
		Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * L_6 = (Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 *)il2cpp_codegen_object_new(Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4100552BFA81C576088D6C8247BBA22E2552D05C(L_6, /*hidden argument*/Dictionary_2__ctor_m4100552BFA81C576088D6C8247BBA22E2552D05C_RuntimeMethod_var);
		__this->set_m_LocalPurchasesCache_4(L_6);
		StoreService_Initialize_mFC32F839FB1E996792BECE585C81AB9B59263DB0(__this, (AppInfo_tCA4BF037393743799729827487AFC4C1502E37B8 *)NULL, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::Purchase(System.String,System.Action`2<System.Boolean,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_Purchase_m4C7DDF41FD704CAE189004CED06A9D2BC7D7EEED (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, String_t* ___productId0, Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * ___callback1, String_t* ___developerPayload2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_Purchase_m4C7DDF41FD704CAE189004CED06A9D2BC7D7EEED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_0 = ___callback1;
		V_0 = (bool)((((RuntimeObject*)(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0038;
	}

IL_000b:
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_2 = __this->get_m_PurchaseCallback_0();
		V_1 = (bool)((!(((RuntimeObject*)(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_4 = ___callback1;
		NullCheck(L_4);
		Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903(L_4, (bool)0, _stringLiteral7F8C59D560D31CCE9A5B206D8EA5F6C38267C1D0, /*hidden argument*/Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var);
		goto IL_0038;
	}

IL_0028:
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_5 = ___callback1;
		__this->set_m_PurchaseCallback_0(L_5);
		String_t* L_6 = ___productId0;
		String_t* L_7 = ___developerPayload2;
		StoreService_Purchase_mA4D0893997740F87B339AC644E00CA4C1A605F9A(L_6, L_7, __this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_RetrieveProducts_m92BEEB5D0A5ABEBE12021986DB48C219E56A0A9A (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * ___products0, Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_RetrieveProducts_m92BEEB5D0A5ABEBE12021986DB48C219E56A0A9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_0 = ___callback1;
		V_1 = (bool)((((RuntimeObject*)(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0075;
	}

IL_000c:
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_2 = __this->get_m_RetrieveProductsCallback_2();
		V_2 = (bool)((!(((RuntimeObject*)(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_4 = ___callback1;
		NullCheck(L_4);
		Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903(L_4, (bool)0, _stringLiteral865D8C1E90DC1EDA4DC9155444CD1C69A57057C4, /*hidden argument*/Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var);
		goto IL_0075;
	}

IL_0029:
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_5 = ___callback1;
		__this->set_m_RetrieveProductsCallback_2(L_5);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_6 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_6, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		V_0 = L_6;
		ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * L_7 = ___products0;
		NullCheck(L_7);
		RuntimeObject* L_8 = ReadOnlyCollection_1_GetEnumerator_m4DAE5244E68062F3211869C745AF7AEEFF5B3556(L_7, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_m4DAE5244E68062F3211869C745AF7AEEFF5B3556_RuntimeMethod_var);
		V_3 = L_8;
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0058;
		}

IL_0040:
		{
			RuntimeObject* L_9 = V_3;
			NullCheck(L_9);
			ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_10 = InterfaceFuncInvoker0< ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductDefinition>::get_Current() */, IEnumerator_1_t03AC33D97EBA418F757A9065CE29CE44AA6487BB_il2cpp_TypeInfo_var, L_9);
			V_4 = L_10;
			List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_11 = V_0;
			ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_12 = V_4;
			NullCheck(L_12);
			String_t* L_13 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_11, L_13, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		}

IL_0058:
		{
			RuntimeObject* L_14 = V_3;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0040;
			}
		}

IL_0060:
		{
			IL2CPP_LEAVE(0x6D, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_3;
			if (!L_16)
			{
				goto IL_006c;
			}
		}

IL_0065:
		{
			RuntimeObject* L_17 = V_3;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_17);
		}

IL_006c:
		{
			IL2CPP_END_FINALLY(98)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006d:
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_18 = V_0;
		StoreService_QueryInventory_m97F54D6DA103F2BE96C58EDE49572F88CADE02BE(L_18, __this, /*hidden argument*/NULL);
	}

IL_0075:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_FinishTransaction_m040A9DB0BB6554DC4CCA106A2E446A4556AF854D (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___productDefinition0, String_t* ___transactionID1, const RuntimeMethod* method)
{
	PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * V_0 = NULL;
	bool V_1 = false;
	{
		String_t* L_0 = ___transactionID1;
		PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_1 = UDPBindings_FindPurchaseInfo_mCC90D19D926F00D68C304C0D92261E977824CF72(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_4 = V_0;
		StoreService_ConsumePurchase_mD4C7060E9D4649FCDBD9CFC48F8410B134C10533(L_4, __this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// UnityEngine.UDP.PurchaseInfo UnityEngine.Purchasing.UDPBindings::FindPurchaseInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * UDPBindings_FindPurchaseInfo_mCC90D19D926F00D68C304C0D92261E977824CF72 (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, String_t* ___transactionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_FindPurchaseInfo_mCC90D19D926F00D68C304C0D92261E977824CF72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419 * V_0 = NULL;
	Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * V_2 = NULL;
	bool V_3 = false;
	PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * V_4 = NULL;
	Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	KeyValuePair_2_t2111E3493A19FE16C45F0C03E1268EE474491464  V_6;
	memset((&V_6), 0, sizeof(V_6));
	PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * V_7 = NULL;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3 * L_0 = __this->get_m_Inventory_3();
		NullCheck(L_0);
		List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419 * L_1 = Inventory_GetPurchaseList_mD70DFAD8D7FBE377CFC971A4A861982DE02218E4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t3D66A5395444EA0DAF361D2672CE6B9A686B7419 * L_2 = V_0;
		NullCheck(L_2);
		Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2  L_3 = List_1_GetEnumerator_mF7F3DD6B7B370EFC404FF50E5A0897B80C1193EC(L_2, /*hidden argument*/List_1_GetEnumerator_mF7F3DD6B7B370EFC404FF50E5A0897B80C1193EC_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0051;
		}

IL_0017:
		{
			PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_4 = Enumerator_get_Current_m56DEB3D7F65E4E5BF8907D3E8CA99BB2BFDD7C45_inline((Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m56DEB3D7F65E4E5BF8907D3E8CA99BB2BFDD7C45_RuntimeMethod_var);
			V_2 = L_4;
			PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_5 = V_2;
			NullCheck(L_5);
			String_t* L_6 = PurchaseInfo_get_GameOrderId_m72B0F3D50BA4F455E255E8D84C4EF2AB4B0568B5_inline(L_5, /*hidden argument*/NULL);
			String_t* L_7 = ___transactionId0;
			NullCheck(L_6);
			bool L_8 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_6, L_7, /*hidden argument*/NULL);
			V_3 = L_8;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0050;
			}
		}

IL_0030:
		{
			Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3 * L_10 = __this->get_m_Inventory_3();
			NullCheck(L_10);
			RuntimeObject* L_11 = Inventory_GetPurchaseDictionary_m2871E56A7ACBDE30029D2B5D456EEBA16E10928F(L_10, /*hidden argument*/NULL);
			PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_12 = V_2;
			NullCheck(L_12);
			String_t* L_13 = PurchaseInfo_get_ProductId_m5A66D147951003A6AE84A0E48E1B9CC83B792559_inline(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,UnityEngine.UDP.PurchaseInfo>::Remove(!0) */, IDictionary_2_t830C52CE7928BE34A54E2EDEC9065849CE9894E1_il2cpp_TypeInfo_var, L_11, L_13);
			PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_14 = V_2;
			V_4 = L_14;
			IL2CPP_LEAVE(0xDB, FINALLY_005c);
		}

IL_0050:
		{
		}

IL_0051:
		{
			bool L_15 = Enumerator_MoveNext_m7D2CB9FC4662B992F4AF38F30E26C536059A1B68((Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m7D2CB9FC4662B992F4AF38F30E26C536059A1B68_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0017;
			}
		}

IL_005a:
		{
			IL2CPP_LEAVE(0x6B, FINALLY_005c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005c;
	}

FINALLY_005c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m514C11E20FD89F7F296D3066554C7AE9DCBA12F6((Enumerator_t0304E4CB5A8CE31702E3D038355BD8051D46D5F2 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m514C11E20FD89F7F296D3066554C7AE9DCBA12F6_RuntimeMethod_var);
		IL2CPP_END_FINALLY(92)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(92)
	{
		IL2CPP_JUMP_TBL(0xDB, IL_00db)
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006b:
	{
		Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * L_16 = __this->get_m_LocalPurchasesCache_4();
		NullCheck(L_16);
		Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4  L_17 = Dictionary_2_GetEnumerator_m30E10525DFE9B016974C4A7C4717989602B574BE(L_16, /*hidden argument*/Dictionary_2_GetEnumerator_m30E10525DFE9B016974C4A7C4717989602B574BE_RuntimeMethod_var);
		V_5 = L_17;
	}

IL_0079:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bc;
		}

IL_007b:
		{
			KeyValuePair_2_t2111E3493A19FE16C45F0C03E1268EE474491464  L_18 = Enumerator_get_Current_m6633FB5534752211DB3450762F2DCF5C63403416_inline((Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4 *)(&V_5), /*hidden argument*/Enumerator_get_Current_m6633FB5534752211DB3450762F2DCF5C63403416_RuntimeMethod_var);
			V_6 = L_18;
			PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_19 = KeyValuePair_2_get_Value_mD69EB259EC04E27C535F5B89BAE5CCE4444D6863_inline((KeyValuePair_2_t2111E3493A19FE16C45F0C03E1268EE474491464 *)(&V_6), /*hidden argument*/KeyValuePair_2_get_Value_mD69EB259EC04E27C535F5B89BAE5CCE4444D6863_RuntimeMethod_var);
			V_7 = L_19;
			PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_20 = V_7;
			NullCheck(L_20);
			String_t* L_21 = PurchaseInfo_get_GameOrderId_m72B0F3D50BA4F455E255E8D84C4EF2AB4B0568B5_inline(L_20, /*hidden argument*/NULL);
			String_t* L_22 = ___transactionId0;
			NullCheck(L_21);
			bool L_23 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_21, L_22, /*hidden argument*/NULL);
			V_8 = L_23;
			bool L_24 = V_8;
			if (!L_24)
			{
				goto IL_00bb;
			}
		}

IL_00a1:
		{
			Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * L_25 = __this->get_m_LocalPurchasesCache_4();
			PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_26 = V_7;
			NullCheck(L_26);
			String_t* L_27 = PurchaseInfo_get_GameOrderId_m72B0F3D50BA4F455E255E8D84C4EF2AB4B0568B5_inline(L_26, /*hidden argument*/NULL);
			NullCheck(L_25);
			Dictionary_2_Remove_mE6ABD18DFBF5822700D6F69EF732F65BD12AACD6(L_25, L_27, /*hidden argument*/Dictionary_2_Remove_mE6ABD18DFBF5822700D6F69EF732F65BD12AACD6_RuntimeMethod_var);
			PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_28 = V_7;
			V_4 = L_28;
			IL2CPP_LEAVE(0xDB, FINALLY_00c7);
		}

IL_00bb:
		{
		}

IL_00bc:
		{
			bool L_29 = Enumerator_MoveNext_m79E9E093FAC0C0A6F683262FBF0A30B25000D5D5((Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m79E9E093FAC0C0A6F683262FBF0A30B25000D5D5_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_007b;
			}
		}

IL_00c5:
		{
			IL2CPP_LEAVE(0xD6, FINALLY_00c7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c7;
	}

FINALLY_00c7:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0A75A4CFFB837ECE42A0DB9FD281D1685E4D233F((Enumerator_t4145A55D211511043B0FE79AC31B57C242EE16D4 *)(&V_5), /*hidden argument*/Enumerator_Dispose_m0A75A4CFFB837ECE42A0DB9FD281D1685E4D233F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(199)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(199)
	{
		IL2CPP_JUMP_TBL(0xDB, IL_00db)
		IL2CPP_JUMP_TBL(0xD6, IL_00d6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d6:
	{
		V_4 = (PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 *)NULL;
		goto IL_00db;
	}

IL_00db:
	{
		PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_30 = V_4;
		return L_30;
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::OnInitialized(UnityEngine.UDP.UserInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_OnInitialized_m105419A4BD4517BF3CBA844FD6695B82F611ABE7 (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD * ___userInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_OnInitialized_m105419A4BD4517BF3CBA844FD6695B82F611ABE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD * L_0 = ___userInfo0;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_1 = UDPBindings_StringPropertyToDictionary_mC7D430868B5247E8A0FF6E425A7D6340E56C3C35(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_2 = V_0;
		String_t* L_3 = MiniJsonExtensions_toJson_mD043B50E39DCA34D4279C22E1A444A29645008F9(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_4 = __this->get_m_InitCallback_1();
		String_t* L_5 = V_1;
		NullCheck(L_4);
		Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903(L_4, (bool)1, L_5, /*hidden argument*/Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var);
		__this->set_m_InitCallback_1((Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::OnInitializeFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_OnInitializeFailed_mB31DD8C25EC798C29B85818CA1402965C192834A (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_OnInitializeFailed_mB31DD8C25EC798C29B85818CA1402965C192834A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_0 = (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *)il2cpp_codegen_object_new(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B(L_0, /*hidden argument*/Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_1 = V_0;
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_1, _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671, L_2, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_3 = V_0;
		String_t* L_4 = MiniJsonExtensions_toJson_mD043B50E39DCA34D4279C22E1A444A29645008F9(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_5 = __this->get_m_InitCallback_1();
		String_t* L_6 = V_1;
		NullCheck(L_5);
		Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903(L_5, (bool)0, L_6, /*hidden argument*/Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var);
		__this->set_m_InitCallback_1((Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::OnPurchase(UnityEngine.UDP.PurchaseInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_OnPurchase_m9545DD5169EE8EAEF50D7A9A160A9F4BCFABE975 (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * ___purchaseInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_OnPurchase_m9545DD5169EE8EAEF50D7A9A160A9F4BCFABE975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_0 = ___purchaseInfo0;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_1 = UDPBindings_StringPropertyToDictionary_mC7D430868B5247E8A0FF6E425A7D6340E56C3C35(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_2 = V_0;
		String_t* L_3 = MiniJsonExtensions_toJson_mD043B50E39DCA34D4279C22E1A444A29645008F9(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Dictionary_2_t553EE73D8A332BFC1C6419ACB5246039EDE990A9 * L_4 = __this->get_m_LocalPurchasesCache_4();
		PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_5 = ___purchaseInfo0;
		NullCheck(L_5);
		String_t* L_6 = PurchaseInfo_get_GameOrderId_m72B0F3D50BA4F455E255E8D84C4EF2AB4B0568B5_inline(L_5, /*hidden argument*/NULL);
		PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_7 = ___purchaseInfo0;
		NullCheck(L_4);
		Dictionary_2_set_Item_mBA9D37305B4A8406DDF4E91FA2B49168A4270AA3(L_4, L_6, L_7, /*hidden argument*/Dictionary_2_set_Item_mBA9D37305B4A8406DDF4E91FA2B49168A4270AA3_RuntimeMethod_var);
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_8 = __this->get_m_PurchaseCallback_0();
		String_t* L_9 = V_1;
		NullCheck(L_8);
		Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903(L_8, (bool)1, L_9, /*hidden argument*/Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var);
		__this->set_m_PurchaseCallback_0((Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::OnPurchaseFailed(System.String,UnityEngine.UDP.PurchaseInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_OnPurchaseFailed_m287C30F2D2F0A40044CE5E5781B808FD2E9A0D32 (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, String_t* ___message0, PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * ___purchaseInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_OnPurchaseFailed_m287C30F2D2F0A40044CE5E5781B808FD2E9A0D32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_0, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_1 = V_0;
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_1, _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671, L_2, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_3 = ___purchaseInfo1;
		V_2 = (bool)((!(((RuntimeObject*)(PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_5 = V_0;
		PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_6 = ___purchaseInfo1;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_7 = UDPBindings_StringPropertyToDictionary_mC7D430868B5247E8A0FF6E425A7D6340E56C3C35(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_5, _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D, L_7, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_0030:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_8 = V_0;
		String_t* L_9 = MiniJsonExtensions_toJson_m990366CD4919BF3809E5C83E6F64A7B12D19F2DB(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_10 = __this->get_m_PurchaseCallback_0();
		String_t* L_11 = V_1;
		NullCheck(L_10);
		Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903(L_10, (bool)0, L_11, /*hidden argument*/Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var);
		__this->set_m_PurchaseCallback_0((Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::OnPurchaseConsume(UnityEngine.UDP.PurchaseInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_OnPurchaseConsume_m6AE3C58AD8D05E4379BDAA414732CF3ADC837B65 (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * ___purchaseInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_OnPurchaseConsume_m6AE3C58AD8D05E4379BDAA414732CF3ADC837B65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_0 = ___purchaseInfo0;
		NullCheck(L_0);
		String_t* L_1 = PurchaseInfo_get_GameOrderId_m72B0F3D50BA4F455E255E8D84C4EF2AB4B0568B5_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralCCF62FF573F6DB000404C805BC30B60CDD90564B, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::OnPurchaseConsumeFailed(System.String,UnityEngine.UDP.PurchaseInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_OnPurchaseConsumeFailed_m755AD2F195FCCEB8C036E66D292A6A084F5F34A7 (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, String_t* ___message0, PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * ___purchaseInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_OnPurchaseConsumeFailed_m755AD2F195FCCEB8C036E66D292A6A084F5F34A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralCEE66CC26E22895F7AE954C26F1E677F566A371E, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::OnQueryInventory(UnityEngine.UDP.Inventory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_OnQueryInventory_mC8FCC1375F4AA3B56D7ECD4E72FD1F81A58850FF (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3 * ___inventory0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_OnQueryInventory_mC8FCC1375F4AA3B56D7ECD4E72FD1F81A58850FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * V_4 = NULL;
	ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * V_5 = NULL;
	ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * V_6 = NULL;
	bool V_7 = false;
	PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * V_8 = NULL;
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * V_9 = NULL;
	String_t* V_10 = NULL;
	String_t* V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3 * L_0 = ___inventory0;
		__this->set_m_Inventory_3(L_0);
		HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A * L_1 = (HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A *)il2cpp_codegen_object_new(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mC094CC8497A333D659AB37D62F5510FFB9FFB5D0(L_1, /*hidden argument*/HashSet_1__ctor_mC094CC8497A333D659AB37D62F5510FFB9FFB5D0_RuntimeMethod_var);
		V_0 = L_1;
		Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3 * L_2 = ___inventory0;
		NullCheck(L_2);
		RuntimeObject* L_3 = Inventory_GetProductList_m9678BB02F6C6D9A5B65055127959E563EA508723(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.UDP.ProductInfo>::GetEnumerator() */, IEnumerable_1_t4545446D1C1AE3455C6AD58C13A9959C4A6CBDA7_il2cpp_TypeInfo_var, L_4);
		V_3 = L_5;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_012f;
		}

IL_0022:
		{
			RuntimeObject* L_6 = V_3;
			NullCheck(L_6);
			ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * L_7 = InterfaceFuncInvoker0< ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.UDP.ProductInfo>::get_Current() */, IEnumerator_1_tC195E33DFDF39BB7E73302781F8D7D6F36202CD3_il2cpp_TypeInfo_var, L_6);
			V_4 = L_7;
			ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * L_8 = V_4;
			NullCheck(L_8);
			String_t* L_9 = ProductInfo_get_Price_mC20BE4DAF0ACEF1FD8E3D73A7B822392A8507F06_inline(L_8, /*hidden argument*/NULL);
			ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * L_10 = V_4;
			NullCheck(L_10);
			String_t* L_11 = ProductInfo_get_Title_mC4CA7A45F2B62F059EC6D15EF9B61143195A6DE2_inline(L_10, /*hidden argument*/NULL);
			ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * L_12 = V_4;
			NullCheck(L_12);
			String_t* L_13 = ProductInfo_get_Description_m53DAEB7FBE4BC4578CF76432E7D9A425A6BE3DF8_inline(L_12, /*hidden argument*/NULL);
			ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * L_14 = V_4;
			NullCheck(L_14);
			String_t* L_15 = ProductInfo_get_Currency_mBD8B233524D8F45A7540BE2CE32B2E56A44A3EC9_inline(L_14, /*hidden argument*/NULL);
			ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * L_16 = V_4;
			NullCheck(L_16);
			int64_t L_17 = ProductInfo_get_PriceAmountMicros_mEADCB6715E057C8FC274E4C087849835CD977528_inline(L_16, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
			Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_18 = Convert_ToDecimal_mECE2EDC28EBA5F0B88702C15D0A3A1DABEE8D6A1(L_17, /*hidden argument*/NULL);
			Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_19;
			memset((&L_19), 0, sizeof(L_19));
			Decimal__ctor_m6AEED1DCCFC59CB0AEBEC253F049953427BA4912((&L_19), ((int32_t)1000000), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var);
			Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_20 = Decimal_op_Division_m5A14CCDBC929DEB14F9AC195C7456DF0AE76F514(L_18, L_19, /*hidden argument*/NULL);
			ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_21 = (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 *)il2cpp_codegen_object_new(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48_il2cpp_TypeInfo_var);
			ProductMetadata__ctor_m70965CC8C6DAC8C37A0C8FC08FAE2DE7C091435C(L_21, L_9, L_11, L_13, L_15, L_20, /*hidden argument*/NULL);
			V_5 = L_21;
			ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * L_22 = V_4;
			NullCheck(L_22);
			String_t* L_23 = ProductInfo_get_ProductId_m242CEBB620758129A347F64915E3804C0A0377FE_inline(L_22, /*hidden argument*/NULL);
			ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_24 = V_5;
			ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * L_25 = (ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 *)il2cpp_codegen_object_new(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582_il2cpp_TypeInfo_var);
			ProductDescription__ctor_m8832B1A2CE8063B4AD5ACF5B0E9F8AC68AC35B84(L_25, L_23, L_24, /*hidden argument*/NULL);
			V_6 = L_25;
			Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3 * L_26 = ___inventory0;
			ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * L_27 = V_4;
			NullCheck(L_27);
			String_t* L_28 = ProductInfo_get_ProductId_m242CEBB620758129A347F64915E3804C0A0377FE_inline(L_27, /*hidden argument*/NULL);
			NullCheck(L_26);
			bool L_29 = Inventory_HasPurchase_mF85934E2955EA88D3DFA490B64F4B79CE06B4545(L_26, L_28, /*hidden argument*/NULL);
			V_7 = L_29;
			bool L_30 = V_7;
			if (!L_30)
			{
				goto IL_0125;
			}
		}

IL_008f:
		{
			Inventory_t2179CC5D4C0584A26917CE8F5248C3A60B4C42A3 * L_31 = ___inventory0;
			ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * L_32 = V_4;
			NullCheck(L_32);
			String_t* L_33 = ProductInfo_get_ProductId_m242CEBB620758129A347F64915E3804C0A0377FE_inline(L_32, /*hidden argument*/NULL);
			NullCheck(L_31);
			PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_34 = Inventory_GetPurchaseInfo_m2F79B35198C5FB4DE4D15321047B6090F82F2AB7(L_31, L_33, /*hidden argument*/NULL);
			V_8 = L_34;
			PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_35 = V_8;
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_36 = UDPBindings_StringPropertyToDictionary_mC7D430868B5247E8A0FF6E425A7D6340E56C3C35(L_35, /*hidden argument*/NULL);
			V_9 = L_36;
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_37 = V_9;
			NullCheck(L_37);
			String_t* L_38 = Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E(L_37, _stringLiteral0650DE9E26E2AA79CC57EDED9B8928F8668B9EA5, /*hidden argument*/Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E_RuntimeMethod_var);
			V_10 = L_38;
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_39 = V_9;
			NullCheck(L_39);
			String_t* L_40 = Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E(L_39, _stringLiteralC9470C99119C4E0DCB89D108BEAC5078E9E95560, /*hidden argument*/Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E_RuntimeMethod_var);
			V_11 = L_40;
			String_t* L_41 = V_10;
			bool L_42 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_41, /*hidden argument*/NULL);
			V_12 = (bool)((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
			bool L_43 = V_12;
			if (!L_43)
			{
				goto IL_00e5;
			}
		}

IL_00d4:
		{
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_44 = V_9;
			String_t* L_45 = V_10;
			NullCheck(L_44);
			Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_44, _stringLiteralEEC947EFA94259F79FE7A8031A0644FA4D6F7E55, L_45, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
		}

IL_00e5:
		{
			String_t* L_46 = V_11;
			bool L_47 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_46, /*hidden argument*/NULL);
			V_13 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
			bool L_48 = V_13;
			if (!L_48)
			{
				goto IL_0106;
			}
		}

IL_00f5:
		{
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_49 = V_9;
			String_t* L_50 = V_11;
			NullCheck(L_49);
			Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_49, _stringLiteral3CA230360D8FF1EB1494B9AFEFA28AE96B3D2DFA, L_50, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
		}

IL_0106:
		{
			ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * L_51 = V_4;
			NullCheck(L_51);
			String_t* L_52 = ProductInfo_get_ProductId_m242CEBB620758129A347F64915E3804C0A0377FE_inline(L_51, /*hidden argument*/NULL);
			ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_53 = V_5;
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_54 = V_9;
			String_t* L_55 = MiniJsonExtensions_toJson_mD043B50E39DCA34D4279C22E1A444A29645008F9(L_54, /*hidden argument*/NULL);
			PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * L_56 = V_8;
			NullCheck(L_56);
			String_t* L_57 = PurchaseInfo_get_GameOrderId_m72B0F3D50BA4F455E255E8D84C4EF2AB4B0568B5_inline(L_56, /*hidden argument*/NULL);
			ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * L_58 = (ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 *)il2cpp_codegen_object_new(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582_il2cpp_TypeInfo_var);
			ProductDescription__ctor_m15AFAD4A4B454B69A3468511F3BE9B41F6A61DBF(L_58, L_52, L_53, L_55, L_57, /*hidden argument*/NULL);
			V_6 = L_58;
		}

IL_0125:
		{
			HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A * L_59 = V_0;
			ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * L_60 = V_6;
			NullCheck(L_59);
			HashSet_1_Add_mF8C3766EFA306E384BD10BC05F1601F5549AC331(L_59, L_60, /*hidden argument*/HashSet_1_Add_mF8C3766EFA306E384BD10BC05F1601F5549AC331_RuntimeMethod_var);
		}

IL_012f:
		{
			RuntimeObject* L_61 = V_3;
			NullCheck(L_61);
			bool L_62 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_61);
			if (L_62)
			{
				goto IL_0022;
			}
		}

IL_013a:
		{
			IL2CPP_LEAVE(0x147, FINALLY_013c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013c;
	}

FINALLY_013c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_63 = V_3;
			if (!L_63)
			{
				goto IL_0146;
			}
		}

IL_013f:
		{
			RuntimeObject* L_64 = V_3;
			NullCheck(L_64);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_64);
		}

IL_0146:
		{
			IL2CPP_END_FINALLY(316)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(316)
	{
		IL2CPP_JUMP_TBL(0x147, IL_0147)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0147:
	{
		HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A * L_65 = V_0;
		String_t* L_66 = JSONSerializer_SerializeProductDescs_m6AD2FE8137CE5613A9477109D31AE1FB40C27E21(L_65, /*hidden argument*/NULL);
		V_2 = L_66;
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_67 = __this->get_m_RetrieveProductsCallback_2();
		String_t* L_68 = V_2;
		NullCheck(L_67);
		Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903(L_67, (bool)1, L_68, /*hidden argument*/Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var);
		__this->set_m_RetrieveProductsCallback_2((Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::OnQueryInventoryFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_OnQueryInventoryFailed_mDD39B74A00639BDAF17AF10ABF76C625E761E15A (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_OnQueryInventoryFailed_mDD39B74A00639BDAF17AF10ABF76C625E761E15A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * V_0 = NULL;
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_0 = (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *)il2cpp_codegen_object_new(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B(L_0, /*hidden argument*/Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_1 = V_0;
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_1, _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671, L_2, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_3 = __this->get_m_RetrieveProductsCallback_2();
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_4 = V_0;
		String_t* L_5 = MiniJsonExtensions_toJson_mD043B50E39DCA34D4279C22E1A444A29645008F9(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903(L_3, (bool)0, L_5, /*hidden argument*/Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::RetrieveProducts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_RetrieveProducts_m0098BAF030D3968F726482206721AB03A0A608F2 (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_RetrieveProducts_m0098BAF030D3968F726482206721AB03A0A608F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, UDPBindings_RetrieveProducts_m0098BAF030D3968F726482206721AB03A0A608F2_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::Purchase(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_Purchase_mFD3E0BE371A838228098A33BA7CB33BE42C98299 (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_Purchase_mFD3E0BE371A838228098A33BA7CB33BE42C98299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, UDPBindings_Purchase_mFD3E0BE371A838228098A33BA7CB33BE42C98299_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::FinishTransaction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings_FinishTransaction_m39A9FEA06CB34FB32ADFFA5900316CA4F113F7FB (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, String_t* ___productJSON0, String_t* ___transactionID1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_FinishTransaction_m39A9FEA06CB34FB32ADFFA5900316CA4F113F7FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, UDPBindings_FinishTransaction_m39A9FEA06CB34FB32ADFFA5900316CA4F113F7FB_RuntimeMethod_var);
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.UDPBindings::StringPropertyToDictionary(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * UDPBindings_StringPropertyToDictionary_mC7D430868B5247E8A0FF6E425A7D6340E56C3C35 (RuntimeObject * ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPBindings_StringPropertyToDictionary_mC7D430868B5247E8A0FF6E425A7D6340E56C3C35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * V_0 = NULL;
	PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* V_1 = NULL;
	PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* V_2 = NULL;
	int32_t V_3 = 0;
	PropertyInfo_t * V_4 = NULL;
	bool V_5 = false;
	String_t* V_6 = NULL;
	bool V_7 = false;
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * V_8 = NULL;
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_0 = (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *)il2cpp_codegen_object_new(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B(L_0, /*hidden argument*/Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject * L_1 = ___info0;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_3 = Type_GetProperties_mEAE2A4049447E8BD9D18989A80E4C8BC742AE97D(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_4 = V_1;
		V_2 = L_4;
		V_3 = 0;
		goto IL_0070;
	}

IL_001a:
	{
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		PropertyInfo_t * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		PropertyInfo_t * L_9 = V_4;
		NullCheck(L_9);
		Type_t * L_10 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_11, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_10) == ((RuntimeObject*)(Type_t *)L_12))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		PropertyInfo_t * L_14 = V_4;
		RuntimeObject * L_15 = ___info0;
		NullCheck(L_14);
		RuntimeObject * L_16 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_14, L_15, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		V_6 = ((String_t*)CastclassSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var));
		String_t* L_17 = V_6;
		bool L_18 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_17, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_006a;
		}
	}
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_20 = V_0;
		PropertyInfo_t * L_21 = V_4;
		NullCheck(L_21);
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_21);
		String_t* L_23 = V_6;
		NullCheck(L_20);
		Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_20, L_22, L_23, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
	}

IL_006a:
	{
	}

IL_006b:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0070:
	{
		int32_t L_25 = V_3;
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_26 = V_2;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_27 = V_0;
		V_8 = L_27;
		goto IL_007b;
	}

IL_007b:
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_28 = V_8;
		return L_28;
	}
}
// System.Void UnityEngine.Purchasing.UDPBindings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPBindings__ctor_mF9EA6513D1476083E388C2E464160DC9E02B93AD (UDPBindings_t97BCD3D0F5E8A64D5B8CA2D242019A76CE6B0BBE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Purchasing.UDPImpl::SetNativeStore(UnityEngine.Purchasing.INativeUDPStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_SetNativeStore_m9FA58D2506BCDF77399CF3563C188CE2622CAEF0 (UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * __this, RuntimeObject* ___nativeUdpStore0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___nativeUdpStore0;
		__this->set_m_Bindings_21(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_Initialize_m1E6A9E9B401E311F682D5101ADCC4E5C6F4B24CF (UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * __this, RuntimeObject* ___callback0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___callback0;
		((JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3 *)__this)->set_unity_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_RetrieveProducts_m179F17D30A4EC8BDEBA7237735DBBD79C44B500D (UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * __this, ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * ___products0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPImpl_RetrieveProducts_m179F17D30A4EC8BDEBA7237735DBBD79C44B500D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154 * V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154 * L_0 = (U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass7_0__ctor_m6BCF46851996136C0EC3C3584AD1FB58B15C6620(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154 * L_2 = V_0;
		ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * L_3 = ___products0;
		NullCheck(L_2);
		L_2->set_products_0(L_3);
		U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154 * L_4 = V_0;
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_5 = (Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)il2cpp_codegen_object_new(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2_il2cpp_TypeInfo_var);
		Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8(L_5, __this, (intptr_t)((intptr_t)UDPImpl_U3CRetrieveProductsU3Eb__7_0_m10F210D0F874C810532C0DE8971720C5FD6E9000_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_retrieveCallback_1(L_5);
		bool L_6 = __this->get_m_Initialized_24();
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_8 = __this->get_m_Bindings_21();
		U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154 * L_9 = V_0;
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_10 = (Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)il2cpp_codegen_object_new(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2_il2cpp_TypeInfo_var);
		Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_mDEBE8D3B281E69ED69925AF2B16F2488553AAF59_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.INativeUDPStore::Initialize(System.Action`2<System.Boolean,System.String>) */, INativeUDPStore_tBE7EDA1F2F8E7E0A51D58063951C6B21F19C96DB_il2cpp_TypeInfo_var, L_8, L_10);
		goto IL_006a;
	}

IL_0050:
	{
		RuntimeObject* L_11 = __this->get_m_Bindings_21();
		U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154 * L_12 = V_0;
		NullCheck(L_12);
		ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * L_13 = L_12->get_products_0();
		U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154 * L_14 = V_0;
		NullCheck(L_14);
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_15 = L_14->get_retrieveCallback_1();
		NullCheck(L_11);
		InterfaceActionInvoker2< ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D *, Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * >::Invoke(2 /* System.Void UnityEngine.Purchasing.INativeUDPStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>) */, INativeUDPStore_tBE7EDA1F2F8E7E0A51D58063951C6B21F19C96DB_il2cpp_TypeInfo_var, L_11, L_13, L_15);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_Purchase_mB0C04B80DF20323B14E0440E4A62CDA41EAC42A4 (UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPImpl_Purchase_mB0C04B80DF20323B14E0440E4A62CDA41EAC42A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_tABAF20373A271E8D799FE1C91217AE25EC57E359 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_tABAF20373A271E8D799FE1C91217AE25EC57E359 * L_0 = (U3CU3Ec__DisplayClass8_0_tABAF20373A271E8D799FE1C91217AE25EC57E359 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tABAF20373A271E8D799FE1C91217AE25EC57E359_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8_0__ctor_m9DF9504D3629A013CA4D9ED278B1066DAE2F5F5B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_tABAF20373A271E8D799FE1C91217AE25EC57E359 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_1(__this);
		U3CU3Ec__DisplayClass8_0_tABAF20373A271E8D799FE1C91217AE25EC57E359 * L_2 = V_0;
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_3 = ___product0;
		NullCheck(L_2);
		L_2->set_product_0(L_3);
		RuntimeObject* L_4 = __this->get_m_Bindings_21();
		U3CU3Ec__DisplayClass8_0_tABAF20373A271E8D799FE1C91217AE25EC57E359 * L_5 = V_0;
		NullCheck(L_5);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_6 = L_5->get_product_0();
		NullCheck(L_6);
		String_t* L_7 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_6, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass8_0_tABAF20373A271E8D799FE1C91217AE25EC57E359 * L_8 = V_0;
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_9 = (Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)il2cpp_codegen_object_new(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2_il2cpp_TypeInfo_var);
		Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_mD3C2C50F2786DBA92CB8CD83705BFA9C535D8C81_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8_RuntimeMethod_var);
		String_t* L_10 = ___developerPayload1;
		NullCheck(L_4);
		InterfaceActionInvoker3< String_t*, Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *, String_t* >::Invoke(1 /* System.Void UnityEngine.Purchasing.INativeUDPStore::Purchase(System.String,System.Action`2<System.Boolean,System.String>,System.String) */, INativeUDPStore_tBE7EDA1F2F8E7E0A51D58063951C6B21F19C96DB_il2cpp_TypeInfo_var, L_4, L_7, L_9, L_10);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_FinishTransaction_m8522DB9E6274BF817E9DE1B2E40C245D846A3447 (UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPImpl_FinishTransaction_m8522DB9E6274BF817E9DE1B2E40C245D846A3447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_0 = ___product0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___transactionId1;
		G_B3_0 = ((((RuntimeObject*)(String_t*)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_000b;
	}

IL_000a:
	{
		G_B3_0 = 1;
	}

IL_000b:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002f;
	}

IL_0012:
	{
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_3 = ___product0;
		NullCheck(L_3);
		int32_t L_4 = ProductDefinition_get_type_mA29E160E9BB1D4A18009F3832F4743A43A499E07_inline(L_3, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_6 = __this->get_m_Bindings_21();
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_7 = ___product0;
		String_t* L_8 = ___transactionId1;
		NullCheck(L_6);
		InterfaceActionInvoker2< ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 *, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.INativeUDPStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String) */, INativeUDPStore_tBE7EDA1F2F8E7E0A51D58063951C6B21F19C96DB_il2cpp_TypeInfo_var, L_6, L_7, L_8);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::DictionaryToStringProperty(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_DictionaryToStringProperty_mF0801906914108998E612C027C9EC295B936D753 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dic0, RuntimeObject * ___info1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPImpl_DictionaryToStringProperty_mF0801906914108998E612C027C9EC295B936D753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* V_0 = NULL;
	PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyInfo_t * V_3 = NULL;
	bool V_4 = false;
	{
		RuntimeObject * L_0 = ___info1;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_2 = Type_GetProperties_mEAE2A4049447E8BD9D18989A80E4C8BC742AE97D(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_3 = V_0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_0050;
	}

IL_0014:
	{
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		PropertyInfo_t * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		PropertyInfo_t * L_8 = V_3;
		NullCheck(L_8);
		Type_t * L_9 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_8);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_10, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_9) == ((RuntimeObject*)(Type_t *)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		PropertyInfo_t * L_13 = V_3;
		RuntimeObject * L_14 = ___info1;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_15 = ___dic0;
		PropertyInfo_t * L_16 = V_3;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		String_t* L_18 = MiniJsonExtensions_GetString_mB42DECB2528309B3A49269120548258B3E0B6142(L_15, L_17, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(27 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_13, L_14, L_18, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_20 = V_2;
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl__ctor_mBC76110BC63178434CC98E45E0EB502E93B17E35 (UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_UserInfo_22((UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD *)NULL);
		__this->set_m_Initialized_24((bool)0);
		JSONStore__ctor_m570AB189D1235ABACA377D61EBED022A6E38106A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl::<RetrieveProducts>b__7_0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPImpl_U3CRetrieveProductsU3Eb__7_0_m10F210D0F874C810532C0DE8971720C5FD6E9000 (UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * __this, bool ___success0, String_t* ___json1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDPImpl_U3CRetrieveProductsU3Eb__7_0_m10F210D0F874C810532C0DE8971720C5FD6E9000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___success0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = ___json1;
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_4 = ___json1;
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void UnityEngine.Purchasing.JSONStore::OnProductsRetrieved(System.String) */, __this, L_4);
		goto IL_0039;
	}

IL_0020:
	{
		RuntimeObject* L_5 = ((JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3 *)__this)->get_m_Logger_11();
		String_t* L_6 = ___json1;
		String_t* L_7 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral6924EAA29A3250A2EDE96D82BEEED19218ED1778, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(3 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_5, L_7);
	}

IL_0039:
	{
		return;
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
// System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m6BCF46851996136C0EC3C3584AD1FB58B15C6620 (U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::<RetrieveProducts>b__1(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_mDEBE8D3B281E69ED69925AF2B16F2488553AAF59 (U3CU3Ec__DisplayClass7_0_t53603FF6A50DA53F3E78B7D52C63574639DC7154 * __this, bool ___success0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_mDEBE8D3B281E69ED69925AF2B16F2488553AAF59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_2 = NULL;
	bool V_3 = false;
	{
		UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * L_0 = __this->get_U3CU3E4__this_2();
		NullCheck(L_0);
		L_0->set_m_LastInitError_23(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * L_1 = __this->get_U3CU3E4__this_2();
		NullCheck(L_1);
		L_1->set_m_UserInfo_22((UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD *)NULL);
		bool L_2 = ___success0;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0098;
		}
	}
	{
		String_t* L_4 = ___message1;
		bool L_5 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_4, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_7 = ___message1;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_8 = MiniJsonExtensions_HashtableFromJson_m924DE4EC163F926FCAC0ACB6890D9865E1A3D0D9(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_9 = V_2;
		NullCheck(L_9);
		bool L_10 = Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89(L_9, _stringLiteral879F0B1BEF59EEEBF78CFD3A22F6F8077810CECF, /*hidden argument*/Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * L_12 = __this->get_U3CU3E4__this_2();
		UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD * L_13 = (UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD *)il2cpp_codegen_object_new(UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD_il2cpp_TypeInfo_var);
		UserInfo__ctor_m9C49199B6D47983375F3083236CE028280961B44(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_m_UserInfo_22(L_13);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_14 = V_2;
		UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * L_15 = __this->get_U3CU3E4__this_2();
		NullCheck(L_15);
		UserInfo_tEA6CDD375F18424AD96E23D04B0242E1D84D22DD * L_16 = L_15->get_m_UserInfo_22();
		UDPImpl_DictionaryToStringProperty_mF0801906914108998E612C027C9EC295B936D753(L_14, L_16, /*hidden argument*/NULL);
	}

IL_006b:
	{
	}

IL_006c:
	{
		UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * L_17 = __this->get_U3CU3E4__this_2();
		NullCheck(L_17);
		L_17->set_m_Initialized_24((bool)1);
		UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * L_18 = __this->get_U3CU3E4__this_2();
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->get_m_Bindings_21();
		ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * L_20 = __this->get_products_0();
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_21 = __this->get_retrieveCallback_1();
		NullCheck(L_19);
		InterfaceActionInvoker2< ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D *, Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * >::Invoke(2 /* System.Void UnityEngine.Purchasing.INativeUDPStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>) */, INativeUDPStore_tBE7EDA1F2F8E7E0A51D58063951C6B21F19C96DB_il2cpp_TypeInfo_var, L_19, L_20, L_21);
		goto IL_00b8;
	}

IL_0098:
	{
		UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * L_22 = __this->get_U3CU3E4__this_2();
		String_t* L_23 = ___message1;
		NullCheck(L_22);
		L_22->set_m_LastInitError_23(L_23);
		UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * L_24 = __this->get_U3CU3E4__this_2();
		NullCheck(L_24);
		RuntimeObject* L_25 = ((JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3 *)L_24)->get_unity_1();
		NullCheck(L_25);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason) */, IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var, L_25, 2);
	}

IL_00b8:
	{
		return;
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
// System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m9DF9504D3629A013CA4D9ED278B1066DAE2F5F5B (U3CU3Ec__DisplayClass8_0_tABAF20373A271E8D799FE1C91217AE25EC57E359 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass8_0::<Purchase>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_mD3C2C50F2786DBA92CB8CD83705BFA9C535D8C81 (U3CU3Ec__DisplayClass8_0_tABAF20373A271E8D799FE1C91217AE25EC57E359 * __this, bool ___success0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_mD3C2C50F2786DBA92CB8CD83705BFA9C535D8C81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_10 = NULL;
	String_t* V_11 = NULL;
	PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * V_12 = NULL;
	bool V_13 = false;
	{
		String_t* L_0 = ___message1;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_1 = MiniJsonExtensions_HashtableFromJson_m924DE4EC163F926FCAC0ACB6890D9865E1A3D0D9(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = ___success0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00e7;
		}
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_4 = V_0;
		String_t* L_5 = MiniJsonExtensions_GetString_mB42DECB2528309B3A49269120548258B3E0B6142(L_4, _stringLiteral0650DE9E26E2AA79CC57EDED9B8928F8668B9EA5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_2 = L_5;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_6 = V_0;
		String_t* L_7 = MiniJsonExtensions_GetString_mB42DECB2528309B3A49269120548258B3E0B6142(L_6, _stringLiteralC9470C99119C4E0DCB89D108BEAC5078E9E95560, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_3 = L_7;
		String_t* L_8 = V_2;
		bool L_9 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_8, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_11 = V_0;
		String_t* L_12 = V_2;
		NullCheck(L_11);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_11, _stringLiteralEEC947EFA94259F79FE7A8031A0644FA4D6F7E55, L_12, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_0051:
	{
		String_t* L_13 = V_3;
		bool L_14 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_13, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_006f;
		}
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_16 = V_0;
		String_t* L_17 = V_3;
		NullCheck(L_16);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_16, _stringLiteral3CA230360D8FF1EB1494B9AFEFA28AE96B3D2DFA, L_17, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_006f:
	{
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_18 = __this->get_product_0();
		NullCheck(L_18);
		String_t* L_19 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_18, /*hidden argument*/NULL);
		String_t* L_20 = V_3;
		NullCheck(L_19);
		bool L_21 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_19, L_20, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00ba;
		}
	}
	{
		UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * L_23 = __this->get_U3CU3E4__this_1();
		NullCheck(L_23);
		RuntimeObject* L_24 = ((JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3 *)L_23)->get_m_Logger_11();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = L_25;
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_27 = __this->get_product_0();
		NullCheck(L_27);
		String_t* L_28 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_28);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = L_26;
		String_t* L_30 = V_3;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_30);
		NullCheck(L_24);
		InterfaceActionInvoker3< int32_t, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(7 /* System.Void UnityEngine.ILogger::LogFormat(UnityEngine.LogType,System.String,System.Object[]) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_24, 0, _stringLiteral182DE3C6D2348C0A762814A36E91F0114F6A55E9, L_29);
	}

IL_00ba:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_31 = V_0;
		String_t* L_32 = MiniJsonExtensions_toJson_m990366CD4919BF3809E5C83E6F64A7B12D19F2DB(L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * L_33 = __this->get_U3CU3E4__this_1();
		NullCheck(L_33);
		RuntimeObject* L_34 = ((JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3 *)L_33)->get_unity_1();
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_35 = __this->get_product_0();
		NullCheck(L_35);
		String_t* L_36 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_35, /*hidden argument*/NULL);
		String_t* L_37 = V_4;
		String_t* L_38 = V_2;
		NullCheck(L_34);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseSucceeded(System.String,System.String,System.String) */, IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var, L_34, L_36, L_37, L_38);
		goto IL_0192;
	}

IL_00e7:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_39 = { reinterpret_cast<intptr_t> (PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_40 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeObject * L_41 = Enum_Parse_m8677C5E01F1258902058D844824B93F7836BF4C3(L_40, _stringLiteralBC7819B34FF87570745FBE461E36A16F80E562CE, /*hidden argument*/NULL);
		V_8 = ((*(int32_t*)((int32_t*)UnBox(L_41, PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var))));
		RuntimeObject * L_42 = Box(PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var, (&V_8));
		NullCheck(L_42);
		String_t* L_43 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_42);
		V_8 = *(int32_t*)UnBox(L_42);
		V_9 = L_43;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_44 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_44, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		V_10 = L_44;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_45 = V_10;
		String_t* L_46 = V_9;
		NullCheck(L_45);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_45, _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671, L_46, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_47 = V_0;
		NullCheck(L_47);
		bool L_48 = Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89(L_47, _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D, /*hidden argument*/Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var);
		V_13 = L_48;
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_0153;
		}
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_50 = V_10;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_51 = V_0;
		NullCheck(L_51);
		RuntimeObject * L_52 = Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2(L_51, _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D, /*hidden argument*/Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var);
		NullCheck(L_50);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_50, _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D, L_52, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_0153:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_53 = V_10;
		String_t* L_54 = MiniJsonExtensions_toJson_m990366CD4919BF3809E5C83E6F64A7B12D19F2DB(L_53, /*hidden argument*/NULL);
		V_11 = L_54;
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_55 = __this->get_product_0();
		NullCheck(L_55);
		String_t* L_56 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_55, /*hidden argument*/NULL);
		int32_t L_57 = V_8;
		String_t* L_58 = ___message1;
		PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * L_59 = (PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C *)il2cpp_codegen_object_new(PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C_il2cpp_TypeInfo_var);
		PurchaseFailureDescription__ctor_mD1B896C37FDB5EBB659FED6024169FFB1CAE0CF1(L_59, L_56, L_57, L_58, /*hidden argument*/NULL);
		V_12 = L_59;
		UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * L_60 = __this->get_U3CU3E4__this_1();
		PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * L_61 = V_12;
		NullCheck(L_60);
		((JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3 *)L_60)->set_lastPurchaseFailureDescription_18(L_61);
		UDPImpl_tE87DE02672BD67B6E1B3E35FFC80F702FF1EBB76 * L_62 = __this->get_U3CU3E4__this_1();
		NullCheck(L_62);
		RuntimeObject* L_63 = ((JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3 *)L_62)->get_unity_1();
		PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * L_64 = V_12;
		NullCheck(L_63);
		InterfaceActionInvoker1< PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * >::Invoke(4 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription) */, IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var, L_63, L_64);
	}

IL_0192:
	{
		return;
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
// System.Void UnityEngine.Purchasing.UIFakeStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore__ctor_m1CEE2D97AF2B314714114CE8AE7FA904F0EC2803 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method)
{
	{
		FakeStore__ctor_m56562124AF5016DA7CEA64A75D0CAC807EAD60DF(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.UIFakeStore::StartUI(System.String,System.String,System.String,System.Collections.Generic.List`1<System.String>,System.Action`2<System.Boolean,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIFakeStore_StartUI_mFA62BF453CA16184D4B13BDB7C64728D2929F74A (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, String_t* ___queryText0, String_t* ___okayButtonText1, String_t* ___cancelButtonText2, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___options3, Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC * ___callback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_StartUI_mFA62BF453CA16184D4B13BDB7C64728D2929F74A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0 = UIFakeStore_IsShowingDialog_mC04B809565B735E7CEC2BDF8688726D0E24D4598(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_004d;
	}

IL_0010:
	{
		DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * L_2 = (DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 *)il2cpp_codegen_object_new(DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343_il2cpp_TypeInfo_var);
		DialogRequest__ctor_mC8090E2ED1AAE2190BF62023F3074D99E50CF531(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * L_3 = V_0;
		String_t* L_4 = ___queryText0;
		NullCheck(L_3);
		L_3->set_QueryText_0(L_4);
		DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * L_5 = V_0;
		String_t* L_6 = ___okayButtonText1;
		NullCheck(L_5);
		L_5->set_OkayButtonText_1(L_6);
		DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * L_7 = V_0;
		String_t* L_8 = ___cancelButtonText2;
		NullCheck(L_7);
		L_7->set_CancelButtonText_2(L_8);
		DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * L_9 = V_0;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_10 = ___options3;
		NullCheck(L_9);
		L_9->set_Options_3(L_10);
		DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * L_11 = V_0;
		Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC * L_12 = ___callback4;
		NullCheck(L_11);
		L_11->set_Callback_4(L_12);
		DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * L_13 = V_0;
		__this->set_m_CurrentDialog_26(L_13);
		UIFakeStore_InstantiateDialog_m96CB73823DE7939FC68A77A01FC6BB93BC79793F(__this, /*hidden argument*/NULL);
		V_2 = (bool)1;
		goto IL_004d;
	}

IL_004d:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::InstantiateDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_InstantiateDialog_m96CB73823DE7939FC68A77A01FC6BB93BC79793F (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_InstantiateDialog_m96CB73823DE7939FC68A77A01FC6BB93BC79793F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * V_0 = NULL;
	LifecycleNotifier_t7BC53FAB36050746A837703F74A7CF3B63A075DE * V_1 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * V_3 = NULL;
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * V_4 = NULL;
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813  V_9;
	memset((&V_9), 0, sizeof(V_9));
	String_t* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * L_0 = __this->get_m_CurrentDialog_26();
		V_6 = (bool)((((RuntimeObject*)(DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_2 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(__this, _stringLiteral1ADA184F1D1A8E8B4B4B2D86D2C26C1CB9D8F313, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_2, /*hidden argument*/NULL);
		goto IL_02af;
	}

IL_0027:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_UIFakeStoreCanvasPrefab_28();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_7 = L_4;
		bool L_5 = V_7;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_6 = Resources_Load_mDBE6B83A74A52A1A6F5A68F7E5BC112DBB81B3C1(_stringLiteralE429FB2288A21731831D07F6A3F28574CAD4130E, /*hidden argument*/NULL);
		__this->set_UIFakeStoreCanvasPrefab_28(((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)IsInstSealed((RuntimeObject*)L_6, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var)));
	}

IL_0050:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_UIFakeStoreCanvasPrefab_28();
		NullCheck(L_7);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_8 = GameObject_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m5EA55BE80E8E0FB0551D6C16C2BC57A726758C9A(L_7, /*hidden argument*/GameObject_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m5EA55BE80E8E0FB0551D6C16C2BC57A726758C9A_RuntimeMethod_var);
		V_0 = L_8;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_10 = Object_Instantiate_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m17FC8F26192881EA230827EB7DD05F91C54B9412(L_9, /*hidden argument*/Object_Instantiate_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m17FC8F26192881EA230827EB7DD05F91C54B9412_RuntimeMethod_var);
		__this->set_m_Canvas_29(L_10);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_11 = __this->get_m_Canvas_29();
		NullCheck(L_11);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		LifecycleNotifier_t7BC53FAB36050746A837703F74A7CF3B63A075DE * L_13 = GameObject_AddComponent_TisLifecycleNotifier_t7BC53FAB36050746A837703F74A7CF3B63A075DE_m1012B33F5C8FD4A2CB3F78EBC3E66FC192441238(L_12, /*hidden argument*/GameObject_AddComponent_TisLifecycleNotifier_t7BC53FAB36050746A837703F74A7CF3B63A075DE_m1012B33F5C8FD4A2CB3F78EBC3E66FC192441238_RuntimeMethod_var);
		V_1 = L_13;
		LifecycleNotifier_t7BC53FAB36050746A837703F74A7CF3B63A075DE * L_14 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_15 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_15, __this, (intptr_t)((intptr_t)UIFakeStore_U3CInstantiateDialogU3Eb__16_0_m96B4847D3494ECFB309D657A729D76421E7F72F0_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set_OnDestroyCallback_4(L_15);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_16 = __this->get_m_Canvas_29();
		NullCheck(L_16);
		String_t* L_17 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_16, /*hidden argument*/NULL);
		String_t* L_18 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_17, _stringLiteralC039C05D919B5F6F72A138DFB099EAE2E67B89A6, /*hidden argument*/NULL);
		__this->set_m_ParentGameObjectPath_31(L_18);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_19 = Object_FindObjectOfType_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_m351F3750964F87C51FA489576CFA6F6DFE341C5B(/*hidden argument*/Object_FindObjectOfType_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_m351F3750964F87C51FA489576CFA6F6DFE341C5B_RuntimeMethod_var);
		bool L_20 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_19, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_8 = L_20;
		bool L_21 = V_8;
		if (!L_21)
		{
			goto IL_0104;
		}
	}
	{
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_22 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_23 = L_22;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_24 = { reinterpret_cast<intptr_t> (EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_25);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_m20BE06980A232E1D64016957059A9DD834173F68(L_26, _stringLiteral68DEF667D36D69C74A4858297D53552058192BC2, L_23, /*hidden argument*/NULL);
		__this->set_m_EventSystem_30(L_26);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = __this->get_m_EventSystem_30();
		NullCheck(L_27);
		GameObject_AddComponent_TisStandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5_m0445A53FE77C70A43D4C0BC3E8634647FD00EFCE(L_27, /*hidden argument*/GameObject_AddComponent_TisStandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5_m0445A53FE77C70A43D4C0BC3E8634647FD00EFCE_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_m_EventSystem_30();
		NullCheck(L_28);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_28, /*hidden argument*/NULL);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_30 = __this->get_m_Canvas_29();
		NullCheck(L_30);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_29, L_31, /*hidden argument*/NULL);
	}

IL_0104:
	{
		String_t* L_32 = __this->get_m_ParentGameObjectPath_31();
		String_t* L_33 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_32, _stringLiteralCE303C0991F6ED665CA1B89420A443F1CB8BD6A0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_34 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = V_2;
		NullCheck(L_35);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_36 = GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A(L_35, /*hidden argument*/GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var);
		V_3 = L_36;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_37 = V_3;
		DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * L_38 = __this->get_m_CurrentDialog_26();
		NullCheck(L_38);
		String_t* L_39 = L_38->get_QueryText_0();
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_39);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_40 = UIFakeStore_GetOkayButtonText_m18D9AE8AF1047D564DF67594ABDA8761C9BD9860(__this, /*hidden argument*/NULL);
		V_4 = L_40;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_41 = V_4;
		DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * L_42 = __this->get_m_CurrentDialog_26();
		NullCheck(L_42);
		String_t* L_43 = L_42->get_OkayButtonText_1();
		NullCheck(L_41);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_41, L_43);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_44 = UIFakeStore_GetCancelButtonText_m50EDCF51AA30CE089F5F69C2FD3919F22E684244(__this, /*hidden argument*/NULL);
		V_5 = L_44;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_45 = V_5;
		DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * L_46 = __this->get_m_CurrentDialog_26();
		NullCheck(L_46);
		String_t* L_47 = L_46->get_CancelButtonText_2();
		NullCheck(L_45);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_45, L_47);
		Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_48 = UIFakeStore_GetDropdown_mF5334EBA98397AE9DCBD9FB24F0C1D52DA54684B(__this, /*hidden argument*/NULL);
		NullCheck(L_48);
		List_1_tCBED74C5DF8E6C00526CE677BF8B96675B5C3A94 * L_49 = Dropdown_get_options_mF01AB08188E47DA9CD1488723FCBC453F29BDFA6(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		List_1_Clear_m17A48F63DE3D34232B01F1A7D55BC3FAFD2FBFFF(L_49, /*hidden argument*/List_1_Clear_m17A48F63DE3D34232B01F1A7D55BC3FAFD2FBFFF_RuntimeMethod_var);
		DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * L_50 = __this->get_m_CurrentDialog_26();
		NullCheck(L_50);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_51 = L_50->get_Options_3();
		NullCheck(L_51);
		Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813  L_52 = List_1_GetEnumerator_mDFFBEE5A0B86EF1F068C4ED0ABC0F39B7CA7677E(L_51, /*hidden argument*/List_1_GetEnumerator_mDFFBEE5A0B86EF1F068C4ED0ABC0F39B7CA7677E_RuntimeMethod_var);
		V_9 = L_52;
	}

IL_018d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01b2;
		}

IL_018f:
		{
			String_t* L_53 = Enumerator_get_Current_m894E7226842A0AB920967095678A311EFF7C5737_inline((Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *)(&V_9), /*hidden argument*/Enumerator_get_Current_m894E7226842A0AB920967095678A311EFF7C5737_RuntimeMethod_var);
			V_10 = L_53;
			Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_54 = UIFakeStore_GetDropdown_mF5334EBA98397AE9DCBD9FB24F0C1D52DA54684B(__this, /*hidden argument*/NULL);
			NullCheck(L_54);
			List_1_tCBED74C5DF8E6C00526CE677BF8B96675B5C3A94 * L_55 = Dropdown_get_options_mF01AB08188E47DA9CD1488723FCBC453F29BDFA6(L_54, /*hidden argument*/NULL);
			String_t* L_56 = V_10;
			OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 * L_57 = (OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831 *)il2cpp_codegen_object_new(OptionData_t5522C87AD5C3F1C8D3748D1FF1825A24F3835831_il2cpp_TypeInfo_var);
			OptionData__ctor_m72F6900DD27A92731D7B1FA02623D50440D747C3(L_57, L_56, /*hidden argument*/NULL);
			NullCheck(L_55);
			List_1_Add_m517F898ECAAFAF57D6607F86F1BCF057C0E615D7(L_55, L_57, /*hidden argument*/List_1_Add_m517F898ECAAFAF57D6607F86F1BCF057C0E615D7_RuntimeMethod_var);
		}

IL_01b2:
		{
			bool L_58 = Enumerator_MoveNext_m129741E497FB617DC9845CFEE4CB27B84C86301A((Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *)(&V_9), /*hidden argument*/Enumerator_MoveNext_m129741E497FB617DC9845CFEE4CB27B84C86301A_RuntimeMethod_var);
			if (L_58)
			{
				goto IL_018f;
			}
		}

IL_01bb:
		{
			IL2CPP_LEAVE(0x1CC, FINALLY_01bd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01bd;
	}

FINALLY_01bd:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD9B1DB257A9F9A3CEA69542101B953689A4AD978((Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *)(&V_9), /*hidden argument*/Enumerator_Dispose_mD9B1DB257A9F9A3CEA69542101B953689A4AD978_RuntimeMethod_var);
		IL2CPP_END_FINALLY(445)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(445)
	{
		IL2CPP_JUMP_TBL(0x1CC, IL_01cc)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01cc:
	{
		DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * L_59 = __this->get_m_CurrentDialog_26();
		NullCheck(L_59);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_60 = L_59->get_Options_3();
		NullCheck(L_60);
		int32_t L_61 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline(L_60, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
		V_11 = (bool)((((int32_t)L_61) > ((int32_t)0))? 1 : 0);
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_01ee;
		}
	}
	{
		__this->set_m_LastSelectedDropdownIndex_27(0);
	}

IL_01ee:
	{
		Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_63 = UIFakeStore_GetDropdown_mF5334EBA98397AE9DCBD9FB24F0C1D52DA54684B(__this, /*hidden argument*/NULL);
		NullCheck(L_63);
		Dropdown_RefreshShownValue_mA221C69078DAADC64EF227C7F66390A1D49E32F1(L_63, /*hidden argument*/NULL);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_64 = UIFakeStore_GetOkayButton_m3C825F45738A90ACC7ABD879394AEC5B471EB81B(__this, /*hidden argument*/NULL);
		NullCheck(L_64);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_65 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_64, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_66 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_66, __this, (intptr_t)((intptr_t)UIFakeStore_U3CInstantiateDialogU3Eb__16_1_m9A5C7BAC57C4AE56CA2A683AEF6D9D89F6FF6688_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_65);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_65, L_66, /*hidden argument*/NULL);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_67 = UIFakeStore_GetCancelButton_mCECFA7D8AE216E79FEFCDADF53021BB2DD3BA276(__this, /*hidden argument*/NULL);
		NullCheck(L_67);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_68 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_67, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_69 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_69, __this, (intptr_t)((intptr_t)UIFakeStore_U3CInstantiateDialogU3Eb__16_2_m721404F2C54B1295BBB369F024063270879229D6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_68);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_68, L_69, /*hidden argument*/NULL);
		Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_70 = UIFakeStore_GetDropdown_mF5334EBA98397AE9DCBD9FB24F0C1D52DA54684B(__this, /*hidden argument*/NULL);
		NullCheck(L_70);
		DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * L_71 = Dropdown_get_onValueChanged_m4EE82DC9AE8618C52CECA362EBDE6284F41E88FE_inline(L_70, /*hidden argument*/NULL);
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_72 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)il2cpp_codegen_object_new(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m1B6BC02D4B03D2CACC864BC5854EE5B318492036(L_72, __this, (intptr_t)((intptr_t)UIFakeStore_U3CInstantiateDialogU3Eb__16_3_m46DF94DA8161177272DBBF75286A81738E98073F_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m1B6BC02D4B03D2CACC864BC5854EE5B318492036_RuntimeMethod_var);
		NullCheck(L_71);
		UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967(L_71, L_72, /*hidden argument*/UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967_RuntimeMethod_var);
		int32_t L_73 = ((FakeStore_t3C59ECE7995BF7D5967D562BF25F0413F7CA790D *)__this)->get_UIMode_25();
		V_12 = (bool)((((int32_t)L_73) == ((int32_t)1))? 1 : 0);
		bool L_74 = V_12;
		if (!L_74)
		{
			goto IL_0281;
		}
	}
	{
		Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_75 = UIFakeStore_GetDropdown_mF5334EBA98397AE9DCBD9FB24F0C1D52DA54684B(__this, /*hidden argument*/NULL);
		NullCheck(L_75);
		DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * L_76 = Dropdown_get_onValueChanged_m4EE82DC9AE8618C52CECA362EBDE6284F41E88FE_inline(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43(L_76, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_77 = UIFakeStore_GetDropdownContainerGameObject_mDE243039E020E475B22A878594E9A635D31DEF76(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_77, /*hidden argument*/NULL);
		goto IL_02af;
	}

IL_0281:
	{
		int32_t L_78 = ((FakeStore_t3C59ECE7995BF7D5967D562BF25F0413F7CA790D *)__this)->get_UIMode_25();
		V_13 = (bool)((((int32_t)L_78) == ((int32_t)2))? 1 : 0);
		bool L_79 = V_13;
		if (!L_79)
		{
			goto IL_02af;
		}
	}
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_80 = UIFakeStore_GetCancelButton_mCECFA7D8AE216E79FEFCDADF53021BB2DD3BA276(__this, /*hidden argument*/NULL);
		NullCheck(L_80);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_81 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_80, /*hidden argument*/NULL);
		NullCheck(L_81);
		UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43(L_81, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_82 = UIFakeStore_GetCancelButtonGameObject_m1E28ADAE8496502B2E90A552C98CF92A09F4F805(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_82, /*hidden argument*/NULL);
	}

IL_02af:
	{
		return;
	}
}
// System.String UnityEngine.Purchasing.UIFakeStore::CreatePurchaseQuestion(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UIFakeStore_CreatePurchaseQuestion_m116D7ED832AB2C2836A6C4131697D8E970D6FAD8 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___definition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_CreatePurchaseQuestion_m116D7ED832AB2C2836A6C4131697D8E970D6FAD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_0 = ___definition0;
		NullCheck(L_0);
		String_t* L_1 = ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral612CCEAFC5E6C12AB161F0817E11A34091FDC66F, L_1, _stringLiteral91307256DBF150F37E879000F1FC6DD8A4F61A55, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.Purchasing.UIFakeStore::CreateRetrieveProductsQuestion(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UIFakeStore_CreateRetrieveProductsQuestion_m27212A3469F96121CADECBC2BCECB8791C29BF40 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * ___definitions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_CreateRetrieveProductsQuestion_m27212A3469F96121CADECBC2BCECB8791C29BF40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	{
		V_0 = _stringLiteral3E2A8439E4695DDC6BC1202334D8B1BB4B30A081;
		String_t* L_0 = V_0;
		ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * L_1 = ___definitions0;
		RuntimeObject* L_2 = Enumerable_Take_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_m9CD974FCA5759B5EF1795B1307BBDB1C7114486E(L_1, 2, /*hidden argument*/Enumerable_Take_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_m9CD974FCA5759B5EF1795B1307BBDB1C7114486E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD_il2cpp_TypeInfo_var);
		Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A * L_3 = ((U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD_il2cpp_TypeInfo_var))->get_U3CU3E9__18_0_1();
		Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
		G_B1_3 = L_0;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
			G_B2_3 = L_0;
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD_il2cpp_TypeInfo_var);
		U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD * L_5 = ((U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A * L_6 = (Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A *)il2cpp_codegen_object_new(Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A_il2cpp_TypeInfo_var);
		Func_2__ctor_m0766B82246E2FCFE8FE8C28831BAAA0A3F82E13D(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__18_0_mA005CCB7DE1CDEB9D36C17809390CC29A813ADB8_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m0766B82246E2FCFE8FE8C28831BAAA0A3F82E13D_RuntimeMethod_var);
		Func_2_t1DCD091D7D364A9571197D6569AB1DA5C38F7A0A * L_7 = L_6;
		((U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD_il2cpp_TypeInfo_var))->set_U3CU3E9__18_0_1(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_0033:
	{
		RuntimeObject* L_8 = Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisString_t_m6128E5476EE06203D4946C1E17607FB7A959E774(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisString_t_m6128E5476EE06203D4946C1E17607FB7A959E774_RuntimeMethod_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = Enumerable_ToArray_TisString_t_m1BAD76FB02571EB3CCC5BB00D4D581399F8523FC(L_8, /*hidden argument*/Enumerable_ToArray_TisString_t_m1BAD76FB02571EB3CCC5BB00D4D581399F8523FC_RuntimeMethod_var);
		String_t* L_10 = String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4(G_B2_2, L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(G_B2_3, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * L_12 = ___definitions0;
		NullCheck(L_12);
		int32_t L_13 = ReadOnlyCollection_1_get_Count_m743564A469EBA084937406D3D96A90487419C64B(L_12, /*hidden argument*/ReadOnlyCollection_1_get_Count_m743564A469EBA084937406D3D96A90487419C64B_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_13) > ((int32_t)2))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_15 = V_0;
		String_t* L_16 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_15, _stringLiteral256DAE5FE812DD0A653073C3C142A5D806F220A4, /*hidden argument*/NULL);
		V_0 = L_16;
	}

IL_0063:
	{
		String_t* L_17 = V_0;
		String_t* L_18 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_17, _stringLiteralF4B93D791AC7157AD28161C767FFDE25B19D3F5C, /*hidden argument*/NULL);
		V_0 = L_18;
		String_t* L_19 = V_0;
		V_2 = L_19;
		goto IL_0073;
	}

IL_0073:
	{
		String_t* L_20 = V_2;
		return L_20;
	}
}
// UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetOkayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * UIFakeStore_GetOkayButton_m3C825F45738A90ACC7ABD879394AEC5B471EB81B (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetOkayButton_m3C825F45738A90ACC7ABD879394AEC5B471EB81B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ParentGameObjectPath_31();
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral90B6C7CAE0684A0F98CF10CC368E2592F0962CCD, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_3 = GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80(L_2, /*hidden argument*/GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetCancelButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * UIFakeStore_GetCancelButton_mCECFA7D8AE216E79FEFCDADF53021BB2DD3BA276 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetCancelButton_mCECFA7D8AE216E79FEFCDADF53021BB2DD3BA276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	bool V_1 = false;
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * V_2 = NULL;
	{
		String_t* L_0 = __this->get_m_ParentGameObjectPath_31();
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral57B4B0A1A4CF3BDCB8E8681D5D4224017FA907BC, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck(L_6);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_7 = GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80(L_6, /*hidden argument*/GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80_RuntimeMethod_var);
		V_2 = L_7;
		goto IL_0031;
	}

IL_002c:
	{
		V_2 = (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B *)NULL;
		goto IL_0031;
	}

IL_0031:
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_8 = V_2;
		return L_8;
	}
}
// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetCancelButtonGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * UIFakeStore_GetCancelButtonGameObject_m1E28ADAE8496502B2E90A552C98CF92A09F4F805 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetCancelButtonGameObject_m1E28ADAE8496502B2E90A552C98CF92A09F4F805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ParentGameObjectPath_31();
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral57B4B0A1A4CF3BDCB8E8681D5D4224017FA907BC, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetOkayButtonText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * UIFakeStore_GetOkayButtonText_m18D9AE8AF1047D564DF67594ABDA8761C9BD9860 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetOkayButtonText_m18D9AE8AF1047D564DF67594ABDA8761C9BD9860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ParentGameObjectPath_31();
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral8D07EC60F2CF6909F3E4F72A9EE7313D45135EE3, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A(L_2, /*hidden argument*/GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetCancelButtonText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * UIFakeStore_GetCancelButtonText_m50EDCF51AA30CE089F5F69C2FD3919F22E684244 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetCancelButtonText_m50EDCF51AA30CE089F5F69C2FD3919F22E684244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ParentGameObjectPath_31();
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteralD8FAE6A4434F8709F349B6E9420638C8FD6886E8, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A(L_2, /*hidden argument*/GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.UI.Dropdown UnityEngine.Purchasing.UIFakeStore::GetDropdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * UIFakeStore_GetDropdown_mF5334EBA98397AE9DCBD9FB24F0C1D52DA54684B (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetDropdown_mF5334EBA98397AE9DCBD9FB24F0C1D52DA54684B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	bool V_1 = false;
	Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * V_2 = NULL;
	{
		String_t* L_0 = __this->get_m_ParentGameObjectPath_31();
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral86CFC158C16EBD828F9FD0FFE04C280216023CA9, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck(L_6);
		Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_7 = GameObject_GetComponent_TisDropdown_tF6331401084B1213CAB10587A6EC81461501930F_mCEDADB496C533D2B1022FE5C0B5D68493866A5E2(L_6, /*hidden argument*/GameObject_GetComponent_TisDropdown_tF6331401084B1213CAB10587A6EC81461501930F_mCEDADB496C533D2B1022FE5C0B5D68493866A5E2_RuntimeMethod_var);
		V_2 = L_7;
		goto IL_0031;
	}

IL_002c:
	{
		V_2 = (Dropdown_tF6331401084B1213CAB10587A6EC81461501930F *)NULL;
		goto IL_0031;
	}

IL_0031:
	{
		Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_8 = V_2;
		return L_8;
	}
}
// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetDropdownContainerGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * UIFakeStore_GetDropdownContainerGameObject_mDE243039E020E475B22A878594E9A635D31DEF76 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_GetDropdownContainerGameObject_mDE243039E020E475B22A878594E9A635D31DEF76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ParentGameObjectPath_31();
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral86479F128971C5FEA69496AB7A91F4897C770FAC, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::OkayButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_OkayButtonClicked_m6FF8BCD5C3618BEC6355B66F1FEB81200BDDB719 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_OkayButtonClicked_m6FF8BCD5C3618BEC6355B66F1FEB81200BDDB719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->get_m_LastSelectedDropdownIndex_27();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = ((FakeStore_t3C59ECE7995BF7D5967D562BF25F0413F7CA790D *)__this)->get_UIMode_25();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0022:
	{
		int32_t L_3 = __this->get_m_LastSelectedDropdownIndex_27();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_4 = Math_Max_mA99E48BB021F2E4B62D4EA9F52EA6928EED618A2(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_4;
		DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * L_5 = __this->get_m_CurrentDialog_26();
		NullCheck(L_5);
		Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC * L_6 = L_5->get_Callback_4();
		bool L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		Action_2_Invoke_mA199F71186277902986DCB3DA9E001BADC5A9584(L_6, L_7, L_8, /*hidden argument*/Action_2_Invoke_mA199F71186277902986DCB3DA9E001BADC5A9584_RuntimeMethod_var);
		UIFakeStore_CloseDialog_mA39A1BB699C95E8CC4A2C5E2391EC016D7A17633(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::CancelButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_CancelButtonClicked_mFD886AEE2ECDDD07C5CE9CF686DCB20B7B162E22 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_CancelButtonClicked_mFD886AEE2ECDDD07C5CE9CF686DCB20B7B162E22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_LastSelectedDropdownIndex_27();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_1 = Math_Max_mA99E48BB021F2E4B62D4EA9F52EA6928EED618A2(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_1;
		DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * L_2 = __this->get_m_CurrentDialog_26();
		NullCheck(L_2);
		Action_2_tC3051DEAB4ED7C2C1D9C42C88E5E59DD5F51B3CC * L_3 = L_2->get_Callback_4();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Action_2_Invoke_mA199F71186277902986DCB3DA9E001BADC5A9584(L_3, (bool)0, L_4, /*hidden argument*/Action_2_Invoke_mA199F71186277902986DCB3DA9E001BADC5A9584_RuntimeMethod_var);
		UIFakeStore_CloseDialog_mA39A1BB699C95E8CC4A2C5E2391EC016D7A17633(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::DropdownValueChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_DropdownValueChanged_m7C2241CF7883B9EBB6C2815CE481710C45D303C7 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, int32_t ___selectedItem0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___selectedItem0;
		__this->set_m_LastSelectedDropdownIndex_27(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::CloseDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_CloseDialog_mA39A1BB699C95E8CC4A2C5E2391EC016D7A17633 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIFakeStore_CloseDialog_mA39A1BB699C95E8CC4A2C5E2391EC016D7A17633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		__this->set_m_CurrentDialog_26((DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 *)NULL);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = UIFakeStore_GetOkayButton_m3C825F45738A90ACC7ABD879394AEC5B471EB81B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_1 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43(L_1, /*hidden argument*/NULL);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_2 = UIFakeStore_GetCancelButton_mCECFA7D8AE216E79FEFCDADF53021BB2DD3BA276(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_5 = UIFakeStore_GetCancelButton_mCECFA7D8AE216E79FEFCDADF53021BB2DD3BA276(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_6 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43(L_6, /*hidden argument*/NULL);
	}

IL_003b:
	{
		Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_7 = UIFakeStore_GetDropdown_mF5334EBA98397AE9DCBD9FB24F0C1D52DA54684B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * L_10 = UIFakeStore_GetDropdown_mF5334EBA98397AE9DCBD9FB24F0C1D52DA54684B(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * L_11 = Dropdown_get_onValueChanged_m4EE82DC9AE8618C52CECA362EBDE6284F41E88FE_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43(L_11, /*hidden argument*/NULL);
	}

IL_005e:
	{
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_12 = __this->get_m_Canvas_29();
		NullCheck(L_12);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.UIFakeStore::IsShowingDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIFakeStore_IsShowingDialog_mC04B809565B735E7CEC2BDF8688726D0E24D4598 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * L_0 = __this->get_m_CurrentDialog_26();
		V_0 = (bool)((!(((RuntimeObject*)(DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_U3CInstantiateDialogU3Eb__16_0_m96B4847D3494ECFB309D657A729D76421E7F72F0 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_CurrentDialog_26((DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 *)NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_U3CInstantiateDialogU3Eb__16_1_m9A5C7BAC57C4AE56CA2A683AEF6D9D89F6FF6688 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method)
{
	{
		UIFakeStore_OkayButtonClicked_m6FF8BCD5C3618BEC6355B66F1FEB81200BDDB719(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_U3CInstantiateDialogU3Eb__16_2_m721404F2C54B1295BBB369F024063270879229D6 (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, const RuntimeMethod* method)
{
	{
		UIFakeStore_CancelButtonClicked_mFD886AEE2ECDDD07C5CE9CF686DCB20B7B162E22(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIFakeStore_U3CInstantiateDialogU3Eb__16_3_m46DF94DA8161177272DBBF75286A81738E98073F (UIFakeStore_tD2C2CFBA52813C79B34671D7BBDA8AE6E9F0814C * __this, int32_t ___selectedItem0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___selectedItem0;
		UIFakeStore_DropdownValueChanged_m7C2241CF7883B9EBB6C2815CE481710C45D303C7(__this, L_0, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Purchasing.UIFakeStore_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9AA3FF14C9BEB6CFA07029C005D1EAD457F57391 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m9AA3FF14C9BEB6CFA07029C005D1EAD457F57391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD * L_0 = (U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD *)il2cpp_codegen_object_new(U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m41D08227321C1E6FED1614916F79CAADEFACCB0A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m41D08227321C1E6FED1614916F79CAADEFACCB0A (U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.UIFakeStore_<>c::<CreateRetrieveProductsQuestion>b__18_0(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__18_0_mA005CCB7DE1CDEB9D36C17809390CC29A813ADB8 (U3CU3Ec_t82C2D8A6FC9D90E84EBDF85CC2A0D24B1BEC55AD * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___pid0, const RuntimeMethod* method)
{
	{
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_0 = ___pid0;
		NullCheck(L_0);
		String_t* L_1 = ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468_inline(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void UnityEngine.Purchasing.UIFakeStore_DialogRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogRequest__ctor_mC8090E2ED1AAE2190BF62023F3074D99E50CF531 (DialogRequest_tAFA83A5585833DA78D7E5DA13D17BFCA1475C343 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifecycleNotifier_OnDestroy_mC1EF1F6168A752FE12F326D7FD93E8CB4825134A (LifecycleNotifier_t7BC53FAB36050746A837703F74A7CF3B63A075DE * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_OnDestroyCallback_4();
		V_0 = (bool)((!(((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = __this->get_OnDestroyCallback_4();
		NullCheck(L_2);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifecycleNotifier__ctor_m67A6CA14F46DE0428B75F8AF0E7144FB7C72CC0B (LifecycleNotifier_t7BC53FAB36050746A837703F74A7CF3B63A075DE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Purchasing.UnifiedReceipt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedReceipt__ctor_m3FA80E1AC5059307FAE74A8DF501EB3B2ABC360C (UnifiedReceipt_t5FA6AF4B29A5CFCE5DE0C9FA4EF63454266E035B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Purchasing.UnityChannelBindings::OnPurchase(UnityEngine.ChannelPurchase.PurchaseInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_OnPurchase_m02E8FD376C99A35BFF79566DA80F61C0082CD533 (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * ___purchaseInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_OnPurchase_m02E8FD376C99A35BFF79566DA80F61C0082CD533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * L_0 = ___purchaseInfo0;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_1 = UnityChannelBindings_PurchaseInfoToDictionary_mD9A74BE343086068E2C5E9FCEAFB8842FCA537A7(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_2 = V_0;
		String_t* L_3 = MiniJsonExtensions_toJson_mD043B50E39DCA34D4279C22E1A444A29645008F9(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_4 = __this->get_m_PurchaseCallback_0();
		String_t* L_5 = V_1;
		NullCheck(L_4);
		Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903(L_4, (bool)1, L_5, /*hidden argument*/Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var);
		__this->set_m_PurchaseCallback_0((Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::OnPurchaseFailed(System.String,UnityEngine.ChannelPurchase.PurchaseInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_OnPurchaseFailed_m5D2B9A34F99F7F582EA092CA61048B3FAE578840 (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___message0, PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * ___purchaseInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_OnPurchaseFailed_m5D2B9A34F99F7F582EA092CA61048B3FAE578840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_0, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_1 = V_0;
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_1, _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671, L_2, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * L_3 = ___purchaseInfo1;
		V_2 = (bool)((!(((RuntimeObject*)(PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_5 = V_0;
		PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * L_6 = ___purchaseInfo1;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_7 = UnityChannelBindings_PurchaseInfoToDictionary_mD9A74BE343086068E2C5E9FCEAFB8842FCA537A7(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_5, _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D, L_7, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_0030:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_8 = V_0;
		String_t* L_9 = MiniJsonExtensions_toJson_m990366CD4919BF3809E5C83E6F64A7B12D19F2DB(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_10 = __this->get_m_PurchaseCallback_0();
		String_t* L_11 = V_1;
		NullCheck(L_10);
		Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903(L_10, (bool)0, L_11, /*hidden argument*/Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var);
		__this->set_m_PurchaseCallback_0((Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::OnPurchaseRepeated(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_OnPurchaseRepeated_mD1112F2AE9DE4620E9C24D7A773DDF9D689D1B77 (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___productCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_OnPurchaseRepeated_mD1112F2AE9DE4620E9C24D7A773DDF9D689D1B77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_0, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_1 = V_0;
		NullCheck(L_1);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_1, _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671, _stringLiteralC0AC4842418E34583859262C033965CFD49454E0, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_2 = V_0;
		bool L_3 = ((bool)1);
		RuntimeObject * L_4 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_2);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_2, _stringLiteralE005CDF78FC36965B839E7115A56CAE84B2994B3, L_4, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_5 = V_0;
		String_t* L_6 = MiniJsonExtensions_toJson_m990366CD4919BF3809E5C83E6F64A7B12D19F2DB(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_7 = __this->get_m_PurchaseCallback_0();
		String_t* L_8 = V_1;
		NullCheck(L_7);
		Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903(L_7, (bool)0, L_8, /*hidden argument*/Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var);
		__this->set_m_PurchaseCallback_0((Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::OnPurchaseConfirm(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_OnPurchaseConfirm_mCADE4A6499D735A7EDA2A6FE3E355EBAEE23A643 (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___transactionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_OnPurchaseConfirm_mCADE4A6499D735A7EDA2A6FE3E355EBAEE23A643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___transactionId0;
		String_t* L_1 = ___transactionId0;
		UnityChannelBindings_OnPurchaseConfirmCallbackDispatcher_m48C4680BE8A22D89F2F577D4D3999C504EFC74A1(__this, L_0, (bool)1, L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::OnPurchaseConfirmFailed(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_OnPurchaseConfirmFailed_m913A73D812C3EDF3EA5A01553E23D6071C8AFC53 (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___transactionId0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___transactionId0;
		String_t* L_1 = ___transactionId0;
		String_t* L_2 = ___message1;
		UnityChannelBindings_OnPurchaseConfirmCallbackDispatcher_m48C4680BE8A22D89F2F577D4D3999C504EFC74A1(__this, L_0, (bool)0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::OnPurchaseConfirmCallbackDispatcher(System.String,System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_OnPurchaseConfirmCallbackDispatcher_m48C4680BE8A22D89F2F577D4D3999C504EFC74A1 (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___transactionId0, bool ___result1, String_t* ___param12, String_t* ___param23, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___transactionId0;
		bool L_1 = ___result1;
		String_t* L_2 = ___param12;
		String_t* L_3 = ___param23;
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_4 = __this->get_m_PurchaseConfirmCallbacks_3();
		UnityChannelBindings_OnResponseCallbackDispatcher_mB85DA6F8929B25434CC6BCFF91399BA08E60BAA9(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::OnReceiptValidate(UnityEngine.ChannelPurchase.ReceiptInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_OnReceiptValidate_m16A6FE1793D57F108193EA01BC986042FAF7F57B (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, ReceiptInfo_t5A3A3B53B5FFCFEA460A254C320E9B72FB82FC9D * ___receiptInfo0, const RuntimeMethod* method)
{
	{
		ReceiptInfo_t5A3A3B53B5FFCFEA460A254C320E9B72FB82FC9D * L_0 = ___receiptInfo0;
		NullCheck(L_0);
		String_t* L_1 = ReceiptInfo_get_gameOrderId_m2ED31482237AEBCB4441FFFE22A9D3CAEF328790_inline(L_0, /*hidden argument*/NULL);
		ReceiptInfo_t5A3A3B53B5FFCFEA460A254C320E9B72FB82FC9D * L_2 = ___receiptInfo0;
		NullCheck(L_2);
		String_t* L_3 = ReceiptInfo_get_signData_m1534F5C3DC45EECF4016DA072C82FDC1B0973510_inline(L_2, /*hidden argument*/NULL);
		ReceiptInfo_t5A3A3B53B5FFCFEA460A254C320E9B72FB82FC9D * L_4 = ___receiptInfo0;
		NullCheck(L_4);
		String_t* L_5 = ReceiptInfo_get_signature_m0E9B934D58401FEA73AE4B83B3FDC718D796339A_inline(L_4, /*hidden argument*/NULL);
		UnityChannelBindings_OnReceiptValidateCallbackDispatcher_mF442A79ED70B684B458AB8D8B3616318BEB0EF9E(__this, L_1, (bool)1, L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::OnReceiptValidateFailed(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_OnReceiptValidateFailed_m8AC3CE5D823109DFB8351A31B6494F71D720B9AE (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___transactionId0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___transactionId0;
		String_t* L_1 = ___message1;
		UnityChannelBindings_OnReceiptValidateCallbackDispatcher_mF442A79ED70B684B458AB8D8B3616318BEB0EF9E(__this, L_0, (bool)0, L_1, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::OnReceiptValidateCallbackDispatcher(System.String,System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_OnReceiptValidateCallbackDispatcher_mF442A79ED70B684B458AB8D8B3616318BEB0EF9E (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___transactionId0, bool ___result1, String_t* ___param12, String_t* ___param23, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___transactionId0;
		bool L_1 = ___result1;
		String_t* L_2 = ___param12;
		String_t* L_3 = ___param23;
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_4 = __this->get_m_ValidateCallbacks_2();
		UnityChannelBindings_OnResponseCallbackDispatcher_mB85DA6F8929B25434CC6BCFF91399BA08E60BAA9(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::OnResponseCallbackDispatcher(System.String,System.Boolean,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_OnResponseCallbackDispatcher_mB85DA6F8929B25434CC6BCFF91399BA08E60BAA9 (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___transactionId0, bool ___result1, String_t* ___param12, String_t* ___param23, Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * ___callbackDictionary4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_OnResponseCallbackDispatcher_mB85DA6F8929B25434CC6BCFF91399BA08E60BAA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * V_0 = NULL;
	bool V_1 = false;
	Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_0 = ___callbackDictionary4;
		String_t* L_1 = ___transactionId0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m68CC5D5B45084241DED93C201D279662BEB5CB2F(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m68CC5D5B45084241DED93C201D279662BEB5CB2F_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_005e;
	}

IL_0013:
	{
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_4 = ___callbackDictionary4;
		String_t* L_5 = ___transactionId0;
		NullCheck(L_4);
		List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * L_6 = Dictionary_2_get_Item_m06227059A7D084647BD2FAC6BF6382E86D667E74(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m06227059A7D084647BD2FAC6BF6382E86D667E74_RuntimeMethod_var);
		V_0 = L_6;
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_7 = ___callbackDictionary4;
		String_t* L_8 = ___transactionId0;
		NullCheck(L_7);
		Dictionary_2_Remove_m54A4154018F67810E53B6EAA9750532B482EB576(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_m54A4154018F67810E53B6EAA9750532B482EB576_RuntimeMethod_var);
		List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * L_9 = V_0;
		NullCheck(L_9);
		Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E  L_10 = List_1_GetEnumerator_m722EB7DBBB8377AD8196FB4971A17EA146FAAFC6(L_9, /*hidden argument*/List_1_GetEnumerator_m722EB7DBBB8377AD8196FB4971A17EA146FAAFC6_RuntimeMethod_var);
		V_2 = L_10;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_002f:
		{
			Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * L_11 = Enumerator_get_Current_m8DAE6A6BE9E43946A72752EC47B875512C8DCFE8_inline((Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E *)(&V_2), /*hidden argument*/Enumerator_get_Current_m8DAE6A6BE9E43946A72752EC47B875512C8DCFE8_RuntimeMethod_var);
			V_3 = L_11;
			Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * L_12 = V_3;
			bool L_13 = ___result1;
			String_t* L_14 = ___param12;
			String_t* L_15 = ___param23;
			NullCheck(L_12);
			Action_3_Invoke_m1CB35C4D32922E1BCF8ADEFEE4B7A317CA8F8672(L_12, L_13, L_14, L_15, /*hidden argument*/Action_3_Invoke_m1CB35C4D32922E1BCF8ADEFEE4B7A317CA8F8672_RuntimeMethod_var);
		}

IL_0044:
		{
			bool L_16 = Enumerator_MoveNext_mF280E27F474C1EBF8049A2EE26CB51523D353BA2((Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mF280E27F474C1EBF8049A2EE26CB51523D353BA2_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_002f;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5E, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB2C9414AA5B4B278BE21C819515F3DCB94DC50CC((Enumerator_tE4263AE83E97131501ACBF648646F0EC14C7495E *)(&V_2), /*hidden argument*/Enumerator_Dispose_mB2C9414AA5B4B278BE21C819515F3DCB94DC50CC_RuntimeMethod_var);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005e:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::Purchase(System.String,System.Action`2<System.Boolean,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_Purchase_m83EFC886B82F131BDAEDAAC8A28162AC4AD5E95B (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___productId0, Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * ___callback1, String_t* ___developerPayload2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_Purchase_m83EFC886B82F131BDAEDAAC8A28162AC4AD5E95B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Guid_t  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_0 = ___callback1;
		V_0 = (bool)((((RuntimeObject*)(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0058;
	}

IL_000c:
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_2 = __this->get_m_PurchaseCallback_0();
		V_1 = (bool)((!(((RuntimeObject*)(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_4 = ___callback1;
		NullCheck(L_4);
		Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903(L_4, (bool)0, _stringLiteral7F8C59D560D31CCE9A5B206D8EA5F6C38267C1D0, /*hidden argument*/Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var);
		goto IL_0058;
	}

IL_0029:
	{
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_5 = ___callback1;
		__this->set_m_PurchaseCallback_0(L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_6 = Guid_NewGuid_m541CAC23EBB140DFD3AB5B313315647E95FADB29(/*hidden argument*/NULL);
		V_2 = L_6;
		String_t* L_7 = Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5((Guid_t *)(&V_2), /*hidden argument*/NULL);
		__this->set_m_PurchaseGuid_1(L_7);
		String_t* L_8 = ___productId0;
		String_t* L_9 = __this->get_m_PurchaseGuid_1();
		String_t* L_10 = ___developerPayload2;
		IL2CPP_RUNTIME_CLASS_INIT(PurchaseService_t7F12D5C55BBD81DB4420C2853172B9FED0FF3830_il2cpp_TypeInfo_var);
		PurchaseService_Purchase_mC65FF5DFE61961585B7E1666DADBA5DC047BE46A(L_8, L_9, __this, L_10, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_RetrieveProducts_m1AEEEB87BE559507FFBBC7285EA7D4777EA08162 (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * ___products0, Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_RetrieveProducts_m1AEEEB87BE559507FFBBC7285EA7D4777EA08162_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A * V_0 = NULL;
	ProductCatalog_t7643D269828196E196CDF8B0ACC4AE00EA1A15F6 * V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * V_10 = NULL;
	LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * V_11 = NULL;
	ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * V_12 = NULL;
	ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * V_13 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * G_B7_0 = NULL;
	LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * G_B6_0 = NULL;
	{
		HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A * L_0 = (HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A *)il2cpp_codegen_object_new(HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mC094CC8497A333D659AB37D62F5510FFB9FFB5D0(L_0, /*hidden argument*/HashSet_1__ctor_mC094CC8497A333D659AB37D62F5510FFB9FFB5D0_RuntimeMethod_var);
		V_0 = L_0;
		ProductCatalog_t7643D269828196E196CDF8B0ACC4AE00EA1A15F6 * L_1 = ProductCatalog_LoadDefaultCatalog_mB49AAA6ED516337EBE6E6C7D68D1254891CC5F61(/*hidden argument*/NULL);
		V_1 = L_1;
		ProductCatalog_t7643D269828196E196CDF8B0ACC4AE00EA1A15F6 * L_2 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_3 = ProductCatalog_get_allValidProducts_m858AA5134A97D7B2F4CFFA6E9894C6A2A74B9279(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductCatalogItem>::GetEnumerator() */, IEnumerable_1_tF8936778E24A7D2D4125F01B62C2BACAA6FF8F37_il2cpp_TypeInfo_var, L_3);
		V_3 = L_4;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f4;
		}

IL_001f:
		{
			RuntimeObject* L_5 = V_3;
			NullCheck(L_5);
			ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D * L_6 = InterfaceFuncInvoker0< ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductCatalogItem>::get_Current() */, IEnumerator_1_tB898879314A14BE7158EFFB02E08A6E240FB2429_il2cpp_TypeInfo_var, L_5);
			V_4 = L_6;
			ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * L_7 = ___products0;
			NullCheck(L_7);
			RuntimeObject* L_8 = ReadOnlyCollection_1_GetEnumerator_m4DAE5244E68062F3211869C745AF7AEEFF5B3556(L_7, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_m4DAE5244E68062F3211869C745AF7AEEFF5B3556_RuntimeMethod_var);
			V_5 = L_8;
		}

IL_0031:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00d8;
			}

IL_0036:
			{
				RuntimeObject* L_9 = V_5;
				NullCheck(L_9);
				ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_10 = InterfaceFuncInvoker0< ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Purchasing.ProductDefinition>::get_Current() */, IEnumerator_1_t03AC33D97EBA418F757A9065CE29CE44AA6487BB_il2cpp_TypeInfo_var, L_9);
				V_6 = L_10;
				ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D * L_11 = V_4;
				NullCheck(L_11);
				String_t* L_12 = L_11->get_id_0();
				ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_13 = V_6;
				NullCheck(L_13);
				String_t* L_14 = ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468_inline(L_13, /*hidden argument*/NULL);
				bool L_15 = String_Equals_m90EB651A751C3444BADBBD5401109CE05B3E1CFB(L_12, L_14, /*hidden argument*/NULL);
				V_7 = L_15;
				bool L_16 = V_7;
				if (!L_16)
				{
					goto IL_00d7;
				}
			}

IL_0059:
			{
				IL2CPP_RUNTIME_CLASS_INIT(XiaomiPriceTiers_t277154F32924391EF362A479856C47A2A43A6E5B_il2cpp_TypeInfo_var);
				Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_17 = ((XiaomiPriceTiers_t277154F32924391EF362A479856C47A2A43A6E5B_StaticFields*)il2cpp_codegen_static_fields_for(XiaomiPriceTiers_t277154F32924391EF362A479856C47A2A43A6E5B_il2cpp_TypeInfo_var))->get_XiaomiPriceTierPrices_0();
				ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D * L_18 = V_4;
				NullCheck(L_18);
				int32_t L_19 = L_18->get_xiaomiPriceTier_5();
				NullCheck(L_17);
				int32_t L_20 = L_19;
				int32_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
				V_8 = L_21;
				int32_t L_22 = V_8;
				int32_t L_23 = L_22;
				RuntimeObject * L_24 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_23);
				String_t* L_25 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralCBBD8674892389F6016A1136956BE7787E630B76, L_24, /*hidden argument*/NULL);
				V_9 = L_25;
				ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D * L_26 = V_4;
				NullCheck(L_26);
				LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * L_27 = L_26->get_defaultDescription_3();
				V_10 = L_27;
				ProductCatalogItem_t532825A86166318D5A6DB6D7671F51573BD0267D * L_28 = V_4;
				NullCheck(L_28);
				LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * L_29 = ProductCatalogItem_GetDescription_mF654237D9C36BD39D6951E7334535DC9CA42227B(L_28, ((int32_t)19), /*hidden argument*/NULL);
				V_11 = L_29;
				LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * L_30 = V_11;
				LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * L_31 = L_30;
				G_B6_0 = L_31;
				if (L_31)
				{
					G_B7_0 = L_31;
					goto IL_0098;
				}
			}

IL_0095:
			{
				LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * L_32 = V_10;
				G_B7_0 = L_32;
			}

IL_0098:
			{
				V_10 = G_B7_0;
				String_t* L_33 = V_9;
				LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * L_34 = V_10;
				NullCheck(L_34);
				String_t* L_35 = LocalizedProductDescription_get_Title_m448F93EC6EF5EECB012A5EA8BEC2BC45D619A0E1(L_34, /*hidden argument*/NULL);
				LocalizedProductDescription_t6677548B0FDC9DF7B17E6DA3CBCADFB9A80286F1 * L_36 = V_10;
				NullCheck(L_36);
				String_t* L_37 = LocalizedProductDescription_get_Description_m3BA64F0AA47F51B25955288D69248CC5110D1834(L_36, /*hidden argument*/NULL);
				int32_t L_38 = V_8;
				IL2CPP_RUNTIME_CLASS_INIT(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var);
				Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_39 = Decimal_op_Implicit_m654C5710B68EAA7C5E606F28F084CE5FDA339415(L_38, /*hidden argument*/NULL);
				ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_40 = (ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 *)il2cpp_codegen_object_new(ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48_il2cpp_TypeInfo_var);
				ProductMetadata__ctor_m70965CC8C6DAC8C37A0C8FC08FAE2DE7C091435C(L_40, L_33, L_35, L_37, _stringLiteral44E949CB95D4BBD927D61FBE6D06D28EB4960DD6, L_39, /*hidden argument*/NULL);
				V_12 = L_40;
				ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_41 = V_6;
				NullCheck(L_41);
				String_t* L_42 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_41, /*hidden argument*/NULL);
				ProductMetadata_t1CAA912963F8B24B34F53CCF29A6E0BD89B33B48 * L_43 = V_12;
				ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * L_44 = (ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 *)il2cpp_codegen_object_new(ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582_il2cpp_TypeInfo_var);
				ProductDescription__ctor_m8832B1A2CE8063B4AD5ACF5B0E9F8AC68AC35B84(L_44, L_42, L_43, /*hidden argument*/NULL);
				V_13 = L_44;
				HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A * L_45 = V_0;
				ProductDescription_t28F70353B3E87B193B6E0A509070EC5976871582 * L_46 = V_13;
				NullCheck(L_45);
				HashSet_1_Add_mF8C3766EFA306E384BD10BC05F1601F5549AC331(L_45, L_46, /*hidden argument*/HashSet_1_Add_mF8C3766EFA306E384BD10BC05F1601F5549AC331_RuntimeMethod_var);
			}

IL_00d7:
			{
			}

IL_00d8:
			{
				RuntimeObject* L_47 = V_5;
				NullCheck(L_47);
				bool L_48 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_47);
				if (L_48)
				{
					goto IL_0036;
				}
			}

IL_00e4:
			{
				IL2CPP_LEAVE(0xF3, FINALLY_00e6);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00e6;
		}

FINALLY_00e6:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_49 = V_5;
				if (!L_49)
				{
					goto IL_00f2;
				}
			}

IL_00ea:
			{
				RuntimeObject* L_50 = V_5;
				NullCheck(L_50);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_50);
			}

IL_00f2:
			{
				IL2CPP_END_FINALLY(230)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(230)
		{
			IL2CPP_JUMP_TBL(0xF3, IL_00f3)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00f3:
		{
		}

IL_00f4:
		{
			RuntimeObject* L_51 = V_3;
			NullCheck(L_51);
			bool L_52 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_51);
			if (L_52)
			{
				goto IL_001f;
			}
		}

IL_00ff:
		{
			IL2CPP_LEAVE(0x10C, FINALLY_0101);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0101;
	}

FINALLY_0101:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_53 = V_3;
			if (!L_53)
			{
				goto IL_010b;
			}
		}

IL_0104:
		{
			RuntimeObject* L_54 = V_3;
			NullCheck(L_54);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_54);
		}

IL_010b:
		{
			IL2CPP_END_FINALLY(257)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(257)
	{
		IL2CPP_JUMP_TBL(0x10C, IL_010c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_010c:
	{
		HashSet_1_t1669F76A33AEFD64DBBF72CE172E3C2DDCA0795A * L_55 = V_0;
		String_t* L_56 = JSONSerializer_SerializeProductDescs_m6AD2FE8137CE5613A9477109D31AE1FB40C27E21(L_55, /*hidden argument*/NULL);
		V_2 = L_56;
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_57 = ___callback1;
		String_t* L_58 = V_2;
		NullCheck(L_57);
		Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903(L_57, (bool)1, L_58, /*hidden argument*/Action_2_Invoke_m720D9F05D1AA3BD6FB1FFF58A28A7509BBB59903_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::ValidateReceipt(System.String,System.Action`3<System.Boolean,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_ValidateReceipt_mA4CB92E494612CF75EA1357601F71C7016BB343C (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___transactionId0, Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_ValidateReceipt_mA4CB92E494612CF75EA1357601F71C7016BB343C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_0_tB91567274B7906CE554758FDB7180DBA22B1A9A5 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass16_0_tB91567274B7906CE554758FDB7180DBA22B1A9A5 * L_0 = (U3CU3Ec__DisplayClass16_0_tB91567274B7906CE554758FDB7180DBA22B1A9A5 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_tB91567274B7906CE554758FDB7180DBA22B1A9A5_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass16_0__ctor_m15D07433179BF2E06D3D623A40AFE4AC35835796(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass16_0_tB91567274B7906CE554758FDB7180DBA22B1A9A5 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_1(__this);
		U3CU3Ec__DisplayClass16_0_tB91567274B7906CE554758FDB7180DBA22B1A9A5 * L_2 = V_0;
		String_t* L_3 = ___transactionId0;
		NullCheck(L_2);
		L_2->set_transactionId_0(L_3);
		U3CU3Ec__DisplayClass16_0_tB91567274B7906CE554758FDB7180DBA22B1A9A5 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_transactionId_0();
		Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * L_6 = ___callback1;
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_7 = __this->get_m_ValidateCallbacks_2();
		U3CU3Ec__DisplayClass16_0_tB91567274B7906CE554758FDB7180DBA22B1A9A5 * L_8 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_9 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass16_0_U3CValidateReceiptU3Eb__0_mB74DBD0867B3ACEFCACC6DEEFD3257E1FB48F974_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityChannelBindings_RequestUniquely_m594C392FBB940E65F11BE27C777E3EDFA3D6AAE5(__this, L_5, L_6, L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::RequestUniquely(System.String,System.Action`3<System.Boolean,System.String,System.String>,System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`3<System.Boolean,System.String,System.String>>>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_RequestUniquely_m594C392FBB940E65F11BE27C777E3EDFA3D6AAE5 (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___transactionId0, Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * ___callback1, Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * ___callbackDictionary2, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___requestAction3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_RequestUniquely_m594C392FBB940E65F11BE27C777E3EDFA3D6AAE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * L_0 = ___callback1;
		V_0 = (bool)((((RuntimeObject*)(Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0066;
	}

IL_000c:
	{
		String_t* L_2 = ___transactionId0;
		bool L_3 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * L_5 = ___callback1;
		NullCheck(L_5);
		Action_3_Invoke_m1CB35C4D32922E1BCF8ADEFEE4B7A317CA8F8672(L_5, (bool)0, _stringLiteralDE3FFEF980E651436BDA1810C67530580D1328C8, (String_t*)NULL, /*hidden argument*/Action_3_Invoke_m1CB35C4D32922E1BCF8ADEFEE4B7A317CA8F8672_RuntimeMethod_var);
		goto IL_0066;
	}

IL_0027:
	{
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_6 = ___callbackDictionary2;
		String_t* L_7 = ___transactionId0;
		NullCheck(L_6);
		bool L_8 = Dictionary_2_ContainsKey_m68CC5D5B45084241DED93C201D279662BEB5CB2F(L_6, L_7, /*hidden argument*/Dictionary_2_ContainsKey_m68CC5D5B45084241DED93C201D279662BEB5CB2F_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_10 = ___callbackDictionary2;
		String_t* L_11 = ___transactionId0;
		List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * L_12 = (List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 *)il2cpp_codegen_object_new(List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008_il2cpp_TypeInfo_var);
		List_1__ctor_m21D978936866998FD41335DC29174A855115EBBC(L_12, /*hidden argument*/List_1__ctor_m21D978936866998FD41335DC29174A855115EBBC_RuntimeMethod_var);
		List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * L_13 = L_12;
		Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * L_14 = ___callback1;
		NullCheck(L_13);
		List_1_Add_m28CB823F772535151E966A56E1E2B5138AD538D0(L_13, L_14, /*hidden argument*/List_1_Add_m28CB823F772535151E966A56E1E2B5138AD538D0_RuntimeMethod_var);
		NullCheck(L_10);
		Dictionary_2_Add_mD8A7AB2EFD21D08C7853DD671529F088C93CCB43(L_10, L_11, L_13, /*hidden argument*/Dictionary_2_Add_mD8A7AB2EFD21D08C7853DD671529F088C93CCB43_RuntimeMethod_var);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_15 = ___requestAction3;
		NullCheck(L_15);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_15, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0056:
	{
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_16 = ___callbackDictionary2;
		String_t* L_17 = ___transactionId0;
		NullCheck(L_16);
		List_1_tE486A96107BE180E89C4D20EA6AB61FC74DF0008 * L_18 = Dictionary_2_get_Item_m06227059A7D084647BD2FAC6BF6382E86D667E74(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_m06227059A7D084647BD2FAC6BF6382E86D667E74_RuntimeMethod_var);
		Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * L_19 = ___callback1;
		NullCheck(L_18);
		List_1_Add_m28CB823F772535151E966A56E1E2B5138AD538D0(L_18, L_19, /*hidden argument*/List_1_Add_m28CB823F772535151E966A56E1E2B5138AD538D0_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::RetrieveProducts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_RetrieveProducts_m708E6ED5EA90B9E7F6B1E72921120B8AB86DE951 (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_RetrieveProducts_m708E6ED5EA90B9E7F6B1E72921120B8AB86DE951_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, UnityChannelBindings_RetrieveProducts_m708E6ED5EA90B9E7F6B1E72921120B8AB86DE951_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::Purchase(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_Purchase_mBD1E269D5D9E1A0ACFE332123AFDECAD37FD4E8F (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_Purchase_mBD1E269D5D9E1A0ACFE332123AFDECAD37FD4E8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, UnityChannelBindings_Purchase_mBD1E269D5D9E1A0ACFE332123AFDECAD37FD4E8F_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::FinishTransaction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings_FinishTransaction_m33A01DB5A80FD222D0E64DE24A9BE9C11DA29634 (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, String_t* ___productJSON0, String_t* ___transactionID1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_FinishTransaction_m33A01DB5A80FD222D0E64DE24A9BE9C11DA29634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, UnityChannelBindings_FinishTransaction_m33A01DB5A80FD222D0E64DE24A9BE9C11DA29634_RuntimeMethod_var);
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.UnityChannelBindings::PurchaseInfoToDictionary(UnityEngine.ChannelPurchase.PurchaseInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * UnityChannelBindings_PurchaseInfoToDictionary_mD9A74BE343086068E2C5E9FCEAFB8842FCA537A7 (PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * ___purchaseInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings_PurchaseInfoToDictionary_mD9A74BE343086068E2C5E9FCEAFB8842FCA537A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * V_0 = NULL;
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * V_1 = NULL;
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_0 = (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *)il2cpp_codegen_object_new(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B(L_0, /*hidden argument*/Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_1 = V_0;
		PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * L_2 = ___purchaseInfo0;
		NullCheck(L_2);
		String_t* L_3 = PurchaseInfo_get_gameOrderId_m019A81061C04FF551917377B24E1A68427581738_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_1, _stringLiteralD8556CF7451C22FF4E069B286916B24EBBF72F1F, L_3, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_4 = V_0;
		PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * L_5 = ___purchaseInfo0;
		NullCheck(L_5);
		String_t* L_6 = PurchaseInfo_get_productCode_mF7064DB7FD1EC1919094CC4CF9A41C42D567682B_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_4, _stringLiteralCDBA822F8324B05B69E1AA552687ED7C8B37C97F, L_6, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_7 = V_0;
		PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * L_8 = ___purchaseInfo0;
		NullCheck(L_8);
		String_t* L_9 = PurchaseInfo_get_orderQueryToken_mCA0B114664FE5CDFCAC7506834C6F18469BCF945_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_7, _stringLiteral5E559229B29D569C60E8DBD544459654886372FE, L_9, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_10 = V_0;
		PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * L_11 = ___purchaseInfo0;
		NullCheck(L_11);
		String_t* L_12 = PurchaseInfo_get_developerPayload_m1287F3D31A9FCFFDA0189089D987C410AEA3D6DA_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_10, _stringLiteral3B64CAA4AC5332E2069F86F967064FE587AF7820, L_12, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_13 = V_0;
		V_1 = L_13;
		goto IL_0053;
	}

IL_0053:
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_14 = V_1;
		return L_14;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelBindings__ctor_m800B818DBBB149123B52A1AC81E3ABFF998EB3E9 (UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelBindings__ctor_m800B818DBBB149123B52A1AC81E3ABFF998EB3E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_0 = (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 *)il2cpp_codegen_object_new(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7AA3194A16B23BA1E1D60E463385BBE476347B39(L_0, /*hidden argument*/Dictionary_2__ctor_m7AA3194A16B23BA1E1D60E463385BBE476347B39_RuntimeMethod_var);
		__this->set_m_ValidateCallbacks_2(L_0);
		Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 * L_1 = (Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958 *)il2cpp_codegen_object_new(Dictionary_2_t7A4635A3B21B52DE7104114E8C18AD138B19F958_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7AA3194A16B23BA1E1D60E463385BBE476347B39(L_1, /*hidden argument*/Dictionary_2__ctor_m7AA3194A16B23BA1E1D60E463385BBE476347B39_RuntimeMethod_var);
		__this->set_m_PurchaseConfirmCallbacks_3(L_1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Purchasing.UnityChannelBindings_<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m15D07433179BF2E06D3D623A40AFE4AC35835796 (U3CU3Ec__DisplayClass16_0_tB91567274B7906CE554758FDB7180DBA22B1A9A5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelBindings_<>c__DisplayClass16_0::<ValidateReceipt>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CValidateReceiptU3Eb__0_mB74DBD0867B3ACEFCACC6DEEFD3257E1FB48F974 (U3CU3Ec__DisplayClass16_0_tB91567274B7906CE554758FDB7180DBA22B1A9A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass16_0_U3CValidateReceiptU3Eb__0_mB74DBD0867B3ACEFCACC6DEEFD3257E1FB48F974_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_transactionId_0();
		UnityChannelBindings_t1F55436FB3D015BA0B293C37951600A73A93E0E6 * L_1 = __this->get_U3CU3E4__this_1();
		IL2CPP_RUNTIME_CLASS_INIT(PurchaseService_t7F12D5C55BBD81DB4420C2853172B9FED0FF3830_il2cpp_TypeInfo_var);
		PurchaseService_ValidateReceipt_m98B3D125BE4906AB67D40336B9F20CA5B79CED82(L_0, L_1, /*hidden argument*/NULL);
		return;
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
// System.Void UnityEngine.Purchasing.UnityChannelImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl__ctor_m1D38687AB894D06177083B9E4916E0411E12B012 (UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelImpl__ctor_m1D38687AB894D06177083B9E4916E0411E12B012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_LastPurchaseError_22(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		JSONStore__ctor_m570AB189D1235ABACA377D61EBED022A6E38106A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::SetNativeStore(UnityEngine.Purchasing.INativeUnityChannelStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_SetNativeStore_m3844FA9D34E20325D978CFD141C2B5FEBF03C6A9 (UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * __this, RuntimeObject* ___unityChannelBindings0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___unityChannelBindings0;
		JSONStore_SetNativeStore_m3736579E1263AF2F1E9296FB9C65BCB2A71C7EAA(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___unityChannelBindings0;
		__this->set_m_Bindings_21(L_1);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_RetrieveProducts_m4D12752F37BFF5A91A277640645DFE9173C3D8A2 (UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * __this, ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * ___products0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelImpl_RetrieveProducts_m4D12752F37BFF5A91A277640645DFE9173C3D8A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_m_Bindings_21();
		ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * L_1 = ___products0;
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_2 = (Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)il2cpp_codegen_object_new(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2_il2cpp_TypeInfo_var);
		Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8(L_2, __this, (intptr_t)((intptr_t)UnityChannelImpl_U3CRetrieveProductsU3Eb__6_0_m019AAAA768C375ADD560319043E2FCF47DC2B658_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker2< ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D *, Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * >::Invoke(1 /* System.Void UnityEngine.Purchasing.INativeUnityChannelStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>) */, INativeUnityChannelStore_t18D6F9F734AC2D2B0CCAED9A071D89456B57B15D_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_Purchase_m26F65FC9DFD5C3D0C7CFB3CE4639E84736EE6B50 (UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelImpl_Purchase_m26F65FC9DFD5C3D0C7CFB3CE4639E84736EE6B50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 * L_0 = (U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass7_0__ctor_m3B9093B4E407AF43B2F4942BABC26C76A5283411(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_1(__this);
		U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 * L_2 = V_0;
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_3 = ___product0;
		NullCheck(L_2);
		L_2->set_product_0(L_3);
		RuntimeObject* L_4 = __this->get_m_Bindings_21();
		U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 * L_5 = V_0;
		NullCheck(L_5);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_6 = L_5->get_product_0();
		NullCheck(L_6);
		String_t* L_7 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_6, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 * L_8 = V_0;
		Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * L_9 = (Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *)il2cpp_codegen_object_new(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2_il2cpp_TypeInfo_var);
		Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass7_0_U3CPurchaseU3Eb__0_mEE15F0E915AF3F9B8BF6874696937894E9C30DE1_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m1AEB27DAFD050D8423D30BFC70086975032888E8_RuntimeMethod_var);
		String_t* L_10 = ___developerPayload1;
		NullCheck(L_4);
		InterfaceActionInvoker3< String_t*, Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 *, String_t* >::Invoke(0 /* System.Void UnityEngine.Purchasing.INativeUnityChannelStore::Purchase(System.String,System.Action`2<System.Boolean,System.String>,System.String) */, INativeUnityChannelStore_t18D6F9F734AC2D2B0CCAED9A071D89456B57B15D_il2cpp_TypeInfo_var, L_4, L_7, L_9, L_10);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::extractDeveloperPayload(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_extractDeveloperPayload_mF3A5C6FB70814A17FE64E825F9412B2E27065D0A (UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dic0, String_t* ___signData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelImpl_extractDeveloperPayload_mF3A5C6FB70814A17FE64E825F9412B2E27065D0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_0 = NULL;
	String_t* V_1 = NULL;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		String_t* L_0 = ___signData1;
		RuntimeObject * L_1 = MiniJson_JsonDecode_m4F90554E3C783D4EA66473DCB81826937A6BA268(L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)CastclassClass((RuntimeObject*)L_1, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var));
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89(L_2, _stringLiteralF98961015A0AC393630F4EDA3749D644A716DA64, /*hidden argument*/Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_007e;
	}

IL_0021:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2(L_5, _stringLiteralF98961015A0AC393630F4EDA3749D644A716DA64, /*hidden argument*/Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var);
		V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var));
		String_t* L_7 = V_1;
		bool L_8 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_007e;
	}

IL_0040:
	{
		String_t* L_10 = V_1;
		RuntimeObject * L_11 = MiniJson_JsonDecode_m4F90554E3C783D4EA66473DCB81826937A6BA268(L_10, /*hidden argument*/NULL);
		V_2 = ((Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)CastclassClass((RuntimeObject*)L_11, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var));
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_12 = V_2;
		NullCheck(L_12);
		bool L_13 = Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89(L_12, _stringLiteralB41F2D713DC92217B42B25AA193107BD2F8863D6, /*hidden argument*/Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0062;
		}
	}
	{
		goto IL_007e;
	}

IL_0062:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_15 = ___dic0;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_16 = V_2;
		NullCheck(L_16);
		RuntimeObject * L_17 = Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2(L_16, _stringLiteralB41F2D713DC92217B42B25AA193107BD2F8863D6, /*hidden argument*/Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var);
		NullCheck(L_15);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_15, _stringLiteral3B64CAA4AC5332E2069F86F967064FE587AF7820, ((String_t*)CastclassSealed((RuntimeObject*)L_17, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_007e:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_FinishTransaction_m8652B785CE274CD9DEED318DBEE2A8536C28F78F (UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.UnityChannelImpl::get_fetchReceiptPayloadOnPurchase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityChannelImpl_get_fetchReceiptPayloadOnPurchase_m6F02B48EE38983D0F5794E0C81A62E39F2328E78 (UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23();
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::set_fetchReceiptPayloadOnPurchase(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_set_fetchReceiptPayloadOnPurchase_mE0CE5A41072F007F693017A1060E2B686641B78A (UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::ValidateReceipt(System.String,System.Action`3<System.Boolean,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_ValidateReceipt_mA1272B9852E698F8F30BBC28E285050C0DB1AD3F (UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * __this, String_t* ___transactionIdentifier0, Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityChannelImpl_ValidateReceipt_mA1272B9852E698F8F30BBC28E285050C0DB1AD3F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_m_Bindings_21();
		String_t* L_1 = ___transactionIdentifier0;
		Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * L_2 = ___callback1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * >::Invoke(2 /* System.Void UnityEngine.Purchasing.INativeUnityChannelStore::ValidateReceipt(System.String,System.Action`3<System.Boolean,System.String,System.String>) */, INativeUnityChannelStore_t18D6F9F734AC2D2B0CCAED9A071D89456B57B15D_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.String UnityEngine.Purchasing.UnityChannelImpl::GetLastPurchaseError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityChannelImpl_GetLastPurchaseError_m7C01D4EAE34FBAD98F603E9E3FD53F22AEB17105 (UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_LastPurchaseError_22();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl::<RetrieveProducts>b__6_0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelImpl_U3CRetrieveProductsU3Eb__6_0_m019AAAA768C375ADD560319043E2FCF47DC2B658 (UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * __this, bool ___result0, String_t* ___json1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___json1;
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void UnityEngine.Purchasing.JSONStore::OnProductsRetrieved(System.String) */, __this, L_0);
		return;
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
// System.Void UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m3B9093B4E407AF43B2F4942BABC26C76A5283411 (U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_0::<Purchase>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CPurchaseU3Eb__0_mEE15F0E915AF3F9B8BF6874696937894E9C30DE1 (U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 * __this, bool ___purchaseSuccess0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass7_0_U3CPurchaseU3Eb__0_mEE15F0E915AF3F9B8BF6874696937894E9C30DE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	String_t* V_7 = NULL;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_10 = NULL;
	String_t* V_11 = NULL;
	bool V_12 = false;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_13 = NULL;
	String_t* V_14 = NULL;
	PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	{
		UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		L_0->set_m_LastPurchaseError_22(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		bool L_1 = ___purchaseSuccess0;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_015d;
		}
	}
	{
		U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * L_3 = (U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass7_1__ctor_m7E08D72B9AFE8EB28E60A8BAC95FD54EAAE15A14(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_CSU24U3CU3E8__locals1_2(__this);
		U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * L_5 = V_1;
		String_t* L_6 = ___message1;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_7 = MiniJsonExtensions_HashtableFromJson_m924DE4EC163F926FCAC0ACB6890D9865E1A3D0D9(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_dic_0(L_7);
		U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * L_8 = V_1;
		U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * L_9 = V_1;
		NullCheck(L_9);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_10 = L_9->get_dic_0();
		String_t* L_11 = MiniJsonExtensions_GetString_mB42DECB2528309B3A49269120548258B3E0B6142(L_10, _stringLiteralD8556CF7451C22FF4E069B286916B24EBBF72F1F, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set_transactionId_1(L_11);
		U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * L_12 = V_1;
		NullCheck(L_12);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_13 = L_12->get_dic_0();
		String_t* L_14 = MiniJsonExtensions_GetString_mB42DECB2528309B3A49269120548258B3E0B6142(L_13, _stringLiteralCDBA822F8324B05B69E1AA552687ED7C8B37C97F, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_2 = L_14;
		U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * L_15 = V_1;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_transactionId_1();
		bool L_17 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_16, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_008f;
		}
	}
	{
		U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * L_19 = V_1;
		NullCheck(L_19);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_20 = L_19->get_dic_0();
		U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * L_21 = V_1;
		NullCheck(L_21);
		String_t* L_22 = L_21->get_transactionId_1();
		NullCheck(L_20);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_20, _stringLiteralEEC947EFA94259F79FE7A8031A0644FA4D6F7E55, L_22, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_008f:
	{
		String_t* L_23 = V_2;
		bool L_24 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_23, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00b2;
		}
	}
	{
		U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_27 = L_26->get_dic_0();
		String_t* L_28 = V_2;
		NullCheck(L_27);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_27, _stringLiteral3CA230360D8FF1EB1494B9AFEFA28AE96B3D2DFA, L_28, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_00b2:
	{
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_29 = __this->get_product_0();
		NullCheck(L_29);
		String_t* L_30 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_29, /*hidden argument*/NULL);
		String_t* L_31 = V_2;
		NullCheck(L_30);
		bool L_32 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_30, L_31, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_5;
		if (!L_33)
		{
			goto IL_00f1;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_34 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_35 = L_34;
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_36 = __this->get_product_0();
		NullCheck(L_36);
		String_t* L_37 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_37);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = L_35;
		String_t* L_39 = V_2;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_39);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB(_stringLiteral97EDC12A699B77CD7DCA0C6ECC5E0AB625126F74, L_38, /*hidden argument*/NULL);
	}

IL_00f1:
	{
		UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * L_40 = __this->get_U3CU3E4__this_1();
		NullCheck(L_40);
		bool L_41 = UnityChannelImpl_get_fetchReceiptPayloadOnPurchase_m6F02B48EE38983D0F5794E0C81A62E39F2328E78_inline(L_40, /*hidden argument*/NULL);
		V_6 = L_41;
		bool L_42 = V_6;
		if (!L_42)
		{
			goto IL_0124;
		}
	}
	{
		UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * L_43 = __this->get_U3CU3E4__this_1();
		U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * L_44 = V_1;
		NullCheck(L_44);
		String_t* L_45 = L_44->get_transactionId_1();
		U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * L_46 = V_1;
		Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF * L_47 = (Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF *)il2cpp_codegen_object_new(Action_3_tBE7F0CB9A4EF2163FCC22B02DA4ECBEE5FD71ADF_il2cpp_TypeInfo_var);
		Action_3__ctor_mCF36739F19ED5E1D79C77CBE83B1B23BEC60A50A(L_47, L_46, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass7_1_U3CPurchaseU3Eb__1_m241F92731F2595B51F7433EE874868474416259F_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_mCF36739F19ED5E1D79C77CBE83B1B23BEC60A50A_RuntimeMethod_var);
		NullCheck(L_43);
		UnityChannelImpl_ValidateReceipt_mA1272B9852E698F8F30BBC28E285050C0DB1AD3F(L_43, L_45, L_47, /*hidden argument*/NULL);
		goto IL_0157;
	}

IL_0124:
	{
		U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * L_48 = V_1;
		NullCheck(L_48);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_49 = L_48->get_dic_0();
		String_t* L_50 = MiniJsonExtensions_toJson_m990366CD4919BF3809E5C83E6F64A7B12D19F2DB(L_49, /*hidden argument*/NULL);
		V_7 = L_50;
		UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * L_51 = __this->get_U3CU3E4__this_1();
		NullCheck(L_51);
		RuntimeObject* L_52 = ((JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3 *)L_51)->get_unity_1();
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_53 = __this->get_product_0();
		NullCheck(L_53);
		String_t* L_54 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_53, /*hidden argument*/NULL);
		String_t* L_55 = V_7;
		U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = L_56->get_transactionId_1();
		NullCheck(L_52);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseSucceeded(System.String,System.String,System.String) */, IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var, L_52, L_54, L_55, L_57);
	}

IL_0157:
	{
		goto IL_0277;
	}

IL_015d:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_58 = { reinterpret_cast<intptr_t> (PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_59 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_58, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeObject * L_60 = Enum_Parse_m8677C5E01F1258902058D844824B93F7836BF4C3(L_59, _stringLiteralBC7819B34FF87570745FBE461E36A16F80E562CE, /*hidden argument*/NULL);
		V_8 = ((*(int32_t*)((int32_t*)UnBox(L_60, PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var))));
		RuntimeObject * L_61 = Box(PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var, (&V_8));
		NullCheck(L_61);
		String_t* L_62 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_61);
		V_8 = *(int32_t*)UnBox(L_61);
		V_9 = L_62;
		String_t* L_63 = ___message1;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_64 = MiniJsonExtensions_HashtableFromJson_m924DE4EC163F926FCAC0ACB6890D9865E1A3D0D9(L_63, /*hidden argument*/NULL);
		V_10 = L_64;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_65 = V_10;
		String_t* L_66 = MiniJsonExtensions_GetString_mB42DECB2528309B3A49269120548258B3E0B6142(L_65, _stringLiteralE005CDF78FC36965B839E7115A56CAE84B2994B3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_11 = L_66;
		String_t* L_67 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var);
		Boolean_TryParse_m5EA8C5E47A3BF0223FD368503B36206256937A61(L_67, (bool*)(&V_12), /*hidden argument*/NULL);
		bool L_68 = V_12;
		V_16 = L_68;
		bool L_69 = V_16;
		if (!L_69)
		{
			goto IL_01f5;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_70 = { reinterpret_cast<intptr_t> (PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_71 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_70, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		bool L_72 = Enum_IsDefined_mA573B15329CA2AA7C59367D514D2927FC66217E2(L_71, _stringLiteralC7A91F521E4D9BB48785CB95247C02A5B1E37394, /*hidden argument*/NULL);
		V_17 = L_72;
		bool L_73 = V_17;
		if (!L_73)
		{
			goto IL_01ed;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_74 = { reinterpret_cast<intptr_t> (PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_75 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_74, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeObject * L_76 = Enum_Parse_m8677C5E01F1258902058D844824B93F7836BF4C3(L_75, _stringLiteralC7A91F521E4D9BB48785CB95247C02A5B1E37394, /*hidden argument*/NULL);
		V_8 = ((*(int32_t*)((int32_t*)UnBox(L_76, PurchaseFailureReason_t42EC65C1103B27F82198DC42C8D96C1A14ED7432_il2cpp_TypeInfo_var))));
	}

IL_01ed:
	{
		V_9 = _stringLiteralC7A91F521E4D9BB48785CB95247C02A5B1E37394;
	}

IL_01f5:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_77 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_77, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		V_13 = L_77;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_78 = V_13;
		String_t* L_79 = V_9;
		NullCheck(L_78);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_78, _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671, L_79, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_80 = V_10;
		NullCheck(L_80);
		bool L_81 = Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89(L_80, _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D, /*hidden argument*/Dictionary_2_ContainsKey_mAD4B2095526B4742201B24C5ADF1717AFB15EF89_RuntimeMethod_var);
		V_18 = L_81;
		bool L_82 = V_18;
		if (!L_82)
		{
			goto IL_0238;
		}
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_83 = V_13;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_84 = V_10;
		NullCheck(L_84);
		RuntimeObject * L_85 = Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2(L_84, _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D, /*hidden argument*/Dictionary_2_get_Item_mB490F7029D7451FAF06E3020040E604B500BA3B2_RuntimeMethod_var);
		NullCheck(L_83);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_83, _stringLiteral26033E5F3BB95E3FCDD14CE15A4DFA895C5BE41D, L_85, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_0238:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_86 = V_13;
		String_t* L_87 = MiniJsonExtensions_toJson_m990366CD4919BF3809E5C83E6F64A7B12D19F2DB(L_86, /*hidden argument*/NULL);
		V_14 = L_87;
		UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * L_88 = __this->get_U3CU3E4__this_1();
		String_t* L_89 = V_14;
		NullCheck(L_88);
		L_88->set_m_LastPurchaseError_22(L_89);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_90 = __this->get_product_0();
		NullCheck(L_90);
		String_t* L_91 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_90, /*hidden argument*/NULL);
		int32_t L_92 = V_8;
		String_t* L_93 = ___message1;
		PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * L_94 = (PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C *)il2cpp_codegen_object_new(PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C_il2cpp_TypeInfo_var);
		PurchaseFailureDescription__ctor_mD1B896C37FDB5EBB659FED6024169FFB1CAE0CF1(L_94, L_91, L_92, L_93, /*hidden argument*/NULL);
		V_15 = L_94;
		UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * L_95 = __this->get_U3CU3E4__this_1();
		NullCheck(L_95);
		RuntimeObject* L_96 = ((JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3 *)L_95)->get_unity_1();
		PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * L_97 = V_15;
		NullCheck(L_96);
		InterfaceActionInvoker1< PurchaseFailureDescription_t54501CD2482DF31C114490488941916F8CD9B92C * >::Invoke(4 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription) */, IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var, L_96, L_97);
	}

IL_0277:
	{
		return;
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
// System.Void UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_1__ctor_m7E08D72B9AFE8EB28E60A8BAC95FD54EAAE15A14 (U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityChannelImpl_<>c__DisplayClass7_1::<Purchase>b__1(System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_1_U3CPurchaseU3Eb__1_m241F92731F2595B51F7433EE874868474416259F (U3CU3Ec__DisplayClass7_1_t38B67CB8D5BA086EE9FD4CB02099F5C891F09FEE * __this, bool ___success0, String_t* ___signData1, String_t* ___signature2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass7_1_U3CPurchaseU3Eb__1_m241F92731F2595B51F7433EE874868474416259F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * G_B4_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * G_B6_2 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * G_B5_2 = NULL;
	{
		bool L_0 = ___success0;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_2 = __this->get_dic_0();
		String_t* L_3 = ___signData1;
		NullCheck(L_2);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_2, _stringLiteral05D97E6E9834CCF063C552E404B9ECAFC5E4D662, L_3, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_4 = __this->get_dic_0();
		String_t* L_5 = ___signature2;
		NullCheck(L_4);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_4, _stringLiteralFAB5F62863CDEDC5143552C9D37D6679E3304F7A, L_5, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 * L_6 = __this->get_CSU24U3CU3E8__locals1_2();
		NullCheck(L_6);
		UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * L_7 = L_6->get_U3CU3E4__this_1();
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_8 = __this->get_dic_0();
		String_t* L_9 = ___signData1;
		NullCheck(L_7);
		UnityChannelImpl_extractDeveloperPayload_mF3A5C6FB70814A17FE64E825F9412B2E27065D0A(L_7, L_8, L_9, /*hidden argument*/NULL);
		goto IL_0094;
	}

IL_0046:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_10 = __this->get_dic_0();
		String_t* L_11 = ___signData1;
		String_t* L_12 = L_11;
		G_B3_0 = L_12;
		G_B3_1 = _stringLiteral05D97E6E9834CCF063C552E404B9ECAFC5E4D662;
		G_B3_2 = L_10;
		if (L_12)
		{
			G_B4_0 = L_12;
			G_B4_1 = _stringLiteral05D97E6E9834CCF063C552E404B9ECAFC5E4D662;
			G_B4_2 = L_10;
			goto IL_005c;
		}
	}
	{
		G_B4_0 = _stringLiteralEE1FDF0EDBB24CBF96DFA0339B642B2085C163F6;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_005c:
	{
		NullCheck(G_B4_2);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(G_B4_2, G_B4_1, G_B4_0, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_13 = __this->get_dic_0();
		String_t* L_14 = ___signature2;
		String_t* L_15 = L_14;
		G_B5_0 = L_15;
		G_B5_1 = _stringLiteralFAB5F62863CDEDC5143552C9D37D6679E3304F7A;
		G_B5_2 = L_13;
		if (L_15)
		{
			G_B6_0 = L_15;
			G_B6_1 = _stringLiteralFAB5F62863CDEDC5143552C9D37D6679E3304F7A;
			G_B6_2 = L_13;
			goto IL_0077;
		}
	}
	{
		G_B6_0 = _stringLiteralEE1FDF0EDBB24CBF96DFA0339B642B2085C163F6;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(G_B6_2, G_B6_1, G_B6_0, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_16 = __this->get_dic_0();
		NullCheck(L_16);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_16, _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671, _stringLiteral97CF83B8420705673DD9E20FFB51124368B3F7BC, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
	}

IL_0094:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_17 = __this->get_dic_0();
		String_t* L_18 = MiniJsonExtensions_toJson_m990366CD4919BF3809E5C83E6F64A7B12D19F2DB(L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 * L_19 = __this->get_CSU24U3CU3E8__locals1_2();
		NullCheck(L_19);
		UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * L_20 = L_19->get_U3CU3E4__this_1();
		NullCheck(L_20);
		RuntimeObject* L_21 = ((JSONStore_tA1476E0077C2071520663F35D28A5E7AF830CEE3 *)L_20)->get_unity_1();
		U3CU3Ec__DisplayClass7_0_t49FACE65C2487483820DF485344FA9E4DC6351A0 * L_22 = __this->get_CSU24U3CU3E8__locals1_2();
		NullCheck(L_22);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_23 = L_22->get_product_0();
		NullCheck(L_23);
		String_t* L_24 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_23, /*hidden argument*/NULL);
		String_t* L_25 = V_0;
		String_t* L_26 = __this->get_transactionId_1();
		NullCheck(L_21);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseSucceeded(System.String,System.String,System.String) */, IStoreCallback_t4823C53C7713E1376F628AF0D95AEEC85B192C60_il2cpp_TypeInfo_var, L_21, L_24, L_25, L_26);
		return;
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
// System.Void UnityEngine.Purchasing.UnityChannelPurchaseReceipt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityChannelPurchaseReceipt__ctor_m7A5835DD694499845AD0BC7BA92F968925DFF489 (UnityChannelPurchaseReceipt_t22BA5D3915A198D116BB4813CF1D5A9C66DC6D69 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.WinRTStore::.ctor(UnityEngine.Purchasing.Default.IWindowsIAP,Uniject.IUtil,UnityEngine.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore__ctor_mC3D05CF3EA7F2ADDF370EF4B62857E90D3DF86D1 (WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F * __this, RuntimeObject* ___win80, RuntimeObject* ___util1, RuntimeObject* ___logger2, const RuntimeMethod* method)
{
	{
		__this->set_m_CanReceivePurchases_4((bool)0);
		AbstractStore__ctor_mD841D92381EA66878B36E6CC24970523A01068B3(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___win80;
		__this->set_win8_0(L_0);
		RuntimeObject* L_1 = ___util1;
		__this->set_util_2(L_1);
		RuntimeObject* L_2 = ___logger2;
		__this->set_logger_3(L_2);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::SetWindowsIAP(UnityEngine.Purchasing.Default.IWindowsIAP)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_SetWindowsIAP_mCCB52FDF135E708BFBF8C500BD415F2F94F72900 (WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F * __this, RuntimeObject* ___iap0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___iap0;
		__this->set_win8_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_Initialize_mA0D9D2E39E75D7E698953569EC52F727E09E1909 (WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F * __this, RuntimeObject* ___biller0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___biller0;
		__this->set_callback_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_RetrieveProducts_m298D0B88F2668D331E8DF3097FD3EF43F0711835 (WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F * __this, ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * ___productDefs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_RetrieveProducts_m298D0B88F2668D331E8DF3097FD3EF43F0711835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * G_B2_0 = NULL;
	ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * G_B2_1 = NULL;
	Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * G_B1_0 = NULL;
	ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * G_B1_1 = NULL;
	Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		ReadOnlyCollection_1_tF0BB6018B708B7F0FCF910A9B008A3E81C00B29D * L_0 = ___productDefs0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_il2cpp_TypeInfo_var);
		Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * L_1 = ((U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_il2cpp_TypeInfo_var))->get_U3CU3E9__8_0_1();
		Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_il2cpp_TypeInfo_var);
		U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669 * L_3 = ((U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * L_4 = (Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 *)il2cpp_codegen_object_new(Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7_il2cpp_TypeInfo_var);
		Func_2__ctor_m666791AAB6A75CF7280C43B9B7276C1C6C60A98A(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m141D08D9967D1346ECC87F2DCE27FE7584E90BAF_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m666791AAB6A75CF7280C43B9B7276C1C6C60A98A_RuntimeMethod_var);
		Func_2_t76044B32F26807EFE415B6A049506E2B42ADAAB7 * L_5 = L_4;
		((U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_il2cpp_TypeInfo_var))->set_U3CU3E9__8_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		RuntimeObject* L_6 = Enumerable_Where_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_m1A96F66F6EFA8BB873220824E46F0751F974DF28(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Where_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_m1A96F66F6EFA8BB873220824E46F0751F974DF28_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_il2cpp_TypeInfo_var);
		Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * L_7 = ((U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_il2cpp_TypeInfo_var))->get_U3CU3E9__8_1_2();
		Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_il2cpp_TypeInfo_var);
		U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669 * L_9 = ((U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * L_10 = (Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E *)il2cpp_codegen_object_new(Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E_il2cpp_TypeInfo_var);
		Func_2__ctor_m2038F3104EEA592CAD20C70731ADFDDD5B6FDAA5(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m0AB721703472B612731E56E29EE94BA51860219D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m2038F3104EEA592CAD20C70731ADFDDD5B6FDAA5_RuntimeMethod_var);
		Func_2_t6B23ACF33C26ECBFD13560CC6FB2CBA05F58AB0E * L_11 = L_10;
		((U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_il2cpp_TypeInfo_var))->set_U3CU3E9__8_1_2(L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_0045:
	{
		RuntimeObject* L_12 = Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisWinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_m005AB802FC8196952DC2A0151E68AB648544D47E(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Select_TisProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10_TisWinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_m005AB802FC8196952DC2A0151E68AB648544D47E_RuntimeMethod_var);
		V_0 = L_12;
		RuntimeObject* L_13 = __this->get_win8_0();
		RuntimeObject* L_14 = V_0;
		List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92 * L_15 = Enumerable_ToList_TisWinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_mE3D3472C4553BFEAC57A272A18CF5874C1B64530(L_14, /*hidden argument*/Enumerable_ToList_TisWinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_mE3D3472C4553BFEAC57A272A18CF5874C1B64530_RuntimeMethod_var);
		NullCheck(L_13);
		InterfaceActionInvoker1< List_1_tDC37D02C7262DECFB1401200873DAAFB64D14A92 * >::Invoke(0 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::BuildDummyProducts(System.Collections.Generic.List`1<UnityEngine.Purchasing.Default.WinProductDescription>) */, IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD_il2cpp_TypeInfo_var, L_13, L_15);
		WinRTStore_init_m1FFD23EEF3EFE9E6985DD722ED21D721191BEC59(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_FinishTransaction_m294B693324F8361C80643002F9178C62BEEBFF52 (WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product0, String_t* ___transactionId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_FinishTransaction_m294B693324F8361C80643002F9178C62BEEBFF52_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_win8_0();
		String_t* L_1 = ___transactionId1;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::FinaliseTransaction(System.String) */, IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_init_m1FFD23EEF3EFE9E6985DD722ED21D721191BEC59 (WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F * __this, int32_t ___delay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_init_m1FFD23EEF3EFE9E6985DD722ED21D721191BEC59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_win8_0();
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::Initialize(UnityEngine.Purchasing.Default.IWindowsIAPCallback) */, IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD_il2cpp_TypeInfo_var, L_0, __this);
		RuntimeObject* L_1 = __this->get_win8_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::RetrieveProducts(System.Boolean) */, IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD_il2cpp_TypeInfo_var, L_1, (bool)1);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_Purchase_m22CA7017FF66D0BDDDBEA41DC2E9086E126C950A (WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___product0, String_t* ___developerPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_Purchase_m22CA7017FF66D0BDDDBEA41DC2E9086E126C950A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_win8_0();
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_1 = ___product0;
		NullCheck(L_1);
		String_t* L_2 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::Purchase(System.String) */, IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD_il2cpp_TypeInfo_var, L_0, L_2);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::restoreTransactions(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_restoreTransactions_m7A6CCA12CF944C0BE65EC772A3B190DBD088A18A (WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F * __this, bool ___pausing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_restoreTransactions_m7A6CCA12CF944C0BE65EC772A3B190DBD088A18A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = ___pausing0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2 = __this->get_m_CanReceivePurchases_4();
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_4 = __this->get_win8_0();
		NullCheck(L_4);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::RetrieveProducts(System.Boolean) */, IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD_il2cpp_TypeInfo_var, L_4, (bool)0);
	}

IL_0023:
	{
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore::RestoreTransactions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRTStore_RestoreTransactions_m0678C966E5A84AA80AC7CECA9557194ED0E0824E (WinRTStore_tE10DCCB8F603A2D08C6EC23F9FA3EF0DD05B7E5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinRTStore_RestoreTransactions_m0678C966E5A84AA80AC7CECA9557194ED0E0824E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_logger_3();
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(3 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_0, _stringLiteralEDEDA8D96D6BEFA5C97172CAF6624B6A80182222);
		RuntimeObject* L_1 = __this->get_win8_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Purchasing.Default.IWindowsIAP::RetrieveProducts(System.Boolean) */, IWindowsIAP_t3931801DBD3E650C4A353E73C0B6EB6836BB44DD_il2cpp_TypeInfo_var, L_1, (bool)0);
		__this->set_m_CanReceivePurchases_4((bool)1);
		return;
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
// System.Void UnityEngine.Purchasing.WinRTStore_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3C3B04F551E87B4C62C26D2754A8C74D685B0215 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m3C3B04F551E87B4C62C26D2754A8C74D685B0215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669 * L_0 = (U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669 *)il2cpp_codegen_object_new(U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0155A413AC109FB1436303325286E17DA5FA0A8A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.WinRTStore_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0155A413AC109FB1436303325286E17DA5FA0A8A (U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.WinRTStore_<>c::<RetrieveProducts>b__8_0(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m141D08D9967D1346ECC87F2DCE27FE7584E90BAF (U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___def0, const RuntimeMethod* method)
{
	{
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_0 = ___def0;
		NullCheck(L_0);
		int32_t L_1 = ProductDefinition_get_type_mA29E160E9BB1D4A18009F3832F4743A43A499E07_inline(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Purchasing.Default.WinProductDescription UnityEngine.Purchasing.WinRTStore_<>c::<RetrieveProducts>b__8_1(UnityEngine.Purchasing.ProductDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43 * U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m0AB721703472B612731E56E29EE94BA51860219D (U3CU3Ec_tF42FD512AFA7880FDBFFE6A79D35EC6808503669 * __this, ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * ___def0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m0AB721703472B612731E56E29EE94BA51860219D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_0 = ___def0;
		NullCheck(L_0);
		String_t* L_1 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_0, /*hidden argument*/NULL);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_2 = ___def0;
		NullCheck(L_2);
		String_t* L_3 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_2, /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralCA9D01ECC70A5325ED60FF47E843538E385AE1F6, L_3, /*hidden argument*/NULL);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_5 = ___def0;
		NullCheck(L_5);
		String_t* L_6 = ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline(L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralE75AEFABDAA785AC2B8267F716185360ED501BCB, L_6, /*hidden argument*/NULL);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Decimal__ctor_mD2BEAABCBAC5D1AF62D0F8E01B2DCD2B725B2C2C((&L_8), 1, 0, 0, (bool)0, (uint8_t)2, /*hidden argument*/NULL);
		ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * L_9 = ___def0;
		NullCheck(L_9);
		int32_t L_10 = ProductDefinition_get_type_mA29E160E9BB1D4A18009F3832F4743A43A499E07_inline(L_9, /*hidden argument*/NULL);
		WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43 * L_11 = (WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43 *)il2cpp_codegen_object_new(WinProductDescription_tB3144EBF4DA49C65396F3AF779136D88E6E3AE43_il2cpp_TypeInfo_var);
		WinProductDescription__ctor_mAAEF8B336277574079D4490C9100998BF237AF8F(L_11, L_1, _stringLiteral862E356EFB96FF23BE395FDD8CF34602BA87D015, L_4, L_7, _stringLiteral57814CFBAE5C6D00F5CAB49E34B9AA2CE8269EB9, L_8, (String_t*)NULL, (String_t*)NULL, (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return L_11;
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
// System.Void UnityEngine.Purchasing.XiaomiPriceTiers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XiaomiPriceTiers__cctor_mC479CA8DD4C96EC6643A8D1890F534B79AC6431D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XiaomiPriceTiers__cctor_mC479CA8DD4C96EC6643A8D1890F534B79AC6431D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)92));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t5700F4D01A9810563DD6E295A10965B13B4B76DF____8ACBA6DEDC6FDA919C1CE7B29030BCA705F0CF41_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((XiaomiPriceTiers_t277154F32924391EF362A479856C47A2A43A6E5B_StaticFields*)il2cpp_codegen_static_fields_for(XiaomiPriceTiers_t277154F32924391EF362A479856C47A2A43A6E5B_il2cpp_TypeInfo_var))->set_XiaomiPriceTierPrices_0(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_productType_m2DA99284539D348A942577EBD8A4B8C1BE6CEE3E_inline (AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CproductTypeU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_m829C28C42028CDBFC9E338962DC7B6B10C8FFBE7_inline (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__ticks_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleInAppPurchaseReceipt_get_purchaseDate_m2C89AC4D5465294E277EEF2832A5515A4F4EF1B5_inline (AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * __this, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_U3CpurchaseDateU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AppleInAppPurchaseReceipt_get_productID_m22C58ECEC095ABAAF053542BBED665FEFADFFF5C_inline (AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CproductIDU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleInAppPurchaseReceipt_get_subscriptionExpirationDate_m0E73DA493554DCAB6DBE2B01967949C9F7BC014C_inline (AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * __this, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_U3CsubscriptionExpirationDateU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AppleInAppPurchaseReceipt_get_cancellationDate_m59B0DF878625D0223E0CCADD81E9AE31F203E4AC_inline (AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * __this, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_U3CcancellationDateU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isFreeTrial_mCF6FB5E7AA1D774393C62C991555F14CA7A6F2A6_inline (AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CisFreeTrialU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t AppleInAppPurchaseReceipt_get_isIntroductoryPricePeriod_m904EBFAEC867D70EF9F9BE66F7EE82152D8EAAAA_inline (AppleInAppPurchaseReceipt_t7E4D7F751E1ACA7B8988C2773E0877C39711C1FC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CisIntroductoryPricePeriodU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_storeSpecificId_m544E2354C4C9049DE5C24D07A347669A05B241D0_inline (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CstoreSpecificIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_GameOrderId_m72B0F3D50BA4F455E255E8D84C4EF2AB4B0568B5_inline (PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CGameOrderIdU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_ProductId_m5A66D147951003A6AE84A0E48E1B9CC83B792559_inline (PurchaseInfo_t878118AC0EE1BC529145064FE010557D74EDCB27 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CProductIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductInfo_get_Price_mC20BE4DAF0ACEF1FD8E3D73A7B822392A8507F06_inline (ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CPriceU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductInfo_get_Title_mC4CA7A45F2B62F059EC6D15EF9B61143195A6DE2_inline (ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTitleU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductInfo_get_Description_m53DAEB7FBE4BC4578CF76432E7D9A425A6BE3DF8_inline (ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDescriptionU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductInfo_get_Currency_mBD8B233524D8F45A7540BE2CE32B2E56A44A3EC9_inline (ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCurrencyU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int64_t ProductInfo_get_PriceAmountMicros_mEADCB6715E057C8FC274E4C087849835CD977528_inline (ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CPriceAmountMicrosU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductInfo_get_ProductId_m242CEBB620758129A347F64915E3804C0A0377FE_inline (ProductInfo_t0B4F7858D6E7D124531415B88F1E94267CFAAABE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CProductIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ProductDefinition_get_type_mA29E160E9BB1D4A18009F3832F4743A43A499E07_inline (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CtypeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method)
{
	{
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * Dropdown_get_onValueChanged_m4EE82DC9AE8618C52CECA362EBDE6284F41E88FE_inline (Dropdown_tF6331401084B1213CAB10587A6EC81461501930F * __this, const RuntimeMethod* method)
{
	{
		DropdownEvent_t429FBB093ED3586F5D49859EBD338125EAB76306 * L_0 = __this->get_m_OnValueChanged_27();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ProductDefinition_get_id_mD5C2A9C1016245C99EB67B74DFC32ECDC8512468_inline (ProductDefinition_t020888B51F9B79E1474119DBE9DEDBDEF7766C10 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ReceiptInfo_get_gameOrderId_m2ED31482237AEBCB4441FFFE22A9D3CAEF328790_inline (ReceiptInfo_t5A3A3B53B5FFCFEA460A254C320E9B72FB82FC9D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CgameOrderIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ReceiptInfo_get_signData_m1534F5C3DC45EECF4016DA072C82FDC1B0973510_inline (ReceiptInfo_t5A3A3B53B5FFCFEA460A254C320E9B72FB82FC9D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CsignDataU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ReceiptInfo_get_signature_m0E9B934D58401FEA73AE4B83B3FDC718D796339A_inline (ReceiptInfo_t5A3A3B53B5FFCFEA460A254C320E9B72FB82FC9D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CsignatureU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_gameOrderId_m019A81061C04FF551917377B24E1A68427581738_inline (PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CgameOrderIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_productCode_mF7064DB7FD1EC1919094CC4CF9A41C42D567682B_inline (PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CproductCodeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_orderQueryToken_mCA0B114664FE5CDFCAC7506834C6F18469BCF945_inline (PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CorderQueryTokenU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PurchaseInfo_get_developerPayload_m1287F3D31A9FCFFDA0189089D987C410AEA3D6DA_inline (PurchaseInfo_tD453ED68ED932ACFE98FC04F72FB42A53C6DA802 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CdeveloperPayloadU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool UnityChannelImpl_get_fetchReceiptPayloadOnPurchase_m6F02B48EE38983D0F5794E0C81A62E39F2328E78_inline (UnityChannelImpl_t014C99B115ED39FE57BFCA3BCD85B66E6BE4E616 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CfetchReceiptPayloadOnPurchaseU3Ek__BackingField_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_0 = (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
