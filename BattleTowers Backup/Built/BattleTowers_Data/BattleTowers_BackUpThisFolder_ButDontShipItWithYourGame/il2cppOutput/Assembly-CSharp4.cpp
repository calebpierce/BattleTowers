#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A;
// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>
struct Dictionary_2_t1CEA6D7A88C20D6EB158C4349C82C2F899142014;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t997B2EF2A8ACD01C34612343683AEBC2A964F719;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_t3B3B3663ECCD2D47C05F241EC6B8A170CFAE8A77;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>
struct Dictionary_2_t794236AD8ECCDC27BED5C6059954369B6E513FF9;
// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>
struct Dictionary_2_t05999538499B3FE141B79DFB71620F5770CB08B3;
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>
struct Dictionary_2_t7B5F0639CC3754235554A9B5403760F2A420E0EE;
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonView>
struct Dictionary_2_t256D8BBA2C1B7ECAE4DDE608A91C8E4BD88E36E2;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.String,RoomInfo>
struct Dictionary_2_t6CD29680010096C8D5709AEAE7A0100FF76320C2;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct Dictionary_2_t510FB791361517D9490A57D6259732545477D57C;
// System.Collections.Generic.HashSet`1<System.Byte>
struct HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F;
// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t673621F5B6E20DEB6FA92F197D314F98CC2E3D53;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Region>
struct List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54;
// System.Collections.Generic.List`1<TypedLobbyInfo>
struct List_1_tCA5546E6DC14A2EA619849B39DC07B81B5FCF063;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t56B50F9E31520BE26AD708AFDEFCA3C9DA13DD39;
// Region[]
struct RegionU5BU5D_t04A7219D77A4A8D37F7317759AE19045F68BA261;
// RoomInfo[]
struct RoomInfoU5BU5D_tBDB3F0F30C12603788FC32E069C64930786D8501;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// AuthenticationValues
struct AuthenticationValues_t0ABD7A091927E5A648F15EA00A9E4F155851379C;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DemoBoxesGui
struct DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D;
// DragToMove
struct DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F;
// EnterRoomParams
struct EnterRoomParams_tAAAFEC5315B9C5DFF5D07ADF1C85B5E9CAF2C6CB;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD51304A6145CE3C16DA891982FF77FCF264C2646;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_t26E13211CF09200ECE9F822BEA059DD44D8228F6;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t450BE79C0C9A33FCBB0F54D62C6F45104657CB80;
// IPunPrefabPool
struct IPunPrefabPool_t1549CCD809D8146D96DE77F63C1D6992999755DC;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Photon.MonoBehaviour
struct MonoBehaviour_tFEF607B49E95B5895C1FF846DEB2A8626EB4EE54;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NetworkingPeer
struct NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OnClickDestroy
struct OnClickDestroy_tEEB902BB7C2D6D87AB5F23B56E5D2D13DF87BFCE;
// OnClickFlashRpc
struct OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8;
// PhotonHandler
struct PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB;
// Photon.Realtime.PhotonPing
struct PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E;
// PhotonPingManager
struct PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602;
// PhotonPlayer
struct PhotonPlayer_t259567CE5BB6E26AA99638E950562AF09926CF80;
// PhotonStream
struct PhotonStream_t51FB909AD931C5C4A99DAD900FFC6D086E310761;
// PhotonView
struct PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845;
// Photon.Realtime.PingMono
struct PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9;
// PunTurnManager
struct PunTurnManager_t57646FAB37E04E3198AB117561576E751DC5FB8F;
// RaiseEventOptions
struct RaiseEventOptions_t2C266F5C9B3D3F2195B726F5701FED7BC9DE4C7E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Region
struct Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// Room
struct Room_t44A97854220FADE8C026E18625929E32B64B3F6A;
// RpsCore
struct RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// ServerSettings
struct ServerSettings_tA5C4BA75817C6F27E717C7B40D5D38583C7E0FFE;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// TypedLobby
struct TypedLobby_tBBC2C52E006F0F338883A1E4C27B4C7C3109FEBC;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// DemoBoxesGui/<SwapTip>d__8
struct U3CSwapTipU3Ed__8_t5701AF0D8FB44C47B8F24A6B79BCD1E9522F1747;
// DragToMove/<RecordMouse>d__9
struct U3CRecordMouseU3Ed__9_t2110E72FC9A8B3C9BDB53CBE5F45340E9B1117F3;
// ECEffectActor/projectile
struct projectile_tCCE366344F4899E5D9DC756B84CD4E7F4D3DE645;
// ECparticleColorChangerMaster/colorChange
struct colorChange_tB8F718C5414DA5E0BFF45C09A2F2F18685150C65;
// ECprojectileActor/projectile
struct projectile_t09B4832E5EEC3F4B96297215B3C4E85232EDFFA1;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// NetworkingPeer/<>c__DisplayClass163_0
struct U3CU3Ec__DisplayClass163_0_t8A24F3C8469A435177A91B7B53AF90A3DD721A69;
// OnClickDestroy/<DestroyRpc>d__2
struct U3CDestroyRpcU3Ed__2_tE1EBFC65ACAF20C2D73A70702757C54FD63A14A1;
// OnClickFlashRpc/<Flash>d__4
struct U3CFlashU3Ed__4_t68C2666A7714263AA517872FDED230058CBD9B67;
// PhotonAnimatorView/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t7916C80E1E2A06C47C06A3CDA8BEE7E1E48324C3;
// PhotonAnimatorView/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t8B42A43E58E0C43B3E9D3DAF64DA4D09AB1639FC;
// PhotonAnimatorView/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t4F7E62E78BFBFBE570854EBB78B8F17B14738F33;
// PhotonAnimatorView/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t892378D5C7ACC1A24D9E4E7AAD348DC158E6D58F;
// PhotonAnimatorView/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_t91FEB0E37D8A64B4B79D6A3792439AE0366BA2F0;
// PhotonAnimatorView/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t3341FB05839B8E56E8C6FB2CFBD5E4FAAC917595;
// PhotonAnimatorView/SynchronizedLayer
struct SynchronizedLayer_t88131AD7E086EA33C31500A65C1918D560711F4B;
// PhotonAnimatorView/SynchronizedParameter
struct SynchronizedParameter_tB6B5383927642650AD39D6AD78CEFDF5EF8B7358;
// PhotonHandler/<>c
struct U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E;
// PhotonHandler/<PingAvailableRegionsCoroutine>d__25
struct U3CPingAvailableRegionsCoroutineU3Ed__25_t3CF8B8165FFC0B62F135478CAB0ACC4C64E7BF98;
// PhotonNetwork/<>c
struct U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1;
// PhotonNetwork/EventCallback
struct EventCallback_tF67DD1350E7870B69EB1BFB2871FF3DA891E70E6;
// PhotonPingManager/<PingSocket>d__10
struct U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A;
// ExitGames.UtilityScripts.PlayerRoomIndexing/RoomIndexingChanged
struct RoomIndexingChanged_tEC0A0DABA5D2D40732CDAFC991C72E9A9A4A54F7;
// RpsCore/<CycleRemoteHandCoroutine>d__42
struct U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2;
// RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37
struct U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690;
// instantiateEffectCallerExplosion1/chainEffect
struct chainEffect_t42C1672A3460D7C694DE42569C67EA97E5218AB0;
// projectileActorExplosion1/projectile
struct projectile_t8DE287385AC9DE674E4D58821DA5145E928AE106;

IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_t2BC6366743E2FF685EF8EBBF24CDA27003321561_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CloudRegionCode_tB0952227D76BB99B6E9ECE40C3E539545BF38C62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServerConnection_tF04C29A32DFD1FD64C1B8205FD96E07F4DB676CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01BC6FF5AB7C7B79FA9D79F6E208A0C99F1F2A6F;
IL2CPP_EXTERN_C String_t* _stringLiteral1091CE9F802F13BC31E614C5AEB1CB88E41AB2CC;
IL2CPP_EXTERN_C String_t* _stringLiteral34555AFA97485AFADAC8DF35F3D9331D63A28DA2;
IL2CPP_EXTERN_C String_t* _stringLiteral3E5A73DF61AF9308E88E6789269F37013D5A0D49;
IL2CPP_EXTERN_C String_t* _stringLiteral51F18A6AE5D3AEAAAFA90291694F77ED6BFBC826;
IL2CPP_EXTERN_C String_t* _stringLiteral574AF626B2ECA36F40D5D593643BB7683F9514E2;
IL2CPP_EXTERN_C String_t* _stringLiteral67A9BD85BE22F02D1786B74CC643E414FDED0EAE;
IL2CPP_EXTERN_C String_t* _stringLiteral8775E00D3D17ED2D124F4D80ECE58C11647AFB75;
IL2CPP_EXTERN_C String_t* _stringLiteralA496EBC64D786EE4D830153B5C9CDDB21F72AEEA;
IL2CPP_EXTERN_C String_t* _stringLiteralBF68FF22101AC8515E8F1E6522673EF29565FFBE;
IL2CPP_EXTERN_C String_t* _stringLiteralC023D3E2E65812AE859DA2B44CDD13B8F79C026E;
IL2CPP_EXTERN_C String_t* _stringLiteralC29A24DBA1B3B76E82852C9F0DA8E1C6CAB9A274;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE43F90D2E76AC7F4A79B5762B29383A07946006B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m40A4D84A25481239710BE6AE9951683094ED4A92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCFD13C0003C1537656D24D83031706DDE8E5D38A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCC70D1723A3D97164E58AEA13E5E905796A17129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF11575EBED43F2A01A7116F24E480559AA499E32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCycleRemoteHandCoroutineU3Ed__42_System_Collections_IEnumerator_Reset_m498C1C52E1A0B7E0A3630B5DAC884E47C3737417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDestroyRpcU3Ed__2_System_Collections_IEnumerator_Reset_m9D55A0E3C84F2B4F39A6C59A9D25C78C678EAB8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFlashU3Ed__4_System_Collections_IEnumerator_Reset_m8F48FBF54985A5B9E2FE4DED6E9C74BCB83BD7C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPingAvailableRegionsCoroutineU3Ed__25_System_Collections_IEnumerator_Reset_m1A01D3B4BBDD651F2E6C2B075B25014346468C7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPingSocketU3Ed__10_System_Collections_IEnumerator_Reset_m29CFD1353DD530E956CEBD64B3A168174249BF59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRecordMouseU3Ed__9_System_Collections_IEnumerator_Reset_m4CA12576CA77D9AAD2612A252BD1129D8A2E8BF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowResultsBeginNextTurnCoroutineU3Ed__37_System_Collections_IEnumerator_Reset_m5D39DC7C1CB46FBBF1FFA7A528FB6769C5FABD82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwapTipU3Ed__8_System_Collections_IEnumerator_Reset_m1D254D7C006CC70EC268DDA923D6440EA28E1F96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Region>
struct  List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RegionU5BU5D_t04A7219D77A4A8D37F7317759AE19045F68BA261* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54, ____items_1)); }
	inline RegionU5BU5D_t04A7219D77A4A8D37F7317759AE19045F68BA261* get__items_1() const { return ____items_1; }
	inline RegionU5BU5D_t04A7219D77A4A8D37F7317759AE19045F68BA261** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RegionU5BU5D_t04A7219D77A4A8D37F7317759AE19045F68BA261* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RegionU5BU5D_t04A7219D77A4A8D37F7317759AE19045F68BA261* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54_StaticFields, ____emptyArray_5)); }
	inline RegionU5BU5D_t04A7219D77A4A8D37F7317759AE19045F68BA261* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RegionU5BU5D_t04A7219D77A4A8D37F7317759AE19045F68BA261** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RegionU5BU5D_t04A7219D77A4A8D37F7317759AE19045F68BA261* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Photon.Realtime.PhotonPing
struct  PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.PhotonPing::DebugString
	String_t* ___DebugString_0;
	// System.Boolean Photon.Realtime.PhotonPing::Successful
	bool ___Successful_1;
	// System.Boolean Photon.Realtime.PhotonPing::GotResult
	bool ___GotResult_2;
	// System.Int32 Photon.Realtime.PhotonPing::PingLength
	int32_t ___PingLength_3;
	// System.Byte[] Photon.Realtime.PhotonPing::PingBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PingBytes_4;
	// System.Byte Photon.Realtime.PhotonPing::PingId
	uint8_t ___PingId_5;

public:
	inline static int32_t get_offset_of_DebugString_0() { return static_cast<int32_t>(offsetof(PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E, ___DebugString_0)); }
	inline String_t* get_DebugString_0() const { return ___DebugString_0; }
	inline String_t** get_address_of_DebugString_0() { return &___DebugString_0; }
	inline void set_DebugString_0(String_t* value)
	{
		___DebugString_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugString_0), (void*)value);
	}

	inline static int32_t get_offset_of_Successful_1() { return static_cast<int32_t>(offsetof(PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E, ___Successful_1)); }
	inline bool get_Successful_1() const { return ___Successful_1; }
	inline bool* get_address_of_Successful_1() { return &___Successful_1; }
	inline void set_Successful_1(bool value)
	{
		___Successful_1 = value;
	}

	inline static int32_t get_offset_of_GotResult_2() { return static_cast<int32_t>(offsetof(PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E, ___GotResult_2)); }
	inline bool get_GotResult_2() const { return ___GotResult_2; }
	inline bool* get_address_of_GotResult_2() { return &___GotResult_2; }
	inline void set_GotResult_2(bool value)
	{
		___GotResult_2 = value;
	}

	inline static int32_t get_offset_of_PingLength_3() { return static_cast<int32_t>(offsetof(PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E, ___PingLength_3)); }
	inline int32_t get_PingLength_3() const { return ___PingLength_3; }
	inline int32_t* get_address_of_PingLength_3() { return &___PingLength_3; }
	inline void set_PingLength_3(int32_t value)
	{
		___PingLength_3 = value;
	}

	inline static int32_t get_offset_of_PingBytes_4() { return static_cast<int32_t>(offsetof(PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E, ___PingBytes_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PingBytes_4() const { return ___PingBytes_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PingBytes_4() { return &___PingBytes_4; }
	inline void set_PingBytes_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PingBytes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PingBytes_4), (void*)value);
	}

	inline static int32_t get_offset_of_PingId_5() { return static_cast<int32_t>(offsetof(PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E, ___PingId_5)); }
	inline uint8_t get_PingId_5() const { return ___PingId_5; }
	inline uint8_t* get_address_of_PingId_5() { return &___PingId_5; }
	inline void set_PingId_5(uint8_t value)
	{
		___PingId_5 = value;
	}
};


// PhotonPingManager
struct  PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602  : public RuntimeObject
{
public:
	// System.Boolean PhotonPingManager::UseNative
	bool ___UseNative_0;
	// System.Int32 PhotonPingManager::PingsRunning
	int32_t ___PingsRunning_5;

public:
	inline static int32_t get_offset_of_UseNative_0() { return static_cast<int32_t>(offsetof(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602, ___UseNative_0)); }
	inline bool get_UseNative_0() const { return ___UseNative_0; }
	inline bool* get_address_of_UseNative_0() { return &___UseNative_0; }
	inline void set_UseNative_0(bool value)
	{
		___UseNative_0 = value;
	}

	inline static int32_t get_offset_of_PingsRunning_5() { return static_cast<int32_t>(offsetof(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602, ___PingsRunning_5)); }
	inline int32_t get_PingsRunning_5() const { return ___PingsRunning_5; }
	inline int32_t* get_address_of_PingsRunning_5() { return &___PingsRunning_5; }
	inline void set_PingsRunning_5(int32_t value)
	{
		___PingsRunning_5 = value;
	}
};

struct PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields
{
public:
	// System.Int32 PhotonPingManager::Attempts
	int32_t ___Attempts_1;
	// System.Boolean PhotonPingManager::IgnoreInitialAttempt
	bool ___IgnoreInitialAttempt_2;
	// System.Int32 PhotonPingManager::MaxMilliseconsPerPing
	int32_t ___MaxMilliseconsPerPing_3;

public:
	inline static int32_t get_offset_of_Attempts_1() { return static_cast<int32_t>(offsetof(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields, ___Attempts_1)); }
	inline int32_t get_Attempts_1() const { return ___Attempts_1; }
	inline int32_t* get_address_of_Attempts_1() { return &___Attempts_1; }
	inline void set_Attempts_1(int32_t value)
	{
		___Attempts_1 = value;
	}

	inline static int32_t get_offset_of_IgnoreInitialAttempt_2() { return static_cast<int32_t>(offsetof(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields, ___IgnoreInitialAttempt_2)); }
	inline bool get_IgnoreInitialAttempt_2() const { return ___IgnoreInitialAttempt_2; }
	inline bool* get_address_of_IgnoreInitialAttempt_2() { return &___IgnoreInitialAttempt_2; }
	inline void set_IgnoreInitialAttempt_2(bool value)
	{
		___IgnoreInitialAttempt_2 = value;
	}

	inline static int32_t get_offset_of_MaxMilliseconsPerPing_3() { return static_cast<int32_t>(offsetof(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields, ___MaxMilliseconsPerPing_3)); }
	inline int32_t get_MaxMilliseconsPerPing_3() const { return ___MaxMilliseconsPerPing_3; }
	inline int32_t* get_address_of_MaxMilliseconsPerPing_3() { return &___MaxMilliseconsPerPing_3; }
	inline void set_MaxMilliseconsPerPing_3(int32_t value)
	{
		___MaxMilliseconsPerPing_3 = value;
	}
};


// System.Diagnostics.Stopwatch
struct  Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// DemoBoxesGui/<SwapTip>d__8
struct  U3CSwapTipU3Ed__8_t5701AF0D8FB44C47B8F24A6B79BCD1E9522F1747  : public RuntimeObject
{
public:
	// System.Int32 DemoBoxesGui/<SwapTip>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DemoBoxesGui/<SwapTip>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DemoBoxesGui DemoBoxesGui/<SwapTip>d__8::<>4__this
	DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * ___U3CU3E4__this_2;
	// System.Single DemoBoxesGui/<SwapTip>d__8::<alpha>5__2
	float ___U3CalphaU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSwapTipU3Ed__8_t5701AF0D8FB44C47B8F24A6B79BCD1E9522F1747, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSwapTipU3Ed__8_t5701AF0D8FB44C47B8F24A6B79BCD1E9522F1747, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSwapTipU3Ed__8_t5701AF0D8FB44C47B8F24A6B79BCD1E9522F1747, ___U3CU3E4__this_2)); }
	inline DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CalphaU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSwapTipU3Ed__8_t5701AF0D8FB44C47B8F24A6B79BCD1E9522F1747, ___U3CalphaU3E5__2_3)); }
	inline float get_U3CalphaU3E5__2_3() const { return ___U3CalphaU3E5__2_3; }
	inline float* get_address_of_U3CalphaU3E5__2_3() { return &___U3CalphaU3E5__2_3; }
	inline void set_U3CalphaU3E5__2_3(float value)
	{
		___U3CalphaU3E5__2_3 = value;
	}
};


// DragToMove/<RecordMouse>d__9
struct  U3CRecordMouseU3Ed__9_t2110E72FC9A8B3C9BDB53CBE5F45340E9B1117F3  : public RuntimeObject
{
public:
	// System.Int32 DragToMove/<RecordMouse>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DragToMove/<RecordMouse>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DragToMove DragToMove/<RecordMouse>d__9::<>4__this
	DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRecordMouseU3Ed__9_t2110E72FC9A8B3C9BDB53CBE5F45340E9B1117F3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRecordMouseU3Ed__9_t2110E72FC9A8B3C9BDB53CBE5F45340E9B1117F3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRecordMouseU3Ed__9_t2110E72FC9A8B3C9BDB53CBE5F45340E9B1117F3, ___U3CU3E4__this_2)); }
	inline DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ECEffectActor/projectile
struct  projectile_tCCE366344F4899E5D9DC756B84CD4E7F4D3DE645  : public RuntimeObject
{
public:
	// System.String ECEffectActor/projectile::name
	String_t* ___name_0;
	// UnityEngine.GameObject ECEffectActor/projectile::bombPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bombPrefab_1;
	// UnityEngine.Transform ECEffectActor/projectile::bombPrefabTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___bombPrefabTransform_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(projectile_tCCE366344F4899E5D9DC756B84CD4E7F4D3DE645, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_bombPrefab_1() { return static_cast<int32_t>(offsetof(projectile_tCCE366344F4899E5D9DC756B84CD4E7F4D3DE645, ___bombPrefab_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bombPrefab_1() const { return ___bombPrefab_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bombPrefab_1() { return &___bombPrefab_1; }
	inline void set_bombPrefab_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bombPrefab_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bombPrefab_1), (void*)value);
	}

	inline static int32_t get_offset_of_bombPrefabTransform_2() { return static_cast<int32_t>(offsetof(projectile_tCCE366344F4899E5D9DC756B84CD4E7F4D3DE645, ___bombPrefabTransform_2)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_bombPrefabTransform_2() const { return ___bombPrefabTransform_2; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_bombPrefabTransform_2() { return &___bombPrefabTransform_2; }
	inline void set_bombPrefabTransform_2(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___bombPrefabTransform_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bombPrefabTransform_2), (void*)value);
	}
};


// ECparticleColorChangerMaster/colorChange
struct  colorChange_tB8F718C5414DA5E0BFF45C09A2F2F18685150C65  : public RuntimeObject
{
public:
	// System.String ECparticleColorChangerMaster/colorChange::Name
	String_t* ___Name_0;
	// UnityEngine.ParticleSystem[] ECparticleColorChangerMaster/colorChange::colored_ParticleSystem
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* ___colored_ParticleSystem_1;
	// UnityEngine.Gradient ECparticleColorChangerMaster/colorChange::Gradient_custom
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___Gradient_custom_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(colorChange_tB8F718C5414DA5E0BFF45C09A2F2F18685150C65, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_colored_ParticleSystem_1() { return static_cast<int32_t>(offsetof(colorChange_tB8F718C5414DA5E0BFF45C09A2F2F18685150C65, ___colored_ParticleSystem_1)); }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* get_colored_ParticleSystem_1() const { return ___colored_ParticleSystem_1; }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7** get_address_of_colored_ParticleSystem_1() { return &___colored_ParticleSystem_1; }
	inline void set_colored_ParticleSystem_1(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* value)
	{
		___colored_ParticleSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colored_ParticleSystem_1), (void*)value);
	}

	inline static int32_t get_offset_of_Gradient_custom_2() { return static_cast<int32_t>(offsetof(colorChange_tB8F718C5414DA5E0BFF45C09A2F2F18685150C65, ___Gradient_custom_2)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_Gradient_custom_2() const { return ___Gradient_custom_2; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_Gradient_custom_2() { return &___Gradient_custom_2; }
	inline void set_Gradient_custom_2(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___Gradient_custom_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Gradient_custom_2), (void*)value);
	}
};


// ECprojectileActor/projectile
struct  projectile_t09B4832E5EEC3F4B96297215B3C4E85232EDFFA1  : public RuntimeObject
{
public:
	// System.String ECprojectileActor/projectile::name
	String_t* ___name_0;
	// UnityEngine.Rigidbody ECprojectileActor/projectile::bombPrefab
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___bombPrefab_1;
	// UnityEngine.GameObject ECprojectileActor/projectile::muzzleflare
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___muzzleflare_2;
	// System.Single ECprojectileActor/projectile::min
	float ___min_3;
	// System.Single ECprojectileActor/projectile::max
	float ___max_4;
	// System.Boolean ECprojectileActor/projectile::rapidFire
	bool ___rapidFire_5;
	// System.Single ECprojectileActor/projectile::rapidFireCooldown
	float ___rapidFireCooldown_6;
	// System.Boolean ECprojectileActor/projectile::shotgunBehavior
	bool ___shotgunBehavior_7;
	// System.Int32 ECprojectileActor/projectile::shotgunPellets
	int32_t ___shotgunPellets_8;
	// UnityEngine.GameObject ECprojectileActor/projectile::shellPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shellPrefab_9;
	// System.Boolean ECprojectileActor/projectile::hasShells
	bool ___hasShells_10;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(projectile_t09B4832E5EEC3F4B96297215B3C4E85232EDFFA1, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_bombPrefab_1() { return static_cast<int32_t>(offsetof(projectile_t09B4832E5EEC3F4B96297215B3C4E85232EDFFA1, ___bombPrefab_1)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_bombPrefab_1() const { return ___bombPrefab_1; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_bombPrefab_1() { return &___bombPrefab_1; }
	inline void set_bombPrefab_1(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___bombPrefab_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bombPrefab_1), (void*)value);
	}

	inline static int32_t get_offset_of_muzzleflare_2() { return static_cast<int32_t>(offsetof(projectile_t09B4832E5EEC3F4B96297215B3C4E85232EDFFA1, ___muzzleflare_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_muzzleflare_2() const { return ___muzzleflare_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_muzzleflare_2() { return &___muzzleflare_2; }
	inline void set_muzzleflare_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___muzzleflare_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___muzzleflare_2), (void*)value);
	}

	inline static int32_t get_offset_of_min_3() { return static_cast<int32_t>(offsetof(projectile_t09B4832E5EEC3F4B96297215B3C4E85232EDFFA1, ___min_3)); }
	inline float get_min_3() const { return ___min_3; }
	inline float* get_address_of_min_3() { return &___min_3; }
	inline void set_min_3(float value)
	{
		___min_3 = value;
	}

	inline static int32_t get_offset_of_max_4() { return static_cast<int32_t>(offsetof(projectile_t09B4832E5EEC3F4B96297215B3C4E85232EDFFA1, ___max_4)); }
	inline float get_max_4() const { return ___max_4; }
	inline float* get_address_of_max_4() { return &___max_4; }
	inline void set_max_4(float value)
	{
		___max_4 = value;
	}

	inline static int32_t get_offset_of_rapidFire_5() { return static_cast<int32_t>(offsetof(projectile_t09B4832E5EEC3F4B96297215B3C4E85232EDFFA1, ___rapidFire_5)); }
	inline bool get_rapidFire_5() const { return ___rapidFire_5; }
	inline bool* get_address_of_rapidFire_5() { return &___rapidFire_5; }
	inline void set_rapidFire_5(bool value)
	{
		___rapidFire_5 = value;
	}

	inline static int32_t get_offset_of_rapidFireCooldown_6() { return static_cast<int32_t>(offsetof(projectile_t09B4832E5EEC3F4B96297215B3C4E85232EDFFA1, ___rapidFireCooldown_6)); }
	inline float get_rapidFireCooldown_6() const { return ___rapidFireCooldown_6; }
	inline float* get_address_of_rapidFireCooldown_6() { return &___rapidFireCooldown_6; }
	inline void set_rapidFireCooldown_6(float value)
	{
		___rapidFireCooldown_6 = value;
	}

	inline static int32_t get_offset_of_shotgunBehavior_7() { return static_cast<int32_t>(offsetof(projectile_t09B4832E5EEC3F4B96297215B3C4E85232EDFFA1, ___shotgunBehavior_7)); }
	inline bool get_shotgunBehavior_7() const { return ___shotgunBehavior_7; }
	inline bool* get_address_of_shotgunBehavior_7() { return &___shotgunBehavior_7; }
	inline void set_shotgunBehavior_7(bool value)
	{
		___shotgunBehavior_7 = value;
	}

	inline static int32_t get_offset_of_shotgunPellets_8() { return static_cast<int32_t>(offsetof(projectile_t09B4832E5EEC3F4B96297215B3C4E85232EDFFA1, ___shotgunPellets_8)); }
	inline int32_t get_shotgunPellets_8() const { return ___shotgunPellets_8; }
	inline int32_t* get_address_of_shotgunPellets_8() { return &___shotgunPellets_8; }
	inline void set_shotgunPellets_8(int32_t value)
	{
		___shotgunPellets_8 = value;
	}

	inline static int32_t get_offset_of_shellPrefab_9() { return static_cast<int32_t>(offsetof(projectile_t09B4832E5EEC3F4B96297215B3C4E85232EDFFA1, ___shellPrefab_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shellPrefab_9() const { return ___shellPrefab_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shellPrefab_9() { return &___shellPrefab_9; }
	inline void set_shellPrefab_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shellPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shellPrefab_9), (void*)value);
	}

	inline static int32_t get_offset_of_hasShells_10() { return static_cast<int32_t>(offsetof(projectile_t09B4832E5EEC3F4B96297215B3C4E85232EDFFA1, ___hasShells_10)); }
	inline bool get_hasShells_10() const { return ___hasShells_10; }
	inline bool* get_address_of_hasShells_10() { return &___hasShells_10; }
	inline void set_hasShells_10(bool value)
	{
		___hasShells_10 = value;
	}
};


// OnClickDestroy/<DestroyRpc>d__2
struct  U3CDestroyRpcU3Ed__2_tE1EBFC65ACAF20C2D73A70702757C54FD63A14A1  : public RuntimeObject
{
public:
	// System.Int32 OnClickDestroy/<DestroyRpc>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OnClickDestroy/<DestroyRpc>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OnClickDestroy OnClickDestroy/<DestroyRpc>d__2::<>4__this
	OnClickDestroy_tEEB902BB7C2D6D87AB5F23B56E5D2D13DF87BFCE * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDestroyRpcU3Ed__2_tE1EBFC65ACAF20C2D73A70702757C54FD63A14A1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDestroyRpcU3Ed__2_tE1EBFC65ACAF20C2D73A70702757C54FD63A14A1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDestroyRpcU3Ed__2_tE1EBFC65ACAF20C2D73A70702757C54FD63A14A1, ___U3CU3E4__this_2)); }
	inline OnClickDestroy_tEEB902BB7C2D6D87AB5F23B56E5D2D13DF87BFCE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OnClickDestroy_tEEB902BB7C2D6D87AB5F23B56E5D2D13DF87BFCE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OnClickDestroy_tEEB902BB7C2D6D87AB5F23B56E5D2D13DF87BFCE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// OnClickFlashRpc/<Flash>d__4
struct  U3CFlashU3Ed__4_t68C2666A7714263AA517872FDED230058CBD9B67  : public RuntimeObject
{
public:
	// System.Int32 OnClickFlashRpc/<Flash>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OnClickFlashRpc/<Flash>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OnClickFlashRpc OnClickFlashRpc/<Flash>d__4::<>4__this
	OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * ___U3CU3E4__this_2;
	// System.Single OnClickFlashRpc/<Flash>d__4::<f>5__2
	float ___U3CfU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFlashU3Ed__4_t68C2666A7714263AA517872FDED230058CBD9B67, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFlashU3Ed__4_t68C2666A7714263AA517872FDED230058CBD9B67, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFlashU3Ed__4_t68C2666A7714263AA517872FDED230058CBD9B67, ___U3CU3E4__this_2)); }
	inline OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CFlashU3Ed__4_t68C2666A7714263AA517872FDED230058CBD9B67, ___U3CfU3E5__2_3)); }
	inline float get_U3CfU3E5__2_3() const { return ___U3CfU3E5__2_3; }
	inline float* get_address_of_U3CfU3E5__2_3() { return &___U3CfU3E5__2_3; }
	inline void set_U3CfU3E5__2_3(float value)
	{
		___U3CfU3E5__2_3 = value;
	}
};


// PhotonAnimatorView/<>c__DisplayClass18_0
struct  U3CU3Ec__DisplayClass18_0_t7916C80E1E2A06C47C06A3CDA8BEE7E1E48324C3  : public RuntimeObject
{
public:
	// System.Int32 PhotonAnimatorView/<>c__DisplayClass18_0::layerIndex
	int32_t ___layerIndex_0;

public:
	inline static int32_t get_offset_of_layerIndex_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t7916C80E1E2A06C47C06A3CDA8BEE7E1E48324C3, ___layerIndex_0)); }
	inline int32_t get_layerIndex_0() const { return ___layerIndex_0; }
	inline int32_t* get_address_of_layerIndex_0() { return &___layerIndex_0; }
	inline void set_layerIndex_0(int32_t value)
	{
		___layerIndex_0 = value;
	}
};


// PhotonAnimatorView/<>c__DisplayClass19_0
struct  U3CU3Ec__DisplayClass19_0_t8B42A43E58E0C43B3E9D3DAF64DA4D09AB1639FC  : public RuntimeObject
{
public:
	// System.String PhotonAnimatorView/<>c__DisplayClass19_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_t8B42A43E58E0C43B3E9D3DAF64DA4D09AB1639FC, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// PhotonAnimatorView/<>c__DisplayClass22_0
struct  U3CU3Ec__DisplayClass22_0_t4F7E62E78BFBFBE570854EBB78B8F17B14738F33  : public RuntimeObject
{
public:
	// System.Int32 PhotonAnimatorView/<>c__DisplayClass22_0::layerIndex
	int32_t ___layerIndex_0;

public:
	inline static int32_t get_offset_of_layerIndex_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t4F7E62E78BFBFBE570854EBB78B8F17B14738F33, ___layerIndex_0)); }
	inline int32_t get_layerIndex_0() const { return ___layerIndex_0; }
	inline int32_t* get_address_of_layerIndex_0() { return &___layerIndex_0; }
	inline void set_layerIndex_0(int32_t value)
	{
		___layerIndex_0 = value;
	}
};


// PhotonAnimatorView/<>c__DisplayClass23_0
struct  U3CU3Ec__DisplayClass23_0_t892378D5C7ACC1A24D9E4E7AAD348DC158E6D58F  : public RuntimeObject
{
public:
	// System.String PhotonAnimatorView/<>c__DisplayClass23_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_t892378D5C7ACC1A24D9E4E7AAD348DC158E6D58F, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// PhotonAnimatorView/<>c__DisplayClass24_0
struct  U3CU3Ec__DisplayClass24_0_t91FEB0E37D8A64B4B79D6A3792439AE0366BA2F0  : public RuntimeObject
{
public:
	// System.Int32 PhotonAnimatorView/<>c__DisplayClass24_0::layerIndex
	int32_t ___layerIndex_0;

public:
	inline static int32_t get_offset_of_layerIndex_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_t91FEB0E37D8A64B4B79D6A3792439AE0366BA2F0, ___layerIndex_0)); }
	inline int32_t get_layerIndex_0() const { return ___layerIndex_0; }
	inline int32_t* get_address_of_layerIndex_0() { return &___layerIndex_0; }
	inline void set_layerIndex_0(int32_t value)
	{
		___layerIndex_0 = value;
	}
};


