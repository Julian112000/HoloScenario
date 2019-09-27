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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>
struct Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>
struct Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>
struct Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>
struct Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>
struct Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>
struct Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>
struct Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>
struct Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>
struct Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>
struct Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>
struct Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>
struct Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>
struct Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>
struct Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E;
// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12;
// System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase/Surface>
struct Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>[]
struct EntryU5BU5D_t70D98221EA2F733E31857138EC78F0EA564F37E2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>
struct KeyCollection_tEAD65F63472958DDDCFBABB8FBC167DEAF112E8B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>
struct ValueCollection_t56D81A2B61BA524BB9C5ED727E392B1C8B341D05;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_tC6CFDD93C6E3F120D81F876E847AFA4EC0F51750;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>
struct Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t9B42195BBE4C4201734D1B55FB0B9EC97F597098;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t3D4152882C54B77C712688E910390D5C8E030463;
// System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>
struct List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Predicate`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>
struct Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Audio.AudioSpatializerMicrosoft
struct AudioSpatializerMicrosoft_tD51873DF8B2EC56C9DEBFAAB2F747AD8674ADC83;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
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
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.HoloLensInput
struct HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04;
// UnityEngine.EventSystems.HoloLensInputModule
struct HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63;
// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tE8CB9BDC38DAF3162843E22541093DADDE1BB19C;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE;
// UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate
struct GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate
struct HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate
struct HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate
struct HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate
struct ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate
struct ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate
struct ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate
struct ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate
struct NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate
struct NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate
struct NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate
struct NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate
struct RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate
struct RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214;
// UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate
struct TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F;
// UnityEngine.XR.WSA.SpatialMappingBase
struct SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54;
// UnityEngine.XR.WSA.SpatialMappingBase/Surface
struct Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D;
// UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback
struct SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592;
// UnityEngine.XR.WSA.SpatialMappingCollider
struct SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2;
// UnityEngine.XR.WSA.SpatialMappingContext
struct SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956;
// UnityEngine.XR.WSA.SpatialMappingContext/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692;
// UnityEngine.XR.WSA.SpatialMappingContext/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89;
// UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback
struct GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6;
// UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest[]
struct SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD;
// UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
struct SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C;
// UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord[]
struct SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1;
// UnityEngine.XR.WSA.SpatialMappingRenderer
struct SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB;
// UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66;
// UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864;
// UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate
struct SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1;
// UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate
struct SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092;
// UnityEngine.XR.WSA.WorldAnchor
struct WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE;
// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
struct OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBE168E59272B45F7A94B1F451A29AE3BCD661A15____D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05C07D1FCAF258FA9A5BB24E01F6316B3F11BE63;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA701B50A5948064432E087F10E47BBBB8F47F6;
IL2CPP_EXTERN_C String_t* _stringLiteral19EA9A5EB531CE393DCA73F73B60048CF49D5D7E;
IL2CPP_EXTERN_C String_t* _stringLiteral307527C227AC648BB119BCB457EBB8466E79827C;
IL2CPP_EXTERN_C String_t* _stringLiteral31CF5C222B7921A07D0A9EF275277FC32788832F;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9A40DDD9AF3D33ED1C157EA10B0DD27C405802;
IL2CPP_EXTERN_C String_t* _stringLiteral44A541D01189AFFA834A25E0A93A328341730C75;
IL2CPP_EXTERN_C String_t* _stringLiteral62234BEF4038675D8DA131376AEB172897EAB03D;
IL2CPP_EXTERN_C String_t* _stringLiteral82AA2F03AC2CF34CF663318762D43CC36CFFC6C1;
IL2CPP_EXTERN_C String_t* _stringLiteral83D748A4D24B0945189E5C60B86FCDCF5E71A290;
IL2CPP_EXTERN_C String_t* _stringLiteral85EE1AFFF61EEAA487746F3F8C1685BB1C03665C;
IL2CPP_EXTERN_C String_t* _stringLiteralA5720A5DE163F01678ACB0606AF0EEED421C94EB;
IL2CPP_EXTERN_C String_t* _stringLiteralAC5BF571DE9975A9AA7E383FF7EA6E291929C5DE;
IL2CPP_EXTERN_C String_t* _stringLiteralAE9F75EABE0850F0B8A701C7B2478D0F8C395D79;
IL2CPP_EXTERN_C String_t* _stringLiteralB782D9835143821E697B67407CCFB082FE6322A9;
IL2CPP_EXTERN_C String_t* _stringLiteralDD1FA74A105812D05EDBBA6CA1731A9A0C697ED4;
IL2CPP_EXTERN_C String_t* _stringLiteralEB6EF0B99606BAD040095156CE2B1FAAC0C59C6A;
IL2CPP_EXTERN_C String_t* _stringLiteralF9641356B56AB3E220318DB9A52C7620EC3E8076;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mEB4F9CFB24024E34F7207168F457D3EEB70ED7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m02EF96D4C4CA30C2D0EC89E0CAB4DB4CF32B27E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m079D4F79176F6404ACFFE09E07BB9A146F7F4A0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mAA8EC518E1D8362D3621E54D13E2CCFB98BE9E57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mBFD51E28F3B04BFE39041A85D13E2E5AE48CEBBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mC026C61EC637A1B6E38435AC1FE0F1FB6005542B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mFBB740823BD38775A2EBE527D9DF619D40C6DC1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB_m5EB41AF0200183B780E6DECD1274962F1367CF1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04_m698FB9682EE309CAAA265B29C21BF06A62F6C9B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m9D1B3160A0B79803FA708A4D25D911DF7D69DD4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m2EFA534E708259D6E4AA3CF2833845ADAAD9B00F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m003F8906908ABE5322D425FF4809E410005EF2A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m7DB4CE76AE9D425BCC8C9FB931C61AD8B1BD4040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m7501EF97709D94AB3BF3F3D0584A35DC80739391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFC287CA51EC6CD9F9F0D7C063D5631D4050A60B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mEC1900B7D6A8954EF01D5D60518DC31A8153B8D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m820547B0F844E7BACDE88C8B2F54F771B436BA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8FD886547CD472ECD1472BB2F59C64E7D3A8759A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m31B0D57E103FDC4AB1C9F806E4A30988A7E4BFE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0FE874F7E7972DC563007C0182FC43C9FFCEEB37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisHoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04_mF50CC95A955F7405B540971920DE4739BE47684B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m98AEA1EDDC59492203D06FA2912152C37C4164E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m16409C054F66125E0380BDDDB1454118A3BAD60E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m2E5F02DDA13C176AF75B4E7C1DB801D89E053B2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HoloLensInput_GestureHandler_OnNavigationCanceled_mC4D32E339431587861C61C73ED37B20E1193774D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HoloLensInput_GestureHandler_OnNavigationCompleted_mF2E57F82BDCDBD7E71F31A9198426F3345DD988E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HoloLensInput_GestureHandler_OnNavigationStarted_m010CF6447933A094FCBEBE6CEBFD0F733EC887D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HoloLensInput_GestureHandler_OnNavigationUpdated_mA844EC15FAD77E33B63B0ACBA8B9685926D9C6D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HoloLensInput_GestureHandler_OnTapped_mF6E350D14305F2EFC008B81BB95BDC3F79FE1866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA201C27C8ACFA787EDB9DA5FB1A26163A37D2AB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFE4A7984825421BE1A7BD67AD5D60F8BB45F921E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_mEBB03AE7A46CD2A87BC5F4586A3754A34D973A52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m939FB5AF2C64F6D130A3B5E4CFABE1354497D537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAll_m424B6644A35D9EE627723C88FFDAD1860879836B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mBD9EA372A02B0E0D2612A0E5404BB83EAA7521A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m809A7334C75F6B61B6B4A83C1D091865819572A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9B40973BA15B5CD9FCC23B9A8882D7E4BDF82D4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m36FCDE89ACB30BF2EDAF254BB88F320BDC3B3AD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_mAE0572D02E462A85D05988B526C15C18B4A43304_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpatialMappingBase_OnSurfaceChanged_m034C64808C3FCFF726180B2FDA1360DC5C95AD56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpatialMappingCollider_U3CApplyPropertiesToCachedSurfacesU3Eb__17_0_mA73DFA2D4C580980672B65573925993FD1DDCBA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpatialMappingContext_DeregisterComponent_m946C26760A35277770691E88358BF13ECC2BA3AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpatialMappingContext_OnSurfaceDataReady_m1F795BCCF85F8B7A31639586905A1D987C8CCEB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpatialMappingContext_RegisterComponent_mB6B895662A1A2760CCC527BEEEB99D9FEBB88A75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CRegisterComponentU3Eb__0_m46D6513DD4BD186638388DE6C9C470BB7E222E58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CDeregisterComponentU3Eb__0_m6A434BBAB6DBF9AB43088046BEB801D3E0F2FD9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AudioSpatializerMicrosoft_get_audioSource_m64394B367E4F22778216B603971AC6CB0666FE26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GetHighestPriorityCallback_BeginInvoke_m2A878301B1FFBF9ABEE18370CA9A9CF01C5F76D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoloLensInputModule_Awake_m0F3F4287588F776FA32DB9C18E43DFDA5AC5AB55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoloLensInputModule_IsModuleSupported_m9EED47FC8FAE10024D678087637C4B6675C0A77B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoloLensInput_Awake_m9A2C1C1F3E4E0F98CFB9C921979144A06D4A8ACE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoloLensInput_EmulateMousePosition_mCE630E4BC37BE3EC3ED5D9707C5540F0F36DAEFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoloLensInput_GestureHandler_OnNavigationStarted_m010CF6447933A094FCBEBE6CEBFD0F733EC887D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoloLensInput_GetGazeAndGestureScreenPosition_m7DB2FDF3835B4EDD8C9B8D8FB11D73FB54CDEE2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoloLensInput_GetGestureScrollDelta_m24FDE0BFC26D5173002FBABAD945914E206602B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoloLensInput_OnDestroy_mF77BEB5509911914EFBEC9A59EE44E26EA0AED71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoloLensInput_OnNavigationCompletedOrCanceled_mFB8E51C82D8B34118931DB8B0D1348FB92D5E734_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoloLensInput_TryGetAnchorWorldSpace_mC43BABC0CD0CDD380254DDAB705527B809EC3824_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoloLensInput__ctor_m76546B0E7D04548F0F65B7388C5AE8896920B8AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SMComponentRecord_IsClear_m13D8CF67F23D1CD984F7B8E8BB371DCC1F128A6C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_AddRequiredComponentsForBaking_m721AD08F9692DDFF64E74E145AC6DB6CAD0EC16E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_BoundsContains_mDD5A28A35DF1EDA76EA7EB858425EBB146ED1AA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_CloneBakedComponents_m23E578161C00C4D9E8F604B80A68CC60B6F58709_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_CreateSurface_m4B108724636C35394AE9D686FCB8C39517C6671C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_DestroySurface_m2E97118945643308BFDBD7AF3FE67E782A352232_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_ForEachSurfaceInCache_m7ACD30FC885696A06491E7D260D6FDCAE1AA2DF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_OnAddOrUpdateSurface_mF3ACC1CCBF29F428A8D9C3DBC91DA91E8F5AA4BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_OnDestroy_m6795E2E2E1983D0907A8AF4AB3DB2AC57A021FAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_OnDisable_mCAF7726E99ACE6892E94F6915D932D4BF1605563_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_OnEnable_mA21952A9131ADC57C76E2777293DAC4E4474CF8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_OnRemoveSurface_mA1AD707BE5B320583A342E58DCF96C18AFAB9C26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_ProcessEvictedObjects_m8111EA6BDDEEB01B7342541D3E5C4E2FFEE06A64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m12CBB39C4EF687E718B416B8421EE8E0CD976BE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_Start_mB682428113AFB5D89F709FD23544840503AB7843_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_TryGetHighestPriorityRequest_mD685D7A19608EF938E20F6E125BD61C8FC379141_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_UpdateSurfaceData_m7757CFA05BF25F432418E20A0B4C9F5E11D7D3D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_Update_mE8C5D3F655A285F0E3522A3640170EB942DE4629_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase__cctor_mB8D5FEE4AB751430659E4D20BA49D32470B627DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase__ctor_m8E1FC8B9BD9C046C7D40907E7EC0DE4BB03FF0E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_get_lodToPcm_mEB766BA3CED483CF4B2E65D6B39272EE60B75850Unity_XR_WindowsMR_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingBase_get_lodToPcm_mEB766BA3CED483CF4B2E65D6B39272EE60B75850_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingCollider_AddRequiredComponentsForBaking_m42C7EC2FA487B41EA4FE26FFB5E5F3AA6E640DCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m10C3063BA564DF8C01DDA768D654DC62872F8270_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingCollider_OnBeginSurfaceEviction_m82F7B1E6559CA9C02992251001D5D32CD513448B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingCollider_OnSurfaceDataReady_m3478F43D8C517693466414067F946E1FD9918BDE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingCollider_U3CApplyPropertiesToCachedSurfacesU3Eb__17_0_mA73DFA2D4C580980672B65573925993FD1DDCBA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingCollider__ctor_m01CDD801A88A20047FBE3A5BC217C8099ECF881E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext_DeregisterComponent_m946C26760A35277770691E88358BF13ECC2BA3AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext_PropagateDataReadyEventToComponents_m0C51EC7250815992662E5D6755E2EDB252FFFF47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext_RegisterComponent_mB6B895662A1A2760CCC527BEEEB99D9FEBB88A75_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext_RequestMeshPriorityFromComponents_mFB4ADB8A02E9535EB7EDB918C8E20931F41668A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext_UpdateInFlightRecords_mA54F669BBA45A5CACB8A0037A8B743AD99AA0016_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext__cctor_m260437823EB2F876C7064C2D2E1BD4EBFE02FA73_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext__ctor_mDFB7FF1E0AA4CAB4BFF995B48F94AA88480239FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010Unity_XR_WindowsMR_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_m4A1143EA5BD1F01EFD936CBE17BFD9F60E96D4E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingRenderer_ApplyRenderSettings_mBFC9F7F75BC0D932F1BF21C2248976D941502270_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingRenderer_DestroySurface_m86D5C7F8C663A81D126D9EB0748B67E5533C460E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingRenderer_OnBeginSurfaceEviction_mD9D12795317AAE76C9B19832A3560D77A9706644_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingRenderer_OnSurfaceDataReady_m56A9DA233D30E9AD4411B7039F676377315AB648_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialMappingRenderer__ctor_mD783EF2BB1209F0757618E5160560E6135227CD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceDataReadyCallback_BeginInvoke_mEFEF91CEA5C3939DFA64C894A93E89868EA2D180_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass12_0_U3CRegisterComponentU3Eb__0_m46D6513DD4BD186638388DE6C9C470BB7E222E58_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass13_0_U3CDeregisterComponentU3Eb__0_m6A434BBAB6DBF9AB43088046BEB801D3E0F2FD9E_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C;;
struct SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com;
struct SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com;;
struct SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke;
struct SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke;;
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66;;
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com;
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com;;
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke;
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke;;
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864;;
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com;
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com;;
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke;
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke;;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD;
struct SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1C9214707077BD8585D010C1E3AE7AB53D01423B 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface>
struct  Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t70D98221EA2F733E31857138EC78F0EA564F37E2* ___entries_1;
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
	KeyCollection_tEAD65F63472958DDDCFBABB8FBC167DEAF112E8B * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t56D81A2B61BA524BB9C5ED727E392B1C8B341D05 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140, ___entries_1)); }
	inline EntryU5BU5D_t70D98221EA2F733E31857138EC78F0EA564F37E2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t70D98221EA2F733E31857138EC78F0EA564F37E2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t70D98221EA2F733E31857138EC78F0EA564F37E2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140, ___keys_7)); }
	inline KeyCollection_tEAD65F63472958DDDCFBABB8FBC167DEAF112E8B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tEAD65F63472958DDDCFBABB8FBC167DEAF112E8B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tEAD65F63472958DDDCFBABB8FBC167DEAF112E8B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140, ___values_8)); }
	inline ValueCollection_t56D81A2B61BA524BB9C5ED727E392B1C8B341D05 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t56D81A2B61BA524BB9C5ED727E392B1C8B341D05 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t56D81A2B61BA524BB9C5ED727E392B1C8B341D05 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord>
struct  List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0, ____items_1)); }
	inline SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1* get__items_1() const { return ____items_1; }
	inline SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0_StaticFields, ____emptyArray_5)); }
	inline SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
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

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.XR.WSA.SpatialMappingContext
struct  SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord> UnityEngine.XR.WSA.SpatialMappingContext::m_Components
	List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * ___m_Components_2;
	// UnityEngine.XR.WSA.SpatialMappingContext_SMBakeRequest[] UnityEngine.XR.WSA.SpatialMappingContext::m_InFlightRequests
	SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* ___m_InFlightRequests_3;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingContext::m_InFlightSurfaces
	int32_t ___m_InFlightSurfaces_4;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingContext::m_NextIndex
	int32_t ___m_NextIndex_5;

public:
	inline static int32_t get_offset_of_m_Components_2() { return static_cast<int32_t>(offsetof(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956, ___m_Components_2)); }
	inline List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * get_m_Components_2() const { return ___m_Components_2; }
	inline List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 ** get_address_of_m_Components_2() { return &___m_Components_2; }
	inline void set_m_Components_2(List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * value)
	{
		___m_Components_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Components_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_InFlightRequests_3() { return static_cast<int32_t>(offsetof(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956, ___m_InFlightRequests_3)); }
	inline SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* get_m_InFlightRequests_3() const { return ___m_InFlightRequests_3; }
	inline SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD** get_address_of_m_InFlightRequests_3() { return &___m_InFlightRequests_3; }
	inline void set_m_InFlightRequests_3(SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* value)
	{
		___m_InFlightRequests_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InFlightRequests_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_InFlightSurfaces_4() { return static_cast<int32_t>(offsetof(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956, ___m_InFlightSurfaces_4)); }
	inline int32_t get_m_InFlightSurfaces_4() const { return ___m_InFlightSurfaces_4; }
	inline int32_t* get_address_of_m_InFlightSurfaces_4() { return &___m_InFlightSurfaces_4; }
	inline void set_m_InFlightSurfaces_4(int32_t value)
	{
		___m_InFlightSurfaces_4 = value;
	}

	inline static int32_t get_offset_of_m_NextIndex_5() { return static_cast<int32_t>(offsetof(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956, ___m_NextIndex_5)); }
	inline int32_t get_m_NextIndex_5() const { return ___m_NextIndex_5; }
	inline int32_t* get_address_of_m_NextIndex_5() { return &___m_NextIndex_5; }
	inline void set_m_NextIndex_5(int32_t value)
	{
		___m_NextIndex_5 = value;
	}
};

struct SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_StaticFields
{
public:
	// UnityEngine.XR.WSA.SpatialMappingContext UnityEngine.XR.WSA.SpatialMappingContext::instance
	SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_StaticFields, ___instance_0)); }
	inline SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * get_instance_0() const { return ___instance_0; }
	inline SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// UnityEngine.XR.WSA.SpatialMappingContext_<>c__DisplayClass12_0
struct  U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692  : public RuntimeObject
{
public:
	// UnityEngine.XR.WSA.SpatialMappingBase UnityEngine.XR.WSA.SpatialMappingContext_<>c__DisplayClass12_0::smComponent
	SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___smComponent_0;

public:
	inline static int32_t get_offset_of_smComponent_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692, ___smComponent_0)); }
	inline SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * get_smComponent_0() const { return ___smComponent_0; }
	inline SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 ** get_address_of_smComponent_0() { return &___smComponent_0; }
	inline void set_smComponent_0(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * value)
	{
		___smComponent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smComponent_0), (void*)value);
	}
};


// UnityEngine.XR.WSA.SpatialMappingContext_<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89  : public RuntimeObject
{
public:
	// UnityEngine.XR.WSA.SpatialMappingBase UnityEngine.XR.WSA.SpatialMappingContext_<>c__DisplayClass13_0::smComponent
	SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___smComponent_0;

public:
	inline static int32_t get_offset_of_smComponent_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89, ___smComponent_0)); }
	inline SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * get_smComponent_0() const { return ___smComponent_0; }
	inline SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 ** get_address_of_smComponent_0() { return &___smComponent_0; }
	inline void set_smComponent_0(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * value)
	{
		___smComponent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smComponent_0), (void*)value);
	}
};


// UnityEngine.XR.WSA.SurfaceObserver
struct  SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceObserver::m_Observer
	int32_t ___m_Observer_1;

public:
	inline static int32_t get_offset_of_m_Observer_1() { return static_cast<int32_t>(offsetof(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864, ___m_Observer_1)); }
	inline int32_t get_m_Observer_1() const { return ___m_Observer_1; }
	inline int32_t* get_address_of_m_Observer_1() { return &___m_Observer_1; }
	inline void set_m_Observer_1(int32_t value)
	{
		___m_Observer_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke
{
	int32_t ___m_Observer_1;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com
{
	int32_t ___m_Observer_1;
};

// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D12
struct  __StaticArrayInitTypeSizeU3D12_t2C6CE973482F1CB780ED3B1C1157C595705E4F5A 
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
		uint8_t __StaticArrayInitTypeSizeU3D12_t2C6CE973482F1CB780ED3B1C1157C595705E4F5A__padding[12];
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


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface>
struct  KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C, ___value_1)); }
	inline Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * get_value_1() const { return ___value_1; }
	inline Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
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


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
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


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord
struct  SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C 
{
public:
	// UnityEngine.XR.WSA.SpatialMappingBase UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord::m_Component
	SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___m_Component_0;
	// UnityEngine.XR.WSA.SpatialMappingBase_SurfaceDataReadyCallback UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord::m_OnDataReady
	SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * ___m_OnDataReady_1;
	// UnityEngine.XR.WSA.SpatialMappingContext_GetHighestPriorityCallback UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord::m_GetHighestPri
	GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * ___m_GetHighestPri_2;
	// UnityEngine.XR.WSA.SurfaceObserver UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord::m_SurfaceObserver
	SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___m_SurfaceObserver_3;

public:
	inline static int32_t get_offset_of_m_Component_0() { return static_cast<int32_t>(offsetof(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C, ___m_Component_0)); }
	inline SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * get_m_Component_0() const { return ___m_Component_0; }
	inline SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 ** get_address_of_m_Component_0() { return &___m_Component_0; }
	inline void set_m_Component_0(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * value)
	{
		___m_Component_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Component_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDataReady_1() { return static_cast<int32_t>(offsetof(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C, ___m_OnDataReady_1)); }
	inline SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * get_m_OnDataReady_1() const { return ___m_OnDataReady_1; }
	inline SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 ** get_address_of_m_OnDataReady_1() { return &___m_OnDataReady_1; }
	inline void set_m_OnDataReady_1(SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * value)
	{
		___m_OnDataReady_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDataReady_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_GetHighestPri_2() { return static_cast<int32_t>(offsetof(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C, ___m_GetHighestPri_2)); }
	inline GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * get_m_GetHighestPri_2() const { return ___m_GetHighestPri_2; }
	inline GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 ** get_address_of_m_GetHighestPri_2() { return &___m_GetHighestPri_2; }
	inline void set_m_GetHighestPri_2(GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * value)
	{
		___m_GetHighestPri_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GetHighestPri_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SurfaceObserver_3() { return static_cast<int32_t>(offsetof(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C, ___m_SurfaceObserver_3)); }
	inline SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * get_m_SurfaceObserver_3() const { return ___m_SurfaceObserver_3; }
	inline SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 ** get_address_of_m_SurfaceObserver_3() { return &___m_SurfaceObserver_3; }
	inline void set_m_SurfaceObserver_3(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * value)
	{
		___m_SurfaceObserver_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SurfaceObserver_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
struct SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke
{
	SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___m_Component_0;
	Il2CppMethodPointer ___m_OnDataReady_1;
	Il2CppMethodPointer ___m_GetHighestPri_2;
	SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke ___m_SurfaceObserver_3;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
struct SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com
{
	SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___m_Component_0;
	Il2CppMethodPointer ___m_OnDataReady_1;
	Il2CppMethodPointer ___m_GetHighestPri_2;
	SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com* ___m_SurfaceObserver_3;
};

// UnityEngine.XR.WSA.SurfaceId
struct  SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceId::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_tBE168E59272B45F7A94B1F451A29AE3BCD661A15  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tBE168E59272B45F7A94B1F451A29AE3BCD661A15_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D12 <PrivateImplementationDetails>::D15896F389DBE7C4EB4B27E5CA408E92D08149C9
	__StaticArrayInitTypeSizeU3D12_t2C6CE973482F1CB780ED3B1C1157C595705E4F5A  ___D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0;

public:
	inline static int32_t get_offset_of_D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tBE168E59272B45F7A94B1F451A29AE3BCD661A15_StaticFields, ___D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0)); }
	inline __StaticArrayInitTypeSizeU3D12_t2C6CE973482F1CB780ED3B1C1157C595705E4F5A  get_D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0() const { return ___D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0; }
	inline __StaticArrayInitTypeSizeU3D12_t2C6CE973482F1CB780ED3B1C1157C595705E4F5A * get_address_of_D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0() { return &___D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0; }
	inline void set_D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0(__StaticArrayInitTypeSizeU3D12_t2C6CE973482F1CB780ED3B1C1157C595705E4F5A  value)
	{
		___D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Int32,System.Object>
struct  Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6, ___dictionary_0)); }
	inline Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6, ___current_3)); }
	inline KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface>
struct  Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421, ___dictionary_0)); }
	inline Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421, ___current_3)); }
	inline KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord>
struct  Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406, ___list_0)); }
	inline List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * get_list_0() const { return ___list_0; }
	inline List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406, ___current_3)); }
	inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  get_current_3() const { return ___current_3; }
	inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___m_Component_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___m_OnDataReady_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___m_GetHighestPri_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___m_SurfaceObserver_3), (void*)NULL);
		#endif
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


// UnityEngine.Audio.AudioSpatializerMicrosoft_RoomSize
struct  RoomSize_tB93882F64484BCB88CAFB5B1640341AB4E9F16B4 
{
public:
	// System.Int32 UnityEngine.Audio.AudioSpatializerMicrosoft_RoomSize::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RoomSize_tB93882F64484BCB88CAFB5B1640341AB4E9F16B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.EventSystems.HoloLensInput_MouseEmulationMode
struct  MouseEmulationMode_t9C3B344772D72BE993BBB5A0849D22D9DBDAEC41 
{
public:
	// System.Int32 UnityEngine.EventSystems.HoloLensInput_MouseEmulationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MouseEmulationMode_t9C3B344772D72BE993BBB5A0849D22D9DBDAEC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData_InputButton
struct  InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData_InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
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

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Rendering.ShadowCastingMode
struct  ShadowCastingMode_t699023357D66025632B533A17D0FB1E4548141FF 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowCastingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowCastingMode_t699023357D66025632B533A17D0FB1E4548141FF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.GestureRecognizer
struct  GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Input.GestureRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceled
	Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * ___HoldCanceled_1;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompleted
	Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * ___HoldCompleted_2;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStarted
	Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * ___HoldStarted_3;
	// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::Tapped
	Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * ___Tapped_4;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceled
	Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * ___ManipulationCanceled_5;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompleted
	Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * ___ManipulationCompleted_6;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStarted
	Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * ___ManipulationStarted_7;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdated
	Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * ___ManipulationUpdated_8;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceled
	Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * ___NavigationCanceled_9;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompleted
	Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * ___NavigationCompleted_10;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStarted
	Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * ___NavigationStarted_11;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdated
	Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * ___NavigationUpdated_12;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEnded
	Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * ___RecognitionEnded_13;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStarted
	Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * ___RecognitionStarted_14;
	// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::GestureError
	Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * ___GestureError_15;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceledEvent
	HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * ___HoldCanceledEvent_16;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompletedEvent
	HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * ___HoldCompletedEvent_17;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStartedEvent
	HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * ___HoldStartedEvent_18;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::TappedEvent
	TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * ___TappedEvent_19;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceledEvent
	ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * ___ManipulationCanceledEvent_20;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompletedEvent
	ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * ___ManipulationCompletedEvent_21;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStartedEvent
	ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * ___ManipulationStartedEvent_22;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdatedEvent
	ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * ___ManipulationUpdatedEvent_23;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceledEvent
	NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * ___NavigationCanceledEvent_24;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompletedEvent
	NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * ___NavigationCompletedEvent_25;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStartedEvent
	NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * ___NavigationStartedEvent_26;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdatedEvent
	NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * ___NavigationUpdatedEvent_27;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEndedEvent
	RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * ___RecognitionEndedEvent_28;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStartedEvent
	RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * ___RecognitionStartedEvent_29;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::GestureErrorEvent
	GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * ___GestureErrorEvent_30;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_HoldCanceled_1() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCanceled_1)); }
	inline Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * get_HoldCanceled_1() const { return ___HoldCanceled_1; }
	inline Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B ** get_address_of_HoldCanceled_1() { return &___HoldCanceled_1; }
	inline void set_HoldCanceled_1(Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * value)
	{
		___HoldCanceled_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCanceled_1), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCompleted_2() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCompleted_2)); }
	inline Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * get_HoldCompleted_2() const { return ___HoldCompleted_2; }
	inline Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 ** get_address_of_HoldCompleted_2() { return &___HoldCompleted_2; }
	inline void set_HoldCompleted_2(Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * value)
	{
		___HoldCompleted_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCompleted_2), (void*)value);
	}

	inline static int32_t get_offset_of_HoldStarted_3() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldStarted_3)); }
	inline Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * get_HoldStarted_3() const { return ___HoldStarted_3; }
	inline Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E ** get_address_of_HoldStarted_3() { return &___HoldStarted_3; }
	inline void set_HoldStarted_3(Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * value)
	{
		___HoldStarted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldStarted_3), (void*)value);
	}

	inline static int32_t get_offset_of_Tapped_4() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___Tapped_4)); }
	inline Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * get_Tapped_4() const { return ___Tapped_4; }
	inline Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 ** get_address_of_Tapped_4() { return &___Tapped_4; }
	inline void set_Tapped_4(Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * value)
	{
		___Tapped_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tapped_4), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCanceled_5() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCanceled_5)); }
	inline Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * get_ManipulationCanceled_5() const { return ___ManipulationCanceled_5; }
	inline Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E ** get_address_of_ManipulationCanceled_5() { return &___ManipulationCanceled_5; }
	inline void set_ManipulationCanceled_5(Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * value)
	{
		___ManipulationCanceled_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCanceled_5), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCompleted_6() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCompleted_6)); }
	inline Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * get_ManipulationCompleted_6() const { return ___ManipulationCompleted_6; }
	inline Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F ** get_address_of_ManipulationCompleted_6() { return &___ManipulationCompleted_6; }
	inline void set_ManipulationCompleted_6(Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * value)
	{
		___ManipulationCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCompleted_6), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationStarted_7() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationStarted_7)); }
	inline Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * get_ManipulationStarted_7() const { return ___ManipulationStarted_7; }
	inline Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E ** get_address_of_ManipulationStarted_7() { return &___ManipulationStarted_7; }
	inline void set_ManipulationStarted_7(Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * value)
	{
		___ManipulationStarted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationStarted_7), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationUpdated_8() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationUpdated_8)); }
	inline Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * get_ManipulationUpdated_8() const { return ___ManipulationUpdated_8; }
	inline Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC ** get_address_of_ManipulationUpdated_8() { return &___ManipulationUpdated_8; }
	inline void set_ManipulationUpdated_8(Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * value)
	{
		___ManipulationUpdated_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationUpdated_8), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCanceled_9() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCanceled_9)); }
	inline Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * get_NavigationCanceled_9() const { return ___NavigationCanceled_9; }
	inline Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B ** get_address_of_NavigationCanceled_9() { return &___NavigationCanceled_9; }
	inline void set_NavigationCanceled_9(Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * value)
	{
		___NavigationCanceled_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCanceled_9), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCompleted_10() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCompleted_10)); }
	inline Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * get_NavigationCompleted_10() const { return ___NavigationCompleted_10; }
	inline Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 ** get_address_of_NavigationCompleted_10() { return &___NavigationCompleted_10; }
	inline void set_NavigationCompleted_10(Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * value)
	{
		___NavigationCompleted_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCompleted_10), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationStarted_11() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationStarted_11)); }
	inline Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * get_NavigationStarted_11() const { return ___NavigationStarted_11; }
	inline Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E ** get_address_of_NavigationStarted_11() { return &___NavigationStarted_11; }
	inline void set_NavigationStarted_11(Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * value)
	{
		___NavigationStarted_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationStarted_11), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationUpdated_12() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationUpdated_12)); }
	inline Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * get_NavigationUpdated_12() const { return ___NavigationUpdated_12; }
	inline Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C ** get_address_of_NavigationUpdated_12() { return &___NavigationUpdated_12; }
	inline void set_NavigationUpdated_12(Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * value)
	{
		___NavigationUpdated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationUpdated_12), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionEnded_13() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionEnded_13)); }
	inline Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * get_RecognitionEnded_13() const { return ___RecognitionEnded_13; }
	inline Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 ** get_address_of_RecognitionEnded_13() { return &___RecognitionEnded_13; }
	inline void set_RecognitionEnded_13(Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * value)
	{
		___RecognitionEnded_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionEnded_13), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionStarted_14() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionStarted_14)); }
	inline Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * get_RecognitionStarted_14() const { return ___RecognitionStarted_14; }
	inline Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E ** get_address_of_RecognitionStarted_14() { return &___RecognitionStarted_14; }
	inline void set_RecognitionStarted_14(Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * value)
	{
		___RecognitionStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionStarted_14), (void*)value);
	}

	inline static int32_t get_offset_of_GestureError_15() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___GestureError_15)); }
	inline Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * get_GestureError_15() const { return ___GestureError_15; }
	inline Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B ** get_address_of_GestureError_15() { return &___GestureError_15; }
	inline void set_GestureError_15(Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * value)
	{
		___GestureError_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GestureError_15), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCanceledEvent_16() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCanceledEvent_16)); }
	inline HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * get_HoldCanceledEvent_16() const { return ___HoldCanceledEvent_16; }
	inline HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 ** get_address_of_HoldCanceledEvent_16() { return &___HoldCanceledEvent_16; }
	inline void set_HoldCanceledEvent_16(HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * value)
	{
		___HoldCanceledEvent_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCanceledEvent_16), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCompletedEvent_17() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCompletedEvent_17)); }
	inline HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * get_HoldCompletedEvent_17() const { return ___HoldCompletedEvent_17; }
	inline HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A ** get_address_of_HoldCompletedEvent_17() { return &___HoldCompletedEvent_17; }
	inline void set_HoldCompletedEvent_17(HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * value)
	{
		___HoldCompletedEvent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCompletedEvent_17), (void*)value);
	}

	inline static int32_t get_offset_of_HoldStartedEvent_18() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldStartedEvent_18)); }
	inline HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * get_HoldStartedEvent_18() const { return ___HoldStartedEvent_18; }
	inline HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 ** get_address_of_HoldStartedEvent_18() { return &___HoldStartedEvent_18; }
	inline void set_HoldStartedEvent_18(HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * value)
	{
		___HoldStartedEvent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldStartedEvent_18), (void*)value);
	}

	inline static int32_t get_offset_of_TappedEvent_19() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___TappedEvent_19)); }
	inline TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * get_TappedEvent_19() const { return ___TappedEvent_19; }
	inline TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F ** get_address_of_TappedEvent_19() { return &___TappedEvent_19; }
	inline void set_TappedEvent_19(TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * value)
	{
		___TappedEvent_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TappedEvent_19), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCanceledEvent_20() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCanceledEvent_20)); }
	inline ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * get_ManipulationCanceledEvent_20() const { return ___ManipulationCanceledEvent_20; }
	inline ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 ** get_address_of_ManipulationCanceledEvent_20() { return &___ManipulationCanceledEvent_20; }
	inline void set_ManipulationCanceledEvent_20(ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * value)
	{
		___ManipulationCanceledEvent_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCanceledEvent_20), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCompletedEvent_21() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCompletedEvent_21)); }
	inline ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * get_ManipulationCompletedEvent_21() const { return ___ManipulationCompletedEvent_21; }
	inline ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 ** get_address_of_ManipulationCompletedEvent_21() { return &___ManipulationCompletedEvent_21; }
	inline void set_ManipulationCompletedEvent_21(ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * value)
	{
		___ManipulationCompletedEvent_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCompletedEvent_21), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationStartedEvent_22() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationStartedEvent_22)); }
	inline ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * get_ManipulationStartedEvent_22() const { return ___ManipulationStartedEvent_22; }
	inline ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 ** get_address_of_ManipulationStartedEvent_22() { return &___ManipulationStartedEvent_22; }
	inline void set_ManipulationStartedEvent_22(ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * value)
	{
		___ManipulationStartedEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationStartedEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationUpdatedEvent_23() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationUpdatedEvent_23)); }
	inline ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * get_ManipulationUpdatedEvent_23() const { return ___ManipulationUpdatedEvent_23; }
	inline ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 ** get_address_of_ManipulationUpdatedEvent_23() { return &___ManipulationUpdatedEvent_23; }
	inline void set_ManipulationUpdatedEvent_23(ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * value)
	{
		___ManipulationUpdatedEvent_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationUpdatedEvent_23), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCanceledEvent_24() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCanceledEvent_24)); }
	inline NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * get_NavigationCanceledEvent_24() const { return ___NavigationCanceledEvent_24; }
	inline NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 ** get_address_of_NavigationCanceledEvent_24() { return &___NavigationCanceledEvent_24; }
	inline void set_NavigationCanceledEvent_24(NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * value)
	{
		___NavigationCanceledEvent_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCanceledEvent_24), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCompletedEvent_25() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCompletedEvent_25)); }
	inline NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * get_NavigationCompletedEvent_25() const { return ___NavigationCompletedEvent_25; }
	inline NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 ** get_address_of_NavigationCompletedEvent_25() { return &___NavigationCompletedEvent_25; }
	inline void set_NavigationCompletedEvent_25(NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * value)
	{
		___NavigationCompletedEvent_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCompletedEvent_25), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationStartedEvent_26() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationStartedEvent_26)); }
	inline NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * get_NavigationStartedEvent_26() const { return ___NavigationStartedEvent_26; }
	inline NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF ** get_address_of_NavigationStartedEvent_26() { return &___NavigationStartedEvent_26; }
	inline void set_NavigationStartedEvent_26(NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * value)
	{
		___NavigationStartedEvent_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationStartedEvent_26), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationUpdatedEvent_27() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationUpdatedEvent_27)); }
	inline NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * get_NavigationUpdatedEvent_27() const { return ___NavigationUpdatedEvent_27; }
	inline NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A ** get_address_of_NavigationUpdatedEvent_27() { return &___NavigationUpdatedEvent_27; }
	inline void set_NavigationUpdatedEvent_27(NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * value)
	{
		___NavigationUpdatedEvent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationUpdatedEvent_27), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionEndedEvent_28() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionEndedEvent_28)); }
	inline RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * get_RecognitionEndedEvent_28() const { return ___RecognitionEndedEvent_28; }
	inline RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B ** get_address_of_RecognitionEndedEvent_28() { return &___RecognitionEndedEvent_28; }
	inline void set_RecognitionEndedEvent_28(RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * value)
	{
		___RecognitionEndedEvent_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionEndedEvent_28), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionStartedEvent_29() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionStartedEvent_29)); }
	inline RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * get_RecognitionStartedEvent_29() const { return ___RecognitionStartedEvent_29; }
	inline RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 ** get_address_of_RecognitionStartedEvent_29() { return &___RecognitionStartedEvent_29; }
	inline void set_RecognitionStartedEvent_29(RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * value)
	{
		___RecognitionStartedEvent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionStartedEvent_29), (void*)value);
	}

	inline static int32_t get_offset_of_GestureErrorEvent_30() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___GestureErrorEvent_30)); }
	inline GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * get_GestureErrorEvent_30() const { return ___GestureErrorEvent_30; }
	inline GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 ** get_address_of_GestureErrorEvent_30() { return &___GestureErrorEvent_30; }
	inline void set_GestureErrorEvent_30(GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * value)
	{
		___GestureErrorEvent_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GestureErrorEvent_30), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_pinvoke
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_com
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};

// UnityEngine.XR.WSA.Input.GestureSettings
struct  GestureSettings_t75803D4EC100BFFD3E80E60E6228FE13BC816F4A 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.GestureSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureSettings_t75803D4EC100BFFD3E80E60E6228FE13BC816F4A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceFlags
struct  InteractionSourceFlags_tFEED23CE62EF1B04EEBB6C7DD1CA6921D73E9BBE 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceFlags_tFEED23CE62EF1B04EEBB6C7DD1CA6921D73E9BBE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceHandedness
struct  InteractionSourceHandedness_t10FDFBFAABBC3E04468D3AE77CE3614E7DD9308E 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceHandedness_t10FDFBFAABBC3E04468D3AE77CE3614E7DD9308E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceKind
struct  InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags
struct  InteractionSourcePoseFlags_t46E1164F226BCDCDEAD84C338483E7A401794BA8 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePoseFlags_t46E1164F226BCDCDEAD84C338483E7A401794BA8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy
struct  InteractionSourcePositionAccuracy_t53AC6BBABBE0182903C6CA4529BD2FA3479276AD 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePositionAccuracy_t53AC6BBABBE0182903C6CA4529BD2FA3479276AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.SpatialMappingBase_LODType
struct  LODType_t6235D9BF8D6E80394CA294F59A09EB49845140A2 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase_LODType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LODType_t6235D9BF8D6E80394CA294F59A09EB49845140A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.SpatialMappingBase_VolumeType
struct  VolumeType_t0D39A83EC4E176177D28FFCAB4C40E9C72A98F00 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase_VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_t0D39A83EC4E176177D28FFCAB4C40E9C72A98F00, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.SpatialMappingRenderer_RenderState
struct  RenderState_tA3E5217912C63B212E5FC61718AC41D1560C437B 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingRenderer_RenderState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderState_tA3E5217912C63B212E5FC61718AC41D1560C437B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.SurfaceChange
struct  SurfaceChange_t2E92CB8BA67A369A733BBEBD7087706B8E8FA747 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceChange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SurfaceChange_t2E92CB8BA67A369A733BBEBD7087706B8E8FA747, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.SurfaceData
struct  SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 
{
public:
	// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SurfaceData::id
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___id_0;
	// UnityEngine.MeshFilter UnityEngine.XR.WSA.SurfaceData::outputMesh
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh_1;
	// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SurfaceData::outputAnchor
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor_2;
	// UnityEngine.MeshCollider UnityEngine.XR.WSA.SurfaceData::outputCollider
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider_3;
	// System.Single UnityEngine.XR.WSA.SurfaceData::trianglesPerCubicMeter
	float ___trianglesPerCubicMeter_4;
	// System.Boolean UnityEngine.XR.WSA.SurfaceData::bakeCollider
	bool ___bakeCollider_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___id_0)); }
	inline SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  get_id_0() const { return ___id_0; }
	inline SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF * get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_outputMesh_1() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___outputMesh_1)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_outputMesh_1() const { return ___outputMesh_1; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_outputMesh_1() { return &___outputMesh_1; }
	inline void set_outputMesh_1(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___outputMesh_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputMesh_1), (void*)value);
	}

	inline static int32_t get_offset_of_outputAnchor_2() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___outputAnchor_2)); }
	inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * get_outputAnchor_2() const { return ___outputAnchor_2; }
	inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE ** get_address_of_outputAnchor_2() { return &___outputAnchor_2; }
	inline void set_outputAnchor_2(WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * value)
	{
		___outputAnchor_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputAnchor_2), (void*)value);
	}

	inline static int32_t get_offset_of_outputCollider_3() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___outputCollider_3)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_outputCollider_3() const { return ___outputCollider_3; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_outputCollider_3() { return &___outputCollider_3; }
	inline void set_outputCollider_3(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___outputCollider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputCollider_3), (void*)value);
	}

	inline static int32_t get_offset_of_trianglesPerCubicMeter_4() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___trianglesPerCubicMeter_4)); }
	inline float get_trianglesPerCubicMeter_4() const { return ___trianglesPerCubicMeter_4; }
	inline float* get_address_of_trianglesPerCubicMeter_4() { return &___trianglesPerCubicMeter_4; }
	inline void set_trianglesPerCubicMeter_4(float value)
	{
		___trianglesPerCubicMeter_4 = value;
	}

	inline static int32_t get_offset_of_bakeCollider_5() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___bakeCollider_5)); }
	inline bool get_bakeCollider_5() const { return ___bakeCollider_5; }
	inline bool* get_address_of_bakeCollider_5() { return &___bakeCollider_5; }
	inline void set_bakeCollider_5(bool value)
	{
		___bakeCollider_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke
{
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___id_0;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh_1;
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor_2;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider_3;
	float ___trianglesPerCubicMeter_4;
	int32_t ___bakeCollider_5;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com
{
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___id_0;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh_1;
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor_2;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider_3;
	float ___trianglesPerCubicMeter_4;
	int32_t ___bakeCollider_5;
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


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t3D4152882C54B77C712688E910390D5C8E030463 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData_InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___m_PointerPress_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___hovered_9)); }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t3D4152882C54B77C712688E910390D5C8E030463 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.PhysicMaterial
struct  PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.XR.WSA.Input.InteractionSource
struct  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 
{
public:
	// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::m_Id
	uint32_t ___m_Id_0;
	// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::m_SourceKind
	int32_t ___m_SourceKind_1;
	// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::m_Handedness
	int32_t ___m_Handedness_2;
	// UnityEngine.XR.WSA.Input.InteractionSourceFlags UnityEngine.XR.WSA.Input.InteractionSource::m_Flags
	int32_t ___m_Flags_3;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_VendorId
	uint16_t ___m_VendorId_4;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductId
	uint16_t ___m_ProductId_5;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductVersion
	uint16_t ___m_ProductVersion_6;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Id_0)); }
	inline uint32_t get_m_Id_0() const { return ___m_Id_0; }
	inline uint32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(uint32_t value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceKind_1() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_SourceKind_1)); }
	inline int32_t get_m_SourceKind_1() const { return ___m_SourceKind_1; }
	inline int32_t* get_address_of_m_SourceKind_1() { return &___m_SourceKind_1; }
	inline void set_m_SourceKind_1(int32_t value)
	{
		___m_SourceKind_1 = value;
	}

	inline static int32_t get_offset_of_m_Handedness_2() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Handedness_2)); }
	inline int32_t get_m_Handedness_2() const { return ___m_Handedness_2; }
	inline int32_t* get_address_of_m_Handedness_2() { return &___m_Handedness_2; }
	inline void set_m_Handedness_2(int32_t value)
	{
		___m_Handedness_2 = value;
	}

	inline static int32_t get_offset_of_m_Flags_3() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Flags_3)); }
	inline int32_t get_m_Flags_3() const { return ___m_Flags_3; }
	inline int32_t* get_address_of_m_Flags_3() { return &___m_Flags_3; }
	inline void set_m_Flags_3(int32_t value)
	{
		___m_Flags_3 = value;
	}

	inline static int32_t get_offset_of_m_VendorId_4() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_VendorId_4)); }
	inline uint16_t get_m_VendorId_4() const { return ___m_VendorId_4; }
	inline uint16_t* get_address_of_m_VendorId_4() { return &___m_VendorId_4; }
	inline void set_m_VendorId_4(uint16_t value)
	{
		___m_VendorId_4 = value;
	}

	inline static int32_t get_offset_of_m_ProductId_5() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_ProductId_5)); }
	inline uint16_t get_m_ProductId_5() const { return ___m_ProductId_5; }
	inline uint16_t* get_address_of_m_ProductId_5() { return &___m_ProductId_5; }
	inline void set_m_ProductId_5(uint16_t value)
	{
		___m_ProductId_5 = value;
	}

	inline static int32_t get_offset_of_m_ProductVersion_6() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_ProductVersion_6)); }
	inline uint16_t get_m_ProductVersion_6() const { return ___m_ProductVersion_6; }
	inline uint16_t* get_address_of_m_ProductVersion_6() { return &___m_ProductVersion_6; }
	inline void set_m_ProductVersion_6(uint16_t value)
	{
		___m_ProductVersion_6 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePose
struct  InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 
{
public:
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_GripRotation_0;
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_PointerRotation_1;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_GripPosition_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_PointerPosition_3;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_AngularVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularVelocity_5;
	// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PositionAccuracy
	int32_t ___m_PositionAccuracy_6;
	// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Flags
	int32_t ___m_Flags_7;

public:
	inline static int32_t get_offset_of_m_GripRotation_0() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_GripRotation_0)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_GripRotation_0() const { return ___m_GripRotation_0; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_GripRotation_0() { return &___m_GripRotation_0; }
	inline void set_m_GripRotation_0(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_GripRotation_0 = value;
	}

	inline static int32_t get_offset_of_m_PointerRotation_1() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PointerRotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_PointerRotation_1() const { return ___m_PointerRotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_PointerRotation_1() { return &___m_PointerRotation_1; }
	inline void set_m_PointerRotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_PointerRotation_1 = value;
	}

	inline static int32_t get_offset_of_m_GripPosition_2() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_GripPosition_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_GripPosition_2() const { return ___m_GripPosition_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_GripPosition_2() { return &___m_GripPosition_2; }
	inline void set_m_GripPosition_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_GripPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PointerPosition_3() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PointerPosition_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_PointerPosition_3() const { return ___m_PointerPosition_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_PointerPosition_3() { return &___m_PointerPosition_3; }
	inline void set_m_PointerPosition_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_PointerPosition_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_Velocity_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_AngularVelocity_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_PositionAccuracy_6() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PositionAccuracy_6)); }
	inline int32_t get_m_PositionAccuracy_6() const { return ___m_PositionAccuracy_6; }
	inline int32_t* get_address_of_m_PositionAccuracy_6() { return &___m_PositionAccuracy_6; }
	inline void set_m_PositionAccuracy_6(int32_t value)
	{
		___m_PositionAccuracy_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}
};


// UnityEngine.XR.WSA.SpatialMappingBase_Surface
struct  Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D  : public RuntimeObject
{
public:
	// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SpatialMappingBase_Surface::<surfaceId>k__BackingField
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___U3CsurfaceIdU3Ek__BackingField_0;
	// System.DateTime UnityEngine.XR.WSA.SpatialMappingBase_Surface::<updateTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CupdateTimeU3Ek__BackingField_1;
	// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase_Surface::<gameObject>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CgameObjectU3Ek__BackingField_2;
	// UnityEngine.XR.WSA.SurfaceData UnityEngine.XR.WSA.SpatialMappingBase_Surface::<surfaceData>k__BackingField
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___U3CsurfaceDataU3Ek__BackingField_3;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase_Surface::<remainingUpdatesToLive>k__BackingField
	int32_t ___U3CremainingUpdatesToLiveU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase_Surface::<awaitingBake>k__BackingField
	bool ___U3CawaitingBakeU3Ek__BackingField_5;
	// UnityEngine.MeshFilter UnityEngine.XR.WSA.SpatialMappingBase_Surface::<meshFilter>k__BackingField
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___U3CmeshFilterU3Ek__BackingField_6;
	// UnityEngine.MeshRenderer UnityEngine.XR.WSA.SpatialMappingBase_Surface::<meshRenderer>k__BackingField
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___U3CmeshRendererU3Ek__BackingField_7;
	// UnityEngine.MeshCollider UnityEngine.XR.WSA.SpatialMappingBase_Surface::<meshCollider>k__BackingField
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CmeshColliderU3Ek__BackingField_8;
	// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SpatialMappingBase_Surface::<worldAnchor>k__BackingField
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___U3CworldAnchorU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CsurfaceIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CsurfaceIdU3Ek__BackingField_0)); }
	inline SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  get_U3CsurfaceIdU3Ek__BackingField_0() const { return ___U3CsurfaceIdU3Ek__BackingField_0; }
	inline SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF * get_address_of_U3CsurfaceIdU3Ek__BackingField_0() { return &___U3CsurfaceIdU3Ek__BackingField_0; }
	inline void set_U3CsurfaceIdU3Ek__BackingField_0(SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  value)
	{
		___U3CsurfaceIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CupdateTimeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CupdateTimeU3Ek__BackingField_1)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CupdateTimeU3Ek__BackingField_1() const { return ___U3CupdateTimeU3Ek__BackingField_1; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CupdateTimeU3Ek__BackingField_1() { return &___U3CupdateTimeU3Ek__BackingField_1; }
	inline void set_U3CupdateTimeU3Ek__BackingField_1(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CupdateTimeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CgameObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CgameObjectU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CgameObjectU3Ek__BackingField_2() const { return ___U3CgameObjectU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CgameObjectU3Ek__BackingField_2() { return &___U3CgameObjectU3Ek__BackingField_2; }
	inline void set_U3CgameObjectU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CgameObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgameObjectU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsurfaceDataU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CsurfaceDataU3Ek__BackingField_3)); }
	inline SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  get_U3CsurfaceDataU3Ek__BackingField_3() const { return ___U3CsurfaceDataU3Ek__BackingField_3; }
	inline SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * get_address_of_U3CsurfaceDataU3Ek__BackingField_3() { return &___U3CsurfaceDataU3Ek__BackingField_3; }
	inline void set_U3CsurfaceDataU3Ek__BackingField_3(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  value)
	{
		___U3CsurfaceDataU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CsurfaceDataU3Ek__BackingField_3))->___outputMesh_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CsurfaceDataU3Ek__BackingField_3))->___outputAnchor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CsurfaceDataU3Ek__BackingField_3))->___outputCollider_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CremainingUpdatesToLiveU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CremainingUpdatesToLiveU3Ek__BackingField_4)); }
	inline int32_t get_U3CremainingUpdatesToLiveU3Ek__BackingField_4() const { return ___U3CremainingUpdatesToLiveU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CremainingUpdatesToLiveU3Ek__BackingField_4() { return &___U3CremainingUpdatesToLiveU3Ek__BackingField_4; }
	inline void set_U3CremainingUpdatesToLiveU3Ek__BackingField_4(int32_t value)
	{
		___U3CremainingUpdatesToLiveU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CawaitingBakeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CawaitingBakeU3Ek__BackingField_5)); }
	inline bool get_U3CawaitingBakeU3Ek__BackingField_5() const { return ___U3CawaitingBakeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CawaitingBakeU3Ek__BackingField_5() { return &___U3CawaitingBakeU3Ek__BackingField_5; }
	inline void set_U3CawaitingBakeU3Ek__BackingField_5(bool value)
	{
		___U3CawaitingBakeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CmeshFilterU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CmeshFilterU3Ek__BackingField_6)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_U3CmeshFilterU3Ek__BackingField_6() const { return ___U3CmeshFilterU3Ek__BackingField_6; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_U3CmeshFilterU3Ek__BackingField_6() { return &___U3CmeshFilterU3Ek__BackingField_6; }
	inline void set_U3CmeshFilterU3Ek__BackingField_6(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___U3CmeshFilterU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmeshFilterU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmeshRendererU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CmeshRendererU3Ek__BackingField_7)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_U3CmeshRendererU3Ek__BackingField_7() const { return ___U3CmeshRendererU3Ek__BackingField_7; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_U3CmeshRendererU3Ek__BackingField_7() { return &___U3CmeshRendererU3Ek__BackingField_7; }
	inline void set_U3CmeshRendererU3Ek__BackingField_7(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___U3CmeshRendererU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmeshRendererU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmeshColliderU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CmeshColliderU3Ek__BackingField_8)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_U3CmeshColliderU3Ek__BackingField_8() const { return ___U3CmeshColliderU3Ek__BackingField_8; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_U3CmeshColliderU3Ek__BackingField_8() { return &___U3CmeshColliderU3Ek__BackingField_8; }
	inline void set_U3CmeshColliderU3Ek__BackingField_8(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___U3CmeshColliderU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmeshColliderU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CworldAnchorU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D, ___U3CworldAnchorU3Ek__BackingField_9)); }
	inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * get_U3CworldAnchorU3Ek__BackingField_9() const { return ___U3CworldAnchorU3Ek__BackingField_9; }
	inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE ** get_address_of_U3CworldAnchorU3Ek__BackingField_9() { return &___U3CworldAnchorU3Ek__BackingField_9; }
	inline void set_U3CworldAnchorU3Ek__BackingField_9(WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * value)
	{
		___U3CworldAnchorU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CworldAnchorU3Ek__BackingField_9), (void*)value);
	}
};


// UnityEngine.XR.WSA.SpatialMappingContext_SMBakeRequest
struct  SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 
{
public:
	// UnityEngine.XR.WSA.SurfaceData UnityEngine.XR.WSA.SpatialMappingContext_SMBakeRequest::m_RequestData
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___m_RequestData_0;
	// UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord UnityEngine.XR.WSA.SpatialMappingContext_SMBakeRequest::m_Requester
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  ___m_Requester_1;

public:
	inline static int32_t get_offset_of_m_RequestData_0() { return static_cast<int32_t>(offsetof(SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059, ___m_RequestData_0)); }
	inline SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  get_m_RequestData_0() const { return ___m_RequestData_0; }
	inline SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * get_address_of_m_RequestData_0() { return &___m_RequestData_0; }
	inline void set_m_RequestData_0(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  value)
	{
		___m_RequestData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_RequestData_0))->___outputMesh_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_RequestData_0))->___outputAnchor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_RequestData_0))->___outputCollider_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Requester_1() { return static_cast<int32_t>(offsetof(SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059, ___m_Requester_1)); }
	inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  get_m_Requester_1() const { return ___m_Requester_1; }
	inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * get_address_of_m_Requester_1() { return &___m_Requester_1; }
	inline void set_m_Requester_1(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  value)
	{
		___m_Requester_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Requester_1))->___m_Component_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Requester_1))->___m_OnDataReady_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Requester_1))->___m_GetHighestPri_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Requester_1))->___m_SurfaceObserver_3), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
struct SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshaled_pinvoke
{
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke ___m_RequestData_0;
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke ___m_Requester_1;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
struct SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshaled_com
{
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com ___m_RequestData_0;
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com ___m_Requester_1;
};

// System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase_Surface>
struct  Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4  : public MulticastDelegate_t
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


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord>
struct  Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD  : public MulticastDelegate_t
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


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs
struct  NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs
struct  NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_NormalizedOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_NormalizedOffset_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedOffset_3() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39, ___m_NormalizedOffset_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_NormalizedOffset_3() const { return ___m_NormalizedOffset_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_NormalizedOffset_3() { return &___m_NormalizedOffset_3; }
	inline void set_m_NormalizedOffset_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_NormalizedOffset_3 = value;
	}
};


// UnityEngine.XR.WSA.Input.NavigationStartedEventArgs
struct  NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs
struct  NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_NormalizedOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_NormalizedOffset_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedOffset_3() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA, ___m_NormalizedOffset_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_NormalizedOffset_3() const { return ___m_NormalizedOffset_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_NormalizedOffset_3() { return &___m_NormalizedOffset_3; }
	inline void set_m_NormalizedOffset_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_NormalizedOffset_3 = value;
	}
};


// UnityEngine.XR.WSA.Input.TappedEventArgs
struct  TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.TappedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.TappedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.TappedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// System.Int32 UnityEngine.XR.WSA.Input.TappedEventArgs::m_TapCount
	int32_t ___m_TapCount_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_3() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_TapCount_3)); }
	inline int32_t get_m_TapCount_3() const { return ___m_TapCount_3; }
	inline int32_t* get_address_of_m_TapCount_3() { return &___m_TapCount_3; }
	inline void set_m_TapCount_3(int32_t value)
	{
		___m_TapCount_3 = value;
	}
};


// UnityEngine.XR.WSA.SpatialMappingBase_SurfaceDataReadyCallback
struct  SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.SpatialMappingContext_GetHighestPriorityCallback
struct  GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate
struct  SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate
struct  SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.WorldAnchor
struct  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:
	// UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate UnityEngine.XR.WSA.WorldAnchor::OnTrackingChanged
	OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * ___OnTrackingChanged_4;

public:
	inline static int32_t get_offset_of_OnTrackingChanged_4() { return static_cast<int32_t>(offsetof(WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE, ___OnTrackingChanged_4)); }
	inline OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * get_OnTrackingChanged_4() const { return ___OnTrackingChanged_4; }
	inline OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 ** get_address_of_OnTrackingChanged_4() { return &___OnTrackingChanged_4; }
	inline void set_OnTrackingChanged_4(OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * value)
	{
		___OnTrackingChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackingChanged_4), (void*)value);
	}
};


// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>
struct  Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>
struct  Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>
struct  Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>
struct  Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct  Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MeshCollider
struct  MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.Audio.AudioSpatializerMicrosoft
struct  AudioSpatializerMicrosoft_tD51873DF8B2EC56C9DEBFAAB2F747AD8674ADC83  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Audio.AudioSpatializerMicrosoft_RoomSize UnityEngine.Audio.AudioSpatializerMicrosoft::m_RoomSize
	int32_t ___m_RoomSize_4;

public:
	inline static int32_t get_offset_of_m_RoomSize_4() { return static_cast<int32_t>(offsetof(AudioSpatializerMicrosoft_tD51873DF8B2EC56C9DEBFAAB2F747AD8674ADC83, ___m_RoomSize_4)); }
	inline int32_t get_m_RoomSize_4() const { return ___m_RoomSize_4; }
	inline int32_t* get_address_of_m_RoomSize_4() { return &___m_RoomSize_4; }
	inline void set_m_RoomSize_4(int32_t value)
	{
		___m_RoomSize_4 = value;
	}
};


// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.XR.WSA.SpatialMappingBase
struct  SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase::m_SurfaceParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_SurfaceParent_7;
	// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::m_FreezeUpdates
	bool ___m_FreezeUpdates_8;
	// UnityEngine.XR.WSA.SpatialMappingBase_VolumeType UnityEngine.XR.WSA.SpatialMappingBase::m_VolumeType
	int32_t ___m_VolumeType_9;
	// System.Single UnityEngine.XR.WSA.SpatialMappingBase::m_SphereRadius
	float ___m_SphereRadius_10;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::m_HalfBoxExtents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_HalfBoxExtents_11;
	// UnityEngine.XR.WSA.SpatialMappingBase_LODType UnityEngine.XR.WSA.SpatialMappingBase::m_LodType
	int32_t ___m_LodType_12;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::m_NumUpdatesBeforeRemoval
	int32_t ___m_NumUpdatesBeforeRemoval_13;
	// System.Single UnityEngine.XR.WSA.SpatialMappingBase::m_SecondsBetweenUpdates
	float ___m_SecondsBetweenUpdates_14;
	// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::m_BakePhysics
	bool ___m_BakePhysics_15;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::<observerId>k__BackingField
	int32_t ___U3CobserverIdU3Ek__BackingField_16;
	// UnityEngine.XR.WSA.SurfaceObserver UnityEngine.XR.WSA.SpatialMappingBase::<surfaceObserver>k__BackingField
	SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___U3CsurfaceObserverU3Ek__BackingField_17;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface> UnityEngine.XR.WSA.SpatialMappingBase::<surfaceObjects>k__BackingField
	Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * ___U3CsurfaceObjectsU3Ek__BackingField_18;
	// UnityEngine.Bounds UnityEngine.XR.WSA.SpatialMappingBase::<bounds>k__BackingField
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___U3CboundsU3Ek__BackingField_19;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::<lastUpdatedObserverPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3ClastUpdatedObserverPositionU3Ek__BackingField_20;
	// UnityEngine.Camera UnityEngine.XR.WSA.SpatialMappingBase::<selectedCamera>k__BackingField
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___U3CselectedCameraU3Ek__BackingField_21;
	// System.Single UnityEngine.XR.WSA.SpatialMappingBase::<nextSurfaceChangeUpdateTime>k__BackingField
	float ___U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface> UnityEngine.XR.WSA.SpatialMappingBase::m_PendingSurfacesForEviction
	Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * ___m_PendingSurfacesForEviction_23;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.WSA.SpatialMappingBase::m_SurfacesToRemoveFromDict
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___m_SurfacesToRemoveFromDict_24;
	// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::m_SurfaceParentWasDynamicallyCreated
	bool ___m_SurfaceParentWasDynamicallyCreated_25;
	// UnityEngine.XR.WSA.SurfaceData UnityEngine.XR.WSA.SpatialMappingBase::bestSurfaceDataNull
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bestSurfaceDataNull_27;

public:
	inline static int32_t get_offset_of_m_SurfaceParent_7() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_SurfaceParent_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_SurfaceParent_7() const { return ___m_SurfaceParent_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_SurfaceParent_7() { return &___m_SurfaceParent_7; }
	inline void set_m_SurfaceParent_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_SurfaceParent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SurfaceParent_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_FreezeUpdates_8() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_FreezeUpdates_8)); }
	inline bool get_m_FreezeUpdates_8() const { return ___m_FreezeUpdates_8; }
	inline bool* get_address_of_m_FreezeUpdates_8() { return &___m_FreezeUpdates_8; }
	inline void set_m_FreezeUpdates_8(bool value)
	{
		___m_FreezeUpdates_8 = value;
	}

	inline static int32_t get_offset_of_m_VolumeType_9() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_VolumeType_9)); }
	inline int32_t get_m_VolumeType_9() const { return ___m_VolumeType_9; }
	inline int32_t* get_address_of_m_VolumeType_9() { return &___m_VolumeType_9; }
	inline void set_m_VolumeType_9(int32_t value)
	{
		___m_VolumeType_9 = value;
	}

	inline static int32_t get_offset_of_m_SphereRadius_10() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_SphereRadius_10)); }
	inline float get_m_SphereRadius_10() const { return ___m_SphereRadius_10; }
	inline float* get_address_of_m_SphereRadius_10() { return &___m_SphereRadius_10; }
	inline void set_m_SphereRadius_10(float value)
	{
		___m_SphereRadius_10 = value;
	}

	inline static int32_t get_offset_of_m_HalfBoxExtents_11() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_HalfBoxExtents_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_HalfBoxExtents_11() const { return ___m_HalfBoxExtents_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_HalfBoxExtents_11() { return &___m_HalfBoxExtents_11; }
	inline void set_m_HalfBoxExtents_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_HalfBoxExtents_11 = value;
	}

	inline static int32_t get_offset_of_m_LodType_12() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_LodType_12)); }
	inline int32_t get_m_LodType_12() const { return ___m_LodType_12; }
	inline int32_t* get_address_of_m_LodType_12() { return &___m_LodType_12; }
	inline void set_m_LodType_12(int32_t value)
	{
		___m_LodType_12 = value;
	}

	inline static int32_t get_offset_of_m_NumUpdatesBeforeRemoval_13() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_NumUpdatesBeforeRemoval_13)); }
	inline int32_t get_m_NumUpdatesBeforeRemoval_13() const { return ___m_NumUpdatesBeforeRemoval_13; }
	inline int32_t* get_address_of_m_NumUpdatesBeforeRemoval_13() { return &___m_NumUpdatesBeforeRemoval_13; }
	inline void set_m_NumUpdatesBeforeRemoval_13(int32_t value)
	{
		___m_NumUpdatesBeforeRemoval_13 = value;
	}

	inline static int32_t get_offset_of_m_SecondsBetweenUpdates_14() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_SecondsBetweenUpdates_14)); }
	inline float get_m_SecondsBetweenUpdates_14() const { return ___m_SecondsBetweenUpdates_14; }
	inline float* get_address_of_m_SecondsBetweenUpdates_14() { return &___m_SecondsBetweenUpdates_14; }
	inline void set_m_SecondsBetweenUpdates_14(float value)
	{
		___m_SecondsBetweenUpdates_14 = value;
	}

	inline static int32_t get_offset_of_m_BakePhysics_15() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_BakePhysics_15)); }
	inline bool get_m_BakePhysics_15() const { return ___m_BakePhysics_15; }
	inline bool* get_address_of_m_BakePhysics_15() { return &___m_BakePhysics_15; }
	inline void set_m_BakePhysics_15(bool value)
	{
		___m_BakePhysics_15 = value;
	}

	inline static int32_t get_offset_of_U3CobserverIdU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___U3CobserverIdU3Ek__BackingField_16)); }
	inline int32_t get_U3CobserverIdU3Ek__BackingField_16() const { return ___U3CobserverIdU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CobserverIdU3Ek__BackingField_16() { return &___U3CobserverIdU3Ek__BackingField_16; }
	inline void set_U3CobserverIdU3Ek__BackingField_16(int32_t value)
	{
		___U3CobserverIdU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CsurfaceObserverU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___U3CsurfaceObserverU3Ek__BackingField_17)); }
	inline SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * get_U3CsurfaceObserverU3Ek__BackingField_17() const { return ___U3CsurfaceObserverU3Ek__BackingField_17; }
	inline SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 ** get_address_of_U3CsurfaceObserverU3Ek__BackingField_17() { return &___U3CsurfaceObserverU3Ek__BackingField_17; }
	inline void set_U3CsurfaceObserverU3Ek__BackingField_17(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * value)
	{
		___U3CsurfaceObserverU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsurfaceObserverU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsurfaceObjectsU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___U3CsurfaceObjectsU3Ek__BackingField_18)); }
	inline Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * get_U3CsurfaceObjectsU3Ek__BackingField_18() const { return ___U3CsurfaceObjectsU3Ek__BackingField_18; }
	inline Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 ** get_address_of_U3CsurfaceObjectsU3Ek__BackingField_18() { return &___U3CsurfaceObjectsU3Ek__BackingField_18; }
	inline void set_U3CsurfaceObjectsU3Ek__BackingField_18(Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * value)
	{
		___U3CsurfaceObjectsU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsurfaceObjectsU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CboundsU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___U3CboundsU3Ek__BackingField_19)); }
	inline Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  get_U3CboundsU3Ek__BackingField_19() const { return ___U3CboundsU3Ek__BackingField_19; }
	inline Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * get_address_of_U3CboundsU3Ek__BackingField_19() { return &___U3CboundsU3Ek__BackingField_19; }
	inline void set_U3CboundsU3Ek__BackingField_19(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  value)
	{
		___U3CboundsU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3ClastUpdatedObserverPositionU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___U3ClastUpdatedObserverPositionU3Ek__BackingField_20)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3ClastUpdatedObserverPositionU3Ek__BackingField_20() const { return ___U3ClastUpdatedObserverPositionU3Ek__BackingField_20; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3ClastUpdatedObserverPositionU3Ek__BackingField_20() { return &___U3ClastUpdatedObserverPositionU3Ek__BackingField_20; }
	inline void set_U3ClastUpdatedObserverPositionU3Ek__BackingField_20(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3ClastUpdatedObserverPositionU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CselectedCameraU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___U3CselectedCameraU3Ek__BackingField_21)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_U3CselectedCameraU3Ek__BackingField_21() const { return ___U3CselectedCameraU3Ek__BackingField_21; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_U3CselectedCameraU3Ek__BackingField_21() { return &___U3CselectedCameraU3Ek__BackingField_21; }
	inline void set_U3CselectedCameraU3Ek__BackingField_21(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___U3CselectedCameraU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CselectedCameraU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22)); }
	inline float get_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22() const { return ___U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22; }
	inline float* get_address_of_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22() { return &___U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22; }
	inline void set_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22(float value)
	{
		___U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_m_PendingSurfacesForEviction_23() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_PendingSurfacesForEviction_23)); }
	inline Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * get_m_PendingSurfacesForEviction_23() const { return ___m_PendingSurfacesForEviction_23; }
	inline Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 ** get_address_of_m_PendingSurfacesForEviction_23() { return &___m_PendingSurfacesForEviction_23; }
	inline void set_m_PendingSurfacesForEviction_23(Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * value)
	{
		___m_PendingSurfacesForEviction_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingSurfacesForEviction_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_SurfacesToRemoveFromDict_24() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_SurfacesToRemoveFromDict_24)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_m_SurfacesToRemoveFromDict_24() const { return ___m_SurfacesToRemoveFromDict_24; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_m_SurfacesToRemoveFromDict_24() { return &___m_SurfacesToRemoveFromDict_24; }
	inline void set_m_SurfacesToRemoveFromDict_24(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___m_SurfacesToRemoveFromDict_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SurfacesToRemoveFromDict_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SurfaceParentWasDynamicallyCreated_25() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___m_SurfaceParentWasDynamicallyCreated_25)); }
	inline bool get_m_SurfaceParentWasDynamicallyCreated_25() const { return ___m_SurfaceParentWasDynamicallyCreated_25; }
	inline bool* get_address_of_m_SurfaceParentWasDynamicallyCreated_25() { return &___m_SurfaceParentWasDynamicallyCreated_25; }
	inline void set_m_SurfaceParentWasDynamicallyCreated_25(bool value)
	{
		___m_SurfaceParentWasDynamicallyCreated_25 = value;
	}

	inline static int32_t get_offset_of_bestSurfaceDataNull_27() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54, ___bestSurfaceDataNull_27)); }
	inline SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  get_bestSurfaceDataNull_27() const { return ___bestSurfaceDataNull_27; }
	inline SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * get_address_of_bestSurfaceDataNull_27() { return &___bestSurfaceDataNull_27; }
	inline void set_bestSurfaceDataNull_27(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  value)
	{
		___bestSurfaceDataNull_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___bestSurfaceDataNull_27))->___outputMesh_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___bestSurfaceDataNull_27))->___outputAnchor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___bestSurfaceDataNull_27))->___outputCollider_3), (void*)NULL);
		#endif
	}
};

struct SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields
{
public:
	// System.Single UnityEngine.XR.WSA.SpatialMappingBase::s_MovementUpdateThresholdSqr
	float ___s_MovementUpdateThresholdSqr_4;
	// System.Single UnityEngine.XR.WSA.SpatialMappingBase::s_EvictionUpdateTickThresholdSqr
	float ___s_EvictionUpdateTickThresholdSqr_5;
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::s_ObserverIdCounter
	int32_t ___s_ObserverIdCounter_6;
	// System.Int32[] UnityEngine.XR.WSA.SpatialMappingBase::s_LodToPcm
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___s_LodToPcm_26;

public:
	inline static int32_t get_offset_of_s_MovementUpdateThresholdSqr_4() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields, ___s_MovementUpdateThresholdSqr_4)); }
	inline float get_s_MovementUpdateThresholdSqr_4() const { return ___s_MovementUpdateThresholdSqr_4; }
	inline float* get_address_of_s_MovementUpdateThresholdSqr_4() { return &___s_MovementUpdateThresholdSqr_4; }
	inline void set_s_MovementUpdateThresholdSqr_4(float value)
	{
		___s_MovementUpdateThresholdSqr_4 = value;
	}

	inline static int32_t get_offset_of_s_EvictionUpdateTickThresholdSqr_5() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields, ___s_EvictionUpdateTickThresholdSqr_5)); }
	inline float get_s_EvictionUpdateTickThresholdSqr_5() const { return ___s_EvictionUpdateTickThresholdSqr_5; }
	inline float* get_address_of_s_EvictionUpdateTickThresholdSqr_5() { return &___s_EvictionUpdateTickThresholdSqr_5; }
	inline void set_s_EvictionUpdateTickThresholdSqr_5(float value)
	{
		___s_EvictionUpdateTickThresholdSqr_5 = value;
	}

	inline static int32_t get_offset_of_s_ObserverIdCounter_6() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields, ___s_ObserverIdCounter_6)); }
	inline int32_t get_s_ObserverIdCounter_6() const { return ___s_ObserverIdCounter_6; }
	inline int32_t* get_address_of_s_ObserverIdCounter_6() { return &___s_ObserverIdCounter_6; }
	inline void set_s_ObserverIdCounter_6(int32_t value)
	{
		___s_ObserverIdCounter_6 = value;
	}

	inline static int32_t get_offset_of_s_LodToPcm_26() { return static_cast<int32_t>(offsetof(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields, ___s_LodToPcm_26)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_s_LodToPcm_26() const { return ___s_LodToPcm_26; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_s_LodToPcm_26() { return &___s_LodToPcm_26; }
	inline void set_s_LodToPcm_26(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___s_LodToPcm_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LodToPcm_26), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseInput
struct  BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:

public:
};


// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t9B42195BBE4C4201734D1B55FB0B9EC97F597098 * ___m_RaycastResultCache_4;
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
	inline List_1_t9B42195BBE4C4201734D1B55FB0B9EC97F597098 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t9B42195BBE4C4201734D1B55FB0B9EC97F597098 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t9B42195BBE4C4201734D1B55FB0B9EC97F597098 * value)
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
	List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 * ___m_SystemInputModules_4;
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
	inline List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 * value)
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
	List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.XR.WSA.SpatialMappingCollider
struct  SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2  : public SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54
{
public:
	// System.Int32 UnityEngine.XR.WSA.SpatialMappingCollider::m_Layer
	int32_t ___m_Layer_28;
	// UnityEngine.PhysicMaterial UnityEngine.XR.WSA.SpatialMappingCollider::m_Material
	PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * ___m_Material_29;
	// System.Boolean UnityEngine.XR.WSA.SpatialMappingCollider::m_EnableCollisions
	bool ___m_EnableCollisions_30;

public:
	inline static int32_t get_offset_of_m_Layer_28() { return static_cast<int32_t>(offsetof(SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2, ___m_Layer_28)); }
	inline int32_t get_m_Layer_28() const { return ___m_Layer_28; }
	inline int32_t* get_address_of_m_Layer_28() { return &___m_Layer_28; }
	inline void set_m_Layer_28(int32_t value)
	{
		___m_Layer_28 = value;
	}

	inline static int32_t get_offset_of_m_Material_29() { return static_cast<int32_t>(offsetof(SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2, ___m_Material_29)); }
	inline PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * get_m_Material_29() const { return ___m_Material_29; }
	inline PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 ** get_address_of_m_Material_29() { return &___m_Material_29; }
	inline void set_m_Material_29(PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * value)
	{
		___m_Material_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_EnableCollisions_30() { return static_cast<int32_t>(offsetof(SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2, ___m_EnableCollisions_30)); }
	inline bool get_m_EnableCollisions_30() const { return ___m_EnableCollisions_30; }
	inline bool* get_address_of_m_EnableCollisions_30() { return &___m_EnableCollisions_30; }
	inline void set_m_EnableCollisions_30(bool value)
	{
		___m_EnableCollisions_30 = value;
	}
};


// UnityEngine.XR.WSA.SpatialMappingRenderer
struct  SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB  : public SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54
{
public:
	// UnityEngine.XR.WSA.SpatialMappingRenderer_RenderState UnityEngine.XR.WSA.SpatialMappingRenderer::m_CurrentRenderState
	int32_t ___m_CurrentRenderState_28;
	// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::m_VisualMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_VisualMaterial_29;
	// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::m_OcclusionMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_OcclusionMaterial_30;

public:
	inline static int32_t get_offset_of_m_CurrentRenderState_28() { return static_cast<int32_t>(offsetof(SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB, ___m_CurrentRenderState_28)); }
	inline int32_t get_m_CurrentRenderState_28() const { return ___m_CurrentRenderState_28; }
	inline int32_t* get_address_of_m_CurrentRenderState_28() { return &___m_CurrentRenderState_28; }
	inline void set_m_CurrentRenderState_28(int32_t value)
	{
		___m_CurrentRenderState_28 = value;
	}

	inline static int32_t get_offset_of_m_VisualMaterial_29() { return static_cast<int32_t>(offsetof(SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB, ___m_VisualMaterial_29)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_VisualMaterial_29() const { return ___m_VisualMaterial_29; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_VisualMaterial_29() { return &___m_VisualMaterial_29; }
	inline void set_m_VisualMaterial_29(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_VisualMaterial_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VisualMaterial_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_OcclusionMaterial_30() { return static_cast<int32_t>(offsetof(SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB, ___m_OcclusionMaterial_30)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_OcclusionMaterial_30() const { return ___m_OcclusionMaterial_30; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_OcclusionMaterial_30() { return &___m_OcclusionMaterial_30; }
	inline void set_m_OcclusionMaterial_30(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_OcclusionMaterial_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OcclusionMaterial_30), (void*)value);
	}
};


// UnityEngine.EventSystems.HoloLensInput
struct  HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04  : public BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82
{
public:
	// System.Boolean UnityEngine.EventSystems.HoloLensInput::m_IsEmulatedMouseDownCurr
	bool ___m_IsEmulatedMouseDownCurr_4;
	// System.Boolean UnityEngine.EventSystems.HoloLensInput::m_IsEmulatedMouseDownPrev
	bool ___m_IsEmulatedMouseDownPrev_5;
	// UnityEngine.EventSystems.HoloLensInput_MouseEmulationMode UnityEngine.EventSystems.HoloLensInput::m_MouseEmulationMode
	int32_t ___m_MouseEmulationMode_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.HoloLensInput::m_NavigationNormalizedOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_NavigationNormalizedOffset_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.HoloLensInput::m_NavigationAnchorWorldSpace
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_NavigationAnchorWorldSpace_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.HoloLensInput::m_TapAnchorWorldSpace
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_TapAnchorWorldSpace_9;
	// System.Single UnityEngine.EventSystems.HoloLensInput::m_LastTapTime
	float ___m_LastTapTime_10;
	// UnityEngine.EventSystems.HoloLensInputModule UnityEngine.EventSystems.HoloLensInput::m_Module
	HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * ___m_Module_11;
	// UnityEngine.XR.WSA.Input.GestureRecognizer UnityEngine.EventSystems.HoloLensInput::m_GestureRecognizer
	GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * ___m_GestureRecognizer_12;

public:
	inline static int32_t get_offset_of_m_IsEmulatedMouseDownCurr_4() { return static_cast<int32_t>(offsetof(HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04, ___m_IsEmulatedMouseDownCurr_4)); }
	inline bool get_m_IsEmulatedMouseDownCurr_4() const { return ___m_IsEmulatedMouseDownCurr_4; }
	inline bool* get_address_of_m_IsEmulatedMouseDownCurr_4() { return &___m_IsEmulatedMouseDownCurr_4; }
	inline void set_m_IsEmulatedMouseDownCurr_4(bool value)
	{
		___m_IsEmulatedMouseDownCurr_4 = value;
	}

	inline static int32_t get_offset_of_m_IsEmulatedMouseDownPrev_5() { return static_cast<int32_t>(offsetof(HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04, ___m_IsEmulatedMouseDownPrev_5)); }
	inline bool get_m_IsEmulatedMouseDownPrev_5() const { return ___m_IsEmulatedMouseDownPrev_5; }
	inline bool* get_address_of_m_IsEmulatedMouseDownPrev_5() { return &___m_IsEmulatedMouseDownPrev_5; }
	inline void set_m_IsEmulatedMouseDownPrev_5(bool value)
	{
		___m_IsEmulatedMouseDownPrev_5 = value;
	}

	inline static int32_t get_offset_of_m_MouseEmulationMode_6() { return static_cast<int32_t>(offsetof(HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04, ___m_MouseEmulationMode_6)); }
	inline int32_t get_m_MouseEmulationMode_6() const { return ___m_MouseEmulationMode_6; }
	inline int32_t* get_address_of_m_MouseEmulationMode_6() { return &___m_MouseEmulationMode_6; }
	inline void set_m_MouseEmulationMode_6(int32_t value)
	{
		___m_MouseEmulationMode_6 = value;
	}

	inline static int32_t get_offset_of_m_NavigationNormalizedOffset_7() { return static_cast<int32_t>(offsetof(HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04, ___m_NavigationNormalizedOffset_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_NavigationNormalizedOffset_7() const { return ___m_NavigationNormalizedOffset_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_NavigationNormalizedOffset_7() { return &___m_NavigationNormalizedOffset_7; }
	inline void set_m_NavigationNormalizedOffset_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_NavigationNormalizedOffset_7 = value;
	}

	inline static int32_t get_offset_of_m_NavigationAnchorWorldSpace_8() { return static_cast<int32_t>(offsetof(HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04, ___m_NavigationAnchorWorldSpace_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_NavigationAnchorWorldSpace_8() const { return ___m_NavigationAnchorWorldSpace_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_NavigationAnchorWorldSpace_8() { return &___m_NavigationAnchorWorldSpace_8; }
	inline void set_m_NavigationAnchorWorldSpace_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_NavigationAnchorWorldSpace_8 = value;
	}

	inline static int32_t get_offset_of_m_TapAnchorWorldSpace_9() { return static_cast<int32_t>(offsetof(HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04, ___m_TapAnchorWorldSpace_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_TapAnchorWorldSpace_9() const { return ___m_TapAnchorWorldSpace_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_TapAnchorWorldSpace_9() { return &___m_TapAnchorWorldSpace_9; }
	inline void set_m_TapAnchorWorldSpace_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_TapAnchorWorldSpace_9 = value;
	}

	inline static int32_t get_offset_of_m_LastTapTime_10() { return static_cast<int32_t>(offsetof(HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04, ___m_LastTapTime_10)); }
	inline float get_m_LastTapTime_10() const { return ___m_LastTapTime_10; }
	inline float* get_address_of_m_LastTapTime_10() { return &___m_LastTapTime_10; }
	inline void set_m_LastTapTime_10(float value)
	{
		___m_LastTapTime_10 = value;
	}

	inline static int32_t get_offset_of_m_Module_11() { return static_cast<int32_t>(offsetof(HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04, ___m_Module_11)); }
	inline HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * get_m_Module_11() const { return ___m_Module_11; }
	inline HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB ** get_address_of_m_Module_11() { return &___m_Module_11; }
	inline void set_m_Module_11(HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * value)
	{
		___m_Module_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Module_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_GestureRecognizer_12() { return static_cast<int32_t>(offsetof(HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04, ___m_GestureRecognizer_12)); }
	inline GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * get_m_GestureRecognizer_12() const { return ___m_GestureRecognizer_12; }
	inline GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE ** get_address_of_m_GestureRecognizer_12() { return &___m_GestureRecognizer_12; }
	inline void set_m_GestureRecognizer_12(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * value)
	{
		___m_GestureRecognizer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GestureRecognizer_12), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule
struct  PointerInputModule_tE8CB9BDC38DAF3162843E22541093DADDE1BB19C  : public BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_tC6CFDD93C6E3F120D81F876E847AFA4EC0F51750 * ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule_MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_t4D6249AEF3F24542B7F13D49020EC1B8DC2F05D7 * ___m_MouseState_15;

public:
	inline static int32_t get_offset_of_m_PointerData_14() { return static_cast<int32_t>(offsetof(PointerInputModule_tE8CB9BDC38DAF3162843E22541093DADDE1BB19C, ___m_PointerData_14)); }
	inline Dictionary_2_tC6CFDD93C6E3F120D81F876E847AFA4EC0F51750 * get_m_PointerData_14() const { return ___m_PointerData_14; }
	inline Dictionary_2_tC6CFDD93C6E3F120D81F876E847AFA4EC0F51750 ** get_address_of_m_PointerData_14() { return &___m_PointerData_14; }
	inline void set_m_PointerData_14(Dictionary_2_tC6CFDD93C6E3F120D81F876E847AFA4EC0F51750 * value)
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


// UnityEngine.EventSystems.HoloLensInputModule
struct  HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB  : public StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5
{
public:
	// System.Single UnityEngine.EventSystems.HoloLensInputModule::m_NormalizedNavigationToScreenOffsetScalar
	float ___m_NormalizedNavigationToScreenOffsetScalar_30;
	// System.Single UnityEngine.EventSystems.HoloLensInputModule::m_TimeToPressOnTap
	float ___m_TimeToPressOnTap_31;
	// UnityEngine.EventSystems.HoloLensInput UnityEngine.EventSystems.HoloLensInputModule::m_HoloLensInput
	HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * ___m_HoloLensInput_32;
	// System.Boolean UnityEngine.EventSystems.HoloLensInputModule::m_HasBeenActivated
	bool ___m_HasBeenActivated_33;
	// System.Boolean UnityEngine.EventSystems.HoloLensInputModule::m_HasGestureToProcess
	bool ___m_HasGestureToProcess_34;

public:
	inline static int32_t get_offset_of_m_NormalizedNavigationToScreenOffsetScalar_30() { return static_cast<int32_t>(offsetof(HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB, ___m_NormalizedNavigationToScreenOffsetScalar_30)); }
	inline float get_m_NormalizedNavigationToScreenOffsetScalar_30() const { return ___m_NormalizedNavigationToScreenOffsetScalar_30; }
	inline float* get_address_of_m_NormalizedNavigationToScreenOffsetScalar_30() { return &___m_NormalizedNavigationToScreenOffsetScalar_30; }
	inline void set_m_NormalizedNavigationToScreenOffsetScalar_30(float value)
	{
		___m_NormalizedNavigationToScreenOffsetScalar_30 = value;
	}

	inline static int32_t get_offset_of_m_TimeToPressOnTap_31() { return static_cast<int32_t>(offsetof(HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB, ___m_TimeToPressOnTap_31)); }
	inline float get_m_TimeToPressOnTap_31() const { return ___m_TimeToPressOnTap_31; }
	inline float* get_address_of_m_TimeToPressOnTap_31() { return &___m_TimeToPressOnTap_31; }
	inline void set_m_TimeToPressOnTap_31(float value)
	{
		___m_TimeToPressOnTap_31 = value;
	}

	inline static int32_t get_offset_of_m_HoloLensInput_32() { return static_cast<int32_t>(offsetof(HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB, ___m_HoloLensInput_32)); }
	inline HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * get_m_HoloLensInput_32() const { return ___m_HoloLensInput_32; }
	inline HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 ** get_address_of_m_HoloLensInput_32() { return &___m_HoloLensInput_32; }
	inline void set_m_HoloLensInput_32(HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * value)
	{
		___m_HoloLensInput_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HoloLensInput_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasBeenActivated_33() { return static_cast<int32_t>(offsetof(HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB, ___m_HasBeenActivated_33)); }
	inline bool get_m_HasBeenActivated_33() const { return ___m_HasBeenActivated_33; }
	inline bool* get_address_of_m_HasBeenActivated_33() { return &___m_HasBeenActivated_33; }
	inline void set_m_HasBeenActivated_33(bool value)
	{
		___m_HasBeenActivated_33 = value;
	}

	inline static int32_t get_offset_of_m_HasGestureToProcess_34() { return static_cast<int32_t>(offsetof(HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB, ___m_HasGestureToProcess_34)); }
	inline bool get_m_HasGestureToProcess_34() const { return ___m_HasGestureToProcess_34; }
	inline bool* get_address_of_m_HasGestureToProcess_34() { return &___m_HasGestureToProcess_34; }
	inline void set_m_HasGestureToProcess_34(bool value)
	{
		___m_HasGestureToProcess_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.WSA.SpatialMappingContext_SMBakeRequest[]
struct SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  m_Items[1];

public:
	inline SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_RequestData_0))->___outputMesh_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_RequestData_0))->___outputAnchor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_RequestData_0))->___outputCollider_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Requester_1))->___m_Component_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Requester_1))->___m_OnDataReady_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Requester_1))->___m_GetHighestPri_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Requester_1))->___m_SurfaceObserver_3), (void*)NULL);
		#endif
	}
	inline SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_RequestData_0))->___outputMesh_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_RequestData_0))->___outputAnchor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_RequestData_0))->___outputCollider_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Requester_1))->___m_Component_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Requester_1))->___m_OnDataReady_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Requester_1))->___m_GetHighestPri_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Requester_1))->___m_SurfaceObserver_3), (void*)NULL);
		#endif
	}
};
// UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord[]
struct SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  m_Items[1];

public:
	inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Component_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_OnDataReady_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_GetHighestPri_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SurfaceObserver_3), (void*)NULL);
		#endif
	}
	inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Component_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_OnDataReady_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_GetHighestPri_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SurfaceObserver_3), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_pinvoke(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_pinvoke_back(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke& marshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled);
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_pinvoke_cleanup(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_pinvoke(const SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C& unmarshaled, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_pinvoke_back(const SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke& marshaled, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C& unmarshaled);
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_pinvoke_cleanup(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_com(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_com_back(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com& marshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled);
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_com_cleanup(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_com(const SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C& unmarshaled, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_com_back(const SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com& marshaled, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C& unmarshaled);
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_com_cleanup(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_pinvoke(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_pinvoke_back(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke& marshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled);
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_pinvoke_cleanup(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_com(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_com_back(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com& marshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled);
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_com_cleanup(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com& marshaled);

// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mC026C61EC637A1B6E38435AC1FE0F1FB6005542B_gshared (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m02EF96D4C4CA30C2D0EC89E0CAB4DB4CF32B27E3_gshared (Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mFBB740823BD38775A2EBE527D9DF619D40C6DC1B_gshared (Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAA8EC518E1D8362D3621E54D13E2CCFB98BE9E57_gshared (Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mBFD51E28F3B04BFE39041A85D13E2E5AE48CEBBA_gshared (Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m69345D9DEE55AA0CE574D19CB7C430AC638C01A9_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6  Dictionary_2_GetEnumerator_mE47C13FC1B2BACBEE6F795B0E40E6406CAC55D4B_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  Enumerator_get_Current_m73F8FC135A20BDFEA0846D8FC876863ED85FEA49_gshared_inline (Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mAD6801F3BC9BA1E99D4E0F72B2B420182D0494FC_gshared_inline (KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m637AE52AC4BDE5BEB1D89BE4B75E49B4C328EFC9_gshared (Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m772E7049D8DA96AF5021EA09C3E6322CD4BFBDFC_gshared (Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m89B687D373FBE3D230647CA0C536235E12AD829C_gshared_inline (KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m0A844810F20B37C73BBE7E1B059856D5DAF18294_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mBF5574232A8F79C279DFD71FFBFF85B4E2B6312D_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mEFECE2769017AB70A9B1E7F5F8BBA59375620B54_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF7AEA0EFA07EEBC1A4B283A26A7CB720EE7A4C20_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m809A7334C75F6B61B6B4A83C1D091865819572A8_gshared (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_mAE0572D02E462A85D05988B526C15C18B4A43304_gshared (Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Find(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  List_1_Find_mEBB03AE7A46CD2A87BC5F4586A3754A34D973A52_gshared (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD * ___match0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mFE4A7984825421BE1A7BD67AD5D60F8BB45F921E_gshared (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::RemoveAll(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m424B6644A35D9EE627723C88FFDAD1860879836B_gshared (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD * ___match0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406  List_1_GetEnumerator_m939FB5AF2C64F6D130A3B5E4CFABE1354497D537_gshared (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  Enumerator_get_Current_m0FE874F7E7972DC563007C0182FC43C9FFCEEB37_gshared_inline (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m31B0D57E103FDC4AB1C9F806E4A30988A7E4BFE5_gshared (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8FD886547CD472ECD1472BB2F59C64E7D3A8759A_gshared (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  List_1_get_Item_m36FCDE89ACB30BF2EDAF254BB88F320BDC3B3AD1_gshared_inline (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mBD9EA372A02B0E0D2612A0E5404BB83EAA7521A4_gshared (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9B40973BA15B5CD9FCC23B9A8882D7E4BDF82D4E_gshared_inline (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::SetSpatializerRoomSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft_SetSpatializerRoomSize_m054673384F170FB05E2BB8BA0E221D25DD34E9C6 (AudioSpatializerMicrosoft_tD51873DF8B2EC56C9DEBFAAB2F747AD8674ADC83 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::SetSpatializerFloats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft_SetSpatializerFloats_m8A03484BCA219BB5DE54141ECD70E957202686DC (AudioSpatializerMicrosoft_tD51873DF8B2EC56C9DEBFAAB2F747AD8674ADC83 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// UnityEngine.AudioSource UnityEngine.Audio.AudioSpatializerMicrosoft::get_audioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * AudioSpatializerMicrosoft_get_audioSource_m64394B367E4F22778216B603971AC6CB0666FE26 (AudioSpatializerMicrosoft_tD51873DF8B2EC56C9DEBFAAB2F747AD8674ADC83 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::SetSpatializerFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_SetSpatializerFloat_mA34E8E88A05FF3682B00E1D29D80581AFED8098F (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::GetGazeAndGestureScreenPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  HoloLensInput_GetGazeAndGestureScreenPosition_m7DB2FDF3835B4EDD8C9B8D8FB11D73FB54CDEE2B (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::GetGestureScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  HoloLensInput_GetGestureScrollDelta_m24FDE0BFC26D5173002FBABAD945914E206602B8 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.UIBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Awake_m8283CBD45FF1CBA026DFD5F0319282EA464F8B33 (UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.EventSystems.HoloLensInputModule>()
inline HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * Component_GetComponent_TisHoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB_m5EB41AF0200183B780E6DECD1274962F1367CF1D (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer__ctor_m4EC0013B225C0189D0ACB2DC77092C809764F1D5 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC026C61EC637A1B6E38435AC1FE0F1FB6005542B (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mC026C61EC637A1B6E38435AC1FE0F1FB6005542B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_Tapped(System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_Tapped_mD5587B3F0115F9AC0599D555E2988E63136DA3EC (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m02EF96D4C4CA30C2D0EC89E0CAB4DB4CF32B27E3 (Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m02EF96D4C4CA30C2D0EC89E0CAB4DB4CF32B27E3_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_NavigationStarted(System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_NavigationStarted_mB4E1B0FCB384F37BD9A9309C7C5B0AFADFA3EB1C (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFBB740823BD38775A2EBE527D9DF619D40C6DC1B (Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mFBB740823BD38775A2EBE527D9DF619D40C6DC1B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_NavigationUpdated(System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_NavigationUpdated_mA509F2737D18188204C6E04154B1A1070F8E711C (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mAA8EC518E1D8362D3621E54D13E2CCFB98BE9E57 (Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAA8EC518E1D8362D3621E54D13E2CCFB98BE9E57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_NavigationCompleted(System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_NavigationCompleted_mD39CFD50E1AD8B673AB866EA8EAB7E22F2DBDCB3 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mBFD51E28F3B04BFE39041A85D13E2E5AE48CEBBA (Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mBFD51E28F3B04BFE39041A85D13E2E5AE48CEBBA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_NavigationCanceled(System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_NavigationCanceled_m457599DCA92748E915C75C3D858C757D21C5FD4B (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * ___value0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.GestureSettings UnityEngine.XR.WSA.Input.GestureRecognizer::SetRecognizableGestures(UnityEngine.XR.WSA.Input.GestureSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GestureRecognizer_SetRecognizableGestures_mF459BAE914B9B2E01E7B1652ACF23C5C2722DA68 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, int32_t ___newMaskValue0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::StartCapturingGestures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_StartCapturingGestures_mD02F289C8263C8EACB47B4593E55C8B767C524FA (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::StopCapturingGestures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_StopCapturingGestures_mBA5D5DFFC507CE972150A242E9DFC59B06121D61 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_Tapped(System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_remove_Tapped_mB7FCD101CEEA7DF998931E64E4358F734A06F840 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_NavigationStarted(System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_remove_NavigationStarted_m2456D056E789D6F4FC6BB8477658352C1550E8FF (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_NavigationUpdated(System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_remove_NavigationUpdated_m279E228CE0E46516F24A472998BC0F5B854EF4E8 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_NavigationCompleted(System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_remove_NavigationCompleted_m549BC4069ABD075D8077660FB94C32235306AA03 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_NavigationCanceled(System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_remove_NavigationCanceled_m7F24255B9515ACE9F80A55864A9923D085ED5E32 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.UIBehaviour::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnDestroy_m12CAEB3F5221B9D061148F6D8FBFD0FDD90636F0 (UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.EventSystems.HoloLensInputModule::get_timeToPressOnTap()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float HoloLensInputModule_get_timeToPressOnTap_mBD2147FC62595E28208399F99E992E38EA380AE3_inline (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.HoloLensInputModule::Internal_GetCurrentFocusedGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HoloLensInputModule_Internal_GetCurrentFocusedGameObject_mF8696D11EC99BA6CCAEEF50628ACF1D47D142DF8 (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m2E5F02DDA13C176AF75B4E7C1DB801D89E053B2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::GetGazeScreenPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  HoloLensInput_GetGazeScreenPosition_m9073CFAB427427D2CF716229652E87F8DC58C231 (const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m821FF925C5B70477F153B4C053AE9E36A04A774F (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___rect0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPoint1, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___worldPoint3, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.HoloLensInputModule::Internal_GestureNotifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInputModule_Internal_GestureNotifier_m408B8E4F22843278F0C537E06F76B62857BCA53D (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.HoloLensInput::TryGetAnchorWorldSpace(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HoloLensInput_TryGetAnchorWorldSpace_mC43BABC0CD0CDD380254DDAB705527B809EC3824 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___anchor0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::get_normalizedOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NavigationUpdatedEventArgs_get_normalizedOffset_m63EFB136CBEC39D4BC004FC814B93FBA69760C02 (NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.HoloLensInput::OnNavigationCompletedOrCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInput_OnNavigationCompletedOrCanceled_mFB8E51C82D8B34118931DB8B0D1348FB92D5E734 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.EventSystems.HoloLensInputModule::get_normalizedNavigationToScreenOffsetScalar()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float HoloLensInputModule_get_normalizedNavigationToScreenOffsetScalar_m16CC0F67B1AFC354CB396C175319DE50A325CE88_inline (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m2E30A54E315810911DFC2E25C700757A68AC1F38 (float ___d0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::EmulateMousePosition(UnityEngine.Vector3,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  HoloLensInput_EmulateMousePosition_mCE630E4BC37BE3EC3ED5D9707C5540F0F36DAEFB (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___anchorWorldspace0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___finalOffset1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.BaseInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInput__ctor_m33F85C42EA9300A022A8328A83D1CB9FCEC6F042 (BaseInput_t75E14D6E10222455BEB43FA300F478BEAB02DF82 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.StandaloneInputModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInputModule__ctor_m7ACED26CC5670B0729809379560FCBE0D0311AC8 (StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.EventSystems.HoloLensInput>()
inline HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * Component_GetComponent_TisHoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04_m698FB9682EE309CAAA265B29C21BF06A62F6C9B2 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.HoloLensInput>()
inline HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * GameObject_AddComponent_TisHoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04_mF50CC95A955F7405B540971920DE4739BE47684B (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::IsModuleSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInputModule_IsModuleSupported_mB6AE0DFF7278B18B24FD5FC1D1ACE571D26FCABA (StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.XRSettings::get_loadedDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSettings_get_loadedDeviceName_m952D46346306FD9477B13992E5797A85CCD3C98C (const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m90EB651A751C3444BADBBD5401109CE05B3E1CFB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_forceModuleActive()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool StandaloneInputModule_get_forceModuleActive_m6D41F04E01F96727E0246D6B74F63E0312E25022_inline (StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ActivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInputModule_ActivateModule_m4861DB0128B954D53E51FB5A6CC1524346F76A1E (StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.HoloLensInput::UpdateInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInput_UpdateInput_m4E9E7C14E2FC70F60E4016839BB7B33B0AFEE8F2 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.StandaloneInputModule::UpdateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInputModule_UpdateModule_m0525AD093E45EFB1FE8484731A81C3E45222EFB9 (StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.HoloLensInput::AllowDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HoloLensInput_AllowDrag_m27C9650E864A5CBD9DFA9B8F64786C8EB04BF22D (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerInputModule_ProcessDrag_m1B953F6640DBD2E46508B18F4F281ED461DD1360 (PointerInputModule_tE8CB9BDC38DAF3162843E22541093DADDE1BB19C * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___pointerEvent0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::GetCurrentFocusedGameObject()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * StandaloneInputModule_GetCurrentFocusedGameObject_mA354FCB4E2546E1F49D165207705A26D29EBB3D7_inline (StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * BaseInputModule_get_eventSystem_mEF6DEC17FF56D786AA217A52FCCFE8C6F38546BE_inline (BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_observerId(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_observerId_mCFC284EC63E22158DB33B98BFF0054B7391623B6_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::.ctor()
inline void Dictionary_2__ctor_mFC287CA51EC6CD9F9F0D7C063D5631D4050A60B0 (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceObjects(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceObjects_m6C2B943132FDD8EFD802E6E33840403E6F2E7FC4_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_selectedCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_selectedCamera_m4EA8D7E1314E0127DE428CA4EDEAB7FB11CD8530_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_nextSurfaceChangeUpdateTime(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_nextSurfaceChangeUpdateTime_m1E8290163671531F2322527637FFD40A8C686D01_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver__ctor_mBDC4FE3EC359DB3F2481186A400EB613B9C63E90 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceObserver(UnityEngine.XR.WSA.SurfaceObserver)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceObserver_m3D68912C7732A9AE43927DE861E7CBE4CAD284EF_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___value0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingContext UnityEngine.XR.WSA.SpatialMappingContext::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010_inline (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyCallback__ctor_m748638F8E573C4F92FF69F7AA787B814D0BF800B (SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetHighestPriorityCallback__ctor_mE530B9BA18B7BC04379A0A1AE8BA2C6F8FC7166D (GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SurfaceObserver UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceObserver()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * SpatialMappingBase_get_surfaceObserver_mCCFB2C005717E6F95DEF12840A43E6711CB1E168_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::RegisterComponent(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback,UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback,UnityEngine.XR.WSA.SurfaceObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_RegisterComponent_mB6B895662A1A2760CCC527BEEEB99D9FEBB88A75 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___smComponent0, SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * ___onDataReady1, GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * ___getHighestPri2, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___observer3, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::get_halfBoxExtents()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SpatialMappingBase_get_halfBoxExtents_m13BDC602E59A22A2237003FB8CB41180AFA2081F_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___size1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_bounds_m6680CBDDEE20D18FE05417E5BC0C0A3518D9149A_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::UpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_UpdatePosition_mC5CDE43922FFAFF7C48E93C29CC2E831F6BF349D (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface> UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceObjects()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::get_Count()
inline int32_t Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0 (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 *, const RuntimeMethod*))Dictionary_2_get_Count_m69345D9DEE55AA0CE574D19CB7C430AC638C01A9_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::GetEnumerator()
inline Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  (*) (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mE47C13FC1B2BACBEE6F795B0E40E6406CAC55D4B_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::get_Current()
inline KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_inline (Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  (*) (Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *, const RuntimeMethod*))Enumerator_get_Current_m73F8FC135A20BDFEA0846D8FC876863ED85FEA49_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::get_Value()
inline Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline (KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C * __this, const RuntimeMethod* method)
{
	return ((  Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * (*) (KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *, const RuntimeMethod*))KeyValuePair_2_get_Value_mAD6801F3BC9BA1E99D4E0F72B2B420182D0494FC_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_gameObject()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::MoveNext()
inline bool Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4 (Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *, const RuntimeMethod*))Enumerator_MoveNext_m637AE52AC4BDE5BEB1D89BE4B75E49B4C328EFC9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::Dispose()
inline void Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239 (Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *, const RuntimeMethod*))Enumerator_Dispose_m772E7049D8DA96AF5021EA09C3E6322CD4BFBDFC_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface> UnityEngine.XR.WSA.SpatialMappingBase::get_pendingSurfacesForEviction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mA201C27C8ACFA787EDB9DA5FB1A26163A37D2AB7_inline (KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *, const RuntimeMethod*))KeyValuePair_2_get_Key_m89B687D373FBE3D230647CA0C536235E12AD829C_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::DeregisterComponent(UnityEngine.XR.WSA.SpatialMappingBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_DeregisterComponent_m946C26760A35277770691E88358BF13ECC2BA3AB (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___smComponent0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::Clear()
inline void Dictionary_2_Clear_m2EFA534E708259D6E4AA3CF2833845ADAAD9B00F (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 *, const RuntimeMethod*))Dictionary_2_Clear_m0A844810F20B37C73BBE7E1B059856D5DAF18294_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceParentWasDynamicallyCreated()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_surfaceParentWasDynamicallyCreated_mA2AC29AF5CF48518EC986D1642152BD6D9C17A4D_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceParent()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * SpatialMappingBase_get_surfaceParent_m19EDABA4E196956D3D93D0E8F71582B62FBEB6AC_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceParent(UnityEngine.GameObject)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceParent_mDBEDC93A0DA8327F85E20DF9BF76B3B2DE2E1124_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Dispose_mA842C19181453E384E1BCE368468F8762CBB9B1E (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::get_lastUpdatedObserverPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SpatialMappingBase_get_lastUpdatedObserverPosition_mDA859EDB4C79D8D0E51EE5E1F5AB66C66A0FA88B_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_freezeUpdates()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_freezeUpdates_m6108C8C37BC85EF5B88507A4B58E46F1095A304B_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_nextSurfaceChangeUpdateTime()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SpatialMappingBase_get_nextSurfaceChangeUpdateTime_m1DEEC730D91508DD95E70D908219FB33B589767F_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceChangedDelegate__ctor_mC4E2CDAB64B92D5032E1AA39880F73F045D9B714 (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Update(UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Update_m08AD5357474ED266F8242C2CE6B42BCC9C131A29 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * ___onSurfaceChanged0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::ProcessEvictedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_ProcessEvictedObjects_m8111EA6BDDEEB01B7342541D3E5C4E2FFEE06A64 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_secondsBetweenUpdates()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SpatialMappingBase_get_secondsBetweenUpdates_mA328BF686F9D4CD47B69B94E0DDD9E2716C2A155_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::ComponentHasDataRequests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_ComponentHasDataRequests_mC2F6B6B3E7534483426C6D7DB5D1437B7E593FD2 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingBase/VolumeType UnityEngine.XR.WSA.SpatialMappingBase::get_volumeType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_volumeType_mDF6DCFE4058C803023B930E1252589CB247BF7CA_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_sphereRadius()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SpatialMappingBase_get_sphereRadius_mF468C293EDA401D9319570806FF7E5DC5992E3EF_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::SetVolumeAsSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_SetVolumeAsSphere_m8CC38FF7980EDDCC4D4B9FDB312DB622325BFD70 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, float ___radiusMeters1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::SetVolumeAsAxisAlignedBox(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_SetVolumeAsAxisAlignedBox_m26D27F3DBEC734594B04C75A37CE28017CB47340 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents1, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.XR.WSA.SpatialMappingBase::get_bounds()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  SpatialMappingBase_get_bounds_m555A8D615D0643F8FB75D086714A5A5D6AA371D2_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_center_mAD29DD80FD631F83AF4E7558BB27A0398E8FD841 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_extents_mC83719146B06D0575A160CDDE9997202A1192B35 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_lastUpdatedObserverPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_lastUpdatedObserverPosition_m23080210004403CB27DA5922818C45EB42C2B07A_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_bakePhysics()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_bakePhysics_m504EB487C5E39F33813DC330A605AEAB1EB97C53_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnAddOrUpdateSurface(UnityEngine.XR.WSA.SurfaceId,System.DateTime,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnAddOrUpdateSurface_mF3ACC1CCBF29F428A8D9C3DBC91DA91E8F5AA4BA (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___updateTime1, bool ___bakePhysics2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnRemoveSurface(UnityEngine.XR.WSA.SurfaceId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnRemoveSurface_mA1AD707BE5B320583A342E58DCF96C18AFAB9C26 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m003F8906908ABE5322D425FF4809E410005EF2A3 (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mBF5574232A8F79C279DFD71FFBFF85B4E2B6312D_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::get_Item(!0)
inline Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * Dictionary_2_get_Item_mEC1900B7D6A8954EF01D5D60518DC31A8153B8D3 (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * (*) (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mEFECE2769017AB70A9B1E7F5F8BBA59375620B54_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m820547B0F844E7BACDE88C8B2F54F771B436BA3B (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * __this, int32_t ___key0, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 *, int32_t, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D *, const RuntimeMethod*))Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::Remove(!0)
inline bool Dictionary_2_Remove_m7DB4CE76AE9D425BCC8C9FB931C61AD8B1BD4040 (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared)(__this, ___key0, method);
}
// UnityEngine.XR.WSA.SpatialMappingBase/Surface UnityEngine.XR.WSA.SpatialMappingBase::CreateSurface(UnityEngine.XR.WSA.SurfaceId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * SpatialMappingBase_CreateSurface_m4B108724636C35394AE9D686FCB8C39517C6671C (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_surfaceData(UnityEngine.XR.WSA.SurfaceData)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_surfaceData_mDD41633421D9F32C852EA8FDAF28BEBF1822C74E_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::Add(!0,!1)
inline void Dictionary_2_Add_m9D1B3160A0B79803FA708A4D25D911DF7D69DD4C (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * __this, int32_t ___key0, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 *, int32_t, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D *, const RuntimeMethod*))Dictionary_2_Add_mF7AEA0EFA07EEBC1A4B283A26A7CB720EE7A4C20_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.XR.WSA.SurfaceData UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_surfaceData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// System.Int32[] UnityEngine.XR.WSA.SpatialMappingBase::get_lodToPcm()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* SpatialMappingBase_get_lodToPcm_mEB766BA3CED483CF4B2E65D6B39272EE60B75850_inline (const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingBase/LODType UnityEngine.XR.WSA.SpatialMappingBase::get_lodType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_lodType_m4B32B9551C2BA8DD7F9C0D7B47AE6B3B98FAC40C_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_awaitingBake(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_awaitingBake_m1B9DEFB75F42C6C83BB7AA2F913C9D4DB8940D30_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_updateTime(System.DateTime)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_updateTime_m4FE3E6F2B68243A1E49F07099F78322E235F0D79_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface__ctor_m2D60C4A0D136E8206E4C5510A52BA283DA3C3EA5 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_surfaceId(UnityEngine.XR.WSA.SurfaceId)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_surfaceId_mACB290F49AF936B7DD34559F927D893F8196102F_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___value0, const RuntimeMethod* method);
// UnityEngine.MeshFilter UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_meshFilter()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::get_observerId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_observerId_mE41D9278DFE2B9E3D289314BA9EBF382B8831695_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceParentWasDynamicallyCreated(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceParentWasDynamicallyCreated_m529974EF9B8ED167AB546DC522B0766A9222ED76_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_surfaceId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  Surface_get_surfaceId_mAD37AE571E345D3B6850E57137292FE70E6F388B_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_gameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_gameObject_m732C6594B63AC0DDDC16087B90CE8D1CE2EA07EA_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_meshFilter(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_meshFilter_m2D5F16A114A2AE2934B48E4D3F0887C5D1D8EBB2_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GameObject_AddComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m98AEA1EDDC59492203D06FA2912152C37C4164E4 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_worldAnchor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * Surface_get_worldAnchor_mB462702EE57F8357BEA86C56EF2E35CC0BDB0669_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.XR.WSA.WorldAnchor>()
inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_worldAnchor(UnityEngine.XR.WSA.WorldAnchor)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_worldAnchor_m6645872D2DE4375082FC98688169FE07252ABD79_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.XR.WSA.WorldAnchor>()
inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase/Surface>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m7501EF97709D94AB3BF3F3D0584A35DC80739391 (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * __this, int32_t ___key0, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 *, int32_t, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D **, const RuntimeMethod*))Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::get_numUpdatesBeforeRemoval()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_numUpdatesBeforeRemoval_mA7614FDEC07341C3E1541990F5A0F8DA963FAF89_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::ShouldRemainActiveWhileBeingRemoved(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m12CBB39C4EF687E718B416B8421EE8E0CD976BE5 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_remainingUpdatesToLive(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_remainingUpdatesToLive_m30BFDFCEA11F0C8A9BB50DEA3E1C6AB2CE2E04BC_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.XR.WSA.SpatialMappingBase::get_selectedCamera()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * SpatialMappingBase_get_selectedCamera_mE3E4571F7EAF1DF70B6762BC57B6CBAFCB17E834_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::BoundsContains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_BoundsContains_mDD5A28A35DF1EDA76EA7EB858425EBB146ED1AA9 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Contains_mD0387F6A414484534BE1E50E0FC55EDE1E138319 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.WSA.SpatialMappingBase::get_surfacesToRemoveFromDict()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * SpatialMappingBase_get_surfacesToRemoveFromDict_m28DA1C6B57FE6F290402DBC00BEEC3C02BBEE81B_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_remainingUpdatesToLive()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Surface_get_remainingUpdatesToLive_m85C53020BBB0610944048533749F23B633699047_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_awaitingBake()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Surface_get_awaitingBake_m14C791851027BF9B12B9A391CF428EDE8B8B39BB_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// System.DateTime UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_updateTime()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Surface_get_updateTime_m580ACCD9FDFE2AFE4A982ED12B8B1FC47FACE842_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_LessThan_m75DE4F8CC5F5EE392829A9B37C5C98B7FC97061A (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___t10, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___t21, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase/Surface>::Invoke(!0)
inline void Action_1_Invoke_mEB4F9CFB24024E34F7207168F457D3EEB70ED7F2 (Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 *, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * ___array0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::ApplyPropertiesToCachedSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m10C3063BA564DF8C01DDA768D654DC62872F8270 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_bakePhysics(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_bakePhysics_m7E97A8623EE02B3210ADD227D15E497D37CEABF0_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::CloneBakedComponents(UnityEngine.XR.WSA.SurfaceData,UnityEngine.XR.WSA.SpatialMappingBase/Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_CloneBakedComponents_m23E578161C00C4D9E8F604B80A68CC60B6F58709 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData0, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___target1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.SpatialMappingCollider::get_layer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpatialMappingCollider_get_layer_mDF2504CC5A0B8C3FC502E115CA2FEB25FBC494D2_inline (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.PhysicMaterial UnityEngine.XR.WSA.SpatialMappingCollider::get_material()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * SpatialMappingCollider_get_material_mDE3ACB243D47BDF83842A25A2EAD67FA35AFBBC8_inline (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_material(UnityEngine.PhysicMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_material_m2978E803DF20381466E0BD1F41F759DA015C5E74 (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * ___value0, const RuntimeMethod* method);
// UnityEngine.MeshCollider UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_meshCollider()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::UpdateSurfaceData(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_UpdateSurfaceData_m7757CFA05BF25F432418E20A0B4C9F5E11D7D3D1 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::AddRequiredComponentsForBaking(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_AddRequiredComponentsForBaking_m721AD08F9692DDFF64E74E145AC6DB6CAD0EC16E (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshCollider>()
inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_meshCollider(UnityEngine.MeshCollider)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_meshCollider_m4CFF19BD0EB8827959FDA63A19626632B5E34A6D_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase/Surface>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m079D4F79176F6404ACFFE09E07BB9A146F7F4A0D (Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::ForEachSurfaceInCache(System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase/Surface>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_ForEachSurfaceInCache_m7ACD30FC885696A06491E7D260D6FDCAE1AA2DF5 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnResetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnResetProperties_mD96952885AFCEB731E9247E1627DF2460C525EE3 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase__ctor_m8E1FC8B9BD9C046C7D40907E7EC0DE4BB03FF0E0 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.PhysicMaterial UnityEngine.Collider::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * Collider_get_material_m4F6B81A3CD1B3B579579EF2DBA73CEF29072766A (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mED644D98C6AC2DF95BD86145E8D31AD7081C76EB (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingCollider::get_enableCollisions()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SpatialMappingCollider_get_enableCollisions_mDE052E1B90664CB4D2CDE84A7DD0B55EE33A557D_inline (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::.ctor()
inline void List_1__ctor_m809A7334C75F6B61B6B4A83C1D091865819572A8 (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *, const RuntimeMethod*))List_1__ctor_m809A7334C75F6B61B6B4A83C1D091865819572A8_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mB59BCFD6492BD0EF203EB3A9F0FF6DABF78E843F (U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Predicate`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mAE0572D02E462A85D05988B526C15C18B4A43304 (Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_mAE0572D02E462A85D05988B526C15C18B4A43304_gshared)(__this, ___object0, ___method1, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Find(System.Predicate`1<!0>)
inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  List_1_Find_mEBB03AE7A46CD2A87BC5F4586A3754A34D973A52 (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD * ___match0, const RuntimeMethod* method)
{
	return ((  SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  (*) (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *, Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD *, const RuntimeMethod*))List_1_Find_mEBB03AE7A46CD2A87BC5F4586A3754A34D973A52_gshared)(__this, ___match0, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Add(!0)
inline void List_1_Add_mFE4A7984825421BE1A7BD67AD5D60F8BB45F921E (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C , const RuntimeMethod*))List_1_Add_mFE4A7984825421BE1A7BD67AD5D60F8BB45F921E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m258CED13583C77AE211DD85B2C5D31C4B20F29D8 (U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::RemoveAll(System.Predicate`1<!0>)
inline int32_t List_1_RemoveAll_m424B6644A35D9EE627723C88FFDAD1860879836B (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD * ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *, Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD *, const RuntimeMethod*))List_1_RemoveAll_m424B6644A35D9EE627723C88FFDAD1860879836B_gshared)(__this, ___match0, method);
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingContext::GetInFlightIndexFromSD(UnityEngine.XR.WSA.SurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingContext_GetInFlightIndexFromSD_m46F8B14BD7A490D8FE2EE32FF7128B49EBE40F71 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___sd0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::PropagateDataReadyEventToComponents(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_PropagateDataReadyEventToComponents_m0C51EC7250815992662E5D6755E2EDB252FFFF47 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___sd0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, int32_t ___inFlightIndex3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::UpdateInFlightRecords(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_UpdateInFlightRecords_mA54F669BBA45A5CACB8A0037A8B743AD99AA0016 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, int32_t ___inFlightIndex0, float ___elapsedBakeTimeSeconds1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::RequestMeshPriorityFromComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_RequestMeshPriorityFromComponents_mFB4ADB8A02E9535EB7EDB918C8E20931F41668A7 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest::IsClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SMBakeRequest_IsClear_m53F4DB8A2856F46A2F7A5D02B01B77CC4F701E80 (SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingBase/LODType UnityEngine.XR.WSA.SpatialMappingBase::GetLODFromTPCM(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_GetLODFromTPCM_m402E6963AE9B46E0B9079A73D1730E665940F100 (double ___trianglesPerCubicMeter0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingBase UnityEngine.XR.WSA.SpatialMappingContext::GetSMComponentFromInFlightIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * SpatialMappingContext_GetSMComponentFromInFlightIndex_mA7E5A439E80A84D3D758C77225EF03782B5D5B0C (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, int32_t ___inFlightIndex0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::GetEnumerator()
inline Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406  List_1_GetEnumerator_m939FB5AF2C64F6D130A3B5E4CFABE1354497D537 (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406  (*) (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *, const RuntimeMethod*))List_1_GetEnumerator_m939FB5AF2C64F6D130A3B5E4CFABE1354497D537_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Current()
inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  Enumerator_get_Current_m0FE874F7E7972DC563007C0182FC43C9FFCEEB37_inline (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 * __this, const RuntimeMethod* method)
{
	return ((  SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  (*) (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 *, const RuntimeMethod*))Enumerator_get_Current_m0FE874F7E7972DC563007C0182FC43C9FFCEEB37_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback::Invoke(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyCallback_Invoke_mD66502272EEC1D19C35B80935FF03A6B74203B14 (SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___requester0, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData1, bool ___outputWritten2, float ___elapsedBakeTimeSeconds3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::MoveNext()
inline bool Enumerator_MoveNext_m31B0D57E103FDC4AB1C9F806E4A30988A7E4BFE5 (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 *, const RuntimeMethod*))Enumerator_MoveNext_m31B0D57E103FDC4AB1C9F806E4A30988A7E4BFE5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::Dispose()
inline void Enumerator_Dispose_m8FD886547CD472ECD1472BB2F59C64E7D3A8759A (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 *, const RuntimeMethod*))Enumerator_Dispose_m8FD886547CD472ECD1472BB2F59C64E7D3A8759A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMBakeRequest_Clear_m06B83E5E0425C162584388EDACD7B35036B20877 (SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Item(System.Int32)
inline SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  List_1_get_Item_m36FCDE89ACB30BF2EDAF254BB88F320BDC3B3AD1_inline (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  (*) (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *, int32_t, const RuntimeMethod*))List_1_get_Item_m36FCDE89ACB30BF2EDAF254BB88F320BDC3B3AD1_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback::Invoke(UnityEngine.XR.WSA.SurfaceData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GetHighestPriorityCallback_Invoke_m37515CB5805D3810F8777B1244EFB401A26939D3 (GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * ___dataRequest0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate__ctor_mB653644D30A5B829714DDEE56B57C2C01AE263E2 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SurfaceObserver::RequestMeshAsync(UnityEngine.XR.WSA.SurfaceData,UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceObserver_RequestMeshAsync_mF7815161E179CE34FBB9FC52127DAE4B39FEBE95 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___dataRequest0, SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * ___onDataReady1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mBD9EA372A02B0E0D2612A0E5404BB83EAA7521A4 (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_mBD9EA372A02B0E0D2612A0E5404BB83EAA7521A4_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord>::get_Count()
inline int32_t List_1_get_Count_m9B40973BA15B5CD9FCC23B9A8882D7E4BDF82D4E_inline (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *, const RuntimeMethod*))List_1_get_Count_m9B40973BA15B5CD9FCC23B9A8882D7E4BDF82D4E_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext__ctor_mDFB7FF1E0AA4CAB4BFF995B48F94AA88480239FA (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMComponentRecord_Clear_m16E7BF8A084693BD832C2FA516DA22B83922AE52 (SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord::IsClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SMComponentRecord_IsClear_m13D8CF67F23D1CD984F7B8E8BB371DCC1F128A6C (SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord::.ctor(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SpatialMappingBase/SurfaceDataReadyCallback,UnityEngine.XR.WSA.SpatialMappingContext/GetHighestPriorityCallback,UnityEngine.XR.WSA.SurfaceObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMComponentRecord__ctor_m9F5AE01ADB354FDCDB2365586B659BA3ED2A489C (SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___comp0, SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * ___onDataReady1, GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * ___getHighestPri2, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___observer3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::ApplyPropertiesToCachedSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_m4A1143EA5BD1F01EFD936CBE17BFD9F60E96D4E6 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method);
// UnityEngine.MeshRenderer UnityEngine.XR.WSA.SpatialMappingBase/Surface::get_meshRenderer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase/Surface::set_meshRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_meshRenderer_m0335D482C3F99120D303FE66F440E004BE430C59_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * GameObject_AddComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m16409C054F66125E0380BDDDB1454118A3BAD60E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_mD2BD2FF58156E328677EAE5E175D2069BC2925A0 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mC7E601EE9B32B63097B216C78ED4F854B0AF21EC (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::ApplyRenderSettings(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_ApplyRenderSettings_mBFC9F7F75BC0D932F1BF21C2248976D941502270 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___meshRenderer0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.SpatialMappingRenderer/RenderState UnityEngine.XR.WSA.SpatialMappingRenderer::get_renderState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpatialMappingRenderer_get_renderState_m1ECB7DED90F00AF9947CC552372FACC39692D84D_inline (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::get_occlusionMaterial()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * SpatialMappingRenderer_get_occlusionMaterial_m7F15BD9F8CEA72EA91A03FBE74B8DEA2E3ADB609_inline (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::get_visualMaterial()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * SpatialMappingRenderer_get_visualMaterial_mBFDEB3C06FA62BF6BA399F46B98FECC0E11F9AAC_inline (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_DestroySurface_m2E97118945643308BFDBD7AF3FE67E782A352232 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::set_occlusionMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_occlusionMaterial_m66E2E43D1C3A6B9A4BA2D46C477117D0D44113EB_inline (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::set_visualMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_visualMaterial_m37951EE6A85FF912FDC66F153E20DEED86FC2977_inline (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnDestroy_m6795E2E2E1983D0907A8AF4AB3DB2AC57A021FAF (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_Reset_mA301DEA773711EFFDEBB63062035968C9AF0BB1B (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Audio.AudioSpatializerMicrosoft_RoomSize UnityEngine.Audio.AudioSpatializerMicrosoft::get_roomSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSpatializerMicrosoft_get_roomSize_m4827F4A5B17D45A01A3552978A6D2D2809882379 (AudioSpatializerMicrosoft_tD51873DF8B2EC56C9DEBFAAB2F747AD8674ADC83 * __this, const RuntimeMethod* method)
{
	{
		// return m_RoomSize;
		int32_t L_0 = __this->get_m_RoomSize_4();
		return L_0;
	}
}
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::set_roomSize(UnityEngine.Audio.AudioSpatializerMicrosoft_RoomSize)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft_set_roomSize_m39B87AC5855C525895F2C9F34C5E02665B0B110F (AudioSpatializerMicrosoft_tD51873DF8B2EC56C9DEBFAAB2F747AD8674ADC83 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// m_RoomSize = value;
		int32_t L_0 = ___value0;
		__this->set_m_RoomSize_4(L_0);
		// SetSpatializerRoomSize();
		AudioSpatializerMicrosoft_SetSpatializerRoomSize_m054673384F170FB05E2BB8BA0E221D25DD34E9C6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft_Awake_m2C0318CC1F67D7C9EC98B89114DE836FF4C633D6 (AudioSpatializerMicrosoft_tD51873DF8B2EC56C9DEBFAAB2F747AD8674ADC83 * __this, const RuntimeMethod* method)
{
	{
		// SetSpatializerFloats();
		AudioSpatializerMicrosoft_SetSpatializerFloats_m8A03484BCA219BB5DE54141ECD70E957202686DC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft_OnValidate_m8D3C3F2CB9416AD8680A4A8C9F3CF1687DBA9F13 (AudioSpatializerMicrosoft_tD51873DF8B2EC56C9DEBFAAB2F747AD8674ADC83 * __this, const RuntimeMethod* method)
{
	{
		// SetSpatializerFloats();
		AudioSpatializerMicrosoft_SetSpatializerFloats_m8A03484BCA219BB5DE54141ECD70E957202686DC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::OnDidAnimateProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft_OnDidAnimateProperty_mEEDA2A494CD35EBFFC2A44745473F12176B4185D (AudioSpatializerMicrosoft_tD51873DF8B2EC56C9DEBFAAB2F747AD8674ADC83 * __this, const RuntimeMethod* method)
{
	{
		// SetSpatializerFloats();
		AudioSpatializerMicrosoft_SetSpatializerFloats_m8A03484BCA219BB5DE54141ECD70E957202686DC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::SetSpatializerFloats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft_SetSpatializerFloats_m8A03484BCA219BB5DE54141ECD70E957202686DC (AudioSpatializerMicrosoft_tD51873DF8B2EC56C9DEBFAAB2F747AD8674ADC83 * __this, const RuntimeMethod* method)
{
	{
		// SetSpatializerRoomSize();
		AudioSpatializerMicrosoft_SetSpatializerRoomSize_m054673384F170FB05E2BB8BA0E221D25DD34E9C6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.AudioSource UnityEngine.Audio.AudioSpatializerMicrosoft::get_audioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * AudioSpatializerMicrosoft_get_audioSource_m64394B367E4F22778216B603971AC6CB0666FE26 (AudioSpatializerMicrosoft_tD51873DF8B2EC56C9DEBFAAB2F747AD8674ADC83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioSpatializerMicrosoft_get_audioSource_m64394B367E4F22778216B603971AC6CB0666FE26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return GetComponent<AudioSource>(); }
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::SetSpatializerRoomSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft_SetSpatializerRoomSize_m054673384F170FB05E2BB8BA0E221D25DD34E9C6 (AudioSpatializerMicrosoft_tD51873DF8B2EC56C9DEBFAAB2F747AD8674ADC83 * __this, const RuntimeMethod* method)
{
	{
		// audioSource.SetSpatializerFloat(0, (float)m_RoomSize);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = AudioSpatializerMicrosoft_get_audioSource_m64394B367E4F22778216B603971AC6CB0666FE26(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_m_RoomSize_4();
		NullCheck(L_0);
		AudioSource_SetSpatializerFloat_mA34E8E88A05FF3682B00E1D29D80581AFED8098F(L_0, 0, (((float)((float)L_1))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Audio.AudioSpatializerMicrosoft::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSpatializerMicrosoft__ctor_m678EEE824471715B2735EA5BBDB29B6571D42901 (AudioSpatializerMicrosoft_tD51873DF8B2EC56C9DEBFAAB2F747AD8674ADC83 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.EventSystems.HoloLensInput::get_mousePresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HoloLensInput_get_mousePresent_m937AA5FA30DF5C3CE6A0E392AFEFE9ECCBD166FC (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method)
{
	{
		// get { return true; }
		return (bool)1;
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInput::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HoloLensInput_GetMouseButtonDown_m591388D4C5C5A24CF929B399E68430FB63DAB519 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, int32_t ___button0, const RuntimeMethod* method)
{
	{
		// return button == 0 && !m_IsEmulatedMouseDownPrev && m_IsEmulatedMouseDownCurr;
		int32_t L_0 = ___button0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1 = __this->get_m_IsEmulatedMouseDownPrev_5();
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		bool L_2 = __this->get_m_IsEmulatedMouseDownCurr_4();
		return L_2;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInput::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HoloLensInput_GetMouseButtonUp_m4E933F9980AC3AD118DE65A3FC37281621458F94 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, int32_t ___button0, const RuntimeMethod* method)
{
	{
		// return button == 0 && m_IsEmulatedMouseDownPrev && !m_IsEmulatedMouseDownCurr;
		int32_t L_0 = ___button0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1 = __this->get_m_IsEmulatedMouseDownPrev_5();
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = __this->get_m_IsEmulatedMouseDownCurr_4();
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInput::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HoloLensInput_GetMouseButton_m3554140D9910C9BB22CB99DA9843F049D11BDB5F (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, int32_t ___button0, const RuntimeMethod* method)
{
	{
		// return button == 0 && m_IsEmulatedMouseDownCurr;
		int32_t L_0 = ___button0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		bool L_1 = __this->get_m_IsEmulatedMouseDownCurr_4();
		return L_1;
	}

IL_000a:
	{
		return (bool)0;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  HoloLensInput_get_mousePosition_m5BBF2B8E53FFF5437FDA49DE51CB9E40B73388C4 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method)
{
	{
		// get { return GetGazeAndGestureScreenPosition(); }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = HoloLensInput_GetGazeAndGestureScreenPosition_m7DB2FDF3835B4EDD8C9B8D8FB11D73FB54CDEE2B(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  HoloLensInput_get_mouseScrollDelta_m7C418980EFFC028FF1C8287613CE80301EA245D6 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method)
{
	{
		// get { return GetGestureScrollDelta(); }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = HoloLensInput_GetGestureScrollDelta_m24FDE0BFC26D5173002FBABAD945914E206602B8(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInput::get_touchSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HoloLensInput_get_touchSupported_mC599371D0037E00B9C16BD218B2BDC704DA2D313 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method)
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Int32 UnityEngine.EventSystems.HoloLensInput::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HoloLensInput_get_touchCount_mC1D528FF4032B8861B551DB2E5E2B3076FEFB6F0 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method)
{
	{
		// get { return 0; }
		return 0;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInput_Awake_m9A2C1C1F3E4E0F98CFB9C921979144A06D4A8ACE (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput_Awake_m9A2C1C1F3E4E0F98CFB9C921979144A06D4A8ACE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		UIBehaviour_Awake_m8283CBD45FF1CBA026DFD5F0319282EA464F8B33(__this, /*hidden argument*/NULL);
		// m_Module = GetComponent<HoloLensInputModule>();
		HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * L_0 = Component_GetComponent_TisHoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB_m5EB41AF0200183B780E6DECD1274962F1367CF1D(__this, /*hidden argument*/Component_GetComponent_TisHoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB_m5EB41AF0200183B780E6DECD1274962F1367CF1D_RuntimeMethod_var);
		__this->set_m_Module_11(L_0);
		// m_GestureRecognizer = new GestureRecognizer();
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_1 = (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE *)il2cpp_codegen_object_new(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_il2cpp_TypeInfo_var);
		GestureRecognizer__ctor_m4EC0013B225C0189D0ACB2DC77092C809764F1D5(L_1, /*hidden argument*/NULL);
		__this->set_m_GestureRecognizer_12(L_1);
		// m_GestureRecognizer.Tapped += GestureHandler_OnTapped;
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_2 = __this->get_m_GestureRecognizer_12();
		Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * L_3 = (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 *)il2cpp_codegen_object_new(Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12_il2cpp_TypeInfo_var);
		Action_1__ctor_mC026C61EC637A1B6E38435AC1FE0F1FB6005542B(L_3, __this, (intptr_t)((intptr_t)HoloLensInput_GestureHandler_OnTapped_mF6E350D14305F2EFC008B81BB95BDC3F79FE1866_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC026C61EC637A1B6E38435AC1FE0F1FB6005542B_RuntimeMethod_var);
		NullCheck(L_2);
		GestureRecognizer_add_Tapped_mD5587B3F0115F9AC0599D555E2988E63136DA3EC(L_2, L_3, /*hidden argument*/NULL);
		// m_GestureRecognizer.NavigationStarted += GestureHandler_OnNavigationStarted;
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_4 = __this->get_m_GestureRecognizer_12();
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_5 = (Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E *)il2cpp_codegen_object_new(Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E_il2cpp_TypeInfo_var);
		Action_1__ctor_m02EF96D4C4CA30C2D0EC89E0CAB4DB4CF32B27E3(L_5, __this, (intptr_t)((intptr_t)HoloLensInput_GestureHandler_OnNavigationStarted_m010CF6447933A094FCBEBE6CEBFD0F733EC887D8_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m02EF96D4C4CA30C2D0EC89E0CAB4DB4CF32B27E3_RuntimeMethod_var);
		NullCheck(L_4);
		GestureRecognizer_add_NavigationStarted_mB4E1B0FCB384F37BD9A9309C7C5B0AFADFA3EB1C(L_4, L_5, /*hidden argument*/NULL);
		// m_GestureRecognizer.NavigationUpdated += GestureHandler_OnNavigationUpdated;
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_6 = __this->get_m_GestureRecognizer_12();
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_7 = (Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C *)il2cpp_codegen_object_new(Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C_il2cpp_TypeInfo_var);
		Action_1__ctor_mFBB740823BD38775A2EBE527D9DF619D40C6DC1B(L_7, __this, (intptr_t)((intptr_t)HoloLensInput_GestureHandler_OnNavigationUpdated_mA844EC15FAD77E33B63B0ACBA8B9685926D9C6D3_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFBB740823BD38775A2EBE527D9DF619D40C6DC1B_RuntimeMethod_var);
		NullCheck(L_6);
		GestureRecognizer_add_NavigationUpdated_mA509F2737D18188204C6E04154B1A1070F8E711C(L_6, L_7, /*hidden argument*/NULL);
		// m_GestureRecognizer.NavigationCompleted += GestureHandler_OnNavigationCompleted;
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_8 = __this->get_m_GestureRecognizer_12();
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_9 = (Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 *)il2cpp_codegen_object_new(Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1_il2cpp_TypeInfo_var);
		Action_1__ctor_mAA8EC518E1D8362D3621E54D13E2CCFB98BE9E57(L_9, __this, (intptr_t)((intptr_t)HoloLensInput_GestureHandler_OnNavigationCompleted_mF2E57F82BDCDBD7E71F31A9198426F3345DD988E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mAA8EC518E1D8362D3621E54D13E2CCFB98BE9E57_RuntimeMethod_var);
		NullCheck(L_8);
		GestureRecognizer_add_NavigationCompleted_mD39CFD50E1AD8B673AB866EA8EAB7E22F2DBDCB3(L_8, L_9, /*hidden argument*/NULL);
		// m_GestureRecognizer.NavigationCanceled += GestureHandler_OnNavigationCanceled;
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_10 = __this->get_m_GestureRecognizer_12();
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_11 = (Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B *)il2cpp_codegen_object_new(Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B_il2cpp_TypeInfo_var);
		Action_1__ctor_mBFD51E28F3B04BFE39041A85D13E2E5AE48CEBBA(L_11, __this, (intptr_t)((intptr_t)HoloLensInput_GestureHandler_OnNavigationCanceled_mC4D32E339431587861C61C73ED37B20E1193774D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mBFD51E28F3B04BFE39041A85D13E2E5AE48CEBBA_RuntimeMethod_var);
		NullCheck(L_10);
		GestureRecognizer_add_NavigationCanceled_m457599DCA92748E915C75C3D858C757D21C5FD4B(L_10, L_11, /*hidden argument*/NULL);
		// m_GestureRecognizer.SetRecognizableGestures(
		//     GestureSettings.Tap
		//     | GestureSettings.NavigationX
		//     | GestureSettings.NavigationY
		//     | GestureSettings.NavigationZ);
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_12 = __this->get_m_GestureRecognizer_12();
		NullCheck(L_12);
		GestureRecognizer_SetRecognizableGestures_mF459BAE914B9B2E01E7B1652ACF23C5C2722DA68(L_12, ((int32_t)113), /*hidden argument*/NULL);
		// m_GestureRecognizer.StartCapturingGestures();
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_13 = __this->get_m_GestureRecognizer_12();
		NullCheck(L_13);
		GestureRecognizer_StartCapturingGestures_mD02F289C8263C8EACB47B4593E55C8B767C524FA(L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInput_OnDestroy_mF77BEB5509911914EFBEC9A59EE44E26EA0AED71 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput_OnDestroy_mF77BEB5509911914EFBEC9A59EE44E26EA0AED71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_GestureRecognizer.StopCapturingGestures();
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_0 = __this->get_m_GestureRecognizer_12();
		NullCheck(L_0);
		GestureRecognizer_StopCapturingGestures_mBA5D5DFFC507CE972150A242E9DFC59B06121D61(L_0, /*hidden argument*/NULL);
		// m_GestureRecognizer.Tapped -= GestureHandler_OnTapped;
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_1 = __this->get_m_GestureRecognizer_12();
		Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * L_2 = (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 *)il2cpp_codegen_object_new(Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12_il2cpp_TypeInfo_var);
		Action_1__ctor_mC026C61EC637A1B6E38435AC1FE0F1FB6005542B(L_2, __this, (intptr_t)((intptr_t)HoloLensInput_GestureHandler_OnTapped_mF6E350D14305F2EFC008B81BB95BDC3F79FE1866_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC026C61EC637A1B6E38435AC1FE0F1FB6005542B_RuntimeMethod_var);
		NullCheck(L_1);
		GestureRecognizer_remove_Tapped_mB7FCD101CEEA7DF998931E64E4358F734A06F840(L_1, L_2, /*hidden argument*/NULL);
		// m_GestureRecognizer.NavigationStarted -= GestureHandler_OnNavigationStarted;
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_3 = __this->get_m_GestureRecognizer_12();
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_4 = (Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E *)il2cpp_codegen_object_new(Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E_il2cpp_TypeInfo_var);
		Action_1__ctor_m02EF96D4C4CA30C2D0EC89E0CAB4DB4CF32B27E3(L_4, __this, (intptr_t)((intptr_t)HoloLensInput_GestureHandler_OnNavigationStarted_m010CF6447933A094FCBEBE6CEBFD0F733EC887D8_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m02EF96D4C4CA30C2D0EC89E0CAB4DB4CF32B27E3_RuntimeMethod_var);
		NullCheck(L_3);
		GestureRecognizer_remove_NavigationStarted_m2456D056E789D6F4FC6BB8477658352C1550E8FF(L_3, L_4, /*hidden argument*/NULL);
		// m_GestureRecognizer.NavigationUpdated -= GestureHandler_OnNavigationUpdated;
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_5 = __this->get_m_GestureRecognizer_12();
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_6 = (Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C *)il2cpp_codegen_object_new(Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C_il2cpp_TypeInfo_var);
		Action_1__ctor_mFBB740823BD38775A2EBE527D9DF619D40C6DC1B(L_6, __this, (intptr_t)((intptr_t)HoloLensInput_GestureHandler_OnNavigationUpdated_mA844EC15FAD77E33B63B0ACBA8B9685926D9C6D3_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFBB740823BD38775A2EBE527D9DF619D40C6DC1B_RuntimeMethod_var);
		NullCheck(L_5);
		GestureRecognizer_remove_NavigationUpdated_m279E228CE0E46516F24A472998BC0F5B854EF4E8(L_5, L_6, /*hidden argument*/NULL);
		// m_GestureRecognizer.NavigationCompleted -= GestureHandler_OnNavigationCompleted;
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_7 = __this->get_m_GestureRecognizer_12();
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_8 = (Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 *)il2cpp_codegen_object_new(Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1_il2cpp_TypeInfo_var);
		Action_1__ctor_mAA8EC518E1D8362D3621E54D13E2CCFB98BE9E57(L_8, __this, (intptr_t)((intptr_t)HoloLensInput_GestureHandler_OnNavigationCompleted_mF2E57F82BDCDBD7E71F31A9198426F3345DD988E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mAA8EC518E1D8362D3621E54D13E2CCFB98BE9E57_RuntimeMethod_var);
		NullCheck(L_7);
		GestureRecognizer_remove_NavigationCompleted_m549BC4069ABD075D8077660FB94C32235306AA03(L_7, L_8, /*hidden argument*/NULL);
		// m_GestureRecognizer.NavigationCanceled -= GestureHandler_OnNavigationCanceled;
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_9 = __this->get_m_GestureRecognizer_12();
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_10 = (Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B *)il2cpp_codegen_object_new(Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B_il2cpp_TypeInfo_var);
		Action_1__ctor_mBFD51E28F3B04BFE39041A85D13E2E5AE48CEBBA(L_10, __this, (intptr_t)((intptr_t)HoloLensInput_GestureHandler_OnNavigationCanceled_mC4D32E339431587861C61C73ED37B20E1193774D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mBFD51E28F3B04BFE39041A85D13E2E5AE48CEBBA_RuntimeMethod_var);
		NullCheck(L_9);
		GestureRecognizer_remove_NavigationCanceled_m7F24255B9515ACE9F80A55864A9923D085ED5E32(L_9, L_10, /*hidden argument*/NULL);
		// base.OnDestroy();
		UIBehaviour_OnDestroy_m12CAEB3F5221B9D061148F6D8FBFD0FDD90636F0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::UpdateInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInput_UpdateInput_m4E9E7C14E2FC70F60E4016839BB7B33B0AFEE8F2 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method)
{
	{
		// if (MouseEmulationMode.Tap == m_MouseEmulationMode && m_LastTapTime + m_Module.timeToPressOnTap < Time.time)
		int32_t L_0 = __this->get_m_MouseEmulationMode_6();
		if ((!(((uint32_t)2) == ((uint32_t)L_0))))
		{
			goto IL_0029;
		}
	}
	{
		float L_1 = __this->get_m_LastTapTime_10();
		HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * L_2 = __this->get_m_Module_11();
		NullCheck(L_2);
		float L_3 = HoloLensInputModule_get_timeToPressOnTap_mBD2147FC62595E28208399F99E992E38EA380AE3_inline(L_2, /*hidden argument*/NULL);
		float L_4 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		if ((!(((float)((float)il2cpp_codegen_add((float)L_1, (float)L_3))) < ((float)L_4))))
		{
			goto IL_0029;
		}
	}
	{
		// m_MouseEmulationMode = MouseEmulationMode.Inactive;
		__this->set_m_MouseEmulationMode_6(0);
	}

IL_0029:
	{
		// m_IsEmulatedMouseDownPrev = m_IsEmulatedMouseDownCurr;
		bool L_5 = __this->get_m_IsEmulatedMouseDownCurr_4();
		__this->set_m_IsEmulatedMouseDownPrev_5(L_5);
		// m_IsEmulatedMouseDownCurr = m_MouseEmulationMode != MouseEmulationMode.Inactive;
		int32_t L_6 = __this->get_m_MouseEmulationMode_6();
		__this->set_m_IsEmulatedMouseDownCurr_4((bool)((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0));
		// }
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInput::AllowDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HoloLensInput_AllowDrag_m27C9650E864A5CBD9DFA9B8F64786C8EB04BF22D (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method)
{
	{
		// return m_MouseEmulationMode == MouseEmulationMode.Navigation;
		int32_t L_0 = __this->get_m_MouseEmulationMode_6();
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInput::TryGetAnchorWorldSpace(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HoloLensInput_TryGetAnchorWorldSpace_mC43BABC0CD0CDD380254DDAB705527B809EC3824 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput_TryGetAnchorWorldSpace_mC43BABC0CD0CDD380254DDAB705527B809EC3824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * V_1 = NULL;
	{
		// GameObject focus = m_Module.Internal_GetCurrentFocusedGameObject();
		HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * L_0 = __this->get_m_Module_11();
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = HoloLensInputModule_Internal_GetCurrentFocusedGameObject_mF8696D11EC99BA6CCAEEF50628ACF1D47D142DF8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (focus == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// anchor = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_4 = ___anchor0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_4 = L_5;
		// return false;
		return (bool)0;
	}

IL_0022:
	{
		// RectTransform rectTransform = focus.GetComponent<RectTransform>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck(L_6);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_7 = GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m2E5F02DDA13C176AF75B4E7C1DB801D89E053B2C(L_6, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m2E5F02DDA13C176AF75B4E7C1DB801D89E053B2C_RuntimeMethod_var);
		V_1 = L_7;
		// if (rectTransform == null)
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		// anchor = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_10 = ___anchor0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_10 = L_11;
		// return false;
		return (bool)0;
	}

IL_003f:
	{
		// return RectTransformUtility.ScreenPointToWorldPointInRectangle(rectTransform, GetGazeScreenPosition(), Camera.main, out anchor);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_12 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = HoloLensInput_GetGazeScreenPosition_m9073CFAB427427D2CF716229652E87F8DC58C231(/*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_14 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_15 = ___anchor0;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_il2cpp_TypeInfo_var);
		bool L_16 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m821FF925C5B70477F153B4C053AE9E36A04A774F(L_12, L_13, L_14, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::GestureHandler_OnTapped(UnityEngine.XR.WSA.Input.TappedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInput_GestureHandler_OnTapped_mF6E350D14305F2EFC008B81BB95BDC3F79FE1866 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6  ___eventArgs0, const RuntimeMethod* method)
{
	{
		// m_Module.Internal_GestureNotifier();
		HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * L_0 = __this->get_m_Module_11();
		NullCheck(L_0);
		HoloLensInputModule_Internal_GestureNotifier_m408B8E4F22843278F0C537E06F76B62857BCA53D(L_0, /*hidden argument*/NULL);
		// if (!TryGetAnchorWorldSpace(out m_TapAnchorWorldSpace))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_1 = __this->get_address_of_m_TapAnchorWorldSpace_9();
		bool L_2 = HoloLensInput_TryGetAnchorWorldSpace_mC43BABC0CD0CDD380254DDAB705527B809EC3824(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// m_MouseEmulationMode = MouseEmulationMode.Tap;
		__this->set_m_MouseEmulationMode_6(2);
		// m_LastTapTime = Time.time;
		float L_3 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_m_LastTapTime_10(L_3);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::GestureHandler_OnNavigationStarted(UnityEngine.XR.WSA.Input.NavigationStartedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInput_GestureHandler_OnNavigationStarted_m010CF6447933A094FCBEBE6CEBFD0F733EC887D8 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339  ___eventArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput_GestureHandler_OnNavigationStarted_m010CF6447933A094FCBEBE6CEBFD0F733EC887D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Module.Internal_GestureNotifier();
		HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * L_0 = __this->get_m_Module_11();
		NullCheck(L_0);
		HoloLensInputModule_Internal_GestureNotifier_m408B8E4F22843278F0C537E06F76B62857BCA53D(L_0, /*hidden argument*/NULL);
		// if (!TryGetAnchorWorldSpace(out m_NavigationAnchorWorldSpace))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_1 = __this->get_address_of_m_NavigationAnchorWorldSpace_8();
		bool L_2 = HoloLensInput_TryGetAnchorWorldSpace_mC43BABC0CD0CDD380254DDAB705527B809EC3824(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// m_MouseEmulationMode = MouseEmulationMode.Navigation;
		__this->set_m_MouseEmulationMode_6(1);
		// m_NavigationNormalizedOffset = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_m_NavigationNormalizedOffset_7(L_3);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::GestureHandler_OnNavigationUpdated(UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInput_GestureHandler_OnNavigationUpdated_mA844EC15FAD77E33B63B0ACBA8B9685926D9C6D3 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA  ___eventArgs0, const RuntimeMethod* method)
{
	{
		// m_Module.Internal_GestureNotifier();
		HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * L_0 = __this->get_m_Module_11();
		NullCheck(L_0);
		HoloLensInputModule_Internal_GestureNotifier_m408B8E4F22843278F0C537E06F76B62857BCA53D(L_0, /*hidden argument*/NULL);
		// m_NavigationNormalizedOffset = eventArgs.normalizedOffset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = NavigationUpdatedEventArgs_get_normalizedOffset_m63EFB136CBEC39D4BC004FC814B93FBA69760C02((NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA *)(&___eventArgs0), /*hidden argument*/NULL);
		__this->set_m_NavigationNormalizedOffset_7(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::GestureHandler_OnNavigationCompleted(UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInput_GestureHandler_OnNavigationCompleted_mF2E57F82BDCDBD7E71F31A9198426F3345DD988E (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39  ___eventArgs0, const RuntimeMethod* method)
{
	{
		// OnNavigationCompletedOrCanceled();
		HoloLensInput_OnNavigationCompletedOrCanceled_mFB8E51C82D8B34118931DB8B0D1348FB92D5E734(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::GestureHandler_OnNavigationCanceled(UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInput_GestureHandler_OnNavigationCanceled_mC4D32E339431587861C61C73ED37B20E1193774D (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760  ___eventArgs0, const RuntimeMethod* method)
{
	{
		// OnNavigationCompletedOrCanceled();
		HoloLensInput_OnNavigationCompletedOrCanceled_mFB8E51C82D8B34118931DB8B0D1348FB92D5E734(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::OnNavigationCompletedOrCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInput_OnNavigationCompletedOrCanceled_mFB8E51C82D8B34118931DB8B0D1348FB92D5E734 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput_OnNavigationCompletedOrCanceled_mFB8E51C82D8B34118931DB8B0D1348FB92D5E734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Module.Internal_GestureNotifier();
		HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * L_0 = __this->get_m_Module_11();
		NullCheck(L_0);
		HoloLensInputModule_Internal_GestureNotifier_m408B8E4F22843278F0C537E06F76B62857BCA53D(L_0, /*hidden argument*/NULL);
		// m_NavigationNormalizedOffset = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_m_NavigationNormalizedOffset_7(L_1);
		// m_MouseEmulationMode = MouseEmulationMode.Inactive;
		__this->set_m_MouseEmulationMode_6(0);
		// }
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::GetGazeScreenPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  HoloLensInput_GetGazeScreenPosition_m9073CFAB427427D2CF716229652E87F8DC58C231 (const RuntimeMethod* method)
{
	{
		// return new Vector2(0.5f * Screen.width, 0.5f * Screen.height);
		int32_t L_0 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_2), ((float)il2cpp_codegen_multiply((float)(0.5f), (float)(((float)((float)L_0))))), ((float)il2cpp_codegen_multiply((float)(0.5f), (float)(((float)((float)L_1))))), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::EmulateMousePosition(UnityEngine.Vector3,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  HoloLensInput_EmulateMousePosition_mCE630E4BC37BE3EC3ED5D9707C5540F0F36DAEFB (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___anchorWorldspace0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___finalOffset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput_EmulateMousePosition_mCE630E4BC37BE3EC3ED5D9707C5540F0F36DAEFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector2 anchorScreenSpace = Camera.main.WorldToScreenPoint(anchorWorldspace);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___anchorWorldspace0;
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_2, /*hidden argument*/NULL);
		// return anchorScreenSpace + finalOffset;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ___finalOffset1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::GetGazeAndGestureScreenPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  HoloLensInput_GetGazeAndGestureScreenPosition_m7DB2FDF3835B4EDD8C9B8D8FB11D73FB54CDEE2B (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput_GetGazeAndGestureScreenPosition_m7DB2FDF3835B4EDD8C9B8D8FB11D73FB54CDEE2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (m_MouseEmulationMode)
		int32_t L_0 = __this->get_m_MouseEmulationMode_6();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_005b;
	}

IL_0011:
	{
		// return EmulateMousePosition(m_NavigationAnchorWorldSpace, m_Module.normalizedNavigationToScreenOffsetScalar * new Vector2(m_NavigationNormalizedOffset.x, m_NavigationNormalizedOffset.y));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = __this->get_m_NavigationAnchorWorldSpace_8();
		HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * L_4 = __this->get_m_Module_11();
		NullCheck(L_4);
		float L_5 = HoloLensInputModule_get_normalizedNavigationToScreenOffsetScalar_m16CC0F67B1AFC354CB396C175319DE50A325CE88_inline(L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_6 = __this->get_address_of_m_NavigationNormalizedOffset_7();
		float L_7 = L_6->get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_8 = __this->get_address_of_m_NavigationNormalizedOffset_7();
		float L_9 = L_8->get_y_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_10), L_7, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = Vector2_op_Multiply_m2E30A54E315810911DFC2E25C700757A68AC1F38(L_5, L_10, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = HoloLensInput_EmulateMousePosition_mCE630E4BC37BE3EC3ED5D9707C5540F0F36DAEFB(__this, L_3, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0049:
	{
		// return EmulateMousePosition(m_TapAnchorWorldSpace, Vector2.zero);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = __this->get_m_TapAnchorWorldSpace_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = HoloLensInput_EmulateMousePosition_mCE630E4BC37BE3EC3ED5D9707C5540F0F36DAEFB(__this, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_005b:
	{
		// return GetGazeScreenPosition();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = HoloLensInput_GetGazeScreenPosition_m9073CFAB427427D2CF716229652E87F8DC58C231(/*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.HoloLensInput::GetGestureScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  HoloLensInput_GetGestureScrollDelta_m24FDE0BFC26D5173002FBABAD945914E206602B8 (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput_GetGestureScrollDelta_m24FDE0BFC26D5173002FBABAD945914E206602B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return MouseEmulationMode.Navigation == m_MouseEmulationMode
		//     ? new Vector2(0.0f, m_NavigationNormalizedOffset.z)
		//     : Vector2.zero;
		int32_t L_0 = __this->get_m_MouseEmulationMode_6();
		if ((((int32_t)1) == ((int32_t)L_0)))
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		return L_1;
	}

IL_000f:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_2 = __this->get_address_of_m_NavigationNormalizedOffset_7();
		float L_3 = L_2->get_z_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_4), (0.0f), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInput__ctor_m76546B0E7D04548F0F65B7388C5AE8896920B8AD (HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInput__ctor_m76546B0E7D04548F0F65B7388C5AE8896920B8AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 m_NavigationNormalizedOffset = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_m_NavigationNormalizedOffset_7(L_0);
		// private Vector3 m_NavigationAnchorWorldSpace = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_m_NavigationAnchorWorldSpace_8(L_1);
		// private Vector3 m_TapAnchorWorldSpace = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_m_TapAnchorWorldSpace_9(L_2);
		BaseInput__ctor_m33F85C42EA9300A022A8328A83D1CB9FCEC6F042(__this, /*hidden argument*/NULL);
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
// System.Single UnityEngine.EventSystems.HoloLensInputModule::get_normalizedNavigationToScreenOffsetScalar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HoloLensInputModule_get_normalizedNavigationToScreenOffsetScalar_m16CC0F67B1AFC354CB396C175319DE50A325CE88 (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method)
{
	{
		// get { return m_NormalizedNavigationToScreenOffsetScalar; }
		float L_0 = __this->get_m_NormalizedNavigationToScreenOffsetScalar_30();
		return L_0;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::set_normalizedNavigationToScreenOffsetScalar(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInputModule_set_normalizedNavigationToScreenOffsetScalar_m3A325A0335DCA104FB0A61533BCAE9CA61D18E38 (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_NormalizedNavigationToScreenOffsetScalar = value; }
		float L_0 = ___value0;
		__this->set_m_NormalizedNavigationToScreenOffsetScalar_30(L_0);
		// set { m_NormalizedNavigationToScreenOffsetScalar = value; }
		return;
	}
}
// System.Single UnityEngine.EventSystems.HoloLensInputModule::get_timeToPressOnTap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HoloLensInputModule_get_timeToPressOnTap_mBD2147FC62595E28208399F99E992E38EA380AE3 (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method)
{
	{
		// get { return m_TimeToPressOnTap; }
		float L_0 = __this->get_m_TimeToPressOnTap_31();
		return L_0;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::set_timeToPressOnTap(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInputModule_set_timeToPressOnTap_m2EB1BFB3DE6AFCFE7C3FC68D74C623FE8BBD0DD3 (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_TimeToPressOnTap = value; }
		float L_0 = ___value0;
		__this->set_m_TimeToPressOnTap_31(L_0);
		// set { m_TimeToPressOnTap = value; }
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInputModule__ctor_mDCBE08AEDF581CC5DC2FDBFC50A3AAB18D407624 (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method)
{
	{
		// private float m_NormalizedNavigationToScreenOffsetScalar = 500.0f;
		__this->set_m_NormalizedNavigationToScreenOffsetScalar_30((500.0f));
		// private float m_TimeToPressOnTap = 0.3f;
		__this->set_m_TimeToPressOnTap_31((0.3f));
		// protected HoloLensInputModule()
		StandaloneInputModule__ctor_m7ACED26CC5670B0729809379560FCBE0D0311AC8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInputModule_Awake_m0F3F4287588F776FA32DB9C18E43DFDA5AC5AB55 (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInputModule_Awake_m0F3F4287588F776FA32DB9C18E43DFDA5AC5AB55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		UIBehaviour_Awake_m8283CBD45FF1CBA026DFD5F0319282EA464F8B33(__this, /*hidden argument*/NULL);
		// m_HoloLensInput = GetComponent<HoloLensInput>();
		HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * L_0 = Component_GetComponent_TisHoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04_m698FB9682EE309CAAA265B29C21BF06A62F6C9B2(__this, /*hidden argument*/Component_GetComponent_TisHoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04_m698FB9682EE309CAAA265B29C21BF06A62F6C9B2_RuntimeMethod_var);
		__this->set_m_HoloLensInput_32(L_0);
		// if (!m_HoloLensInput)
		HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * L_1 = __this->get_m_HoloLensInput_32();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		// m_HoloLensInput = gameObject.AddComponent<HoloLensInput>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * L_4 = GameObject_AddComponent_TisHoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04_mF50CC95A955F7405B540971920DE4739BE47684B(L_3, /*hidden argument*/GameObject_AddComponent_TisHoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04_mF50CC95A955F7405B540971920DE4739BE47684B_RuntimeMethod_var);
		__this->set_m_HoloLensInput_32(L_4);
	}

IL_0030:
	{
		// m_InputOverride = m_HoloLensInput;
		HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * L_5 = __this->get_m_HoloLensInput_32();
		((BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 *)__this)->set_m_InputOverride_8(L_5);
		// }
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInputModule::IsModuleSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HoloLensInputModule_IsModuleSupported_m9EED47FC8FAE10024D678087637C4B6675C0A77B (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoloLensInputModule_IsModuleSupported_m9EED47FC8FAE10024D678087637C4B6675C0A77B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return base.IsModuleSupported() && string.Equals(UnityEngine.XR.XRSettings.loadedDeviceName, "WindowsMR");
		bool L_0 = StandaloneInputModule_IsModuleSupported_mB6AE0DFF7278B18B24FD5FC1D1ACE571D26FCABA(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = XRSettings_get_loadedDeviceName_m952D46346306FD9477B13992E5797A85CCD3C98C(/*hidden argument*/NULL);
		bool L_2 = String_Equals_m90EB651A751C3444BADBBD5401109CE05B3E1CFB(L_1, _stringLiteral0BA701B50A5948064432E087F10E47BBBB8F47F6, /*hidden argument*/NULL);
		return L_2;
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.EventSystems.HoloLensInputModule::ShouldActivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HoloLensInputModule_ShouldActivateModule_m506455D5957D26C74007B35234BA6F78276AA12D (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method)
{
	{
		// return forceModuleActive || m_HasGestureToProcess || !m_HasBeenActivated;
		bool L_0 = StandaloneInputModule_get_forceModuleActive_m6D41F04E01F96727E0246D6B74F63E0312E25022_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		bool L_1 = __this->get_m_HasGestureToProcess_34();
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		bool L_2 = __this->get_m_HasBeenActivated_33();
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::ActivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInputModule_ActivateModule_m765E7298C185A2C60D9E4F065BF437611149F634 (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method)
{
	{
		// m_HasBeenActivated = true;
		__this->set_m_HasBeenActivated_33((bool)1);
		// base.ActivateModule();
		StandaloneInputModule_ActivateModule_m4861DB0128B954D53E51FB5A6CC1524346F76A1E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::UpdateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInputModule_UpdateModule_mA60C330563E1F60CFC8C189CA1E39EB61CB46D60 (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method)
{
	{
		// m_HoloLensInput.UpdateInput();
		HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * L_0 = __this->get_m_HoloLensInput_32();
		NullCheck(L_0);
		HoloLensInput_UpdateInput_m4E9E7C14E2FC70F60E4016839BB7B33B0AFEE8F2(L_0, /*hidden argument*/NULL);
		// base.UpdateModule();
		StandaloneInputModule_UpdateModule_m0525AD093E45EFB1FE8484731A81C3E45222EFB9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInputModule_ProcessDrag_mDA8F17614A6F749223D04F8C2FD61276306122A5 (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___pointerEvent0, const RuntimeMethod* method)
{
	{
		// if (m_HoloLensInput.AllowDrag())
		HoloLensInput_t2642C1B91B5511A084B24C71E0B42BF97035FF04 * L_0 = __this->get_m_HoloLensInput_32();
		NullCheck(L_0);
		bool L_1 = HoloLensInput_AllowDrag_m27C9650E864A5CBD9DFA9B8F64786C8EB04BF22D(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// base.ProcessDrag(pointerEvent);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_2 = ___pointerEvent0;
		PointerInputModule_ProcessDrag_m1B953F6640DBD2E46508B18F4F281ED461DD1360(__this, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.HoloLensInputModule::Internal_GetCurrentFocusedGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HoloLensInputModule_Internal_GetCurrentFocusedGameObject_mF8696D11EC99BA6CCAEEF50628ACF1D47D142DF8 (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method)
{
	{
		// return GetCurrentFocusedGameObject();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = StandaloneInputModule_GetCurrentFocusedGameObject_mA354FCB4E2546E1F49D165207705A26D29EBB3D7_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::Internal_GestureNotifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInputModule_Internal_GestureNotifier_m408B8E4F22843278F0C537E06F76B62857BCA53D (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method)
{
	{
		// m_HasGestureToProcess = true;
		__this->set_m_HasGestureToProcess_34((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.HoloLensInputModule::HoloLensInput_GestureNotifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensInputModule_HoloLensInput_GestureNotifier_m1367FA9276096DF5A9F5E6611051EC5B9EC7D5C6 (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.HoloLensInputModule::HoloLensInput_GetEventSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * HoloLensInputModule_HoloLensInput_GetEventSystem_m91808F60323CDAE7DE8243F10985A1B2032AAEB0 (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method)
{
	{
		// return eventSystem;
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_0 = BaseInputModule_get_eventSystem_mEF6DEC17FF56D786AA217A52FCCFE8C6F38546BE_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.EventSystems.HoloLensInputModule::HoloLensInput_GetScreenOffsetScalar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HoloLensInputModule_HoloLensInput_GetScreenOffsetScalar_mD72E13678BF743399BA3BC918248383F75138420 (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method)
{
	{
		// return normalizedNavigationToScreenOffsetScalar;
		float L_0 = HoloLensInputModule_get_normalizedNavigationToScreenOffsetScalar_m16CC0F67B1AFC354CB396C175319DE50A325CE88_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.EventSystems.HoloLensInputModule::HoloLensInput_GetTimeToPressOnTap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HoloLensInputModule_HoloLensInput_GetTimeToPressOnTap_mDBCCCB9D752BA29684EFC9260955F2B9A1BCBC45 (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method)
{
	{
		// return timeToPressOnTap;
		float L_0 = HoloLensInputModule_get_timeToPressOnTap_mBD2147FC62595E28208399F99E992E38EA380AE3_inline(__this, /*hidden argument*/NULL);
		return L_0;
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
// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * SpatialMappingBase_get_surfaceParent_m19EDABA4E196956D3D93D0E8F71582B62FBEB6AC (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_SurfaceParent; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_m_SurfaceParent_7();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceParent(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceParent_mDBEDC93A0DA8327F85E20DF9BF76B3B2DE2E1124 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SurfaceParent = value; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_m_SurfaceParent_7(L_0);
		// set { m_SurfaceParent = value; }
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_freezeUpdates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_freezeUpdates_m6108C8C37BC85EF5B88507A4B58E46F1095A304B (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_FreezeUpdates; }
		bool L_0 = __this->get_m_FreezeUpdates_8();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_freezeUpdates(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_freezeUpdates_m6C250A769908A79E90FA5153F6E5C118BC040D3E (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_FreezeUpdates = value; }
		bool L_0 = ___value0;
		__this->set_m_FreezeUpdates_8(L_0);
		// set { m_FreezeUpdates = value; }
		return;
	}
}
// UnityEngine.XR.WSA.SpatialMappingBase_VolumeType UnityEngine.XR.WSA.SpatialMappingBase::get_volumeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_volumeType_mDF6DCFE4058C803023B930E1252589CB247BF7CA (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_VolumeType; }
		int32_t L_0 = __this->get_m_VolumeType_9();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_volumeType(UnityEngine.XR.WSA.SpatialMappingBase_VolumeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_volumeType_mB25E56749F2A8C0E88B370DC83599F75E8B72A12 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_VolumeType = value; }
		int32_t L_0 = ___value0;
		__this->set_m_VolumeType_9(L_0);
		// set { m_VolumeType = value; }
		return;
	}
}
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_sphereRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpatialMappingBase_get_sphereRadius_mF468C293EDA401D9319570806FF7E5DC5992E3EF (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_SphereRadius; }
		float L_0 = __this->get_m_SphereRadius_10();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_sphereRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_sphereRadius_mFF15EFF17B0BAAD19D04D550EF49A52A523F4ED0 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SphereRadius = value; }
		float L_0 = ___value0;
		__this->set_m_SphereRadius_10(L_0);
		// set { m_SphereRadius = value; }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::get_halfBoxExtents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SpatialMappingBase_get_halfBoxExtents_m13BDC602E59A22A2237003FB8CB41180AFA2081F (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_HalfBoxExtents; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_HalfBoxExtents_11();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_halfBoxExtents(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_halfBoxExtents_mFA8661F1EA0FF503FC8D85D5C57B859C0FA77CF1 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_HalfBoxExtents = value; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_m_HalfBoxExtents_11(L_0);
		// set { m_HalfBoxExtents = value; }
		return;
	}
}
// UnityEngine.XR.WSA.SpatialMappingBase_LODType UnityEngine.XR.WSA.SpatialMappingBase::get_lodType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_lodType_m4B32B9551C2BA8DD7F9C0D7B47AE6B3B98FAC40C (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_LodType; }
		int32_t L_0 = __this->get_m_LodType_12();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_lodType(UnityEngine.XR.WSA.SpatialMappingBase_LODType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_lodType_m300F75A90941EF8678271363E2C66C9F57EAF058 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_LodType = value; }
		int32_t L_0 = ___value0;
		__this->set_m_LodType_12(L_0);
		// set { m_LodType = value; }
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::get_numUpdatesBeforeRemoval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_numUpdatesBeforeRemoval_mA7614FDEC07341C3E1541990F5A0F8DA963FAF89 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_NumUpdatesBeforeRemoval; }
		int32_t L_0 = __this->get_m_NumUpdatesBeforeRemoval_13();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_numUpdatesBeforeRemoval(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_numUpdatesBeforeRemoval_m446DAAE243353EAC14670D3DA717E864B4057EC7 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_NumUpdatesBeforeRemoval = value; }
		int32_t L_0 = ___value0;
		__this->set_m_NumUpdatesBeforeRemoval_13(L_0);
		// set { m_NumUpdatesBeforeRemoval = value; }
		return;
	}
}
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_secondsBetweenUpdates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpatialMappingBase_get_secondsBetweenUpdates_mA328BF686F9D4CD47B69B94E0DDD9E2716C2A155 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_SecondsBetweenUpdates; }
		float L_0 = __this->get_m_SecondsBetweenUpdates_14();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_secondsBetweenUpdates(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_secondsBetweenUpdates_m77F0FF2D2229BB56DB93587C83EFEFA60CF03F85 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SecondsBetweenUpdates = value; }
		float L_0 = ___value0;
		__this->set_m_SecondsBetweenUpdates_14(L_0);
		// set { m_SecondsBetweenUpdates = value; }
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_bakePhysics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_bakePhysics_m504EB487C5E39F33813DC330A605AEAB1EB97C53 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// return m_BakePhysics;
		bool L_0 = __this->get_m_BakePhysics_15();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_bakePhysics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_bakePhysics_m7E97A8623EE02B3210ADD227D15E497D37CEABF0 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// m_BakePhysics = value;
		bool L_0 = ___value0;
		__this->set_m_BakePhysics_15(L_0);
		// }
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase::get_observerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_observerId_mE41D9278DFE2B9E3D289314BA9EBF382B8831695 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected int observerId { get; set; }
		int32_t L_0 = __this->get_U3CobserverIdU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_observerId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_observerId_mCFC284EC63E22158DB33B98BFF0054B7391623B6 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected int observerId { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CobserverIdU3Ek__BackingField_16(L_0);
		return;
	}
}
// UnityEngine.XR.WSA.SurfaceObserver UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceObserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * SpatialMappingBase_get_surfaceObserver_mCCFB2C005717E6F95DEF12840A43E6711CB1E168 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected SurfaceObserver surfaceObserver { get; set; }
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_0 = __this->get_U3CsurfaceObserverU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceObserver(UnityEngine.XR.WSA.SurfaceObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceObserver_m3D68912C7732A9AE43927DE861E7CBE4CAD284EF (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___value0, const RuntimeMethod* method)
{
	{
		// protected SurfaceObserver surfaceObserver { get; set; }
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_0 = ___value0;
		__this->set_U3CsurfaceObserverU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface> UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected Dictionary<int, Surface> surfaceObjects { get; set; }
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_0 = __this->get_U3CsurfaceObjectsU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceObjects(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceObjects_m6C2B943132FDD8EFD802E6E33840403E6F2E7FC4 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * ___value0, const RuntimeMethod* method)
{
	{
		// protected Dictionary<int, Surface> surfaceObjects { get; set; }
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_0 = ___value0;
		__this->set_U3CsurfaceObjectsU3Ek__BackingField_18(L_0);
		return;
	}
}
// UnityEngine.Bounds UnityEngine.XR.WSA.SpatialMappingBase::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  SpatialMappingBase_get_bounds_m555A8D615D0643F8FB75D086714A5A5D6AA371D2 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected Bounds bounds { get; set; }
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_0 = __this->get_U3CboundsU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_bounds_m6680CBDDEE20D18FE05417E5BC0C0A3518D9149A (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___value0, const RuntimeMethod* method)
{
	{
		// protected Bounds bounds { get; set; }
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_0 = ___value0;
		__this->set_U3CboundsU3Ek__BackingField_19(L_0);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.WSA.SpatialMappingBase::get_lastUpdatedObserverPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SpatialMappingBase_get_lastUpdatedObserverPosition_mDA859EDB4C79D8D0E51EE5E1F5AB66C66A0FA88B (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected Vector3 lastUpdatedObserverPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3ClastUpdatedObserverPositionU3Ek__BackingField_20();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_lastUpdatedObserverPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_lastUpdatedObserverPosition_m23080210004403CB27DA5922818C45EB42C2B07A (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// protected Vector3 lastUpdatedObserverPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3ClastUpdatedObserverPositionU3Ek__BackingField_20(L_0);
		return;
	}
}
// UnityEngine.Camera UnityEngine.XR.WSA.SpatialMappingBase::get_selectedCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * SpatialMappingBase_get_selectedCamera_mE3E4571F7EAF1DF70B6762BC57B6CBAFCB17E834 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected Camera selectedCamera { get; set; }
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_U3CselectedCameraU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_selectedCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_selectedCamera_m4EA8D7E1314E0127DE428CA4EDEAB7FB11CD8530 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___value0, const RuntimeMethod* method)
{
	{
		// protected Camera selectedCamera { get; set; }
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = ___value0;
		__this->set_U3CselectedCameraU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Single UnityEngine.XR.WSA.SpatialMappingBase::get_nextSurfaceChangeUpdateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpatialMappingBase_get_nextSurfaceChangeUpdateTime_m1DEEC730D91508DD95E70D908219FB33B589767F (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected float nextSurfaceChangeUpdateTime { get; set; }
		float L_0 = __this->get_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_nextSurfaceChangeUpdateTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_nextSurfaceChangeUpdateTime_m1E8290163671531F2322527637FFD40A8C686D01 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// protected float nextSurfaceChangeUpdateTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface> UnityEngine.XR.WSA.SpatialMappingBase::get_pendingSurfacesForEviction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// return m_PendingSurfacesForEviction;
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_0 = __this->get_m_PendingSurfacesForEviction_23();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_pendingSurfacesForEviction(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.XR.WSA.SpatialMappingBase_Surface>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_pendingSurfacesForEviction_mDCF385409D37A3981BF20A01400F785C97BDB0DC (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * ___value0, const RuntimeMethod* method)
{
	{
		// m_PendingSurfacesForEviction = value;
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_0 = ___value0;
		__this->set_m_PendingSurfacesForEviction_23(L_0);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.WSA.SpatialMappingBase::get_surfacesToRemoveFromDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * SpatialMappingBase_get_surfacesToRemoveFromDict_m28DA1C6B57FE6F290402DBC00BEEC3C02BBEE81B (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// return m_SurfacesToRemoveFromDict;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = __this->get_m_SurfacesToRemoveFromDict_24();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfacesToRemoveFromDict(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfacesToRemoveFromDict_m4ED849638D0F50C4A349E84EC1863F2A7A5CAD3B (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___value0, const RuntimeMethod* method)
{
	{
		// m_SurfacesToRemoveFromDict = value;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = ___value0;
		__this->set_m_SurfacesToRemoveFromDict_24(L_0);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::get_surfaceParentWasDynamicallyCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_surfaceParentWasDynamicallyCreated_mA2AC29AF5CF48518EC986D1642152BD6D9C17A4D (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// return m_SurfaceParentWasDynamicallyCreated;
		bool L_0 = __this->get_m_SurfaceParentWasDynamicallyCreated_25();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::set_surfaceParentWasDynamicallyCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceParentWasDynamicallyCreated_m529974EF9B8ED167AB546DC522B0766A9222ED76 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// m_SurfaceParentWasDynamicallyCreated = value;
		bool L_0 = ___value0;
		__this->set_m_SurfaceParentWasDynamicallyCreated_25(L_0);
		// }
		return;
	}
}
// System.Int32[] UnityEngine.XR.WSA.SpatialMappingBase::get_lodToPcm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* SpatialMappingBase_get_lodToPcm_mEB766BA3CED483CF4B2E65D6B39272EE60B75850 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_get_lodToPcm_mEB766BA3CED483CF4B2E65D6B39272EE60B75850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_LodToPcm;
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = ((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->get_s_LodToPcm_26();
		return L_0;
	}
}
// UnityEngine.XR.WSA.SpatialMappingBase_LODType UnityEngine.XR.WSA.SpatialMappingBase::GetLODFromTPCM(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_GetLODFromTPCM_m402E6963AE9B46E0B9079A73D1730E665940F100 (double ___trianglesPerCubicMeter0, const RuntimeMethod* method)
{
	{
		// if (trianglesPerCubicMeter >= 1999.0)
		double L_0 = ___trianglesPerCubicMeter0;
		if ((!(((double)L_0) >= ((double)(1999.0)))))
		{
			goto IL_000e;
		}
	}
	{
		// return LODType.High;
		return (int32_t)(0);
	}

IL_000e:
	{
		// else if (trianglesPerCubicMeter >= 749.0 && trianglesPerCubicMeter <= 751.0)
		double L_1 = ___trianglesPerCubicMeter0;
		if ((!(((double)L_1) >= ((double)(749.0)))))
		{
			goto IL_0028;
		}
	}
	{
		double L_2 = ___trianglesPerCubicMeter0;
		if ((!(((double)L_2) <= ((double)(751.0)))))
		{
			goto IL_0028;
		}
	}
	{
		// return LODType.Medium;
		return (int32_t)(1);
	}

IL_0028:
	{
		// return LODType.Low;
		return (int32_t)(2);
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_Awake_m7227B44E366EEAF309D607024F81332489378A22 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_Start_mB682428113AFB5D89F709FD23544840503AB7843 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_Start_mB682428113AFB5D89F709FD23544840503AB7843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// observerId = s_ObserverIdCounter++;
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->get_s_ObserverIdCounter_6();
		int32_t L_1 = L_0;
		((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->set_s_ObserverIdCounter_6(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		SpatialMappingBase_set_observerId_mCFC284EC63E22158DB33B98BFF0054B7391623B6_inline(__this, L_1, /*hidden argument*/NULL);
		// surfaceObjects = new Dictionary<int, Surface>();
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_2 = (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 *)il2cpp_codegen_object_new(Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mFC287CA51EC6CD9F9F0D7C063D5631D4050A60B0(L_2, /*hidden argument*/Dictionary_2__ctor_mFC287CA51EC6CD9F9F0D7C063D5631D4050A60B0_RuntimeMethod_var);
		SpatialMappingBase_set_surfaceObjects_m6C2B943132FDD8EFD802E6E33840403E6F2E7FC4_inline(__this, L_2, /*hidden argument*/NULL);
		// selectedCamera = Camera.main;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		SpatialMappingBase_set_selectedCamera_m4EA8D7E1314E0127DE428CA4EDEAB7FB11CD8530_inline(__this, L_3, /*hidden argument*/NULL);
		// nextSurfaceChangeUpdateTime = float.MinValue;
		SpatialMappingBase_set_nextSurfaceChangeUpdateTime_m1E8290163671531F2322527637FFD40A8C686D01_inline(__this, (-(std::numeric_limits<float>::max)()), /*hidden argument*/NULL);
		// surfaceObserver = new SurfaceObserver();
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_4 = (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 *)il2cpp_codegen_object_new(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_il2cpp_TypeInfo_var);
		SurfaceObserver__ctor_mBDC4FE3EC359DB3F2481186A400EB613B9C63E90(L_4, /*hidden argument*/NULL);
		SpatialMappingBase_set_surfaceObserver_m3D68912C7732A9AE43927DE861E7CBE4CAD284EF_inline(__this, L_4, /*hidden argument*/NULL);
		// SpatialMappingContext.Instance.RegisterComponent(this, OnSurfaceDataReady, TryGetHighestPriorityRequest, surfaceObserver);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var);
		SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * L_5 = SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010_inline(/*hidden argument*/NULL);
		SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * L_6 = (SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 *)il2cpp_codegen_object_new(SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592_il2cpp_TypeInfo_var);
		SurfaceDataReadyCallback__ctor_m748638F8E573C4F92FF69F7AA787B814D0BF800B(L_6, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 12)), /*hidden argument*/NULL);
		GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * L_7 = (GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 *)il2cpp_codegen_object_new(GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6_il2cpp_TypeInfo_var);
		GetHighestPriorityCallback__ctor_mE530B9BA18B7BC04379A0A1AE8BA2C6F8FC7166D(L_7, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 14)), /*hidden argument*/NULL);
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_8 = SpatialMappingBase_get_surfaceObserver_mCCFB2C005717E6F95DEF12840A43E6711CB1E168_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		SpatialMappingContext_RegisterComponent_mB6B895662A1A2760CCC527BEEEB99D9FEBB88A75(L_5, __this, L_6, L_7, L_8, /*hidden argument*/NULL);
		// bounds = new Bounds(this.transform.position, halfBoxExtents);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = SpatialMappingBase_get_halfBoxExtents_m13BDC602E59A22A2237003FB8CB41180AFA2081F_inline(__this, /*hidden argument*/NULL);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D((&L_12), L_10, L_11, /*hidden argument*/NULL);
		SpatialMappingBase_set_bounds_m6680CBDDEE20D18FE05417E5BC0C0A3518D9149A_inline(__this, L_12, /*hidden argument*/NULL);
		// UpdatePosition();
		SpatialMappingBase_UpdatePosition_mC5CDE43922FFAFF7C48E93C29CC2E831F6BF349D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnEnable_mA21952A9131ADC57C76E2777293DAC4E4474CF8E (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_OnEnable_mA21952A9131ADC57C76E2777293DAC4E4474CF8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (surfaceObjects != null && surfaceObjects.Count > 0)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_0 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_1 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0(L_1, /*hidden argument*/Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_006b;
		}
	}
	{
		// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_3 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  L_4 = Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_0024:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  L_5 = Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_inline((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_RuntimeMethod_var);
			V_1 = L_5;
			// if (kvp.Value.gameObject != null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_6 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_6);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0052;
			}
		}

IL_0040:
		{
			// kvp.Value.gameObject.SetActive(true);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_9 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_9);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_10, (bool)1, /*hidden argument*/NULL);
		}

IL_0052:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			bool L_11 = Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0024;
			}
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x6B, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239_RuntimeMethod_var);
		IL2CPP_END_FINALLY(93)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006b:
	{
		// if (pendingSurfacesForEviction != null && pendingSurfacesForEviction.Count > 0)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_12 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00f6;
		}
	}
	{
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_13 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0(L_13, /*hidden argument*/Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_00f6;
		}
	}
	{
		// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_15 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  L_16 = Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC(L_15, /*hidden argument*/Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC_RuntimeMethod_var);
		V_0 = L_16;
	}

IL_0090:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00dd;
		}

IL_0092:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  L_17 = Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_inline((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_RuntimeMethod_var);
			V_2 = L_17;
			// if (kvp.Value.gameObject == null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_18 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_18);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_18, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_20 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_19, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00cb;
			}
		}

IL_00ae:
		{
			// Debug.LogWarning(string.Format("Can not activate the surface id \"{0}\" because its GameObject is null.", kvp.Key));
			int32_t L_21 = KeyValuePair_2_get_Key_mA201C27C8ACFA787EDB9DA5FB1A26163A37D2AB7_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mA201C27C8ACFA787EDB9DA5FB1A26163A37D2AB7_RuntimeMethod_var);
			int32_t L_22 = L_21;
			RuntimeObject * L_23 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_22);
			String_t* L_24 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral31CF5C222B7921A07D0A9EF275277FC32788832F, L_23, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_24, /*hidden argument*/NULL);
			// continue;
			goto IL_00dd;
		}

IL_00cb:
		{
			// kvp.Value.gameObject.SetActive(true);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_25 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_25);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_25, /*hidden argument*/NULL);
			NullCheck(L_26);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_26, (bool)1, /*hidden argument*/NULL);
		}

IL_00dd:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			bool L_27 = Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_0092;
			}
		}

IL_00e6:
		{
			IL2CPP_LEAVE(0xF6, FINALLY_00e8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e8;
	}

FINALLY_00e8:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239_RuntimeMethod_var);
		IL2CPP_END_FINALLY(232)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(232)
	{
		IL2CPP_JUMP_TBL(0xF6, IL_00f6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f6:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnDisable_mCAF7726E99ACE6892E94F6915D932D4BF1605563 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_OnDisable_mCAF7726E99ACE6892E94F6915D932D4BF1605563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (surfaceObjects != null && surfaceObjects.Count > 0)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_0 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_1 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0(L_1, /*hidden argument*/Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_006b;
		}
	}
	{
		// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_3 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  L_4 = Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_0024:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  L_5 = Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_inline((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_RuntimeMethod_var);
			V_1 = L_5;
			// if (kvp.Value.gameObject != null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_6 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_6);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0052;
			}
		}

IL_0040:
		{
			// kvp.Value.gameObject.SetActive(false);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_9 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_9);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_10, (bool)0, /*hidden argument*/NULL);
		}

IL_0052:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			bool L_11 = Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0024;
			}
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x6B, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239_RuntimeMethod_var);
		IL2CPP_END_FINALLY(93)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006b:
	{
		// if (pendingSurfacesForEviction != null && pendingSurfacesForEviction.Count > 0)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_12 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00d6;
		}
	}
	{
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_13 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0(L_13, /*hidden argument*/Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_00d6;
		}
	}
	{
		// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_15 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  L_16 = Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC(L_15, /*hidden argument*/Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC_RuntimeMethod_var);
		V_0 = L_16;
	}

IL_008d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bd;
		}

IL_008f:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  L_17 = Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_inline((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_RuntimeMethod_var);
			V_2 = L_17;
			// if (kvp.Value.gameObject == null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_18 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_18);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_18, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_20 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_19, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (L_20)
			{
				goto IL_00bd;
			}
		}

IL_00ab:
		{
			// kvp.Value.gameObject.SetActive(false);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_21 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_21);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_21, /*hidden argument*/NULL);
			NullCheck(L_22);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_22, (bool)0, /*hidden argument*/NULL);
		}

IL_00bd:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			bool L_23 = Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_008f;
			}
		}

IL_00c6:
		{
			IL2CPP_LEAVE(0xD6, FINALLY_00c8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c8;
	}

FINALLY_00c8:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239_RuntimeMethod_var);
		IL2CPP_END_FINALLY(200)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(200)
	{
		IL2CPP_JUMP_TBL(0xD6, IL_00d6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d6:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnDestroy_m6795E2E2E1983D0907A8AF4AB3DB2AC57A021FAF (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_OnDestroy_m6795E2E2E1983D0907A8AF4AB3DB2AC57A021FAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// SpatialMappingContext.Instance.DeregisterComponent(this);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var);
		SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * L_0 = SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		SpatialMappingContext_DeregisterComponent_m946C26760A35277770691E88358BF13ECC2BA3AB(L_0, __this, /*hidden argument*/NULL);
		// if (surfaceObjects != null && surfaceObjects.Count > 0)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_1 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_2 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0(L_2, /*hidden argument*/Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_4 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  L_5 = Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC(L_4, /*hidden argument*/Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_002f:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  L_6 = Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_inline((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_RuntimeMethod_var);
			V_1 = L_6;
			// DestroySurface(kvp.Value);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_7 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			VirtActionInvoker1< Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * >::Invoke(13 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_7);
		}

IL_0044:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			bool L_8 = Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_002f;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239_RuntimeMethod_var);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005d:
	{
		// surfaceObjects.Clear();
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_9 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Dictionary_2_Clear_m2EFA534E708259D6E4AA3CF2833845ADAAD9B00F(L_9, /*hidden argument*/Dictionary_2_Clear_m2EFA534E708259D6E4AA3CF2833845ADAAD9B00F_RuntimeMethod_var);
	}

IL_0068:
	{
		// if (pendingSurfacesForEviction != null && pendingSurfacesForEviction.Count > 0)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_10 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00d9;
		}
	}
	{
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_11 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0(L_11, /*hidden argument*/Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0_RuntimeMethod_var);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_00d9;
		}
	}
	{
		// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_13 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  L_14 = Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC(L_13, /*hidden argument*/Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC_RuntimeMethod_var);
		V_0 = L_14;
	}

IL_008a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b5;
		}

IL_008c:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  L_15 = Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_inline((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_RuntimeMethod_var);
			V_2 = L_15;
			// if (kvp.Value.gameObject == null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_16 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_16);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_16, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_18 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_17, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (L_18)
			{
				goto IL_00b5;
			}
		}

IL_00a8:
		{
			// DestroySurface(kvp.Value);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_19 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			VirtActionInvoker1< Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * >::Invoke(13 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_19);
		}

IL_00b5:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			bool L_20 = Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_008c;
			}
		}

IL_00be:
		{
			IL2CPP_LEAVE(0xCE, FINALLY_00c0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c0;
	}

FINALLY_00c0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239_RuntimeMethod_var);
		IL2CPP_END_FINALLY(192)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(192)
	{
		IL2CPP_JUMP_TBL(0xCE, IL_00ce)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ce:
	{
		// pendingSurfacesForEviction.Clear();
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_21 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Dictionary_2_Clear_m2EFA534E708259D6E4AA3CF2833845ADAAD9B00F(L_21, /*hidden argument*/Dictionary_2_Clear_m2EFA534E708259D6E4AA3CF2833845ADAAD9B00F_RuntimeMethod_var);
	}

IL_00d9:
	{
		// if (surfaceParentWasDynamicallyCreated)
		bool L_22 = SpatialMappingBase_get_surfaceParentWasDynamicallyCreated_mA2AC29AF5CF48518EC986D1642152BD6D9C17A4D_inline(__this, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00f3;
		}
	}
	{
		// Destroy(surfaceParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = SpatialMappingBase_get_surfaceParent_m19EDABA4E196956D3D93D0E8F71582B62FBEB6AC_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_23, /*hidden argument*/NULL);
		// surfaceParent = null;
		SpatialMappingBase_set_surfaceParent_mDBEDC93A0DA8327F85E20DF9BF76B3B2DE2E1124_inline(__this, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		// surfaceObserver.Dispose();
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_24 = SpatialMappingBase_get_surfaceObserver_mCCFB2C005717E6F95DEF12840A43E6711CB1E168_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		SurfaceObserver_Dispose_mA842C19181453E384E1BCE368468F8762CBB9B1E(L_24, /*hidden argument*/NULL);
		// surfaceObserver = null;
		SpatialMappingBase_set_surfaceObserver_m3D68912C7732A9AE43927DE861E7CBE4CAD284EF_inline(__this, (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_Update_mE8C5D3F655A285F0E3522A3640170EB942DE4629 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_Update_mE8C5D3F655A285F0E3522A3640170EB942DE4629_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Vector3.SqrMagnitude(lastUpdatedObserverPosition - this.transform.position) > s_MovementUpdateThresholdSqr)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = SpatialMappingBase_get_lastUpdatedObserverPosition_mDA859EDB4C79D8D0E51EE5E1F5AB66C66A0FA88B_inline(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_2, /*hidden argument*/NULL);
		float L_4 = Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		float L_5 = ((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->get_s_MovementUpdateThresholdSqr_4();
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0028;
		}
	}
	{
		// UpdatePosition();
		SpatialMappingBase_UpdatePosition_mC5CDE43922FFAFF7C48E93C29CC2E831F6BF349D(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// if (!freezeUpdates)
		bool L_6 = SpatialMappingBase_get_freezeUpdates_m6108C8C37BC85EF5B88507A4B58E46F1095A304B_inline(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0076;
		}
	}
	{
		// if (Time.time >= nextSurfaceChangeUpdateTime)
		float L_7 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_8 = SpatialMappingBase_get_nextSurfaceChangeUpdateTime_m1DEEC730D91508DD95E70D908219FB33B589767F_inline(__this, /*hidden argument*/NULL);
		if ((!(((float)L_7) >= ((float)L_8))))
		{
			goto IL_0076;
		}
	}
	{
		// surfaceObserver.Update(OnSurfaceChanged);
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_9 = SpatialMappingBase_get_surfaceObserver_mCCFB2C005717E6F95DEF12840A43E6711CB1E168_inline(__this, /*hidden argument*/NULL);
		SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * L_10 = (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 *)il2cpp_codegen_object_new(SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1_il2cpp_TypeInfo_var);
		SurfaceChangedDelegate__ctor_mC4E2CDAB64B92D5032E1AA39880F73F045D9B714(L_10, __this, (intptr_t)((intptr_t)SpatialMappingBase_OnSurfaceChanged_m034C64808C3FCFF726180B2FDA1360DC5C95AD56_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		SurfaceObserver_Update_m08AD5357474ED266F8242C2CE6B42BCC9C131A29(L_9, L_10, /*hidden argument*/NULL);
		// ProcessEvictedObjects();
		SpatialMappingBase_ProcessEvictedObjects_m8111EA6BDDEEB01B7342541D3E5C4E2FFEE06A64(__this, /*hidden argument*/NULL);
		// nextSurfaceChangeUpdateTime = Time.time + secondsBetweenUpdates;
		float L_11 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_12 = SpatialMappingBase_get_secondsBetweenUpdates_mA328BF686F9D4CD47B69B94E0DDD9E2716C2A155_inline(__this, /*hidden argument*/NULL);
		SpatialMappingBase_set_nextSurfaceChangeUpdateTime_m1E8290163671531F2322527637FFD40A8C686D01_inline(__this, ((float)il2cpp_codegen_add((float)L_11, (float)L_12)), /*hidden argument*/NULL);
		// SpatialMappingContext.Instance.ComponentHasDataRequests();
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var);
		SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * L_13 = SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010_inline(/*hidden argument*/NULL);
		NullCheck(L_13);
		SpatialMappingContext_ComponentHasDataRequests_mC2F6B6B3E7534483426C6D7DB5D1437B7E593FD2(L_13, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::UpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_UpdatePosition_mC5CDE43922FFAFF7C48E93C29CC2E831F6BF349D (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (volumeType == VolumeType.Sphere)
		int32_t L_0 = SpatialMappingBase_get_volumeType_mDF6DCFE4058C803023B930E1252589CB247BF7CA_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// surfaceObserver.SetVolumeAsSphere(this.transform.position, sphereRadius);
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_1 = SpatialMappingBase_get_surfaceObserver_mCCFB2C005717E6F95DEF12840A43E6711CB1E168_inline(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		float L_4 = SpatialMappingBase_get_sphereRadius_mF468C293EDA401D9319570806FF7E5DC5992E3EF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		SurfaceObserver_SetVolumeAsSphere_m8CC38FF7980EDDCC4D4B9FDB312DB622325BFD70(L_1, L_3, L_4, /*hidden argument*/NULL);
		// }
		goto IL_0078;
	}

IL_0026:
	{
		// else if (volumeType == VolumeType.AxisAlignedBox)
		int32_t L_5 = SpatialMappingBase_get_volumeType_mDF6DCFE4058C803023B930E1252589CB247BF7CA_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0078;
		}
	}
	{
		// surfaceObserver.SetVolumeAsAxisAlignedBox(this.transform.position, halfBoxExtents);
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_6 = SpatialMappingBase_get_surfaceObserver_mCCFB2C005717E6F95DEF12840A43E6711CB1E168_inline(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = SpatialMappingBase_get_halfBoxExtents_m13BDC602E59A22A2237003FB8CB41180AFA2081F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		SurfaceObserver_SetVolumeAsAxisAlignedBox_m26D27F3DBEC734594B04C75A37CE28017CB47340(L_6, L_8, L_9, /*hidden argument*/NULL);
		// Bounds tempBounds = bounds;
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_10 = SpatialMappingBase_get_bounds_m555A8D615D0643F8FB75D086714A5A5D6AA371D2_inline(__this, /*hidden argument*/NULL);
		V_0 = L_10;
		// tempBounds.center = this.transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		Bounds_set_center_mAD29DD80FD631F83AF4E7558BB27A0398E8FD841((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), L_12, /*hidden argument*/NULL);
		// tempBounds.extents = halfBoxExtents;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = SpatialMappingBase_get_halfBoxExtents_m13BDC602E59A22A2237003FB8CB41180AFA2081F_inline(__this, /*hidden argument*/NULL);
		Bounds_set_extents_mC83719146B06D0575A160CDDE9997202A1192B35((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), L_13, /*hidden argument*/NULL);
		// bounds = tempBounds;
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_14 = V_0;
		SpatialMappingBase_set_bounds_m6680CBDDEE20D18FE05417E5BC0C0A3518D9149A_inline(__this, L_14, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// lastUpdatedObserverPosition = this.transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		SpatialMappingBase_set_lastUpdatedObserverPosition_m23080210004403CB27DA5922818C45EB42C2B07A_inline(__this, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnSurfaceChanged(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnSurfaceChanged_m034C64808C3FCFF726180B2FDA1360DC5C95AD56 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, int32_t ___changeType1, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___updateTime3, const RuntimeMethod* method)
{
	{
		// switch (changeType)
		int32_t L_0 = ___changeType1;
		if ((!(((uint32_t)L_0) > ((uint32_t)1))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___changeType1;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0009:
	{
		// OnAddOrUpdateSurface(surfaceId, updateTime, bakePhysics);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_2 = ___surfaceId0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = ___updateTime3;
		bool L_4 = SpatialMappingBase_get_bakePhysics_m504EB487C5E39F33813DC330A605AEAB1EB97C53_inline(__this, /*hidden argument*/NULL);
		SpatialMappingBase_OnAddOrUpdateSurface_mF3ACC1CCBF29F428A8D9C3DBC91DA91E8F5AA4BA(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0019:
	{
		// OnRemoveSurface(surfaceId);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_5 = ___surfaceId0;
		SpatialMappingBase_OnRemoveSurface_mA1AD707BE5B320583A342E58DCF96C18AFAB9C26(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnAddOrUpdateSurface(UnityEngine.XR.WSA.SurfaceId,System.DateTime,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnAddOrUpdateSurface_mF3ACC1CCBF29F428A8D9C3DBC91DA91E8F5AA4BA (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___updateTime1, bool ___bakePhysics2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_OnAddOrUpdateSurface_mF3ACC1CCBF29F428A8D9C3DBC91DA91E8F5AA4BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * V_0 = NULL;
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Surface surface = null;
		V_0 = (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D *)NULL;
		// if (pendingSurfacesForEviction.ContainsKey(surfaceId.handle))
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_0 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_1 = ___surfaceId0;
		int32_t L_2 = L_1.get_handle_0();
		NullCheck(L_0);
		bool L_3 = Dictionary_2_ContainsKey_m003F8906908ABE5322D425FF4809E410005EF2A3(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m003F8906908ABE5322D425FF4809E410005EF2A3_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		// surfaceObjects[surfaceId.handle] = pendingSurfacesForEviction[surfaceId.handle];
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_4 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_5 = ___surfaceId0;
		int32_t L_6 = L_5.get_handle_0();
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_7 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_8 = ___surfaceId0;
		int32_t L_9 = L_8.get_handle_0();
		NullCheck(L_7);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_10 = Dictionary_2_get_Item_mEC1900B7D6A8954EF01D5D60518DC31A8153B8D3(L_7, L_9, /*hidden argument*/Dictionary_2_get_Item_mEC1900B7D6A8954EF01D5D60518DC31A8153B8D3_RuntimeMethod_var);
		NullCheck(L_4);
		Dictionary_2_set_Item_m820547B0F844E7BACDE88C8B2F54F771B436BA3B(L_4, L_6, L_10, /*hidden argument*/Dictionary_2_set_Item_m820547B0F844E7BACDE88C8B2F54F771B436BA3B_RuntimeMethod_var);
		// pendingSurfacesForEviction.Remove(surfaceId.handle);
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_11 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_12 = ___surfaceId0;
		int32_t L_13 = L_12.get_handle_0();
		NullCheck(L_11);
		Dictionary_2_Remove_m7DB4CE76AE9D425BCC8C9FB931C61AD8B1BD4040(L_11, L_13, /*hidden argument*/Dictionary_2_Remove_m7DB4CE76AE9D425BCC8C9FB931C61AD8B1BD4040_RuntimeMethod_var);
		// }
		goto IL_0087;
	}

IL_004b:
	{
		// else if (!surfaceObjects.ContainsKey(surfaceId.handle))
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_14 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_15 = ___surfaceId0;
		int32_t L_16 = L_15.get_handle_0();
		NullCheck(L_14);
		bool L_17 = Dictionary_2_ContainsKey_m003F8906908ABE5322D425FF4809E410005EF2A3(L_14, L_16, /*hidden argument*/Dictionary_2_ContainsKey_m003F8906908ABE5322D425FF4809E410005EF2A3_RuntimeMethod_var);
		if (L_17)
		{
			goto IL_0087;
		}
	}
	{
		// surface = CreateSurface(surfaceId);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_18 = ___surfaceId0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_19 = SpatialMappingBase_CreateSurface_m4B108724636C35394AE9D686FCB8C39517C6671C(__this, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		// surface.surfaceData = new SurfaceData();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_20 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 ));
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_21 = V_2;
		NullCheck(L_20);
		Surface_set_surfaceData_mDD41633421D9F32C852EA8FDAF28BEBF1822C74E_inline(L_20, L_21, /*hidden argument*/NULL);
		// surfaceObjects.Add(surfaceId.handle, surface);
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_22 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_23 = ___surfaceId0;
		int32_t L_24 = L_23.get_handle_0();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_25 = V_0;
		NullCheck(L_22);
		Dictionary_2_Add_m9D1B3160A0B79803FA708A4D25D911DF7D69DD4C(L_22, L_24, L_25, /*hidden argument*/Dictionary_2_Add_m9D1B3160A0B79803FA708A4D25D911DF7D69DD4C_RuntimeMethod_var);
	}

IL_0087:
	{
		// if (surface == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_26 = V_0;
		if (L_26)
		{
			goto IL_009c;
		}
	}
	{
		// surface = surfaceObjects[surfaceId.handle];
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_27 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_28 = ___surfaceId0;
		int32_t L_29 = L_28.get_handle_0();
		NullCheck(L_27);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_30 = Dictionary_2_get_Item_mEC1900B7D6A8954EF01D5D60518DC31A8153B8D3(L_27, L_29, /*hidden argument*/Dictionary_2_get_Item_mEC1900B7D6A8954EF01D5D60518DC31A8153B8D3_RuntimeMethod_var);
		V_0 = L_30;
	}

IL_009c:
	{
		// SurfaceData tempSurfaceData = surface.surfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_31 = V_0;
		NullCheck(L_31);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_32 = Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8_inline(L_31, /*hidden argument*/NULL);
		V_1 = L_32;
		// tempSurfaceData.id = surfaceId;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_33 = ___surfaceId0;
		(&V_1)->set_id_0(L_33);
		// tempSurfaceData.bakeCollider = bakePhysics;
		bool L_34 = ___bakePhysics2;
		(&V_1)->set_bakeCollider_5(L_34);
		// tempSurfaceData.trianglesPerCubicMeter = lodToPcm[(int)lodType];
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_35 = SpatialMappingBase_get_lodToPcm_mEB766BA3CED483CF4B2E65D6B39272EE60B75850_inline(/*hidden argument*/NULL);
		int32_t L_36 = SpatialMappingBase_get_lodType_m4B32B9551C2BA8DD7F9C0D7B47AE6B3B98FAC40C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		(&V_1)->set_trianglesPerCubicMeter_4((((float)((float)L_38))));
		// surface.surfaceData = tempSurfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_39 = V_0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_40 = V_1;
		NullCheck(L_39);
		Surface_set_surfaceData_mDD41633421D9F32C852EA8FDAF28BEBF1822C74E_inline(L_39, L_40, /*hidden argument*/NULL);
		// surface.awaitingBake = true;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_41 = V_0;
		NullCheck(L_41);
		Surface_set_awaitingBake_m1B9DEFB75F42C6C83BB7AA2F913C9D4DB8940D30_inline(L_41, (bool)1, /*hidden argument*/NULL);
		// surface.updateTime = updateTime;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_42 = V_0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_43 = ___updateTime1;
		NullCheck(L_42);
		Surface_set_updateTime_m4FE3E6F2B68243A1E49F07099F78322E235F0D79_inline(L_42, L_43, /*hidden argument*/NULL);
		// AddRequiredComponentsForBaking(surface);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_44 = V_0;
		VirtActionInvoker1< Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * >::Invoke(10 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::AddRequiredComponentsForBaking(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_44);
		// }
		return;
	}
}
// UnityEngine.XR.WSA.SpatialMappingBase_Surface UnityEngine.XR.WSA.SpatialMappingBase::CreateSurface(UnityEngine.XR.WSA.SurfaceId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * SpatialMappingBase_CreateSurface_m4B108724636C35394AE9D686FCB8C39517C6671C (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_CreateSurface_m4B108724636C35394AE9D686FCB8C39517C6671C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Surface surface = new Surface();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D *)il2cpp_codegen_object_new(Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D_il2cpp_TypeInfo_var);
		Surface__ctor_m2D60C4A0D136E8206E4C5510A52BA283DA3C3EA5(L_0, /*hidden argument*/NULL);
		// surface.surfaceId = surfaceId;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_1 = L_0;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_2 = ___surfaceId0;
		NullCheck(L_1);
		Surface_set_surfaceId_mACB290F49AF936B7DD34559F927D893F8196102F_inline(L_1, L_2, /*hidden argument*/NULL);
		// surface.awaitingBake = false;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_3 = L_1;
		NullCheck(L_3);
		Surface_set_awaitingBake_m1B9DEFB75F42C6C83BB7AA2F913C9D4DB8940D30_inline(L_3, (bool)0, /*hidden argument*/NULL);
		// return surface;
		return L_3;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::CloneBakedComponents(UnityEngine.XR.WSA.SurfaceData,UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_CloneBakedComponents_m23E578161C00C4D9E8F604B80A68CC60B6F58709 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData0, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_CloneBakedComponents_m23E578161C00C4D9E8F604B80A68CC60B6F58709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___target1;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if (bakedData.outputMesh != null && target.meshFilter != null)
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_1 = ___bakedData0;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_2 = L_1.get_outputMesh_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_4 = ___target1;
		NullCheck(L_4);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_5 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// Destroy(target.meshFilter.mesh);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_7 = ___target1;
		NullCheck(L_7);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_8 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_9 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_9, /*hidden argument*/NULL);
		// target.meshFilter.mesh = bakedData.outputMesh.sharedMesh;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_10 = ___target1;
		NullCheck(L_10);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_11 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_10, /*hidden argument*/NULL);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_12 = ___bakedData0;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_13 = L_12.get_outputMesh_1();
		NullCheck(L_13);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_14 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_11, L_14, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::AddRequiredComponentsForBaking(UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_AddRequiredComponentsForBaking_m721AD08F9692DDFF64E74E145AC6DB6CAD0EC16E (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_AddRequiredComponentsForBaking_m721AD08F9692DDFF64E74E145AC6DB6CAD0EC16E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (surfaceParent == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = SpatialMappingBase_get_surfaceParent_m19EDABA4E196956D3D93D0E8F71582B62FBEB6AC_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// surfaceParent = new GameObject(string.Format("Surface Parent{0}", observerId));
		int32_t L_2 = SpatialMappingBase_get_observerId_mE41D9278DFE2B9E3D289314BA9EBF382B8831695_inline(__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralEB6EF0B99606BAD040095156CE2B1FAAC0C59C6A, L_4, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_6, L_5, /*hidden argument*/NULL);
		SpatialMappingBase_set_surfaceParent_mDBEDC93A0DA8327F85E20DF9BF76B3B2DE2E1124_inline(__this, L_6, /*hidden argument*/NULL);
		// surfaceParentWasDynamicallyCreated = true;
		SpatialMappingBase_set_surfaceParentWasDynamicallyCreated_m529974EF9B8ED167AB546DC522B0766A9222ED76_inline(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// if (surface.gameObject == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_7 = ___surface0;
		NullCheck(L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_008e;
		}
	}
	{
		// surface.gameObject = new GameObject(string.Format("spatial-mapping-surface{0}_{1}", observerId, surface.surfaceId.handle));
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_10 = ___surface0;
		int32_t L_11 = SpatialMappingBase_get_observerId_mE41D9278DFE2B9E3D289314BA9EBF382B8831695_inline(__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_14 = ___surface0;
		NullCheck(L_14);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_15 = Surface_get_surfaceId_mAD37AE571E345D3B6850E57137292FE70E6F388B_inline(L_14, /*hidden argument*/NULL);
		int32_t L_16 = L_15.get_handle_0();
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral05C07D1FCAF258FA9A5BB24E01F6316B3F11BE63, L_13, L_18, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_20, L_19, /*hidden argument*/NULL);
		NullCheck(L_10);
		Surface_set_gameObject_m732C6594B63AC0DDDC16087B90CE8D1CE2EA07EA_inline(L_10, L_20, /*hidden argument*/NULL);
		// surface.gameObject.transform.parent = surfaceParent.transform;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_21 = ___surface0;
		NullCheck(L_21);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_22, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = SpatialMappingBase_get_surfaceParent_m19EDABA4E196956D3D93D0E8F71582B62FBEB6AC_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_23, L_25, /*hidden argument*/NULL);
	}

IL_008e:
	{
		// if (surface.meshFilter == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_26 = ___surface0;
		NullCheck(L_26);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_27 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_28 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_27, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00cc;
		}
	}
	{
		// surface.meshFilter = surface.gameObject.GetComponent<MeshFilter>();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_29 = ___surface0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_30 = ___surface0;
		NullCheck(L_30);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_32 = GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4(L_31, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var);
		NullCheck(L_29);
		Surface_set_meshFilter_m2D5F16A114A2AE2934B48E4D3F0887C5D1D8EBB2_inline(L_29, L_32, /*hidden argument*/NULL);
		// if (surface.meshFilter == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_33 = ___surface0;
		NullCheck(L_33);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_34 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_35 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_34, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00cc;
		}
	}
	{
		// surface.meshFilter = surface.gameObject.AddComponent<MeshFilter>();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_36 = ___surface0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_37 = ___surface0;
		NullCheck(L_37);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_38 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_39 = GameObject_AddComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m98AEA1EDDC59492203D06FA2912152C37C4164E4(L_38, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m98AEA1EDDC59492203D06FA2912152C37C4164E4_RuntimeMethod_var);
		NullCheck(L_36);
		Surface_set_meshFilter_m2D5F16A114A2AE2934B48E4D3F0887C5D1D8EBB2_inline(L_36, L_39, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		// SurfaceData tempSurfaceData = surface.surfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_40 = ___surface0;
		NullCheck(L_40);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_41 = Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8_inline(L_40, /*hidden argument*/NULL);
		V_0 = L_41;
		// tempSurfaceData.outputMesh = surface.meshFilter;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_42 = ___surface0;
		NullCheck(L_42);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_43 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_42, /*hidden argument*/NULL);
		(&V_0)->set_outputMesh_1(L_43);
		// if (surface.worldAnchor == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_44 = ___surface0;
		NullCheck(L_44);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_45 = Surface_get_worldAnchor_mB462702EE57F8357BEA86C56EF2E35CC0BDB0669_inline(L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_46 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_45, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_011e;
		}
	}
	{
		// surface.worldAnchor = surface.gameObject.GetComponent<WorldAnchor>();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_47 = ___surface0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_48 = ___surface0;
		NullCheck(L_48);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_49 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_50 = GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971(L_49, /*hidden argument*/GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971_RuntimeMethod_var);
		NullCheck(L_47);
		Surface_set_worldAnchor_m6645872D2DE4375082FC98688169FE07252ABD79_inline(L_47, L_50, /*hidden argument*/NULL);
		// if (surface.worldAnchor == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_51 = ___surface0;
		NullCheck(L_51);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_52 = Surface_get_worldAnchor_mB462702EE57F8357BEA86C56EF2E35CC0BDB0669_inline(L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_53 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_52, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_011e;
		}
	}
	{
		// surface.worldAnchor = surface.gameObject.AddComponent<WorldAnchor>();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_54 = ___surface0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_55 = ___surface0;
		NullCheck(L_55);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_56 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_57 = GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF(L_56, /*hidden argument*/GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF_RuntimeMethod_var);
		NullCheck(L_54);
		Surface_set_worldAnchor_m6645872D2DE4375082FC98688169FE07252ABD79_inline(L_54, L_57, /*hidden argument*/NULL);
	}

IL_011e:
	{
		// tempSurfaceData.outputAnchor = surface.worldAnchor;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_58 = ___surface0;
		NullCheck(L_58);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_59 = Surface_get_worldAnchor_mB462702EE57F8357BEA86C56EF2E35CC0BDB0669_inline(L_58, /*hidden argument*/NULL);
		(&V_0)->set_outputAnchor_2(L_59);
		// surface.surfaceData = tempSurfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_60 = ___surface0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_61 = V_0;
		NullCheck(L_60);
		Surface_set_surfaceData_mDD41633421D9F32C852EA8FDAF28BEBF1822C74E_inline(L_60, L_61, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnRemoveSurface(UnityEngine.XR.WSA.SurfaceId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnRemoveSurface_mA1AD707BE5B320583A342E58DCF96C18AFAB9C26 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_OnRemoveSurface_mA1AD707BE5B320583A342E58DCF96C18AFAB9C26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * V_0 = NULL;
	{
		// if (surfaceObjects == null || surfaceObjects.Count == 0)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_0 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_1 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0(L_1, /*hidden argument*/Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// if (!surfaceObjects.TryGetValue(surfaceId.handle, out sd))
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_3 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_4 = ___surfaceId0;
		int32_t L_5 = L_4.get_handle_0();
		NullCheck(L_3);
		bool L_6 = Dictionary_2_TryGetValue_m7501EF97709D94AB3BF3F3D0584A35DC80739391(L_3, L_5, (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m7501EF97709D94AB3BF3F3D0584A35DC80739391_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0046;
		}
	}
	{
		// Debug.LogWarning(string.Format("Can not remove the surface id \"{0}\" because it is not an active surface.", surfaceId.handle));
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_7 = ___surfaceId0;
		int32_t L_8 = L_7.get_handle_0();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral19EA9A5EB531CE393DCA73F73B60048CF49D5D7E, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_11, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0046:
	{
		// surfaceObjects.Remove(surfaceId.handle);
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_12 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_13 = ___surfaceId0;
		int32_t L_14 = L_13.get_handle_0();
		NullCheck(L_12);
		Dictionary_2_Remove_m7DB4CE76AE9D425BCC8C9FB931C61AD8B1BD4040(L_12, L_14, /*hidden argument*/Dictionary_2_Remove_m7DB4CE76AE9D425BCC8C9FB931C61AD8B1BD4040_RuntimeMethod_var);
		// if (numUpdatesBeforeRemoval < 1)
		int32_t L_15 = SpatialMappingBase_get_numUpdatesBeforeRemoval_mA7614FDEC07341C3E1541990F5A0F8DA963FAF89_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_15) >= ((int32_t)1)))
		{
			goto IL_0069;
		}
	}
	{
		// DestroySurface(sd);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_16 = V_0;
		VirtActionInvoker1< Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * >::Invoke(13 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_16);
		// return;
		return;
	}

IL_0069:
	{
		// OnBeginSurfaceEviction(ShouldRemainActiveWhileBeingRemoved(sd), sd);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_17 = V_0;
		bool L_18 = SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m12CBB39C4EF687E718B416B8421EE8E0CD976BE5(__this, L_17, /*hidden argument*/NULL);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_19 = V_0;
		VirtActionInvoker2< bool, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * >::Invoke(11 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnBeginSurfaceEviction(System.Boolean,UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_18, L_19);
		// sd.remainingUpdatesToLive = numUpdatesBeforeRemoval + 1;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_20 = V_0;
		int32_t L_21 = SpatialMappingBase_get_numUpdatesBeforeRemoval_mA7614FDEC07341C3E1541990F5A0F8DA963FAF89_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Surface_set_remainingUpdatesToLive_m30BFDFCEA11F0C8A9BB50DEA3E1C6AB2CE2E04BC_inline(L_20, ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), /*hidden argument*/NULL);
		// pendingSurfacesForEviction.Add(surfaceId.handle, sd);
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_22 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_23 = ___surfaceId0;
		int32_t L_24 = L_23.get_handle_0();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_25 = V_0;
		NullCheck(L_22);
		Dictionary_2_Add_m9D1B3160A0B79803FA708A4D25D911DF7D69DD4C(L_22, L_24, L_25, /*hidden argument*/Dictionary_2_Add_m9D1B3160A0B79803FA708A4D25D911DF7D69DD4C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::ShouldRemainActiveWhileBeingRemoved(UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m12CBB39C4EF687E718B416B8421EE8E0CD976BE5 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m12CBB39C4EF687E718B416B8421EE8E0CD976BE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	bool V_1 = false;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_2 = NULL;
	{
		// if (surface.gameObject == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surface0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// GameObject mainCameraGameObject = selectedCamera.gameObject;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = SpatialMappingBase_get_selectedCamera_mE3E4571F7EAF1DF70B6762BC57B6CBAFCB17E834_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// bool parentedToCamera = surface.gameObject == mainCameraGameObject;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_5 = ___surface0;
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_5, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// Transform currentTransform = surface.gameObject.transform.parent;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_9 = ___surface0;
		NullCheck(L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		goto IL_0055;
	}

IL_003c:
	{
		// if (currentTransform.gameObject == mainCameraGameObject)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = V_2;
		NullCheck(L_13);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_13, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_004e;
		}
	}
	{
		// parentedToCamera = true;
		V_1 = (bool)1;
		// break;
		goto IL_0061;
	}

IL_004e:
	{
		// currentTransform = currentTransform.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = V_2;
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_17, /*hidden argument*/NULL);
		V_2 = L_18;
	}

IL_0055:
	{
		// while (!parentedToCamera && currentTransform != null)
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_0061;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_20, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_003c;
		}
	}

IL_0061:
	{
		// if (parentedToCamera == true)
		bool L_22 = V_1;
		if (!L_22)
		{
			goto IL_0066;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0066:
	{
		// if (BoundsContains(surface.gameObject.transform.position))
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_23 = ___surface0;
		NullCheck(L_23);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_25, /*hidden argument*/NULL);
		bool L_27 = SpatialMappingBase_BoundsContains_mDD5A28A35DF1EDA76EA7EB858425EBB146ED1AA9(__this, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0080;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0080:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::BoundsContains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_BoundsContains_mDD5A28A35DF1EDA76EA7EB858425EBB146ED1AA9 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_BoundsContains_mDD5A28A35DF1EDA76EA7EB858425EBB146ED1AA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (volumeType == VolumeType.Sphere)
		int32_t L_0 = SpatialMappingBase_get_volumeType_mDF6DCFE4058C803023B930E1252589CB247BF7CA_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		// if (Vector3.SqrMagnitude(position - this.transform.position) <= sphereRadius * sphereRadius)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___position0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_1, L_3, /*hidden argument*/NULL);
		float L_5 = Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E(L_4, /*hidden argument*/NULL);
		float L_6 = SpatialMappingBase_get_sphereRadius_mF468C293EDA401D9319570806FF7E5DC5992E3EF_inline(__this, /*hidden argument*/NULL);
		float L_7 = SpatialMappingBase_get_sphereRadius_mF468C293EDA401D9319570806FF7E5DC5992E3EF_inline(__this, /*hidden argument*/NULL);
		if ((!(((float)L_5) <= ((float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))))))
		{
			goto IL_0048;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_002f:
	{
		// else if (volumeType == VolumeType.AxisAlignedBox)
		int32_t L_8 = SpatialMappingBase_get_volumeType_mDF6DCFE4058C803023B930E1252589CB247BF7CA_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0048;
		}
	}
	{
		// return bounds.Contains(position);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_9 = SpatialMappingBase_get_bounds_m555A8D615D0643F8FB75D086714A5A5D6AA371D2_inline(__this, /*hidden argument*/NULL);
		V_0 = L_9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___position0;
		bool L_11 = Bounds_Contains_mD0387F6A414484534BE1E50E0FC55EDE1E138319((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0048:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_DestroySurface_m2E97118945643308BFDBD7AF3FE67E782A352232 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_DestroySurface_m2E97118945643308BFDBD7AF3FE67E782A352232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// surface.remainingUpdatesToLive = -1;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surface0;
		NullCheck(L_0);
		Surface_set_remainingUpdatesToLive_m30BFDFCEA11F0C8A9BB50DEA3E1C6AB2CE2E04BC_inline(L_0, (-1), /*hidden argument*/NULL);
		// if (surface.meshFilter != null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_1 = ___surface0;
		NullCheck(L_1);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_2 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// if (surface.meshFilter.mesh != null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_4 = ___surface0;
		NullCheck(L_4);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_5 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_6 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		// Destroy(surface.meshFilter.mesh);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_8 = ___surface0;
		NullCheck(L_8);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_9 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_10 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_10, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// GameObject.Destroy(surface.gameObject);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_11 = ___surface0;
		NullCheck(L_11);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_12, /*hidden argument*/NULL);
		// surface.gameObject = null;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_13 = ___surface0;
		NullCheck(L_13);
		Surface_set_gameObject_m732C6594B63AC0DDDC16087B90CE8D1CE2EA07EA_inline(L_13, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::ProcessEvictedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_ProcessEvictedObjects_m8111EA6BDDEEB01B7342541D3E5C4E2FFEE06A64 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_ProcessEvictedObjects_m8111EA6BDDEEB01B7342541D3E5C4E2FFEE06A64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * V_2 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (pendingSurfacesForEviction == null || pendingSurfacesForEviction.Count == 0)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_0 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_1 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0(L_1, /*hidden argument*/Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// surfacesToRemoveFromDict.Clear();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_3 = SpatialMappingBase_get_surfacesToRemoveFromDict_m28DA1C6B57FE6F290402DBC00BEEC3C02BBEE81B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6(L_3, /*hidden argument*/List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6_RuntimeMethod_var);
		// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_4 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  L_5 = Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC(L_4, /*hidden argument*/Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d1;
		}

IL_0032:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  L_6 = Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_inline((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_RuntimeMethod_var);
			V_1 = L_6;
			// if (kvp.Value.gameObject == null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_7 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_7);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_9 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0062;
			}
		}

IL_004e:
		{
			// surfacesToRemoveFromDict.Add(kvp.Key);
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_10 = SpatialMappingBase_get_surfacesToRemoveFromDict_m28DA1C6B57FE6F290402DBC00BEEC3C02BBEE81B_inline(__this, /*hidden argument*/NULL);
			int32_t L_11 = KeyValuePair_2_get_Key_mA201C27C8ACFA787EDB9DA5FB1A26163A37D2AB7_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mA201C27C8ACFA787EDB9DA5FB1A26163A37D2AB7_RuntimeMethod_var);
			NullCheck(L_10);
			List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_10, L_11, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
			// continue;
			goto IL_00d1;
		}

IL_0062:
		{
			// Surface evictionObject = kvp.Value;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_12 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			V_2 = L_12;
			// Vector3 surfacePosition = evictionObject.gameObject.transform.position;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_13 = V_2;
			NullCheck(L_13);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_13, /*hidden argument*/NULL);
			NullCheck(L_14);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
			V_3 = L_16;
			// if (!BoundsContains(surfacePosition) ||
			//     Vector3.SqrMagnitude(surfacePosition - this.transform.position) <= s_EvictionUpdateTickThresholdSqr)
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_3;
			bool L_18 = SpatialMappingBase_BoundsContains_mDD5A28A35DF1EDA76EA7EB858425EBB146ED1AA9(__this, L_17, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_00a1;
			}
		}

IL_0084:
		{
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_3;
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
			NullCheck(L_20);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_20, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_19, L_21, /*hidden argument*/NULL);
			float L_23 = Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E(L_22, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
			float L_24 = ((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->get_s_EvictionUpdateTickThresholdSqr_5();
			if ((!(((float)L_23) <= ((float)L_24))))
			{
				goto IL_00d1;
			}
		}

IL_00a1:
		{
			// if (evictionObject.remainingUpdatesToLive-- <= 0)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_25 = V_2;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_26 = L_25;
			NullCheck(L_26);
			int32_t L_27 = Surface_get_remainingUpdatesToLive_m85C53020BBB0610944048533749F23B633699047_inline(L_26, /*hidden argument*/NULL);
			V_4 = L_27;
			int32_t L_28 = V_4;
			NullCheck(L_26);
			Surface_set_remainingUpdatesToLive_m30BFDFCEA11F0C8A9BB50DEA3E1C6AB2CE2E04BC_inline(L_26, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)), /*hidden argument*/NULL);
			int32_t L_29 = V_4;
			if ((((int32_t)L_29) > ((int32_t)0)))
			{
				goto IL_00d1;
			}
		}

IL_00b8:
		{
			// DestroySurface(evictionObject);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_30 = V_2;
			VirtActionInvoker1< Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * >::Invoke(13 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_30);
			// surfacesToRemoveFromDict.Add(kvp.Key);
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_31 = SpatialMappingBase_get_surfacesToRemoveFromDict_m28DA1C6B57FE6F290402DBC00BEEC3C02BBEE81B_inline(__this, /*hidden argument*/NULL);
			int32_t L_32 = KeyValuePair_2_get_Key_mA201C27C8ACFA787EDB9DA5FB1A26163A37D2AB7_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mA201C27C8ACFA787EDB9DA5FB1A26163A37D2AB7_RuntimeMethod_var);
			NullCheck(L_31);
			List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_31, L_32, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		}

IL_00d1:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			bool L_33 = Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4_RuntimeMethod_var);
			if (L_33)
			{
				goto IL_0032;
			}
		}

IL_00dd:
		{
			IL2CPP_LEAVE(0xED, FINALLY_00df);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00df;
	}

FINALLY_00df:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239_RuntimeMethod_var);
		IL2CPP_END_FINALLY(223)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(223)
	{
		IL2CPP_JUMP_TBL(0xED, IL_00ed)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ed:
	{
		// for (int i = 0; i < surfacesToRemoveFromDict.Count; ++i)
		V_5 = 0;
		goto IL_0111;
	}

IL_00f2:
	{
		// pendingSurfacesForEviction.Remove(surfacesToRemoveFromDict[i]);
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_34 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_35 = SpatialMappingBase_get_surfacesToRemoveFromDict_m28DA1C6B57FE6F290402DBC00BEEC3C02BBEE81B_inline(__this, /*hidden argument*/NULL);
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline(L_35, L_36, /*hidden argument*/List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var);
		NullCheck(L_34);
		Dictionary_2_Remove_m7DB4CE76AE9D425BCC8C9FB931C61AD8B1BD4040(L_34, L_37, /*hidden argument*/Dictionary_2_Remove_m7DB4CE76AE9D425BCC8C9FB931C61AD8B1BD4040_RuntimeMethod_var);
		// for (int i = 0; i < surfacesToRemoveFromDict.Count; ++i)
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_0111:
	{
		// for (int i = 0; i < surfacesToRemoveFromDict.Count; ++i)
		int32_t L_39 = V_5;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_40 = SpatialMappingBase_get_surfacesToRemoveFromDict_m28DA1C6B57FE6F290402DBC00BEEC3C02BBEE81B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		int32_t L_41 = List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_inline(L_40, /*hidden argument*/List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_RuntimeMethod_var);
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_00f2;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase::TryGetHighestPriorityRequest(UnityEngine.XR.WSA.SurfaceData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingBase_TryGetHighestPriorityRequest_mD685D7A19608EF938E20F6E125BD61C8FC379141 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * ___bestSurfaceData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_TryGetHighestPriorityRequest_mD685D7A19608EF938E20F6E125BD61C8FC379141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * V_0 = NULL;
	Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// bestSurfaceData = bestSurfaceDataNull;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * L_0 = ___bestSurfaceData0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_1 = __this->get_bestSurfaceDataNull_27();
		*(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)L_0)->___outputMesh_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)L_0)->___outputAnchor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)L_0)->___outputCollider_3), (void*)NULL);
		#endif
		// if (surfaceObjects == null || surfaceObjects.Count == 0)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_2 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_3 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0(L_3, /*hidden argument*/Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0023;
		}
	}

IL_0021:
	{
		// return false;
		return (bool)0;
	}

IL_0023:
	{
		// Surface bestSurface = null;
		V_0 = (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D *)NULL;
		// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_5 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  L_6 = Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0077;
		}

IL_0033:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  L_7 = Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_inline((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_RuntimeMethod_var);
			V_2 = L_7;
			// if (!kvp.Value.awaitingBake)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_8 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_8);
			bool L_9 = Surface_get_awaitingBake_m14C791851027BF9B12B9A391CF428EDE8B8B39BB_inline(L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0077;
			}
		}

IL_0049:
		{
			// if (bestSurface == null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_10 = V_0;
			if (L_10)
			{
				goto IL_0056;
			}
		}

IL_004c:
		{
			// bestSurface = kvp.Value;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_11 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			V_0 = L_11;
			// continue;
			goto IL_0077;
		}

IL_0056:
		{
			// if (kvp.Value.updateTime < bestSurface.updateTime)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_12 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_12);
			DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_13 = Surface_get_updateTime_m580ACCD9FDFE2AFE4A982ED12B8B1FC47FACE842_inline(L_12, /*hidden argument*/NULL);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_14 = V_0;
			NullCheck(L_14);
			DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_15 = Surface_get_updateTime_m580ACCD9FDFE2AFE4A982ED12B8B1FC47FACE842_inline(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
			bool L_16 = DateTime_op_LessThan_m75DE4F8CC5F5EE392829A9B37C5C98B7FC97061A(L_13, L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_0077;
			}
		}

IL_006f:
		{
			// bestSurface = kvp.Value;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_17 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			V_0 = L_17;
		}

IL_0077:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			bool L_18 = Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0033;
			}
		}

IL_0080:
		{
			IL2CPP_LEAVE(0x90, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239_RuntimeMethod_var);
		IL2CPP_END_FINALLY(130)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_JUMP_TBL(0x90, IL_0090)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0090:
	{
		// if (bestSurface == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_19 = V_0;
		if (L_19)
		{
			goto IL_0095;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0095:
	{
		// AddRequiredComponentsForBaking(bestSurface);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_20 = V_0;
		VirtActionInvoker1< Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * >::Invoke(10 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::AddRequiredComponentsForBaking(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_20);
		// UpdateSurfaceData(bestSurface);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_21 = V_0;
		VirtActionInvoker1< Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * >::Invoke(15 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::UpdateSurfaceData(UnityEngine.XR.WSA.SpatialMappingBase/Surface) */, __this, L_21);
		// bestSurfaceData = bestSurface.surfaceData;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * L_22 = ___bestSurfaceData0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_23 = V_0;
		NullCheck(L_23);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_24 = Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8_inline(L_23, /*hidden argument*/NULL);
		*(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)L_22 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)L_22)->___outputMesh_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)L_22)->___outputAnchor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)L_22)->___outputCollider_3), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::UpdateSurfaceData(UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_UpdateSurfaceData_m7757CFA05BF25F432418E20A0B4C9F5E11D7D3D1 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_UpdateSurfaceData_m7757CFA05BF25F432418E20A0B4C9F5E11D7D3D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SurfaceData tempSurfaceData = surface.surfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surface0;
		NullCheck(L_0);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_1 = Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// tempSurfaceData.id = surface.surfaceId;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_2 = ___surface0;
		NullCheck(L_2);
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_3 = Surface_get_surfaceId_mAD37AE571E345D3B6850E57137292FE70E6F388B_inline(L_2, /*hidden argument*/NULL);
		(&V_0)->set_id_0(L_3);
		// tempSurfaceData.trianglesPerCubicMeter = lodToPcm[(int)lodType];
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = SpatialMappingBase_get_lodToPcm_mEB766BA3CED483CF4B2E65D6B39272EE60B75850_inline(/*hidden argument*/NULL);
		int32_t L_5 = SpatialMappingBase_get_lodType_m4B32B9551C2BA8DD7F9C0D7B47AE6B3B98FAC40C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		(&V_0)->set_trianglesPerCubicMeter_4((((float)((float)L_7))));
		// tempSurfaceData.bakeCollider = false;
		(&V_0)->set_bakeCollider_5((bool)0);
		// tempSurfaceData.outputMesh = surface.meshFilter;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_8 = ___surface0;
		NullCheck(L_8);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_9 = Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline(L_8, /*hidden argument*/NULL);
		(&V_0)->set_outputMesh_1(L_9);
		// surface.surfaceData = tempSurfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_10 = ___surface0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_11 = V_0;
		NullCheck(L_10);
		Surface_set_surfaceData_mDD41633421D9F32C852EA8FDAF28BEBF1822C74E_inline(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::ForEachSurfaceInCache(System.Action`1<UnityEngine.XR.WSA.SpatialMappingBase_Surface>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_ForEachSurfaceInCache_m7ACD30FC885696A06491E7D260D6FDCAE1AA2DF5 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_ForEachSurfaceInCache_m7ACD30FC885696A06491E7D260D6FDCAE1AA2DF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (callback == null)
		Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 * L_0 = ___callback0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if (surfaceObjects == null || surfaceObjects.Count == 0)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_1 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_2 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0(L_2, /*hidden argument*/Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		// return;
		return;
	}

IL_001a:
	{
		// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_4 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  L_5 = Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC(L_4, /*hidden argument*/Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003d;
		}

IL_0028:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  L_6 = Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_inline((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_RuntimeMethod_var);
			V_1 = L_6;
			// callback(kvp.Value);
			Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 * L_7 = ___callback0;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_8 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_7);
			Action_1_Invoke_mEB4F9CFB24024E34F7207168F457D3EEB70ED7F2(L_7, L_8, /*hidden argument*/Action_1_Invoke_mEB4F9CFB24024E34F7207168F457D3EEB70ED7F2_RuntimeMethod_var);
		}

IL_003d:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			bool L_9 = Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0028;
			}
		}

IL_0046:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239_RuntimeMethod_var);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0056:
	{
		// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_10 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  L_11 = Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC(L_10, /*hidden argument*/Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC_RuntimeMethod_var);
		V_0 = L_11;
	}

IL_0062:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0088;
		}

IL_0064:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  L_12 = Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_inline((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_RuntimeMethod_var);
			V_2 = L_12;
			// if (ShouldRemainActiveWhileBeingRemoved(kvp.Value))
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_13 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			bool L_14 = SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m12CBB39C4EF687E718B416B8421EE8E0CD976BE5(__this, L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_0088;
			}
		}

IL_007b:
		{
			// callback(kvp.Value);
			Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 * L_15 = ___callback0;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_16 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_15);
			Action_1_Invoke_mEB4F9CFB24024E34F7207168F457D3EEB70ED7F2(L_15, L_16, /*hidden argument*/Action_1_Invoke_mEB4F9CFB24024E34F7207168F457D3EEB70ED7F2_RuntimeMethod_var);
		}

IL_0088:
		{
			// foreach (KeyValuePair<int, Surface> kvp in pendingSurfacesForEviction)
			bool L_17 = Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_0064;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xA1, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239_RuntimeMethod_var);
		IL2CPP_END_FINALLY(147)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_JUMP_TBL(0xA1, IL_00a1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnResetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnResetProperties_mD96952885AFCEB731E9247E1627DF2460C525EE3 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnDidApplyAnimationProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_OnDidApplyAnimationProperties_m6466765B3776B6F7EA52CE9710F394D1E178A806 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// OnResetProperties();
		VirtActionInvoker0::Invoke(16 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnResetProperties() */, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase_Reset_mA301DEA773711EFFDEBB63062035968C9AF0BB1B (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// OnResetProperties();
		VirtActionInvoker0::Invoke(16 /* System.Void UnityEngine.XR.WSA.SpatialMappingBase::OnResetProperties() */, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase__ctor_m8E1FC8B9BD9C046C7D40907E7EC0DE4BB03FF0E0 (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase__ctor_m8E1FC8B9BD9C046C7D40907E7EC0DE4BB03FF0E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VolumeType m_VolumeType = VolumeType.AxisAlignedBox;
		__this->set_m_VolumeType_9(1);
		// float m_SphereRadius = 2.0f;
		__this->set_m_SphereRadius_10((2.0f));
		// Vector3 m_HalfBoxExtents = Vector3.one * 4.0f;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_0, (4.0f), /*hidden argument*/NULL);
		__this->set_m_HalfBoxExtents_11(L_1);
		// LODType m_LodType = LODType.Medium;
		__this->set_m_LodType_12(1);
		// int m_NumUpdatesBeforeRemoval = 10;
		__this->set_m_NumUpdatesBeforeRemoval_13(((int32_t)10));
		// float m_SecondsBetweenUpdates = 2.5f;
		__this->set_m_SecondsBetweenUpdates_14((2.5f));
		// private Dictionary<int, Surface> m_PendingSurfacesForEviction = new Dictionary<int, Surface>();
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_2 = (Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 *)il2cpp_codegen_object_new(Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mFC287CA51EC6CD9F9F0D7C063D5631D4050A60B0(L_2, /*hidden argument*/Dictionary_2__ctor_mFC287CA51EC6CD9F9F0D7C063D5631D4050A60B0_RuntimeMethod_var);
		__this->set_m_PendingSurfacesForEviction_23(L_2);
		// private List<int> m_SurfacesToRemoveFromDict = new List<int>();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_3 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_3, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		__this->set_m_SurfacesToRemoveFromDict_24(L_3);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingBase__cctor_mB8D5FEE4AB751430659E4D20BA49D32470B627DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase__cctor_mB8D5FEE4AB751430659E4D20BA49D32470B627DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly float s_MovementUpdateThresholdSqr = 0.0001f;
		((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->set_s_MovementUpdateThresholdSqr_4((0.0001f));
		// static readonly float s_EvictionUpdateTickThresholdSqr = 100.0f; // 10 * 10
		((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->set_s_EvictionUpdateTickThresholdSqr_5((100.0f));
		// static int s_ObserverIdCounter = 0;
		((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->set_s_ObserverIdCounter_6(0);
		// private static readonly int[] s_LodToPcm = { 2000, 750, 200 };
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBE168E59272B45F7A94B1F451A29AE3BCD661A15____D15896F389DBE7C4EB4B27E5CA408E92D08149C9_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->set_s_LodToPcm_26(L_1);
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
// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_surfaceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  Surface_get_surfaceId_mAD37AE571E345D3B6850E57137292FE70E6F388B (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public SurfaceId surfaceId { get; set; }
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_0 = __this->get_U3CsurfaceIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_surfaceId(UnityEngine.XR.WSA.SurfaceId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_surfaceId_mACB290F49AF936B7DD34559F927D893F8196102F (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___value0, const RuntimeMethod* method)
{
	{
		// public SurfaceId surfaceId { get; set; }
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_0 = ___value0;
		__this->set_U3CsurfaceIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.DateTime UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_updateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Surface_get_updateTime_m580ACCD9FDFE2AFE4A982ED12B8B1FC47FACE842 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public System.DateTime updateTime { get; set; }
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_U3CupdateTimeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_updateTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_updateTime_m4FE3E6F2B68243A1E49F07099F78322E235F0D79 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		// public System.DateTime updateTime { get; set; }
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CupdateTimeU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public GameObject gameObject { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_U3CgameObjectU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_gameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_gameObject_m732C6594B63AC0DDDC16087B90CE8D1CE2EA07EA (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject gameObject { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_U3CgameObjectU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.XR.WSA.SurfaceData UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_surfaceData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public SurfaceData surfaceData { get; set; }
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_0 = __this->get_U3CsurfaceDataU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_surfaceData(UnityEngine.XR.WSA.SurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_surfaceData_mDD41633421D9F32C852EA8FDAF28BEBF1822C74E (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___value0, const RuntimeMethod* method)
{
	{
		// public SurfaceData surfaceData { get; set; }
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_0 = ___value0;
		__this->set_U3CsurfaceDataU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_remainingUpdatesToLive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Surface_get_remainingUpdatesToLive_m85C53020BBB0610944048533749F23B633699047 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public int remainingUpdatesToLive { get; set; }
		int32_t L_0 = __this->get_U3CremainingUpdatesToLiveU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_remainingUpdatesToLive(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_remainingUpdatesToLive_m30BFDFCEA11F0C8A9BB50DEA3E1C6AB2CE2E04BC (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int remainingUpdatesToLive { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CremainingUpdatesToLiveU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_awaitingBake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Surface_get_awaitingBake_m14C791851027BF9B12B9A391CF428EDE8B8B39BB (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public bool awaitingBake { get; set; }
		bool L_0 = __this->get_U3CawaitingBakeU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_awaitingBake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_awaitingBake_m1B9DEFB75F42C6C83BB7AA2F913C9D4DB8940D30 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool awaitingBake { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CawaitingBakeU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.MeshFilter UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_meshFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public MeshFilter meshFilter { get; set; }
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_0 = __this->get_U3CmeshFilterU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_meshFilter(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_meshFilter_m2D5F16A114A2AE2934B48E4D3F0887C5D1D8EBB2 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___value0, const RuntimeMethod* method)
{
	{
		// public MeshFilter meshFilter { get; set; }
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_0 = ___value0;
		__this->set_U3CmeshFilterU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.MeshRenderer UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_meshRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public MeshRenderer meshRenderer { get; set; }
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = __this->get_U3CmeshRendererU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_meshRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_meshRenderer_m0335D482C3F99120D303FE66F440E004BE430C59 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___value0, const RuntimeMethod* method)
{
	{
		// public MeshRenderer meshRenderer { get; set; }
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = ___value0;
		__this->set_U3CmeshRendererU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.MeshCollider UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_meshCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public MeshCollider meshCollider { get; set; }
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_0 = __this->get_U3CmeshColliderU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_meshCollider(UnityEngine.MeshCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_meshCollider_m4CFF19BD0EB8827959FDA63A19626632B5E34A6D (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___value0, const RuntimeMethod* method)
{
	{
		// public MeshCollider meshCollider { get; set; }
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_0 = ___value0;
		__this->set_U3CmeshColliderU3Ek__BackingField_8(L_0);
		return;
	}
}
// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SpatialMappingBase_Surface::get_worldAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * Surface_get_worldAnchor_mB462702EE57F8357BEA86C56EF2E35CC0BDB0669 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public WorldAnchor worldAnchor { get; set; }
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_0 = __this->get_U3CworldAnchorU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::set_worldAnchor(UnityEngine.XR.WSA.WorldAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface_set_worldAnchor_m6645872D2DE4375082FC98688169FE07252ABD79 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___value0, const RuntimeMethod* method)
{
	{
		// public WorldAnchor worldAnchor { get; set; }
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_0 = ___value0;
		__this->set_U3CworldAnchorU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_Surface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surface__ctor_m2D60C4A0D136E8206E4C5510A52BA283DA3C3EA5 (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_SurfaceDataReadyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyCallback__ctor_m748638F8E573C4F92FF69F7AA787B814D0BF800B (SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_SurfaceDataReadyCallback::Invoke(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyCallback_Invoke_mD66502272EEC1D19C35B80935FF03A6B74203B14 (SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___requester0, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData1, bool ___outputWritten2, float ___elapsedBakeTimeSeconds3, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(targetMethod, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
					else
						GenericVirtActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(targetMethod, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
					else
						VirtActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(targetMethod, targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
					else
						GenericVirtActionInvoker4< SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(targetMethod, targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
					else
						VirtActionInvoker4< SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___requester0, ___bakedData1, ___outputWritten2, ___elapsedBakeTimeSeconds3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.SpatialMappingBase_SurfaceDataReadyCallback::BeginInvoke(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SurfaceDataReadyCallback_BeginInvoke_mEFEF91CEA5C3939DFA64C894A93E89868EA2D180 (SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___requester0, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData1, bool ___outputWritten2, float ___elapsedBakeTimeSeconds3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceDataReadyCallback_BeginInvoke_mEFEF91CEA5C3939DFA64C894A93E89868EA2D180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___requester0;
	__d_args[1] = Box(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_il2cpp_TypeInfo_var, &___bakedData1);
	__d_args[2] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___outputWritten2);
	__d_args[3] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___elapsedBakeTimeSeconds3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingBase_SurfaceDataReadyCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyCallback_EndInvoke_mA264F0BF8F3FBA87FCDB16C23600C955709AFE42 (SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Int32 UnityEngine.XR.WSA.SpatialMappingCollider::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingCollider_get_layer_mDF2504CC5A0B8C3FC502E115CA2FEB25FBC494D2 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	{
		// return m_Layer;
		int32_t L_0 = __this->get_m_Layer_28();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_set_layer_mC90818A04095A1A74855BBC1CA34F89BA8402860 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// m_Layer = value;
		int32_t L_0 = ___value0;
		__this->set_m_Layer_28(L_0);
		// ApplyPropertiesToCachedSurfaces();
		SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m10C3063BA564DF8C01DDA768D654DC62872F8270(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.PhysicMaterial UnityEngine.XR.WSA.SpatialMappingCollider::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * SpatialMappingCollider_get_material_mDE3ACB243D47BDF83842A25A2EAD67FA35AFBBC8 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	{
		// return m_Material;
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_0 = __this->get_m_Material_29();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::set_material(UnityEngine.PhysicMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_set_material_m1F6CA2ED36E651FCCED501246DF9CB41C36E2434 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * ___value0, const RuntimeMethod* method)
{
	{
		// m_Material = value;
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_0 = ___value0;
		__this->set_m_Material_29(L_0);
		// ApplyPropertiesToCachedSurfaces();
		SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m10C3063BA564DF8C01DDA768D654DC62872F8270(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingCollider::get_enableCollisions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialMappingCollider_get_enableCollisions_mDE052E1B90664CB4D2CDE84A7DD0B55EE33A557D (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	{
		// return m_EnableCollisions;
		bool L_0 = __this->get_m_EnableCollisions_30();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::set_enableCollisions(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_set_enableCollisions_m33189491A84F2436EB0260331359BDAF3B58FEF5 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// m_EnableCollisions = value;
		bool L_0 = ___value0;
		__this->set_m_EnableCollisions_30(L_0);
		// ApplyPropertiesToCachedSurfaces();
		SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m10C3063BA564DF8C01DDA768D654DC62872F8270(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_Awake_m66907F59ED24715C18E4D16298AABE90432D3BE1 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	{
		// bakePhysics = true;
		SpatialMappingBase_set_bakePhysics_m7E97A8623EE02B3210ADD227D15E497D37CEABF0_inline(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::OnSurfaceDataReady(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_OnSurfaceDataReady_m3478F43D8C517693466414067F946E1FD9918BDE (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___requester0, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData1, bool ___outputWritten2, float ___elapsedBakeTimeSeconds3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider_OnSurfaceDataReady_m3478F43D8C517693466414067F946E1FD9918BDE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * V_0 = NULL;
	{
		// if (!surfaceObjects.TryGetValue(bakedData.id.handle, out surfaceData))
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_0 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_1 = ___bakedData1;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_2 = L_1.get_id_0();
		int32_t L_3 = L_2.get_handle_0();
		NullCheck(L_0);
		bool L_4 = Dictionary_2_TryGetValue_m7501EF97709D94AB3BF3F3D0584A35DC80739391(L_0, L_3, (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m7501EF97709D94AB3BF3F3D0584A35DC80739391_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		return;
	}

IL_001b:
	{
		// surfaceData.awaitingBake = false;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_5 = V_0;
		NullCheck(L_5);
		Surface_set_awaitingBake_m1B9DEFB75F42C6C83BB7AA2F913C9D4DB8940D30_inline(L_5, (bool)0, /*hidden argument*/NULL);
		// if (!outputWritten)
		bool L_6 = ___outputWritten2;
		if (L_6)
		{
			goto IL_0026;
		}
	}
	{
		// return;
		return;
	}

IL_0026:
	{
		// if (surfaceData.gameObject == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_7 = V_0;
		NullCheck(L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		// Debug.LogError(string.Format("A SpatialMappingCollider component can not apply baked data to the surface with id \"{0}\" because its GameObject is null.", bakedData.id.handle));
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_10 = ___bakedData1;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_11 = L_10.get_id_0();
		int32_t L_12 = L_11.get_handle_0();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralDD1FA74A105812D05EDBBA6CA1731A9A0C697ED4, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_15, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0054:
	{
		// if (bakedData.outputCollider == null)
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_16 = ___bakedData1;
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_17 = L_16.get_outputCollider_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_17, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0063;
		}
	}
	{
		// return;
		return;
	}

IL_0063:
	{
		// if (requester != this)
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_19 = ___requester0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_19, __this, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0074;
		}
	}
	{
		// CloneBakedComponents(bakedData, surfaceData);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_21 = ___bakedData1;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_22 = V_0;
		SpatialMappingBase_CloneBakedComponents_m23E578161C00C4D9E8F604B80A68CC60B6F58709(__this, L_21, L_22, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// bakedData.outputCollider.gameObject.layer = layer;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_23 = ___bakedData1;
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_24 = L_23.get_outputCollider_3();
		NullCheck(L_24);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_24, /*hidden argument*/NULL);
		int32_t L_26 = SpatialMappingCollider_get_layer_mDF2504CC5A0B8C3FC502E115CA2FEB25FBC494D2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_25, L_26, /*hidden argument*/NULL);
		// if (material != null)
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_27 = SpatialMappingCollider_get_material_mDE3ACB243D47BDF83842A25A2EAD67FA35AFBBC8_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_28 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_27, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a9;
		}
	}
	{
		// bakedData.outputCollider.material = material;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_29 = ___bakedData1;
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_30 = L_29.get_outputCollider_3();
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_31 = SpatialMappingCollider_get_material_mDE3ACB243D47BDF83842A25A2EAD67FA35AFBBC8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Collider_set_material_m2978E803DF20381466E0BD1F41F759DA015C5E74(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::OnBeginSurfaceEviction(System.Boolean,UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_OnBeginSurfaceEviction_m82F7B1E6559CA9C02992251001D5D32CD513448B (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, bool ___shouldBeActiveWhileRemoved0, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surfaceData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider_OnBeginSurfaceEviction_m82F7B1E6559CA9C02992251001D5D32CD513448B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (surfaceData.gameObject == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surfaceData1;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (surfaceData.meshCollider == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_3 = ___surfaceData1;
		NullCheck(L_3);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_4 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// surfaceData.meshCollider.enabled = shouldBeActiveWhileRemoved;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_6 = ___surfaceData1;
		NullCheck(L_6);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_7 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_6, /*hidden argument*/NULL);
		bool L_8 = ___shouldBeActiveWhileRemoved0;
		NullCheck(L_7);
		Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::UpdateSurfaceData(UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_UpdateSurfaceData_m5342623BFBE87F75F7777A27A958240582FDA8DA (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method)
{
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// base.UpdateSurfaceData(surface);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surface0;
		SpatialMappingBase_UpdateSurfaceData_m7757CFA05BF25F432418E20A0B4C9F5E11D7D3D1(__this, L_0, /*hidden argument*/NULL);
		// SurfaceData tempSurfaceData = surface.surfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_1 = ___surface0;
		NullCheck(L_1);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_2 = Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// tempSurfaceData.bakeCollider = bakePhysics;
		bool L_3 = SpatialMappingBase_get_bakePhysics_m504EB487C5E39F33813DC330A605AEAB1EB97C53_inline(__this, /*hidden argument*/NULL);
		(&V_0)->set_bakeCollider_5(L_3);
		// tempSurfaceData.outputCollider = surface.meshCollider;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_4 = ___surface0;
		NullCheck(L_4);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_5 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_4, /*hidden argument*/NULL);
		(&V_0)->set_outputCollider_3(L_5);
		// surface.surfaceData = tempSurfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_6 = ___surface0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_7 = V_0;
		NullCheck(L_6);
		Surface_set_surfaceData_mDD41633421D9F32C852EA8FDAF28BEBF1822C74E_inline(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::AddRequiredComponentsForBaking(UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_AddRequiredComponentsForBaking_m42C7EC2FA487B41EA4FE26FFB5E5F3AA6E640DCD (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider_AddRequiredComponentsForBaking_m42C7EC2FA487B41EA4FE26FFB5E5F3AA6E640DCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// base.AddRequiredComponentsForBaking(surface);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surface0;
		SpatialMappingBase_AddRequiredComponentsForBaking_m721AD08F9692DDFF64E74E145AC6DB6CAD0EC16E(__this, L_0, /*hidden argument*/NULL);
		// if (surface.meshCollider == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_1 = ___surface0;
		NullCheck(L_1);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_2 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// surface.meshCollider = surface.gameObject.AddComponent<MeshCollider>() as MeshCollider;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_4 = ___surface0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_5 = ___surface0;
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_7 = GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C(L_6, /*hidden argument*/GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C_RuntimeMethod_var);
		NullCheck(L_4);
		Surface_set_meshCollider_m4CFF19BD0EB8827959FDA63A19626632B5E34A6D_inline(L_4, L_7, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// SurfaceData tempSurfaceData = surface.surfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_8 = ___surface0;
		NullCheck(L_8);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_9 = Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8_inline(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// tempSurfaceData.outputCollider = surface.meshCollider;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_10 = ___surface0;
		NullCheck(L_10);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_11 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_10, /*hidden argument*/NULL);
		(&V_0)->set_outputCollider_3(L_11);
		// surface.surfaceData = tempSurfaceData;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_12 = ___surface0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_13 = V_0;
		NullCheck(L_12);
		Surface_set_surfaceData_mDD41633421D9F32C852EA8FDAF28BEBF1822C74E_inline(L_12, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::ApplyPropertiesToCachedSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m10C3063BA564DF8C01DDA768D654DC62872F8270 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m10C3063BA564DF8C01DDA768D654DC62872F8270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (material == null)
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_0 = SpatialMappingCollider_get_material_mDE3ACB243D47BDF83842A25A2EAD67FA35AFBBC8_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// ForEachSurfaceInCache(delegate(SpatialMappingBase.Surface surface)
		//     {
		//         if (surface.meshCollider == null)
		//         {
		//             return;
		//         }
		// 
		//         if (surface.gameObject != null)
		//         {
		//             if (surface.gameObject.layer != layer)
		//             {
		//                 surface.gameObject.layer = layer;
		//             }
		//         }
		// 
		//         if (surface.meshCollider.material != material)
		//         {
		//             surface.meshCollider.material = material;
		//         }
		// 
		//         if (surface.meshCollider.enabled != enableCollisions)
		//         {
		//             surface.meshCollider.enabled = enableCollisions;
		//         }
		//     });
		Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 * L_2 = (Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4 *)il2cpp_codegen_object_new(Action_1_t258F021AE2618137D142281C8D399C2E5BB24FB4_il2cpp_TypeInfo_var);
		Action_1__ctor_m079D4F79176F6404ACFFE09E07BB9A146F7F4A0D(L_2, __this, (intptr_t)((intptr_t)SpatialMappingCollider_U3CApplyPropertiesToCachedSurfacesU3Eb__17_0_mA73DFA2D4C580980672B65573925993FD1DDCBA7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m079D4F79176F6404ACFFE09E07BB9A146F7F4A0D_RuntimeMethod_var);
		SpatialMappingBase_ForEachSurfaceInCache_m7ACD30FC885696A06491E7D260D6FDCAE1AA2DF5(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::OnResetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_OnResetProperties_m459A871F37DD9C32E821CDE20B9B70121DE28F68 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	{
		// base.OnResetProperties();
		SpatialMappingBase_OnResetProperties_mD96952885AFCEB731E9247E1627DF2460C525EE3(__this, /*hidden argument*/NULL);
		// ApplyPropertiesToCachedSurfaces();
		SpatialMappingCollider_ApplyPropertiesToCachedSurfaces_m10C3063BA564DF8C01DDA768D654DC62872F8270(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider__ctor_m01CDD801A88A20047FBE3A5BC217C8099ECF881E (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider__ctor_m01CDD801A88A20047FBE3A5BC217C8099ECF881E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool m_EnableCollisions = true;
		__this->set_m_EnableCollisions_30((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		SpatialMappingBase__ctor_m8E1FC8B9BD9C046C7D40907E7EC0DE4BB03FF0E0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingCollider::<ApplyPropertiesToCachedSurfaces>b__17_0(UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingCollider_U3CApplyPropertiesToCachedSurfacesU3Eb__17_0_mA73DFA2D4C580980672B65573925993FD1DDCBA7 (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingCollider_U3CApplyPropertiesToCachedSurfacesU3Eb__17_0_mA73DFA2D4C580980672B65573925993FD1DDCBA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (surface.meshCollider == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surface0;
		NullCheck(L_0);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_1 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (surface.gameObject != null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_3 = ___surface0;
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		// if (surface.gameObject.layer != layer)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_6 = ___surface0;
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_7, /*hidden argument*/NULL);
		int32_t L_9 = SpatialMappingCollider_get_layer_mDF2504CC5A0B8C3FC502E115CA2FEB25FBC494D2_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0041;
		}
	}
	{
		// surface.gameObject.layer = layer;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_10 = ___surface0;
		NullCheck(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_10, /*hidden argument*/NULL);
		int32_t L_12 = SpatialMappingCollider_get_layer_mDF2504CC5A0B8C3FC502E115CA2FEB25FBC494D2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// if (surface.meshCollider.material != material)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_13 = ___surface0;
		NullCheck(L_13);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_14 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_15 = Collider_get_material_m4F6B81A3CD1B3B579579EF2DBA73CEF29072766A(L_14, /*hidden argument*/NULL);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_16 = SpatialMappingCollider_get_material_mDE3ACB243D47BDF83842A25A2EAD67FA35AFBBC8_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_006a;
		}
	}
	{
		// surface.meshCollider.material = material;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_18 = ___surface0;
		NullCheck(L_18);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_19 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_18, /*hidden argument*/NULL);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_20 = SpatialMappingCollider_get_material_mDE3ACB243D47BDF83842A25A2EAD67FA35AFBBC8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Collider_set_material_m2978E803DF20381466E0BD1F41F759DA015C5E74(L_19, L_20, /*hidden argument*/NULL);
	}

IL_006a:
	{
		// if (surface.meshCollider.enabled != enableCollisions)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_21 = ___surface0;
		NullCheck(L_21);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_22 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		bool L_23 = Collider_get_enabled_mED644D98C6AC2DF95BD86145E8D31AD7081C76EB(L_22, /*hidden argument*/NULL);
		bool L_24 = SpatialMappingCollider_get_enableCollisions_mDE052E1B90664CB4D2CDE84A7DD0B55EE33A557D_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_23) == ((int32_t)L_24)))
		{
			goto IL_008e;
		}
	}
	{
		// surface.meshCollider.enabled = enableCollisions;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_25 = ___surface0;
		NullCheck(L_25);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_26 = Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline(L_25, /*hidden argument*/NULL);
		bool L_27 = SpatialMappingCollider_get_enableCollisions_mDE052E1B90664CB4D2CDE84A7DD0B55EE33A557D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B(L_26, L_27, /*hidden argument*/NULL);
	}

IL_008e:
	{
		// });
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
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext__ctor_mDFB7FF1E0AA4CAB4BFF995B48F94AA88480239FA (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext__ctor_mDFB7FF1E0AA4CAB4BFF995B48F94AA88480239FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<SMComponentRecord> m_Components = new List<SMComponentRecord>();   // registered component list
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_0 = (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 *)il2cpp_codegen_object_new(List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0_il2cpp_TypeInfo_var);
		List_1__ctor_m809A7334C75F6B61B6B4A83C1D091865819572A8(L_0, /*hidden argument*/List_1__ctor_m809A7334C75F6B61B6B4A83C1D091865819572A8_RuntimeMethod_var);
		__this->set_m_Components_2(L_0);
		// private SMBakeRequest[] m_InFlightRequests = new SMBakeRequest[kIdealInFlightSurfaceCount]; // in-flight requests
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_1 = (SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD*)(SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD*)SZArrayNew(SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_InFlightRequests_3(L_1);
		// private SpatialMappingContext() {}
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// private SpatialMappingContext() {}
		return;
	}
}
// UnityEngine.XR.WSA.SpatialMappingContext UnityEngine.XR.WSA.SpatialMappingContext::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var);
		SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * L_0 = ((SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::RegisterComponent(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SpatialMappingBase_SurfaceDataReadyCallback,UnityEngine.XR.WSA.SpatialMappingContext_GetHighestPriorityCallback,UnityEngine.XR.WSA.SurfaceObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_RegisterComponent_mB6B895662A1A2760CCC527BEEEB99D9FEBB88A75 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___smComponent0, SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * ___onDataReady1, GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * ___getHighestPri2, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___observer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_RegisterComponent_mB6B895662A1A2760CCC527BEEEB99D9FEBB88A75_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * V_0 = NULL;
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * L_0 = (U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass12_0__ctor_mB59BCFD6492BD0EF203EB3A9F0FF6DABF78E843F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * L_1 = V_0;
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_2 = ___smComponent0;
		NullCheck(L_1);
		L_1->set_smComponent_0(L_2);
		// if (smComponent == null)
		U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * L_3 = V_0;
		NullCheck(L_3);
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_4 = L_3->get_smComponent_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// throw new ArgumentNullException("smComponent");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_6 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_6, _stringLiteral85EE1AFFF61EEAA487746F3F8C1685BB1C03665C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, SpatialMappingContext_RegisterComponent_mB6B895662A1A2760CCC527BEEEB99D9FEBB88A75_RuntimeMethod_var);
	}

IL_0026:
	{
		// if (onDataReady == null)
		SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * L_7 = ___onDataReady1;
		if (L_7)
		{
			goto IL_0034;
		}
	}
	{
		// throw new ArgumentNullException("onDataReady");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_8 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_8, _stringLiteralB782D9835143821E697B67407CCFB082FE6322A9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, SpatialMappingContext_RegisterComponent_mB6B895662A1A2760CCC527BEEEB99D9FEBB88A75_RuntimeMethod_var);
	}

IL_0034:
	{
		// if (getHighestPri == null)
		GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * L_9 = ___getHighestPri2;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		// throw new ArgumentNullException("getHighestPri");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_10 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_10, _stringLiteralA5720A5DE163F01678ACB0606AF0EEED421C94EB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, SpatialMappingContext_RegisterComponent_mB6B895662A1A2760CCC527BEEEB99D9FEBB88A75_RuntimeMethod_var);
	}

IL_0042:
	{
		// if (observer == null)
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_11 = ___observer3;
		if (L_11)
		{
			goto IL_0051;
		}
	}
	{
		// throw new ArgumentNullException("observer");
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_12 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_12, _stringLiteral307527C227AC648BB119BCB457EBB8466E79827C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, SpatialMappingContext_RegisterComponent_mB6B895662A1A2760CCC527BEEEB99D9FEBB88A75_RuntimeMethod_var);
	}

IL_0051:
	{
		// SMComponentRecord findResult = m_Components.Find(record => record.m_Component == smComponent);
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_13 = __this->get_m_Components_2();
		U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * L_14 = V_0;
		Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD * L_15 = (Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD *)il2cpp_codegen_object_new(Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD_il2cpp_TypeInfo_var);
		Predicate_1__ctor_mAE0572D02E462A85D05988B526C15C18B4A43304(L_15, L_14, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass12_0_U3CRegisterComponentU3Eb__0_m46D6513DD4BD186638388DE6C9C470BB7E222E58_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_mAE0572D02E462A85D05988B526C15C18B4A43304_RuntimeMethod_var);
		NullCheck(L_13);
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_16 = List_1_Find_mEBB03AE7A46CD2A87BC5F4586A3754A34D973A52(L_13, L_15, /*hidden argument*/List_1_Find_mEBB03AE7A46CD2A87BC5F4586A3754A34D973A52_RuntimeMethod_var);
		// if (findResult.m_Component != null)
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_17 = L_16.get_m_Component_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_17, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0080;
		}
	}
	{
		// throw new ArgumentException("RegisterComponent on a component already registered!");
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_19 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_19, _stringLiteral44A541D01189AFFA834A25E0A93A328341730C75, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, SpatialMappingContext_RegisterComponent_mB6B895662A1A2760CCC527BEEEB99D9FEBB88A75_RuntimeMethod_var);
	}

IL_0080:
	{
		// rec.m_Component = smComponent;
		U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * L_20 = V_0;
		NullCheck(L_20);
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_21 = L_20->get_smComponent_0();
		(&V_1)->set_m_Component_0(L_21);
		// rec.m_OnDataReady = onDataReady;
		SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * L_22 = ___onDataReady1;
		(&V_1)->set_m_OnDataReady_1(L_22);
		// rec.m_GetHighestPri = getHighestPri;
		GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * L_23 = ___getHighestPri2;
		(&V_1)->set_m_GetHighestPri_2(L_23);
		// rec.m_SurfaceObserver = observer;
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_24 = ___observer3;
		(&V_1)->set_m_SurfaceObserver_3(L_24);
		// m_Components.Add(rec);
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_25 = __this->get_m_Components_2();
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_26 = V_1;
		NullCheck(L_25);
		List_1_Add_mFE4A7984825421BE1A7BD67AD5D60F8BB45F921E(L_25, L_26, /*hidden argument*/List_1_Add_mFE4A7984825421BE1A7BD67AD5D60F8BB45F921E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::DeregisterComponent(UnityEngine.XR.WSA.SpatialMappingBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_DeregisterComponent_m946C26760A35277770691E88358BF13ECC2BA3AB (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___smComponent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_DeregisterComponent_m946C26760A35277770691E88358BF13ECC2BA3AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89 * L_0 = (U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_0__ctor_m258CED13583C77AE211DD85B2C5D31C4B20F29D8(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89 * L_1 = V_0;
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_2 = ___smComponent0;
		NullCheck(L_1);
		L_1->set_smComponent_0(L_2);
		// int removeCount = m_Components.RemoveAll(record => record.m_Component == smComponent);
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_3 = __this->get_m_Components_2();
		U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89 * L_4 = V_0;
		Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD * L_5 = (Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD *)il2cpp_codegen_object_new(Predicate_1_t6F7540C077F0B3EA4CE6ECBBC6A77BC9442C49BD_il2cpp_TypeInfo_var);
		Predicate_1__ctor_mAE0572D02E462A85D05988B526C15C18B4A43304(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_0_U3CDeregisterComponentU3Eb__0_m6A434BBAB6DBF9AB43088046BEB801D3E0F2FD9E_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_mAE0572D02E462A85D05988B526C15C18B4A43304_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_6 = List_1_RemoveAll_m424B6644A35D9EE627723C88FFDAD1860879836B(L_3, L_5, /*hidden argument*/List_1_RemoveAll_m424B6644A35D9EE627723C88FFDAD1860879836B_RuntimeMethod_var);
		// if (removeCount == 0)
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		// throw new ArgumentException("DeregisterComponent for a component not registered!");
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_7 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_7, _stringLiteral3D9A40DDD9AF3D33ED1C157EA10B0DD27C405802, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, SpatialMappingContext_DeregisterComponent_m946C26760A35277770691E88358BF13ECC2BA3AB_RuntimeMethod_var);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::OnSurfaceDataReady(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_OnSurfaceDataReady_m1F795BCCF85F8B7A31639586905A1D987C8CCEB3 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___sd0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int inFlightIdx = GetInFlightIndexFromSD(sd);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_0 = ___sd0;
		int32_t L_1 = SpatialMappingContext_GetInFlightIndexFromSD_m46F8B14BD7A490D8FE2EE32FF7128B49EBE40F71(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// PropagateDataReadyEventToComponents(sd, outputWritten, elapsedBakeTimeSeconds, inFlightIdx);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_2 = ___sd0;
		bool L_3 = ___outputWritten1;
		float L_4 = ___elapsedBakeTimeSeconds2;
		int32_t L_5 = V_0;
		SpatialMappingContext_PropagateDataReadyEventToComponents_m0C51EC7250815992662E5D6755E2EDB252FFFF47(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// UpdateInFlightRecords(inFlightIdx, elapsedBakeTimeSeconds);
		int32_t L_6 = V_0;
		float L_7 = ___elapsedBakeTimeSeconds2;
		SpatialMappingContext_UpdateInFlightRecords_mA54F669BBA45A5CACB8A0037A8B743AD99AA0016(__this, L_6, L_7, /*hidden argument*/NULL);
		// RequestMeshPriorityFromComponents();
		SpatialMappingContext_RequestMeshPriorityFromComponents_mFB4ADB8A02E9535EB7EDB918C8E20931F41668A7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.SpatialMappingContext::GetInFlightIndexFromSD(UnityEngine.XR.WSA.SurfaceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingContext_GetInFlightIndexFromSD_m46F8B14BD7A490D8FE2EE32FF7128B49EBE40F71 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___sd0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int inFlightIndex = 0; inFlightIndex < m_InFlightRequests.Length; ++inFlightIndex)
		V_0 = 0;
		goto IL_005a;
	}

IL_0004:
	{
		// SMBakeRequest rq = m_InFlightRequests[inFlightIndex];
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_0 = __this->get_m_InFlightRequests_3();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// if (rq.m_RequestData.id.handle == sd.id.handle &&
		//     rq.m_RequestData.trianglesPerCubicMeter == sd.trianglesPerCubicMeter &&
		//     rq.m_RequestData.bakeCollider == sd.bakeCollider)
		SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  L_4 = V_1;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_5 = L_4.get_m_RequestData_0();
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_6 = L_5.get_id_0();
		int32_t L_7 = L_6.get_handle_0();
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_8 = ___sd0;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_9 = L_8.get_id_0();
		int32_t L_10 = L_9.get_handle_0();
		if ((!(((uint32_t)L_7) == ((uint32_t)L_10))))
		{
			goto IL_0056;
		}
	}
	{
		SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  L_11 = V_1;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_12 = L_11.get_m_RequestData_0();
		float L_13 = L_12.get_trianglesPerCubicMeter_4();
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_14 = ___sd0;
		float L_15 = L_14.get_trianglesPerCubicMeter_4();
		if ((!(((float)L_13) == ((float)L_15))))
		{
			goto IL_0056;
		}
	}
	{
		SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059  L_16 = V_1;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_17 = L_16.get_m_RequestData_0();
		bool L_18 = L_17.get_bakeCollider_5();
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_19 = ___sd0;
		bool L_20 = L_19.get_bakeCollider_5();
		if ((!(((uint32_t)L_18) == ((uint32_t)L_20))))
		{
			goto IL_0056;
		}
	}
	{
		// return inFlightIndex;
		int32_t L_21 = V_0;
		return L_21;
	}

IL_0056:
	{
		// for (int inFlightIndex = 0; inFlightIndex < m_InFlightRequests.Length; ++inFlightIndex)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_005a:
	{
		// for (int inFlightIndex = 0; inFlightIndex < m_InFlightRequests.Length; ++inFlightIndex)
		int32_t L_23 = V_0;
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_24 = __this->get_m_InFlightRequests_3();
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))))
		{
			goto IL_0004;
		}
	}
	{
		// return -1;
		return (-1);
	}
}
// UnityEngine.XR.WSA.SpatialMappingBase UnityEngine.XR.WSA.SpatialMappingContext::GetSMComponentFromInFlightIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * SpatialMappingContext_GetSMComponentFromInFlightIndex_mA7E5A439E80A84D3D758C77225EF03782B5D5B0C (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, int32_t ___inFlightIndex0, const RuntimeMethod* method)
{
	{
		// if (inFlightIndex < 0)
		int32_t L_0 = ___inFlightIndex0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		// return null;
		return (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *)NULL;
	}

IL_0006:
	{
		// if (m_InFlightRequests == null ||
		//     inFlightIndex >= m_InFlightRequests.Length ||
		//     m_InFlightRequests[inFlightIndex].IsClear())
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_1 = __this->get_m_InFlightRequests_3();
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___inFlightIndex0;
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_3 = __this->get_m_InFlightRequests_3();
		NullCheck(L_3);
		if ((((int32_t)L_2) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))))
		{
			goto IL_002c;
		}
	}
	{
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_4 = __this->get_m_InFlightRequests_3();
		int32_t L_5 = ___inFlightIndex0;
		NullCheck(L_4);
		bool L_6 = SMBakeRequest_IsClear_m53F4DB8A2856F46A2F7A5D02B01B77CC4F701E80((SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}

IL_002c:
	{
		// return null;
		return (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *)NULL;
	}

IL_002e:
	{
		// return m_InFlightRequests[inFlightIndex].m_Requester.m_Component;
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_7 = __this->get_m_InFlightRequests_3();
		int32_t L_8 = ___inFlightIndex0;
		NullCheck(L_7);
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_address_of_m_Requester_1();
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_10 = L_9->get_m_Component_0();
		return L_10;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::PropagateDataReadyEventToComponents(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_PropagateDataReadyEventToComponents_m0C51EC7250815992662E5D6755E2EDB252FFFF47 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___sd0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, int32_t ___inFlightIndex3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_PropagateDataReadyEventToComponents_m0C51EC7250815992662E5D6755E2EDB252FFFF47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * V_1 = NULL;
	Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406  V_2;
	memset((&V_2), 0, sizeof(V_2));
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// SpatialMappingBase.LODType lod = SpatialMappingBase.GetLODFromTPCM(sd.trianglesPerCubicMeter);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_0 = ___sd0;
		float L_1 = L_0.get_trianglesPerCubicMeter_4();
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		int32_t L_2 = SpatialMappingBase_GetLODFromTPCM_m402E6963AE9B46E0B9079A73D1730E665940F100((((double)((double)L_1))), /*hidden argument*/NULL);
		V_0 = L_2;
		// SpatialMappingBase requester = GetSMComponentFromInFlightIndex(inFlightIndex);
		int32_t L_3 = ___inFlightIndex3;
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_4 = SpatialMappingContext_GetSMComponentFromInFlightIndex_mA7E5A439E80A84D3D758C77225EF03782B5D5B0C(__this, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (outputWritten)
		bool L_5 = ___outputWritten1;
		if (!L_5)
		{
			goto IL_0078;
		}
	}
	{
		// foreach (SMComponentRecord comp in m_Components)
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_6 = __this->get_m_Components_2();
		NullCheck(L_6);
		Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406  L_7 = List_1_GetEnumerator_m939FB5AF2C64F6D130A3B5E4CFABE1354497D537(L_6, /*hidden argument*/List_1_GetEnumerator_m939FB5AF2C64F6D130A3B5E4CFABE1354497D537_RuntimeMethod_var);
		V_2 = L_7;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_0027:
		{
			// foreach (SMComponentRecord comp in m_Components)
			SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_8 = Enumerator_get_Current_m0FE874F7E7972DC563007C0182FC43C9FFCEEB37_inline((Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m0FE874F7E7972DC563007C0182FC43C9FFCEEB37_RuntimeMethod_var);
			V_3 = L_8;
			// if (comp.m_Component.lodType == lod && comp.m_Component.bakePhysics == sd.bakeCollider)
			SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_9 = V_3;
			SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_10 = L_9.get_m_Component_0();
			NullCheck(L_10);
			int32_t L_11 = SpatialMappingBase_get_lodType_m4B32B9551C2BA8DD7F9C0D7B47AE6B3B98FAC40C_inline(L_10, /*hidden argument*/NULL);
			int32_t L_12 = V_0;
			if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
			{
				goto IL_005f;
			}
		}

IL_003d:
		{
			SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_13 = V_3;
			SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_14 = L_13.get_m_Component_0();
			NullCheck(L_14);
			bool L_15 = SpatialMappingBase_get_bakePhysics_m504EB487C5E39F33813DC330A605AEAB1EB97C53_inline(L_14, /*hidden argument*/NULL);
			SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_16 = ___sd0;
			bool L_17 = L_16.get_bakeCollider_5();
			if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
			{
				goto IL_005f;
			}
		}

IL_0050:
		{
			// comp.m_OnDataReady(requester, sd, outputWritten, elapsedBakeTimeSeconds);
			SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_18 = V_3;
			SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * L_19 = L_18.get_m_OnDataReady_1();
			SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_20 = V_1;
			SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_21 = ___sd0;
			bool L_22 = ___outputWritten1;
			float L_23 = ___elapsedBakeTimeSeconds2;
			NullCheck(L_19);
			SurfaceDataReadyCallback_Invoke_mD66502272EEC1D19C35B80935FF03A6B74203B14(L_19, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		}

IL_005f:
		{
			// foreach (SMComponentRecord comp in m_Components)
			bool L_24 = Enumerator_MoveNext_m31B0D57E103FDC4AB1C9F806E4A30988A7E4BFE5((Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m31B0D57E103FDC4AB1C9F806E4A30988A7E4BFE5_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_0027;
			}
		}

IL_0068:
		{
			IL2CPP_LEAVE(0xBD, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8FD886547CD472ECD1472BB2F59C64E7D3A8759A((Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m8FD886547CD472ECD1472BB2F59C64E7D3A8759A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(106)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_JUMP_TBL(0xBD, IL_00bd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0078:
	{
		// if (inFlightIndex != -1)
		int32_t L_25 = ___inFlightIndex3;
		if ((((int32_t)L_25) == ((int32_t)(-1))))
		{
			goto IL_009e;
		}
	}
	{
		// m_InFlightRequests[inFlightIndex].m_Requester.m_OnDataReady(requester, sd, outputWritten, elapsedBakeTimeSeconds);
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_26 = __this->get_m_InFlightRequests_3();
		int32_t L_27 = ___inFlightIndex3;
		NullCheck(L_26);
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->get_address_of_m_Requester_1();
		SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * L_29 = L_28->get_m_OnDataReady_1();
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_30 = V_1;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_31 = ___sd0;
		bool L_32 = ___outputWritten1;
		float L_33 = ___elapsedBakeTimeSeconds2;
		NullCheck(L_29);
		SurfaceDataReadyCallback_Invoke_mD66502272EEC1D19C35B80935FF03A6B74203B14(L_29, L_30, L_31, L_32, L_33, /*hidden argument*/NULL);
		// }
		return;
	}

IL_009e:
	{
		// Debug.LogError(System.String.Format("SpatialMappingContext unable to notify a component about a failure to cook surface {0}!", sd.id.handle));
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_34 = ___sd0;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_35 = L_34.get_id_0();
		int32_t L_36 = L_35.get_handle_0();
		int32_t L_37 = L_36;
		RuntimeObject * L_38 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_37);
		String_t* L_39 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralAE9F75EABE0850F0B8A701C7B2478D0F8C395D79, L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_39, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::UpdateInFlightRecords(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_UpdateInFlightRecords_mA54F669BBA45A5CACB8A0037A8B743AD99AA0016 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, int32_t ___inFlightIndex0, float ___elapsedBakeTimeSeconds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_UpdateInFlightRecords_mA54F669BBA45A5CACB8A0037A8B743AD99AA0016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inFlightIndex == 0 || inFlightIndex == 1)
		int32_t L_0 = ___inFlightIndex0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_1 = ___inFlightIndex0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0055;
		}
	}

IL_0007:
	{
		// if (m_InFlightSurfaces <= 0)
		int32_t L_2 = __this->get_m_InFlightSurfaces_4();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		// Debug.LogError("SMContext:  unexpectedly got a data ready event with too few in flight surfaces!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralAC5BF571DE9975A9AA7E383FF7EA6E291929C5DE, /*hidden argument*/NULL);
		// }
		goto IL_002a;
	}

IL_001c:
	{
		// m_InFlightSurfaces--;
		int32_t L_3 = __this->get_m_InFlightSurfaces_4();
		__this->set_m_InFlightSurfaces_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)));
	}

IL_002a:
	{
		// m_InFlightRequests[inFlightIndex].Clear();
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_4 = __this->get_m_InFlightRequests_3();
		int32_t L_5 = ___inFlightIndex0;
		NullCheck(L_4);
		SMBakeRequest_Clear_m06B83E5E0425C162584388EDACD7B35036B20877((SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		// if (!m_InFlightRequests[inFlightIndex].IsClear())
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_6 = __this->get_m_InFlightRequests_3();
		int32_t L_7 = ___inFlightIndex0;
		NullCheck(L_6);
		SMBakeRequest_IsClear_m53F4DB8A2856F46A2F7A5D02B01B77CC4F701E80((SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), /*hidden argument*/NULL);
		// m_NextIndex = inFlightIndex;
		int32_t L_8 = ___inFlightIndex0;
		__this->set_m_NextIndex_5(L_8);
		// }
		return;
	}

IL_0055:
	{
		// Debug.LogError(System.String.Format("SMContext:  unable to update in flight record for an invalid index {0}!", inFlightIndex));
		int32_t L_9 = ___inFlightIndex0;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral82AA2F03AC2CF34CF663318762D43CC36CFFC6C1, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::RequestMeshPriorityFromComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_RequestMeshPriorityFromComponents_mFB4ADB8A02E9535EB7EDB918C8E20931F41668A7 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_RequestMeshPriorityFromComponents_mFB4ADB8A02E9535EB7EDB918C8E20931F41668A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_2;
	memset((&V_2), 0, sizeof(V_2));
	SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * G_B9_0 = NULL;
	SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * G_B10_1 = NULL;
	{
		// if (m_InFlightSurfaces < kIdealInFlightSurfaceCount)
		int32_t L_0 = __this->get_m_InFlightSurfaces_4();
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0110;
		}
	}
	{
		// for (int ii = 0; ii < m_Components.Count; ++ii)
		V_0 = 0;
		goto IL_00ff;
	}

IL_0013:
	{
		// SMComponentRecord comp = m_Components[ii];
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_1 = __this->get_m_Components_2();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_3 = List_1_get_Item_m36FCDE89ACB30BF2EDAF254BB88F320BDC3B3AD1_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m36FCDE89ACB30BF2EDAF254BB88F320BDC3B3AD1_RuntimeMethod_var);
		V_1 = L_3;
		// if (comp.m_GetHighestPri(out nextRequest))
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_4 = V_1;
		GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * L_5 = L_4.get_m_GetHighestPri_2();
		NullCheck(L_5);
		bool L_6 = GetHighestPriorityCallback_Invoke_m37515CB5805D3810F8777B1244EFB401A26939D3(L_5, (SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *)(&V_2), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00fb;
		}
	}
	{
		// if (-1 == m_NextIndex || !m_InFlightRequests[m_NextIndex].IsClear())
		int32_t L_7 = __this->get_m_NextIndex_5();
		if ((((int32_t)(-1)) == ((int32_t)L_7)))
		{
			goto IL_0053;
		}
	}
	{
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_8 = __this->get_m_InFlightRequests_3();
		int32_t L_9 = __this->get_m_NextIndex_5();
		NullCheck(L_8);
		bool L_10 = SMBakeRequest_IsClear_m53F4DB8A2856F46A2F7A5D02B01B77CC4F701E80((SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_006e;
		}
	}

IL_0053:
	{
		// Debug.LogError(System.String.Format("SMContext:  next index {0} may not be clear!", m_NextIndex));
		int32_t L_11 = __this->get_m_NextIndex_5();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralF9641356B56AB3E220318DB9A52C7620EC3E8076, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_14, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006e:
	{
		// if (comp.m_SurfaceObserver.RequestMeshAsync(nextRequest, OnSurfaceDataReady))
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_15 = V_1;
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_16 = L_15.get_m_SurfaceObserver_3();
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_17 = V_2;
		SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * L_18 = (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 *)il2cpp_codegen_object_new(SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092_il2cpp_TypeInfo_var);
		SurfaceDataReadyDelegate__ctor_mB653644D30A5B829714DDEE56B57C2C01AE263E2(L_18, __this, (intptr_t)((intptr_t)SpatialMappingContext_OnSurfaceDataReady_m1F795BCCF85F8B7A31639586905A1D987C8CCEB3_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		bool L_19 = SurfaceObserver_RequestMeshAsync_mF7815161E179CE34FBB9FC52127DAE4B39FEBE95(L_16, L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00f0;
		}
	}
	{
		// m_InFlightRequests[m_NextIndex].m_RequestData = nextRequest;
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_20 = __this->get_m_InFlightRequests_3();
		int32_t L_21 = __this->get_m_NextIndex_5();
		NullCheck(L_20);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_22 = V_2;
		((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->set_m_RequestData_0(L_22);
		// m_InFlightRequests[m_NextIndex].m_Requester = comp;
		SMBakeRequestU5BU5D_t061F4BF5C0EBA3134662FFE7D50CF7B67CCCECDD* L_23 = __this->get_m_InFlightRequests_3();
		int32_t L_24 = __this->get_m_NextIndex_5();
		NullCheck(L_23);
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_25 = V_1;
		((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->set_m_Requester_1(L_25);
		// m_InFlightSurfaces++;
		int32_t L_26 = __this->get_m_InFlightSurfaces_4();
		__this->set_m_InFlightSurfaces_4(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)));
		// m_NextIndex = m_NextIndex == 1 ? 0 : 1;
		int32_t L_27 = __this->get_m_NextIndex_5();
		G_B8_0 = __this;
		if ((((int32_t)L_27) == ((int32_t)1)))
		{
			G_B9_0 = __this;
			goto IL_00d1;
		}
	}
	{
		G_B10_0 = 1;
		G_B10_1 = G_B8_0;
		goto IL_00d2;
	}

IL_00d1:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B9_0;
	}

IL_00d2:
	{
		NullCheck(G_B10_1);
		G_B10_1->set_m_NextIndex_5(G_B10_0);
		// m_Components.RemoveAt(ii);
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_28 = __this->get_m_Components_2();
		int32_t L_29 = V_0;
		NullCheck(L_28);
		List_1_RemoveAt_mBD9EA372A02B0E0D2612A0E5404BB83EAA7521A4(L_28, L_29, /*hidden argument*/List_1_RemoveAt_mBD9EA372A02B0E0D2612A0E5404BB83EAA7521A4_RuntimeMethod_var);
		// m_Components.Add(comp);
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_30 = __this->get_m_Components_2();
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_31 = V_1;
		NullCheck(L_30);
		List_1_Add_mFE4A7984825421BE1A7BD67AD5D60F8BB45F921E(L_30, L_31, /*hidden argument*/List_1_Add_mFE4A7984825421BE1A7BD67AD5D60F8BB45F921E_RuntimeMethod_var);
		// break;
		return;
	}

IL_00f0:
	{
		// Debug.LogError("SMContext:  unexpected failure requesting mesh bake!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral83D748A4D24B0945189E5C60B86FCDCF5E71A290, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00fb:
	{
		// for (int ii = 0; ii < m_Components.Count; ++ii)
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00ff:
	{
		// for (int ii = 0; ii < m_Components.Count; ++ii)
		int32_t L_33 = V_0;
		List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * L_34 = __this->get_m_Components_2();
		NullCheck(L_34);
		int32_t L_35 = List_1_get_Count_m9B40973BA15B5CD9FCC23B9A8882D7E4BDF82D4E_inline(L_34, /*hidden argument*/List_1_get_Count_m9B40973BA15B5CD9FCC23B9A8882D7E4BDF82D4E_RuntimeMethod_var);
		if ((((int32_t)L_33) < ((int32_t)L_35)))
		{
			goto IL_0013;
		}
	}

IL_0110:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::ComponentHasDataRequests()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext_ComponentHasDataRequests_mC2F6B6B3E7534483426C6D7DB5D1437B7E593FD2 (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * __this, const RuntimeMethod* method)
{
	{
		// RequestMeshPriorityFromComponents();
		SpatialMappingContext_RequestMeshPriorityFromComponents_mFB4ADB8A02E9535EB7EDB918C8E20931F41668A7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingContext__cctor_m260437823EB2F876C7064C2D2E1BD4EBFE02FA73 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext__cctor_m260437823EB2F876C7064C2D2E1BD4EBFE02FA73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly SpatialMappingContext instance = new SpatialMappingContext();
		SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * L_0 = (SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 *)il2cpp_codegen_object_new(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var);
		SpatialMappingContext__ctor_mDFB7FF1E0AA4CAB4BFF995B48F94AA88480239FA(L_0, /*hidden argument*/NULL);
		((SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var))->set_instance_0(L_0);
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
// System.Void UnityEngine.XR.WSA.SpatialMappingContext_<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mB59BCFD6492BD0EF203EB3A9F0FF6DABF78E843F (U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext_<>c__DisplayClass12_0::<RegisterComponent>b__0(UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CRegisterComponentU3Eb__0_m46D6513DD4BD186638388DE6C9C470BB7E222E58 (U3CU3Ec__DisplayClass12_0_t5A8DD8388DA2F2660BC9041A608B07D1574C7692 * __this, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  ___record0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass12_0_U3CRegisterComponentU3Eb__0_m46D6513DD4BD186638388DE6C9C470BB7E222E58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SMComponentRecord findResult = m_Components.Find(record => record.m_Component == smComponent);
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_0 = ___record0;
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_1 = L_0.get_m_Component_0();
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_2 = __this->get_smComponent_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.WSA.SpatialMappingContext_<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m258CED13583C77AE211DD85B2C5D31C4B20F29D8 (U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext_<>c__DisplayClass13_0::<DeregisterComponent>b__0(UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CDeregisterComponentU3Eb__0_m6A434BBAB6DBF9AB43088046BEB801D3E0F2FD9E (U3CU3Ec__DisplayClass13_0_tC8ABC512A767F0D043F020D684BEAF1867207A89 * __this, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  ___record0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_0_U3CDeregisterComponentU3Eb__0_m6A434BBAB6DBF9AB43088046BEB801D3E0F2FD9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int removeCount = m_Components.RemoveAll(record => record.m_Component == smComponent);
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_0 = ___record0;
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_1 = L_0.get_m_Component_0();
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_2 = __this->get_smComponent_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.WSA.SpatialMappingContext_GetHighestPriorityCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetHighestPriorityCallback__ctor_mE530B9BA18B7BC04379A0A1AE8BA2C6F8FC7166D (GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext_GetHighestPriorityCallback::Invoke(UnityEngine.XR.WSA.SurfaceData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GetHighestPriorityCallback_Invoke_m37515CB5805D3810F8777B1244EFB401A26939D3 (GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * ___dataRequest0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___dataRequest0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___dataRequest0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___dataRequest0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * >::Invoke(targetMethod, targetThis, ___dataRequest0);
					else
						result = GenericVirtFuncInvoker1< bool, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * >::Invoke(targetMethod, targetThis, ___dataRequest0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___dataRequest0);
					else
						result = VirtFuncInvoker1< bool, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___dataRequest0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___dataRequest0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.XR.WSA.SpatialMappingContext_GetHighestPriorityCallback::BeginInvoke(UnityEngine.XR.WSA.SurfaceData&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetHighestPriorityCallback_BeginInvoke_m2A878301B1FFBF9ABEE18370CA9A9CF01C5F76D6 (GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * ___dataRequest0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetHighestPriorityCallback_BeginInvoke_m2A878301B1FFBF9ABEE18370CA9A9CF01C5F76D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_il2cpp_TypeInfo_var, &*___dataRequest0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext_GetHighestPriorityCallback::EndInvoke(UnityEngine.XR.WSA.SurfaceData&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GetHighestPriorityCallback_EndInvoke_mCA844ABE6B29A94D31D1AAF7E78BE2ED452BB9B3 (GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * ___dataRequest0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___dataRequest0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif




// Conversion methods for marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
IL2CPP_EXTERN_C void SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshal_pinvoke(const SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059& unmarshaled, SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_RequestData_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_RequestData' of type 'SMBakeRequest'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_RequestData_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshal_pinvoke_back(const SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshaled_pinvoke& marshaled, SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059& unmarshaled)
{
	Exception_t* ___m_RequestData_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_RequestData' of type 'SMBakeRequest'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_RequestData_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
IL2CPP_EXTERN_C void SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshal_pinvoke_cleanup(SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshaled_pinvoke& marshaled)
{
}




// Conversion methods for marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
IL2CPP_EXTERN_C void SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshal_com(const SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059& unmarshaled, SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshaled_com& marshaled)
{
	Exception_t* ___m_RequestData_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_RequestData' of type 'SMBakeRequest'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_RequestData_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshal_com_back(const SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshaled_com& marshaled, SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059& unmarshaled)
{
	Exception_t* ___m_RequestData_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_RequestData' of type 'SMBakeRequest'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_RequestData_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMBakeRequest
IL2CPP_EXTERN_C void SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshal_com_cleanup(SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext_SMBakeRequest::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMBakeRequest_Clear_m06B83E5E0425C162584388EDACD7B35036B20877 (SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 * __this, const RuntimeMethod* method)
{
	{
		// m_RequestData.id.handle = 0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * L_0 = __this->get_address_of_m_RequestData_0();
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF * L_1 = L_0->get_address_of_id_0();
		L_1->set_handle_0(0);
		// m_Requester.Clear();
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * L_2 = __this->get_address_of_m_Requester_1();
		SMComponentRecord_Clear_m16E7BF8A084693BD832C2FA516DA22B83922AE52((SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C *)L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SMBakeRequest_Clear_m06B83E5E0425C162584388EDACD7B35036B20877_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 * _thisAdjusted = reinterpret_cast<SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 *>(__this + 1);
	SMBakeRequest_Clear_m06B83E5E0425C162584388EDACD7B35036B20877(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext_SMBakeRequest::IsClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SMBakeRequest_IsClear_m53F4DB8A2856F46A2F7A5D02B01B77CC4F701E80 (SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 * __this, const RuntimeMethod* method)
{
	{
		// return (m_RequestData.id.handle == 0 && m_Requester.IsClear());
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * L_0 = __this->get_address_of_m_RequestData_0();
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF * L_1 = L_0->get_address_of_id_0();
		int32_t L_2 = L_1->get_handle_0();
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * L_3 = __this->get_address_of_m_Requester_1();
		bool L_4 = SMComponentRecord_IsClear_m13D8CF67F23D1CD984F7B8E8BB371DCC1F128A6C((SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C *)L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SMBakeRequest_IsClear_m53F4DB8A2856F46A2F7A5D02B01B77CC4F701E80_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 * _thisAdjusted = reinterpret_cast<SMBakeRequest_tFD8DB762AEF9457B4E77417EA151D93CF413E059 *>(__this + 1);
	return SMBakeRequest_IsClear_m53F4DB8A2856F46A2F7A5D02B01B77CC4F701E80(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_pinvoke(const SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C& unmarshaled, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Component_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Component' of type 'SMComponentRecord': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Component_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_pinvoke_back(const SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke& marshaled, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C& unmarshaled)
{
	Exception_t* ___m_Component_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Component' of type 'SMComponentRecord': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Component_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_pinvoke_cleanup(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_com(const SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C& unmarshaled, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com& marshaled)
{
	Exception_t* ___m_Component_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Component' of type 'SMComponentRecord': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Component_0Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_com_back(const SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com& marshaled, SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C& unmarshaled)
{
	Exception_t* ___m_Component_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Component' of type 'SMComponentRecord': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Component_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SpatialMappingContext/SMComponentRecord
IL2CPP_EXTERN_C void SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshal_com_cleanup(SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord::.ctor(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SpatialMappingBase_SurfaceDataReadyCallback,UnityEngine.XR.WSA.SpatialMappingContext_GetHighestPriorityCallback,UnityEngine.XR.WSA.SurfaceObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMComponentRecord__ctor_m9F5AE01ADB354FDCDB2365586B659BA3ED2A489C (SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___comp0, SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * ___onDataReady1, GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * ___getHighestPri2, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___observer3, const RuntimeMethod* method)
{
	{
		// m_Component = comp;
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_0 = ___comp0;
		__this->set_m_Component_0(L_0);
		// m_OnDataReady = onDataReady;
		SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * L_1 = ___onDataReady1;
		__this->set_m_OnDataReady_1(L_1);
		// m_GetHighestPri = getHighestPri;
		GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * L_2 = ___getHighestPri2;
		__this->set_m_GetHighestPri_2(L_2);
		// m_SurfaceObserver = observer;
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_3 = ___observer3;
		__this->set_m_SurfaceObserver_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SMComponentRecord__ctor_m9F5AE01ADB354FDCDB2365586B659BA3ED2A489C_AdjustorThunk (RuntimeObject * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___comp0, SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * ___onDataReady1, GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * ___getHighestPri2, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___observer3, const RuntimeMethod* method)
{
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * _thisAdjusted = reinterpret_cast<SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C *>(__this + 1);
	SMComponentRecord__ctor_m9F5AE01ADB354FDCDB2365586B659BA3ED2A489C(_thisAdjusted, ___comp0, ___onDataReady1, ___getHighestPri2, ___observer3, method);
}
// System.Void UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SMComponentRecord_Clear_m16E7BF8A084693BD832C2FA516DA22B83922AE52 (SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * __this, const RuntimeMethod* method)
{
	{
		// m_Component = null;
		__this->set_m_Component_0((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 *)NULL);
		// m_OnDataReady = null;
		__this->set_m_OnDataReady_1((SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 *)NULL);
		// m_GetHighestPri = null;
		__this->set_m_GetHighestPri_2((GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 *)NULL);
		// m_SurfaceObserver = null;
		__this->set_m_SurfaceObserver_3((SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 *)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SMComponentRecord_Clear_m16E7BF8A084693BD832C2FA516DA22B83922AE52_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * _thisAdjusted = reinterpret_cast<SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C *>(__this + 1);
	SMComponentRecord_Clear_m16E7BF8A084693BD832C2FA516DA22B83922AE52(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.SpatialMappingContext_SMComponentRecord::IsClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SMComponentRecord_IsClear_m13D8CF67F23D1CD984F7B8E8BB371DCC1F128A6C (SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SMComponentRecord_IsClear_m13D8CF67F23D1CD984F7B8E8BB371DCC1F128A6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Component == null
		//     && m_OnDataReady == null
		//     && m_GetHighestPri == null
		//     && m_SurfaceObserver == null;
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_0 = __this->get_m_Component_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		SurfaceDataReadyCallback_t534FB5C4E7192E6A02B5D39352EA1F35B770D592 * L_2 = __this->get_m_OnDataReady_1();
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		GetHighestPriorityCallback_tD9FA96BD5B1C533B326EFB828D2111E9096850E6 * L_3 = __this->get_m_GetHighestPri_2();
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_4 = __this->get_m_SurfaceObserver_3();
		return (bool)((((RuntimeObject*)(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_0028:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SMComponentRecord_IsClear_m13D8CF67F23D1CD984F7B8E8BB371DCC1F128A6C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C * _thisAdjusted = reinterpret_cast<SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C *>(__this + 1);
	return SMComponentRecord_IsClear_m13D8CF67F23D1CD984F7B8E8BB371DCC1F128A6C(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.WSA.SpatialMappingRenderer_RenderState UnityEngine.XR.WSA.SpatialMappingRenderer::get_renderState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialMappingRenderer_get_renderState_m1ECB7DED90F00AF9947CC552372FACC39692D84D (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	{
		// return m_CurrentRenderState;
		int32_t L_0 = __this->get_m_CurrentRenderState_28();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::set_renderState(UnityEngine.XR.WSA.SpatialMappingRenderer_RenderState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_renderState_m1EF74C07097DF228573AC8A1BBE6EC81991B6797 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// m_CurrentRenderState = value;
		int32_t L_0 = ___value0;
		__this->set_m_CurrentRenderState_28(L_0);
		// ApplyPropertiesToCachedSurfaces();
		SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_m4A1143EA5BD1F01EFD936CBE17BFD9F60E96D4E6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::get_visualMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * SpatialMappingRenderer_get_visualMaterial_mBFDEB3C06FA62BF6BA399F46B98FECC0E11F9AAC (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	{
		// return m_VisualMaterial;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_m_VisualMaterial_29();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::set_visualMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_visualMaterial_m37951EE6A85FF912FDC66F153E20DEED86FC2977 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method)
{
	{
		// m_VisualMaterial = value;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ___value0;
		__this->set_m_VisualMaterial_29(L_0);
		// }
		return;
	}
}
// UnityEngine.Material UnityEngine.XR.WSA.SpatialMappingRenderer::get_occlusionMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * SpatialMappingRenderer_get_occlusionMaterial_m7F15BD9F8CEA72EA91A03FBE74B8DEA2E3ADB609 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	{
		// return m_OcclusionMaterial;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_m_OcclusionMaterial_30();
		return L_0;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::set_occlusionMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_occlusionMaterial_m66E2E43D1C3A6B9A4BA2D46C477117D0D44113EB (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method)
{
	{
		// m_OcclusionMaterial = value;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ___value0;
		__this->set_m_OcclusionMaterial_30(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::OnSurfaceDataReady(UnityEngine.XR.WSA.SpatialMappingBase,UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_OnSurfaceDataReady_m56A9DA233D30E9AD4411B7039F676377315AB648 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * ___requester0, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData1, bool ___outputWritten2, float ___elapsedBakeTimeSeconds3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer_OnSurfaceDataReady_m56A9DA233D30E9AD4411B7039F676377315AB648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * V_0 = NULL;
	{
		// if (!surfaceObjects.TryGetValue(bakedData.id.handle, out surface))
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_0 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_1 = ___bakedData1;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_2 = L_1.get_id_0();
		int32_t L_3 = L_2.get_handle_0();
		NullCheck(L_0);
		bool L_4 = Dictionary_2_TryGetValue_m7501EF97709D94AB3BF3F3D0584A35DC80739391(L_0, L_3, (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m7501EF97709D94AB3BF3F3D0584A35DC80739391_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		return;
	}

IL_001b:
	{
		// surface.awaitingBake = false;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_5 = V_0;
		NullCheck(L_5);
		Surface_set_awaitingBake_m1B9DEFB75F42C6C83BB7AA2F913C9D4DB8940D30_inline(L_5, (bool)0, /*hidden argument*/NULL);
		// if (!outputWritten)
		bool L_6 = ___outputWritten2;
		if (L_6)
		{
			goto IL_0026;
		}
	}
	{
		// return;
		return;
	}

IL_0026:
	{
		// if (surface.gameObject == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_7 = V_0;
		NullCheck(L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		// Debug.LogError(string.Format("A SpatialMappingRenderer component can not apply baked data to a surface with id \"{0}\" because its GameObject is null.", bakedData.id.handle));
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_10 = ___bakedData1;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_11 = L_10.get_id_0();
		int32_t L_12 = L_11.get_handle_0();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral62234BEF4038675D8DA131376AEB172897EAB03D, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_15, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0054:
	{
		// if (requester != this)
		SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * L_16 = ___requester0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_16, __this, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		// CloneBakedComponents(bakedData, surface);
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_18 = ___bakedData1;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_19 = V_0;
		SpatialMappingBase_CloneBakedComponents_m23E578161C00C4D9E8F604B80A68CC60B6F58709(__this, L_18, L_19, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// if (surface.meshRenderer == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_20 = V_0;
		NullCheck(L_20);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_21 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_21, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00bb;
		}
	}
	{
		// surface.meshRenderer = surface.gameObject.GetComponent<MeshRenderer>();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_23 = V_0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_24 = V_0;
		NullCheck(L_24);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_26 = GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72(L_25, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var);
		NullCheck(L_23);
		Surface_set_meshRenderer_m0335D482C3F99120D303FE66F440E004BE430C59_inline(L_23, L_26, /*hidden argument*/NULL);
		// if (surface.meshRenderer == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_27 = V_0;
		NullCheck(L_27);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_28 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_29 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_28, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00a3;
		}
	}
	{
		// surface.meshRenderer = surface.gameObject.AddComponent<MeshRenderer>();
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_30 = V_0;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_31 = V_0;
		NullCheck(L_31);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_32 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_33 = GameObject_AddComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m16409C054F66125E0380BDDDB1454118A3BAD60E(L_32, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m16409C054F66125E0380BDDDB1454118A3BAD60E_RuntimeMethod_var);
		NullCheck(L_30);
		Surface_set_meshRenderer_m0335D482C3F99120D303FE66F440E004BE430C59_inline(L_30, L_33, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// surface.meshRenderer.receiveShadows = false;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_34 = V_0;
		NullCheck(L_34);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_35 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		Renderer_set_receiveShadows_mD2BD2FF58156E328677EAE5E175D2069BC2925A0(L_35, (bool)0, /*hidden argument*/NULL);
		// surface.meshRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_36 = V_0;
		NullCheck(L_36);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_37 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Renderer_set_shadowCastingMode_mC7E601EE9B32B63097B216C78ED4F854B0AF21EC(L_37, 0, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		// ApplyRenderSettings(surface.meshRenderer);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_38 = V_0;
		NullCheck(L_38);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_39 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_38, /*hidden argument*/NULL);
		SpatialMappingRenderer_ApplyRenderSettings_mBFC9F7F75BC0D932F1BF21C2248976D941502270(__this, L_39, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::OnBeginSurfaceEviction(System.Boolean,UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_OnBeginSurfaceEviction_mD9D12795317AAE76C9B19832A3560D77A9706644 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, bool ___shouldBeActiveWhileRemoved0, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer_OnBeginSurfaceEviction_mD9D12795317AAE76C9B19832A3560D77A9706644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (surface.gameObject == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surface1;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (surface.meshRenderer == null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_3 = ___surface1;
		NullCheck(L_3);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_4 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// surface.meshRenderer.enabled = shouldBeActiveWhileRemoved;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_6 = ___surface1;
		NullCheck(L_6);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_7 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_6, /*hidden argument*/NULL);
		bool L_8 = ___shouldBeActiveWhileRemoved0;
		NullCheck(L_7);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::ApplyPropertiesToCachedSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_m4A1143EA5BD1F01EFD936CBE17BFD9F60E96D4E6 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_m4A1143EA5BD1F01EFD936CBE17BFD9F60E96D4E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (surfaceObjects == null || surfaceObjects.Count == 0)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_0 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_1 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0(L_1, /*hidden argument*/Dictionary_2_get_Count_m86953FA26D590BCD5DB396D0948773984A5F18C0_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_3 = SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  L_4 = Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0066;
		}

IL_0024:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  L_5 = Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_inline((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_RuntimeMethod_var);
			V_1 = L_5;
			// GameObject go = kvp.Value.gameObject;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_6 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_6);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline(L_6, /*hidden argument*/NULL);
			// if (go == null)
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_8 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0066;
			}
		}

IL_0040:
		{
			// if (kvp.Value.meshRenderer == null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_9 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_9);
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_10 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_9, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_11 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_0066;
			}
		}

IL_0054:
		{
			// ApplyRenderSettings(kvp.Value.meshRenderer);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_12 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_12);
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_13 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_12, /*hidden argument*/NULL);
			SpatialMappingRenderer_ApplyRenderSettings_mBFC9F7F75BC0D932F1BF21C2248976D941502270(__this, L_13, /*hidden argument*/NULL);
		}

IL_0066:
		{
			// foreach (KeyValuePair<int, Surface> kvp in surfaceObjects)
			bool L_14 = Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0024;
			}
		}

IL_006f:
		{
			IL2CPP_LEAVE(0x7F, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239_RuntimeMethod_var);
		IL2CPP_END_FINALLY(113)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007f:
	{
		// foreach (KeyValuePair<int, SpatialMappingBase.Surface> kvp in pendingSurfacesForEviction)
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_15 = SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421  L_16 = Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC(L_15, /*hidden argument*/Dictionary_2_GetEnumerator_m71C1FB88F7791FE16499D3E207E9BC7213EFC7FC_RuntimeMethod_var);
		V_0 = L_16;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00e4;
		}

IL_008d:
		{
			// foreach (KeyValuePair<int, SpatialMappingBase.Surface> kvp in pendingSurfacesForEviction)
			KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C  L_17 = Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_inline((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m244236381F49C4A0B16633261EF3DCD9AE1E964F_RuntimeMethod_var);
			V_2 = L_17;
			// if (kvp.Value.meshRenderer == null)
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_18 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_18);
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_19 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_18, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_20 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_19, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (L_20)
			{
				goto IL_00e4;
			}
		}

IL_00a9:
		{
			// ApplyRenderSettings(kvp.Value.meshRenderer);
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_21 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_21);
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_22 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_21, /*hidden argument*/NULL);
			SpatialMappingRenderer_ApplyRenderSettings_mBFC9F7F75BC0D932F1BF21C2248976D941502270(__this, L_22, /*hidden argument*/NULL);
			// if (ShouldRemainActiveWhileBeingRemoved(kvp.Value))
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_23 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			bool L_24 = SpatialMappingBase_ShouldRemainActiveWhileBeingRemoved_m12CBB39C4EF687E718B416B8421EE8E0CD976BE5(__this, L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00e4;
			}
		}

IL_00ca:
		{
			// kvp.Value.meshRenderer.enabled = renderState != RenderState.None;
			Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_25 = KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_inline((KeyValuePair_2_t2F0CF8035FCB6AC909E3E09AEE9937737A5A261C *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m0B73E550C9AC0A2ED026301330991B3CEAA8AD19_RuntimeMethod_var);
			NullCheck(L_25);
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_26 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_25, /*hidden argument*/NULL);
			int32_t L_27 = SpatialMappingRenderer_get_renderState_m1ECB7DED90F00AF9947CC552372FACC39692D84D_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_26);
			Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_26, (bool)((!(((uint32_t)L_27) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		}

IL_00e4:
		{
			// foreach (KeyValuePair<int, SpatialMappingBase.Surface> kvp in pendingSurfacesForEviction)
			bool L_28 = Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m59C42E79D4FAE35A2B59065C3DA8532461D208C4_RuntimeMethod_var);
			if (L_28)
			{
				goto IL_008d;
			}
		}

IL_00ed:
		{
			IL2CPP_LEAVE(0xFD, FINALLY_00ef);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ef;
	}

FINALLY_00ef:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239((Enumerator_t1AC22128CFF873D000D11F7ECD00413F0955E421 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m90C5FF6A4C9334934034F29B64F7ABB945FF1239_RuntimeMethod_var);
		IL2CPP_END_FINALLY(239)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(239)
	{
		IL2CPP_JUMP_TBL(0xFD, IL_00fd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00fd:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::ApplyRenderSettings(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_ApplyRenderSettings_mBFC9F7F75BC0D932F1BF21C2248976D941502270 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___meshRenderer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer_ApplyRenderSettings_mBFC9F7F75BC0D932F1BF21C2248976D941502270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (meshRenderer == null)
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = ___meshRenderer0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// switch (renderState)
		int32_t L_2 = SpatialMappingRenderer_get_renderState_m1ECB7DED90F00AF9947CC552372FACC39692D84D_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_004c;
			}
			case 1:
			{
				goto IL_0024;
			}
			case 2:
			{
				goto IL_0038;
			}
		}
	}
	{
		return;
	}

IL_0024:
	{
		// meshRenderer.sharedMaterial = occlusionMaterial;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_4 = ___meshRenderer0;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = SpatialMappingRenderer_get_occlusionMaterial_m7F15BD9F8CEA72EA91A03FBE74B8DEA2E3ADB609_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_4, L_5, /*hidden argument*/NULL);
		// meshRenderer.enabled = true;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_6 = ___meshRenderer0;
		NullCheck(L_6);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_6, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0038:
	{
		// meshRenderer.sharedMaterial = visualMaterial;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_7 = ___meshRenderer0;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_8 = SpatialMappingRenderer_get_visualMaterial_mBFDEB3C06FA62BF6BA399F46B98FECC0E11F9AAC_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_7, L_8, /*hidden argument*/NULL);
		// meshRenderer.enabled = true;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_9 = ___meshRenderer0;
		NullCheck(L_9);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_9, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004c:
	{
		// meshRenderer.enabled = false;
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_10 = ___meshRenderer0;
		NullCheck(L_10);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_10, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::DestroySurface(UnityEngine.XR.WSA.SpatialMappingBase_Surface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_DestroySurface_m86D5C7F8C663A81D126D9EB0748B67E5533C460E (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * ___surface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer_DestroySurface_m86D5C7F8C663A81D126D9EB0748B67E5533C460E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (surface.meshRenderer != null)
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_0 = ___surface0;
		NullCheck(L_0);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_1 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// surface.meshRenderer.sharedMaterial = null;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_3 = ___surface0;
		NullCheck(L_3);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_4 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_4, (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)NULL, /*hidden argument*/NULL);
		// surface.meshRenderer.enabled = false;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_5 = ___surface0;
		NullCheck(L_5);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_6 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_6, (bool)0, /*hidden argument*/NULL);
		// Destroy(surface.meshRenderer);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_7 = ___surface0;
		NullCheck(L_7);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_8 = Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_8, /*hidden argument*/NULL);
		// surface.meshRenderer = null;
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_9 = ___surface0;
		NullCheck(L_9);
		Surface_set_meshRenderer_m0335D482C3F99120D303FE66F440E004BE430C59_inline(L_9, (MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED *)NULL, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// base.DestroySurface(surface);
		Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * L_10 = ___surface0;
		SpatialMappingBase_DestroySurface_m2E97118945643308BFDBD7AF3FE67E782A352232(__this, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_OnDestroy_m192B0867CB7160FA2D95A2E9F853392743C9D55F (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	{
		// occlusionMaterial = null;
		SpatialMappingRenderer_set_occlusionMaterial_m66E2E43D1C3A6B9A4BA2D46C477117D0D44113EB_inline(__this, (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)NULL, /*hidden argument*/NULL);
		// visualMaterial = null;
		SpatialMappingRenderer_set_visualMaterial_m37951EE6A85FF912FDC66F153E20DEED86FC2977_inline(__this, (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)NULL, /*hidden argument*/NULL);
		// base.OnDestroy();
		SpatialMappingBase_OnDestroy_m6795E2E2E1983D0907A8AF4AB3DB2AC57A021FAF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::OnResetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_OnResetProperties_m9213C484DC309191417083863F27F02614DD3486 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	{
		// base.OnResetProperties();
		SpatialMappingBase_OnResetProperties_mD96952885AFCEB731E9247E1627DF2460C525EE3(__this, /*hidden argument*/NULL);
		// ApplyPropertiesToCachedSurfaces();
		SpatialMappingRenderer_ApplyPropertiesToCachedSurfaces_m4A1143EA5BD1F01EFD936CBE17BFD9F60E96D4E6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer_Reset_mB17586D6D94461FB8F549091859BE93D5FC1F1E9 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	{
		// base.Reset();
		SpatialMappingBase_Reset_mA301DEA773711EFFDEBB63062035968C9AF0BB1B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SpatialMappingRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMappingRenderer__ctor_mD783EF2BB1209F0757618E5160560E6135227CD3 (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingRenderer__ctor_mD783EF2BB1209F0757618E5160560E6135227CD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private RenderState m_CurrentRenderState = RenderState.Occlusion;
		__this->set_m_CurrentRenderState_28(1);
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		SpatialMappingBase__ctor_m8E1FC8B9BD9C046C7D40907E7EC0DE4BB03FF0E0(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float HoloLensInputModule_get_timeToPressOnTap_mBD2147FC62595E28208399F99E992E38EA380AE3_inline (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method)
{
	{
		// get { return m_TimeToPressOnTap; }
		float L_0 = __this->get_m_TimeToPressOnTap_31();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float HoloLensInputModule_get_normalizedNavigationToScreenOffsetScalar_m16CC0F67B1AFC354CB396C175319DE50A325CE88_inline (HoloLensInputModule_tC36B61820547C510BC172F7EA408C6C9AC1C2FFB * __this, const RuntimeMethod* method)
{
	{
		// get { return m_NormalizedNavigationToScreenOffsetScalar; }
		float L_0 = __this->get_m_NormalizedNavigationToScreenOffsetScalar_30();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool StandaloneInputModule_get_forceModuleActive_m6D41F04E01F96727E0246D6B74F63E0312E25022_inline (StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ForceModuleActive; }
		bool L_0 = __this->get_m_ForceModuleActive_29();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * StandaloneInputModule_GetCurrentFocusedGameObject_mA354FCB4E2546E1F49D165207705A26D29EBB3D7_inline (StandaloneInputModule_tF3BDE3C0D374D1A0C87654254FA5E74F6B8C1EF5 * __this, const RuntimeMethod* method)
{
	{
		// return m_CurrentFocusedGameObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_m_CurrentFocusedGameObject_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * BaseInputModule_get_eventSystem_mEF6DEC17FF56D786AA217A52FCCFE8C6F38546BE_inline (BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_EventSystem; }
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_0 = __this->get_m_EventSystem_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_observerId_mCFC284EC63E22158DB33B98BFF0054B7391623B6_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected int observerId { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CobserverIdU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceObjects_m6C2B943132FDD8EFD802E6E33840403E6F2E7FC4_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * ___value0, const RuntimeMethod* method)
{
	{
		// protected Dictionary<int, Surface> surfaceObjects { get; set; }
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_0 = ___value0;
		__this->set_U3CsurfaceObjectsU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_selectedCamera_m4EA8D7E1314E0127DE428CA4EDEAB7FB11CD8530_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___value0, const RuntimeMethod* method)
{
	{
		// protected Camera selectedCamera { get; set; }
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = ___value0;
		__this->set_U3CselectedCameraU3Ek__BackingField_21(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_nextSurfaceChangeUpdateTime_m1E8290163671531F2322527637FFD40A8C686D01_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// protected float nextSurfaceChangeUpdateTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceObserver_m3D68912C7732A9AE43927DE861E7CBE4CAD284EF_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * ___value0, const RuntimeMethod* method)
{
	{
		// protected SurfaceObserver surfaceObserver { get; set; }
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_0 = ___value0;
		__this->set_U3CsurfaceObserverU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingContext_get_Instance_mA5271449E43E6E5007DDB44EA5A45D2654F37010Unity_XR_WindowsMR_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var);
		SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956 * L_0 = ((SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingContext_tA89EB4233F15400EB4738958914DC70FE97D5956_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * SpatialMappingBase_get_surfaceObserver_mCCFB2C005717E6F95DEF12840A43E6711CB1E168_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected SurfaceObserver surfaceObserver { get; set; }
		SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * L_0 = __this->get_U3CsurfaceObserverU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SpatialMappingBase_get_halfBoxExtents_m13BDC602E59A22A2237003FB8CB41180AFA2081F_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_HalfBoxExtents; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_HalfBoxExtents_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_bounds_m6680CBDDEE20D18FE05417E5BC0C0A3518D9149A_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___value0, const RuntimeMethod* method)
{
	{
		// protected Bounds bounds { get; set; }
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_0 = ___value0;
		__this->set_U3CboundsU3Ek__BackingField_19(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * SpatialMappingBase_get_surfaceObjects_m8D21B783515D61BEB6B28A954D614A6F283E02DE_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected Dictionary<int, Surface> surfaceObjects { get; set; }
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_0 = __this->get_U3CsurfaceObjectsU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Surface_get_gameObject_mC80624C81F37ADB28DD9BBF0E74FCAA9BD2ACBFD_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public GameObject gameObject { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_U3CgameObjectU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * SpatialMappingBase_get_pendingSurfacesForEviction_m6A999B5AFFC150D5758D7D9CF53B46F54690CA3D_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// return m_PendingSurfacesForEviction;
		Dictionary_2_tEB3C5C59A4F14DA9A3B4E8CCDE660D32BEB7C140 * L_0 = __this->get_m_PendingSurfacesForEviction_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_surfaceParentWasDynamicallyCreated_mA2AC29AF5CF48518EC986D1642152BD6D9C17A4D_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// return m_SurfaceParentWasDynamicallyCreated;
		bool L_0 = __this->get_m_SurfaceParentWasDynamicallyCreated_25();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * SpatialMappingBase_get_surfaceParent_m19EDABA4E196956D3D93D0E8F71582B62FBEB6AC_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_SurfaceParent; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_m_SurfaceParent_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceParent_mDBEDC93A0DA8327F85E20DF9BF76B3B2DE2E1124_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SurfaceParent = value; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_m_SurfaceParent_7(L_0);
		// set { m_SurfaceParent = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SpatialMappingBase_get_lastUpdatedObserverPosition_mDA859EDB4C79D8D0E51EE5E1F5AB66C66A0FA88B_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected Vector3 lastUpdatedObserverPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3ClastUpdatedObserverPositionU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_freezeUpdates_m6108C8C37BC85EF5B88507A4B58E46F1095A304B_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_FreezeUpdates; }
		bool L_0 = __this->get_m_FreezeUpdates_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SpatialMappingBase_get_nextSurfaceChangeUpdateTime_m1DEEC730D91508DD95E70D908219FB33B589767F_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected float nextSurfaceChangeUpdateTime { get; set; }
		float L_0 = __this->get_U3CnextSurfaceChangeUpdateTimeU3Ek__BackingField_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SpatialMappingBase_get_secondsBetweenUpdates_mA328BF686F9D4CD47B69B94E0DDD9E2716C2A155_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_SecondsBetweenUpdates; }
		float L_0 = __this->get_m_SecondsBetweenUpdates_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_volumeType_mDF6DCFE4058C803023B930E1252589CB247BF7CA_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_VolumeType; }
		int32_t L_0 = __this->get_m_VolumeType_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SpatialMappingBase_get_sphereRadius_mF468C293EDA401D9319570806FF7E5DC5992E3EF_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_SphereRadius; }
		float L_0 = __this->get_m_SphereRadius_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  SpatialMappingBase_get_bounds_m555A8D615D0643F8FB75D086714A5A5D6AA371D2_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected Bounds bounds { get; set; }
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_0 = __this->get_U3CboundsU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_lastUpdatedObserverPosition_m23080210004403CB27DA5922818C45EB42C2B07A_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// protected Vector3 lastUpdatedObserverPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3ClastUpdatedObserverPositionU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SpatialMappingBase_get_bakePhysics_m504EB487C5E39F33813DC330A605AEAB1EB97C53_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// return m_BakePhysics;
		bool L_0 = __this->get_m_BakePhysics_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_surfaceData_mDD41633421D9F32C852EA8FDAF28BEBF1822C74E_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___value0, const RuntimeMethod* method)
{
	{
		// public SurfaceData surfaceData { get; set; }
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_0 = ___value0;
		__this->set_U3CsurfaceDataU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  Surface_get_surfaceData_mC250E5E679350C2D8B12A3B25837AE81835C57F8_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public SurfaceData surfaceData { get; set; }
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_0 = __this->get_U3CsurfaceDataU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* SpatialMappingBase_get_lodToPcm_mEB766BA3CED483CF4B2E65D6B39272EE60B75850_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialMappingBase_get_lodToPcm_mEB766BA3CED483CF4B2E65D6B39272EE60B75850Unity_XR_WindowsMR_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_LodToPcm;
		IL2CPP_RUNTIME_CLASS_INIT(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = ((SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_StaticFields*)il2cpp_codegen_static_fields_for(SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54_il2cpp_TypeInfo_var))->get_s_LodToPcm_26();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_lodType_m4B32B9551C2BA8DD7F9C0D7B47AE6B3B98FAC40C_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_LodType; }
		int32_t L_0 = __this->get_m_LodType_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_awaitingBake_m1B9DEFB75F42C6C83BB7AA2F913C9D4DB8940D30_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool awaitingBake { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CawaitingBakeU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_updateTime_m4FE3E6F2B68243A1E49F07099F78322E235F0D79_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		// public System.DateTime updateTime { get; set; }
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CupdateTimeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_surfaceId_mACB290F49AF936B7DD34559F927D893F8196102F_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___value0, const RuntimeMethod* method)
{
	{
		// public SurfaceId surfaceId { get; set; }
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_0 = ___value0;
		__this->set_U3CsurfaceIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * Surface_get_meshFilter_mC98AFDAB739A2DD5C2189C2330813833FF17047C_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public MeshFilter meshFilter { get; set; }
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_0 = __this->get_U3CmeshFilterU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_observerId_mE41D9278DFE2B9E3D289314BA9EBF382B8831695_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected int observerId { get; set; }
		int32_t L_0 = __this->get_U3CobserverIdU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_surfaceParentWasDynamicallyCreated_m529974EF9B8ED167AB546DC522B0766A9222ED76_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// m_SurfaceParentWasDynamicallyCreated = value;
		bool L_0 = ___value0;
		__this->set_m_SurfaceParentWasDynamicallyCreated_25(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  Surface_get_surfaceId_mAD37AE571E345D3B6850E57137292FE70E6F388B_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public SurfaceId surfaceId { get; set; }
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_0 = __this->get_U3CsurfaceIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_gameObject_m732C6594B63AC0DDDC16087B90CE8D1CE2EA07EA_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject gameObject { get; set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_U3CgameObjectU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_meshFilter_m2D5F16A114A2AE2934B48E4D3F0887C5D1D8EBB2_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___value0, const RuntimeMethod* method)
{
	{
		// public MeshFilter meshFilter { get; set; }
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_0 = ___value0;
		__this->set_U3CmeshFilterU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * Surface_get_worldAnchor_mB462702EE57F8357BEA86C56EF2E35CC0BDB0669_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public WorldAnchor worldAnchor { get; set; }
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_0 = __this->get_U3CworldAnchorU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_worldAnchor_m6645872D2DE4375082FC98688169FE07252ABD79_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___value0, const RuntimeMethod* method)
{
	{
		// public WorldAnchor worldAnchor { get; set; }
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_0 = ___value0;
		__this->set_U3CworldAnchorU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpatialMappingBase_get_numUpdatesBeforeRemoval_mA7614FDEC07341C3E1541990F5A0F8DA963FAF89_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_NumUpdatesBeforeRemoval; }
		int32_t L_0 = __this->get_m_NumUpdatesBeforeRemoval_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_remainingUpdatesToLive_m30BFDFCEA11F0C8A9BB50DEA3E1C6AB2CE2E04BC_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int remainingUpdatesToLive { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CremainingUpdatesToLiveU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * SpatialMappingBase_get_selectedCamera_mE3E4571F7EAF1DF70B6762BC57B6CBAFCB17E834_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// protected Camera selectedCamera { get; set; }
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_U3CselectedCameraU3Ek__BackingField_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * SpatialMappingBase_get_surfacesToRemoveFromDict_m28DA1C6B57FE6F290402DBC00BEEC3C02BBEE81B_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, const RuntimeMethod* method)
{
	{
		// return m_SurfacesToRemoveFromDict;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = __this->get_m_SurfacesToRemoveFromDict_24();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Surface_get_remainingUpdatesToLive_m85C53020BBB0610944048533749F23B633699047_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public int remainingUpdatesToLive { get; set; }
		int32_t L_0 = __this->get_U3CremainingUpdatesToLiveU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Surface_get_awaitingBake_m14C791851027BF9B12B9A391CF428EDE8B8B39BB_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public bool awaitingBake { get; set; }
		bool L_0 = __this->get_U3CawaitingBakeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Surface_get_updateTime_m580ACCD9FDFE2AFE4A982ED12B8B1FC47FACE842_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public System.DateTime updateTime { get; set; }
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_U3CupdateTimeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingBase_set_bakePhysics_m7E97A8623EE02B3210ADD227D15E497D37CEABF0_inline (SpatialMappingBase_t167ADE0B4947CD21C9D7A7E7ED77D53B4D8EED54 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// m_BakePhysics = value;
		bool L_0 = ___value0;
		__this->set_m_BakePhysics_15(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpatialMappingCollider_get_layer_mDF2504CC5A0B8C3FC502E115CA2FEB25FBC494D2_inline (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	{
		// return m_Layer;
		int32_t L_0 = __this->get_m_Layer_28();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * SpatialMappingCollider_get_material_mDE3ACB243D47BDF83842A25A2EAD67FA35AFBBC8_inline (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	{
		// return m_Material;
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_0 = __this->get_m_Material_29();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * Surface_get_meshCollider_mE1129925A8317A78C97969DC89EF12FA1701226E_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public MeshCollider meshCollider { get; set; }
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_0 = __this->get_U3CmeshColliderU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_meshCollider_m4CFF19BD0EB8827959FDA63A19626632B5E34A6D_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___value0, const RuntimeMethod* method)
{
	{
		// public MeshCollider meshCollider { get; set; }
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_0 = ___value0;
		__this->set_U3CmeshColliderU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SpatialMappingCollider_get_enableCollisions_mDE052E1B90664CB4D2CDE84A7DD0B55EE33A557D_inline (SpatialMappingCollider_t269F3D93B36B8F12F2A5D30A1A313CD32A4AB7C2 * __this, const RuntimeMethod* method)
{
	{
		// return m_EnableCollisions;
		bool L_0 = __this->get_m_EnableCollisions_30();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * Surface_get_meshRenderer_m6BDB391FC6BE5499F90B7AFBF58D365F80CE7D31_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, const RuntimeMethod* method)
{
	{
		// public MeshRenderer meshRenderer { get; set; }
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = __this->get_U3CmeshRendererU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Surface_set_meshRenderer_m0335D482C3F99120D303FE66F440E004BE430C59_inline (Surface_t3DF4F502D1C053688BFC996F62DFA2116BA4F54D * __this, MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___value0, const RuntimeMethod* method)
{
	{
		// public MeshRenderer meshRenderer { get; set; }
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = ___value0;
		__this->set_U3CmeshRendererU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpatialMappingRenderer_get_renderState_m1ECB7DED90F00AF9947CC552372FACC39692D84D_inline (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	{
		// return m_CurrentRenderState;
		int32_t L_0 = __this->get_m_CurrentRenderState_28();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * SpatialMappingRenderer_get_occlusionMaterial_m7F15BD9F8CEA72EA91A03FBE74B8DEA2E3ADB609_inline (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	{
		// return m_OcclusionMaterial;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_m_OcclusionMaterial_30();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * SpatialMappingRenderer_get_visualMaterial_mBFDEB3C06FA62BF6BA399F46B98FECC0E11F9AAC_inline (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, const RuntimeMethod* method)
{
	{
		// return m_VisualMaterial;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_m_VisualMaterial_29();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_occlusionMaterial_m66E2E43D1C3A6B9A4BA2D46C477117D0D44113EB_inline (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method)
{
	{
		// m_OcclusionMaterial = value;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ___value0;
		__this->set_m_OcclusionMaterial_30(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpatialMappingRenderer_set_visualMaterial_m37951EE6A85FF912FDC66F153E20DEED86FC2977_inline (SpatialMappingRenderer_t76CA4F8DC84130EBB1BDF5845EAF97CCEA8D89BB * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method)
{
	{
		// m_VisualMaterial = value;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = ___value0;
		__this->set_m_VisualMaterial_29(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  Enumerator_get_Current_m73F8FC135A20BDFEA0846D8FC876863ED85FEA49_gshared_inline (Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  L_0 = (KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mAD6801F3BC9BA1E99D4E0F72B2B420182D0494FC_gshared_inline (KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m89B687D373FBE3D230647CA0C536235E12AD829C_gshared_inline (KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  Enumerator_get_Current_m0FE874F7E7972DC563007C0182FC43C9FFCEEB37_gshared_inline (Enumerator_tF44F7F3EFBA354198A341273BF365674D6F84406 * __this, const RuntimeMethod* method)
{
	{
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_0 = (SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  List_1_get_Item_m36FCDE89ACB30BF2EDAF254BB88F320BDC3B3AD1_gshared_inline (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1* L_2 = (SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1*)__this->get__items_1();
		int32_t L_3 = ___index0;
		SMComponentRecord_t4F25C7B56C9A9F701769D1F27D109B576E836C5C  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((SMComponentRecordU5BU5D_t8B4816D9B8F8D569C2B9854BCBCEB2AEF542B4A1*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9B40973BA15B5CD9FCC23B9A8882D7E4BDF82D4E_gshared_inline (List_1_tE40B4369EF0BC1498B5875982A462183216DBEB0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