// PhotonAnimatorView/<>c__DisplayClass25_0
struct  U3CU3Ec__DisplayClass25_0_t3341FB05839B8E56E8C6FB2CFBD5E4FAAC917595  : public RuntimeObject
{
public:
	// System.String PhotonAnimatorView/<>c__DisplayClass25_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass25_0_t3341FB05839B8E56E8C6FB2CFBD5E4FAAC917595, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// PhotonHandler/<>c
struct  U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E_StaticFields
{
public:
	// PhotonHandler/<>c PhotonHandler/<>c::<>9
	U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E * ___U3CU3E9_0;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> PhotonHandler/<>c::<>9__10_0
	UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * ___U3CU3E9__10_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E_StaticFields, ___U3CU3E9__10_0_1)); }
	inline UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}
};


// PhotonHandler/<PingAvailableRegionsCoroutine>d__25
struct  U3CPingAvailableRegionsCoroutineU3Ed__25_t3CF8B8165FFC0B62F135478CAB0ACC4C64E7BF98  : public RuntimeObject
{
public:
	// System.Int32 PhotonHandler/<PingAvailableRegionsCoroutine>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PhotonHandler/<PingAvailableRegionsCoroutine>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Boolean PhotonHandler/<PingAvailableRegionsCoroutine>d__25::connectToBest
	bool ___connectToBest_2;
	// PhotonPingManager PhotonHandler/<PingAvailableRegionsCoroutine>d__25::<pingManager>5__2
	PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * ___U3CpingManagerU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ed__25_t3CF8B8165FFC0B62F135478CAB0ACC4C64E7BF98, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ed__25_t3CF8B8165FFC0B62F135478CAB0ACC4C64E7BF98, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_connectToBest_2() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ed__25_t3CF8B8165FFC0B62F135478CAB0ACC4C64E7BF98, ___connectToBest_2)); }
	inline bool get_connectToBest_2() const { return ___connectToBest_2; }
	inline bool* get_address_of_connectToBest_2() { return &___connectToBest_2; }
	inline void set_connectToBest_2(bool value)
	{
		___connectToBest_2 = value;
	}

	inline static int32_t get_offset_of_U3CpingManagerU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ed__25_t3CF8B8165FFC0B62F135478CAB0ACC4C64E7BF98, ___U3CpingManagerU3E5__2_3)); }
	inline PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * get_U3CpingManagerU3E5__2_3() const { return ___U3CpingManagerU3E5__2_3; }
	inline PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 ** get_address_of_U3CpingManagerU3E5__2_3() { return &___U3CpingManagerU3E5__2_3; }
	inline void set_U3CpingManagerU3E5__2_3(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * value)
	{
		___U3CpingManagerU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpingManagerU3E5__2_3), (void*)value);
	}
};


// PhotonNetwork/<>c
struct  U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1_StaticFields
{
public:
	// PhotonNetwork/<>c PhotonNetwork/<>c::<>9
	U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// PhotonPingManager/<PingSocket>d__10
struct  U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A  : public RuntimeObject
{
public:
	// System.Int32 PhotonPingManager/<PingSocket>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PhotonPingManager/<PingSocket>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Region PhotonPingManager/<PingSocket>d__10::region
	Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * ___region_2;
	// PhotonPingManager PhotonPingManager/<PingSocket>d__10::<>4__this
	PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * ___U3CU3E4__this_3;
	// Photon.Realtime.PhotonPing PhotonPingManager/<PingSocket>d__10::<ping>5__2
	PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E * ___U3CpingU3E5__2_4;
	// System.Single PhotonPingManager/<PingSocket>d__10::<rttSum>5__3
	float ___U3CrttSumU3E5__3_5;
	// System.Int32 PhotonPingManager/<PingSocket>d__10::<replyCount>5__4
	int32_t ___U3CreplyCountU3E5__4_6;
	// System.String PhotonPingManager/<PingSocket>d__10::<regionAddress>5__5
	String_t* ___U3CregionAddressU3E5__5_7;
	// System.Int32 PhotonPingManager/<PingSocket>d__10::<i>5__6
	int32_t ___U3CiU3E5__6_8;
	// System.Boolean PhotonPingManager/<PingSocket>d__10::<overtime>5__7
	bool ___U3CovertimeU3E5__7_9;
	// System.Diagnostics.Stopwatch PhotonPingManager/<PingSocket>d__10::<sw>5__8
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___U3CswU3E5__8_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_region_2() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___region_2)); }
	inline Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * get_region_2() const { return ___region_2; }
	inline Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B ** get_address_of_region_2() { return &___region_2; }
	inline void set_region_2(Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * value)
	{
		___region_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___region_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CU3E4__this_3)); }
	inline PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpingU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CpingU3E5__2_4)); }
	inline PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E * get_U3CpingU3E5__2_4() const { return ___U3CpingU3E5__2_4; }
	inline PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E ** get_address_of_U3CpingU3E5__2_4() { return &___U3CpingU3E5__2_4; }
	inline void set_U3CpingU3E5__2_4(PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E * value)
	{
		___U3CpingU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpingU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrttSumU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CrttSumU3E5__3_5)); }
	inline float get_U3CrttSumU3E5__3_5() const { return ___U3CrttSumU3E5__3_5; }
	inline float* get_address_of_U3CrttSumU3E5__3_5() { return &___U3CrttSumU3E5__3_5; }
	inline void set_U3CrttSumU3E5__3_5(float value)
	{
		___U3CrttSumU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CreplyCountU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CreplyCountU3E5__4_6)); }
	inline int32_t get_U3CreplyCountU3E5__4_6() const { return ___U3CreplyCountU3E5__4_6; }
	inline int32_t* get_address_of_U3CreplyCountU3E5__4_6() { return &___U3CreplyCountU3E5__4_6; }
	inline void set_U3CreplyCountU3E5__4_6(int32_t value)
	{
		___U3CreplyCountU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CregionAddressU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CregionAddressU3E5__5_7)); }
	inline String_t* get_U3CregionAddressU3E5__5_7() const { return ___U3CregionAddressU3E5__5_7; }
	inline String_t** get_address_of_U3CregionAddressU3E5__5_7() { return &___U3CregionAddressU3E5__5_7; }
	inline void set_U3CregionAddressU3E5__5_7(String_t* value)
	{
		___U3CregionAddressU3E5__5_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CregionAddressU3E5__5_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CiU3E5__6_8)); }
	inline int32_t get_U3CiU3E5__6_8() const { return ___U3CiU3E5__6_8; }
	inline int32_t* get_address_of_U3CiU3E5__6_8() { return &___U3CiU3E5__6_8; }
	inline void set_U3CiU3E5__6_8(int32_t value)
	{
		___U3CiU3E5__6_8 = value;
	}

	inline static int32_t get_offset_of_U3CovertimeU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CovertimeU3E5__7_9)); }
	inline bool get_U3CovertimeU3E5__7_9() const { return ___U3CovertimeU3E5__7_9; }
	inline bool* get_address_of_U3CovertimeU3E5__7_9() { return &___U3CovertimeU3E5__7_9; }
	inline void set_U3CovertimeU3E5__7_9(bool value)
	{
		___U3CovertimeU3E5__7_9 = value;
	}

	inline static int32_t get_offset_of_U3CswU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A, ___U3CswU3E5__8_10)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_U3CswU3E5__8_10() const { return ___U3CswU3E5__8_10; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_U3CswU3E5__8_10() { return &___U3CswU3E5__8_10; }
	inline void set_U3CswU3E5__8_10(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___U3CswU3E5__8_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CswU3E5__8_10), (void*)value);
	}
};


// RpsCore/<CycleRemoteHandCoroutine>d__42
struct  U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2  : public RuntimeObject
{
public:
	// System.Int32 RpsCore/<CycleRemoteHandCoroutine>d__42::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RpsCore/<CycleRemoteHandCoroutine>d__42::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// RpsCore RpsCore/<CycleRemoteHandCoroutine>d__42::<>4__this
	RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2, ___U3CU3E4__this_2)); }
	inline RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37
struct  U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690  : public RuntimeObject
{
public:
	// System.Int32 RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// RpsCore RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::<>4__this
	RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690, ___U3CU3E4__this_2)); }
	inline RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// instantiateEffectCallerExplosion1/chainEffect
struct  chainEffect_t42C1672A3460D7C694DE42569C67EA97E5218AB0  : public RuntimeObject
{
public:
	// System.Boolean instantiateEffectCallerExplosion1/chainEffect::isPlayed
	bool ___isPlayed_0;
	// System.Single instantiateEffectCallerExplosion1/chainEffect::activateTimer
	float ___activateTimer_1;
	// UnityEngine.GameObject instantiateEffectCallerExplosion1/chainEffect::Effect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Effect_2;
	// UnityEngine.Transform instantiateEffectCallerExplosion1/chainEffect::effectLocator
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___effectLocator_3;

public:
	inline static int32_t get_offset_of_isPlayed_0() { return static_cast<int32_t>(offsetof(chainEffect_t42C1672A3460D7C694DE42569C67EA97E5218AB0, ___isPlayed_0)); }
	inline bool get_isPlayed_0() const { return ___isPlayed_0; }
	inline bool* get_address_of_isPlayed_0() { return &___isPlayed_0; }
	inline void set_isPlayed_0(bool value)
	{
		___isPlayed_0 = value;
	}

	inline static int32_t get_offset_of_activateTimer_1() { return static_cast<int32_t>(offsetof(chainEffect_t42C1672A3460D7C694DE42569C67EA97E5218AB0, ___activateTimer_1)); }
	inline float get_activateTimer_1() const { return ___activateTimer_1; }
	inline float* get_address_of_activateTimer_1() { return &___activateTimer_1; }
	inline void set_activateTimer_1(float value)
	{
		___activateTimer_1 = value;
	}

	inline static int32_t get_offset_of_Effect_2() { return static_cast<int32_t>(offsetof(chainEffect_t42C1672A3460D7C694DE42569C67EA97E5218AB0, ___Effect_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Effect_2() const { return ___Effect_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Effect_2() { return &___Effect_2; }
	inline void set_Effect_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Effect_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Effect_2), (void*)value);
	}

	inline static int32_t get_offset_of_effectLocator_3() { return static_cast<int32_t>(offsetof(chainEffect_t42C1672A3460D7C694DE42569C67EA97E5218AB0, ___effectLocator_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_effectLocator_3() const { return ___effectLocator_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_effectLocator_3() { return &___effectLocator_3; }
	inline void set_effectLocator_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___effectLocator_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___effectLocator_3), (void*)value);
	}
};


// projectileActorExplosion1/projectile
struct  projectile_t8DE287385AC9DE674E4D58821DA5145E928AE106  : public RuntimeObject
{
public:
	// System.String projectileActorExplosion1/projectile::name
	String_t* ___name_0;
	// UnityEngine.Rigidbody projectileActorExplosion1/projectile::bombPrefab
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___bombPrefab_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(projectile_t8DE287385AC9DE674E4D58821DA5145E928AE106, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_bombPrefab_1() { return static_cast<int32_t>(offsetof(projectile_t8DE287385AC9DE674E4D58821DA5145E928AE106, ___bombPrefab_1)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_bombPrefab_1() const { return ___bombPrefab_1; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_bombPrefab_1() { return &___bombPrefab_1; }
	inline void set_bombPrefab_1(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___bombPrefab_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bombPrefab_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Region>
struct  Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE, ___list_0)); }
	inline List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 * get_list_0() const { return ___list_0; }
	inline List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE, ___current_3)); }
	inline Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * get_current_3() const { return ___current_3; }
	inline Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
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


// Photon.Realtime.PingMono
struct  PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9  : public PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E
{
public:
	// System.Net.Sockets.Socket Photon.Realtime.PingMono::sock
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___sock_6;

public:
	inline static int32_t get_offset_of_sock_6() { return static_cast<int32_t>(offsetof(PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9, ___sock_6)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_sock_6() const { return ___sock_6; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_sock_6() { return &___sock_6; }
	inline void set_sock_6(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___sock_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sock_6), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D13
struct  __StaticArrayInitTypeSizeU3D13_tA7FAE3E0E7DFD302EDB7CE8F18CB7BFA288C6F2C 
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
		uint8_t __StaticArrayInitTypeSizeU3D13_tA7FAE3E0E7DFD302EDB7CE8F18CB7BFA288C6F2C__padding[13];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D16
struct  __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 
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
		uint8_t __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66__padding[16];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D32
struct  __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F 
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
		uint8_t __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F__padding[32];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D48
struct  __StaticArrayInitTypeSizeU3D48_tFD8B246DD801288DF862F996D7F0915222433AD7 
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
		uint8_t __StaticArrayInitTypeSizeU3D48_tFD8B246DD801288DF862F996D7F0915222433AD7__padding[48];
	};

public:
};


// ExitGames.Demos.DemoHubManager/DemoData
struct  DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE 
{
public:
	// System.String ExitGames.Demos.DemoHubManager/DemoData::Title
	String_t* ___Title_0;
	// System.String ExitGames.Demos.DemoHubManager/DemoData::Description
	String_t* ___Description_1;
	// System.String ExitGames.Demos.DemoHubManager/DemoData::Scene
	String_t* ___Scene_2;
	// System.String ExitGames.Demos.DemoHubManager/DemoData::TutorialLink
	String_t* ___TutorialLink_3;
	// System.String ExitGames.Demos.DemoHubManager/DemoData::DocLink
	String_t* ___DocLink_4;

public:
	inline static int32_t get_offset_of_Title_0() { return static_cast<int32_t>(offsetof(DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE, ___Title_0)); }
	inline String_t* get_Title_0() const { return ___Title_0; }
	inline String_t** get_address_of_Title_0() { return &___Title_0; }
	inline void set_Title_0(String_t* value)
	{
		___Title_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Title_0), (void*)value);
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE, ___Description_1)); }
	inline String_t* get_Description_1() const { return ___Description_1; }
	inline String_t** get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(String_t* value)
	{
		___Description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Description_1), (void*)value);
	}

	inline static int32_t get_offset_of_Scene_2() { return static_cast<int32_t>(offsetof(DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE, ___Scene_2)); }
	inline String_t* get_Scene_2() const { return ___Scene_2; }
	inline String_t** get_address_of_Scene_2() { return &___Scene_2; }
	inline void set_Scene_2(String_t* value)
	{
		___Scene_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Scene_2), (void*)value);
	}

	inline static int32_t get_offset_of_TutorialLink_3() { return static_cast<int32_t>(offsetof(DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE, ___TutorialLink_3)); }
	inline String_t* get_TutorialLink_3() const { return ___TutorialLink_3; }
	inline String_t** get_address_of_TutorialLink_3() { return &___TutorialLink_3; }
	inline void set_TutorialLink_3(String_t* value)
	{
		___TutorialLink_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TutorialLink_3), (void*)value);
	}

	inline static int32_t get_offset_of_DocLink_4() { return static_cast<int32_t>(offsetof(DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE, ___DocLink_4)); }
	inline String_t* get_DocLink_4() const { return ___DocLink_4; }
	inline String_t** get_address_of_DocLink_4() { return &___DocLink_4; }
	inline void set_DocLink_4(String_t* value)
	{
		___DocLink_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DocLink_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of ExitGames.Demos.DemoHubManager/DemoData
struct DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE_marshaled_pinvoke
{
	char* ___Title_0;
	char* ___Description_1;
	char* ___Scene_2;
	char* ___TutorialLink_3;
	char* ___DocLink_4;
};
// Native definition for COM marshalling of ExitGames.Demos.DemoHubManager/DemoData
struct DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE_marshaled_com
{
	Il2CppChar* ___Title_0;
	Il2CppChar* ___Description_1;
	Il2CppChar* ___Scene_2;
	Il2CppChar* ___TutorialLink_3;
	Il2CppChar* ___DocLink_4;
};

// HubGui/DemoBtn
struct  DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272 
{
public:
	// System.String HubGui/DemoBtn::Text
	String_t* ___Text_0;
	// System.String HubGui/DemoBtn::Link
	String_t* ___Link_1;

public:
	inline static int32_t get_offset_of_Text_0() { return static_cast<int32_t>(offsetof(DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272, ___Text_0)); }
	inline String_t* get_Text_0() const { return ___Text_0; }
	inline String_t** get_address_of_Text_0() { return &___Text_0; }
	inline void set_Text_0(String_t* value)
	{
		___Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_Link_1() { return static_cast<int32_t>(offsetof(DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272, ___Link_1)); }
	inline String_t* get_Link_1() const { return ___Link_1; }
	inline String_t** get_address_of_Link_1() { return &___Link_1; }
	inline void set_Link_1(String_t* value)
	{
		___Link_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Link_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of HubGui/DemoBtn
struct DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272_marshaled_pinvoke
{
	char* ___Text_0;
	char* ___Link_1;
};
// Native definition for COM marshalling of HubGui/DemoBtn
struct DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272_marshaled_com
{
	Il2CppChar* ___Text_0;
	Il2CppChar* ___Link_1;
};

// AuthModeOption
struct  AuthModeOption_tC0D77E6C4F4046B1EF1D17C5870CBE3C82357B73 
{
public:
	// System.Int32 AuthModeOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthModeOption_tC0D77E6C4F4046B1EF1D17C5870CBE3C82357B73, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ClientState
struct  ClientState_t2BC6366743E2FF685EF8EBBF24CDA27003321561 
{
public:
	// System.Int32 ClientState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientState_t2BC6366743E2FF685EF8EBBF24CDA27003321561, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CloudRegionCode
struct  CloudRegionCode_tB0952227D76BB99B6E9ECE40C3E539545BF38C62 
{
public:
	// System.Int32 CloudRegionCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CloudRegionCode_tB0952227D76BB99B6E9ECE40C3E539545BF38C62, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_tE1E52FB16671F42D905FF339B6DB6104717B8470 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_tE1E52FB16671F42D905FF339B6DB6104717B8470, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_t1AA68061A2483F5935F6403B972903DBFCA6ECDE 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_t1AA68061A2483F5935F6403B972903DBFCA6ECDE, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// EncryptionMode
struct  EncryptionMode_t84AC44D3276C7E5EB945E8ADDE7DE19ADD083551 
{
public:
	// System.Int32 EncryptionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EncryptionMode_t84AC44D3276C7E5EB945E8ADDE7DE19ADD083551, ___value___2)); }
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// JoinType
struct  JoinType_t48852A7C137D67759E9302AF1A88D5544A01263C 
{
public:
	// System.Int32 JoinType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoinType_t48852A7C137D67759E9302AF1A88D5544A01263C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// OnSerializeRigidBody
struct  OnSerializeRigidBody_t189D63372699A9836467EEEA18DF79924F4D7C78 
{
public:
	// System.Int32 OnSerializeRigidBody::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OnSerializeRigidBody_t189D63372699A9836467EEEA18DF79924F4D7C78, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OnSerializeTransform
struct  OnSerializeTransform_t0077FA773F53BC017B4EAE5373E3988A51BD9CCE 
{
public:
	// System.Int32 OnSerializeTransform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OnSerializeTransform_t0077FA773F53BC017B4EAE5373E3988A51BD9CCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OwnershipOption
struct  OwnershipOption_tE4AE8149B078021A2FEB2859C9D0D235B02CF774 
{
public:
	// System.Int32 OwnershipOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OwnershipOption_tE4AE8149B078021A2FEB2859C9D0D235B02CF774, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PhotonLogLevel
struct  PhotonLogLevel_t37429E1B0CC9D3D0D53603B89D5409A5CCC546A8 
{
public:
	// System.Int32 PhotonLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhotonLogLevel_t37429E1B0CC9D3D0D53603B89D5409A5CCC546A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Ray
struct  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// ExitGames.Client.Photon.SerializationProtocol
struct  SerializationProtocol_t78ABADB69FCC83FCF1CAD9C50B57846147F9A34D 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationProtocol_t78ABADB69FCC83FCF1CAD9C50B57846147F9A34D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ServerConnection
struct  ServerConnection_tF04C29A32DFD1FD64C1B8205FD96E07F4DB676CB 
{
public:
	// System.Int32 ServerConnection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServerConnection_tF04C29A32DFD1FD64C1B8205FD96E07F4DB676CB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct  TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ViewSynchronization
struct  ViewSynchronization_t12F3E73BBD9B55117664B61D14268D0EA8A3E7DE 
{
public:
	// System.Int32 ViewSynchronization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewSynchronization_t12F3E73BBD9B55117664B61D14268D0EA8A3E7DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CellTreeNode/ENodeType
struct  ENodeType_tF62ACF3B14B9E29C1D558EF396C1F493F2E4018A 
{
public:
	// System.Int32 CellTreeNode/ENodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ENodeType_tF62ACF3B14B9E29C1D558EF396C1F493F2E4018A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CubeInter/State
struct  State_t22EEE82DA6175C629FBA81468504E69DC42E9DDA 
{
public:
	// System.Double CubeInter/State::timestamp
	double ___timestamp_0;
	// UnityEngine.Vector3 CubeInter/State::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_1;
	// UnityEngine.Quaternion CubeInter/State::rot
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rot_2;

public:
	inline static int32_t get_offset_of_timestamp_0() { return static_cast<int32_t>(offsetof(State_t22EEE82DA6175C629FBA81468504E69DC42E9DDA, ___timestamp_0)); }
	inline double get_timestamp_0() const { return ___timestamp_0; }
	inline double* get_address_of_timestamp_0() { return &___timestamp_0; }
	inline void set_timestamp_0(double value)
	{
		___timestamp_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(State_t22EEE82DA6175C629FBA81468504E69DC42E9DDA, ___pos_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_1() const { return ___pos_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_rot_2() { return static_cast<int32_t>(offsetof(State_t22EEE82DA6175C629FBA81468504E69DC42E9DDA, ___rot_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rot_2() const { return ___rot_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rot_2() { return &___rot_2; }
	inline void set_rot_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rot_2 = value;
	}
};


// GUICustomAuth/GuiState
struct  GuiState_t718CB186A384933CE75A9BA42065B6A883FAA954 
{
public:
	// System.Int32 GUICustomAuth/GuiState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GuiState_t718CB186A384933CE75A9BA42065B6A883FAA954, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LoadBalancingPeer/RoomOptionBit
struct  RoomOptionBit_tAE6C9EA882457257851C01DC8505905201FABC7D 
{
public:
	// System.Int32 LoadBalancingPeer/RoomOptionBit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RoomOptionBit_tAE6C9EA882457257851C01DC8505905201FABC7D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// OnClickLoadSomething/ResourceTypeOption
struct  ResourceTypeOption_t01289F190CCDF533463EE8B80BB03015954C7941 
{
public:
	// System.Byte OnClickLoadSomething/ResourceTypeOption::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResourceTypeOption_t01289F190CCDF533463EE8B80BB03015954C7941, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// PhotonAnimatorView/ParameterType
struct  ParameterType_tA2CF6ED7A49322B323884FFD6AFD92AAADB102AD 
{
public:
	// System.Int32 PhotonAnimatorView/ParameterType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterType_tA2CF6ED7A49322B323884FFD6AFD92AAADB102AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PhotonAnimatorView/SynchronizeType
struct  SynchronizeType_t95CDBFC45FA45DD9747CDA1FC4E2976592E61745 
{
public:
	// System.Int32 PhotonAnimatorView/SynchronizeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SynchronizeType_t95CDBFC45FA45DD9747CDA1FC4E2976592E61745, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PhotonTransformViewPositionModel/ExtrapolateOptions
struct  ExtrapolateOptions_tDE7019C598B58B7DAA76C27793E05B8A90E983AC 
{
public:
	// System.Int32 PhotonTransformViewPositionModel/ExtrapolateOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExtrapolateOptions_tDE7019C598B58B7DAA76C27793E05B8A90E983AC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PhotonTransformViewPositionModel/InterpolateOptions
struct  InterpolateOptions_tCA7221023DC9B36EABDD19455160BD923D31FEDE 
{
public:
	// System.Int32 PhotonTransformViewPositionModel/InterpolateOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InterpolateOptions_tCA7221023DC9B36EABDD19455160BD923D31FEDE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PhotonTransformViewRotationModel/InterpolateOptions
struct  InterpolateOptions_tE98EDF151A63EA047CA41425CA6E6ACAC16889DE 
{
public:
	// System.Int32 PhotonTransformViewRotationModel/InterpolateOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InterpolateOptions_tE98EDF151A63EA047CA41425CA6E6ACAC16889DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PhotonTransformViewScaleModel/InterpolateOptions
struct  InterpolateOptions_t9FE8530021A82C2E33E947A99AE0C7CEB75F1E3E 
{
public:
	// System.Int32 PhotonTransformViewScaleModel/InterpolateOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InterpolateOptions_t9FE8530021A82C2E33E947A99AE0C7CEB75F1E3E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PunTeams/Team
struct  Team_t4787E519F79A12C5EA8A8EB53E5F506D237EFEF4 
{
public:
	// System.Byte PunTeams/Team::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Team_t4787E519F79A12C5EA8A8EB53E5F506D237EFEF4, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// RpsCore/Hand
struct  Hand_t867A934119CE28BF196DD7B8DF63D6BA309030EA 
{
public:
	// System.Int32 RpsCore/Hand::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Hand_t867A934119CE28BF196DD7B8DF63D6BA309030EA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// RpsCore/ResultType
struct  ResultType_t0B2FFBA02922127758F192A1E0478563322784BA 
{
public:
	// System.Int32 RpsCore/ResultType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResultType_t0B2FFBA02922127758F192A1E0478563322784BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ServerSettings/HostingOption
struct  HostingOption_tF1C311C500FFE220BC1CDD3C36C52CA4B3B29D24 
{
public:
	// System.Int32 ServerSettings/HostingOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HostingOption_tF1C311C500FFE220BC1CDD3C36C52CA4B3B29D24, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// PhotonNetwork
struct  PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F  : public RuntimeObject
{
public:

public:
};

struct PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields
{
public:
	// System.String PhotonNetwork::<gameVersion>k__BackingField
	String_t* ___U3CgameVersionU3Ek__BackingField_1;
	// PhotonHandler PhotonNetwork::photonMono
	PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB * ___photonMono_2;
	// NetworkingPeer PhotonNetwork::networkingPeer
	NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * ___networkingPeer_3;
	// System.Int32 PhotonNetwork::MAX_VIEW_IDS
	int32_t ___MAX_VIEW_IDS_4;
	// ServerSettings PhotonNetwork::PhotonServerSettings
	ServerSettings_tA5C4BA75817C6F27E717C7B40D5D38583C7E0FFE * ___PhotonServerSettings_6;
	// System.Boolean PhotonNetwork::InstantiateInRoomOnly
	bool ___InstantiateInRoomOnly_7;
	// PhotonLogLevel PhotonNetwork::logLevel
	int32_t ___logLevel_8;
	// System.Collections.Generic.List`1<FriendInfo> PhotonNetwork::<Friends>k__BackingField
	List_1_t673621F5B6E20DEB6FA92F197D314F98CC2E3D53 * ___U3CFriendsU3Ek__BackingField_9;
	// System.Single PhotonNetwork::precisionForVectorSynchronization
	float ___precisionForVectorSynchronization_10;
	// System.Single PhotonNetwork::precisionForQuaternionSynchronization
	float ___precisionForQuaternionSynchronization_11;
	// System.Single PhotonNetwork::precisionForFloatSynchronization
	float ___precisionForFloatSynchronization_12;
	// System.Boolean PhotonNetwork::UseRpcMonoBehaviourCache
	bool ___UseRpcMonoBehaviourCache_13;
	// System.Boolean PhotonNetwork::UsePrefabCache
	bool ___UsePrefabCache_14;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> PhotonNetwork::PrefabCache
	Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * ___PrefabCache_15;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> PhotonNetwork::SendMonoMessageTargets
	HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * ___SendMonoMessageTargets_16;
	// System.Type PhotonNetwork::SendMonoMessageTargetType
	Type_t * ___SendMonoMessageTargetType_17;
	// System.Boolean PhotonNetwork::StartRpcsAsCoroutine
	bool ___StartRpcsAsCoroutine_18;
	// System.Boolean PhotonNetwork::isOfflineMode
	bool ___isOfflineMode_19;
	// Room PhotonNetwork::offlineModeRoom
	Room_t44A97854220FADE8C026E18625929E32B64B3F6A * ___offlineModeRoom_20;
	// System.Int32 PhotonNetwork::maxConnections
	int32_t ___maxConnections_21;
	// System.Boolean PhotonNetwork::_mAutomaticallySyncScene
	bool ____mAutomaticallySyncScene_22;
	// System.Boolean PhotonNetwork::m_autoCleanUpPlayerObjects
	bool ___m_autoCleanUpPlayerObjects_23;
	// System.Int32 PhotonNetwork::sendInterval
	int32_t ___sendInterval_24;
	// System.Int32 PhotonNetwork::sendIntervalOnSerialize
	int32_t ___sendIntervalOnSerialize_25;
	// System.Boolean PhotonNetwork::m_isMessageQueueRunning
	bool ___m_isMessageQueueRunning_26;
	// System.Diagnostics.Stopwatch PhotonNetwork::startupStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___startupStopwatch_27;
	// System.Single PhotonNetwork::BackgroundTimeout
	float ___BackgroundTimeout_28;
	// System.Boolean PhotonNetwork::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_29;
	// PhotonNetwork/EventCallback PhotonNetwork::OnEventCall
	EventCallback_tF67DD1350E7870B69EB1BFB2871FF3DA891E70E6 * ___OnEventCall_30;
	// System.Int32 PhotonNetwork::lastUsedViewSubId
	int32_t ___lastUsedViewSubId_31;
	// System.Int32 PhotonNetwork::lastUsedViewSubIdStatic
	int32_t ___lastUsedViewSubIdStatic_32;
	// System.Collections.Generic.List`1<System.Int32> PhotonNetwork::manuallyAllocatedViewIds
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___manuallyAllocatedViewIds_33;

public:
	inline static int32_t get_offset_of_U3CgameVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___U3CgameVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CgameVersionU3Ek__BackingField_1() const { return ___U3CgameVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CgameVersionU3Ek__BackingField_1() { return &___U3CgameVersionU3Ek__BackingField_1; }
	inline void set_U3CgameVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CgameVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgameVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_photonMono_2() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___photonMono_2)); }
	inline PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB * get_photonMono_2() const { return ___photonMono_2; }
	inline PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB ** get_address_of_photonMono_2() { return &___photonMono_2; }
	inline void set_photonMono_2(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB * value)
	{
		___photonMono_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonMono_2), (void*)value);
	}

	inline static int32_t get_offset_of_networkingPeer_3() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___networkingPeer_3)); }
	inline NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * get_networkingPeer_3() const { return ___networkingPeer_3; }
	inline NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 ** get_address_of_networkingPeer_3() { return &___networkingPeer_3; }
	inline void set_networkingPeer_3(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * value)
	{
		___networkingPeer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkingPeer_3), (void*)value);
	}

	inline static int32_t get_offset_of_MAX_VIEW_IDS_4() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___MAX_VIEW_IDS_4)); }
	inline int32_t get_MAX_VIEW_IDS_4() const { return ___MAX_VIEW_IDS_4; }
	inline int32_t* get_address_of_MAX_VIEW_IDS_4() { return &___MAX_VIEW_IDS_4; }
	inline void set_MAX_VIEW_IDS_4(int32_t value)
	{
		___MAX_VIEW_IDS_4 = value;
	}

	inline static int32_t get_offset_of_PhotonServerSettings_6() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___PhotonServerSettings_6)); }
	inline ServerSettings_tA5C4BA75817C6F27E717C7B40D5D38583C7E0FFE * get_PhotonServerSettings_6() const { return ___PhotonServerSettings_6; }
	inline ServerSettings_tA5C4BA75817C6F27E717C7B40D5D38583C7E0FFE ** get_address_of_PhotonServerSettings_6() { return &___PhotonServerSettings_6; }
	inline void set_PhotonServerSettings_6(ServerSettings_tA5C4BA75817C6F27E717C7B40D5D38583C7E0FFE * value)
	{
		___PhotonServerSettings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhotonServerSettings_6), (void*)value);
	}

	inline static int32_t get_offset_of_InstantiateInRoomOnly_7() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___InstantiateInRoomOnly_7)); }
	inline bool get_InstantiateInRoomOnly_7() const { return ___InstantiateInRoomOnly_7; }
	inline bool* get_address_of_InstantiateInRoomOnly_7() { return &___InstantiateInRoomOnly_7; }
	inline void set_InstantiateInRoomOnly_7(bool value)
	{
		___InstantiateInRoomOnly_7 = value;
	}

	inline static int32_t get_offset_of_logLevel_8() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___logLevel_8)); }
	inline int32_t get_logLevel_8() const { return ___logLevel_8; }
	inline int32_t* get_address_of_logLevel_8() { return &___logLevel_8; }
	inline void set_logLevel_8(int32_t value)
	{
		___logLevel_8 = value;
	}

	inline static int32_t get_offset_of_U3CFriendsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___U3CFriendsU3Ek__BackingField_9)); }
	inline List_1_t673621F5B6E20DEB6FA92F197D314F98CC2E3D53 * get_U3CFriendsU3Ek__BackingField_9() const { return ___U3CFriendsU3Ek__BackingField_9; }
	inline List_1_t673621F5B6E20DEB6FA92F197D314F98CC2E3D53 ** get_address_of_U3CFriendsU3Ek__BackingField_9() { return &___U3CFriendsU3Ek__BackingField_9; }
	inline void set_U3CFriendsU3Ek__BackingField_9(List_1_t673621F5B6E20DEB6FA92F197D314F98CC2E3D53 * value)
	{
		___U3CFriendsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFriendsU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_precisionForVectorSynchronization_10() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___precisionForVectorSynchronization_10)); }
	inline float get_precisionForVectorSynchronization_10() const { return ___precisionForVectorSynchronization_10; }
	inline float* get_address_of_precisionForVectorSynchronization_10() { return &___precisionForVectorSynchronization_10; }
	inline void set_precisionForVectorSynchronization_10(float value)
	{
		___precisionForVectorSynchronization_10 = value;
	}

	inline static int32_t get_offset_of_precisionForQuaternionSynchronization_11() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___precisionForQuaternionSynchronization_11)); }
	inline float get_precisionForQuaternionSynchronization_11() const { return ___precisionForQuaternionSynchronization_11; }
	inline float* get_address_of_precisionForQuaternionSynchronization_11() { return &___precisionForQuaternionSynchronization_11; }
	inline void set_precisionForQuaternionSynchronization_11(float value)
	{
		___precisionForQuaternionSynchronization_11 = value;
	}

	inline static int32_t get_offset_of_precisionForFloatSynchronization_12() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___precisionForFloatSynchronization_12)); }
	inline float get_precisionForFloatSynchronization_12() const { return ___precisionForFloatSynchronization_12; }
	inline float* get_address_of_precisionForFloatSynchronization_12() { return &___precisionForFloatSynchronization_12; }
	inline void set_precisionForFloatSynchronization_12(float value)
	{
		___precisionForFloatSynchronization_12 = value;
	}

	inline static int32_t get_offset_of_UseRpcMonoBehaviourCache_13() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___UseRpcMonoBehaviourCache_13)); }
	inline bool get_UseRpcMonoBehaviourCache_13() const { return ___UseRpcMonoBehaviourCache_13; }
	inline bool* get_address_of_UseRpcMonoBehaviourCache_13() { return &___UseRpcMonoBehaviourCache_13; }
	inline void set_UseRpcMonoBehaviourCache_13(bool value)
	{
		___UseRpcMonoBehaviourCache_13 = value;
	}

	inline static int32_t get_offset_of_UsePrefabCache_14() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___UsePrefabCache_14)); }
	inline bool get_UsePrefabCache_14() const { return ___UsePrefabCache_14; }
	inline bool* get_address_of_UsePrefabCache_14() { return &___UsePrefabCache_14; }
	inline void set_UsePrefabCache_14(bool value)
	{
		___UsePrefabCache_14 = value;
	}

	inline static int32_t get_offset_of_PrefabCache_15() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___PrefabCache_15)); }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * get_PrefabCache_15() const { return ___PrefabCache_15; }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C ** get_address_of_PrefabCache_15() { return &___PrefabCache_15; }
	inline void set_PrefabCache_15(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * value)
	{
		___PrefabCache_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrefabCache_15), (void*)value);
	}

	inline static int32_t get_offset_of_SendMonoMessageTargets_16() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___SendMonoMessageTargets_16)); }
	inline HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * get_SendMonoMessageTargets_16() const { return ___SendMonoMessageTargets_16; }
	inline HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 ** get_address_of_SendMonoMessageTargets_16() { return &___SendMonoMessageTargets_16; }
	inline void set_SendMonoMessageTargets_16(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * value)
	{
		___SendMonoMessageTargets_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendMonoMessageTargets_16), (void*)value);
	}

	inline static int32_t get_offset_of_SendMonoMessageTargetType_17() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___SendMonoMessageTargetType_17)); }
	inline Type_t * get_SendMonoMessageTargetType_17() const { return ___SendMonoMessageTargetType_17; }
	inline Type_t ** get_address_of_SendMonoMessageTargetType_17() { return &___SendMonoMessageTargetType_17; }
	inline void set_SendMonoMessageTargetType_17(Type_t * value)
	{
		___SendMonoMessageTargetType_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendMonoMessageTargetType_17), (void*)value);
	}

	inline static int32_t get_offset_of_StartRpcsAsCoroutine_18() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___StartRpcsAsCoroutine_18)); }
	inline bool get_StartRpcsAsCoroutine_18() const { return ___StartRpcsAsCoroutine_18; }
	inline bool* get_address_of_StartRpcsAsCoroutine_18() { return &___StartRpcsAsCoroutine_18; }
	inline void set_StartRpcsAsCoroutine_18(bool value)
	{
		___StartRpcsAsCoroutine_18 = value;
	}

	inline static int32_t get_offset_of_isOfflineMode_19() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___isOfflineMode_19)); }
	inline bool get_isOfflineMode_19() const { return ___isOfflineMode_19; }
	inline bool* get_address_of_isOfflineMode_19() { return &___isOfflineMode_19; }
	inline void set_isOfflineMode_19(bool value)
	{
		___isOfflineMode_19 = value;
	}

	inline static int32_t get_offset_of_offlineModeRoom_20() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___offlineModeRoom_20)); }
	inline Room_t44A97854220FADE8C026E18625929E32B64B3F6A * get_offlineModeRoom_20() const { return ___offlineModeRoom_20; }
	inline Room_t44A97854220FADE8C026E18625929E32B64B3F6A ** get_address_of_offlineModeRoom_20() { return &___offlineModeRoom_20; }
	inline void set_offlineModeRoom_20(Room_t44A97854220FADE8C026E18625929E32B64B3F6A * value)
	{
		___offlineModeRoom_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offlineModeRoom_20), (void*)value);
	}

	inline static int32_t get_offset_of_maxConnections_21() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___maxConnections_21)); }
	inline int32_t get_maxConnections_21() const { return ___maxConnections_21; }
	inline int32_t* get_address_of_maxConnections_21() { return &___maxConnections_21; }
	inline void set_maxConnections_21(int32_t value)
	{
		___maxConnections_21 = value;
	}

	inline static int32_t get_offset_of__mAutomaticallySyncScene_22() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ____mAutomaticallySyncScene_22)); }
	inline bool get__mAutomaticallySyncScene_22() const { return ____mAutomaticallySyncScene_22; }
	inline bool* get_address_of__mAutomaticallySyncScene_22() { return &____mAutomaticallySyncScene_22; }
	inline void set__mAutomaticallySyncScene_22(bool value)
	{
		____mAutomaticallySyncScene_22 = value;
	}

	inline static int32_t get_offset_of_m_autoCleanUpPlayerObjects_23() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___m_autoCleanUpPlayerObjects_23)); }
	inline bool get_m_autoCleanUpPlayerObjects_23() const { return ___m_autoCleanUpPlayerObjects_23; }
	inline bool* get_address_of_m_autoCleanUpPlayerObjects_23() { return &___m_autoCleanUpPlayerObjects_23; }
	inline void set_m_autoCleanUpPlayerObjects_23(bool value)
	{
		___m_autoCleanUpPlayerObjects_23 = value;
	}

	inline static int32_t get_offset_of_sendInterval_24() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___sendInterval_24)); }
	inline int32_t get_sendInterval_24() const { return ___sendInterval_24; }
	inline int32_t* get_address_of_sendInterval_24() { return &___sendInterval_24; }
	inline void set_sendInterval_24(int32_t value)
	{
		___sendInterval_24 = value;
	}

	inline static int32_t get_offset_of_sendIntervalOnSerialize_25() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___sendIntervalOnSerialize_25)); }
	inline int32_t get_sendIntervalOnSerialize_25() const { return ___sendIntervalOnSerialize_25; }
	inline int32_t* get_address_of_sendIntervalOnSerialize_25() { return &___sendIntervalOnSerialize_25; }
	inline void set_sendIntervalOnSerialize_25(int32_t value)
	{
		___sendIntervalOnSerialize_25 = value;
	}

	inline static int32_t get_offset_of_m_isMessageQueueRunning_26() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___m_isMessageQueueRunning_26)); }
	inline bool get_m_isMessageQueueRunning_26() const { return ___m_isMessageQueueRunning_26; }
	inline bool* get_address_of_m_isMessageQueueRunning_26() { return &___m_isMessageQueueRunning_26; }
	inline void set_m_isMessageQueueRunning_26(bool value)
	{
		___m_isMessageQueueRunning_26 = value;
	}

	inline static int32_t get_offset_of_startupStopwatch_27() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___startupStopwatch_27)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_startupStopwatch_27() const { return ___startupStopwatch_27; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_startupStopwatch_27() { return &___startupStopwatch_27; }
	inline void set_startupStopwatch_27(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___startupStopwatch_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startupStopwatch_27), (void*)value);
	}

	inline static int32_t get_offset_of_BackgroundTimeout_28() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___BackgroundTimeout_28)); }
	inline float get_BackgroundTimeout_28() const { return ___BackgroundTimeout_28; }
	inline float* get_address_of_BackgroundTimeout_28() { return &___BackgroundTimeout_28; }
	inline void set_BackgroundTimeout_28(float value)
	{
		___BackgroundTimeout_28 = value;
	}

	inline static int32_t get_offset_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___U3CUseAlternativeUdpPortsU3Ek__BackingField_29)); }
	inline bool get_U3CUseAlternativeUdpPortsU3Ek__BackingField_29() const { return ___U3CUseAlternativeUdpPortsU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_29() { return &___U3CUseAlternativeUdpPortsU3Ek__BackingField_29; }
	inline void set_U3CUseAlternativeUdpPortsU3Ek__BackingField_29(bool value)
	{
		___U3CUseAlternativeUdpPortsU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_OnEventCall_30() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___OnEventCall_30)); }
	inline EventCallback_tF67DD1350E7870B69EB1BFB2871FF3DA891E70E6 * get_OnEventCall_30() const { return ___OnEventCall_30; }
	inline EventCallback_tF67DD1350E7870B69EB1BFB2871FF3DA891E70E6 ** get_address_of_OnEventCall_30() { return &___OnEventCall_30; }
	inline void set_OnEventCall_30(EventCallback_tF67DD1350E7870B69EB1BFB2871FF3DA891E70E6 * value)
	{
		___OnEventCall_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnEventCall_30), (void*)value);
	}

	inline static int32_t get_offset_of_lastUsedViewSubId_31() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___lastUsedViewSubId_31)); }
	inline int32_t get_lastUsedViewSubId_31() const { return ___lastUsedViewSubId_31; }
	inline int32_t* get_address_of_lastUsedViewSubId_31() { return &___lastUsedViewSubId_31; }
	inline void set_lastUsedViewSubId_31(int32_t value)
	{
		___lastUsedViewSubId_31 = value;
	}

	inline static int32_t get_offset_of_lastUsedViewSubIdStatic_32() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___lastUsedViewSubIdStatic_32)); }
	inline int32_t get_lastUsedViewSubIdStatic_32() const { return ___lastUsedViewSubIdStatic_32; }
	inline int32_t* get_address_of_lastUsedViewSubIdStatic_32() { return &___lastUsedViewSubIdStatic_32; }
	inline void set_lastUsedViewSubIdStatic_32(int32_t value)
	{
		___lastUsedViewSubIdStatic_32 = value;
	}

	inline static int32_t get_offset_of_manuallyAllocatedViewIds_33() { return static_cast<int32_t>(offsetof(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields, ___manuallyAllocatedViewIds_33)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_manuallyAllocatedViewIds_33() const { return ___manuallyAllocatedViewIds_33; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_manuallyAllocatedViewIds_33() { return &___manuallyAllocatedViewIds_33; }
	inline void set_manuallyAllocatedViewIds_33(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___manuallyAllocatedViewIds_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manuallyAllocatedViewIds_33), (void*)value);
	}
};


// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_6;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_7;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_12;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_t3B3B3663ECCD2D47C05F241EC6B8A170CFAE8A77 * ___SocketImplementationConfig_13;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_14;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_15;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_16;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_17;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_18;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_19;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_20;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMinConnections
	int32_t ___RhttpMinConnections_21;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMaxConnections
	int32_t ___RhttpMaxConnections_22;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_25;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_26;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_27;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_28;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::DisconnectTimeout
	int32_t ___DisconnectTimeout_29;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_30;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_32;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_33;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_35;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___RandomizedSequenceNumbers_36;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * ___U3CTrafficStatsIncomingU3Ek__BackingField_37;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * ___U3CTrafficStatsOutgoingU3Ek__BackingField_38;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_39;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___trafficStatsStopwatch_40;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_41;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * ___peerBase_42;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject * ___SendOutgoingLockObject_43;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject * ___DispatchLockObject_44;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject * ___EnqueueLock_45;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PayloadEncryptionSecret_46;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t * ___encryptorType_47;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_48;

public:
	inline static int32_t get_offset_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CCommandBufferSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCommandBufferSizeU3Ek__BackingField_0() const { return ___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return &___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline void set_U3CCommandBufferSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCommandBufferSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_WarningSize_2() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___WarningSize_2)); }
	inline int32_t get_WarningSize_2() const { return ___WarningSize_2; }
	inline int32_t* get_address_of_WarningSize_2() { return &___WarningSize_2; }
	inline void set_WarningSize_2(int32_t value)
	{
		___WarningSize_2 = value;
	}

	inline static int32_t get_offset_of_ClientSdkId_6() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___ClientSdkId_6)); }
	inline uint8_t get_ClientSdkId_6() const { return ___ClientSdkId_6; }
	inline uint8_t* get_address_of_ClientSdkId_6() { return &___ClientSdkId_6; }
	inline void set_ClientSdkId_6(uint8_t value)
	{
		___ClientSdkId_6 = value;
	}

	inline static int32_t get_offset_of_clientVersion_7() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___clientVersion_7)); }
	inline String_t* get_clientVersion_7() const { return ___clientVersion_7; }
	inline String_t** get_address_of_clientVersion_7() { return &___clientVersion_7; }
	inline void set_clientVersion_7(String_t* value)
	{
		___clientVersion_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientVersion_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSerializationProtocolTypeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CSerializationProtocolTypeU3Ek__BackingField_12)); }
	inline int32_t get_U3CSerializationProtocolTypeU3Ek__BackingField_12() const { return ___U3CSerializationProtocolTypeU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CSerializationProtocolTypeU3Ek__BackingField_12() { return &___U3CSerializationProtocolTypeU3Ek__BackingField_12; }
	inline void set_U3CSerializationProtocolTypeU3Ek__BackingField_12(int32_t value)
	{
		___U3CSerializationProtocolTypeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_13() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___SocketImplementationConfig_13)); }
	inline Dictionary_2_t3B3B3663ECCD2D47C05F241EC6B8A170CFAE8A77 * get_SocketImplementationConfig_13() const { return ___SocketImplementationConfig_13; }
	inline Dictionary_2_t3B3B3663ECCD2D47C05F241EC6B8A170CFAE8A77 ** get_address_of_SocketImplementationConfig_13() { return &___SocketImplementationConfig_13; }
	inline void set_SocketImplementationConfig_13(Dictionary_2_t3B3B3663ECCD2D47C05F241EC6B8A170CFAE8A77 * value)
	{
		___SocketImplementationConfig_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SocketImplementationConfig_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CSocketImplementationU3Ek__BackingField_14)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_14() const { return ___U3CSocketImplementationU3Ek__BackingField_14; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_14() { return &___U3CSocketImplementationU3Ek__BackingField_14; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_14(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSocketImplementationU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_DebugOut_15() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___DebugOut_15)); }
	inline uint8_t get_DebugOut_15() const { return ___DebugOut_15; }
	inline uint8_t* get_address_of_DebugOut_15() { return &___DebugOut_15; }
	inline void set_DebugOut_15(uint8_t value)
	{
		___DebugOut_15 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CListenerU3Ek__BackingField_16)); }
	inline RuntimeObject* get_U3CListenerU3Ek__BackingField_16() const { return ___U3CListenerU3Ek__BackingField_16; }
	inline RuntimeObject** get_address_of_U3CListenerU3Ek__BackingField_16() { return &___U3CListenerU3Ek__BackingField_16; }
	inline void set_U3CListenerU3Ek__BackingField_16(RuntimeObject* value)
	{
		___U3CListenerU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListenerU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_reuseEventInstance_17() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___reuseEventInstance_17)); }
	inline bool get_reuseEventInstance_17() const { return ___reuseEventInstance_17; }
	inline bool* get_address_of_reuseEventInstance_17() { return &___reuseEventInstance_17; }
	inline void set_reuseEventInstance_17(bool value)
	{
		___reuseEventInstance_17 = value;
	}

	inline static int32_t get_offset_of_SendInCreationOrder_18() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___SendInCreationOrder_18)); }
	inline bool get_SendInCreationOrder_18() const { return ___SendInCreationOrder_18; }
	inline bool* get_address_of_SendInCreationOrder_18() { return &___SendInCreationOrder_18; }
	inline void set_SendInCreationOrder_18(bool value)
	{
		___SendInCreationOrder_18 = value;
	}

	inline static int32_t get_offset_of_U3CEnableServerTracingU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CEnableServerTracingU3Ek__BackingField_19)); }
	inline bool get_U3CEnableServerTracingU3Ek__BackingField_19() const { return ___U3CEnableServerTracingU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CEnableServerTracingU3Ek__BackingField_19() { return &___U3CEnableServerTracingU3Ek__BackingField_19; }
	inline void set_U3CEnableServerTracingU3Ek__BackingField_19(bool value)
	{
		___U3CEnableServerTracingU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_20() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___quickResendAttempts_20)); }
	inline uint8_t get_quickResendAttempts_20() const { return ___quickResendAttempts_20; }
	inline uint8_t* get_address_of_quickResendAttempts_20() { return &___quickResendAttempts_20; }
	inline void set_quickResendAttempts_20(uint8_t value)
	{
		___quickResendAttempts_20 = value;
	}

	inline static int32_t get_offset_of_RhttpMinConnections_21() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___RhttpMinConnections_21)); }
	inline int32_t get_RhttpMinConnections_21() const { return ___RhttpMinConnections_21; }
	inline int32_t* get_address_of_RhttpMinConnections_21() { return &___RhttpMinConnections_21; }
	inline void set_RhttpMinConnections_21(int32_t value)
	{
		___RhttpMinConnections_21 = value;
	}

	inline static int32_t get_offset_of_RhttpMaxConnections_22() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___RhttpMaxConnections_22)); }
	inline int32_t get_RhttpMaxConnections_22() const { return ___RhttpMaxConnections_22; }
	inline int32_t* get_address_of_RhttpMaxConnections_22() { return &___RhttpMaxConnections_22; }
	inline void set_RhttpMaxConnections_22(int32_t value)
	{
		___RhttpMaxConnections_22 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_23() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___ChannelCount_23)); }
	inline uint8_t get_ChannelCount_23() const { return ___ChannelCount_23; }
	inline uint8_t* get_address_of_ChannelCount_23() { return &___ChannelCount_23; }
	inline void set_ChannelCount_23(uint8_t value)
	{
		___ChannelCount_23 = value;
	}

	inline static int32_t get_offset_of_EnableEncryptedFlag_24() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___EnableEncryptedFlag_24)); }
	inline bool get_EnableEncryptedFlag_24() const { return ___EnableEncryptedFlag_24; }
	inline bool* get_address_of_EnableEncryptedFlag_24() { return &___EnableEncryptedFlag_24; }
	inline void set_EnableEncryptedFlag_24(bool value)
	{
		___EnableEncryptedFlag_24 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_25() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___crcEnabled_25)); }
	inline bool get_crcEnabled_25() const { return ___crcEnabled_25; }
	inline bool* get_address_of_crcEnabled_25() { return &___crcEnabled_25; }
	inline void set_crcEnabled_25(bool value)
	{
		___crcEnabled_25 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_26() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___SentCountAllowance_26)); }
	inline int32_t get_SentCountAllowance_26() const { return ___SentCountAllowance_26; }
	inline int32_t* get_address_of_SentCountAllowance_26() { return &___SentCountAllowance_26; }
	inline void set_SentCountAllowance_26(int32_t value)
	{
		___SentCountAllowance_26 = value;
	}

	inline static int32_t get_offset_of_InitialResendTimeMax_27() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___InitialResendTimeMax_27)); }
	inline int32_t get_InitialResendTimeMax_27() const { return ___InitialResendTimeMax_27; }
	inline int32_t* get_address_of_InitialResendTimeMax_27() { return &___InitialResendTimeMax_27; }
	inline void set_InitialResendTimeMax_27(int32_t value)
	{
		___InitialResendTimeMax_27 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_28() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___TimePingInterval_28)); }
	inline int32_t get_TimePingInterval_28() const { return ___TimePingInterval_28; }
	inline int32_t* get_address_of_TimePingInterval_28() { return &___TimePingInterval_28; }
	inline void set_TimePingInterval_28(int32_t value)
	{
		___TimePingInterval_28 = value;
	}

	inline static int32_t get_offset_of_DisconnectTimeout_29() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___DisconnectTimeout_29)); }
	inline int32_t get_DisconnectTimeout_29() const { return ___DisconnectTimeout_29; }
	inline int32_t* get_address_of_DisconnectTimeout_29() { return &___DisconnectTimeout_29; }
	inline void set_DisconnectTimeout_29(int32_t value)
	{
		___DisconnectTimeout_29 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CTransportProtocolU3Ek__BackingField_30)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_30() const { return ___U3CTransportProtocolU3Ek__BackingField_30; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_30() { return &___U3CTransportProtocolU3Ek__BackingField_30; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_30(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_mtu_32() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___mtu_32)); }
	inline int32_t get_mtu_32() const { return ___mtu_32; }
	inline int32_t* get_address_of_mtu_32() { return &___mtu_32; }
	inline void set_mtu_32(int32_t value)
	{
		___mtu_32 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CIsSendingOnlyAcksU3Ek__BackingField_33)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_33() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_33() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_33; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_33(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_RandomizeSequenceNumbers_35() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___RandomizeSequenceNumbers_35)); }
	inline bool get_RandomizeSequenceNumbers_35() const { return ___RandomizeSequenceNumbers_35; }
	inline bool* get_address_of_RandomizeSequenceNumbers_35() { return &___RandomizeSequenceNumbers_35; }
	inline void set_RandomizeSequenceNumbers_35(bool value)
	{
		___RandomizeSequenceNumbers_35 = value;
	}

	inline static int32_t get_offset_of_RandomizedSequenceNumbers_36() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___RandomizedSequenceNumbers_36)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_RandomizedSequenceNumbers_36() const { return ___RandomizedSequenceNumbers_36; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_RandomizedSequenceNumbers_36() { return &___RandomizedSequenceNumbers_36; }
	inline void set_RandomizedSequenceNumbers_36(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___RandomizedSequenceNumbers_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomizedSequenceNumbers_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CTrafficStatsIncomingU3Ek__BackingField_37)); }
	inline TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * get_U3CTrafficStatsIncomingU3Ek__BackingField_37() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_37; }
	inline TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_37() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_37; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_37(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsIncomingU3Ek__BackingField_37), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CTrafficStatsOutgoingU3Ek__BackingField_38)); }
	inline TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * get_U3CTrafficStatsOutgoingU3Ek__BackingField_38() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_38; }
	inline TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_38() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_38; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_38(TrafficStats_tB538A5C0ACA490B3D85AD105473B428E6F9905C7 * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsOutgoingU3Ek__BackingField_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___U3CTrafficStatsGameLevelU3Ek__BackingField_39)); }
	inline TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_39() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_39; }
	inline TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_39() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_39; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_39(TrafficStatsGameLevel_t52E6496A6B4EA4BB8C80F54C718D9FBEAA646725 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsGameLevelU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_40() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___trafficStatsStopwatch_40)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_trafficStatsStopwatch_40() const { return ___trafficStatsStopwatch_40; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_trafficStatsStopwatch_40() { return &___trafficStatsStopwatch_40; }
	inline void set_trafficStatsStopwatch_40(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___trafficStatsStopwatch_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trafficStatsStopwatch_40), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_41() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___trafficStatsEnabled_41)); }
	inline bool get_trafficStatsEnabled_41() const { return ___trafficStatsEnabled_41; }
	inline bool* get_address_of_trafficStatsEnabled_41() { return &___trafficStatsEnabled_41; }
	inline void set_trafficStatsEnabled_41(bool value)
	{
		___trafficStatsEnabled_41 = value;
	}

	inline static int32_t get_offset_of_peerBase_42() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___peerBase_42)); }
	inline PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * get_peerBase_42() const { return ___peerBase_42; }
	inline PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 ** get_address_of_peerBase_42() { return &___peerBase_42; }
	inline void set_peerBase_42(PeerBase_tBE52058B5C79F054548C710BAB4F8BAAF00441E8 * value)
	{
		___peerBase_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_42), (void*)value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_43() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___SendOutgoingLockObject_43)); }
	inline RuntimeObject * get_SendOutgoingLockObject_43() const { return ___SendOutgoingLockObject_43; }
	inline RuntimeObject ** get_address_of_SendOutgoingLockObject_43() { return &___SendOutgoingLockObject_43; }
	inline void set_SendOutgoingLockObject_43(RuntimeObject * value)
	{
		___SendOutgoingLockObject_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendOutgoingLockObject_43), (void*)value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_44() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___DispatchLockObject_44)); }
	inline RuntimeObject * get_DispatchLockObject_44() const { return ___DispatchLockObject_44; }
	inline RuntimeObject ** get_address_of_DispatchLockObject_44() { return &___DispatchLockObject_44; }
	inline void set_DispatchLockObject_44(RuntimeObject * value)
	{
		___DispatchLockObject_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DispatchLockObject_44), (void*)value);
	}

	inline static int32_t get_offset_of_EnqueueLock_45() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___EnqueueLock_45)); }
	inline RuntimeObject * get_EnqueueLock_45() const { return ___EnqueueLock_45; }
	inline RuntimeObject ** get_address_of_EnqueueLock_45() { return &___EnqueueLock_45; }
	inline void set_EnqueueLock_45(RuntimeObject * value)
	{
		___EnqueueLock_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnqueueLock_45), (void*)value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_46() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___PayloadEncryptionSecret_46)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PayloadEncryptionSecret_46() const { return ___PayloadEncryptionSecret_46; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PayloadEncryptionSecret_46() { return &___PayloadEncryptionSecret_46; }
	inline void set_PayloadEncryptionSecret_46(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PayloadEncryptionSecret_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PayloadEncryptionSecret_46), (void*)value);
	}

	inline static int32_t get_offset_of_encryptorType_47() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___encryptorType_47)); }
	inline Type_t * get_encryptorType_47() const { return ___encryptorType_47; }
	inline Type_t ** get_address_of_encryptorType_47() { return &___encryptorType_47; }
	inline void set_encryptorType_47(Type_t * value)
	{
		___encryptorType_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encryptorType_47), (void*)value);
	}

	inline static int32_t get_offset_of_Encryptor_48() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2, ___Encryptor_48)); }
	inline RuntimeObject* get_Encryptor_48() const { return ___Encryptor_48; }
	inline RuntimeObject** get_address_of_Encryptor_48() { return &___Encryptor_48; }
	inline void set_Encryptor_48(RuntimeObject* value)
	{
		___Encryptor_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Encryptor_48), (void*)value);
	}
};

struct PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2_StaticFields
{
public:
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::checkedNativeLibs
	bool ___checkedNativeLibs_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useSocketNative
	bool ___useSocketNative_9;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useDiffieHellmanCryptoProvider
	bool ___useDiffieHellmanCryptoProvider_10;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useEncryptorNative
	bool ___useEncryptorNative_11;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_31;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_34;

public:
	inline static int32_t get_offset_of_checkedNativeLibs_8() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2_StaticFields, ___checkedNativeLibs_8)); }
	inline bool get_checkedNativeLibs_8() const { return ___checkedNativeLibs_8; }
	inline bool* get_address_of_checkedNativeLibs_8() { return &___checkedNativeLibs_8; }
	inline void set_checkedNativeLibs_8(bool value)
	{
		___checkedNativeLibs_8 = value;
	}

	inline static int32_t get_offset_of_useSocketNative_9() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2_StaticFields, ___useSocketNative_9)); }
	inline bool get_useSocketNative_9() const { return ___useSocketNative_9; }
	inline bool* get_address_of_useSocketNative_9() { return &___useSocketNative_9; }
	inline void set_useSocketNative_9(bool value)
	{
		___useSocketNative_9 = value;
	}

	inline static int32_t get_offset_of_useDiffieHellmanCryptoProvider_10() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2_StaticFields, ___useDiffieHellmanCryptoProvider_10)); }
	inline bool get_useDiffieHellmanCryptoProvider_10() const { return ___useDiffieHellmanCryptoProvider_10; }
	inline bool* get_address_of_useDiffieHellmanCryptoProvider_10() { return &___useDiffieHellmanCryptoProvider_10; }
	inline void set_useDiffieHellmanCryptoProvider_10(bool value)
	{
		___useDiffieHellmanCryptoProvider_10 = value;
	}

	inline static int32_t get_offset_of_useEncryptorNative_11() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2_StaticFields, ___useEncryptorNative_11)); }
	inline bool get_useEncryptorNative_11() const { return ___useEncryptorNative_11; }
	inline bool* get_address_of_useEncryptorNative_11() { return &___useEncryptorNative_11; }
	inline void set_useEncryptorNative_11(bool value)
	{
		___useEncryptorNative_11 = value;
	}

	inline static int32_t get_offset_of_OutgoingStreamBufferSize_31() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2_StaticFields, ___OutgoingStreamBufferSize_31)); }
	inline int32_t get_OutgoingStreamBufferSize_31() const { return ___OutgoingStreamBufferSize_31; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_31() { return &___OutgoingStreamBufferSize_31; }
	inline void set_OutgoingStreamBufferSize_31(int32_t value)
	{
		___OutgoingStreamBufferSize_31 = value;
	}

	inline static int32_t get_offset_of_AsyncKeyExchange_34() { return static_cast<int32_t>(offsetof(PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2_StaticFields, ___AsyncKeyExchange_34)); }
	inline bool get_AsyncKeyExchange_34() const { return ___AsyncKeyExchange_34; }
	inline bool* get_address_of_AsyncKeyExchange_34() { return &___AsyncKeyExchange_34; }
	inline void set_AsyncKeyExchange_34(bool value)
	{
		___AsyncKeyExchange_34 = value;
	}
};


// Region
struct  Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B  : public RuntimeObject
{
public:
	// CloudRegionCode Region::Code
	int32_t ___Code_0;
	// System.String Region::Cluster
	String_t* ___Cluster_1;
	// System.String Region::HostAndPort
	String_t* ___HostAndPort_2;
	// System.Int32 Region::Ping
	int32_t ___Ping_3;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B, ___Code_0)); }
	inline int32_t get_Code_0() const { return ___Code_0; }
	inline int32_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(int32_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_Cluster_1() { return static_cast<int32_t>(offsetof(Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B, ___Cluster_1)); }
	inline String_t* get_Cluster_1() const { return ___Cluster_1; }
	inline String_t** get_address_of_Cluster_1() { return &___Cluster_1; }
	inline void set_Cluster_1(String_t* value)
	{
		___Cluster_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cluster_1), (void*)value);
	}

	inline static int32_t get_offset_of_HostAndPort_2() { return static_cast<int32_t>(offsetof(Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B, ___HostAndPort_2)); }
	inline String_t* get_HostAndPort_2() const { return ___HostAndPort_2; }
	inline String_t** get_address_of_HostAndPort_2() { return &___HostAndPort_2; }
	inline void set_HostAndPort_2(String_t* value)
	{
		___HostAndPort_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HostAndPort_2), (void*)value);
	}

	inline static int32_t get_offset_of_Ping_3() { return static_cast<int32_t>(offsetof(Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B, ___Ping_3)); }
	inline int32_t get_Ping_3() const { return ___Ping_3; }
	inline int32_t* get_address_of_Ping_3() { return &___Ping_3; }
	inline void set_Ping_3(int32_t value)
	{
		___Ping_3 = value;
	}
};


// UnityEngine.Sprite
struct  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Touch
struct  Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
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
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// NetworkingPeer/<>c__DisplayClass163_0
struct  U3CU3Ec__DisplayClass163_0_t8A24F3C8469A435177A91B7B53AF90A3DD721A69  : public RuntimeObject
{
public:
	// CloudRegionCode NetworkingPeer/<>c__DisplayClass163_0::bestFromPrefs
	int32_t ___bestFromPrefs_0;

public:
	inline static int32_t get_offset_of_bestFromPrefs_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass163_0_t8A24F3C8469A435177A91B7B53AF90A3DD721A69, ___bestFromPrefs_0)); }
	inline int32_t get_bestFromPrefs_0() const { return ___bestFromPrefs_0; }
	inline int32_t* get_address_of_bestFromPrefs_0() { return &___bestFromPrefs_0; }
	inline void set_bestFromPrefs_0(int32_t value)
	{
		___bestFromPrefs_0 = value;
	}
};


// PhotonAnimatorView/SynchronizedLayer
struct  SynchronizedLayer_t88131AD7E086EA33C31500A65C1918D560711F4B  : public RuntimeObject
{
public:
	// PhotonAnimatorView/SynchronizeType PhotonAnimatorView/SynchronizedLayer::SynchronizeType
	int32_t ___SynchronizeType_0;
	// System.Int32 PhotonAnimatorView/SynchronizedLayer::LayerIndex
	int32_t ___LayerIndex_1;

public:
	inline static int32_t get_offset_of_SynchronizeType_0() { return static_cast<int32_t>(offsetof(SynchronizedLayer_t88131AD7E086EA33C31500A65C1918D560711F4B, ___SynchronizeType_0)); }
	inline int32_t get_SynchronizeType_0() const { return ___SynchronizeType_0; }
	inline int32_t* get_address_of_SynchronizeType_0() { return &___SynchronizeType_0; }
	inline void set_SynchronizeType_0(int32_t value)
	{
		___SynchronizeType_0 = value;
	}

	inline static int32_t get_offset_of_LayerIndex_1() { return static_cast<int32_t>(offsetof(SynchronizedLayer_t88131AD7E086EA33C31500A65C1918D560711F4B, ___LayerIndex_1)); }
	inline int32_t get_LayerIndex_1() const { return ___LayerIndex_1; }
	inline int32_t* get_address_of_LayerIndex_1() { return &___LayerIndex_1; }
	inline void set_LayerIndex_1(int32_t value)
	{
		___LayerIndex_1 = value;
	}
};


// PhotonAnimatorView/SynchronizedParameter
struct  SynchronizedParameter_tB6B5383927642650AD39D6AD78CEFDF5EF8B7358  : public RuntimeObject
{
public:
	// PhotonAnimatorView/ParameterType PhotonAnimatorView/SynchronizedParameter::Type
	int32_t ___Type_0;
	// PhotonAnimatorView/SynchronizeType PhotonAnimatorView/SynchronizedParameter::SynchronizeType
	int32_t ___SynchronizeType_1;
	// System.String PhotonAnimatorView/SynchronizedParameter::Name
	String_t* ___Name_2;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(SynchronizedParameter_tB6B5383927642650AD39D6AD78CEFDF5EF8B7358, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_SynchronizeType_1() { return static_cast<int32_t>(offsetof(SynchronizedParameter_tB6B5383927642650AD39D6AD78CEFDF5EF8B7358, ___SynchronizeType_1)); }
	inline int32_t get_SynchronizeType_1() const { return ___SynchronizeType_1; }
	inline int32_t* get_address_of_SynchronizeType_1() { return &___SynchronizeType_1; }
	inline void set_SynchronizeType_1(int32_t value)
	{
		___SynchronizeType_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(SynchronizedParameter_tB6B5383927642650AD39D6AD78CEFDF5EF8B7358, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_2), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// LoadBalancingPeer
struct  LoadBalancingPeer_t3F7C2A7ECF2C2EB52400EA66E7C87F1B1445826A  : public PhotonPeer_t430C09B767C8D0CADFFCF7F7B64913ED38E8B3F2
{
public:
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> LoadBalancingPeer::opParameters
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * ___opParameters_49;

public:
	inline static int32_t get_offset_of_opParameters_49() { return static_cast<int32_t>(offsetof(LoadBalancingPeer_t3F7C2A7ECF2C2EB52400EA66E7C87F1B1445826A, ___opParameters_49)); }
	inline Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * get_opParameters_49() const { return ___opParameters_49; }
	inline Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A ** get_address_of_opParameters_49() { return &___opParameters_49; }
	inline void set_opParameters_49(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * value)
	{
		___opParameters_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___opParameters_49), (void*)value);
	}
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// PhotonNetwork/EventCallback
struct  EventCallback_tF67DD1350E7870B69EB1BFB2871FF3DA891E70E6  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.UtilityScripts.PlayerRoomIndexing/RoomIndexingChanged
struct  RoomIndexingChanged_tEC0A0DABA5D2D40732CDAFC991C72E9A9A4A54F7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.CanvasGroup
struct  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// NetworkingPeer
struct  NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467  : public LoadBalancingPeer_t3F7C2A7ECF2C2EB52400EA66E7C87F1B1445826A
{
public:
	// System.String NetworkingPeer::AppId
	String_t* ___AppId_50;
	// AuthenticationValues NetworkingPeer::<AuthValues>k__BackingField
	AuthenticationValues_t0ABD7A091927E5A648F15EA00A9E4F155851379C * ___U3CAuthValuesU3Ek__BackingField_51;
	// System.String NetworkingPeer::tokenCache
	String_t* ___tokenCache_52;
	// AuthModeOption NetworkingPeer::AuthMode
	int32_t ___AuthMode_53;
	// EncryptionMode NetworkingPeer::EncryptionMode
	int32_t ___EncryptionMode_54;
	// System.Boolean NetworkingPeer::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_55;
	// System.String NetworkingPeer::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_59;
	// System.String NetworkingPeer::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_60;
	// ServerConnection NetworkingPeer::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_61;
	// ClientState NetworkingPeer::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_62;
	// System.Boolean NetworkingPeer::IsInitialConnect
	bool ___IsInitialConnect_63;
	// System.Boolean NetworkingPeer::insideLobby
	bool ___insideLobby_64;
	// TypedLobby NetworkingPeer::<lobby>k__BackingField
	TypedLobby_tBBC2C52E006F0F338883A1E4C27B4C7C3109FEBC * ___U3ClobbyU3Ek__BackingField_65;
	// System.Collections.Generic.List`1<TypedLobbyInfo> NetworkingPeer::LobbyStatistics
	List_1_tCA5546E6DC14A2EA619849B39DC07B81B5FCF063 * ___LobbyStatistics_66;
	// System.Collections.Generic.Dictionary`2<System.String,RoomInfo> NetworkingPeer::mGameList
	Dictionary_2_t6CD29680010096C8D5709AEAE7A0100FF76320C2 * ___mGameList_67;
	// RoomInfo[] NetworkingPeer::mGameListCopy
	RoomInfoU5BU5D_tBDB3F0F30C12603788FC32E069C64930786D8501* ___mGameListCopy_68;
	// System.String NetworkingPeer::playername
	String_t* ___playername_69;
	// System.Boolean NetworkingPeer::mPlayernameHasToBeUpdated
	bool ___mPlayernameHasToBeUpdated_70;
	// Room NetworkingPeer::currentRoom
	Room_t44A97854220FADE8C026E18625929E32B64B3F6A * ___currentRoom_71;
	// PhotonPlayer NetworkingPeer::<LocalPlayer>k__BackingField
	PhotonPlayer_t259567CE5BB6E26AA99638E950562AF09926CF80 * ___U3CLocalPlayerU3Ek__BackingField_72;
	// System.Int32 NetworkingPeer::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_73;
	// System.Int32 NetworkingPeer::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_74;
	// System.Int32 NetworkingPeer::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_75;
	// JoinType NetworkingPeer::lastJoinType
	int32_t ___lastJoinType_76;
	// EnterRoomParams NetworkingPeer::enterRoomParamsCache
	EnterRoomParams_tAAAFEC5315B9C5DFF5D07ADF1C85B5E9CAF2C6CB * ___enterRoomParamsCache_77;
	// System.Boolean NetworkingPeer::didAuthenticate
	bool ___didAuthenticate_78;
	// System.String[] NetworkingPeer::friendListRequested
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___friendListRequested_79;
	// System.Int32 NetworkingPeer::friendListTimestamp
	int32_t ___friendListTimestamp_80;
	// System.Boolean NetworkingPeer::isFetchingFriendList
	bool ___isFetchingFriendList_81;
	// System.Collections.Generic.List`1<Region> NetworkingPeer::<AvailableRegions>k__BackingField
	List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 * ___U3CAvailableRegionsU3Ek__BackingField_82;
	// CloudRegionCode NetworkingPeer::<CloudRegion>k__BackingField
	int32_t ___U3CCloudRegionU3Ek__BackingField_83;
	// System.String NetworkingPeer::cloudCluster
	String_t* ___cloudCluster_84;
	// System.String NetworkingPeer::CurrentCluster
	String_t* ___CurrentCluster_85;
	// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer> NetworkingPeer::mActors
	Dictionary_2_t7B5F0639CC3754235554A9B5403760F2A420E0EE * ___mActors_86;
	// PhotonPlayer[] NetworkingPeer::mOtherPlayerListCopy
	PhotonPlayerU5BU5D_t56B50F9E31520BE26AD708AFDEFCA3C9DA13DD39* ___mOtherPlayerListCopy_87;
	// PhotonPlayer[] NetworkingPeer::mPlayerListCopy
	PhotonPlayerU5BU5D_t56B50F9E31520BE26AD708AFDEFCA3C9DA13DD39* ___mPlayerListCopy_88;
	// System.Boolean NetworkingPeer::hasSwitchedMC
	bool ___hasSwitchedMC_89;
	// System.Collections.Generic.HashSet`1<System.Byte> NetworkingPeer::allowedReceivingGroups
	HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * ___allowedReceivingGroups_90;
	// System.Collections.Generic.HashSet`1<System.Byte> NetworkingPeer::blockSendingGroups
	HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * ___blockSendingGroups_91;
	// System.Collections.Generic.Dictionary`2<System.Int32,PhotonView> NetworkingPeer::photonViewList
	Dictionary_2_t256D8BBA2C1B7ECAE4DDE608A91C8E4BD88E36E2 * ___photonViewList_92;
	// PhotonStream NetworkingPeer::readStream
	PhotonStream_t51FB909AD931C5C4A99DAD900FFC6D086E310761 * ___readStream_93;
	// PhotonStream NetworkingPeer::pStream
	PhotonStream_t51FB909AD931C5C4A99DAD900FFC6D086E310761 * ___pStream_94;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable> NetworkingPeer::dataPerGroupReliable
	Dictionary_2_t05999538499B3FE141B79DFB71620F5770CB08B3 * ___dataPerGroupReliable_95;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable> NetworkingPeer::dataPerGroupUnreliable
	Dictionary_2_t05999538499B3FE141B79DFB71620F5770CB08B3 * ___dataPerGroupUnreliable_96;
	// System.Int16 NetworkingPeer::currentLevelPrefix
	int16_t ___currentLevelPrefix_97;
	// System.Boolean NetworkingPeer::loadingLevelAndPausedNetwork
	bool ___loadingLevelAndPausedNetwork_98;
	// IPunPrefabPool NetworkingPeer::ObjectPool
	RuntimeObject* ___ObjectPool_102;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> NetworkingPeer::monoRPCMethodsCache
	Dictionary_2_t510FB791361517D9490A57D6259732545477D57C * ___monoRPCMethodsCache_104;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NetworkingPeer::rpcShortcuts
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___rpcShortcuts_105;
	// System.String NetworkingPeer::cachedServerAddress
	String_t* ___cachedServerAddress_107;
	// System.String NetworkingPeer::cachedApplicationName
	String_t* ___cachedApplicationName_108;
	// ServerConnection NetworkingPeer::cachedServerType
	int32_t ___cachedServerType_109;
	// UnityEngine.AsyncOperation NetworkingPeer::_AsyncLevelLoadingOperation
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ____AsyncLevelLoadingOperation_110;
	// RaiseEventOptions NetworkingPeer::_levelReloadEventOptions
	RaiseEventOptions_t2C266F5C9B3D3F2195B726F5701FED7BC9DE4C7E * ____levelReloadEventOptions_111;
	// System.Boolean NetworkingPeer::_isReconnecting
	bool ____isReconnecting_112;
	// System.Type NetworkingPeer::typePunRPC
	Type_t * ___typePunRPC_113;
	// System.Type NetworkingPeer::typePhotonMessageInfo
	Type_t * ___typePhotonMessageInfo_114;
	// System.Object NetworkingPeer::keyByteZero
	RuntimeObject * ___keyByteZero_115;
	// System.Object NetworkingPeer::keyByteOne
	RuntimeObject * ___keyByteOne_116;
	// System.Object NetworkingPeer::keyByteTwo
	RuntimeObject * ___keyByteTwo_117;
	// System.Object NetworkingPeer::keyByteThree
	RuntimeObject * ___keyByteThree_118;
	// System.Object NetworkingPeer::keyByteFour
	RuntimeObject * ___keyByteFour_119;
	// System.Object NetworkingPeer::keyByteFive
	RuntimeObject * ___keyByteFive_120;
	// System.Object[] NetworkingPeer::emptyObjectArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyObjectArray_121;
	// System.Type[] NetworkingPeer::emptyTypeArray
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___emptyTypeArray_122;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]> NetworkingPeer::tempInstantiationData
	Dictionary_2_t794236AD8ECCDC27BED5C6059954369B6E513FF9 * ___tempInstantiationData_123;
	// ExitGames.Client.Photon.Hashtable NetworkingPeer::reusedRpcEvent
	Hashtable_tD51304A6145CE3C16DA891982FF77FCF264C2646 * ___reusedRpcEvent_124;
	// RaiseEventOptions NetworkingPeer::options
	RaiseEventOptions_t2C266F5C9B3D3F2195B726F5701FED7BC9DE4C7E * ___options_126;
	// System.Boolean NetworkingPeer::IsReloadingLevel
	bool ___IsReloadingLevel_131;
	// System.Boolean NetworkingPeer::AsynchLevelLoadCall
	bool ___AsynchLevelLoadCall_132;

public:
	inline static int32_t get_offset_of_AppId_50() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___AppId_50)); }
	inline String_t* get_AppId_50() const { return ___AppId_50; }
	inline String_t** get_address_of_AppId_50() { return &___AppId_50; }
	inline void set_AppId_50(String_t* value)
	{
		___AppId_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppId_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___U3CAuthValuesU3Ek__BackingField_51)); }
	inline AuthenticationValues_t0ABD7A091927E5A648F15EA00A9E4F155851379C * get_U3CAuthValuesU3Ek__BackingField_51() const { return ___U3CAuthValuesU3Ek__BackingField_51; }
	inline AuthenticationValues_t0ABD7A091927E5A648F15EA00A9E4F155851379C ** get_address_of_U3CAuthValuesU3Ek__BackingField_51() { return &___U3CAuthValuesU3Ek__BackingField_51; }
	inline void set_U3CAuthValuesU3Ek__BackingField_51(AuthenticationValues_t0ABD7A091927E5A648F15EA00A9E4F155851379C * value)
	{
		___U3CAuthValuesU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthValuesU3Ek__BackingField_51), (void*)value);
	}

	inline static int32_t get_offset_of_tokenCache_52() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___tokenCache_52)); }
	inline String_t* get_tokenCache_52() const { return ___tokenCache_52; }
	inline String_t** get_address_of_tokenCache_52() { return &___tokenCache_52; }
	inline void set_tokenCache_52(String_t* value)
	{
		___tokenCache_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenCache_52), (void*)value);
	}

	inline static int32_t get_offset_of_AuthMode_53() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___AuthMode_53)); }
	inline int32_t get_AuthMode_53() const { return ___AuthMode_53; }
	inline int32_t* get_address_of_AuthMode_53() { return &___AuthMode_53; }
	inline void set_AuthMode_53(int32_t value)
	{
		___AuthMode_53 = value;
	}

	inline static int32_t get_offset_of_EncryptionMode_54() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___EncryptionMode_54)); }
	inline int32_t get_EncryptionMode_54() const { return ___EncryptionMode_54; }
	inline int32_t* get_address_of_EncryptionMode_54() { return &___EncryptionMode_54; }
	inline void set_EncryptionMode_54(int32_t value)
	{
		___EncryptionMode_54 = value;
	}

	inline static int32_t get_offset_of_U3CIsUsingNameServerU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___U3CIsUsingNameServerU3Ek__BackingField_55)); }
	inline bool get_U3CIsUsingNameServerU3Ek__BackingField_55() const { return ___U3CIsUsingNameServerU3Ek__BackingField_55; }
	inline bool* get_address_of_U3CIsUsingNameServerU3Ek__BackingField_55() { return &___U3CIsUsingNameServerU3Ek__BackingField_55; }
	inline void set_U3CIsUsingNameServerU3Ek__BackingField_55(bool value)
	{
		___U3CIsUsingNameServerU3Ek__BackingField_55 = value;
	}

	inline static int32_t get_offset_of_U3CMasterServerAddressU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___U3CMasterServerAddressU3Ek__BackingField_59)); }
	inline String_t* get_U3CMasterServerAddressU3Ek__BackingField_59() const { return ___U3CMasterServerAddressU3Ek__BackingField_59; }
	inline String_t** get_address_of_U3CMasterServerAddressU3Ek__BackingField_59() { return &___U3CMasterServerAddressU3Ek__BackingField_59; }
	inline void set_U3CMasterServerAddressU3Ek__BackingField_59(String_t* value)
	{
		___U3CMasterServerAddressU3Ek__BackingField_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMasterServerAddressU3Ek__BackingField_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameServerAddressU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___U3CGameServerAddressU3Ek__BackingField_60)); }
	inline String_t* get_U3CGameServerAddressU3Ek__BackingField_60() const { return ___U3CGameServerAddressU3Ek__BackingField_60; }
	inline String_t** get_address_of_U3CGameServerAddressU3Ek__BackingField_60() { return &___U3CGameServerAddressU3Ek__BackingField_60; }
	inline void set_U3CGameServerAddressU3Ek__BackingField_60(String_t* value)
	{
		___U3CGameServerAddressU3Ek__BackingField_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameServerAddressU3Ek__BackingField_60), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___U3CServerU3Ek__BackingField_61)); }
	inline int32_t get_U3CServerU3Ek__BackingField_61() const { return ___U3CServerU3Ek__BackingField_61; }
	inline int32_t* get_address_of_U3CServerU3Ek__BackingField_61() { return &___U3CServerU3Ek__BackingField_61; }
	inline void set_U3CServerU3Ek__BackingField_61(int32_t value)
	{
		___U3CServerU3Ek__BackingField_61 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___U3CStateU3Ek__BackingField_62)); }
	inline int32_t get_U3CStateU3Ek__BackingField_62() const { return ___U3CStateU3Ek__BackingField_62; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_62() { return &___U3CStateU3Ek__BackingField_62; }
	inline void set_U3CStateU3Ek__BackingField_62(int32_t value)
	{
		___U3CStateU3Ek__BackingField_62 = value;
	}

	inline static int32_t get_offset_of_IsInitialConnect_63() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___IsInitialConnect_63)); }
	inline bool get_IsInitialConnect_63() const { return ___IsInitialConnect_63; }
	inline bool* get_address_of_IsInitialConnect_63() { return &___IsInitialConnect_63; }
	inline void set_IsInitialConnect_63(bool value)
	{
		___IsInitialConnect_63 = value;
	}

	inline static int32_t get_offset_of_insideLobby_64() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___insideLobby_64)); }
	inline bool get_insideLobby_64() const { return ___insideLobby_64; }
	inline bool* get_address_of_insideLobby_64() { return &___insideLobby_64; }
	inline void set_insideLobby_64(bool value)
	{
		___insideLobby_64 = value;
	}

	inline static int32_t get_offset_of_U3ClobbyU3Ek__BackingField_65() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___U3ClobbyU3Ek__BackingField_65)); }
	inline TypedLobby_tBBC2C52E006F0F338883A1E4C27B4C7C3109FEBC * get_U3ClobbyU3Ek__BackingField_65() const { return ___U3ClobbyU3Ek__BackingField_65; }
	inline TypedLobby_tBBC2C52E006F0F338883A1E4C27B4C7C3109FEBC ** get_address_of_U3ClobbyU3Ek__BackingField_65() { return &___U3ClobbyU3Ek__BackingField_65; }
	inline void set_U3ClobbyU3Ek__BackingField_65(TypedLobby_tBBC2C52E006F0F338883A1E4C27B4C7C3109FEBC * value)
	{
		___U3ClobbyU3Ek__BackingField_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClobbyU3Ek__BackingField_65), (void*)value);
	}

	inline static int32_t get_offset_of_LobbyStatistics_66() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___LobbyStatistics_66)); }
	inline List_1_tCA5546E6DC14A2EA619849B39DC07B81B5FCF063 * get_LobbyStatistics_66() const { return ___LobbyStatistics_66; }
	inline List_1_tCA5546E6DC14A2EA619849B39DC07B81B5FCF063 ** get_address_of_LobbyStatistics_66() { return &___LobbyStatistics_66; }
	inline void set_LobbyStatistics_66(List_1_tCA5546E6DC14A2EA619849B39DC07B81B5FCF063 * value)
	{
		___LobbyStatistics_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LobbyStatistics_66), (void*)value);
	}

	inline static int32_t get_offset_of_mGameList_67() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___mGameList_67)); }
	inline Dictionary_2_t6CD29680010096C8D5709AEAE7A0100FF76320C2 * get_mGameList_67() const { return ___mGameList_67; }
	inline Dictionary_2_t6CD29680010096C8D5709AEAE7A0100FF76320C2 ** get_address_of_mGameList_67() { return &___mGameList_67; }
	inline void set_mGameList_67(Dictionary_2_t6CD29680010096C8D5709AEAE7A0100FF76320C2 * value)
	{
		___mGameList_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGameList_67), (void*)value);
	}

	inline static int32_t get_offset_of_mGameListCopy_68() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___mGameListCopy_68)); }
	inline RoomInfoU5BU5D_tBDB3F0F30C12603788FC32E069C64930786D8501* get_mGameListCopy_68() const { return ___mGameListCopy_68; }
	inline RoomInfoU5BU5D_tBDB3F0F30C12603788FC32E069C64930786D8501** get_address_of_mGameListCopy_68() { return &___mGameListCopy_68; }
	inline void set_mGameListCopy_68(RoomInfoU5BU5D_tBDB3F0F30C12603788FC32E069C64930786D8501* value)
	{
		___mGameListCopy_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGameListCopy_68), (void*)value);
	}

	inline static int32_t get_offset_of_playername_69() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___playername_69)); }
	inline String_t* get_playername_69() const { return ___playername_69; }
	inline String_t** get_address_of_playername_69() { return &___playername_69; }
	inline void set_playername_69(String_t* value)
	{
		___playername_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playername_69), (void*)value);
	}

	inline static int32_t get_offset_of_mPlayernameHasToBeUpdated_70() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___mPlayernameHasToBeUpdated_70)); }
	inline bool get_mPlayernameHasToBeUpdated_70() const { return ___mPlayernameHasToBeUpdated_70; }
	inline bool* get_address_of_mPlayernameHasToBeUpdated_70() { return &___mPlayernameHasToBeUpdated_70; }
	inline void set_mPlayernameHasToBeUpdated_70(bool value)
	{
		___mPlayernameHasToBeUpdated_70 = value;
	}

	inline static int32_t get_offset_of_currentRoom_71() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___currentRoom_71)); }
	inline Room_t44A97854220FADE8C026E18625929E32B64B3F6A * get_currentRoom_71() const { return ___currentRoom_71; }
	inline Room_t44A97854220FADE8C026E18625929E32B64B3F6A ** get_address_of_currentRoom_71() { return &___currentRoom_71; }
	inline void set_currentRoom_71(Room_t44A97854220FADE8C026E18625929E32B64B3F6A * value)
	{
		___currentRoom_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentRoom_71), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalPlayerU3Ek__BackingField_72() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___U3CLocalPlayerU3Ek__BackingField_72)); }
	inline PhotonPlayer_t259567CE5BB6E26AA99638E950562AF09926CF80 * get_U3CLocalPlayerU3Ek__BackingField_72() const { return ___U3CLocalPlayerU3Ek__BackingField_72; }
	inline PhotonPlayer_t259567CE5BB6E26AA99638E950562AF09926CF80 ** get_address_of_U3CLocalPlayerU3Ek__BackingField_72() { return &___U3CLocalPlayerU3Ek__BackingField_72; }
	inline void set_U3CLocalPlayerU3Ek__BackingField_72(PhotonPlayer_t259567CE5BB6E26AA99638E950562AF09926CF80 * value)
	{
		___U3CLocalPlayerU3Ek__BackingField_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalPlayerU3Ek__BackingField_72), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayersOnMasterCountU3Ek__BackingField_73() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___U3CPlayersOnMasterCountU3Ek__BackingField_73)); }
	inline int32_t get_U3CPlayersOnMasterCountU3Ek__BackingField_73() const { return ___U3CPlayersOnMasterCountU3Ek__BackingField_73; }
	inline int32_t* get_address_of_U3CPlayersOnMasterCountU3Ek__BackingField_73() { return &___U3CPlayersOnMasterCountU3Ek__BackingField_73; }
	inline void set_U3CPlayersOnMasterCountU3Ek__BackingField_73(int32_t value)
	{
		___U3CPlayersOnMasterCountU3Ek__BackingField_73 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersInRoomsCountU3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___U3CPlayersInRoomsCountU3Ek__BackingField_74)); }
	inline int32_t get_U3CPlayersInRoomsCountU3Ek__BackingField_74() const { return ___U3CPlayersInRoomsCountU3Ek__BackingField_74; }
	inline int32_t* get_address_of_U3CPlayersInRoomsCountU3Ek__BackingField_74() { return &___U3CPlayersInRoomsCountU3Ek__BackingField_74; }
	inline void set_U3CPlayersInRoomsCountU3Ek__BackingField_74(int32_t value)
	{
		___U3CPlayersInRoomsCountU3Ek__BackingField_74 = value;
	}

	inline static int32_t get_offset_of_U3CRoomsCountU3Ek__BackingField_75() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___U3CRoomsCountU3Ek__BackingField_75)); }
	inline int32_t get_U3CRoomsCountU3Ek__BackingField_75() const { return ___U3CRoomsCountU3Ek__BackingField_75; }
	inline int32_t* get_address_of_U3CRoomsCountU3Ek__BackingField_75() { return &___U3CRoomsCountU3Ek__BackingField_75; }
	inline void set_U3CRoomsCountU3Ek__BackingField_75(int32_t value)
	{
		___U3CRoomsCountU3Ek__BackingField_75 = value;
	}

	inline static int32_t get_offset_of_lastJoinType_76() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___lastJoinType_76)); }
	inline int32_t get_lastJoinType_76() const { return ___lastJoinType_76; }
	inline int32_t* get_address_of_lastJoinType_76() { return &___lastJoinType_76; }
	inline void set_lastJoinType_76(int32_t value)
	{
		___lastJoinType_76 = value;
	}

	inline static int32_t get_offset_of_enterRoomParamsCache_77() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___enterRoomParamsCache_77)); }
	inline EnterRoomParams_tAAAFEC5315B9C5DFF5D07ADF1C85B5E9CAF2C6CB * get_enterRoomParamsCache_77() const { return ___enterRoomParamsCache_77; }
	inline EnterRoomParams_tAAAFEC5315B9C5DFF5D07ADF1C85B5E9CAF2C6CB ** get_address_of_enterRoomParamsCache_77() { return &___enterRoomParamsCache_77; }
	inline void set_enterRoomParamsCache_77(EnterRoomParams_tAAAFEC5315B9C5DFF5D07ADF1C85B5E9CAF2C6CB * value)
	{
		___enterRoomParamsCache_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enterRoomParamsCache_77), (void*)value);
	}

	inline static int32_t get_offset_of_didAuthenticate_78() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___didAuthenticate_78)); }
	inline bool get_didAuthenticate_78() const { return ___didAuthenticate_78; }
	inline bool* get_address_of_didAuthenticate_78() { return &___didAuthenticate_78; }
	inline void set_didAuthenticate_78(bool value)
	{
		___didAuthenticate_78 = value;
	}

	inline static int32_t get_offset_of_friendListRequested_79() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___friendListRequested_79)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_friendListRequested_79() const { return ___friendListRequested_79; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_friendListRequested_79() { return &___friendListRequested_79; }
	inline void set_friendListRequested_79(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___friendListRequested_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___friendListRequested_79), (void*)value);
	}

	inline static int32_t get_offset_of_friendListTimestamp_80() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___friendListTimestamp_80)); }
	inline int32_t get_friendListTimestamp_80() const { return ___friendListTimestamp_80; }
	inline int32_t* get_address_of_friendListTimestamp_80() { return &___friendListTimestamp_80; }
	inline void set_friendListTimestamp_80(int32_t value)
	{
		___friendListTimestamp_80 = value;
	}

	inline static int32_t get_offset_of_isFetchingFriendList_81() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___isFetchingFriendList_81)); }
	inline bool get_isFetchingFriendList_81() const { return ___isFetchingFriendList_81; }
	inline bool* get_address_of_isFetchingFriendList_81() { return &___isFetchingFriendList_81; }
	inline void set_isFetchingFriendList_81(bool value)
	{
		___isFetchingFriendList_81 = value;
	}

	inline static int32_t get_offset_of_U3CAvailableRegionsU3Ek__BackingField_82() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___U3CAvailableRegionsU3Ek__BackingField_82)); }
	inline List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 * get_U3CAvailableRegionsU3Ek__BackingField_82() const { return ___U3CAvailableRegionsU3Ek__BackingField_82; }
	inline List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 ** get_address_of_U3CAvailableRegionsU3Ek__BackingField_82() { return &___U3CAvailableRegionsU3Ek__BackingField_82; }
	inline void set_U3CAvailableRegionsU3Ek__BackingField_82(List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 * value)
	{
		___U3CAvailableRegionsU3Ek__BackingField_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAvailableRegionsU3Ek__BackingField_82), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloudRegionU3Ek__BackingField_83() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___U3CCloudRegionU3Ek__BackingField_83)); }
	inline int32_t get_U3CCloudRegionU3Ek__BackingField_83() const { return ___U3CCloudRegionU3Ek__BackingField_83; }
	inline int32_t* get_address_of_U3CCloudRegionU3Ek__BackingField_83() { return &___U3CCloudRegionU3Ek__BackingField_83; }
	inline void set_U3CCloudRegionU3Ek__BackingField_83(int32_t value)
	{
		___U3CCloudRegionU3Ek__BackingField_83 = value;
	}

	inline static int32_t get_offset_of_cloudCluster_84() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___cloudCluster_84)); }
	inline String_t* get_cloudCluster_84() const { return ___cloudCluster_84; }
	inline String_t** get_address_of_cloudCluster_84() { return &___cloudCluster_84; }
	inline void set_cloudCluster_84(String_t* value)
	{
		___cloudCluster_84 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cloudCluster_84), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentCluster_85() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___CurrentCluster_85)); }
	inline String_t* get_CurrentCluster_85() const { return ___CurrentCluster_85; }
	inline String_t** get_address_of_CurrentCluster_85() { return &___CurrentCluster_85; }
	inline void set_CurrentCluster_85(String_t* value)
	{
		___CurrentCluster_85 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentCluster_85), (void*)value);
	}

	inline static int32_t get_offset_of_mActors_86() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___mActors_86)); }
	inline Dictionary_2_t7B5F0639CC3754235554A9B5403760F2A420E0EE * get_mActors_86() const { return ___mActors_86; }
	inline Dictionary_2_t7B5F0639CC3754235554A9B5403760F2A420E0EE ** get_address_of_mActors_86() { return &___mActors_86; }
	inline void set_mActors_86(Dictionary_2_t7B5F0639CC3754235554A9B5403760F2A420E0EE * value)
	{
		___mActors_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActors_86), (void*)value);
	}

	inline static int32_t get_offset_of_mOtherPlayerListCopy_87() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___mOtherPlayerListCopy_87)); }
	inline PhotonPlayerU5BU5D_t56B50F9E31520BE26AD708AFDEFCA3C9DA13DD39* get_mOtherPlayerListCopy_87() const { return ___mOtherPlayerListCopy_87; }
	inline PhotonPlayerU5BU5D_t56B50F9E31520BE26AD708AFDEFCA3C9DA13DD39** get_address_of_mOtherPlayerListCopy_87() { return &___mOtherPlayerListCopy_87; }
	inline void set_mOtherPlayerListCopy_87(PhotonPlayerU5BU5D_t56B50F9E31520BE26AD708AFDEFCA3C9DA13DD39* value)
	{
		___mOtherPlayerListCopy_87 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOtherPlayerListCopy_87), (void*)value);
	}

	inline static int32_t get_offset_of_mPlayerListCopy_88() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___mPlayerListCopy_88)); }
	inline PhotonPlayerU5BU5D_t56B50F9E31520BE26AD708AFDEFCA3C9DA13DD39* get_mPlayerListCopy_88() const { return ___mPlayerListCopy_88; }
	inline PhotonPlayerU5BU5D_t56B50F9E31520BE26AD708AFDEFCA3C9DA13DD39** get_address_of_mPlayerListCopy_88() { return &___mPlayerListCopy_88; }
	inline void set_mPlayerListCopy_88(PhotonPlayerU5BU5D_t56B50F9E31520BE26AD708AFDEFCA3C9DA13DD39* value)
	{
		___mPlayerListCopy_88 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlayerListCopy_88), (void*)value);
	}

	inline static int32_t get_offset_of_hasSwitchedMC_89() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___hasSwitchedMC_89)); }
	inline bool get_hasSwitchedMC_89() const { return ___hasSwitchedMC_89; }
	inline bool* get_address_of_hasSwitchedMC_89() { return &___hasSwitchedMC_89; }
	inline void set_hasSwitchedMC_89(bool value)
	{
		___hasSwitchedMC_89 = value;
	}

	inline static int32_t get_offset_of_allowedReceivingGroups_90() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___allowedReceivingGroups_90)); }
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * get_allowedReceivingGroups_90() const { return ___allowedReceivingGroups_90; }
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C ** get_address_of_allowedReceivingGroups_90() { return &___allowedReceivingGroups_90; }
	inline void set_allowedReceivingGroups_90(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * value)
	{
		___allowedReceivingGroups_90 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allowedReceivingGroups_90), (void*)value);
	}

	inline static int32_t get_offset_of_blockSendingGroups_91() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___blockSendingGroups_91)); }
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * get_blockSendingGroups_91() const { return ___blockSendingGroups_91; }
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C ** get_address_of_blockSendingGroups_91() { return &___blockSendingGroups_91; }
	inline void set_blockSendingGroups_91(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * value)
	{
		___blockSendingGroups_91 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockSendingGroups_91), (void*)value);
	}

	inline static int32_t get_offset_of_photonViewList_92() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___photonViewList_92)); }
	inline Dictionary_2_t256D8BBA2C1B7ECAE4DDE608A91C8E4BD88E36E2 * get_photonViewList_92() const { return ___photonViewList_92; }
	inline Dictionary_2_t256D8BBA2C1B7ECAE4DDE608A91C8E4BD88E36E2 ** get_address_of_photonViewList_92() { return &___photonViewList_92; }
	inline void set_photonViewList_92(Dictionary_2_t256D8BBA2C1B7ECAE4DDE608A91C8E4BD88E36E2 * value)
	{
		___photonViewList_92 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonViewList_92), (void*)value);
	}

	inline static int32_t get_offset_of_readStream_93() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___readStream_93)); }
	inline PhotonStream_t51FB909AD931C5C4A99DAD900FFC6D086E310761 * get_readStream_93() const { return ___readStream_93; }
	inline PhotonStream_t51FB909AD931C5C4A99DAD900FFC6D086E310761 ** get_address_of_readStream_93() { return &___readStream_93; }
	inline void set_readStream_93(PhotonStream_t51FB909AD931C5C4A99DAD900FFC6D086E310761 * value)
	{
		___readStream_93 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readStream_93), (void*)value);
	}

	inline static int32_t get_offset_of_pStream_94() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___pStream_94)); }
	inline PhotonStream_t51FB909AD931C5C4A99DAD900FFC6D086E310761 * get_pStream_94() const { return ___pStream_94; }
	inline PhotonStream_t51FB909AD931C5C4A99DAD900FFC6D086E310761 ** get_address_of_pStream_94() { return &___pStream_94; }
	inline void set_pStream_94(PhotonStream_t51FB909AD931C5C4A99DAD900FFC6D086E310761 * value)
	{
		___pStream_94 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pStream_94), (void*)value);
	}

	inline static int32_t get_offset_of_dataPerGroupReliable_95() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___dataPerGroupReliable_95)); }
	inline Dictionary_2_t05999538499B3FE141B79DFB71620F5770CB08B3 * get_dataPerGroupReliable_95() const { return ___dataPerGroupReliable_95; }
	inline Dictionary_2_t05999538499B3FE141B79DFB71620F5770CB08B3 ** get_address_of_dataPerGroupReliable_95() { return &___dataPerGroupReliable_95; }
	inline void set_dataPerGroupReliable_95(Dictionary_2_t05999538499B3FE141B79DFB71620F5770CB08B3 * value)
	{
		___dataPerGroupReliable_95 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataPerGroupReliable_95), (void*)value);
	}

	inline static int32_t get_offset_of_dataPerGroupUnreliable_96() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___dataPerGroupUnreliable_96)); }
	inline Dictionary_2_t05999538499B3FE141B79DFB71620F5770CB08B3 * get_dataPerGroupUnreliable_96() const { return ___dataPerGroupUnreliable_96; }
	inline Dictionary_2_t05999538499B3FE141B79DFB71620F5770CB08B3 ** get_address_of_dataPerGroupUnreliable_96() { return &___dataPerGroupUnreliable_96; }
	inline void set_dataPerGroupUnreliable_96(Dictionary_2_t05999538499B3FE141B79DFB71620F5770CB08B3 * value)
	{
		___dataPerGroupUnreliable_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataPerGroupUnreliable_96), (void*)value);
	}

	inline static int32_t get_offset_of_currentLevelPrefix_97() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___currentLevelPrefix_97)); }
	inline int16_t get_currentLevelPrefix_97() const { return ___currentLevelPrefix_97; }
	inline int16_t* get_address_of_currentLevelPrefix_97() { return &___currentLevelPrefix_97; }
	inline void set_currentLevelPrefix_97(int16_t value)
	{
		___currentLevelPrefix_97 = value;
	}

	inline static int32_t get_offset_of_loadingLevelAndPausedNetwork_98() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___loadingLevelAndPausedNetwork_98)); }
	inline bool get_loadingLevelAndPausedNetwork_98() const { return ___loadingLevelAndPausedNetwork_98; }
	inline bool* get_address_of_loadingLevelAndPausedNetwork_98() { return &___loadingLevelAndPausedNetwork_98; }
	inline void set_loadingLevelAndPausedNetwork_98(bool value)
	{
		___loadingLevelAndPausedNetwork_98 = value;
	}

	inline static int32_t get_offset_of_ObjectPool_102() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___ObjectPool_102)); }
	inline RuntimeObject* get_ObjectPool_102() const { return ___ObjectPool_102; }
	inline RuntimeObject** get_address_of_ObjectPool_102() { return &___ObjectPool_102; }
	inline void set_ObjectPool_102(RuntimeObject* value)
	{
		___ObjectPool_102 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectPool_102), (void*)value);
	}

	inline static int32_t get_offset_of_monoRPCMethodsCache_104() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___monoRPCMethodsCache_104)); }
	inline Dictionary_2_t510FB791361517D9490A57D6259732545477D57C * get_monoRPCMethodsCache_104() const { return ___monoRPCMethodsCache_104; }
	inline Dictionary_2_t510FB791361517D9490A57D6259732545477D57C ** get_address_of_monoRPCMethodsCache_104() { return &___monoRPCMethodsCache_104; }
	inline void set_monoRPCMethodsCache_104(Dictionary_2_t510FB791361517D9490A57D6259732545477D57C * value)
	{
		___monoRPCMethodsCache_104 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monoRPCMethodsCache_104), (void*)value);
	}

	inline static int32_t get_offset_of_rpcShortcuts_105() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___rpcShortcuts_105)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_rpcShortcuts_105() const { return ___rpcShortcuts_105; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_rpcShortcuts_105() { return &___rpcShortcuts_105; }
	inline void set_rpcShortcuts_105(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___rpcShortcuts_105 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rpcShortcuts_105), (void*)value);
	}

	inline static int32_t get_offset_of_cachedServerAddress_107() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___cachedServerAddress_107)); }
	inline String_t* get_cachedServerAddress_107() const { return ___cachedServerAddress_107; }
	inline String_t** get_address_of_cachedServerAddress_107() { return &___cachedServerAddress_107; }
	inline void set_cachedServerAddress_107(String_t* value)
	{
		___cachedServerAddress_107 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedServerAddress_107), (void*)value);
	}

	inline static int32_t get_offset_of_cachedApplicationName_108() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___cachedApplicationName_108)); }
	inline String_t* get_cachedApplicationName_108() const { return ___cachedApplicationName_108; }
	inline String_t** get_address_of_cachedApplicationName_108() { return &___cachedApplicationName_108; }
	inline void set_cachedApplicationName_108(String_t* value)
	{
		___cachedApplicationName_108 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedApplicationName_108), (void*)value);
	}

	inline static int32_t get_offset_of_cachedServerType_109() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___cachedServerType_109)); }
	inline int32_t get_cachedServerType_109() const { return ___cachedServerType_109; }
	inline int32_t* get_address_of_cachedServerType_109() { return &___cachedServerType_109; }
	inline void set_cachedServerType_109(int32_t value)
	{
		___cachedServerType_109 = value;
	}

	inline static int32_t get_offset_of__AsyncLevelLoadingOperation_110() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ____AsyncLevelLoadingOperation_110)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get__AsyncLevelLoadingOperation_110() const { return ____AsyncLevelLoadingOperation_110; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of__AsyncLevelLoadingOperation_110() { return &____AsyncLevelLoadingOperation_110; }
	inline void set__AsyncLevelLoadingOperation_110(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		____AsyncLevelLoadingOperation_110 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____AsyncLevelLoadingOperation_110), (void*)value);
	}

	inline static int32_t get_offset_of__levelReloadEventOptions_111() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ____levelReloadEventOptions_111)); }
	inline RaiseEventOptions_t2C266F5C9B3D3F2195B726F5701FED7BC9DE4C7E * get__levelReloadEventOptions_111() const { return ____levelReloadEventOptions_111; }
	inline RaiseEventOptions_t2C266F5C9B3D3F2195B726F5701FED7BC9DE4C7E ** get_address_of__levelReloadEventOptions_111() { return &____levelReloadEventOptions_111; }
	inline void set__levelReloadEventOptions_111(RaiseEventOptions_t2C266F5C9B3D3F2195B726F5701FED7BC9DE4C7E * value)
	{
		____levelReloadEventOptions_111 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____levelReloadEventOptions_111), (void*)value);
	}

	inline static int32_t get_offset_of__isReconnecting_112() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ____isReconnecting_112)); }
	inline bool get__isReconnecting_112() const { return ____isReconnecting_112; }
	inline bool* get_address_of__isReconnecting_112() { return &____isReconnecting_112; }
	inline void set__isReconnecting_112(bool value)
	{
		____isReconnecting_112 = value;
	}

	inline static int32_t get_offset_of_typePunRPC_113() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___typePunRPC_113)); }
	inline Type_t * get_typePunRPC_113() const { return ___typePunRPC_113; }
	inline Type_t ** get_address_of_typePunRPC_113() { return &___typePunRPC_113; }
	inline void set_typePunRPC_113(Type_t * value)
	{
		___typePunRPC_113 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typePunRPC_113), (void*)value);
	}

	inline static int32_t get_offset_of_typePhotonMessageInfo_114() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___typePhotonMessageInfo_114)); }
	inline Type_t * get_typePhotonMessageInfo_114() const { return ___typePhotonMessageInfo_114; }
	inline Type_t ** get_address_of_typePhotonMessageInfo_114() { return &___typePhotonMessageInfo_114; }
	inline void set_typePhotonMessageInfo_114(Type_t * value)
	{
		___typePhotonMessageInfo_114 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typePhotonMessageInfo_114), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteZero_115() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___keyByteZero_115)); }
	inline RuntimeObject * get_keyByteZero_115() const { return ___keyByteZero_115; }
	inline RuntimeObject ** get_address_of_keyByteZero_115() { return &___keyByteZero_115; }
	inline void set_keyByteZero_115(RuntimeObject * value)
	{
		___keyByteZero_115 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteZero_115), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteOne_116() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___keyByteOne_116)); }
	inline RuntimeObject * get_keyByteOne_116() const { return ___keyByteOne_116; }
	inline RuntimeObject ** get_address_of_keyByteOne_116() { return &___keyByteOne_116; }
	inline void set_keyByteOne_116(RuntimeObject * value)
	{
		___keyByteOne_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteOne_116), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteTwo_117() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___keyByteTwo_117)); }
	inline RuntimeObject * get_keyByteTwo_117() const { return ___keyByteTwo_117; }
	inline RuntimeObject ** get_address_of_keyByteTwo_117() { return &___keyByteTwo_117; }
	inline void set_keyByteTwo_117(RuntimeObject * value)
	{
		___keyByteTwo_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteTwo_117), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteThree_118() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___keyByteThree_118)); }
	inline RuntimeObject * get_keyByteThree_118() const { return ___keyByteThree_118; }
	inline RuntimeObject ** get_address_of_keyByteThree_118() { return &___keyByteThree_118; }
	inline void set_keyByteThree_118(RuntimeObject * value)
	{
		___keyByteThree_118 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteThree_118), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteFour_119() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___keyByteFour_119)); }
	inline RuntimeObject * get_keyByteFour_119() const { return ___keyByteFour_119; }
	inline RuntimeObject ** get_address_of_keyByteFour_119() { return &___keyByteFour_119; }
	inline void set_keyByteFour_119(RuntimeObject * value)
	{
		___keyByteFour_119 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteFour_119), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteFive_120() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___keyByteFive_120)); }
	inline RuntimeObject * get_keyByteFive_120() const { return ___keyByteFive_120; }
	inline RuntimeObject ** get_address_of_keyByteFive_120() { return &___keyByteFive_120; }
	inline void set_keyByteFive_120(RuntimeObject * value)
	{
		___keyByteFive_120 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteFive_120), (void*)value);
	}

	inline static int32_t get_offset_of_emptyObjectArray_121() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___emptyObjectArray_121)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyObjectArray_121() const { return ___emptyObjectArray_121; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyObjectArray_121() { return &___emptyObjectArray_121; }
	inline void set_emptyObjectArray_121(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyObjectArray_121 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyObjectArray_121), (void*)value);
	}

	inline static int32_t get_offset_of_emptyTypeArray_122() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___emptyTypeArray_122)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_emptyTypeArray_122() const { return ___emptyTypeArray_122; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_emptyTypeArray_122() { return &___emptyTypeArray_122; }
	inline void set_emptyTypeArray_122(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___emptyTypeArray_122 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyTypeArray_122), (void*)value);
	}

	inline static int32_t get_offset_of_tempInstantiationData_123() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___tempInstantiationData_123)); }
	inline Dictionary_2_t794236AD8ECCDC27BED5C6059954369B6E513FF9 * get_tempInstantiationData_123() const { return ___tempInstantiationData_123; }
	inline Dictionary_2_t794236AD8ECCDC27BED5C6059954369B6E513FF9 ** get_address_of_tempInstantiationData_123() { return &___tempInstantiationData_123; }
	inline void set_tempInstantiationData_123(Dictionary_2_t794236AD8ECCDC27BED5C6059954369B6E513FF9 * value)
	{
		___tempInstantiationData_123 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempInstantiationData_123), (void*)value);
	}

	inline static int32_t get_offset_of_reusedRpcEvent_124() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___reusedRpcEvent_124)); }
	inline Hashtable_tD51304A6145CE3C16DA891982FF77FCF264C2646 * get_reusedRpcEvent_124() const { return ___reusedRpcEvent_124; }
	inline Hashtable_tD51304A6145CE3C16DA891982FF77FCF264C2646 ** get_address_of_reusedRpcEvent_124() { return &___reusedRpcEvent_124; }
	inline void set_reusedRpcEvent_124(Hashtable_tD51304A6145CE3C16DA891982FF77FCF264C2646 * value)
	{
		___reusedRpcEvent_124 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusedRpcEvent_124), (void*)value);
	}

	inline static int32_t get_offset_of_options_126() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___options_126)); }
	inline RaiseEventOptions_t2C266F5C9B3D3F2195B726F5701FED7BC9DE4C7E * get_options_126() const { return ___options_126; }
	inline RaiseEventOptions_t2C266F5C9B3D3F2195B726F5701FED7BC9DE4C7E ** get_address_of_options_126() { return &___options_126; }
	inline void set_options_126(RaiseEventOptions_t2C266F5C9B3D3F2195B726F5701FED7BC9DE4C7E * value)
	{
		___options_126 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_126), (void*)value);
	}

	inline static int32_t get_offset_of_IsReloadingLevel_131() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___IsReloadingLevel_131)); }
	inline bool get_IsReloadingLevel_131() const { return ___IsReloadingLevel_131; }
	inline bool* get_address_of_IsReloadingLevel_131() { return &___IsReloadingLevel_131; }
	inline void set_IsReloadingLevel_131(bool value)
	{
		___IsReloadingLevel_131 = value;
	}

	inline static int32_t get_offset_of_AsynchLevelLoadCall_132() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467, ___AsynchLevelLoadCall_132)); }
	inline bool get_AsynchLevelLoadCall_132() const { return ___AsynchLevelLoadCall_132; }
	inline bool* get_address_of_AsynchLevelLoadCall_132() { return &___AsynchLevelLoadCall_132; }
	inline void set_AsynchLevelLoadCall_132(bool value)
	{
		___AsynchLevelLoadCall_132 = value;
	}
};

struct NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> NetworkingPeer::ProtocolToNameServerPort
	Dictionary_2_t997B2EF2A8ACD01C34612343683AEBC2A964F719 * ___ProtocolToNameServerPort_58;
	// System.Boolean NetworkingPeer::UsePrefabCache
	bool ___UsePrefabCache_101;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> NetworkingPeer::PrefabCache
	Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * ___PrefabCache_103;
	// System.String NetworkingPeer::OnPhotonInstantiateString
	String_t* ___OnPhotonInstantiateString_106;
	// System.Int32 NetworkingPeer::ObjectsInOneUpdate
	int32_t ___ObjectsInOneUpdate_125;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_58() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467_StaticFields, ___ProtocolToNameServerPort_58)); }
	inline Dictionary_2_t997B2EF2A8ACD01C34612343683AEBC2A964F719 * get_ProtocolToNameServerPort_58() const { return ___ProtocolToNameServerPort_58; }
	inline Dictionary_2_t997B2EF2A8ACD01C34612343683AEBC2A964F719 ** get_address_of_ProtocolToNameServerPort_58() { return &___ProtocolToNameServerPort_58; }
	inline void set_ProtocolToNameServerPort_58(Dictionary_2_t997B2EF2A8ACD01C34612343683AEBC2A964F719 * value)
	{
		___ProtocolToNameServerPort_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProtocolToNameServerPort_58), (void*)value);
	}

	inline static int32_t get_offset_of_UsePrefabCache_101() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467_StaticFields, ___UsePrefabCache_101)); }
	inline bool get_UsePrefabCache_101() const { return ___UsePrefabCache_101; }
	inline bool* get_address_of_UsePrefabCache_101() { return &___UsePrefabCache_101; }
	inline void set_UsePrefabCache_101(bool value)
	{
		___UsePrefabCache_101 = value;
	}

	inline static int32_t get_offset_of_PrefabCache_103() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467_StaticFields, ___PrefabCache_103)); }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * get_PrefabCache_103() const { return ___PrefabCache_103; }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C ** get_address_of_PrefabCache_103() { return &___PrefabCache_103; }
	inline void set_PrefabCache_103(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * value)
	{
		___PrefabCache_103 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrefabCache_103), (void*)value);
	}

	inline static int32_t get_offset_of_OnPhotonInstantiateString_106() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467_StaticFields, ___OnPhotonInstantiateString_106)); }
	inline String_t* get_OnPhotonInstantiateString_106() const { return ___OnPhotonInstantiateString_106; }
	inline String_t** get_address_of_OnPhotonInstantiateString_106() { return &___OnPhotonInstantiateString_106; }
	inline void set_OnPhotonInstantiateString_106(String_t* value)
	{
		___OnPhotonInstantiateString_106 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPhotonInstantiateString_106), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectsInOneUpdate_125() { return static_cast<int32_t>(offsetof(NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467_StaticFields, ___ObjectsInOneUpdate_125)); }
	inline int32_t get_ObjectsInOneUpdate_125() const { return ___ObjectsInOneUpdate_125; }
	inline int32_t* get_address_of_ObjectsInOneUpdate_125() { return &___ObjectsInOneUpdate_125; }
	inline void set_ObjectsInOneUpdate_125(int32_t value)
	{
		___ObjectsInOneUpdate_125 = value;
	}
};


// DemoBoxesGui
struct  DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean DemoBoxesGui::HideUI
	bool ___HideUI_4;
	// UnityEngine.UI.Text DemoBoxesGui::GuiTextForTips
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___GuiTextForTips_5;
	// System.Int32 DemoBoxesGui::tipsIndex
	int32_t ___tipsIndex_6;
	// System.String[] DemoBoxesGui::tips
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___tips_7;
	// System.Single DemoBoxesGui::timeSinceLastTip
	float ___timeSinceLastTip_9;

public:
	inline static int32_t get_offset_of_HideUI_4() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D, ___HideUI_4)); }
	inline bool get_HideUI_4() const { return ___HideUI_4; }
	inline bool* get_address_of_HideUI_4() { return &___HideUI_4; }
	inline void set_HideUI_4(bool value)
	{
		___HideUI_4 = value;
	}

	inline static int32_t get_offset_of_GuiTextForTips_5() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D, ___GuiTextForTips_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_GuiTextForTips_5() const { return ___GuiTextForTips_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_GuiTextForTips_5() { return &___GuiTextForTips_5; }
	inline void set_GuiTextForTips_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___GuiTextForTips_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuiTextForTips_5), (void*)value);
	}

	inline static int32_t get_offset_of_tipsIndex_6() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D, ___tipsIndex_6)); }
	inline int32_t get_tipsIndex_6() const { return ___tipsIndex_6; }
	inline int32_t* get_address_of_tipsIndex_6() { return &___tipsIndex_6; }
	inline void set_tipsIndex_6(int32_t value)
	{
		___tipsIndex_6 = value;
	}

	inline static int32_t get_offset_of_tips_7() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D, ___tips_7)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_tips_7() const { return ___tips_7; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_tips_7() { return &___tips_7; }
	inline void set_tips_7(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___tips_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tips_7), (void*)value);
	}

	inline static int32_t get_offset_of_timeSinceLastTip_9() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D, ___timeSinceLastTip_9)); }
	inline float get_timeSinceLastTip_9() const { return ___timeSinceLastTip_9; }
	inline float* get_address_of_timeSinceLastTip_9() { return &___timeSinceLastTip_9; }
	inline void set_timeSinceLastTip_9(float value)
	{
		___timeSinceLastTip_9 = value;
	}
};


// DragToMove
struct  DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single DragToMove::speed
	float ___speed_4;
	// UnityEngine.Transform[] DragToMove::cubes
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___cubes_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> DragToMove::PositionsQueue
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___PositionsQueue_6;
	// UnityEngine.Vector3[] DragToMove::cubeStartPositions
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___cubeStartPositions_7;
	// System.Int32 DragToMove::nextPosIndex
	int32_t ___nextPosIndex_8;
	// System.Single DragToMove::lerpTime
	float ___lerpTime_9;
	// System.Boolean DragToMove::recording
	bool ___recording_10;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_cubes_5() { return static_cast<int32_t>(offsetof(DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F, ___cubes_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_cubes_5() const { return ___cubes_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_cubes_5() { return &___cubes_5; }
	inline void set_cubes_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___cubes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubes_5), (void*)value);
	}

	inline static int32_t get_offset_of_PositionsQueue_6() { return static_cast<int32_t>(offsetof(DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F, ___PositionsQueue_6)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_PositionsQueue_6() const { return ___PositionsQueue_6; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_PositionsQueue_6() { return &___PositionsQueue_6; }
	inline void set_PositionsQueue_6(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___PositionsQueue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PositionsQueue_6), (void*)value);
	}

	inline static int32_t get_offset_of_cubeStartPositions_7() { return static_cast<int32_t>(offsetof(DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F, ___cubeStartPositions_7)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_cubeStartPositions_7() const { return ___cubeStartPositions_7; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_cubeStartPositions_7() { return &___cubeStartPositions_7; }
	inline void set_cubeStartPositions_7(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___cubeStartPositions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubeStartPositions_7), (void*)value);
	}

	inline static int32_t get_offset_of_nextPosIndex_8() { return static_cast<int32_t>(offsetof(DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F, ___nextPosIndex_8)); }
	inline int32_t get_nextPosIndex_8() const { return ___nextPosIndex_8; }
	inline int32_t* get_address_of_nextPosIndex_8() { return &___nextPosIndex_8; }
	inline void set_nextPosIndex_8(int32_t value)
	{
		___nextPosIndex_8 = value;
	}

	inline static int32_t get_offset_of_lerpTime_9() { return static_cast<int32_t>(offsetof(DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F, ___lerpTime_9)); }
	inline float get_lerpTime_9() const { return ___lerpTime_9; }
	inline float* get_address_of_lerpTime_9() { return &___lerpTime_9; }
	inline void set_lerpTime_9(float value)
	{
		___lerpTime_9 = value;
	}

	inline static int32_t get_offset_of_recording_10() { return static_cast<int32_t>(offsetof(DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F, ___recording_10)); }
	inline bool get_recording_10() const { return ___recording_10; }
	inline bool* get_address_of_recording_10() { return &___recording_10; }
	inline void set_recording_10(bool value)
	{
		___recording_10 = value;
	}
};


// Photon.MonoBehaviour
struct  MonoBehaviour_tFEF607B49E95B5895C1FF846DEB2A8626EB4EE54  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PhotonView Photon.MonoBehaviour::pvCache
	PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845 * ___pvCache_4;

public:
	inline static int32_t get_offset_of_pvCache_4() { return static_cast<int32_t>(offsetof(MonoBehaviour_tFEF607B49E95B5895C1FF846DEB2A8626EB4EE54, ___pvCache_4)); }
	inline PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845 * get_pvCache_4() const { return ___pvCache_4; }
	inline PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845 ** get_address_of_pvCache_4() { return &___pvCache_4; }
	inline void set_pvCache_4(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845 * value)
	{
		___pvCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pvCache_4), (void*)value);
	}
};


// PhotonHandler
struct  PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 PhotonHandler::updateInterval
	int32_t ___updateInterval_5;
	// System.Int32 PhotonHandler::updateIntervalOnSerialize
	int32_t ___updateIntervalOnSerialize_6;
	// System.Int32 PhotonHandler::nextSendTickCount
	int32_t ___nextSendTickCount_7;
	// System.Int32 PhotonHandler::nextSendTickCountOnSerialize
	int32_t ___nextSendTickCountOnSerialize_8;

public:
	inline static int32_t get_offset_of_updateInterval_5() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB, ___updateInterval_5)); }
	inline int32_t get_updateInterval_5() const { return ___updateInterval_5; }
	inline int32_t* get_address_of_updateInterval_5() { return &___updateInterval_5; }
	inline void set_updateInterval_5(int32_t value)
	{
		___updateInterval_5 = value;
	}

	inline static int32_t get_offset_of_updateIntervalOnSerialize_6() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB, ___updateIntervalOnSerialize_6)); }
	inline int32_t get_updateIntervalOnSerialize_6() const { return ___updateIntervalOnSerialize_6; }
	inline int32_t* get_address_of_updateIntervalOnSerialize_6() { return &___updateIntervalOnSerialize_6; }
	inline void set_updateIntervalOnSerialize_6(int32_t value)
	{
		___updateIntervalOnSerialize_6 = value;
	}

	inline static int32_t get_offset_of_nextSendTickCount_7() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB, ___nextSendTickCount_7)); }
	inline int32_t get_nextSendTickCount_7() const { return ___nextSendTickCount_7; }
	inline int32_t* get_address_of_nextSendTickCount_7() { return &___nextSendTickCount_7; }
	inline void set_nextSendTickCount_7(int32_t value)
	{
		___nextSendTickCount_7 = value;
	}

	inline static int32_t get_offset_of_nextSendTickCountOnSerialize_8() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB, ___nextSendTickCountOnSerialize_8)); }
	inline int32_t get_nextSendTickCountOnSerialize_8() const { return ___nextSendTickCountOnSerialize_8; }
	inline int32_t* get_address_of_nextSendTickCountOnSerialize_8() { return &___nextSendTickCountOnSerialize_8; }
	inline void set_nextSendTickCountOnSerialize_8(int32_t value)
	{
		___nextSendTickCountOnSerialize_8 = value;
	}
};

struct PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields
{
public:
	// PhotonHandler PhotonHandler::SP
	PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB * ___SP_4;
	// System.Boolean PhotonHandler::sendThreadShouldRun
	bool ___sendThreadShouldRun_9;
	// System.Diagnostics.Stopwatch PhotonHandler::timerToStopConnectionInBackground
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___timerToStopConnectionInBackground_10;
	// System.Boolean PhotonHandler::AppQuits
	bool ___AppQuits_11;
	// System.Type PhotonHandler::PingImplementation
	Type_t * ___PingImplementation_12;

public:
	inline static int32_t get_offset_of_SP_4() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields, ___SP_4)); }
	inline PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB * get_SP_4() const { return ___SP_4; }
	inline PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB ** get_address_of_SP_4() { return &___SP_4; }
	inline void set_SP_4(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB * value)
	{
		___SP_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SP_4), (void*)value);
	}

	inline static int32_t get_offset_of_sendThreadShouldRun_9() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields, ___sendThreadShouldRun_9)); }
	inline bool get_sendThreadShouldRun_9() const { return ___sendThreadShouldRun_9; }
	inline bool* get_address_of_sendThreadShouldRun_9() { return &___sendThreadShouldRun_9; }
	inline void set_sendThreadShouldRun_9(bool value)
	{
		___sendThreadShouldRun_9 = value;
	}

	inline static int32_t get_offset_of_timerToStopConnectionInBackground_10() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields, ___timerToStopConnectionInBackground_10)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_timerToStopConnectionInBackground_10() const { return ___timerToStopConnectionInBackground_10; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_timerToStopConnectionInBackground_10() { return &___timerToStopConnectionInBackground_10; }
	inline void set_timerToStopConnectionInBackground_10(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___timerToStopConnectionInBackground_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerToStopConnectionInBackground_10), (void*)value);
	}

	inline static int32_t get_offset_of_AppQuits_11() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields, ___AppQuits_11)); }
	inline bool get_AppQuits_11() const { return ___AppQuits_11; }
	inline bool* get_address_of_AppQuits_11() { return &___AppQuits_11; }
	inline void set_AppQuits_11(bool value)
	{
		___AppQuits_11 = value;
	}

	inline static int32_t get_offset_of_PingImplementation_12() { return static_cast<int32_t>(offsetof(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields, ___PingImplementation_12)); }
	inline Type_t * get_PingImplementation_12() const { return ___PingImplementation_12; }
	inline Type_t ** get_address_of_PingImplementation_12() { return &___PingImplementation_12; }
	inline void set_PingImplementation_12(Type_t * value)
	{
		___PingImplementation_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PingImplementation_12), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// OnClickDestroy
struct  OnClickDestroy_tEEB902BB7C2D6D87AB5F23B56E5D2D13DF87BFCE  : public MonoBehaviour_tFEF607B49E95B5895C1FF846DEB2A8626EB4EE54
{
public:
	// System.Boolean OnClickDestroy::DestroyByRpc
	bool ___DestroyByRpc_5;

public:
	inline static int32_t get_offset_of_DestroyByRpc_5() { return static_cast<int32_t>(offsetof(OnClickDestroy_tEEB902BB7C2D6D87AB5F23B56E5D2D13DF87BFCE, ___DestroyByRpc_5)); }
	inline bool get_DestroyByRpc_5() const { return ___DestroyByRpc_5; }
	inline bool* get_address_of_DestroyByRpc_5() { return &___DestroyByRpc_5; }
	inline void set_DestroyByRpc_5(bool value)
	{
		___DestroyByRpc_5 = value;
	}
};


// PhotonView
struct  PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845  : public MonoBehaviour_tFEF607B49E95B5895C1FF846DEB2A8626EB4EE54
{
public:
	// System.Int32 PhotonView::ownerId
	int32_t ___ownerId_5;
	// System.Byte PhotonView::group
	uint8_t ___group_6;
	// System.Boolean PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_7;
	// System.Boolean PhotonView::OwnerShipWasTransfered
	bool ___OwnerShipWasTransfered_8;
	// System.Int32 PhotonView::prefixBackup
	int32_t ___prefixBackup_9;
	// System.Object[] PhotonView::instantiationDataField
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___instantiationDataField_10;
	// System.Object[] PhotonView::lastOnSerializeDataSent
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___lastOnSerializeDataSent_11;
	// System.Object[] PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___lastOnSerializeDataReceived_12;
	// ViewSynchronization PhotonView::synchronization
	int32_t ___synchronization_13;
	// OnSerializeTransform PhotonView::onSerializeTransformOption
	int32_t ___onSerializeTransformOption_14;
	// OnSerializeRigidBody PhotonView::onSerializeRigidBodyOption
	int32_t ___onSerializeRigidBodyOption_15;
	// OwnershipOption PhotonView::ownershipTransfer
	int32_t ___ownershipTransfer_16;
	// System.Collections.Generic.List`1<UnityEngine.Component> PhotonView::ObservedComponents
	List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * ___ObservedComponents_17;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo> PhotonView::m_OnSerializeMethodInfos
	Dictionary_2_t1CEA6D7A88C20D6EB158C4349C82C2F899142014 * ___m_OnSerializeMethodInfos_18;
	// System.Int32 PhotonView::viewIdField
	int32_t ___viewIdField_19;
	// System.Int32 PhotonView::instantiationId
	int32_t ___instantiationId_20;
	// System.Int32 PhotonView::currentMasterID
	int32_t ___currentMasterID_21;
	// System.Boolean PhotonView::didAwake
	bool ___didAwake_22;
	// System.Boolean PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_23;
	// System.Boolean PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_24;
	// UnityEngine.MonoBehaviour[] PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* ___RpcMonoBehaviours_25;
	// System.Reflection.MethodInfo PhotonView::OnSerializeMethodInfo
	MethodInfo_t * ___OnSerializeMethodInfo_26;
	// System.Boolean PhotonView::failedToFindOnSerialize
	bool ___failedToFindOnSerialize_27;

public:
	inline static int32_t get_offset_of_ownerId_5() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___ownerId_5)); }
	inline int32_t get_ownerId_5() const { return ___ownerId_5; }
	inline int32_t* get_address_of_ownerId_5() { return &___ownerId_5; }
	inline void set_ownerId_5(int32_t value)
	{
		___ownerId_5 = value;
	}

	inline static int32_t get_offset_of_group_6() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___group_6)); }
	inline uint8_t get_group_6() const { return ___group_6; }
	inline uint8_t* get_address_of_group_6() { return &___group_6; }
	inline void set_group_6(uint8_t value)
	{
		___group_6 = value;
	}

	inline static int32_t get_offset_of_mixedModeIsReliable_7() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___mixedModeIsReliable_7)); }
	inline bool get_mixedModeIsReliable_7() const { return ___mixedModeIsReliable_7; }
	inline bool* get_address_of_mixedModeIsReliable_7() { return &___mixedModeIsReliable_7; }
	inline void set_mixedModeIsReliable_7(bool value)
	{
		___mixedModeIsReliable_7 = value;
	}

	inline static int32_t get_offset_of_OwnerShipWasTransfered_8() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___OwnerShipWasTransfered_8)); }
	inline bool get_OwnerShipWasTransfered_8() const { return ___OwnerShipWasTransfered_8; }
	inline bool* get_address_of_OwnerShipWasTransfered_8() { return &___OwnerShipWasTransfered_8; }
	inline void set_OwnerShipWasTransfered_8(bool value)
	{
		___OwnerShipWasTransfered_8 = value;
	}

	inline static int32_t get_offset_of_prefixBackup_9() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___prefixBackup_9)); }
	inline int32_t get_prefixBackup_9() const { return ___prefixBackup_9; }
	inline int32_t* get_address_of_prefixBackup_9() { return &___prefixBackup_9; }
	inline void set_prefixBackup_9(int32_t value)
	{
		___prefixBackup_9 = value;
	}

	inline static int32_t get_offset_of_instantiationDataField_10() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___instantiationDataField_10)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_instantiationDataField_10() const { return ___instantiationDataField_10; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_instantiationDataField_10() { return &___instantiationDataField_10; }
	inline void set_instantiationDataField_10(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___instantiationDataField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instantiationDataField_10), (void*)value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataSent_11() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___lastOnSerializeDataSent_11)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_lastOnSerializeDataSent_11() const { return ___lastOnSerializeDataSent_11; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_lastOnSerializeDataSent_11() { return &___lastOnSerializeDataSent_11; }
	inline void set_lastOnSerializeDataSent_11(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___lastOnSerializeDataSent_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastOnSerializeDataSent_11), (void*)value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataReceived_12() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___lastOnSerializeDataReceived_12)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_lastOnSerializeDataReceived_12() const { return ___lastOnSerializeDataReceived_12; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_lastOnSerializeDataReceived_12() { return &___lastOnSerializeDataReceived_12; }
	inline void set_lastOnSerializeDataReceived_12(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___lastOnSerializeDataReceived_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastOnSerializeDataReceived_12), (void*)value);
	}

	inline static int32_t get_offset_of_synchronization_13() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___synchronization_13)); }
	inline int32_t get_synchronization_13() const { return ___synchronization_13; }
	inline int32_t* get_address_of_synchronization_13() { return &___synchronization_13; }
	inline void set_synchronization_13(int32_t value)
	{
		___synchronization_13 = value;
	}

	inline static int32_t get_offset_of_onSerializeTransformOption_14() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___onSerializeTransformOption_14)); }
	inline int32_t get_onSerializeTransformOption_14() const { return ___onSerializeTransformOption_14; }
	inline int32_t* get_address_of_onSerializeTransformOption_14() { return &___onSerializeTransformOption_14; }
	inline void set_onSerializeTransformOption_14(int32_t value)
	{
		___onSerializeTransformOption_14 = value;
	}

	inline static int32_t get_offset_of_onSerializeRigidBodyOption_15() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___onSerializeRigidBodyOption_15)); }
	inline int32_t get_onSerializeRigidBodyOption_15() const { return ___onSerializeRigidBodyOption_15; }
	inline int32_t* get_address_of_onSerializeRigidBodyOption_15() { return &___onSerializeRigidBodyOption_15; }
	inline void set_onSerializeRigidBodyOption_15(int32_t value)
	{
		___onSerializeRigidBodyOption_15 = value;
	}

	inline static int32_t get_offset_of_ownershipTransfer_16() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___ownershipTransfer_16)); }
	inline int32_t get_ownershipTransfer_16() const { return ___ownershipTransfer_16; }
	inline int32_t* get_address_of_ownershipTransfer_16() { return &___ownershipTransfer_16; }
	inline void set_ownershipTransfer_16(int32_t value)
	{
		___ownershipTransfer_16 = value;
	}

	inline static int32_t get_offset_of_ObservedComponents_17() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___ObservedComponents_17)); }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * get_ObservedComponents_17() const { return ___ObservedComponents_17; }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F ** get_address_of_ObservedComponents_17() { return &___ObservedComponents_17; }
	inline void set_ObservedComponents_17(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * value)
	{
		___ObservedComponents_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObservedComponents_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSerializeMethodInfos_18() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___m_OnSerializeMethodInfos_18)); }
	inline Dictionary_2_t1CEA6D7A88C20D6EB158C4349C82C2F899142014 * get_m_OnSerializeMethodInfos_18() const { return ___m_OnSerializeMethodInfos_18; }
	inline Dictionary_2_t1CEA6D7A88C20D6EB158C4349C82C2F899142014 ** get_address_of_m_OnSerializeMethodInfos_18() { return &___m_OnSerializeMethodInfos_18; }
	inline void set_m_OnSerializeMethodInfos_18(Dictionary_2_t1CEA6D7A88C20D6EB158C4349C82C2F899142014 * value)
	{
		___m_OnSerializeMethodInfos_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSerializeMethodInfos_18), (void*)value);
	}

	inline static int32_t get_offset_of_viewIdField_19() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___viewIdField_19)); }
	inline int32_t get_viewIdField_19() const { return ___viewIdField_19; }
	inline int32_t* get_address_of_viewIdField_19() { return &___viewIdField_19; }
	inline void set_viewIdField_19(int32_t value)
	{
		___viewIdField_19 = value;
	}

	inline static int32_t get_offset_of_instantiationId_20() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___instantiationId_20)); }
	inline int32_t get_instantiationId_20() const { return ___instantiationId_20; }
	inline int32_t* get_address_of_instantiationId_20() { return &___instantiationId_20; }
	inline void set_instantiationId_20(int32_t value)
	{
		___instantiationId_20 = value;
	}

	inline static int32_t get_offset_of_currentMasterID_21() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___currentMasterID_21)); }
	inline int32_t get_currentMasterID_21() const { return ___currentMasterID_21; }
	inline int32_t* get_address_of_currentMasterID_21() { return &___currentMasterID_21; }
	inline void set_currentMasterID_21(int32_t value)
	{
		___currentMasterID_21 = value;
	}

	inline static int32_t get_offset_of_didAwake_22() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___didAwake_22)); }
	inline bool get_didAwake_22() const { return ___didAwake_22; }
	inline bool* get_address_of_didAwake_22() { return &___didAwake_22; }
	inline void set_didAwake_22(bool value)
	{
		___didAwake_22 = value;
	}

	inline static int32_t get_offset_of_isRuntimeInstantiated_23() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___isRuntimeInstantiated_23)); }
	inline bool get_isRuntimeInstantiated_23() const { return ___isRuntimeInstantiated_23; }
	inline bool* get_address_of_isRuntimeInstantiated_23() { return &___isRuntimeInstantiated_23; }
	inline void set_isRuntimeInstantiated_23(bool value)
	{
		___isRuntimeInstantiated_23 = value;
	}

	inline static int32_t get_offset_of_removedFromLocalViewList_24() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___removedFromLocalViewList_24)); }
	inline bool get_removedFromLocalViewList_24() const { return ___removedFromLocalViewList_24; }
	inline bool* get_address_of_removedFromLocalViewList_24() { return &___removedFromLocalViewList_24; }
	inline void set_removedFromLocalViewList_24(bool value)
	{
		___removedFromLocalViewList_24 = value;
	}

	inline static int32_t get_offset_of_RpcMonoBehaviours_25() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___RpcMonoBehaviours_25)); }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* get_RpcMonoBehaviours_25() const { return ___RpcMonoBehaviours_25; }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D** get_address_of_RpcMonoBehaviours_25() { return &___RpcMonoBehaviours_25; }
	inline void set_RpcMonoBehaviours_25(MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* value)
	{
		___RpcMonoBehaviours_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RpcMonoBehaviours_25), (void*)value);
	}

	inline static int32_t get_offset_of_OnSerializeMethodInfo_26() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___OnSerializeMethodInfo_26)); }
	inline MethodInfo_t * get_OnSerializeMethodInfo_26() const { return ___OnSerializeMethodInfo_26; }
	inline MethodInfo_t ** get_address_of_OnSerializeMethodInfo_26() { return &___OnSerializeMethodInfo_26; }
	inline void set_OnSerializeMethodInfo_26(MethodInfo_t * value)
	{
		___OnSerializeMethodInfo_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSerializeMethodInfo_26), (void*)value);
	}

	inline static int32_t get_offset_of_failedToFindOnSerialize_27() { return static_cast<int32_t>(offsetof(PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845, ___failedToFindOnSerialize_27)); }
	inline bool get_failedToFindOnSerialize_27() const { return ___failedToFindOnSerialize_27; }
	inline bool* get_address_of_failedToFindOnSerialize_27() { return &___failedToFindOnSerialize_27; }
	inline void set_failedToFindOnSerialize_27(bool value)
	{
		___failedToFindOnSerialize_27 = value;
	}
};


// Photon.PunBehaviour
struct  PunBehaviour_t425DC9736400BA4BC890FC00358FEDC32409FD68  : public MonoBehaviour_tFEF607B49E95B5895C1FF846DEB2A8626EB4EE54
{
public:

public:
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// OnClickFlashRpc
struct  OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE  : public PunBehaviour_t425DC9736400BA4BC890FC00358FEDC32409FD68
{
public:
	// UnityEngine.Material OnClickFlashRpc::originalMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___originalMaterial_5;
	// UnityEngine.Color OnClickFlashRpc::originalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___originalColor_6;
	// System.Boolean OnClickFlashRpc::isFlashing
	bool ___isFlashing_7;

public:
	inline static int32_t get_offset_of_originalMaterial_5() { return static_cast<int32_t>(offsetof(OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE, ___originalMaterial_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_originalMaterial_5() const { return ___originalMaterial_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_originalMaterial_5() { return &___originalMaterial_5; }
	inline void set_originalMaterial_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___originalMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalMaterial_5), (void*)value);
	}

	inline static int32_t get_offset_of_originalColor_6() { return static_cast<int32_t>(offsetof(OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE, ___originalColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_originalColor_6() const { return ___originalColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_originalColor_6() { return &___originalColor_6; }
	inline void set_originalColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___originalColor_6 = value;
	}

	inline static int32_t get_offset_of_isFlashing_7() { return static_cast<int32_t>(offsetof(OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE, ___isFlashing_7)); }
	inline bool get_isFlashing_7() const { return ___isFlashing_7; }
	inline bool* get_address_of_isFlashing_7() { return &___isFlashing_7; }
	inline void set_isFlashing_7(bool value)
	{
		___isFlashing_7 = value;
	}
};


// RpsCore
struct  RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7  : public PunBehaviour_t425DC9736400BA4BC890FC00358FEDC32409FD68
{
public:
	// UnityEngine.RectTransform RpsCore::ConnectUiView
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___ConnectUiView_5;
	// UnityEngine.RectTransform RpsCore::GameUiView
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___GameUiView_6;
	// UnityEngine.CanvasGroup RpsCore::ButtonCanvasGroup
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___ButtonCanvasGroup_7;
	// UnityEngine.RectTransform RpsCore::TimerFillImage
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___TimerFillImage_8;
	// UnityEngine.UI.Text RpsCore::TurnText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TurnText_9;
	// UnityEngine.UI.Text RpsCore::TimeText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TimeText_10;
	// UnityEngine.UI.Text RpsCore::RemotePlayerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___RemotePlayerText_11;
	// UnityEngine.UI.Text RpsCore::LocalPlayerText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___LocalPlayerText_12;
	// UnityEngine.UI.Image RpsCore::WinOrLossImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___WinOrLossImage_13;
	// UnityEngine.UI.Image RpsCore::localSelectionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___localSelectionImage_14;
	// RpsCore/Hand RpsCore::localSelection
	int32_t ___localSelection_15;
	// UnityEngine.UI.Image RpsCore::remoteSelectionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___remoteSelectionImage_16;
	// RpsCore/Hand RpsCore::remoteSelection
	int32_t ___remoteSelection_17;
	// UnityEngine.Sprite RpsCore::SelectedRock
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SelectedRock_18;
	// UnityEngine.Sprite RpsCore::SelectedPaper
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SelectedPaper_19;
	// UnityEngine.Sprite RpsCore::SelectedScissors
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SelectedScissors_20;
	// UnityEngine.Sprite RpsCore::SpriteWin
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SpriteWin_21;
	// UnityEngine.Sprite RpsCore::SpriteLose
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SpriteLose_22;
	// UnityEngine.Sprite RpsCore::SpriteDraw
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SpriteDraw_23;
	// UnityEngine.RectTransform RpsCore::DisconnectedPanel
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___DisconnectedPanel_24;
	// RpsCore/ResultType RpsCore::result
	int32_t ___result_25;
	// PunTurnManager RpsCore::turnManager
	PunTurnManager_t57646FAB37E04E3198AB117561576E751DC5FB8F * ___turnManager_26;
	// RpsCore/Hand RpsCore::randomHand
	int32_t ___randomHand_27;
	// System.Boolean RpsCore::IsShowingResults
	bool ___IsShowingResults_28;

public:
	inline static int32_t get_offset_of_ConnectUiView_5() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___ConnectUiView_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_ConnectUiView_5() const { return ___ConnectUiView_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_ConnectUiView_5() { return &___ConnectUiView_5; }
	inline void set_ConnectUiView_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___ConnectUiView_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectUiView_5), (void*)value);
	}

	inline static int32_t get_offset_of_GameUiView_6() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___GameUiView_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_GameUiView_6() const { return ___GameUiView_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_GameUiView_6() { return &___GameUiView_6; }
	inline void set_GameUiView_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___GameUiView_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameUiView_6), (void*)value);
	}

	inline static int32_t get_offset_of_ButtonCanvasGroup_7() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___ButtonCanvasGroup_7)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_ButtonCanvasGroup_7() const { return ___ButtonCanvasGroup_7; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_ButtonCanvasGroup_7() { return &___ButtonCanvasGroup_7; }
	inline void set_ButtonCanvasGroup_7(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___ButtonCanvasGroup_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ButtonCanvasGroup_7), (void*)value);
	}

	inline static int32_t get_offset_of_TimerFillImage_8() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___TimerFillImage_8)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_TimerFillImage_8() const { return ___TimerFillImage_8; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_TimerFillImage_8() { return &___TimerFillImage_8; }
	inline void set_TimerFillImage_8(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___TimerFillImage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimerFillImage_8), (void*)value);
	}

	inline static int32_t get_offset_of_TurnText_9() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___TurnText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TurnText_9() const { return ___TurnText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TurnText_9() { return &___TurnText_9; }
	inline void set_TurnText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TurnText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TurnText_9), (void*)value);
	}

	inline static int32_t get_offset_of_TimeText_10() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___TimeText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TimeText_10() const { return ___TimeText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TimeText_10() { return &___TimeText_10; }
	inline void set_TimeText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TimeText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeText_10), (void*)value);
	}

	inline static int32_t get_offset_of_RemotePlayerText_11() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___RemotePlayerText_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_RemotePlayerText_11() const { return ___RemotePlayerText_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_RemotePlayerText_11() { return &___RemotePlayerText_11; }
	inline void set_RemotePlayerText_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___RemotePlayerText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemotePlayerText_11), (void*)value);
	}

	inline static int32_t get_offset_of_LocalPlayerText_12() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___LocalPlayerText_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_LocalPlayerText_12() const { return ___LocalPlayerText_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_LocalPlayerText_12() { return &___LocalPlayerText_12; }
	inline void set_LocalPlayerText_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___LocalPlayerText_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocalPlayerText_12), (void*)value);
	}

	inline static int32_t get_offset_of_WinOrLossImage_13() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___WinOrLossImage_13)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_WinOrLossImage_13() const { return ___WinOrLossImage_13; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_WinOrLossImage_13() { return &___WinOrLossImage_13; }
	inline void set_WinOrLossImage_13(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___WinOrLossImage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WinOrLossImage_13), (void*)value);
	}

	inline static int32_t get_offset_of_localSelectionImage_14() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___localSelectionImage_14)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_localSelectionImage_14() const { return ___localSelectionImage_14; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_localSelectionImage_14() { return &___localSelectionImage_14; }
	inline void set_localSelectionImage_14(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___localSelectionImage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localSelectionImage_14), (void*)value);
	}

	inline static int32_t get_offset_of_localSelection_15() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___localSelection_15)); }
	inline int32_t get_localSelection_15() const { return ___localSelection_15; }
	inline int32_t* get_address_of_localSelection_15() { return &___localSelection_15; }
	inline void set_localSelection_15(int32_t value)
	{
		___localSelection_15 = value;
	}

	inline static int32_t get_offset_of_remoteSelectionImage_16() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___remoteSelectionImage_16)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_remoteSelectionImage_16() const { return ___remoteSelectionImage_16; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_remoteSelectionImage_16() { return &___remoteSelectionImage_16; }
	inline void set_remoteSelectionImage_16(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___remoteSelectionImage_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteSelectionImage_16), (void*)value);
	}

	inline static int32_t get_offset_of_remoteSelection_17() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___remoteSelection_17)); }
	inline int32_t get_remoteSelection_17() const { return ___remoteSelection_17; }
	inline int32_t* get_address_of_remoteSelection_17() { return &___remoteSelection_17; }
	inline void set_remoteSelection_17(int32_t value)
	{
		___remoteSelection_17 = value;
	}

	inline static int32_t get_offset_of_SelectedRock_18() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___SelectedRock_18)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SelectedRock_18() const { return ___SelectedRock_18; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SelectedRock_18() { return &___SelectedRock_18; }
	inline void set_SelectedRock_18(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SelectedRock_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedRock_18), (void*)value);
	}

	inline static int32_t get_offset_of_SelectedPaper_19() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___SelectedPaper_19)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SelectedPaper_19() const { return ___SelectedPaper_19; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SelectedPaper_19() { return &___SelectedPaper_19; }
	inline void set_SelectedPaper_19(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SelectedPaper_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedPaper_19), (void*)value);
	}

	inline static int32_t get_offset_of_SelectedScissors_20() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___SelectedScissors_20)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SelectedScissors_20() const { return ___SelectedScissors_20; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SelectedScissors_20() { return &___SelectedScissors_20; }
	inline void set_SelectedScissors_20(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SelectedScissors_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedScissors_20), (void*)value);
	}

	inline static int32_t get_offset_of_SpriteWin_21() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___SpriteWin_21)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SpriteWin_21() const { return ___SpriteWin_21; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SpriteWin_21() { return &___SpriteWin_21; }
	inline void set_SpriteWin_21(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SpriteWin_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpriteWin_21), (void*)value);
	}

	inline static int32_t get_offset_of_SpriteLose_22() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___SpriteLose_22)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SpriteLose_22() const { return ___SpriteLose_22; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SpriteLose_22() { return &___SpriteLose_22; }
	inline void set_SpriteLose_22(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SpriteLose_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpriteLose_22), (void*)value);
	}

	inline static int32_t get_offset_of_SpriteDraw_23() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___SpriteDraw_23)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SpriteDraw_23() const { return ___SpriteDraw_23; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SpriteDraw_23() { return &___SpriteDraw_23; }
	inline void set_SpriteDraw_23(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SpriteDraw_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpriteDraw_23), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectedPanel_24() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___DisconnectedPanel_24)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_DisconnectedPanel_24() const { return ___DisconnectedPanel_24; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_DisconnectedPanel_24() { return &___DisconnectedPanel_24; }
	inline void set_DisconnectedPanel_24(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___DisconnectedPanel_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectedPanel_24), (void*)value);
	}

	inline static int32_t get_offset_of_result_25() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___result_25)); }
	inline int32_t get_result_25() const { return ___result_25; }
	inline int32_t* get_address_of_result_25() { return &___result_25; }
	inline void set_result_25(int32_t value)
	{
		___result_25 = value;
	}

	inline static int32_t get_offset_of_turnManager_26() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___turnManager_26)); }
	inline PunTurnManager_t57646FAB37E04E3198AB117561576E751DC5FB8F * get_turnManager_26() const { return ___turnManager_26; }
	inline PunTurnManager_t57646FAB37E04E3198AB117561576E751DC5FB8F ** get_address_of_turnManager_26() { return &___turnManager_26; }
	inline void set_turnManager_26(PunTurnManager_t57646FAB37E04E3198AB117561576E751DC5FB8F * value)
	{
		___turnManager_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___turnManager_26), (void*)value);
	}

	inline static int32_t get_offset_of_randomHand_27() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___randomHand_27)); }
	inline int32_t get_randomHand_27() const { return ___randomHand_27; }
	inline int32_t* get_address_of_randomHand_27() { return &___randomHand_27; }
	inline void set_randomHand_27(int32_t value)
	{
		___randomHand_27 = value;
	}

	inline static int32_t get_offset_of_IsShowingResults_28() { return static_cast<int32_t>(offsetof(RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7, ___IsShowingResults_28)); }
	inline bool get_IsShowingResults_28() const { return ___IsShowingResults_28; }
	inline bool* get_address_of_IsShowingResults_28() { return &___IsShowingResults_28; }
	inline void set_IsShowingResults_28(bool value)
	{
		___IsShowingResults_28 = value;
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
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


// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared)(__this, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// PhotonView Photon.MonoBehaviour::get_photonView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845 * MonoBehaviour_get_photonView_m2B849AADE41FC751B8AE36D1FA45A89C0DD54EF1 (MonoBehaviour_tFEF607B49E95B5895C1FF846DEB2A8626EB4EE54 * __this, const RuntimeMethod* method);
// System.Int32 PhotonView::get_viewID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhotonView_get_viewID_m81F66C59CEF3FA3AC70544C2E4ACEBCEA2A814C4_inline (PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845 * __this, const RuntimeMethod* method);
// System.Void PhotonNetwork::UnAllocateViewID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_UnAllocateViewID_m744DF87247CA967D0C256E538F6D465D1E83600D (int32_t ___viewID0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mB6F155CD45C688DA232B56BD1A74474C224BE37E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Material_GetColor_m5B75B83FE5821381064306ECFEEF0CC44BE66688 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void PhotonHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD0733E6B6FB226BC16FE6B791515B240C1613187 (U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E * __this, const RuntimeMethod* method);
// System.Void NetworkingPeer::NewSceneLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkingPeer_NewSceneLoaded_m25A919D5FF73E3E26948DCEA61046126069F0769 (NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * __this, const RuntimeMethod* method);
// System.String SceneManagerHelper::get_ActiveSceneName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SceneManagerHelper_get_ActiveSceneName_m6CE7F0BF6E5AA705C90C5428D3B50A64CEA3BCB3 (const RuntimeMethod* method);
// System.Void NetworkingPeer::SetLevelInPropsIfSynced(System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkingPeer_SetLevelInPropsIfSynced_mA83674AD2F0443CD5E2AC59433F7BB1A8B2FDCFB (NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * __this, RuntimeObject * ___levelId0, bool ___initiatingCall1, bool ___asyncLoading2, const RuntimeMethod* method);
// ClientState PhotonNetwork::get_connectionStateDetailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonNetwork_get_connectionStateDetailed_m57A9652D933100F5E86601FF11C3D18CA45A6CFD (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// ServerConnection PhotonNetwork::get_Server()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonNetwork_get_Server_mFF8823BB8C5E6B609754C8E4334C2C02DE2AB72A (const RuntimeMethod* method);
// System.Collections.Generic.List`1<Region> NetworkingPeer::get_AvailableRegions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 * NetworkingPeer_get_AvailableRegions_m935F79ABE76A6D003C55BA0DE208D216D066C7B4_inline (NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Region>::get_Count()
inline int32_t List_1_get_Count_mF11575EBED43F2A01A7116F24E480559AA499E32_inline (List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void PhotonPingManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPingManager__ctor_m9F74D4B5D320629A9A903E419755D0D30F27C176 (PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Region>::GetEnumerator()
inline Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE  List_1_GetEnumerator_mCC70D1723A3D97164E58AEA13E5E905796A17129 (List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE  (*) (List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Region>::get_Current()
inline Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * Enumerator_get_Current_mCFD13C0003C1537656D24D83031706DDE8E5D38A_inline (Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE * __this, const RuntimeMethod* method)
{
	return ((  Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * (*) (Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Collections.IEnumerator PhotonPingManager::PingSocket(Region)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PhotonPingManager_PingSocket_mC92AC7510FF9C358E023C0241EF5C9C8F4AC2079 (PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * __this, Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * ___region0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Region>::MoveNext()
inline bool Enumerator_MoveNext_m40A4D84A25481239710BE6AE9951683094ED4A92 (Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Region>::Dispose()
inline void Enumerator_Dispose_mE43F90D2E76AC7F4A79B5762B29383A07946006B (Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean PhotonPingManager::get_Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonPingManager_get_Done_m4FE7944999B48B9A532456074B9E5E35AA8DC558 (PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * __this, const RuntimeMethod* method);
// Region PhotonPingManager::get_BestRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * PhotonPingManager_get_BestRegion_m881D073C35376C198D6C95760DBA71C965925427 (PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * __this, const RuntimeMethod* method);
// System.Void PhotonHandler::set_BestRegionCodeInPreferences(CloudRegionCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonHandler_set_BestRegionCodeInPreferences_mCB7DCCCBC6DC12D687C3461729E5BA8857AF6878 (int32_t ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Boolean NetworkingPeer::ConnectToRegionMaster(CloudRegionCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkingPeer_ConnectToRegionMaster_mB48A7F9C68BAD43298B80D6BF4DBAC2EA1512F3C (NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * __this, int32_t ___region0, String_t* ___specificCluster1, const RuntimeMethod* method);
// System.Void PhotonNetwork/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m66965849B0B1A6ABDCF8417095785CAD7714B08D (U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1 * __this, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void Photon.Realtime.PingMono::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PingMono__ctor_mF43BDC17E322F0AD458A6C83EB7F6CA7BB8491F2 (PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9 * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String PhotonPingManager::ResolveHost(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPingManager_ResolveHost_m56CFA0B734BD288767ED20862BBF6E0665C775F7 (String_t* ___hostName0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_interactable_m139F4C59174EFB13F80AD10837BD0760E0B97835 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void RpsCore::StartTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpsCore_StartTurn_m4BA719D78935E8F24224BDC8C62C5856D125BCF8 (RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
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
// System.Void DemoBoxesGui/<SwapTip>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwapTipU3Ed__8__ctor_m4556B4A0B95B3EB49E9468E0109BAD3C463F25F6 (U3CSwapTipU3Ed__8_t5701AF0D8FB44C47B8F24A6B79BCD1E9522F1747 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DemoBoxesGui/<SwapTip>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwapTipU3Ed__8_System_IDisposable_Dispose_m8476960300F2F85640AFAA36D91E2F9401DF17DE (U3CSwapTipU3Ed__8_t5701AF0D8FB44C47B8F24A6B79BCD1E9522F1747 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DemoBoxesGui/<SwapTip>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSwapTipU3Ed__8_MoveNext_m9DC0DD30A3604D5B1B4B11AA8A937B4F0D50728C (U3CSwapTipU3Ed__8_t5701AF0D8FB44C47B8F24A6B79BCD1E9522F1747 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00a9;
			}
			case 2:
			{
				goto IL_0164;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float alpha = 1.0f;
		__this->set_U3CalphaU3E5__2_3((1.0f));
		goto IL_00b0;
	}

IL_0036:
	{
		// alpha -= FadeSpeedForTip;
		float L_3 = __this->get_U3CalphaU3E5__2_3();
		__this->set_U3CalphaU3E5__2_3(((float)il2cpp_codegen_subtract((float)L_3, (float)(0.0500000007f))));
		// this.timeSinceLastTip = 0;
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_timeSinceLastTip_9((0.0f));
		// this.GuiTextForTips.color = new Color(this.GuiTextForTips.color.r, this.GuiTextForTips.color.r, this.GuiTextForTips.color.r, alpha);
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_5 = V_1;
		NullCheck(L_5);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = L_5->get_GuiTextForTips_5();
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_7 = V_1;
		NullCheck(L_7);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = L_7->get_GuiTextForTips_5();
		NullCheck(L_8);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		float L_10 = L_9.get_r_0();
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_11 = V_1;
		NullCheck(L_11);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = L_11->get_GuiTextForTips_5();
		NullCheck(L_12);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_12);
		float L_14 = L_13.get_r_0();
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_15 = V_1;
		NullCheck(L_15);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = L_15->get_GuiTextForTips_5();
		NullCheck(L_16);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		L_17 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_16);
		float L_18 = L_17.get_r_0();
		float L_19 = __this->get_U3CalphaU3E5__2_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_20), L_10, L_14, L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_20);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a9:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00b0:
	{
		// while (alpha > 0)
		float L_21 = __this->get_U3CalphaU3E5__2_3();
		if ((((float)L_21) > ((float)(0.0f))))
		{
			goto IL_0036;
		}
	}
	{
		// this.tipsIndex = (this.tipsIndex + 1)%this.tips.Length;
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_22 = V_1;
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_23 = V_1;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_tipsIndex_6();
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_25 = V_1;
		NullCheck(L_25);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25->get_tips_7();
		NullCheck(L_26);
		NullCheck(L_22);
		L_22->set_tipsIndex_6(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1))%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))));
		// this.GuiTextForTips.text = this.tips[this.tipsIndex];
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_27 = V_1;
		NullCheck(L_27);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_28 = L_27->get_GuiTextForTips_5();
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_29 = V_1;
		NullCheck(L_29);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_29->get_tips_7();
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_31 = V_1;
		NullCheck(L_31);
		int32_t L_32 = L_31->get_tipsIndex_6();
		NullCheck(L_30);
		int32_t L_33 = L_32;
		String_t* L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_28);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, L_34);
		goto IL_016b;
	}

IL_00f1:
	{
		// alpha += FadeSpeedForTip;
		float L_35 = __this->get_U3CalphaU3E5__2_3();
		__this->set_U3CalphaU3E5__2_3(((float)il2cpp_codegen_add((float)L_35, (float)(0.0500000007f))));
		// this.timeSinceLastTip = 0;
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_36 = V_1;
		NullCheck(L_36);
		L_36->set_timeSinceLastTip_9((0.0f));
		// this.GuiTextForTips.color = new Color(this.GuiTextForTips.color.r, this.GuiTextForTips.color.r, this.GuiTextForTips.color.r, alpha);
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_37 = V_1;
		NullCheck(L_37);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_38 = L_37->get_GuiTextForTips_5();
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_39 = V_1;
		NullCheck(L_39);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_40 = L_39->get_GuiTextForTips_5();
		NullCheck(L_40);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_41;
		L_41 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_40);
		float L_42 = L_41.get_r_0();
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_43 = V_1;
		NullCheck(L_43);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_44 = L_43->get_GuiTextForTips_5();
		NullCheck(L_44);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_45;
		L_45 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_44);
		float L_46 = L_45.get_r_0();
		DemoBoxesGui_t3BB52E9A2329265C20EE8BDCA38663EF420A713D * L_47 = V_1;
		NullCheck(L_47);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_48 = L_47->get_GuiTextForTips_5();
		NullCheck(L_48);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49;
		L_49 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_48);
		float L_50 = L_49.get_r_0();
		float L_51 = __this->get_U3CalphaU3E5__2_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_52), L_42, L_46, L_50, L_51, /*hidden argument*/NULL);
		NullCheck(L_38);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_38, L_52);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0164:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_016b:
	{
		// while (alpha < 1.0f)
		float L_53 = __this->get_U3CalphaU3E5__2_3();
		if ((((float)L_53) < ((float)(1.0f))))
		{
			goto IL_00f1;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object DemoBoxesGui/<SwapTip>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSwapTipU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1A69818B01632540831AD93500EBD7B2EF59B8F0 (U3CSwapTipU3Ed__8_t5701AF0D8FB44C47B8F24A6B79BCD1E9522F1747 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DemoBoxesGui/<SwapTip>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwapTipU3Ed__8_System_Collections_IEnumerator_Reset_m1D254D7C006CC70EC268DDA923D6440EA28E1F96 (U3CSwapTipU3Ed__8_t5701AF0D8FB44C47B8F24A6B79BCD1E9522F1747 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwapTipU3Ed__8_System_Collections_IEnumerator_Reset_m1D254D7C006CC70EC268DDA923D6440EA28E1F96_RuntimeMethod_var)));
	}
}
// System.Object DemoBoxesGui/<SwapTip>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSwapTipU3Ed__8_System_Collections_IEnumerator_get_Current_m63504BE9DC32898CDAFE51BC944D8EA1F0A19AA1 (U3CSwapTipU3Ed__8_t5701AF0D8FB44C47B8F24A6B79BCD1E9522F1747 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// Conversion methods for marshalling of: ExitGames.Demos.DemoHubManager/DemoData
IL2CPP_EXTERN_C void DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE_marshal_pinvoke(const DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE& unmarshaled, DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE_marshaled_pinvoke& marshaled)
{
	marshaled.___Title_0 = il2cpp_codegen_marshal_string(unmarshaled.get_Title_0());
	marshaled.___Description_1 = il2cpp_codegen_marshal_string(unmarshaled.get_Description_1());
	marshaled.___Scene_2 = il2cpp_codegen_marshal_string(unmarshaled.get_Scene_2());
	marshaled.___TutorialLink_3 = il2cpp_codegen_marshal_string(unmarshaled.get_TutorialLink_3());
	marshaled.___DocLink_4 = il2cpp_codegen_marshal_string(unmarshaled.get_DocLink_4());
}
IL2CPP_EXTERN_C void DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE_marshal_pinvoke_back(const DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE_marshaled_pinvoke& marshaled, DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE& unmarshaled)
{
	unmarshaled.set_Title_0(il2cpp_codegen_marshal_string_result(marshaled.___Title_0));
	unmarshaled.set_Description_1(il2cpp_codegen_marshal_string_result(marshaled.___Description_1));
	unmarshaled.set_Scene_2(il2cpp_codegen_marshal_string_result(marshaled.___Scene_2));
	unmarshaled.set_TutorialLink_3(il2cpp_codegen_marshal_string_result(marshaled.___TutorialLink_3));
	unmarshaled.set_DocLink_4(il2cpp_codegen_marshal_string_result(marshaled.___DocLink_4));
}
// Conversion method for clean up from marshalling of: ExitGames.Demos.DemoHubManager/DemoData
IL2CPP_EXTERN_C void DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE_marshal_pinvoke_cleanup(DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Title_0);
	marshaled.___Title_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Description_1);
	marshaled.___Description_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Scene_2);
	marshaled.___Scene_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___TutorialLink_3);
	marshaled.___TutorialLink_3 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___DocLink_4);
	marshaled.___DocLink_4 = NULL;
}
// Conversion methods for marshalling of: ExitGames.Demos.DemoHubManager/DemoData
IL2CPP_EXTERN_C void DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE_marshal_com(const DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE& unmarshaled, DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE_marshaled_com& marshaled)
{
	marshaled.___Title_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Title_0());
	marshaled.___Description_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Description_1());
	marshaled.___Scene_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Scene_2());
	marshaled.___TutorialLink_3 = il2cpp_codegen_marshal_bstring(unmarshaled.get_TutorialLink_3());
	marshaled.___DocLink_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_DocLink_4());
}
IL2CPP_EXTERN_C void DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE_marshal_com_back(const DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE_marshaled_com& marshaled, DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE& unmarshaled)
{
	unmarshaled.set_Title_0(il2cpp_codegen_marshal_bstring_result(marshaled.___Title_0));
	unmarshaled.set_Description_1(il2cpp_codegen_marshal_bstring_result(marshaled.___Description_1));
	unmarshaled.set_Scene_2(il2cpp_codegen_marshal_bstring_result(marshaled.___Scene_2));
	unmarshaled.set_TutorialLink_3(il2cpp_codegen_marshal_bstring_result(marshaled.___TutorialLink_3));
	unmarshaled.set_DocLink_4(il2cpp_codegen_marshal_bstring_result(marshaled.___DocLink_4));
}
// Conversion method for clean up from marshalling of: ExitGames.Demos.DemoHubManager/DemoData
IL2CPP_EXTERN_C void DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE_marshal_com_cleanup(DemoData_tA82D1327B2853B999A70A85A51640FA2DE6001EE_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Title_0);
	marshaled.___Title_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___Description_1);
	marshaled.___Description_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___Scene_2);
	marshaled.___Scene_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___TutorialLink_3);
	marshaled.___TutorialLink_3 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___DocLink_4);
	marshaled.___DocLink_4 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DragToMove/<RecordMouse>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRecordMouseU3Ed__9__ctor_m0433A1052A5DDD1289273D7EFBCC8F007A04EE4C (U3CRecordMouseU3Ed__9_t2110E72FC9A8B3C9BDB53CBE5F45340E9B1117F3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DragToMove/<RecordMouse>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRecordMouseU3Ed__9_System_IDisposable_Dispose_m8382F1A4607BFD09E94B4F83E5391F1A4ADFE313 (U3CRecordMouseU3Ed__9_t2110E72FC9A8B3C9BDB53CBE5F45340E9B1117F3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DragToMove/<RecordMouse>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRecordMouseU3Ed__9_MoveNext_m33F558407D1F4C1A16518F0A32AFF6A1FF780E51 (U3CRecordMouseU3Ed__9_t2110E72FC9A8B3C9BDB53CBE5F45340E9B1117F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// recording = true;
		DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_recording_10((bool)1);
		// PositionsQueue.Clear();
		DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F * L_5 = V_1;
		NullCheck(L_5);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_6 = L_5->get_PositionsQueue_6();
		NullCheck(L_6);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_6, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		goto IL_009b;
	}

IL_0032:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector3 v3 = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		V_2 = L_8;
		// if (Input.touchCount > 0)
		int32_t L_9;
		L_9 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		// v3 = Input.GetTouch(0).position;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_10;
		L_10 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_4 = L_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_4), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
	}

IL_0075:
	{
		// Ray inputRay = Camera.main.ScreenPointToRay(v3);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13;
		L_13 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_2;
		NullCheck(L_13);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_15;
		L_15 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_13, L_14, /*hidden argument*/NULL);
		// if (Physics.Raycast(inputRay, out hit))
		bool L_16;
		L_16 = Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E(L_15, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_3), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_009b;
		}
	}
	{
		// PositionsQueue.Add(hit.point);
		DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F * L_17 = V_1;
		NullCheck(L_17);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_18 = L_17->get_PositionsQueue_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_18);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_18, L_19, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
	}

IL_009b:
	{
		// while (Input.GetMouseButton(0) || Input.touchCount > 0)
		bool L_20;
		L_20 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_21;
		L_21 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		// nextPosIndex = 0;
		DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F * L_22 = V_1;
		NullCheck(L_22);
		L_22->set_nextPosIndex_8(0);
		// recording = false;
		DragToMove_tF96BDDCB1A5EE032D920A78A78D1449244DA661F * L_23 = V_1;
		NullCheck(L_23);
		L_23->set_recording_10((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object DragToMove/<RecordMouse>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRecordMouseU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF0A530D116969E8CE3A84C4F84EDA6A90125CD61 (U3CRecordMouseU3Ed__9_t2110E72FC9A8B3C9BDB53CBE5F45340E9B1117F3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DragToMove/<RecordMouse>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRecordMouseU3Ed__9_System_Collections_IEnumerator_Reset_m4CA12576CA77D9AAD2612A252BD1129D8A2E8BF5 (U3CRecordMouseU3Ed__9_t2110E72FC9A8B3C9BDB53CBE5F45340E9B1117F3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRecordMouseU3Ed__9_System_Collections_IEnumerator_Reset_m4CA12576CA77D9AAD2612A252BD1129D8A2E8BF5_RuntimeMethod_var)));
	}
}
// System.Object DragToMove/<RecordMouse>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRecordMouseU3Ed__9_System_Collections_IEnumerator_get_Current_m8121AF538A67A6D421827E35A3625B9BF7036087 (U3CRecordMouseU3Ed__9_t2110E72FC9A8B3C9BDB53CBE5F45340E9B1117F3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void ECEffectActor/projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void projectile__ctor_mD16DCD470DA9D3C7D3CC5DEB2E9228AE62BE04BC (projectile_tCCE366344F4899E5D9DC756B84CD4E7F4D3DE645 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void ECparticleColorChangerMaster/colorChange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void colorChange__ctor_mC2C6E945250BE6E6C334607445CB30CD6DE25654 (colorChange_tB8F718C5414DA5E0BFF45C09A2F2F18685150C65 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void ECprojectileActor/projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void projectile__ctor_m1B9FD4326BA51253718893CFDECC464D3C8F978F (projectile_t09B4832E5EEC3F4B96297215B3C4E85232EDFFA1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: HubGui/DemoBtn
IL2CPP_EXTERN_C void DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272_marshal_pinvoke(const DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272& unmarshaled, DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272_marshaled_pinvoke& marshaled)
{
	marshaled.___Text_0 = il2cpp_codegen_marshal_string(unmarshaled.get_Text_0());
	marshaled.___Link_1 = il2cpp_codegen_marshal_string(unmarshaled.get_Link_1());
}
IL2CPP_EXTERN_C void DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272_marshal_pinvoke_back(const DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272_marshaled_pinvoke& marshaled, DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272& unmarshaled)
{
	unmarshaled.set_Text_0(il2cpp_codegen_marshal_string_result(marshaled.___Text_0));
	unmarshaled.set_Link_1(il2cpp_codegen_marshal_string_result(marshaled.___Link_1));
}
// Conversion method for clean up from marshalling of: HubGui/DemoBtn
IL2CPP_EXTERN_C void DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272_marshal_pinvoke_cleanup(DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Text_0);
	marshaled.___Text_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Link_1);
	marshaled.___Link_1 = NULL;
}
// Conversion methods for marshalling of: HubGui/DemoBtn
IL2CPP_EXTERN_C void DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272_marshal_com(const DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272& unmarshaled, DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272_marshaled_com& marshaled)
{
	marshaled.___Text_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Text_0());
	marshaled.___Link_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Link_1());
}
IL2CPP_EXTERN_C void DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272_marshal_com_back(const DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272_marshaled_com& marshaled, DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272& unmarshaled)
{
	unmarshaled.set_Text_0(il2cpp_codegen_marshal_bstring_result(marshaled.___Text_0));
	unmarshaled.set_Link_1(il2cpp_codegen_marshal_bstring_result(marshaled.___Link_1));
}
// Conversion method for clean up from marshalling of: HubGui/DemoBtn
IL2CPP_EXTERN_C void DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272_marshal_com_cleanup(DemoBtn_t1C489BB014564E12FA63A520F2A6798C4DA9B272_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Text_0);
	marshaled.___Text_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___Link_1);
	marshaled.___Link_1 = NULL;
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
// System.Void NetworkingPeer/<>c__DisplayClass163_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass163_0__ctor_m2164C542804A1F6F2985878400A20ADCD52EE969 (U3CU3Ec__DisplayClass163_0_t8A24F3C8469A435177A91B7B53AF90A3DD721A69 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean NetworkingPeer/<>c__DisplayClass163_0::<OnOperationResponse>b__0(Region)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass163_0_U3COnOperationResponseU3Eb__0_m0EF6979216724A2B3D2F7130BEC1341C38875F00 (U3CU3Ec__DisplayClass163_0_t8A24F3C8469A435177A91B7B53AF90A3DD721A69 * __this, Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * ___x0, const RuntimeMethod* method)
{
	{
		// this.AvailableRegions.Exists(x => x.Code == bestFromPrefs)
		Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_Code_0();
		int32_t L_2 = __this->get_bestFromPrefs_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void OnClickDestroy/<DestroyRpc>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyRpcU3Ed__2__ctor_m157B1F71DCC5EA51679A64D0899457EF7C906868 (U3CDestroyRpcU3Ed__2_tE1EBFC65ACAF20C2D73A70702757C54FD63A14A1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OnClickDestroy/<DestroyRpc>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyRpcU3Ed__2_System_IDisposable_Dispose_m03DBABF0C5160AC42F7454B9C822690BEF43E5A6 (U3CDestroyRpcU3Ed__2_tE1EBFC65ACAF20C2D73A70702757C54FD63A14A1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OnClickDestroy/<DestroyRpc>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDestroyRpcU3Ed__2_MoveNext_m6AA14C4AE8E71FB3A0204F0F05DE29842DAAF927 (U3CDestroyRpcU3Ed__2_tE1EBFC65ACAF20C2D73A70702757C54FD63A14A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OnClickDestroy_tEEB902BB7C2D6D87AB5F23B56E5D2D13DF87BFCE * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		OnClickDestroy_tEEB902BB7C2D6D87AB5F23B56E5D2D13DF87BFCE * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GameObject.Destroy(this.gameObject);
		OnClickDestroy_tEEB902BB7C2D6D87AB5F23B56E5D2D13DF87BFCE * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// yield return 0; 
		int32_t L_6 = 0;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PhotonNetwork.UnAllocateViewID(this.photonView.viewID);
		OnClickDestroy_tEEB902BB7C2D6D87AB5F23B56E5D2D13DF87BFCE * L_8 = V_1;
		NullCheck(L_8);
		PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845 * L_9;
		L_9 = MonoBehaviour_get_photonView_m2B849AADE41FC751B8AE36D1FA45A89C0DD54EF1(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = PhotonView_get_viewID_m81F66C59CEF3FA3AC70544C2E4ACEBCEA2A814C4_inline(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var);
		PhotonNetwork_UnAllocateViewID_m744DF87247CA967D0C256E538F6D465D1E83600D(L_10, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object OnClickDestroy/<DestroyRpc>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDestroyRpcU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBABCCF6B2522E7128176A42D9FF861BB6DE6CA67 (U3CDestroyRpcU3Ed__2_tE1EBFC65ACAF20C2D73A70702757C54FD63A14A1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OnClickDestroy/<DestroyRpc>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyRpcU3Ed__2_System_Collections_IEnumerator_Reset_m9D55A0E3C84F2B4F39A6C59A9D25C78C678EAB8B (U3CDestroyRpcU3Ed__2_tE1EBFC65ACAF20C2D73A70702757C54FD63A14A1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDestroyRpcU3Ed__2_System_Collections_IEnumerator_Reset_m9D55A0E3C84F2B4F39A6C59A9D25C78C678EAB8B_RuntimeMethod_var)));
	}
}
// System.Object OnClickDestroy/<DestroyRpc>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDestroyRpcU3Ed__2_System_Collections_IEnumerator_get_Current_mF0C26673365D6F7011072195387306442244E0B9 (U3CDestroyRpcU3Ed__2_tE1EBFC65ACAF20C2D73A70702757C54FD63A14A1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void OnClickFlashRpc/<Flash>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashU3Ed__4__ctor_m68D55EFCBE55BAD27B466CE82B48B0BBF2006444 (U3CFlashU3Ed__4_t68C2666A7714263AA517872FDED230058CBD9B67 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OnClickFlashRpc/<Flash>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashU3Ed__4_System_IDisposable_Dispose_m199EB5E8544CA551D00A17E6CB082FC0C23E0496 (U3CFlashU3Ed__4_t68C2666A7714263AA517872FDED230058CBD9B67 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OnClickFlashRpc/<Flash>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFlashU3Ed__4_MoveNext_mDAC4DE04850C9354216CF6D743F5AD5D5E35D6D3 (U3CFlashU3Ed__4_t68C2666A7714263AA517872FDED230058CBD9B67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC023D3E2E65812AE859DA2B44CDD13B8F79C026E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC29A24DBA1B3B76E82852C9F0DA8E1C6CAB9A274);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * V_1 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00e8;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (isFlashing)
		OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_isFlashing_7();
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_002b:
	{
		// isFlashing = true;
		OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * L_6 = V_1;
		NullCheck(L_6);
		L_6->set_isFlashing_7((bool)1);
		// this.originalMaterial = GetComponent<Renderer>().material;
		OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * L_7 = V_1;
		OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * L_8 = V_1;
		NullCheck(L_8);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_9;
		L_9 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_8, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_9);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10;
		L_10 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set_originalMaterial_5(L_10);
		// if (!this.originalMaterial.HasProperty("_Emission"))
		OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * L_11 = V_1;
		NullCheck(L_11);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = L_11->get_originalMaterial_5();
		NullCheck(L_12);
		bool L_13;
		L_13 = Material_HasProperty_mB6F155CD45C688DA232B56BD1A74474C224BE37E(L_12, _stringLiteralC29A24DBA1B3B76E82852C9F0DA8E1C6CAB9A274, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0078;
		}
	}
	{
		// Debug.LogWarning("Doesnt have emission, can't flash " + gameObject);
		OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * L_14 = V_1;
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = L_15;
		G_B7_0 = L_16;
		G_B7_1 = _stringLiteralC023D3E2E65812AE859DA2B44CDD13B8F79C026E;
		if (L_16)
		{
			G_B8_0 = L_16;
			G_B8_1 = _stringLiteralC023D3E2E65812AE859DA2B44CDD13B8F79C026E;
			goto IL_0067;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		goto IL_006c;
	}

IL_0067:
	{
		NullCheck(G_B8_0);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		String_t* L_18;
		L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B9_1, G_B9_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_18, /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}

IL_0078:
	{
		// this.originalColor = this.originalMaterial.GetColor("_Emission");
		OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * L_19 = V_1;
		OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * L_20 = V_1;
		NullCheck(L_20);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21 = L_20->get_originalMaterial_5();
		NullCheck(L_21);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22;
		L_22 = Material_GetColor_m5B75B83FE5821381064306ECFEEF0CC44BE66688(L_21, _stringLiteralC29A24DBA1B3B76E82852C9F0DA8E1C6CAB9A274, /*hidden argument*/NULL);
		NullCheck(L_19);
		L_19->set_originalColor_6(L_22);
		// this.originalMaterial.SetColor("_Emission", Color.white);
		OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * L_23 = V_1;
		NullCheck(L_23);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_24 = L_23->get_originalMaterial_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25;
		L_25 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		NullCheck(L_24);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_24, _stringLiteralC29A24DBA1B3B76E82852C9F0DA8E1C6CAB9A274, L_25, /*hidden argument*/NULL);
		// for (float f = 0.0f; f <= 1.0f; f += 0.08f)
		__this->set_U3CfU3E5__2_3((0.0f));
		goto IL_0101;
	}

IL_00b0:
	{
		// Color lerped = Color.Lerp(Color.white, this.originalColor, f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26;
		L_26 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * L_27 = V_1;
		NullCheck(L_27);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28 = L_27->get_originalColor_6();
		float L_29 = __this->get_U3CfU3E5__2_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
		L_30 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_26, L_28, L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		// this.originalMaterial.SetColor("_Emission", lerped);
		OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * L_31 = V_1;
		NullCheck(L_31);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = L_31->get_originalMaterial_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33 = V_2;
		NullCheck(L_32);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_32, _stringLiteralC29A24DBA1B3B76E82852C9F0DA8E1C6CAB9A274, L_33, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00e8:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (float f = 0.0f; f <= 1.0f; f += 0.08f)
		float L_34 = __this->get_U3CfU3E5__2_3();
		__this->set_U3CfU3E5__2_3(((float)il2cpp_codegen_add((float)L_34, (float)(0.0799999982f))));
	}

IL_0101:
	{
		// for (float f = 0.0f; f <= 1.0f; f += 0.08f)
		float L_35 = __this->get_U3CfU3E5__2_3();
		if ((((float)L_35) <= ((float)(1.0f))))
		{
			goto IL_00b0;
		}
	}
	{
		// this.originalMaterial.SetColor("_Emission", this.originalColor);
		OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * L_36 = V_1;
		NullCheck(L_36);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = L_36->get_originalMaterial_5();
		OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * L_38 = V_1;
		NullCheck(L_38);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_39 = L_38->get_originalColor_6();
		NullCheck(L_37);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_37, _stringLiteralC29A24DBA1B3B76E82852C9F0DA8E1C6CAB9A274, L_39, /*hidden argument*/NULL);
		// isFlashing = false;
		OnClickFlashRpc_t64C4C49736311E5EF1F42F085082CCB9F1FE22EE * L_40 = V_1;
		NullCheck(L_40);
		L_40->set_isFlashing_7((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object OnClickFlashRpc/<Flash>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFlashU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFD950BEDAAF79FC8D7ED643329AD279471CEB809 (U3CFlashU3Ed__4_t68C2666A7714263AA517872FDED230058CBD9B67 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OnClickFlashRpc/<Flash>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlashU3Ed__4_System_Collections_IEnumerator_Reset_m8F48FBF54985A5B9E2FE4DED6E9C74BCB83BD7C7 (U3CFlashU3Ed__4_t68C2666A7714263AA517872FDED230058CBD9B67 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFlashU3Ed__4_System_Collections_IEnumerator_Reset_m8F48FBF54985A5B9E2FE4DED6E9C74BCB83BD7C7_RuntimeMethod_var)));
	}
}
// System.Object OnClickFlashRpc/<Flash>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFlashU3Ed__4_System_Collections_IEnumerator_get_Current_m193854BDB472418999EF507ECC560324B5E19D98 (U3CFlashU3Ed__4_t68C2666A7714263AA517872FDED230058CBD9B67 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PhotonAnimatorView/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mD2EAEFBCBD740C5CF4ADAFB1E74F1D695A0602C4 (U3CU3Ec__DisplayClass18_0_t7916C80E1E2A06C47C06A3CDA8BEE7E1E48324C3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PhotonAnimatorView/<>c__DisplayClass18_0::<DoesLayerSynchronizeTypeExist>b__0(PhotonAnimatorView/SynchronizedLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass18_0_U3CDoesLayerSynchronizeTypeExistU3Eb__0_m5AEA2B918935502DD5B8CFB6EA97AA3892D322C1 (U3CU3Ec__DisplayClass18_0_t7916C80E1E2A06C47C06A3CDA8BEE7E1E48324C3 * __this, SynchronizedLayer_t88131AD7E086EA33C31500A65C1918D560711F4B * ___item0, const RuntimeMethod* method)
{
	{
		// return this.m_SynchronizeLayers.FindIndex(item => item.LayerIndex == layerIndex) != -1;
		SynchronizedLayer_t88131AD7E086EA33C31500A65C1918D560711F4B * L_0 = ___item0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_LayerIndex_1();
		int32_t L_2 = __this->get_layerIndex_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void PhotonAnimatorView/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mCF80E1218BBDD425C06B0C3981C629CFD4042316 (U3CU3Ec__DisplayClass19_0_t8B42A43E58E0C43B3E9D3DAF64DA4D09AB1639FC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PhotonAnimatorView/<>c__DisplayClass19_0::<DoesParameterSynchronizeTypeExist>b__0(PhotonAnimatorView/SynchronizedParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass19_0_U3CDoesParameterSynchronizeTypeExistU3Eb__0_mDF41C33D736AA28D9D469DC0F09E04414A259DEC (U3CU3Ec__DisplayClass19_0_t8B42A43E58E0C43B3E9D3DAF64DA4D09AB1639FC * __this, SynchronizedParameter_tB6B5383927642650AD39D6AD78CEFDF5EF8B7358 * ___item0, const RuntimeMethod* method)
{
	{
		// return this.m_SynchronizeParameters.FindIndex(item => item.Name == name) != -1;
		SynchronizedParameter_tB6B5383927642650AD39D6AD78CEFDF5EF8B7358 * L_0 = ___item0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Name_2();
		String_t* L_2 = __this->get_name_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void PhotonAnimatorView/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mFF310173203239250C77DFB18DBD3FA71CBA649A (U3CU3Ec__DisplayClass22_0_t4F7E62E78BFBFBE570854EBB78B8F17B14738F33 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PhotonAnimatorView/<>c__DisplayClass22_0::<GetLayerSynchronizeType>b__0(PhotonAnimatorView/SynchronizedLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass22_0_U3CGetLayerSynchronizeTypeU3Eb__0_m981FFABBF4A6E15A6DC4B4D2EED6E5844F54B4EE (U3CU3Ec__DisplayClass22_0_t4F7E62E78BFBFBE570854EBB78B8F17B14738F33 * __this, SynchronizedLayer_t88131AD7E086EA33C31500A65C1918D560711F4B * ___item0, const RuntimeMethod* method)
{
	{
		// int index = this.m_SynchronizeLayers.FindIndex(item => item.LayerIndex == layerIndex);
		SynchronizedLayer_t88131AD7E086EA33C31500A65C1918D560711F4B * L_0 = ___item0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_LayerIndex_1();
		int32_t L_2 = __this->get_layerIndex_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void PhotonAnimatorView/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m883DBDEE3E8CA37F95A5C3A2879AAFA18C79366E (U3CU3Ec__DisplayClass23_0_t892378D5C7ACC1A24D9E4E7AAD348DC158E6D58F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PhotonAnimatorView/<>c__DisplayClass23_0::<GetParameterSynchronizeType>b__0(PhotonAnimatorView/SynchronizedParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass23_0_U3CGetParameterSynchronizeTypeU3Eb__0_m8E6576C68A32AA9F09EC751B1498954063B6CBBD (U3CU3Ec__DisplayClass23_0_t892378D5C7ACC1A24D9E4E7AAD348DC158E6D58F * __this, SynchronizedParameter_tB6B5383927642650AD39D6AD78CEFDF5EF8B7358 * ___item0, const RuntimeMethod* method)
{
	{
		// int index = this.m_SynchronizeParameters.FindIndex(item => item.Name == name);
		SynchronizedParameter_tB6B5383927642650AD39D6AD78CEFDF5EF8B7358 * L_0 = ___item0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Name_2();
		String_t* L_2 = __this->get_name_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void PhotonAnimatorView/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m2C6CADCE26744065F51F17C44B469286C33338EE (U3CU3Ec__DisplayClass24_0_t91FEB0E37D8A64B4B79D6A3792439AE0366BA2F0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PhotonAnimatorView/<>c__DisplayClass24_0::<SetLayerSynchronized>b__0(PhotonAnimatorView/SynchronizedLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass24_0_U3CSetLayerSynchronizedU3Eb__0_m723BFB51B9AA8464EC75296D159C14829DA74E43 (U3CU3Ec__DisplayClass24_0_t91FEB0E37D8A64B4B79D6A3792439AE0366BA2F0 * __this, SynchronizedLayer_t88131AD7E086EA33C31500A65C1918D560711F4B * ___item0, const RuntimeMethod* method)
{
	{
		// int index = this.m_SynchronizeLayers.FindIndex(item => item.LayerIndex == layerIndex);
		SynchronizedLayer_t88131AD7E086EA33C31500A65C1918D560711F4B * L_0 = ___item0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_LayerIndex_1();
		int32_t L_2 = __this->get_layerIndex_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void PhotonAnimatorView/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m6CCE82F25BEBCDC81568A3832D5B1D4434A0144B (U3CU3Ec__DisplayClass25_0_t3341FB05839B8E56E8C6FB2CFBD5E4FAAC917595 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PhotonAnimatorView/<>c__DisplayClass25_0::<SetParameterSynchronized>b__0(PhotonAnimatorView/SynchronizedParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass25_0_U3CSetParameterSynchronizedU3Eb__0_mBA176E081ED4ABD32BECB4DFE781DB4A48ECCE3B (U3CU3Ec__DisplayClass25_0_t3341FB05839B8E56E8C6FB2CFBD5E4FAAC917595 * __this, SynchronizedParameter_tB6B5383927642650AD39D6AD78CEFDF5EF8B7358 * ___item0, const RuntimeMethod* method)
{
	{
		// int index = this.m_SynchronizeParameters.FindIndex(item => item.Name == name);
		SynchronizedParameter_tB6B5383927642650AD39D6AD78CEFDF5EF8B7358 * L_0 = ___item0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Name_2();
		String_t* L_2 = __this->get_name_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void PhotonAnimatorView/SynchronizedLayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizedLayer__ctor_m5B3B4200D0E623FFAB995D19BAA5A6315074ED32 (SynchronizedLayer_t88131AD7E086EA33C31500A65C1918D560711F4B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void PhotonAnimatorView/SynchronizedParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizedParameter__ctor_m6B7C1CE3A7112B4CA7EC3F6390C25D24BCD9D34F (SynchronizedParameter_tB6B5383927642650AD39D6AD78CEFDF5EF8B7358 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void PhotonHandler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5AF647EEEA62E3B63EE72C38BE1890226A702139 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E * L_0 = (U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E *)il2cpp_codegen_object_new(U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD0733E6B6FB226BC16FE6B791515B240C1613187(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void PhotonHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD0733E6B6FB226BC16FE6B791515B240C1613187 (U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PhotonHandler/<>c::<Start>b__10_0(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__10_0_m54473836434FAEABAC07A5635B9BF1450969B334 (U3CU3Ec_tF409DDB3EF1B1B0E72CF97821D61B972B8885B4E * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___loadingMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.networkingPeer.NewSceneLoaded();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var);
		NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * L_0 = ((PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var))->get_networkingPeer_3();
		NullCheck(L_0);
		NetworkingPeer_NewSceneLoaded_m25A919D5FF73E3E26948DCEA61046126069F0769(L_0, /*hidden argument*/NULL);
		// PhotonNetwork.networkingPeer.SetLevelInPropsIfSynced(SceneManagerHelper.ActiveSceneName, false);
		NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * L_1 = ((PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var))->get_networkingPeer_3();
		String_t* L_2;
		L_2 = SceneManagerHelper_get_ActiveSceneName_m6CE7F0BF6E5AA705C90C5428D3B50A64CEA3BCB3(/*hidden argument*/NULL);
		NullCheck(L_1);
		NetworkingPeer_SetLevelInPropsIfSynced_mA83674AD2F0443CD5E2AC59433F7BB1A8B2FDCFB(L_1, L_2, (bool)0, (bool)0, /*hidden argument*/NULL);
		// PhotonNetwork.networkingPeer.IsReloadingLevel = false;
		NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * L_3 = ((PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var))->get_networkingPeer_3();
		NullCheck(L_3);
		L_3->set_IsReloadingLevel_131((bool)0);
		// };
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
// System.Void PhotonHandler/<PingAvailableRegionsCoroutine>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPingAvailableRegionsCoroutineU3Ed__25__ctor_m8BC8B0B0B84506B83CCD9F1E31310B5242198EEF (U3CPingAvailableRegionsCoroutineU3Ed__25_t3CF8B8165FFC0B62F135478CAB0ACC4C64E7BF98 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PhotonHandler/<PingAvailableRegionsCoroutine>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPingAvailableRegionsCoroutineU3Ed__25_System_IDisposable_Dispose_m1D73D1FD45CF1045C0A35E1B855C2FD574F43CD6 (U3CPingAvailableRegionsCoroutineU3Ed__25_t3CF8B8165FFC0B62F135478CAB0ACC4C64E7BF98 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PhotonHandler/<PingAvailableRegionsCoroutine>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPingAvailableRegionsCoroutineU3Ed__25_MoveNext_m95946FF92400615565B8D9A0073BBC0F3BA49B39 (U3CPingAvailableRegionsCoroutineU3Ed__25_t3CF8B8165FFC0B62F135478CAB0ACC4C64E7BF98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t2BC6366743E2FF685EF8EBBF24CDA27003321561_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudRegionCode_tB0952227D76BB99B6E9ECE40C3E539545BF38C62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE43F90D2E76AC7F4A79B5762B29383A07946006B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40A4D84A25481239710BE6AE9951683094ED4A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCFD13C0003C1537656D24D83031706DDE8E5D38A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCC70D1723A3D97164E58AEA13E5E905796A17129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF11575EBED43F2A01A7116F24E480559AA499E32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerConnection_tF04C29A32DFD1FD64C1B8205FD96E07F4DB676CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1091CE9F802F13BC31E614C5AEB1CB88E41AB2CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34555AFA97485AFADAC8DF35F3D9331D63A28DA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E5A73DF61AF9308E88E6789269F37013D5A0D49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51F18A6AE5D3AEAAAFA90291694F77ED6BFBC826);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67A9BD85BE22F02D1786B74CC643E414FDED0EAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8775E00D3D17ED2D124F4D80ECE58C11647AFB75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA496EBC64D786EE4D830153B5C9CDDB21F72AEEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68FF22101AC8515E8F1E6522673EF29565FFBE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_00cb;
			}
			case 2:
			{
				goto IL_017b;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00d2;
	}

IL_0027:
	{
		// if (PhotonNetwork.connectionStateDetailed != ClientState.ConnectingToNameServer && PhotonNetwork.connectionStateDetailed != ClientState.ConnectedToNameServer)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = PhotonNetwork_get_connectionStateDetailed_m57A9652D933100F5E86601FF11C3D18CA45A6CFD(/*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)17))))
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = PhotonNetwork_get_connectionStateDetailed_m57A9652D933100F5E86601FF11C3D18CA45A6CFD(/*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)18))))
		{
			goto IL_0045;
		}
	}
	{
		// Debug.LogError("Call ConnectToNameServer to ping available regions.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral3E5A73DF61AF9308E88E6789269F37013D5A0D49, /*hidden argument*/NULL);
		// yield break; 
		return (bool)0;
	}

IL_0045:
	{
		// Debug.Log("Waiting for AvailableRegions. State: " + PhotonNetwork.connectionStateDetailed + " Server: " + PhotonNetwork.Server + " PhotonNetwork.networkingPeer.AvailableRegions " + (PhotonNetwork.networkingPeer.AvailableRegions != null));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral34555AFA97485AFADAC8DF35F3D9331D63A28DA2);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral34555AFA97485AFADAC8DF35F3D9331D63A28DA2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = PhotonNetwork_get_connectionStateDetailed_m57A9652D933100F5E86601FF11C3D18CA45A6CFD(/*hidden argument*/NULL);
		V_2 = L_7;
		RuntimeObject * L_8 = Box(ClientState_t2BC6366743E2FF685EF8EBBF24CDA27003321561_il2cpp_TypeInfo_var, (&V_2));
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		V_2 = *(int32_t*)UnBox(L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral8775E00D3D17ED2D124F4D80ECE58C11647AFB75);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral8775E00D3D17ED2D124F4D80ECE58C11647AFB75);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		int32_t L_12;
		L_12 = PhotonNetwork_get_Server_mFF8823BB8C5E6B609754C8E4334C2C02DE2AB72A(/*hidden argument*/NULL);
		V_3 = L_12;
		RuntimeObject * L_13 = Box(ServerConnection_tF04C29A32DFD1FD64C1B8205FD96E07F4DB676CB_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		V_3 = *(int32_t*)UnBox(L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral67A9BD85BE22F02D1786B74CC643E414FDED0EAE);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral67A9BD85BE22F02D1786B74CC643E414FDED0EAE);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * L_17 = ((PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var))->get_networkingPeer_3();
		NullCheck(L_17);
		List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 * L_18;
		L_18 = NetworkingPeer_get_AvailableRegions_m935F79ABE76A6D003C55BA0DE208D216D066C7B4_inline(L_17, /*hidden argument*/NULL);
		V_4 = (bool)((!(((RuntimeObject*)(List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 *)L_18) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		String_t* L_19;
		L_19 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_19);
		String_t* L_20;
		L_20 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_20, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.25f); 
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_21 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_21, (0.25f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_21);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00cb:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00d2:
	{
		// while (PhotonNetwork.networkingPeer.AvailableRegions == null)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var);
		NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * L_22 = ((PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var))->get_networkingPeer_3();
		NullCheck(L_22);
		List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 * L_23;
		L_23 = NetworkingPeer_get_AvailableRegions_m935F79ABE76A6D003C55BA0DE208D216D066C7B4_inline(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0027;
		}
	}
	{
		// if (PhotonNetwork.networkingPeer.AvailableRegions == null || PhotonNetwork.networkingPeer.AvailableRegions.Count == 0)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var);
		NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * L_24 = ((PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var))->get_networkingPeer_3();
		NullCheck(L_24);
		List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 * L_25;
		L_25 = NetworkingPeer_get_AvailableRegions_m935F79ABE76A6D003C55BA0DE208D216D066C7B4_inline(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00fe;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var);
		NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * L_26 = ((PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var))->get_networkingPeer_3();
		NullCheck(L_26);
		List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 * L_27;
		L_27 = NetworkingPeer_get_AvailableRegions_m935F79ABE76A6D003C55BA0DE208D216D066C7B4_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_mF11575EBED43F2A01A7116F24E480559AA499E32_inline(L_27, /*hidden argument*/List_1_get_Count_mF11575EBED43F2A01A7116F24E480559AA499E32_RuntimeMethod_var);
		if (L_28)
		{
			goto IL_010a;
		}
	}

IL_00fe:
	{
		// Debug.LogError("No regions available. Are you sure your appid is valid and setup?");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralBF68FF22101AC8515E8F1E6522673EF29565FFBE, /*hidden argument*/NULL);
		// yield break; 
		return (bool)0;
	}

IL_010a:
	{
		// PhotonPingManager pingManager = new PhotonPingManager();
		PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_29 = (PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 *)il2cpp_codegen_object_new(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var);
		PhotonPingManager__ctor_m9F74D4B5D320629A9A903E419755D0D30F27C176(L_29, /*hidden argument*/NULL);
		__this->set_U3CpingManagerU3E5__2_3(L_29);
		// foreach (Region region in PhotonNetwork.networkingPeer.AvailableRegions)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var);
		NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * L_30 = ((PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var))->get_networkingPeer_3();
		NullCheck(L_30);
		List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 * L_31;
		L_31 = NetworkingPeer_get_AvailableRegions_m935F79ABE76A6D003C55BA0DE208D216D066C7B4_inline(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE  L_32;
		L_32 = List_1_GetEnumerator_mCC70D1723A3D97164E58AEA13E5E905796A17129(L_31, /*hidden argument*/List_1_GetEnumerator_mCC70D1723A3D97164E58AEA13E5E905796A17129_RuntimeMethod_var);
		V_5 = L_32;
	}

IL_0126:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0149;
		}

IL_0128:
		{
			// foreach (Region region in PhotonNetwork.networkingPeer.AvailableRegions)
			Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * L_33;
			L_33 = Enumerator_get_Current_mCFD13C0003C1537656D24D83031706DDE8E5D38A_inline((Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE *)(&V_5), /*hidden argument*/Enumerator_get_Current_mCFD13C0003C1537656D24D83031706DDE8E5D38A_RuntimeMethod_var);
			V_6 = L_33;
			// SP.StartCoroutine(pingManager.PingSocket(region));
			IL2CPP_RUNTIME_CLASS_INIT(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_il2cpp_TypeInfo_var);
			PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB * L_34 = ((PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields*)il2cpp_codegen_static_fields_for(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_il2cpp_TypeInfo_var))->get_SP_4();
			PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_35 = __this->get_U3CpingManagerU3E5__2_3();
			Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * L_36 = V_6;
			NullCheck(L_35);
			RuntimeObject* L_37;
			L_37 = PhotonPingManager_PingSocket_mC92AC7510FF9C358E023C0241EF5C9C8F4AC2079(L_35, L_36, /*hidden argument*/NULL);
			NullCheck(L_34);
			Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_38;
			L_38 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_34, L_37, /*hidden argument*/NULL);
		}

IL_0149:
		{
			// foreach (Region region in PhotonNetwork.networkingPeer.AvailableRegions)
			bool L_39;
			L_39 = Enumerator_MoveNext_m40A4D84A25481239710BE6AE9951683094ED4A92((Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m40A4D84A25481239710BE6AE9951683094ED4A92_RuntimeMethod_var);
			if (L_39)
			{
				goto IL_0128;
			}
		}

IL_0152:
		{
			IL2CPP_LEAVE(0x182, FINALLY_0154);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0154;
	}

FINALLY_0154:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE43F90D2E76AC7F4A79B5762B29383A07946006B((Enumerator_t51DB4DE430B96CFE814348FBDF96E8E8BF2388BE *)(&V_5), /*hidden argument*/Enumerator_Dispose_mE43F90D2E76AC7F4A79B5762B29383A07946006B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(340)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(340)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x182, IL_0182)
	}

IL_0162:
	{
		// yield return new WaitForSeconds(0.1f); 
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_40 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_40, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_40);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_017b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0182:
	{
		// while (!pingManager.Done)
		PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_41 = __this->get_U3CpingManagerU3E5__2_3();
		NullCheck(L_41);
		bool L_42;
		L_42 = PhotonPingManager_get_Done_m4FE7944999B48B9A532456074B9E5E35AA8DC558(L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0162;
		}
	}
	{
		// Region best = pingManager.BestRegion;
		PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_43 = __this->get_U3CpingManagerU3E5__2_3();
		NullCheck(L_43);
		Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * L_44;
		L_44 = PhotonPingManager_get_BestRegion_m881D073C35376C198D6C95760DBA71C965925427(L_43, /*hidden argument*/NULL);
		V_1 = L_44;
		// PhotonHandler.BestRegionCodeInPreferences = best.Code;
		Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * L_45 = V_1;
		NullCheck(L_45);
		int32_t L_46 = L_45->get_Code_0();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_il2cpp_TypeInfo_var);
		PhotonHandler_set_BestRegionCodeInPreferences_mCB7DCCCBC6DC12D687C3461729E5BA8857AF6878(L_46, /*hidden argument*/NULL);
		// Debug.Log("Found best region: '" + best.Code + "' ping: " + best.Ping + ". Calling ConnectToRegionMaster() is: " + connectToBest);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48 = L_47;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteral51F18A6AE5D3AEAAAFA90291694F77ED6BFBC826);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral51F18A6AE5D3AEAAAFA90291694F77ED6BFBC826);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = L_48;
		Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * L_50 = V_1;
		NullCheck(L_50);
		int32_t* L_51 = L_50->get_address_of_Code_0();
		RuntimeObject * L_52 = Box(CloudRegionCode_tB0952227D76BB99B6E9ECE40C3E539545BF38C62_il2cpp_TypeInfo_var, L_51);
		NullCheck(L_52);
		String_t* L_53;
		L_53 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_52);
		*L_51 = *(int32_t*)UnBox(L_52);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_53);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_53);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_54 = L_49;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, _stringLiteral1091CE9F802F13BC31E614C5AEB1CB88E41AB2CC);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1091CE9F802F13BC31E614C5AEB1CB88E41AB2CC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = L_54;
		Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * L_56 = V_1;
		NullCheck(L_56);
		int32_t* L_57 = L_56->get_address_of_Ping_3();
		String_t* L_58;
		L_58 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_57, /*hidden argument*/NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_58);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_58);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_59 = L_55;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, _stringLiteralA496EBC64D786EE4D830153B5C9CDDB21F72AEEA);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA496EBC64D786EE4D830153B5C9CDDB21F72AEEA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60 = L_59;
		bool* L_61 = __this->get_address_of_connectToBest_2();
		String_t* L_62;
		L_62 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_61, /*hidden argument*/NULL);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_62);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_62);
		String_t* L_63;
		L_63 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_60, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_63, /*hidden argument*/NULL);
		// if (connectToBest)
		bool L_64 = __this->get_connectToBest_2();
		if (!L_64)
		{
			goto IL_0218;
		}
	}
	{
		// PhotonNetwork.networkingPeer.ConnectToRegionMaster(best.Code);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var);
		NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * L_65 = ((PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var))->get_networkingPeer_3();
		Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * L_66 = V_1;
		NullCheck(L_66);
		int32_t L_67 = L_66->get_Code_0();
		NullCheck(L_65);
		bool L_68;
		L_68 = NetworkingPeer_ConnectToRegionMaster_mB48A7F9C68BAD43298B80D6BF4DBAC2EA1512F3C(L_65, L_67, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_0218:
	{
		// }
		return (bool)0;
	}
}
// System.Object PhotonHandler/<PingAvailableRegionsCoroutine>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPingAvailableRegionsCoroutineU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m514CDE3232C0CDA649A54150A0F8C52A9D7218E0 (U3CPingAvailableRegionsCoroutineU3Ed__25_t3CF8B8165FFC0B62F135478CAB0ACC4C64E7BF98 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PhotonHandler/<PingAvailableRegionsCoroutine>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPingAvailableRegionsCoroutineU3Ed__25_System_Collections_IEnumerator_Reset_m1A01D3B4BBDD651F2E6C2B075B25014346468C7F (U3CPingAvailableRegionsCoroutineU3Ed__25_t3CF8B8165FFC0B62F135478CAB0ACC4C64E7BF98 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPingAvailableRegionsCoroutineU3Ed__25_System_Collections_IEnumerator_Reset_m1A01D3B4BBDD651F2E6C2B075B25014346468C7F_RuntimeMethod_var)));
	}
}
// System.Object PhotonHandler/<PingAvailableRegionsCoroutine>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPingAvailableRegionsCoroutineU3Ed__25_System_Collections_IEnumerator_get_Current_m77A3957B0AE8A6ACC29A564E277181C0A3D434C2 (U3CPingAvailableRegionsCoroutineU3Ed__25_t3CF8B8165FFC0B62F135478CAB0ACC4C64E7BF98 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void PhotonNetwork/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF6817E422E99CB28959E88CD227B1E38E2F17E5D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1 * L_0 = (U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1 *)il2cpp_codegen_object_new(U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m66965849B0B1A6ABDCF8417095785CAD7714B08D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void PhotonNetwork/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m66965849B0B1A6ABDCF8417095785CAD7714B08D (U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 PhotonNetwork/<>c::<.cctor>b__151_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__151_0_m5BE16F658E252DD2BD3CE8096BA49019379756FC (U3CU3Ec_tCA5565084E6D1BE974C6C46A989EBEC66E9E48E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// networkingPeer.LocalMsTimestampDelegate = () => (int)startupStopwatch.ElapsedMilliseconds;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var);
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = ((PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_t3BE6D093B92434AFDF99B36C934E442BF2288B1F_il2cpp_TypeInfo_var))->get_startupStopwatch_27();
		NullCheck(L_0);
		int64_t L_1;
		L_1 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1));
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
// System.Void PhotonNetwork/EventCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCallback__ctor_m5612289C700D929042E0C8E674FCAA1DE19FB17C (EventCallback_tF67DD1350E7870B69EB1BFB2871FF3DA891E70E6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void PhotonNetwork/EventCallback::Invoke(System.Byte,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCallback_Invoke_m66EC3FB630F22A6DFFEF67C69378FAF93C91BB96 (EventCallback_tF67DD1350E7870B69EB1BFB2871FF3DA891E70E6 * __this, uint8_t ___eventCode0, RuntimeObject * ___content1, int32_t ___senderId2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (uint8_t, RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___eventCode0, ___content1, ___senderId2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint8_t, RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___eventCode0, ___content1, ___senderId2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< uint8_t, RuntimeObject *, int32_t >::Invoke(targetMethod, targetThis, ___eventCode0, ___content1, ___senderId2);
					else
						GenericVirtActionInvoker3< uint8_t, RuntimeObject *, int32_t >::Invoke(targetMethod, targetThis, ___eventCode0, ___content1, ___senderId2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< uint8_t, RuntimeObject *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___eventCode0, ___content1, ___senderId2);
					else
						VirtActionInvoker3< uint8_t, RuntimeObject *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___eventCode0, ___content1, ___senderId2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint8_t, RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___eventCode0, ___content1, ___senderId2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult PhotonNetwork/EventCallback::BeginInvoke(System.Byte,System.Object,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventCallback_BeginInvoke_m4D910659F7B933DEE1BD15937ABC6D471F7AA1DC (EventCallback_tF67DD1350E7870B69EB1BFB2871FF3DA891E70E6 * __this, uint8_t ___eventCode0, RuntimeObject * ___content1, int32_t ___senderId2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &___eventCode0);
	__d_args[1] = ___content1;
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___senderId2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void PhotonNetwork/EventCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCallback_EndInvoke_mF19C9EF15CA688EAAECE3A8489D1E553A34D2F86 (EventCallback_tF67DD1350E7870B69EB1BFB2871FF3DA891E70E6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void PhotonPingManager/<PingSocket>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPingSocketU3Ed__10__ctor_m1A7C17A999D897EA8FCADE29EE85FFC9925AC1D7 (U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PhotonPingManager/<PingSocket>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPingSocketU3Ed__10_System_IDisposable_Dispose_m62DFC4A3D017D06A8A9CD72F741026DC7F1F158B (U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PhotonPingManager/<PingSocket>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPingSocketU3Ed__10_MoveNext_m111460DF71137CF8AF8F60FE6A7A6C4422B8E97D (U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral574AF626B2ECA36F40D5D593643BB7683F9514E2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Exception_t * V_5 = NULL;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Exception_t * G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	Exception_t * G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	String_t* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_01c1;
			}
			case 2:
			{
				goto IL_025c;
			}
			case 3:
			{
				goto IL_02b5;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// region.Ping = Attempts*MaxMilliseconsPerPing;
		Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * L_3 = __this->get_region_2();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var);
		int32_t L_4 = ((PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields*)il2cpp_codegen_static_fields_for(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var))->get_Attempts_1();
		int32_t L_5 = ((PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields*)il2cpp_codegen_static_fields_for(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var))->get_MaxMilliseconsPerPing_3();
		NullCheck(L_3);
		L_3->set_Ping_3(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_5)));
		// this.PingsRunning++; 
		PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_6 = V_1;
		PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_PingsRunning_5();
		NullCheck(L_6);
		L_6->set_PingsRunning_5(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		// PhotonPing ping = null;
		__this->set_U3CpingU3E5__2_4((PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E *)NULL);
		// if (PhotonHandler.PingImplementation == typeof(PingMono))
		IL2CPP_RUNTIME_CLASS_INIT(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_il2cpp_TypeInfo_var);
		Type_t * L_9 = ((PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields*)il2cpp_codegen_static_fields_for(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_il2cpp_TypeInfo_var))->get_PingImplementation_12();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0079;
		}
	}
	{
		// ping = new PingMono(); 
		PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9 * L_13 = (PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9 *)il2cpp_codegen_object_new(PingMono_t73EEE2429337491FBD08F00404E5CA54D6F2D2E9_il2cpp_TypeInfo_var);
		PingMono__ctor_mF43BDC17E322F0AD458A6C83EB7F6CA7BB8491F2(L_13, /*hidden argument*/NULL);
		__this->set_U3CpingU3E5__2_4(L_13);
	}

IL_0079:
	{
		// if (ping == null)
		PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E * L_14 = __this->get_U3CpingU3E5__2_4();
		if (L_14)
		{
			goto IL_0096;
		}
	}
	{
		// ping = (PhotonPing)Activator.CreateInstance(PhotonHandler.PingImplementation);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_il2cpp_TypeInfo_var);
		Type_t * L_15 = ((PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_StaticFields*)il2cpp_codegen_static_fields_for(PhotonHandler_t82A4D62536B33AA391ECC87F11420679ACFDBCFB_il2cpp_TypeInfo_var))->get_PingImplementation_12();
		RuntimeObject * L_16;
		L_16 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_15, /*hidden argument*/NULL);
		__this->set_U3CpingU3E5__2_4(((PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E *)CastclassClass((RuntimeObject*)L_16, PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E_il2cpp_TypeInfo_var)));
	}

IL_0096:
	{
		// float rttSum = 0.0f;
		__this->set_U3CrttSumU3E5__3_5((0.0f));
		// int replyCount = 0;
		__this->set_U3CreplyCountU3E5__4_6(0);
		// string regionAddress = region.HostAndPort;
		Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * L_17 = __this->get_region_2();
		NullCheck(L_17);
		String_t* L_18 = L_17->get_HostAndPort_2();
		__this->set_U3CregionAddressU3E5__5_7(L_18);
		// int indexOfColon = regionAddress.LastIndexOf(':');
		String_t* L_19 = __this->get_U3CregionAddressU3E5__5_7();
		NullCheck(L_19);
		int32_t L_20;
		L_20 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_19, ((int32_t)58), /*hidden argument*/NULL);
		V_2 = L_20;
		// if (indexOfColon > 1)
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) <= ((int32_t)1)))
		{
			goto IL_00de;
		}
	}
	{
		// regionAddress = regionAddress.Substring(0, indexOfColon);
		String_t* L_22 = __this->get_U3CregionAddressU3E5__5_7();
		int32_t L_23 = V_2;
		NullCheck(L_22);
		String_t* L_24;
		L_24 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_22, 0, L_23, /*hidden argument*/NULL);
		__this->set_U3CregionAddressU3E5__5_7(L_24);
	}

IL_00de:
	{
		// int indexOfProtocol = regionAddress.IndexOf(PhotonPingManager.wssProtocolString);
		String_t* L_25 = __this->get_U3CregionAddressU3E5__5_7();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_25, _stringLiteral574AF626B2ECA36F40D5D593643BB7683F9514E2, /*hidden argument*/NULL);
		V_3 = L_26;
		// if (indexOfProtocol > -1)
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) <= ((int32_t)(-1))))
		{
			goto IL_0110;
		}
	}
	{
		// regionAddress = regionAddress.Substring(indexOfProtocol+PhotonPingManager.wssProtocolString.Length);
		String_t* L_28 = __this->get_U3CregionAddressU3E5__5_7();
		int32_t L_29 = V_3;
		NullCheck(_stringLiteral574AF626B2ECA36F40D5D593643BB7683F9514E2);
		int32_t L_30;
		L_30 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(_stringLiteral574AF626B2ECA36F40D5D593643BB7683F9514E2, /*hidden argument*/NULL);
		NullCheck(L_28);
		String_t* L_31;
		L_31 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_28, ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30)), /*hidden argument*/NULL);
		__this->set_U3CregionAddressU3E5__5_7(L_31);
	}

IL_0110:
	{
		// regionAddress = ResolveHost(regionAddress);
		String_t* L_32 = __this->get_U3CregionAddressU3E5__5_7();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var);
		String_t* L_33;
		L_33 = PhotonPingManager_ResolveHost_m56CFA0B734BD288767ED20862BBF6E0665C775F7(L_32, /*hidden argument*/NULL);
		__this->set_U3CregionAddressU3E5__5_7(L_33);
		// for (int i = 0; i < Attempts; i++)
		__this->set_U3CiU3E5__6_8(0);
		goto IL_027c;
	}

IL_012d:
	{
		// bool overtime = false;
		__this->set_U3CovertimeU3E5__7_9((bool)0);
		// Stopwatch sw = new Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_34 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_34, /*hidden argument*/NULL);
		__this->set_U3CswU3E5__8_10(L_34);
		// sw.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_35 = __this->get_U3CswU3E5__8_10();
		NullCheck(L_35);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_35, /*hidden argument*/NULL);
	}

IL_014a:
	try
	{ // begin try (depth: 1)
		// ping.StartPing(regionAddress);
		PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E * L_36 = __this->get_U3CpingU3E5__2_4();
		String_t* L_37 = __this->get_U3CregionAddressU3E5__5_7();
		NullCheck(L_36);
		bool L_38;
		L_38 = VirtFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean Photon.Realtime.PhotonPing::StartPing(System.String) */, L_36, L_37);
		// }
		goto IL_01c8;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_015e;
		throw e;
	}

CATCH_015e:
	{ // begin catch(System.Exception)
		{
			// catch (Exception e)
			V_5 = ((Exception_t *)__exception_local);
			// Debug.Log("catched: " + e);
			Exception_t * L_39 = V_5;
			Exception_t * L_40 = L_39;
			G_B14_0 = L_40;
			G_B14_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral01BC6FF5AB7C7B79FA9D79F6E208A0C99F1F2A6F));
			if (L_40)
			{
				G_B15_0 = L_40;
				G_B15_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral01BC6FF5AB7C7B79FA9D79F6E208A0C99F1F2A6F));
				goto IL_016e;
			}
		}

IL_016a:
		{
			G_B16_0 = ((String_t*)(NULL));
			G_B16_1 = G_B14_1;
			goto IL_0173;
		}

IL_016e:
		{
			NullCheck(G_B15_0);
			String_t* L_41;
			L_41 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B15_0);
			G_B16_0 = L_41;
			G_B16_1 = G_B15_1;
		}

IL_0173:
		{
			String_t* L_42;
			L_42 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B16_1, G_B16_0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_42, /*hidden argument*/NULL);
			// this.PingsRunning--;
			PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_43 = V_1;
			PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_44 = V_1;
			NullCheck(L_44);
			int32_t L_45 = L_44->get_PingsRunning_5();
			NullCheck(L_43);
			L_43->set_PingsRunning_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1)));
			// break;
			goto IL_028c;
		}
	} // end catch (depth: 1)

IL_0190:
	{
		// if (sw.ElapsedMilliseconds >= MaxMilliseconsPerPing)
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_46 = __this->get_U3CswU3E5__8_10();
		NullCheck(L_46);
		int64_t L_47;
		L_47 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var);
		int32_t L_48 = ((PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields*)il2cpp_codegen_static_fields_for(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var))->get_MaxMilliseconsPerPing_3();
		if ((((int64_t)L_47) < ((int64_t)((int64_t)((int64_t)L_48)))))
		{
			goto IL_01ac;
		}
	}
	{
		// overtime = true;
		__this->set_U3CovertimeU3E5__7_9((bool)1);
		// break;
		goto IL_01d5;
	}

IL_01ac:
	{
		// yield return 0; 
		int32_t L_49 = 0;
		RuntimeObject * L_50 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_49);
		__this->set_U3CU3E2__current_1(L_50);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_01c1:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01c8:
	{
		// while (!ping.Done())
		PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E * L_51 = __this->get_U3CpingU3E5__2_4();
		NullCheck(L_51);
		bool L_52;
		L_52 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Photon.Realtime.PhotonPing::Done() */, L_51);
		if (!L_52)
		{
			goto IL_0190;
		}
	}

IL_01d5:
	{
		// int rtt = (int)sw.ElapsedMilliseconds;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_53 = __this->get_U3CswU3E5__8_10();
		NullCheck(L_53);
		int64_t L_54;
		L_54 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_53, /*hidden argument*/NULL);
		V_4 = ((int32_t)((int32_t)L_54));
		// if (IgnoreInitialAttempt && i == 0)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var);
		bool L_55 = ((PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields*)il2cpp_codegen_static_fields_for(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var))->get_IgnoreInitialAttempt_2();
		if (!L_55)
		{
			goto IL_01f2;
		}
	}
	{
		int32_t L_56 = __this->get_U3CiU3E5__6_8();
		if (!L_56)
		{
			goto IL_0243;
		}
	}

IL_01f2:
	{
		// else if (ping.Successful && !overtime)
		PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E * L_57 = __this->get_U3CpingU3E5__2_4();
		NullCheck(L_57);
		bool L_58 = L_57->get_Successful_1();
		if (!L_58)
		{
			goto IL_0243;
		}
	}
	{
		bool L_59 = __this->get_U3CovertimeU3E5__7_9();
		if (L_59)
		{
			goto IL_0243;
		}
	}
	{
		// rttSum += rtt;
		float L_60 = __this->get_U3CrttSumU3E5__3_5();
		int32_t L_61 = V_4;
		__this->set_U3CrttSumU3E5__3_5(((float)il2cpp_codegen_add((float)L_60, (float)((float)((float)L_61)))));
		// replyCount++;
		int32_t L_62 = __this->get_U3CreplyCountU3E5__4_6();
		V_6 = L_62;
		int32_t L_63 = V_6;
		__this->set_U3CreplyCountU3E5__4_6(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1)));
		// region.Ping = (int)((rttSum) / replyCount);
		Region_t7DDE934EC3FADAFBECB99C9AEFA746FA6BEA5A6B * L_64 = __this->get_region_2();
		float L_65 = __this->get_U3CrttSumU3E5__3_5();
		int32_t L_66 = __this->get_U3CreplyCountU3E5__4_6();
		NullCheck(L_64);
		L_64->set_Ping_3(((int32_t)((int32_t)((float)((float)L_65/(float)((float)((float)L_66)))))));
	}

IL_0243:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_67 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_67, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_67);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_025c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		__this->set_U3CswU3E5__8_10((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)NULL);
		// for (int i = 0; i < Attempts; i++)
		int32_t L_68 = __this->get_U3CiU3E5__6_8();
		V_6 = L_68;
		int32_t L_69 = V_6;
		__this->set_U3CiU3E5__6_8(((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1)));
	}

IL_027c:
	{
		// for (int i = 0; i < Attempts; i++)
		int32_t L_70 = __this->get_U3CiU3E5__6_8();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var);
		int32_t L_71 = ((PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_StaticFields*)il2cpp_codegen_static_fields_for(PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602_il2cpp_TypeInfo_var))->get_Attempts_1();
		if ((((int32_t)L_70) < ((int32_t)L_71)))
		{
			goto IL_012d;
		}
	}

IL_028c:
	{
		// ping.Dispose();
		PhotonPing_tF766053D112E4CC544677E4EDD810539C2BC809E * L_72 = __this->get_U3CpingU3E5__2_4();
		NullCheck(L_72);
		VirtActionInvoker0::Invoke(7 /* System.Void Photon.Realtime.PhotonPing::Dispose() */, L_72);
		// this.PingsRunning--;
		PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_73 = V_1;
		PhotonPingManager_t1CD39EBEB0E7E5E8DF1521693E920BA9852D9602 * L_74 = V_1;
		NullCheck(L_74);
		int32_t L_75 = L_74->get_PingsRunning_5();
		NullCheck(L_73);
		L_73->set_PingsRunning_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)1)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_02b5:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object PhotonPingManager/<PingSocket>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPingSocketU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m76BF775D2AB2EF1D963924D7C091433A200C8AE2 (U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PhotonPingManager/<PingSocket>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPingSocketU3Ed__10_System_Collections_IEnumerator_Reset_m29CFD1353DD530E956CEBD64B3A168174249BF59 (U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPingSocketU3Ed__10_System_Collections_IEnumerator_Reset_m29CFD1353DD530E956CEBD64B3A168174249BF59_RuntimeMethod_var)));
	}
}
// System.Object PhotonPingManager/<PingSocket>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPingSocketU3Ed__10_System_Collections_IEnumerator_get_Current_mE34763C1767DC2E884E19C0D93DD20AC2D67BD6A (U3CPingSocketU3Ed__10_tB633122525B079AAE8A0B7A5936024F463E1122A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RoomIndexingChanged_tEC0A0DABA5D2D40732CDAFC991C72E9A9A4A54F7 (RoomIndexingChanged_tEC0A0DABA5D2D40732CDAFC991C72E9A9A4A54F7 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing/RoomIndexingChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomIndexingChanged__ctor_m7465336E0CA53779097DA78F994CE7AB24C88466 (RoomIndexingChanged_tEC0A0DABA5D2D40732CDAFC991C72E9A9A4A54F7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing/RoomIndexingChanged::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomIndexingChanged_Invoke_m5B339AB01F644E40D48B103A667B38D42EC502D6 (RoomIndexingChanged_tEC0A0DABA5D2D40732CDAFC991C72E9A9A4A54F7 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ExitGames.UtilityScripts.PlayerRoomIndexing/RoomIndexingChanged::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RoomIndexingChanged_BeginInvoke_m8086D3C1CCEB86E7202B068B1C6B2A6B4158E41B (RoomIndexingChanged_tEC0A0DABA5D2D40732CDAFC991C72E9A9A4A54F7 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing/RoomIndexingChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomIndexingChanged_EndInvoke_mE476962BF31799BD08E5D54338C38514134AAED3 (RoomIndexingChanged_tEC0A0DABA5D2D40732CDAFC991C72E9A9A4A54F7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void RpsCore/<CycleRemoteHandCoroutine>d__42::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCycleRemoteHandCoroutineU3Ed__42__ctor_mC9E7B84681306B130A683B80C76BEAD579DA03F4 (U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void RpsCore/<CycleRemoteHandCoroutine>d__42::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCycleRemoteHandCoroutineU3Ed__42_System_IDisposable_Dispose_m150D6FB6B08602972CBD2FDDD679E2D03F89B881 (U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean RpsCore/<CycleRemoteHandCoroutine>d__42::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCycleRemoteHandCoroutineU3Ed__42_MoveNext_m825AAD2304D473E4D44CBDF493F02394D335E104 (U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// this.randomHand = (Hand)Random.Range(1, 4);
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_4 = V_1;
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 4, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_randomHand_27(L_5);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0044:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_001e;
	}
}
// System.Object RpsCore/<CycleRemoteHandCoroutine>d__42::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCycleRemoteHandCoroutineU3Ed__42_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9F2647A8EA3873FE06E39924993D5AA42AE41DE7 (U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void RpsCore/<CycleRemoteHandCoroutine>d__42::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCycleRemoteHandCoroutineU3Ed__42_System_Collections_IEnumerator_Reset_m498C1C52E1A0B7E0A3630B5DAC884E47C3737417 (U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCycleRemoteHandCoroutineU3Ed__42_System_Collections_IEnumerator_Reset_m498C1C52E1A0B7E0A3630B5DAC884E47C3737417_RuntimeMethod_var)));
	}
}
// System.Object RpsCore/<CycleRemoteHandCoroutine>d__42::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCycleRemoteHandCoroutineU3Ed__42_System_Collections_IEnumerator_get_Current_mDA7130357BF91C21A8D4A1F48A1B0F124DEFD348 (U3CCycleRemoteHandCoroutineU3Ed__42_tA3390A5DABE7371C212E27AA1187F57FBCD558D2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowResultsBeginNextTurnCoroutineU3Ed__37__ctor_mA059F5D9C24480CA04564D8CA5221646F4CF021F (U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowResultsBeginNextTurnCoroutineU3Ed__37_System_IDisposable_Dispose_mA0F0CF34A7F7AAAF8F8551F18ACE8DB34F096DAD (U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowResultsBeginNextTurnCoroutineU3Ed__37_MoveNext_mACF8191F6821517CD741BD242FB36C56C50EDECD (U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * V_1 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B7_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B6_0 = NULL;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * G_B8_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B8_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_009c;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ButtonCanvasGroup.interactable = false;
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_4 = V_1;
		NullCheck(L_4);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_5 = L_4->get_ButtonCanvasGroup_7();
		NullCheck(L_5);
		CanvasGroup_set_interactable_m139F4C59174EFB13F80AD10837BD0760E0B97835(L_5, (bool)0, /*hidden argument*/NULL);
		// IsShowingResults = true;
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_6 = V_1;
		NullCheck(L_6);
		L_6->set_IsShowingResults_28((bool)1);
		// if (this.result == ResultType.Draw)
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_result_25();
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0050;
		}
	}
	{
		// this.WinOrLossImage.sprite = this.SpriteDraw;
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_9 = V_1;
		NullCheck(L_9);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = L_9->get_WinOrLossImage_13();
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_11 = V_1;
		NullCheck(L_11);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_12 = L_11->get_SpriteDraw_23();
		NullCheck(L_10);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_10, L_12, /*hidden argument*/NULL);
		// }
		goto IL_0072;
	}

IL_0050:
	{
		// this.WinOrLossImage.sprite = this.result == ResultType.LocalWin ? this.SpriteWin : SpriteLose;
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_13 = V_1;
		NullCheck(L_13);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_14 = L_13->get_WinOrLossImage_13();
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_result_25();
		G_B6_0 = L_14;
		if ((((int32_t)L_16) == ((int32_t)2)))
		{
			G_B7_0 = L_14;
			goto IL_0067;
		}
	}
	{
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_17 = V_1;
		NullCheck(L_17);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_18 = L_17->get_SpriteLose_22();
		G_B8_0 = L_18;
		G_B8_1 = G_B6_0;
		goto IL_006d;
	}

IL_0067:
	{
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_19 = V_1;
		NullCheck(L_19);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_20 = L_19->get_SpriteWin_21();
		G_B8_0 = L_20;
		G_B8_1 = G_B7_0;
	}

IL_006d:
	{
		NullCheck(G_B8_1);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(G_B8_1, G_B8_0, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// this.WinOrLossImage.gameObject.SetActive(true);
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_21 = V_1;
		NullCheck(L_21);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_22 = L_21->get_WinOrLossImage_13();
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_23, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(2.0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_24 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_24, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_24);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_009c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// this.StartTurn();
		RpsCore_tA456E8338CA1AE384CBA0A26203BE8422F3397C7 * L_25 = V_1;
		NullCheck(L_25);
		RpsCore_StartTurn_m4BA719D78935E8F24224BDC8C62C5856D125BCF8(L_25, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowResultsBeginNextTurnCoroutineU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF264B040EDE4CEB05986F37C348DECE1490A2D47 (U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowResultsBeginNextTurnCoroutineU3Ed__37_System_Collections_IEnumerator_Reset_m5D39DC7C1CB46FBBF1FFA7A528FB6769C5FABD82 (U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowResultsBeginNextTurnCoroutineU3Ed__37_System_Collections_IEnumerator_Reset_m5D39DC7C1CB46FBBF1FFA7A528FB6769C5FABD82_RuntimeMethod_var)));
	}
}
// System.Object RpsCore/<ShowResultsBeginNextTurnCoroutine>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowResultsBeginNextTurnCoroutineU3Ed__37_System_Collections_IEnumerator_get_Current_m4BF11312E0F71E5DB1EDA4A05B3D5BAFB99325E9 (U3CShowResultsBeginNextTurnCoroutineU3Ed__37_t85FC640D7BE7D7A82DFF4FF0A70F0498C7E0B690 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void instantiateEffectCallerExplosion1/chainEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void chainEffect__ctor_m410BAFC5FDB4DC5F57860A794E5D050C39794EC2 (chainEffect_t42C1672A3460D7C694DE42569C67EA97E5218AB0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void projectileActorExplosion1/projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void projectile__ctor_m6457554E6D9C039C1074859069206AC4F1BB93DD (projectile_t8DE287385AC9DE674E4D58821DA5145E928AE106 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PhotonView_get_viewID_m81F66C59CEF3FA3AC70544C2E4ACEBCEA2A814C4_inline (PhotonView_t6D5B99974DE1BF1D2B0AB5B5EC9777E841321845 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.viewIdField; }
		int32_t L_0 = __this->get_viewIdField_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 * NetworkingPeer_get_AvailableRegions_m935F79ABE76A6D003C55BA0DE208D216D066C7B4_inline (NetworkingPeer_tFAAE5828F13409B90951ADA1A11532743BF16467 * __this, const RuntimeMethod* method)
{
	{
		// public List<Region> AvailableRegions { get; protected internal set; }
		List_1_tB87B935AB24F4E8114B1B55EE21BD60474052B54 * L_0 = __this->get_U3CAvailableRegionsU3Ek__BackingField_82();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
