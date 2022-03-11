#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Object,System.Object,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Object,System.Object,DG.Tweening.Plugins.Options.StringOptions>
struct ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>
struct ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>
struct ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>
struct ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10;
// DG.Tweening.Core.DOGetter`1<DG.Tweening.Color2>
struct DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5;
// DG.Tweening.Core.DOGetter`1<System.Double>
struct DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE;
// DG.Tweening.Core.DOGetter`1<System.Int32>
struct DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE;
// DG.Tweening.Core.DOGetter`1<System.Int64>
struct DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B;
// DG.Tweening.Core.DOGetter`1<System.Object>
struct DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Rect>
struct DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB;
// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF;
// DG.Tweening.Core.DOGetter`1<System.UInt32>
struct DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940;
// DG.Tweening.Core.DOGetter`1<System.UInt64>
struct DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector4>
struct DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF;
// DG.Tweening.Core.DOSetter`1<DG.Tweening.Color2>
struct DOSetter_1_t199F83E107F9B9D685BFE2B08A80CB3E56F2D0E1;
// DG.Tweening.Core.DOSetter`1<System.Double>
struct DOSetter_1_tEB531C9333D39107AFB45DB640635F4E8125624A;
// DG.Tweening.Core.DOSetter`1<System.Int32>
struct DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8;
// DG.Tweening.Core.DOSetter`1<System.Int64>
struct DOSetter_1_t7B88BDCE7E2B0CB1C48CB2DA8D10300F9AEC832F;
// DG.Tweening.Core.DOSetter`1<System.Object>
struct DOSetter_1_tA1C3C23D13C5F1464FCE61D087CAF987FB347080;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Rect>
struct DOSetter_1_t3C7F9B0CE7215C0D0AC5C7D7E96C515C82436485;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC;
// DG.Tweening.Core.DOSetter`1<System.UInt32>
struct DOSetter_1_tDDF46A9A2BD2CF40775822DBAC21F8E70FBE09C6;
// DG.Tweening.Core.DOSetter`1<System.UInt64>
struct DOSetter_1_t958CC463FE354998F7EF7ED30D9AAE18526C5533;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector4>
struct DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373;
// System.Func`3<UnityEngine.LogType,System.Object,System.Boolean>
struct Func_3_t7AE25F90C6BC6E455AC39E057818990818A9A733;
// System.Collections.Generic.List`1<DG.Tweening.TweenCallback>
struct List_1_t7A220E9BB7539479C818543CE3CBDF252554FD58;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597;
// DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF;
// DG.Tweening.Core.TweenerCore`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890;
// DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1;
// DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A;
// DG.Tweening.Core.TweenerCore`3<System.Object,System.Object,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824;
// DG.Tweening.Core.TweenerCore`3<System.Object,System.Object,DG.Tweening.Plugins.Options.StringOptions>
struct TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6;
// DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>
struct TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C;
// DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>
struct TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// DG.Tweening.Core.DOTweenComponent
struct DOTweenComponent_tEFFB81B283458D3C607F5D8960C4E28E10764F29;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DG.Tweening.EaseFunction
struct EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// DG.Tweening.Sequence
struct Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// DG.Tweening.Tween
struct Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941;
// DG.Tweening.TweenCallback
struct TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenManager_t3FB368091E5C88EE9C5F370B735BCEBD5EB00A5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE;
IL2CPP_EXTERN_C String_t* _stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B;
IL2CPP_EXTERN_C String_t* _stringLiteralC9365D4C1C592580176E99B94E4C370640A2640F;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
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


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Object,System.Object,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Object,System.Object,DG.Tweening.Plugins.Options.StringOptions>
struct ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>
struct ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>
struct ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>
struct ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tAA965823E05BE8ADD69F58C82BF0DF723476E551  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Threading.Volatile
struct Volatile_t7A8B2983396C4500A8FC226CDB66FE9067DA4AE6  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE 
{
public:
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_instancesCount_1() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___instancesCount_1)); }
	inline int32_t get_instancesCount_1() const { return ___instancesCount_1; }
	inline int32_t* get_address_of_instancesCount_1() { return &___instancesCount_1; }
	inline void set_instancesCount_1(int32_t value)
	{
		___instancesCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCount_2() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___visibleCount_2)); }
	inline int32_t get_visibleCount_2() const { return ___visibleCount_2; }
	inline int32_t* get_address_of_visibleCount_2() { return &___visibleCount_2; }
	inline void set_visibleCount_2(int32_t value)
	{
		___visibleCount_2 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.ColorOptions::alphaOnly
	bool ___alphaOnly_0;

public:
	inline static int32_t get_offset_of_alphaOnly_0() { return static_cast<int32_t>(offsetof(ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A, ___alphaOnly_0)); }
	inline bool get_alphaOnly_0() const { return ___alphaOnly_0; }
	inline bool* get_address_of_alphaOnly_0() { return &___alphaOnly_0; }
	inline void set_alphaOnly_0(bool value)
	{
		___alphaOnly_0 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_marshaled_pinvoke
{
	int32_t ___alphaOnly_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_marshaled_com
{
	int32_t ___alphaOnly_0;
};

// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.FloatOptions::snapping
	bool ___snapping_0;

public:
	inline static int32_t get_offset_of_snapping_0() { return static_cast<int32_t>(offsetof(FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603, ___snapping_0)); }
	inline bool get_snapping_0() const { return ___snapping_0; }
	inline bool* get_address_of_snapping_0() { return &___snapping_0; }
	inline void set_snapping_0(bool value)
	{
		___snapping_0 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_marshaled_com
{
	int32_t ___snapping_0;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
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
struct IntPtr_t 
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


// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 
{
public:
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;

public:
	inline static int32_t get_offset_of_m_red_0() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_red_0)); }
	inline float get_m_red_0() const { return ___m_red_0; }
	inline float* get_address_of_m_red_0() { return &___m_red_0; }
	inline void set_m_red_0(float value)
	{
		___m_red_0 = value;
	}

	inline static int32_t get_offset_of_m_green_1() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_green_1)); }
	inline float get_m_green_1() const { return ___m_green_1; }
	inline float* get_address_of_m_green_1() { return &___m_green_1; }
	inline void set_m_green_1(float value)
	{
		___m_green_1 = value;
	}

	inline static int32_t get_offset_of_m_blue_2() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_blue_2)); }
	inline float get_m_blue_2() const { return ___m_blue_2; }
	inline float* get_address_of_m_blue_2() { return &___m_blue_2; }
	inline void set_m_blue_2(float value)
	{
		___m_blue_2 = value;
	}

	inline static int32_t get_offset_of_m_intensity_3() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_intensity_3)); }
	inline float get_m_intensity_3() const { return ___m_intensity_3; }
	inline float* get_address_of_m_intensity_3() { return &___m_intensity_3; }
	inline void set_m_intensity_3(float value)
	{
		___m_intensity_3 = value;
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// DG.Tweening.Plugins.Options.NoOptions
struct NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// DG.Tweening.Plugins.Options.RectOptions
struct RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.RectOptions::snapping
	bool ___snapping_0;

public:
	inline static int32_t get_offset_of_snapping_0() { return static_cast<int32_t>(offsetof(RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C, ___snapping_0)); }
	inline bool get_snapping_0() const { return ___snapping_0; }
	inline bool* get_address_of_snapping_0() { return &___snapping_0; }
	inline void set_snapping_0(bool value)
	{
		___snapping_0 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.RectOptions
struct RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.RectOptions
struct RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_marshaled_com
{
	int32_t ___snapping_0;
};

// DG.Tweening.Core.SafeModeReport
struct SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC 
{
public:
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totMissingTargetOrFieldErrors>k__BackingField
	int32_t ___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0;
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totCallbackErrors>k__BackingField
	int32_t ___U3CtotCallbackErrorsU3Ek__BackingField_1;
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totStartupErrors>k__BackingField
	int32_t ___U3CtotStartupErrorsU3Ek__BackingField_2;
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totUnsetErrors>k__BackingField
	int32_t ___U3CtotUnsetErrorsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC, ___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0)); }
	inline int32_t get_U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0() const { return ___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0() { return &___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0; }
	inline void set_U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0(int32_t value)
	{
		___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtotCallbackErrorsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC, ___U3CtotCallbackErrorsU3Ek__BackingField_1)); }
	inline int32_t get_U3CtotCallbackErrorsU3Ek__BackingField_1() const { return ___U3CtotCallbackErrorsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CtotCallbackErrorsU3Ek__BackingField_1() { return &___U3CtotCallbackErrorsU3Ek__BackingField_1; }
	inline void set_U3CtotCallbackErrorsU3Ek__BackingField_1(int32_t value)
	{
		___U3CtotCallbackErrorsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CtotStartupErrorsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC, ___U3CtotStartupErrorsU3Ek__BackingField_2)); }
	inline int32_t get_U3CtotStartupErrorsU3Ek__BackingField_2() const { return ___U3CtotStartupErrorsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtotStartupErrorsU3Ek__BackingField_2() { return &___U3CtotStartupErrorsU3Ek__BackingField_2; }
	inline void set_U3CtotStartupErrorsU3Ek__BackingField_2(int32_t value)
	{
		___U3CtotStartupErrorsU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CtotUnsetErrorsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC, ___U3CtotUnsetErrorsU3Ek__BackingField_3)); }
	inline int32_t get_U3CtotUnsetErrorsU3Ek__BackingField_3() const { return ___U3CtotUnsetErrorsU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CtotUnsetErrorsU3Ek__BackingField_3() { return &___U3CtotUnsetErrorsU3Ek__BackingField_3; }
	inline void set_U3CtotUnsetErrorsU3Ek__BackingField_3(int32_t value)
	{
		___U3CtotUnsetErrorsU3Ek__BackingField_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// DG.Tweening.Plugins.Options.UintOptions
struct UintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.UintOptions::isNegativeChangeValue
	bool ___isNegativeChangeValue_0;

public:
	inline static int32_t get_offset_of_isNegativeChangeValue_0() { return static_cast<int32_t>(offsetof(UintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9, ___isNegativeChangeValue_0)); }
	inline bool get_isNegativeChangeValue_0() const { return ___isNegativeChangeValue_0; }
	inline bool* get_address_of_isNegativeChangeValue_0() { return &___isNegativeChangeValue_0; }
	inline void set_isNegativeChangeValue_0(bool value)
	{
		___isNegativeChangeValue_0 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.UintOptions
struct UintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9_marshaled_pinvoke
{
	int32_t ___isNegativeChangeValue_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.UintOptions
struct UintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9_marshaled_com
{
	int32_t ___isNegativeChangeValue_0;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// DG.Tweening.AutoPlay
struct AutoPlay_t82EC6434A741EB9DED6F3BE07E59E70446ABC80C 
{
public:
	// System.Int32 DG.Tweening.AutoPlay::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoPlay_t82EC6434A741EB9DED6F3BE07E59E70446ABC80C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.AxisConstraint
struct AxisConstraint_tA0D384964013674923F26C7DF2618FB76CD3D7F4 
{
public:
	// System.Int32 DG.Tweening.AxisConstraint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisConstraint_tA0D384964013674923F26C7DF2618FB76CD3D7F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Plugins.CircleOptions
struct CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436 
{
public:
	// System.Single DG.Tweening.Plugins.CircleOptions::endValueDegrees
	float ___endValueDegrees_0;
	// System.Boolean DG.Tweening.Plugins.CircleOptions::relativeCenter
	bool ___relativeCenter_1;
	// System.Boolean DG.Tweening.Plugins.CircleOptions::snapping
	bool ___snapping_2;
	// UnityEngine.Vector2 DG.Tweening.Plugins.CircleOptions::center
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center_3;
	// System.Single DG.Tweening.Plugins.CircleOptions::radius
	float ___radius_4;
	// System.Single DG.Tweening.Plugins.CircleOptions::startValueDegrees
	float ___startValueDegrees_5;
	// System.Boolean DG.Tweening.Plugins.CircleOptions::initialized
	bool ___initialized_6;

public:
	inline static int32_t get_offset_of_endValueDegrees_0() { return static_cast<int32_t>(offsetof(CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436, ___endValueDegrees_0)); }
	inline float get_endValueDegrees_0() const { return ___endValueDegrees_0; }
	inline float* get_address_of_endValueDegrees_0() { return &___endValueDegrees_0; }
	inline void set_endValueDegrees_0(float value)
	{
		___endValueDegrees_0 = value;
	}

	inline static int32_t get_offset_of_relativeCenter_1() { return static_cast<int32_t>(offsetof(CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436, ___relativeCenter_1)); }
	inline bool get_relativeCenter_1() const { return ___relativeCenter_1; }
	inline bool* get_address_of_relativeCenter_1() { return &___relativeCenter_1; }
	inline void set_relativeCenter_1(bool value)
	{
		___relativeCenter_1 = value;
	}

	inline static int32_t get_offset_of_snapping_2() { return static_cast<int32_t>(offsetof(CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436, ___snapping_2)); }
	inline bool get_snapping_2() const { return ___snapping_2; }
	inline bool* get_address_of_snapping_2() { return &___snapping_2; }
	inline void set_snapping_2(bool value)
	{
		___snapping_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436, ___center_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_center_3() const { return ___center_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436, ___radius_4)); }
	inline float get_radius_4() const { return ___radius_4; }
	inline float* get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(float value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_startValueDegrees_5() { return static_cast<int32_t>(offsetof(CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436, ___startValueDegrees_5)); }
	inline float get_startValueDegrees_5() const { return ___startValueDegrees_5; }
	inline float* get_address_of_startValueDegrees_5() { return &___startValueDegrees_5; }
	inline void set_startValueDegrees_5(float value)
	{
		___startValueDegrees_5 = value;
	}

	inline static int32_t get_offset_of_initialized_6() { return static_cast<int32_t>(offsetof(CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436, ___initialized_6)); }
	inline bool get_initialized_6() const { return ___initialized_6; }
	inline bool* get_address_of_initialized_6() { return &___initialized_6; }
	inline void set_initialized_6(bool value)
	{
		___initialized_6 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.CircleOptions
struct CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436_marshaled_pinvoke
{
	float ___endValueDegrees_0;
	int32_t ___relativeCenter_1;
	int32_t ___snapping_2;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center_3;
	float ___radius_4;
	float ___startValueDegrees_5;
	int32_t ___initialized_6;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.CircleOptions
struct CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436_marshaled_com
{
	float ___endValueDegrees_0;
	int32_t ___relativeCenter_1;
	int32_t ___snapping_2;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center_3;
	float ___radius_4;
	float ___startValueDegrees_5;
	int32_t ___initialized_6;
};

// DG.Tweening.Color2
struct Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9 
{
public:
	// UnityEngine.Color DG.Tweening.Color2::ca
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ca_0;
	// UnityEngine.Color DG.Tweening.Color2::cb
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___cb_1;

public:
	inline static int32_t get_offset_of_ca_0() { return static_cast<int32_t>(offsetof(Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9, ___ca_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ca_0() const { return ___ca_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ca_0() { return &___ca_0; }
	inline void set_ca_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ca_0 = value;
	}

	inline static int32_t get_offset_of_cb_1() { return static_cast<int32_t>(offsetof(Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9, ___cb_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_cb_1() const { return ___cb_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_cb_1() { return &___cb_1; }
	inline void set_cb_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___cb_1 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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

// DG.Tweening.Ease
struct Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4 
{
public:
	// System.Int32 DG.Tweening.Ease::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
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

// UnityEngine.Experimental.GlobalIllumination.FalloffType
struct FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.FalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightMode
struct LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightType
struct LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.LogBehaviour
struct LogBehaviour_tE75FAAAFF4FA56D1EB213B38425928B7FF6B17C1 
{
public:
	// System.Int32 DG.Tweening.LogBehaviour::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogBehaviour_tE75FAAAFF4FA56D1EB213B38425928B7FF6B17C1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.LoopType
struct LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A 
{
public:
	// System.Int32 DG.Tweening.LoopType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.NestedTweenFailureBehaviour
struct NestedTweenFailureBehaviour_t226FD9A7294FEF476C4E6D8B943EC4702E369E4D 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.NestedTweenFailureBehaviour::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NestedTweenFailureBehaviour_t226FD9A7294FEF476C4E6D8B943EC4702E369E4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Plugins.Options.OrientType
struct OrientType_t98C6DBF0A80C2A938CA315BCE990CF0201D52886 
{
public:
	// System.Int32 DG.Tweening.Plugins.Options.OrientType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientType_t98C6DBF0A80C2A938CA315BCE990CF0201D52886, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.PathMode
struct PathMode_tC3536FD34C73F94ADFB5C7DC9415985E353CE572 
{
public:
	// System.Int32 DG.Tweening.PathMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PathMode_tC3536FD34C73F94ADFB5C7DC9415985E353CE572, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// DG.Tweening.Core.Enums.RewindCallbackMode
struct RewindCallbackMode_tE4C3B57E2525E673DB571768A7DA431F03CABC6A 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.RewindCallbackMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RewindCallbackMode_tE4C3B57E2525E673DB571768A7DA431F03CABC6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.RotateMode
struct RotateMode_t16C0F7B9855AE83E1CA407FF541E1060DCE32B1C 
{
public:
	// System.Int32 DG.Tweening.RotateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotateMode_t16C0F7B9855AE83E1CA407FF541E1060DCE32B1C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.SafeModeLogBehaviour
struct SafeModeLogBehaviour_t0BAF69EBAAA15F4C73688CDC5E2F03EF62AD4B08 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.SafeModeLogBehaviour::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SafeModeLogBehaviour_t0BAF69EBAAA15F4C73688CDC5E2F03EF62AD4B08, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.ScrambleMode
struct ScrambleMode_tEE3686B6B55694EA9621FDD3679FAE06FF42F866 
{
public:
	// System.Int32 DG.Tweening.ScrambleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScrambleMode_tEE3686B6B55694EA9621FDD3679FAE06FF42F866, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.SpecialStartupMode
struct SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.SpecialStartupMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.TweenType
struct TweenType_tAB2DEC1268409EA172594368494218E51696EF5D 
{
public:
	// System.Int32 DG.Tweening.TweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenType_tAB2DEC1268409EA172594368494218E51696EF5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.UpdateMode
struct UpdateMode_tEEC2470CE28E891BEC02FE0AC9F3C0159DB328E5 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.UpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateMode_tEEC2470CE28E891BEC02FE0AC9F3C0159DB328E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.UpdateType
struct UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED 
{
public:
	// System.Int32 DG.Tweening.UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.SafeModeReport/SafeModeReportType
struct SafeModeReportType_t40471AA507F72C513F9929567F62AE57D339FA74 
{
public:
	// System.Int32 DG.Tweening.Core.SafeModeReport/SafeModeReportType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SafeModeReportType_t40471AA507F72C513F9929567F62AE57D339FA74, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76  : public RuntimeObject
{
public:
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStart_3;

public:
	inline static int32_t get_offset_of_tweenType_0() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___tweenType_0)); }
	inline int32_t get_tweenType_0() const { return ___tweenType_0; }
	inline int32_t* get_address_of_tweenType_0() { return &___tweenType_0; }
	inline void set_tweenType_0(int32_t value)
	{
		___tweenType_0 = value;
	}

	inline static int32_t get_offset_of_sequencedPosition_1() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedPosition_1)); }
	inline float get_sequencedPosition_1() const { return ___sequencedPosition_1; }
	inline float* get_address_of_sequencedPosition_1() { return &___sequencedPosition_1; }
	inline void set_sequencedPosition_1(float value)
	{
		___sequencedPosition_1 = value;
	}

	inline static int32_t get_offset_of_sequencedEndPosition_2() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedEndPosition_2)); }
	inline float get_sequencedEndPosition_2() const { return ___sequencedEndPosition_2; }
	inline float* get_address_of_sequencedEndPosition_2() { return &___sequencedEndPosition_2; }
	inline void set_sequencedEndPosition_2(float value)
	{
		___sequencedEndPosition_2 = value;
	}

	inline static int32_t get_offset_of_onStart_3() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___onStart_3)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStart_3() const { return ___onStart_3; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStart_3() { return &___onStart_3; }
	inline void set_onStart_3(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStart_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_3), (void*)value);
	}
};


// DG.Tweening.DOTween
struct DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203  : public RuntimeObject
{
public:

public:
};

struct DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields
{
public:
	// System.String DG.Tweening.DOTween::Version
	String_t* ___Version_0;
	// System.Boolean DG.Tweening.DOTween::useSafeMode
	bool ___useSafeMode_1;
	// DG.Tweening.Core.Enums.SafeModeLogBehaviour DG.Tweening.DOTween::safeModeLogBehaviour
	int32_t ___safeModeLogBehaviour_2;
	// DG.Tweening.Core.Enums.NestedTweenFailureBehaviour DG.Tweening.DOTween::nestedTweenFailureBehaviour
	int32_t ___nestedTweenFailureBehaviour_3;
	// System.Boolean DG.Tweening.DOTween::showUnityEditorReport
	bool ___showUnityEditorReport_4;
	// System.Single DG.Tweening.DOTween::timeScale
	float ___timeScale_5;
	// System.Boolean DG.Tweening.DOTween::useSmoothDeltaTime
	bool ___useSmoothDeltaTime_6;
	// System.Single DG.Tweening.DOTween::maxSmoothUnscaledTime
	float ___maxSmoothUnscaledTime_7;
	// DG.Tweening.Core.Enums.RewindCallbackMode DG.Tweening.DOTween::rewindCallbackMode
	int32_t ___rewindCallbackMode_8;
	// DG.Tweening.LogBehaviour DG.Tweening.DOTween::_logBehaviour
	int32_t ____logBehaviour_9;
	// System.Func`3<UnityEngine.LogType,System.Object,System.Boolean> DG.Tweening.DOTween::onWillLog
	Func_3_t7AE25F90C6BC6E455AC39E057818990818A9A733 * ___onWillLog_10;
	// System.Boolean DG.Tweening.DOTween::drawGizmos
	bool ___drawGizmos_11;
	// System.Boolean DG.Tweening.DOTween::debugMode
	bool ___debugMode_12;
	// System.Boolean DG.Tweening.DOTween::_fooDebugStoreTargetId
	bool ____fooDebugStoreTargetId_13;
	// DG.Tweening.UpdateType DG.Tweening.DOTween::defaultUpdateType
	int32_t ___defaultUpdateType_14;
	// System.Boolean DG.Tweening.DOTween::defaultTimeScaleIndependent
	bool ___defaultTimeScaleIndependent_15;
	// DG.Tweening.AutoPlay DG.Tweening.DOTween::defaultAutoPlay
	int32_t ___defaultAutoPlay_16;
	// System.Boolean DG.Tweening.DOTween::defaultAutoKill
	bool ___defaultAutoKill_17;
	// DG.Tweening.LoopType DG.Tweening.DOTween::defaultLoopType
	int32_t ___defaultLoopType_18;
	// System.Boolean DG.Tweening.DOTween::defaultRecyclable
	bool ___defaultRecyclable_19;
	// DG.Tweening.Ease DG.Tweening.DOTween::defaultEaseType
	int32_t ___defaultEaseType_20;
	// System.Single DG.Tweening.DOTween::defaultEaseOvershootOrAmplitude
	float ___defaultEaseOvershootOrAmplitude_21;
	// System.Single DG.Tweening.DOTween::defaultEasePeriod
	float ___defaultEasePeriod_22;
	// DG.Tweening.Core.DOTweenComponent DG.Tweening.DOTween::instance
	DOTweenComponent_tEFFB81B283458D3C607F5D8960C4E28E10764F29 * ___instance_23;
	// System.Boolean DG.Tweening.DOTween::_foo_isQuitting
	bool ____foo_isQuitting_24;
	// System.Int32 DG.Tweening.DOTween::maxActiveTweenersReached
	int32_t ___maxActiveTweenersReached_25;
	// System.Int32 DG.Tweening.DOTween::maxActiveSequencesReached
	int32_t ___maxActiveSequencesReached_26;
	// DG.Tweening.Core.SafeModeReport DG.Tweening.DOTween::safeModeReport
	SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC  ___safeModeReport_27;
	// System.Collections.Generic.List`1<DG.Tweening.TweenCallback> DG.Tweening.DOTween::GizmosDelegates
	List_1_t7A220E9BB7539479C818543CE3CBDF252554FD58 * ___GizmosDelegates_28;
	// System.Boolean DG.Tweening.DOTween::initialized
	bool ___initialized_29;
	// System.Int32 DG.Tweening.DOTween::_isQuittingFrame
	int32_t ____isQuittingFrame_30;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___Version_0)); }
	inline String_t* get_Version_0() const { return ___Version_0; }
	inline String_t** get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(String_t* value)
	{
		___Version_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Version_0), (void*)value);
	}

	inline static int32_t get_offset_of_useSafeMode_1() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___useSafeMode_1)); }
	inline bool get_useSafeMode_1() const { return ___useSafeMode_1; }
	inline bool* get_address_of_useSafeMode_1() { return &___useSafeMode_1; }
	inline void set_useSafeMode_1(bool value)
	{
		___useSafeMode_1 = value;
	}

	inline static int32_t get_offset_of_safeModeLogBehaviour_2() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___safeModeLogBehaviour_2)); }
	inline int32_t get_safeModeLogBehaviour_2() const { return ___safeModeLogBehaviour_2; }
	inline int32_t* get_address_of_safeModeLogBehaviour_2() { return &___safeModeLogBehaviour_2; }
	inline void set_safeModeLogBehaviour_2(int32_t value)
	{
		___safeModeLogBehaviour_2 = value;
	}

	inline static int32_t get_offset_of_nestedTweenFailureBehaviour_3() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___nestedTweenFailureBehaviour_3)); }
	inline int32_t get_nestedTweenFailureBehaviour_3() const { return ___nestedTweenFailureBehaviour_3; }
	inline int32_t* get_address_of_nestedTweenFailureBehaviour_3() { return &___nestedTweenFailureBehaviour_3; }
	inline void set_nestedTweenFailureBehaviour_3(int32_t value)
	{
		___nestedTweenFailureBehaviour_3 = value;
	}

	inline static int32_t get_offset_of_showUnityEditorReport_4() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___showUnityEditorReport_4)); }
	inline bool get_showUnityEditorReport_4() const { return ___showUnityEditorReport_4; }
	inline bool* get_address_of_showUnityEditorReport_4() { return &___showUnityEditorReport_4; }
	inline void set_showUnityEditorReport_4(bool value)
	{
		___showUnityEditorReport_4 = value;
	}

	inline static int32_t get_offset_of_timeScale_5() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___timeScale_5)); }
	inline float get_timeScale_5() const { return ___timeScale_5; }
	inline float* get_address_of_timeScale_5() { return &___timeScale_5; }
	inline void set_timeScale_5(float value)
	{
		___timeScale_5 = value;
	}

	inline static int32_t get_offset_of_useSmoothDeltaTime_6() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___useSmoothDeltaTime_6)); }
	inline bool get_useSmoothDeltaTime_6() const { return ___useSmoothDeltaTime_6; }
	inline bool* get_address_of_useSmoothDeltaTime_6() { return &___useSmoothDeltaTime_6; }
	inline void set_useSmoothDeltaTime_6(bool value)
	{
		___useSmoothDeltaTime_6 = value;
	}

	inline static int32_t get_offset_of_maxSmoothUnscaledTime_7() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___maxSmoothUnscaledTime_7)); }
	inline float get_maxSmoothUnscaledTime_7() const { return ___maxSmoothUnscaledTime_7; }
	inline float* get_address_of_maxSmoothUnscaledTime_7() { return &___maxSmoothUnscaledTime_7; }
	inline void set_maxSmoothUnscaledTime_7(float value)
	{
		___maxSmoothUnscaledTime_7 = value;
	}

	inline static int32_t get_offset_of_rewindCallbackMode_8() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___rewindCallbackMode_8)); }
	inline int32_t get_rewindCallbackMode_8() const { return ___rewindCallbackMode_8; }
	inline int32_t* get_address_of_rewindCallbackMode_8() { return &___rewindCallbackMode_8; }
	inline void set_rewindCallbackMode_8(int32_t value)
	{
		___rewindCallbackMode_8 = value;
	}

	inline static int32_t get_offset_of__logBehaviour_9() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ____logBehaviour_9)); }
	inline int32_t get__logBehaviour_9() const { return ____logBehaviour_9; }
	inline int32_t* get_address_of__logBehaviour_9() { return &____logBehaviour_9; }
	inline void set__logBehaviour_9(int32_t value)
	{
		____logBehaviour_9 = value;
	}

	inline static int32_t get_offset_of_onWillLog_10() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___onWillLog_10)); }
	inline Func_3_t7AE25F90C6BC6E455AC39E057818990818A9A733 * get_onWillLog_10() const { return ___onWillLog_10; }
	inline Func_3_t7AE25F90C6BC6E455AC39E057818990818A9A733 ** get_address_of_onWillLog_10() { return &___onWillLog_10; }
	inline void set_onWillLog_10(Func_3_t7AE25F90C6BC6E455AC39E057818990818A9A733 * value)
	{
		___onWillLog_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onWillLog_10), (void*)value);
	}

	inline static int32_t get_offset_of_drawGizmos_11() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___drawGizmos_11)); }
	inline bool get_drawGizmos_11() const { return ___drawGizmos_11; }
	inline bool* get_address_of_drawGizmos_11() { return &___drawGizmos_11; }
	inline void set_drawGizmos_11(bool value)
	{
		___drawGizmos_11 = value;
	}

	inline static int32_t get_offset_of_debugMode_12() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___debugMode_12)); }
	inline bool get_debugMode_12() const { return ___debugMode_12; }
	inline bool* get_address_of_debugMode_12() { return &___debugMode_12; }
	inline void set_debugMode_12(bool value)
	{
		___debugMode_12 = value;
	}

	inline static int32_t get_offset_of__fooDebugStoreTargetId_13() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ____fooDebugStoreTargetId_13)); }
	inline bool get__fooDebugStoreTargetId_13() const { return ____fooDebugStoreTargetId_13; }
	inline bool* get_address_of__fooDebugStoreTargetId_13() { return &____fooDebugStoreTargetId_13; }
	inline void set__fooDebugStoreTargetId_13(bool value)
	{
		____fooDebugStoreTargetId_13 = value;
	}

	inline static int32_t get_offset_of_defaultUpdateType_14() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultUpdateType_14)); }
	inline int32_t get_defaultUpdateType_14() const { return ___defaultUpdateType_14; }
	inline int32_t* get_address_of_defaultUpdateType_14() { return &___defaultUpdateType_14; }
	inline void set_defaultUpdateType_14(int32_t value)
	{
		___defaultUpdateType_14 = value;
	}

	inline static int32_t get_offset_of_defaultTimeScaleIndependent_15() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultTimeScaleIndependent_15)); }
	inline bool get_defaultTimeScaleIndependent_15() const { return ___defaultTimeScaleIndependent_15; }
	inline bool* get_address_of_defaultTimeScaleIndependent_15() { return &___defaultTimeScaleIndependent_15; }
	inline void set_defaultTimeScaleIndependent_15(bool value)
	{
		___defaultTimeScaleIndependent_15 = value;
	}

	inline static int32_t get_offset_of_defaultAutoPlay_16() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultAutoPlay_16)); }
	inline int32_t get_defaultAutoPlay_16() const { return ___defaultAutoPlay_16; }
	inline int32_t* get_address_of_defaultAutoPlay_16() { return &___defaultAutoPlay_16; }
	inline void set_defaultAutoPlay_16(int32_t value)
	{
		___defaultAutoPlay_16 = value;
	}

	inline static int32_t get_offset_of_defaultAutoKill_17() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultAutoKill_17)); }
	inline bool get_defaultAutoKill_17() const { return ___defaultAutoKill_17; }
	inline bool* get_address_of_defaultAutoKill_17() { return &___defaultAutoKill_17; }
	inline void set_defaultAutoKill_17(bool value)
	{
		___defaultAutoKill_17 = value;
	}

	inline static int32_t get_offset_of_defaultLoopType_18() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultLoopType_18)); }
	inline int32_t get_defaultLoopType_18() const { return ___defaultLoopType_18; }
	inline int32_t* get_address_of_defaultLoopType_18() { return &___defaultLoopType_18; }
	inline void set_defaultLoopType_18(int32_t value)
	{
		___defaultLoopType_18 = value;
	}

	inline static int32_t get_offset_of_defaultRecyclable_19() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultRecyclable_19)); }
	inline bool get_defaultRecyclable_19() const { return ___defaultRecyclable_19; }
	inline bool* get_address_of_defaultRecyclable_19() { return &___defaultRecyclable_19; }
	inline void set_defaultRecyclable_19(bool value)
	{
		___defaultRecyclable_19 = value;
	}

	inline static int32_t get_offset_of_defaultEaseType_20() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultEaseType_20)); }
	inline int32_t get_defaultEaseType_20() const { return ___defaultEaseType_20; }
	inline int32_t* get_address_of_defaultEaseType_20() { return &___defaultEaseType_20; }
	inline void set_defaultEaseType_20(int32_t value)
	{
		___defaultEaseType_20 = value;
	}

	inline static int32_t get_offset_of_defaultEaseOvershootOrAmplitude_21() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultEaseOvershootOrAmplitude_21)); }
	inline float get_defaultEaseOvershootOrAmplitude_21() const { return ___defaultEaseOvershootOrAmplitude_21; }
	inline float* get_address_of_defaultEaseOvershootOrAmplitude_21() { return &___defaultEaseOvershootOrAmplitude_21; }
	inline void set_defaultEaseOvershootOrAmplitude_21(float value)
	{
		___defaultEaseOvershootOrAmplitude_21 = value;
	}

	inline static int32_t get_offset_of_defaultEasePeriod_22() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___defaultEasePeriod_22)); }
	inline float get_defaultEasePeriod_22() const { return ___defaultEasePeriod_22; }
	inline float* get_address_of_defaultEasePeriod_22() { return &___defaultEasePeriod_22; }
	inline void set_defaultEasePeriod_22(float value)
	{
		___defaultEasePeriod_22 = value;
	}

	inline static int32_t get_offset_of_instance_23() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___instance_23)); }
	inline DOTweenComponent_tEFFB81B283458D3C607F5D8960C4E28E10764F29 * get_instance_23() const { return ___instance_23; }
	inline DOTweenComponent_tEFFB81B283458D3C607F5D8960C4E28E10764F29 ** get_address_of_instance_23() { return &___instance_23; }
	inline void set_instance_23(DOTweenComponent_tEFFB81B283458D3C607F5D8960C4E28E10764F29 * value)
	{
		___instance_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_23), (void*)value);
	}

	inline static int32_t get_offset_of__foo_isQuitting_24() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ____foo_isQuitting_24)); }
	inline bool get__foo_isQuitting_24() const { return ____foo_isQuitting_24; }
	inline bool* get_address_of__foo_isQuitting_24() { return &____foo_isQuitting_24; }
	inline void set__foo_isQuitting_24(bool value)
	{
		____foo_isQuitting_24 = value;
	}

	inline static int32_t get_offset_of_maxActiveTweenersReached_25() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___maxActiveTweenersReached_25)); }
	inline int32_t get_maxActiveTweenersReached_25() const { return ___maxActiveTweenersReached_25; }
	inline int32_t* get_address_of_maxActiveTweenersReached_25() { return &___maxActiveTweenersReached_25; }
	inline void set_maxActiveTweenersReached_25(int32_t value)
	{
		___maxActiveTweenersReached_25 = value;
	}

	inline static int32_t get_offset_of_maxActiveSequencesReached_26() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___maxActiveSequencesReached_26)); }
	inline int32_t get_maxActiveSequencesReached_26() const { return ___maxActiveSequencesReached_26; }
	inline int32_t* get_address_of_maxActiveSequencesReached_26() { return &___maxActiveSequencesReached_26; }
	inline void set_maxActiveSequencesReached_26(int32_t value)
	{
		___maxActiveSequencesReached_26 = value;
	}

	inline static int32_t get_offset_of_safeModeReport_27() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___safeModeReport_27)); }
	inline SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC  get_safeModeReport_27() const { return ___safeModeReport_27; }
	inline SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC * get_address_of_safeModeReport_27() { return &___safeModeReport_27; }
	inline void set_safeModeReport_27(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC  value)
	{
		___safeModeReport_27 = value;
	}

	inline static int32_t get_offset_of_GizmosDelegates_28() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___GizmosDelegates_28)); }
	inline List_1_t7A220E9BB7539479C818543CE3CBDF252554FD58 * get_GizmosDelegates_28() const { return ___GizmosDelegates_28; }
	inline List_1_t7A220E9BB7539479C818543CE3CBDF252554FD58 ** get_address_of_GizmosDelegates_28() { return &___GizmosDelegates_28; }
	inline void set_GizmosDelegates_28(List_1_t7A220E9BB7539479C818543CE3CBDF252554FD58 * value)
	{
		___GizmosDelegates_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GizmosDelegates_28), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_29() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ___initialized_29)); }
	inline bool get_initialized_29() const { return ___initialized_29; }
	inline bool* get_address_of_initialized_29() { return &___initialized_29; }
	inline void set_initialized_29(bool value)
	{
		___initialized_29 = value;
	}

	inline static int32_t get_offset_of__isQuittingFrame_30() { return static_cast<int32_t>(offsetof(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields, ____isQuittingFrame_30)); }
	inline int32_t get__isQuittingFrame_30() const { return ____isQuittingFrame_30; }
	inline int32_t* get_address_of__isQuittingFrame_30() { return &____isQuittingFrame_30; }
	inline void set__isQuittingFrame_30(int32_t value)
	{
		____isQuittingFrame_30 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_cookieID_1() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieID_1)); }
	inline int32_t get_cookieID_1() const { return ___cookieID_1; }
	inline int32_t* get_address_of_cookieID_1() { return &___cookieID_1; }
	inline void set_cookieID_1(int32_t value)
	{
		___cookieID_1 = value;
	}

	inline static int32_t get_offset_of_cookieScale_2() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieScale_2)); }
	inline float get_cookieScale_2() const { return ___cookieScale_2; }
	inline float* get_address_of_cookieScale_2() { return &___cookieScale_2; }
	inline void set_cookieScale_2(float value)
	{
		___cookieScale_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___color_3)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_3() const { return ___color_3; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_indirectColor_4() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___indirectColor_4)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_4() const { return ___indirectColor_4; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_4() { return &___indirectColor_4; }
	inline void set_indirectColor_4(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_4 = value;
	}

	inline static int32_t get_offset_of_orientation_5() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___orientation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_5() const { return ___orientation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_5() { return &___orientation_5; }
	inline void set_orientation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_5 = value;
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___position_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_6() const { return ___position_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_coneAngle_8() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___coneAngle_8)); }
	inline float get_coneAngle_8() const { return ___coneAngle_8; }
	inline float* get_address_of_coneAngle_8() { return &___coneAngle_8; }
	inline void set_coneAngle_8(float value)
	{
		___coneAngle_8 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_9() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___innerConeAngle_9)); }
	inline float get_innerConeAngle_9() const { return ___innerConeAngle_9; }
	inline float* get_address_of_innerConeAngle_9() { return &___innerConeAngle_9; }
	inline void set_innerConeAngle_9(float value)
	{
		___innerConeAngle_9 = value;
	}

	inline static int32_t get_offset_of_shape0_10() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape0_10)); }
	inline float get_shape0_10() const { return ___shape0_10; }
	inline float* get_address_of_shape0_10() { return &___shape0_10; }
	inline void set_shape0_10(float value)
	{
		___shape0_10 = value;
	}

	inline static int32_t get_offset_of_shape1_11() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape1_11)); }
	inline float get_shape1_11() const { return ___shape1_11; }
	inline float* get_address_of_shape1_11() { return &___shape1_11; }
	inline void set_shape1_11(float value)
	{
		___shape1_11 = value;
	}

	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___type_12)); }
	inline uint8_t get_type_12() const { return ___type_12; }
	inline uint8_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(uint8_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_mode_13() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___mode_13)); }
	inline uint8_t get_mode_13() const { return ___mode_13; }
	inline uint8_t* get_address_of_mode_13() { return &___mode_13; }
	inline void set_mode_13(uint8_t value)
	{
		___mode_13 = value;
	}

	inline static int32_t get_offset_of_shadow_14() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shadow_14)); }
	inline uint8_t get_shadow_14() const { return ___shadow_14; }
	inline uint8_t* get_address_of_shadow_14() { return &___shadow_14; }
	inline void set_shadow_14(uint8_t value)
	{
		___shadow_14 = value;
	}

	inline static int32_t get_offset_of_falloff_15() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___falloff_15)); }
	inline uint8_t get_falloff_15() const { return ___falloff_15; }
	inline uint8_t* get_address_of_falloff_15() { return &___falloff_15; }
	inline void set_falloff_15(uint8_t value)
	{
		___falloff_15 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A 
{
public:
	// DG.Tweening.PathMode DG.Tweening.Plugins.Options.PathOptions::mode
	int32_t ___mode_0;
	// DG.Tweening.Plugins.Options.OrientType DG.Tweening.Plugins.Options.PathOptions::orientType
	int32_t ___orientType_1;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockPositionAxis
	int32_t ___lockPositionAxis_2;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockRotationAxis
	int32_t ___lockRotationAxis_3;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isClosedPath
	bool ___isClosedPath_4;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.PathOptions::lookAtPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lookAtPosition_5;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::lookAtTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___lookAtTransform_6;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::lookAhead
	float ___lookAhead_7;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::hasCustomForwardDirection
	bool ___hasCustomForwardDirection_8;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::forward
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___forward_9;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::useLocalPosition
	bool ___useLocalPosition_10;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::parent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent_11;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isRigidbody
	bool ___isRigidbody_12;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isRigidbody2D
	bool ___isRigidbody2D_13;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::stableZRotation
	bool ___stableZRotation_14;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::startupRot
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___startupRot_15;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::startupZRot
	float ___startupZRot_16;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::addedExtraStartWp
	bool ___addedExtraStartWp_17;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::addedExtraEndWp
	bool ___addedExtraEndWp_18;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_orientType_1() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___orientType_1)); }
	inline int32_t get_orientType_1() const { return ___orientType_1; }
	inline int32_t* get_address_of_orientType_1() { return &___orientType_1; }
	inline void set_orientType_1(int32_t value)
	{
		___orientType_1 = value;
	}

	inline static int32_t get_offset_of_lockPositionAxis_2() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___lockPositionAxis_2)); }
	inline int32_t get_lockPositionAxis_2() const { return ___lockPositionAxis_2; }
	inline int32_t* get_address_of_lockPositionAxis_2() { return &___lockPositionAxis_2; }
	inline void set_lockPositionAxis_2(int32_t value)
	{
		___lockPositionAxis_2 = value;
	}

	inline static int32_t get_offset_of_lockRotationAxis_3() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___lockRotationAxis_3)); }
	inline int32_t get_lockRotationAxis_3() const { return ___lockRotationAxis_3; }
	inline int32_t* get_address_of_lockRotationAxis_3() { return &___lockRotationAxis_3; }
	inline void set_lockRotationAxis_3(int32_t value)
	{
		___lockRotationAxis_3 = value;
	}

	inline static int32_t get_offset_of_isClosedPath_4() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___isClosedPath_4)); }
	inline bool get_isClosedPath_4() const { return ___isClosedPath_4; }
	inline bool* get_address_of_isClosedPath_4() { return &___isClosedPath_4; }
	inline void set_isClosedPath_4(bool value)
	{
		___isClosedPath_4 = value;
	}

	inline static int32_t get_offset_of_lookAtPosition_5() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___lookAtPosition_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lookAtPosition_5() const { return ___lookAtPosition_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lookAtPosition_5() { return &___lookAtPosition_5; }
	inline void set_lookAtPosition_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lookAtPosition_5 = value;
	}

	inline static int32_t get_offset_of_lookAtTransform_6() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___lookAtTransform_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_lookAtTransform_6() const { return ___lookAtTransform_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_lookAtTransform_6() { return &___lookAtTransform_6; }
	inline void set_lookAtTransform_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___lookAtTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lookAtTransform_6), (void*)value);
	}

	inline static int32_t get_offset_of_lookAhead_7() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___lookAhead_7)); }
	inline float get_lookAhead_7() const { return ___lookAhead_7; }
	inline float* get_address_of_lookAhead_7() { return &___lookAhead_7; }
	inline void set_lookAhead_7(float value)
	{
		___lookAhead_7 = value;
	}

	inline static int32_t get_offset_of_hasCustomForwardDirection_8() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___hasCustomForwardDirection_8)); }
	inline bool get_hasCustomForwardDirection_8() const { return ___hasCustomForwardDirection_8; }
	inline bool* get_address_of_hasCustomForwardDirection_8() { return &___hasCustomForwardDirection_8; }
	inline void set_hasCustomForwardDirection_8(bool value)
	{
		___hasCustomForwardDirection_8 = value;
	}

	inline static int32_t get_offset_of_forward_9() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___forward_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_forward_9() const { return ___forward_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_forward_9() { return &___forward_9; }
	inline void set_forward_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___forward_9 = value;
	}

	inline static int32_t get_offset_of_useLocalPosition_10() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___useLocalPosition_10)); }
	inline bool get_useLocalPosition_10() const { return ___useLocalPosition_10; }
	inline bool* get_address_of_useLocalPosition_10() { return &___useLocalPosition_10; }
	inline void set_useLocalPosition_10(bool value)
	{
		___useLocalPosition_10 = value;
	}

	inline static int32_t get_offset_of_parent_11() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___parent_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_parent_11() const { return ___parent_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_parent_11() { return &___parent_11; }
	inline void set_parent_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___parent_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_11), (void*)value);
	}

	inline static int32_t get_offset_of_isRigidbody_12() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___isRigidbody_12)); }
	inline bool get_isRigidbody_12() const { return ___isRigidbody_12; }
	inline bool* get_address_of_isRigidbody_12() { return &___isRigidbody_12; }
	inline void set_isRigidbody_12(bool value)
	{
		___isRigidbody_12 = value;
	}

	inline static int32_t get_offset_of_isRigidbody2D_13() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___isRigidbody2D_13)); }
	inline bool get_isRigidbody2D_13() const { return ___isRigidbody2D_13; }
	inline bool* get_address_of_isRigidbody2D_13() { return &___isRigidbody2D_13; }
	inline void set_isRigidbody2D_13(bool value)
	{
		___isRigidbody2D_13 = value;
	}

	inline static int32_t get_offset_of_stableZRotation_14() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___stableZRotation_14)); }
	inline bool get_stableZRotation_14() const { return ___stableZRotation_14; }
	inline bool* get_address_of_stableZRotation_14() { return &___stableZRotation_14; }
	inline void set_stableZRotation_14(bool value)
	{
		___stableZRotation_14 = value;
	}

	inline static int32_t get_offset_of_startupRot_15() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___startupRot_15)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_startupRot_15() const { return ___startupRot_15; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_startupRot_15() { return &___startupRot_15; }
	inline void set_startupRot_15(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___startupRot_15 = value;
	}

	inline static int32_t get_offset_of_startupZRot_16() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___startupZRot_16)); }
	inline float get_startupZRot_16() const { return ___startupZRot_16; }
	inline float* get_address_of_startupZRot_16() { return &___startupZRot_16; }
	inline void set_startupZRot_16(float value)
	{
		___startupZRot_16 = value;
	}

	inline static int32_t get_offset_of_addedExtraStartWp_17() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___addedExtraStartWp_17)); }
	inline bool get_addedExtraStartWp_17() const { return ___addedExtraStartWp_17; }
	inline bool* get_address_of_addedExtraStartWp_17() { return &___addedExtraStartWp_17; }
	inline void set_addedExtraStartWp_17(bool value)
	{
		___addedExtraStartWp_17 = value;
	}

	inline static int32_t get_offset_of_addedExtraEndWp_18() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___addedExtraEndWp_18)); }
	inline bool get_addedExtraEndWp_18() const { return ___addedExtraEndWp_18; }
	inline bool* get_address_of_addedExtraEndWp_18() { return &___addedExtraEndWp_18; }
	inline void set_addedExtraEndWp_18(bool value)
	{
		___addedExtraEndWp_18 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_marshaled_pinvoke
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lookAtPosition_5;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent_11;
	int32_t ___isRigidbody_12;
	int32_t ___isRigidbody2D_13;
	int32_t ___stableZRotation_14;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___startupRot_15;
	float ___startupZRot_16;
	int32_t ___addedExtraStartWp_17;
	int32_t ___addedExtraEndWp_18;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_marshaled_com
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lookAtPosition_5;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent_11;
	int32_t ___isRigidbody_12;
	int32_t ___isRigidbody2D_13;
	int32_t ___stableZRotation_14;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___startupRot_15;
	float ___startupZRot_16;
	int32_t ___addedExtraStartWp_17;
	int32_t ___addedExtraEndWp_18;
};

// DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA 
{
public:
	// DG.Tweening.RotateMode DG.Tweening.Plugins.Options.QuaternionOptions::rotateMode
	int32_t ___rotateMode_0;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.QuaternionOptions::axisConstraint
	int32_t ___axisConstraint_1;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::up
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up_2;
	// System.Boolean DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAt
	bool ___dynamicLookAt_3;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAtWorldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dynamicLookAtWorldPosition_4;

public:
	inline static int32_t get_offset_of_rotateMode_0() { return static_cast<int32_t>(offsetof(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA, ___rotateMode_0)); }
	inline int32_t get_rotateMode_0() const { return ___rotateMode_0; }
	inline int32_t* get_address_of_rotateMode_0() { return &___rotateMode_0; }
	inline void set_rotateMode_0(int32_t value)
	{
		___rotateMode_0 = value;
	}

	inline static int32_t get_offset_of_axisConstraint_1() { return static_cast<int32_t>(offsetof(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA, ___axisConstraint_1)); }
	inline int32_t get_axisConstraint_1() const { return ___axisConstraint_1; }
	inline int32_t* get_address_of_axisConstraint_1() { return &___axisConstraint_1; }
	inline void set_axisConstraint_1(int32_t value)
	{
		___axisConstraint_1 = value;
	}

	inline static int32_t get_offset_of_up_2() { return static_cast<int32_t>(offsetof(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA, ___up_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_up_2() const { return ___up_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_up_2() { return &___up_2; }
	inline void set_up_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___up_2 = value;
	}

	inline static int32_t get_offset_of_dynamicLookAt_3() { return static_cast<int32_t>(offsetof(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA, ___dynamicLookAt_3)); }
	inline bool get_dynamicLookAt_3() const { return ___dynamicLookAt_3; }
	inline bool* get_address_of_dynamicLookAt_3() { return &___dynamicLookAt_3; }
	inline void set_dynamicLookAt_3(bool value)
	{
		___dynamicLookAt_3 = value;
	}

	inline static int32_t get_offset_of_dynamicLookAtWorldPosition_4() { return static_cast<int32_t>(offsetof(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA, ___dynamicLookAtWorldPosition_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dynamicLookAtWorldPosition_4() const { return ___dynamicLookAtWorldPosition_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dynamicLookAtWorldPosition_4() { return &___dynamicLookAtWorldPosition_4; }
	inline void set_dynamicLookAtWorldPosition_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dynamicLookAtWorldPosition_4 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_marshaled_pinvoke
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dynamicLookAtWorldPosition_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_marshaled_com
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dynamicLookAtWorldPosition_4;
};

// DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.StringOptions::richTextEnabled
	bool ___richTextEnabled_0;
	// DG.Tweening.ScrambleMode DG.Tweening.Plugins.Options.StringOptions::scrambleMode
	int32_t ___scrambleMode_1;
	// System.Char[] DG.Tweening.Plugins.Options.StringOptions::scrambledChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___scrambledChars_2;
	// System.Int32 DG.Tweening.Plugins.Options.StringOptions::startValueStrippedLength
	int32_t ___startValueStrippedLength_3;
	// System.Int32 DG.Tweening.Plugins.Options.StringOptions::changeValueStrippedLength
	int32_t ___changeValueStrippedLength_4;

public:
	inline static int32_t get_offset_of_richTextEnabled_0() { return static_cast<int32_t>(offsetof(StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104, ___richTextEnabled_0)); }
	inline bool get_richTextEnabled_0() const { return ___richTextEnabled_0; }
	inline bool* get_address_of_richTextEnabled_0() { return &___richTextEnabled_0; }
	inline void set_richTextEnabled_0(bool value)
	{
		___richTextEnabled_0 = value;
	}

	inline static int32_t get_offset_of_scrambleMode_1() { return static_cast<int32_t>(offsetof(StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104, ___scrambleMode_1)); }
	inline int32_t get_scrambleMode_1() const { return ___scrambleMode_1; }
	inline int32_t* get_address_of_scrambleMode_1() { return &___scrambleMode_1; }
	inline void set_scrambleMode_1(int32_t value)
	{
		___scrambleMode_1 = value;
	}

	inline static int32_t get_offset_of_scrambledChars_2() { return static_cast<int32_t>(offsetof(StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104, ___scrambledChars_2)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_scrambledChars_2() const { return ___scrambledChars_2; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_scrambledChars_2() { return &___scrambledChars_2; }
	inline void set_scrambledChars_2(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___scrambledChars_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrambledChars_2), (void*)value);
	}

	inline static int32_t get_offset_of_startValueStrippedLength_3() { return static_cast<int32_t>(offsetof(StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104, ___startValueStrippedLength_3)); }
	inline int32_t get_startValueStrippedLength_3() const { return ___startValueStrippedLength_3; }
	inline int32_t* get_address_of_startValueStrippedLength_3() { return &___startValueStrippedLength_3; }
	inline void set_startValueStrippedLength_3(int32_t value)
	{
		___startValueStrippedLength_3 = value;
	}

	inline static int32_t get_offset_of_changeValueStrippedLength_4() { return static_cast<int32_t>(offsetof(StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104, ___changeValueStrippedLength_4)); }
	inline int32_t get_changeValueStrippedLength_4() const { return ___changeValueStrippedLength_4; }
	inline int32_t* get_address_of_changeValueStrippedLength_4() { return &___changeValueStrippedLength_4; }
	inline void set_changeValueStrippedLength_4(int32_t value)
	{
		___changeValueStrippedLength_4 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_marshaled_pinvoke
{
	int32_t ___richTextEnabled_0;
	int32_t ___scrambleMode_1;
	uint8_t* ___scrambledChars_2;
	int32_t ___startValueStrippedLength_3;
	int32_t ___changeValueStrippedLength_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_marshaled_com
{
	int32_t ___richTextEnabled_0;
	int32_t ___scrambleMode_1;
	uint8_t* ___scrambledChars_2;
	int32_t ___startValueStrippedLength_3;
	int32_t ___changeValueStrippedLength_4;
};

// DG.Tweening.Plugins.Options.Vector3ArrayOptions
struct Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B 
{
public:
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.Vector3ArrayOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.Vector3ArrayOptions::snapping
	bool ___snapping_1;
	// System.Single[] DG.Tweening.Plugins.Options.Vector3ArrayOptions::durations
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___durations_2;

public:
	inline static int32_t get_offset_of_axisConstraint_0() { return static_cast<int32_t>(offsetof(Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B, ___axisConstraint_0)); }
	inline int32_t get_axisConstraint_0() const { return ___axisConstraint_0; }
	inline int32_t* get_address_of_axisConstraint_0() { return &___axisConstraint_0; }
	inline void set_axisConstraint_0(int32_t value)
	{
		___axisConstraint_0 = value;
	}

	inline static int32_t get_offset_of_snapping_1() { return static_cast<int32_t>(offsetof(Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B, ___snapping_1)); }
	inline bool get_snapping_1() const { return ___snapping_1; }
	inline bool* get_address_of_snapping_1() { return &___snapping_1; }
	inline void set_snapping_1(bool value)
	{
		___snapping_1 = value;
	}

	inline static int32_t get_offset_of_durations_2() { return static_cast<int32_t>(offsetof(Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B, ___durations_2)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_durations_2() const { return ___durations_2; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_durations_2() { return &___durations_2; }
	inline void set_durations_2(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___durations_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___durations_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.Vector3ArrayOptions
struct Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
	Il2CppSafeArray/*NONE*/* ___durations_2;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.Vector3ArrayOptions
struct Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
	Il2CppSafeArray/*NONE*/* ___durations_2;
};

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB 
{
public:
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;

public:
	inline static int32_t get_offset_of_axisConstraint_0() { return static_cast<int32_t>(offsetof(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB, ___axisConstraint_0)); }
	inline int32_t get_axisConstraint_0() const { return ___axisConstraint_0; }
	inline int32_t* get_address_of_axisConstraint_0() { return &___axisConstraint_0; }
	inline void set_axisConstraint_0(int32_t value)
	{
		___axisConstraint_0 = value;
	}

	inline static int32_t get_offset_of_snapping_1() { return static_cast<int32_t>(offsetof(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB, ___snapping_1)); }
	inline bool get_snapping_1() const { return ___snapping_1; }
	inline bool* get_address_of_snapping_1() { return &___snapping_1; }
	inline void set_snapping_1(bool value)
	{
		___snapping_1 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOGetter`1<DG.Tweening.Color2>
struct DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOGetter`1<System.Double>
struct DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOGetter`1<System.Int32>
struct DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOGetter`1<System.Int64>
struct DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOGetter`1<System.Object>
struct DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOGetter`1<UnityEngine.Rect>
struct DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOGetter`1<System.UInt32>
struct DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOGetter`1<System.UInt64>
struct DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector4>
struct DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<DG.Tweening.Color2>
struct DOSetter_1_t199F83E107F9B9D685BFE2B08A80CB3E56F2D0E1  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<System.Double>
struct DOSetter_1_tEB531C9333D39107AFB45DB640635F4E8125624A  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<System.Int32>
struct DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<System.Int64>
struct DOSetter_1_t7B88BDCE7E2B0CB1C48CB2DA8D10300F9AEC832F  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<System.Object>
struct DOSetter_1_tA1C3C23D13C5F1464FCE61D087CAF987FB347080  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<UnityEngine.Rect>
struct DOSetter_1_t3C7F9B0CE7215C0D0AC5C7D7E96C515C82436485  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<System.UInt32>
struct DOSetter_1_tDDF46A9A2BD2CF40775822DBAC21F8E70FBE09C6  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<System.UInt64>
struct DOSetter_1_t958CC463FE354998F7EF7ED30D9AAE18526C5533  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector4>
struct DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Tween
struct Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941  : public ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76
{
public:
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject * ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject * ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t * ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t * ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t * ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;

public:
	inline static int32_t get_offset_of_timeScale_4() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___timeScale_4)); }
	inline float get_timeScale_4() const { return ___timeScale_4; }
	inline float* get_address_of_timeScale_4() { return &___timeScale_4; }
	inline void set_timeScale_4(float value)
	{
		___timeScale_4 = value;
	}

	inline static int32_t get_offset_of_isBackwards_5() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBackwards_5)); }
	inline bool get_isBackwards_5() const { return ___isBackwards_5; }
	inline bool* get_address_of_isBackwards_5() { return &___isBackwards_5; }
	inline void set_isBackwards_5(bool value)
	{
		___isBackwards_5 = value;
	}

	inline static int32_t get_offset_of_isInverted_6() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isInverted_6)); }
	inline bool get_isInverted_6() const { return ___isInverted_6; }
	inline bool* get_address_of_isInverted_6() { return &___isInverted_6; }
	inline void set_isInverted_6(bool value)
	{
		___isInverted_6 = value;
	}

	inline static int32_t get_offset_of_id_7() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___id_7)); }
	inline RuntimeObject * get_id_7() const { return ___id_7; }
	inline RuntimeObject ** get_address_of_id_7() { return &___id_7; }
	inline void set_id_7(RuntimeObject * value)
	{
		___id_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_7), (void*)value);
	}

	inline static int32_t get_offset_of_stringId_8() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___stringId_8)); }
	inline String_t* get_stringId_8() const { return ___stringId_8; }
	inline String_t** get_address_of_stringId_8() { return &___stringId_8; }
	inline void set_stringId_8(String_t* value)
	{
		___stringId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringId_8), (void*)value);
	}

	inline static int32_t get_offset_of_intId_9() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___intId_9)); }
	inline int32_t get_intId_9() const { return ___intId_9; }
	inline int32_t* get_address_of_intId_9() { return &___intId_9; }
	inline void set_intId_9(int32_t value)
	{
		___intId_9 = value;
	}

	inline static int32_t get_offset_of_target_10() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___target_10)); }
	inline RuntimeObject * get_target_10() const { return ___target_10; }
	inline RuntimeObject ** get_address_of_target_10() { return &___target_10; }
	inline void set_target_10(RuntimeObject * value)
	{
		___target_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_10), (void*)value);
	}

	inline static int32_t get_offset_of_updateType_11() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___updateType_11)); }
	inline int32_t get_updateType_11() const { return ___updateType_11; }
	inline int32_t* get_address_of_updateType_11() { return &___updateType_11; }
	inline void set_updateType_11(int32_t value)
	{
		___updateType_11 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_12() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isIndependentUpdate_12)); }
	inline bool get_isIndependentUpdate_12() const { return ___isIndependentUpdate_12; }
	inline bool* get_address_of_isIndependentUpdate_12() { return &___isIndependentUpdate_12; }
	inline void set_isIndependentUpdate_12(bool value)
	{
		___isIndependentUpdate_12 = value;
	}

	inline static int32_t get_offset_of_onPlay_13() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPlay_13)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPlay_13() const { return ___onPlay_13; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPlay_13() { return &___onPlay_13; }
	inline void set_onPlay_13(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPlay_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlay_13), (void*)value);
	}

	inline static int32_t get_offset_of_onPause_14() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPause_14)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPause_14() const { return ___onPause_14; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPause_14() { return &___onPause_14; }
	inline void set_onPause_14(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPause_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPause_14), (void*)value);
	}

	inline static int32_t get_offset_of_onRewind_15() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onRewind_15)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onRewind_15() const { return ___onRewind_15; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onRewind_15() { return &___onRewind_15; }
	inline void set_onRewind_15(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onRewind_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRewind_15), (void*)value);
	}

	inline static int32_t get_offset_of_onUpdate_16() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onUpdate_16)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onUpdate_16() const { return ___onUpdate_16; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onUpdate_16() { return &___onUpdate_16; }
	inline void set_onUpdate_16(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onUpdate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdate_16), (void*)value);
	}

	inline static int32_t get_offset_of_onStepComplete_17() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onStepComplete_17)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStepComplete_17() const { return ___onStepComplete_17; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStepComplete_17() { return &___onStepComplete_17; }
	inline void set_onStepComplete_17(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStepComplete_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStepComplete_17), (void*)value);
	}

	inline static int32_t get_offset_of_onComplete_18() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onComplete_18)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onComplete_18() const { return ___onComplete_18; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onComplete_18() { return &___onComplete_18; }
	inline void set_onComplete_18(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onComplete_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onComplete_18), (void*)value);
	}

	inline static int32_t get_offset_of_onKill_19() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onKill_19)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onKill_19() const { return ___onKill_19; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onKill_19() { return &___onKill_19; }
	inline void set_onKill_19(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onKill_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onKill_19), (void*)value);
	}

	inline static int32_t get_offset_of_onWaypointChange_20() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onWaypointChange_20)); }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * get_onWaypointChange_20() const { return ___onWaypointChange_20; }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B ** get_address_of_onWaypointChange_20() { return &___onWaypointChange_20; }
	inline void set_onWaypointChange_20(TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * value)
	{
		___onWaypointChange_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onWaypointChange_20), (void*)value);
	}

	inline static int32_t get_offset_of_isFrom_21() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isFrom_21)); }
	inline bool get_isFrom_21() const { return ___isFrom_21; }
	inline bool* get_address_of_isFrom_21() { return &___isFrom_21; }
	inline void set_isFrom_21(bool value)
	{
		___isFrom_21 = value;
	}

	inline static int32_t get_offset_of_isBlendable_22() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBlendable_22)); }
	inline bool get_isBlendable_22() const { return ___isBlendable_22; }
	inline bool* get_address_of_isBlendable_22() { return &___isBlendable_22; }
	inline void set_isBlendable_22(bool value)
	{
		___isBlendable_22 = value;
	}

	inline static int32_t get_offset_of_isRecyclable_23() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isRecyclable_23)); }
	inline bool get_isRecyclable_23() const { return ___isRecyclable_23; }
	inline bool* get_address_of_isRecyclable_23() { return &___isRecyclable_23; }
	inline void set_isRecyclable_23(bool value)
	{
		___isRecyclable_23 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_24() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSpeedBased_24)); }
	inline bool get_isSpeedBased_24() const { return ___isSpeedBased_24; }
	inline bool* get_address_of_isSpeedBased_24() { return &___isSpeedBased_24; }
	inline void set_isSpeedBased_24(bool value)
	{
		___isSpeedBased_24 = value;
	}

	inline static int32_t get_offset_of_autoKill_25() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___autoKill_25)); }
	inline bool get_autoKill_25() const { return ___autoKill_25; }
	inline bool* get_address_of_autoKill_25() { return &___autoKill_25; }
	inline void set_autoKill_25(bool value)
	{
		___autoKill_25 = value;
	}

	inline static int32_t get_offset_of_duration_26() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___duration_26)); }
	inline float get_duration_26() const { return ___duration_26; }
	inline float* get_address_of_duration_26() { return &___duration_26; }
	inline void set_duration_26(float value)
	{
		___duration_26 = value;
	}

	inline static int32_t get_offset_of_loops_27() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loops_27)); }
	inline int32_t get_loops_27() const { return ___loops_27; }
	inline int32_t* get_address_of_loops_27() { return &___loops_27; }
	inline void set_loops_27(int32_t value)
	{
		___loops_27 = value;
	}

	inline static int32_t get_offset_of_loopType_28() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loopType_28)); }
	inline int32_t get_loopType_28() const { return ___loopType_28; }
	inline int32_t* get_address_of_loopType_28() { return &___loopType_28; }
	inline void set_loopType_28(int32_t value)
	{
		___loopType_28 = value;
	}

	inline static int32_t get_offset_of_delay_29() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delay_29)); }
	inline float get_delay_29() const { return ___delay_29; }
	inline float* get_address_of_delay_29() { return &___delay_29; }
	inline void set_delay_29(float value)
	{
		___delay_29 = value;
	}

	inline static int32_t get_offset_of_U3CisRelativeU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CisRelativeU3Ek__BackingField_30)); }
	inline bool get_U3CisRelativeU3Ek__BackingField_30() const { return ___U3CisRelativeU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CisRelativeU3Ek__BackingField_30() { return &___U3CisRelativeU3Ek__BackingField_30; }
	inline void set_U3CisRelativeU3Ek__BackingField_30(bool value)
	{
		___U3CisRelativeU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_easeType_31() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeType_31)); }
	inline int32_t get_easeType_31() const { return ___easeType_31; }
	inline int32_t* get_address_of_easeType_31() { return &___easeType_31; }
	inline void set_easeType_31(int32_t value)
	{
		___easeType_31 = value;
	}

	inline static int32_t get_offset_of_customEase_32() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___customEase_32)); }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * get_customEase_32() const { return ___customEase_32; }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 ** get_address_of_customEase_32() { return &___customEase_32; }
	inline void set_customEase_32(EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * value)
	{
		___customEase_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customEase_32), (void*)value);
	}

	inline static int32_t get_offset_of_easeOvershootOrAmplitude_33() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeOvershootOrAmplitude_33)); }
	inline float get_easeOvershootOrAmplitude_33() const { return ___easeOvershootOrAmplitude_33; }
	inline float* get_address_of_easeOvershootOrAmplitude_33() { return &___easeOvershootOrAmplitude_33; }
	inline void set_easeOvershootOrAmplitude_33(float value)
	{
		___easeOvershootOrAmplitude_33 = value;
	}

	inline static int32_t get_offset_of_easePeriod_34() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easePeriod_34)); }
	inline float get_easePeriod_34() const { return ___easePeriod_34; }
	inline float* get_address_of_easePeriod_34() { return &___easePeriod_34; }
	inline void set_easePeriod_34(float value)
	{
		___easePeriod_34 = value;
	}

	inline static int32_t get_offset_of_debugTargetId_35() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___debugTargetId_35)); }
	inline String_t* get_debugTargetId_35() const { return ___debugTargetId_35; }
	inline String_t** get_address_of_debugTargetId_35() { return &___debugTargetId_35; }
	inline void set_debugTargetId_35(String_t* value)
	{
		___debugTargetId_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugTargetId_35), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT1_36() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT1_36)); }
	inline Type_t * get_typeofT1_36() const { return ___typeofT1_36; }
	inline Type_t ** get_address_of_typeofT1_36() { return &___typeofT1_36; }
	inline void set_typeofT1_36(Type_t * value)
	{
		___typeofT1_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT1_36), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT2_37() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT2_37)); }
	inline Type_t * get_typeofT2_37() const { return ___typeofT2_37; }
	inline Type_t ** get_address_of_typeofT2_37() { return &___typeofT2_37; }
	inline void set_typeofT2_37(Type_t * value)
	{
		___typeofT2_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT2_37), (void*)value);
	}

	inline static int32_t get_offset_of_typeofTPlugOptions_38() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofTPlugOptions_38)); }
	inline Type_t * get_typeofTPlugOptions_38() const { return ___typeofTPlugOptions_38; }
	inline Type_t ** get_address_of_typeofTPlugOptions_38() { return &___typeofTPlugOptions_38; }
	inline void set_typeofTPlugOptions_38(Type_t * value)
	{
		___typeofTPlugOptions_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofTPlugOptions_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CactiveU3Ek__BackingField_39)); }
	inline bool get_U3CactiveU3Ek__BackingField_39() const { return ___U3CactiveU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_39() { return &___U3CactiveU3Ek__BackingField_39; }
	inline void set_U3CactiveU3Ek__BackingField_39(bool value)
	{
		___U3CactiveU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_isSequenced_40() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSequenced_40)); }
	inline bool get_isSequenced_40() const { return ___isSequenced_40; }
	inline bool* get_address_of_isSequenced_40() { return &___isSequenced_40; }
	inline void set_isSequenced_40(bool value)
	{
		___isSequenced_40 = value;
	}

	inline static int32_t get_offset_of_sequenceParent_41() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___sequenceParent_41)); }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * get_sequenceParent_41() const { return ___sequenceParent_41; }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E ** get_address_of_sequenceParent_41() { return &___sequenceParent_41; }
	inline void set_sequenceParent_41(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * value)
	{
		___sequenceParent_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequenceParent_41), (void*)value);
	}

	inline static int32_t get_offset_of_activeId_42() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___activeId_42)); }
	inline int32_t get_activeId_42() const { return ___activeId_42; }
	inline int32_t* get_address_of_activeId_42() { return &___activeId_42; }
	inline void set_activeId_42(int32_t value)
	{
		___activeId_42 = value;
	}

	inline static int32_t get_offset_of_specialStartupMode_43() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___specialStartupMode_43)); }
	inline int32_t get_specialStartupMode_43() const { return ___specialStartupMode_43; }
	inline int32_t* get_address_of_specialStartupMode_43() { return &___specialStartupMode_43; }
	inline void set_specialStartupMode_43(int32_t value)
	{
		___specialStartupMode_43 = value;
	}

	inline static int32_t get_offset_of_creationLocked_44() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___creationLocked_44)); }
	inline bool get_creationLocked_44() const { return ___creationLocked_44; }
	inline bool* get_address_of_creationLocked_44() { return &___creationLocked_44; }
	inline void set_creationLocked_44(bool value)
	{
		___creationLocked_44 = value;
	}

	inline static int32_t get_offset_of_startupDone_45() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___startupDone_45)); }
	inline bool get_startupDone_45() const { return ___startupDone_45; }
	inline bool* get_address_of_startupDone_45() { return &___startupDone_45; }
	inline void set_startupDone_45(bool value)
	{
		___startupDone_45 = value;
	}

	inline static int32_t get_offset_of_U3CplayedOnceU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CplayedOnceU3Ek__BackingField_46)); }
	inline bool get_U3CplayedOnceU3Ek__BackingField_46() const { return ___U3CplayedOnceU3Ek__BackingField_46; }
	inline bool* get_address_of_U3CplayedOnceU3Ek__BackingField_46() { return &___U3CplayedOnceU3Ek__BackingField_46; }
	inline void set_U3CplayedOnceU3Ek__BackingField_46(bool value)
	{
		___U3CplayedOnceU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CpositionU3Ek__BackingField_47)); }
	inline float get_U3CpositionU3Ek__BackingField_47() const { return ___U3CpositionU3Ek__BackingField_47; }
	inline float* get_address_of_U3CpositionU3Ek__BackingField_47() { return &___U3CpositionU3Ek__BackingField_47; }
	inline void set_U3CpositionU3Ek__BackingField_47(float value)
	{
		___U3CpositionU3Ek__BackingField_47 = value;
	}

	inline static int32_t get_offset_of_fullDuration_48() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___fullDuration_48)); }
	inline float get_fullDuration_48() const { return ___fullDuration_48; }
	inline float* get_address_of_fullDuration_48() { return &___fullDuration_48; }
	inline void set_fullDuration_48(float value)
	{
		___fullDuration_48 = value;
	}

	inline static int32_t get_offset_of_completedLoops_49() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___completedLoops_49)); }
	inline int32_t get_completedLoops_49() const { return ___completedLoops_49; }
	inline int32_t* get_address_of_completedLoops_49() { return &___completedLoops_49; }
	inline void set_completedLoops_49(int32_t value)
	{
		___completedLoops_49 = value;
	}

	inline static int32_t get_offset_of_isPlaying_50() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isPlaying_50)); }
	inline bool get_isPlaying_50() const { return ___isPlaying_50; }
	inline bool* get_address_of_isPlaying_50() { return &___isPlaying_50; }
	inline void set_isPlaying_50(bool value)
	{
		___isPlaying_50 = value;
	}

	inline static int32_t get_offset_of_isComplete_51() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isComplete_51)); }
	inline bool get_isComplete_51() const { return ___isComplete_51; }
	inline bool* get_address_of_isComplete_51() { return &___isComplete_51; }
	inline void set_isComplete_51(bool value)
	{
		___isComplete_51 = value;
	}

	inline static int32_t get_offset_of_elapsedDelay_52() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___elapsedDelay_52)); }
	inline float get_elapsedDelay_52() const { return ___elapsedDelay_52; }
	inline float* get_address_of_elapsedDelay_52() { return &___elapsedDelay_52; }
	inline void set_elapsedDelay_52(float value)
	{
		___elapsedDelay_52 = value;
	}

	inline static int32_t get_offset_of_delayComplete_53() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delayComplete_53)); }
	inline bool get_delayComplete_53() const { return ___delayComplete_53; }
	inline bool* get_address_of_delayComplete_53() { return &___delayComplete_53; }
	inline void set_delayComplete_53(bool value)
	{
		___delayComplete_53 = value;
	}

	inline static int32_t get_offset_of_miscInt_54() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___miscInt_54)); }
	inline int32_t get_miscInt_54() const { return ___miscInt_54; }
	inline int32_t* get_address_of_miscInt_54() { return &___miscInt_54; }
	inline void set_miscInt_54(int32_t value)
	{
		___miscInt_54 = value;
	}
};


// DG.Tweening.Tweener
struct Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8  : public Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941
{
public:
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;

public:
	inline static int32_t get_offset_of_hasManuallySetStartValue_55() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___hasManuallySetStartValue_55)); }
	inline bool get_hasManuallySetStartValue_55() const { return ___hasManuallySetStartValue_55; }
	inline bool* get_address_of_hasManuallySetStartValue_55() { return &___hasManuallySetStartValue_55; }
	inline void set_hasManuallySetStartValue_55(bool value)
	{
		___hasManuallySetStartValue_55 = value;
	}

	inline static int32_t get_offset_of_isFromAllowed_56() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___isFromAllowed_56)); }
	inline bool get_isFromAllowed_56() const { return ___isFromAllowed_56; }
	inline bool* get_address_of_isFromAllowed_56() { return &___isFromAllowed_56; }
	inline void set_isFromAllowed_56(bool value)
	{
		___isFromAllowed_56 = value;
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___startValue_57)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_startValue_57() const { return ___startValue_57; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___endValue_58)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_endValue_58() const { return ___endValue_58; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___changeValue_59)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_changeValue_59() const { return ___changeValue_59; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___plugOptions_60)); }
	inline ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  get_plugOptions_60() const { return ___plugOptions_60; }
	inline ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___getter_61)); }
	inline DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___setter_62)); }
	inline DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t199F83E107F9B9D685BFE2B08A80CB3E56F2D0E1 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF, ___startValue_57)); }
	inline Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  get_startValue_57() const { return ___startValue_57; }
	inline Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF, ___endValue_58)); }
	inline Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  get_endValue_58() const { return ___endValue_58; }
	inline Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF, ___changeValue_59)); }
	inline Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  get_changeValue_59() const { return ___changeValue_59; }
	inline Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF, ___plugOptions_60)); }
	inline ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  get_plugOptions_60() const { return ___plugOptions_60; }
	inline ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF, ___getter_61)); }
	inline DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF, ___setter_62)); }
	inline DOSetter_1_t199F83E107F9B9D685BFE2B08A80CB3E56F2D0E1 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t199F83E107F9B9D685BFE2B08A80CB3E56F2D0E1 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t199F83E107F9B9D685BFE2B08A80CB3E56F2D0E1 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	double ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	double ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	double ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tEB531C9333D39107AFB45DB640635F4E8125624A * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890, ___startValue_57)); }
	inline double get_startValue_57() const { return ___startValue_57; }
	inline double* get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(double value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890, ___endValue_58)); }
	inline double get_endValue_58() const { return ___endValue_58; }
	inline double* get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(double value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890, ___changeValue_59)); }
	inline double get_changeValue_59() const { return ___changeValue_59; }
	inline double* get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(double value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890, ___plugOptions_60)); }
	inline NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  get_plugOptions_60() const { return ___plugOptions_60; }
	inline NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890, ___getter_61)); }
	inline DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890, ___setter_62)); }
	inline DOSetter_1_tEB531C9333D39107AFB45DB640635F4E8125624A * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tEB531C9333D39107AFB45DB640635F4E8125624A ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tEB531C9333D39107AFB45DB640635F4E8125624A * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	int32_t ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	int32_t ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	int32_t ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1, ___startValue_57)); }
	inline int32_t get_startValue_57() const { return ___startValue_57; }
	inline int32_t* get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(int32_t value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1, ___endValue_58)); }
	inline int32_t get_endValue_58() const { return ___endValue_58; }
	inline int32_t* get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(int32_t value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1, ___changeValue_59)); }
	inline int32_t get_changeValue_59() const { return ___changeValue_59; }
	inline int32_t* get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(int32_t value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1, ___plugOptions_60)); }
	inline NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  get_plugOptions_60() const { return ___plugOptions_60; }
	inline NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1, ___getter_61)); }
	inline DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1, ___setter_62)); }
	inline DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	int64_t ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	int64_t ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	int64_t ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t7B88BDCE7E2B0CB1C48CB2DA8D10300F9AEC832F * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A, ___startValue_57)); }
	inline int64_t get_startValue_57() const { return ___startValue_57; }
	inline int64_t* get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(int64_t value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A, ___endValue_58)); }
	inline int64_t get_endValue_58() const { return ___endValue_58; }
	inline int64_t* get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(int64_t value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A, ___changeValue_59)); }
	inline int64_t get_changeValue_59() const { return ___changeValue_59; }
	inline int64_t* get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(int64_t value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A, ___plugOptions_60)); }
	inline NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  get_plugOptions_60() const { return ___plugOptions_60; }
	inline NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A, ___getter_61)); }
	inline DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A, ___setter_62)); }
	inline DOSetter_1_t7B88BDCE7E2B0CB1C48CB2DA8D10300F9AEC832F * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t7B88BDCE7E2B0CB1C48CB2DA8D10300F9AEC832F ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t7B88BDCE7E2B0CB1C48CB2DA8D10300F9AEC832F * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<System.Object,System.Object,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	RuntimeObject * ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	RuntimeObject * ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	RuntimeObject * ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tA1C3C23D13C5F1464FCE61D087CAF987FB347080 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824, ___startValue_57)); }
	inline RuntimeObject * get_startValue_57() const { return ___startValue_57; }
	inline RuntimeObject ** get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(RuntimeObject * value)
	{
		___startValue_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startValue_57), (void*)value);
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824, ___endValue_58)); }
	inline RuntimeObject * get_endValue_58() const { return ___endValue_58; }
	inline RuntimeObject ** get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(RuntimeObject * value)
	{
		___endValue_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endValue_58), (void*)value);
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824, ___changeValue_59)); }
	inline RuntimeObject * get_changeValue_59() const { return ___changeValue_59; }
	inline RuntimeObject ** get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(RuntimeObject * value)
	{
		___changeValue_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeValue_59), (void*)value);
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824, ___plugOptions_60)); }
	inline NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  get_plugOptions_60() const { return ___plugOptions_60; }
	inline NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824, ___getter_61)); }
	inline DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824, ___setter_62)); }
	inline DOSetter_1_tA1C3C23D13C5F1464FCE61D087CAF987FB347080 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tA1C3C23D13C5F1464FCE61D087CAF987FB347080 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tA1C3C23D13C5F1464FCE61D087CAF987FB347080 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<System.Object,System.Object,DG.Tweening.Plugins.Options.StringOptions>
struct TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	RuntimeObject * ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	RuntimeObject * ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	RuntimeObject * ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tA1C3C23D13C5F1464FCE61D087CAF987FB347080 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353, ___startValue_57)); }
	inline RuntimeObject * get_startValue_57() const { return ___startValue_57; }
	inline RuntimeObject ** get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(RuntimeObject * value)
	{
		___startValue_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startValue_57), (void*)value);
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353, ___endValue_58)); }
	inline RuntimeObject * get_endValue_58() const { return ___endValue_58; }
	inline RuntimeObject ** get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(RuntimeObject * value)
	{
		___endValue_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endValue_58), (void*)value);
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353, ___changeValue_59)); }
	inline RuntimeObject * get_changeValue_59() const { return ___changeValue_59; }
	inline RuntimeObject ** get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(RuntimeObject * value)
	{
		___changeValue_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeValue_59), (void*)value);
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353, ___plugOptions_60)); }
	inline StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104  get_plugOptions_60() const { return ___plugOptions_60; }
	inline StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(StringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104  value)
	{
		___plugOptions_60 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___plugOptions_60))->___scrambledChars_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353, ___getter_61)); }
	inline DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353, ___setter_62)); }
	inline DOSetter_1_tA1C3C23D13C5F1464FCE61D087CAF987FB347080 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tA1C3C23D13C5F1464FCE61D087CAF987FB347080 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tA1C3C23D13C5F1464FCE61D087CAF987FB347080 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715, ___startValue_57)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_startValue_57() const { return ___startValue_57; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715, ___endValue_58)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_endValue_58() const { return ___endValue_58; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715, ___changeValue_59)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_changeValue_59() const { return ___changeValue_59; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715, ___plugOptions_60)); }
	inline NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  get_plugOptions_60() const { return ___plugOptions_60; }
	inline NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715, ___getter_61)); }
	inline DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715, ___setter_62)); }
	inline DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___startValue_57)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startValue_57() const { return ___startValue_57; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___endValue_58)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endValue_58() const { return ___endValue_58; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___changeValue_59)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___plugOptions_60)); }
	inline QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA  get_plugOptions_60() const { return ___plugOptions_60; }
	inline QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(QuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___getter_61)); }
	inline DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___setter_62)); }
	inline DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t3C7F9B0CE7215C0D0AC5C7D7E96C515C82436485 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ___startValue_57)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_startValue_57() const { return ___startValue_57; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ___endValue_58)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_endValue_58() const { return ___endValue_58; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ___changeValue_59)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_changeValue_59() const { return ___changeValue_59; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ___plugOptions_60)); }
	inline RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C  get_plugOptions_60() const { return ___plugOptions_60; }
	inline RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(RectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ___getter_61)); }
	inline DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ___setter_62)); }
	inline DOSetter_1_t3C7F9B0CE7215C0D0AC5C7D7E96C515C82436485 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t3C7F9B0CE7215C0D0AC5C7D7E96C515C82436485 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t3C7F9B0CE7215C0D0AC5C7D7E96C515C82436485 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	float ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	float ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	float ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___startValue_57)); }
	inline float get_startValue_57() const { return ___startValue_57; }
	inline float* get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(float value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___endValue_58)); }
	inline float get_endValue_58() const { return ___endValue_58; }
	inline float* get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(float value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___changeValue_59)); }
	inline float get_changeValue_59() const { return ___changeValue_59; }
	inline float* get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(float value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___plugOptions_60)); }
	inline FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603  get_plugOptions_60() const { return ___plugOptions_60; }
	inline FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(FloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___getter_61)); }
	inline DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___setter_62)); }
	inline DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>
struct TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	uint32_t ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	uint32_t ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	uint32_t ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	UintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tDDF46A9A2BD2CF40775822DBAC21F8E70FBE09C6 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C, ___startValue_57)); }
	inline uint32_t get_startValue_57() const { return ___startValue_57; }
	inline uint32_t* get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(uint32_t value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C, ___endValue_58)); }
	inline uint32_t get_endValue_58() const { return ___endValue_58; }
	inline uint32_t* get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(uint32_t value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C, ___changeValue_59)); }
	inline uint32_t get_changeValue_59() const { return ___changeValue_59; }
	inline uint32_t* get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(uint32_t value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C, ___plugOptions_60)); }
	inline UintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9  get_plugOptions_60() const { return ___plugOptions_60; }
	inline UintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(UintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C, ___getter_61)); }
	inline DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C, ___setter_62)); }
	inline DOSetter_1_tDDF46A9A2BD2CF40775822DBAC21F8E70FBE09C6 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tDDF46A9A2BD2CF40775822DBAC21F8E70FBE09C6 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tDDF46A9A2BD2CF40775822DBAC21F8E70FBE09C6 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	uint64_t ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	uint64_t ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	uint64_t ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t958CC463FE354998F7EF7ED30D9AAE18526C5533 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293, ___startValue_57)); }
	inline uint64_t get_startValue_57() const { return ___startValue_57; }
	inline uint64_t* get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(uint64_t value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293, ___endValue_58)); }
	inline uint64_t get_endValue_58() const { return ___endValue_58; }
	inline uint64_t* get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(uint64_t value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293, ___changeValue_59)); }
	inline uint64_t get_changeValue_59() const { return ___changeValue_59; }
	inline uint64_t* get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(uint64_t value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293, ___plugOptions_60)); }
	inline NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  get_plugOptions_60() const { return ___plugOptions_60; }
	inline NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293, ___getter_61)); }
	inline DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293, ___setter_62)); }
	inline DOSetter_1_t958CC463FE354998F7EF7ED30D9AAE18526C5533 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t958CC463FE354998F7EF7ED30D9AAE18526C5533 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t958CC463FE354998F7EF7ED30D9AAE18526C5533 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>
struct TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8, ___startValue_57)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_startValue_57() const { return ___startValue_57; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8, ___endValue_58)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_endValue_58() const { return ___endValue_58; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8, ___changeValue_59)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8, ___plugOptions_60)); }
	inline CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436  get_plugOptions_60() const { return ___plugOptions_60; }
	inline CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(CircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8, ___getter_61)); }
	inline DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8, ___setter_62)); }
	inline DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ___startValue_57)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_startValue_57() const { return ___startValue_57; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ___endValue_58)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_endValue_58() const { return ___endValue_58; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ___changeValue_59)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ___plugOptions_60)); }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  get_plugOptions_60() const { return ___plugOptions_60; }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ___getter_61)); }
	inline DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ___setter_62)); }
	inline DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	RuntimeObject * ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	RuntimeObject * ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	RuntimeObject * ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569, ___startValue_57)); }
	inline RuntimeObject * get_startValue_57() const { return ___startValue_57; }
	inline RuntimeObject ** get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(RuntimeObject * value)
	{
		___startValue_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startValue_57), (void*)value);
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569, ___endValue_58)); }
	inline RuntimeObject * get_endValue_58() const { return ___endValue_58; }
	inline RuntimeObject ** get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(RuntimeObject * value)
	{
		___endValue_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endValue_58), (void*)value);
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569, ___changeValue_59)); }
	inline RuntimeObject * get_changeValue_59() const { return ___changeValue_59; }
	inline RuntimeObject ** get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(RuntimeObject * value)
	{
		___changeValue_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeValue_59), (void*)value);
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569, ___plugOptions_60)); }
	inline PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A  get_plugOptions_60() const { return ___plugOptions_60; }
	inline PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A  value)
	{
		___plugOptions_60 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___plugOptions_60))->___lookAtTransform_6), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___plugOptions_60))->___parent_11), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569, ___getter_61)); }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569, ___setter_62)); }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	RuntimeObject * ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	RuntimeObject * ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	RuntimeObject * ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5, ___startValue_57)); }
	inline RuntimeObject * get_startValue_57() const { return ___startValue_57; }
	inline RuntimeObject ** get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(RuntimeObject * value)
	{
		___startValue_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startValue_57), (void*)value);
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5, ___endValue_58)); }
	inline RuntimeObject * get_endValue_58() const { return ___endValue_58; }
	inline RuntimeObject ** get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(RuntimeObject * value)
	{
		___endValue_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endValue_58), (void*)value);
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5, ___changeValue_59)); }
	inline RuntimeObject * get_changeValue_59() const { return ___changeValue_59; }
	inline RuntimeObject ** get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(RuntimeObject * value)
	{
		___changeValue_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeValue_59), (void*)value);
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5, ___plugOptions_60)); }
	inline Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B  get_plugOptions_60() const { return ___plugOptions_60; }
	inline Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(Vector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B  value)
	{
		___plugOptions_60 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___plugOptions_60))->___durations_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5, ___getter_61)); }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5, ___setter_62)); }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___startValue_57)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startValue_57() const { return ___startValue_57; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___endValue_58)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endValue_58() const { return ___endValue_58; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___changeValue_59)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___plugOptions_60)); }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  get_plugOptions_60() const { return ___plugOptions_60; }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___getter_61)); }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___setter_62)); }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ___startValue_57)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_startValue_57() const { return ___startValue_57; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ___endValue_58)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_endValue_58() const { return ___endValue_58; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ___changeValue_59)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ___plugOptions_60)); }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  get_plugOptions_60() const { return ___plugOptions_60; }
	inline VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(VectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ___getter_61)); }
	inline DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ___setter_62)); }
	inline DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void DG.Tweening.Tween::set_isRelative(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Core.Debugger::ShouldLogSafeModeCapturedError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A (const RuntimeMethod* method);
// System.Reflection.MethodBase System.Exception::get_TargetSite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodBase_t * Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247 (Exception_t * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger::LogSafeModeCapturedError(System.Object,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C (RuntimeObject * ___message0, Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t1, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.TweenManager::Despawn(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenManager_Despawn_mBA89672AB846AA136C04EBBED03570775D5C2373 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, bool ___modifyActiveLists1, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.SafeModeReport::Add(DG.Tweening.Core.SafeModeReport/SafeModeReportType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7 (SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Tween::DoGoto(DG.Tweening.Tween,System.Single,System.Int32,DG.Tweening.Core.Enums.UpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, float ___toPosition1, int32_t ___toCompletedLoops2, int32_t ___updateMode3, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Tween::get_isRelative()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger::LogError(System.Object,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D (RuntimeObject * ___message0, Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t1, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeEndValue<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * Tweener_DoChangeEndValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_mBA48F4533E2748C00EEEE2C171BE084D44E7F23B_gshared (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ___t0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newEndValue1, float ___newDuration2, bool ___snapStartValue3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_0 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___newEndValue1;
		NullCheck(L_0);
		L_0->set_endValue_58(L_1);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_2 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2, (bool)0, /*hidden argument*/NULL);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_00c0;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_002b;
		}
	}
	{
		return (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)NULL;
	}

IL_002b:
	{
		bool L_9 = ___snapStartValue3;
		if (!L_9)
		{
			goto IL_00b4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_10 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_10)
		{
			goto IL_0097;
		}
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_11 = ___t0;
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_12 = ___t0;
		NullCheck(L_12);
		ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * L_13 = (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_12->get_tweenPlugin_63();
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_14 = ___t0;
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_15 = ___t0;
		NullCheck(L_15);
		DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * L_16 = (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_15->get_getter_61();
		NullCheck((DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = VirtFuncInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_13, (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_14, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_17);
		NullCheck(L_11);
		L_11->set_startValue_57(L_18);
		goto IL_00b4;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0057;
		}
		throw e;
	}

CATCH_0057:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_19;
			L_19 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0081;
			}
		}

IL_005f:
		{
			Exception_t * L_20 = V_0;
			NullCheck((Exception_t *)L_20);
			MethodBase_t * L_21;
			L_21 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_20, /*hidden argument*/NULL);
			Exception_t * L_22 = V_0;
			NullCheck((Exception_t *)L_22);
			String_t* L_23;
			L_23 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_22);
			Exception_t * L_24 = V_0;
			NullCheck((Exception_t *)L_24);
			String_t* L_25;
			L_25 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Exception::get_StackTrace() */, (Exception_t *)L_24);
			String_t* L_26;
			L_26 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9365D4C1C592580176E99B94E4C370640A2640F)), (RuntimeObject *)L_21, (RuntimeObject *)L_23, (RuntimeObject *)L_25, /*hidden argument*/NULL);
			TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_27 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_26, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27, /*hidden argument*/NULL);
		}

IL_0081:
		{
			TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_28 = ___t0;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TweenManager_t3FB368091E5C88EE9C5F370B735BCEBD5EB00A5C_il2cpp_TypeInfo_var)));
			TweenManager_Despawn_mBA89672AB846AA136C04EBBED03570775D5C2373((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_28, (bool)1, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)1, /*hidden argument*/NULL);
			V_1 = (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00ed;
		}
	} // end catch (depth: 1)

IL_0097:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_29 = ___t0;
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_30 = ___t0;
		NullCheck(L_30);
		ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * L_31 = (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_30->get_tweenPlugin_63();
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_32 = ___t0;
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_33 = ___t0;
		NullCheck(L_33);
		DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * L_34 = (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_33->get_getter_61();
		NullCheck((DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_34, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = VirtFuncInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_31, (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_32, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_35);
		NullCheck(L_29);
		L_29->set_startValue_57(L_36);
	}

IL_00b4:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_37 = ___t0;
		NullCheck(L_37);
		ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * L_38 = (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_37->get_tweenPlugin_63();
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_39 = ___t0;
		NullCheck((ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_38);
		VirtActionInvoker1< TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_38, (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_39);
	}

IL_00c0:
	{
		float L_40 = ___newDuration2;
		if ((!(((float)L_40) > ((float)(0.0f)))))
		{
			goto IL_00dd;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_41 = ___t0;
		float L_42 = ___newDuration2;
		NullCheck(L_41);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_41)->set_duration_26(L_42);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_43 = ___t0;
		NullCheck(L_43);
		bool L_44 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_43)->get_startupDone_45();
		if (!L_44)
		{
			goto IL_00dd;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_45 = ___t0;
		((  void (*) (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_45, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_00dd:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_46 = ___t0;
		bool L_47;
		L_47 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_46, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_48 = ___t0;
		return (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_48;
	}

IL_00ed:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_49 = V_1;
		return (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_49;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeEndValue<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * Tweener_DoChangeEndValue_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_mF77C5E529B2A72601CEBF81DF6957D7BBF8928FB_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * ___t0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___newEndValue1, float ___newDuration2, bool ___snapStartValue3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_0 = ___t0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___newEndValue1;
		NullCheck(L_0);
		L_0->set_endValue_58(L_1);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_2 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2, (bool)0, /*hidden argument*/NULL);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_00c0;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_002b;
		}
	}
	{
		return (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)NULL;
	}

IL_002b:
	{
		bool L_9 = ___snapStartValue3;
		if (!L_9)
		{
			goto IL_00b4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_10 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_10)
		{
			goto IL_0097;
		}
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_11 = ___t0;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_12 = ___t0;
		NullCheck(L_12);
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_13 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_12->get_tweenPlugin_63();
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_14 = ___t0;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_15 = ___t0;
		NullCheck(L_15);
		DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 * L_16 = (DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)L_15->get_getter_61();
		NullCheck((DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)L_16);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_17;
		L_17 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_13);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_18;
		L_18 = VirtFuncInvoker2< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_13, (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_14, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_17);
		NullCheck(L_11);
		L_11->set_startValue_57(L_18);
		goto IL_00b4;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0057;
		}
		throw e;
	}

CATCH_0057:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_19;
			L_19 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0081;
			}
		}

IL_005f:
		{
			Exception_t * L_20 = V_0;
			NullCheck((Exception_t *)L_20);
			MethodBase_t * L_21;
			L_21 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_20, /*hidden argument*/NULL);
			Exception_t * L_22 = V_0;
			NullCheck((Exception_t *)L_22);
			String_t* L_23;
			L_23 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_22);
			Exception_t * L_24 = V_0;
			NullCheck((Exception_t *)L_24);
			String_t* L_25;
			L_25 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Exception::get_StackTrace() */, (Exception_t *)L_24);
			String_t* L_26;
			L_26 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9365D4C1C592580176E99B94E4C370640A2640F)), (RuntimeObject *)L_21, (RuntimeObject *)L_23, (RuntimeObject *)L_25, /*hidden argument*/NULL);
			TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_27 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_26, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27, /*hidden argument*/NULL);
		}

IL_0081:
		{
			TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_28 = ___t0;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TweenManager_t3FB368091E5C88EE9C5F370B735BCEBD5EB00A5C_il2cpp_TypeInfo_var)));
			TweenManager_Despawn_mBA89672AB846AA136C04EBBED03570775D5C2373((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_28, (bool)1, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)1, /*hidden argument*/NULL);
			V_1 = (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00ed;
		}
	} // end catch (depth: 1)

IL_0097:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_29 = ___t0;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_30 = ___t0;
		NullCheck(L_30);
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_31 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_30->get_tweenPlugin_63();
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_32 = ___t0;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_33 = ___t0;
		NullCheck(L_33);
		DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 * L_34 = (DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)L_33->get_getter_61();
		NullCheck((DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)L_34);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_35;
		L_35 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)L_34, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_31);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_36;
		L_36 = VirtFuncInvoker2< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_31, (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_32, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_35);
		NullCheck(L_29);
		L_29->set_startValue_57(L_36);
	}

IL_00b4:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_37 = ___t0;
		NullCheck(L_37);
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_38 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_37->get_tweenPlugin_63();
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_39 = ___t0;
		NullCheck((ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_38);
		VirtActionInvoker1< TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_38, (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_39);
	}

IL_00c0:
	{
		float L_40 = ___newDuration2;
		if ((!(((float)L_40) > ((float)(0.0f)))))
		{
			goto IL_00dd;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_41 = ___t0;
		float L_42 = ___newDuration2;
		NullCheck(L_41);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_41)->set_duration_26(L_42);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_43 = ___t0;
		NullCheck(L_43);
		bool L_44 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_43)->get_startupDone_45();
		if (!L_44)
		{
			goto IL_00dd;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_45 = ___t0;
		((  void (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_45, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_00dd:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_46 = ___t0;
		bool L_47;
		L_47 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_46, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_48 = ___t0;
		return (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_48;
	}

IL_00ed:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_49 = V_1;
		return (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_49;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * Tweener_DoChangeStartValue_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_TisColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_mDB15A1766D95A5CA769FD416A65A781B4D979705_gshared (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * ___t0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_1 = ___t0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * L_10 = (ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_9->get_tweenPlugin_63();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_10);
		VirtActionInvoker1< TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_10, (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_17 = ___t0;
		((  void (*) (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_20 = ___t0;
		return (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * Tweener_DoChangeStartValue_TisColor2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9_TisColor2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9_TisColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_m7CC56ADC20C2C6064D20FD8C909320E2ACD2647C_gshared (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * ___t0, Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_1 = ___t0;
		Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 * L_10 = (ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_9->get_tweenPlugin_63();
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_10);
		VirtActionInvoker1< TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_10, (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_17 = ___t0;
		((  void (*) (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_20 = ___t0;
		return (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * Tweener_DoChangeStartValue_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m78FBF6D338B60DF7E8C27FAB9A4972469E85A12D_gshared (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * ___t0, double ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_1 = ___t0;
		double L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 * L_10 = (ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_9->get_tweenPlugin_63();
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_10);
		VirtActionInvoker1< TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_10, (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_17 = ___t0;
		((  void (*) (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_20 = ___t0;
		return (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * Tweener_DoChangeStartValue_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m7A8347B9AFB3491F951D057977CC8ABD674F3BED_gshared (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * ___t0, int32_t ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_1 = ___t0;
		int32_t L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * L_10 = (ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_9->get_tweenPlugin_63();
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_10);
		VirtActionInvoker1< TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_10, (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_17 = ___t0;
		((  void (*) (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_20 = ___t0;
		return (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * Tweener_DoChangeStartValue_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_mE63DD6B2B2190E05306F7D1E8AB37FAFF98B30F2_gshared (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * ___t0, int64_t ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_1 = ___t0;
		int64_t L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 * L_10 = (ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_9->get_tweenPlugin_63();
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_10);
		VirtActionInvoker1< TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_10, (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_17 = ___t0;
		((  void (*) (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_20 = ___t0;
		return (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<System.Object,System.Object,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * Tweener_DoChangeStartValue_TisRuntimeObject_TisRuntimeObject_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_mF47E12D870C644A851042162697D28BA2A12AA54_gshared (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * ___t0, RuntimeObject * ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_1 = ___t0;
		RuntimeObject * L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 * L_10 = (ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_9->get_tweenPlugin_63();
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_10);
		VirtActionInvoker1< TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Object,System.Object,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_10, (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_17 = ___t0;
		((  void (*) (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_20 = ___t0;
		return (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<System.Object,System.Object,DG.Tweening.Plugins.Options.StringOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * Tweener_DoChangeStartValue_TisRuntimeObject_TisRuntimeObject_TisStringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_mF4788715E37C59F7B0AACB74BCB22880470F96A5_gshared (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * ___t0, RuntimeObject * ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_1 = ___t0;
		RuntimeObject * L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C * L_10 = (ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_9->get_tweenPlugin_63();
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_10);
		VirtActionInvoker1< TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Object,System.Object,DG.Tweening.Plugins.Options.StringOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_10, (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_17 = ___t0;
		((  void (*) (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_20 = ___t0;
		return (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * Tweener_DoChangeStartValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m61DFD736FA7DDE401178FE982E8816D8458D9350_gshared (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * ___t0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_1 = ___t0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 * L_10 = (ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_9->get_tweenPlugin_63();
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_10);
		VirtActionInvoker1< TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_10, (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_17 = ___t0;
		((  void (*) (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_20 = ___t0;
		return (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * Tweener_DoChangeStartValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisQuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_m32AC1D87FB97436D6412072CC8CD6AC84AC131A5_gshared (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * ___t0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_1 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * L_10 = (ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_9->get_tweenPlugin_63();
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_10);
		VirtActionInvoker1< TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_10, (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_17 = ___t0;
		((  void (*) (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_20 = ___t0;
		return (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * Tweener_DoChangeStartValue_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_TisRectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_m87BE42DD56047B32DE23A88AB2C9CC7BE610D414_gshared (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * ___t0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_1 = ___t0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * L_10 = (ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_9->get_tweenPlugin_63();
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_10);
		VirtActionInvoker1< TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_10, (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_17 = ___t0;
		((  void (*) (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_20 = ___t0;
		return (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * Tweener_DoChangeStartValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisFloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_mF001E41F7562FE92F5A847318C6BB2D4BF9F1CB0_gshared (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * ___t0, float ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_1 = ___t0;
		float L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * L_10 = (ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_9->get_tweenPlugin_63();
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_10);
		VirtActionInvoker1< TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_10, (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_17 = ___t0;
		((  void (*) (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_20 = ___t0;
		return (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * Tweener_DoChangeStartValue_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9_mD491956DA1D944980D44A3F07F9CDB5B4FEBEFD5_gshared (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * ___t0, uint32_t ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_1 = ___t0;
		uint32_t L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 * L_10 = (ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_9->get_tweenPlugin_63();
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_10);
		VirtActionInvoker1< TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_10, (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_17 = ___t0;
		((  void (*) (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_20 = ___t0;
		return (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * Tweener_DoChangeStartValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m3B6DE5CA15A51588391B461EBA4119DCEC9BBE9B_gshared (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * ___t0, uint64_t ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_1 = ___t0;
		uint64_t L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 * L_10 = (ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_9->get_tweenPlugin_63();
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_10);
		VirtActionInvoker1< TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_10, (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_17 = ___t0;
		((  void (*) (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_20 = ___t0;
		return (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * Tweener_DoChangeStartValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisCircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436_m384846049EE948AC63282EB771B05A1337F63F94_gshared (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * ___t0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_1 = ___t0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC * L_10 = (ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_9->get_tweenPlugin_63();
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_10);
		VirtActionInvoker1< TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_10, (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_17 = ___t0;
		((  void (*) (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_20 = ___t0;
		return (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * Tweener_DoChangeStartValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_mC014254E8F1F4D5EE5182BF0EA8920E4628B3E79_gshared (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * ___t0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_1 = ___t0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * L_10 = (ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_9->get_tweenPlugin_63();
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_10);
		VirtActionInvoker1< TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_10, (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_17 = ___t0;
		((  void (*) (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_20 = ___t0;
		return (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * Tweener_DoChangeStartValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisRuntimeObject_TisPathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_m1C52B0FF18B2D0536F004C8C02D3ED9261D979C8_gshared (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * ___t0, RuntimeObject * ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_1 = ___t0;
		RuntimeObject * L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E * L_10 = (ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_9->get_tweenPlugin_63();
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_10);
		VirtActionInvoker1< TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_10, (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_17 = ___t0;
		((  void (*) (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_20 = ___t0;
		return (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * Tweener_DoChangeStartValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisRuntimeObject_TisVector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B_mD6E27E913114BD566ADDE591B60384EC648D6702_gshared (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * ___t0, RuntimeObject * ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_1 = ___t0;
		RuntimeObject * L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF * L_10 = (ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_9->get_tweenPlugin_63();
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_10);
		VirtActionInvoker1< TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_10, (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_17 = ___t0;
		((  void (*) (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_20 = ___t0;
		return (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * Tweener_DoChangeStartValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_mC4553A12B1EB07F6A026497811403CE2652B848F_gshared (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ___t0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_1 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * L_10 = (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_9->get_tweenPlugin_63();
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_10);
		VirtActionInvoker1< TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_10, (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_17 = ___t0;
		((  void (*) (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_20 = ___t0;
		return (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeStartValue<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * Tweener_DoChangeStartValue_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_m7359A721FEC880AE65BC36B6C6F3AD71BF457C7C_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * ___t0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___newStartValue1, float ___newDuration2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_1 = ___t0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___newStartValue1;
		NullCheck(L_1);
		L_1->set_startValue_57(L_2);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_3)->get_startupDone_45();
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_5)->get_specialStartupMode_43();
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_7 = ___t0;
		bool L_8;
		L_8 = ((  bool (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_8)
		{
			goto IL_0028;
		}
	}
	{
		return (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)NULL;
	}

IL_0028:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_9 = ___t0;
		NullCheck(L_9);
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_10 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_9->get_tweenPlugin_63();
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_11 = ___t0;
		NullCheck((ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_10);
		VirtActionInvoker1< TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_10, (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_11);
	}

IL_0034:
	{
		float L_12 = ___newDuration2;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_13 = ___t0;
		float L_14 = ___newDuration2;
		NullCheck(L_13);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->set_duration_26(L_14);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->get_startupDone_45();
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_17 = ___t0;
		((  void (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0051:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_18 = ___t0;
		bool L_19;
		L_19 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_18, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_20 = ___t0;
		return (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * Tweener_DoChangeValues_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_TisColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_mFD7FBFF6AB1AE5DC27FA8552A1A27F7604BD0615_gshared (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * ___t0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newStartValue1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_1 = ___t0;
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_5 = ___t0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_7 = ___t0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * L_16 = (ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_15->get_tweenPlugin_63();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_16);
		VirtActionInvoker1< TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_16, (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_23 = ___t0;
		((  void (*) (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_26 = ___t0;
		return (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * Tweener_DoChangeValues_TisColor2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9_TisColor2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9_TisColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_m81388C30B89311257DE746B4B7668D512155E653_gshared (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * ___t0, Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  ___newStartValue1, Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_1 = ___t0;
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_5 = ___t0;
		Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_7 = ___t0;
		Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 * L_16 = (ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_15->get_tweenPlugin_63();
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_16);
		VirtActionInvoker1< TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_16, (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_23 = ___t0;
		((  void (*) (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_26 = ___t0;
		return (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * Tweener_DoChangeValues_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m94CFDFB7157235383AAC71CE06F9F3937A71D82F_gshared (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * ___t0, double ___newStartValue1, double ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_1 = ___t0;
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_5 = ___t0;
		double L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_7 = ___t0;
		double L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 * L_16 = (ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_15->get_tweenPlugin_63();
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_16);
		VirtActionInvoker1< TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_16, (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_23 = ___t0;
		((  void (*) (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_26 = ___t0;
		return (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * Tweener_DoChangeValues_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m4DFB1258A6000D8FD2BD6CB471EA741658CB5467_gshared (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * ___t0, int32_t ___newStartValue1, int32_t ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_1 = ___t0;
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_5 = ___t0;
		int32_t L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_7 = ___t0;
		int32_t L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * L_16 = (ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_15->get_tweenPlugin_63();
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_16);
		VirtActionInvoker1< TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_16, (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_23 = ___t0;
		((  void (*) (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_26 = ___t0;
		return (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * Tweener_DoChangeValues_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m1C51FB4F058436C3268833183D1914422091038E_gshared (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * ___t0, int64_t ___newStartValue1, int64_t ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_1 = ___t0;
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_5 = ___t0;
		int64_t L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_7 = ___t0;
		int64_t L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 * L_16 = (ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_15->get_tweenPlugin_63();
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_16);
		VirtActionInvoker1< TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_16, (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_23 = ___t0;
		((  void (*) (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_26 = ___t0;
		return (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<System.Object,System.Object,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * Tweener_DoChangeValues_TisRuntimeObject_TisRuntimeObject_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m641839645616E000A68B3C8DF92E4D084B6D3481_gshared (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * ___t0, RuntimeObject * ___newStartValue1, RuntimeObject * ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_1 = ___t0;
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_5 = ___t0;
		RuntimeObject * L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_7 = ___t0;
		RuntimeObject * L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 * L_16 = (ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_15->get_tweenPlugin_63();
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_16);
		VirtActionInvoker1< TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Object,System.Object,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_16, (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_23 = ___t0;
		((  void (*) (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_26 = ___t0;
		return (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<System.Object,System.Object,DG.Tweening.Plugins.Options.StringOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * Tweener_DoChangeValues_TisRuntimeObject_TisRuntimeObject_TisStringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_m2A86C11AE291D438288C1698B5E8D57D29647F8B_gshared (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * ___t0, RuntimeObject * ___newStartValue1, RuntimeObject * ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_1 = ___t0;
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_5 = ___t0;
		RuntimeObject * L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_7 = ___t0;
		RuntimeObject * L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C * L_16 = (ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_15->get_tweenPlugin_63();
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_16);
		VirtActionInvoker1< TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Object,System.Object,DG.Tweening.Plugins.Options.StringOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_16, (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_23 = ___t0;
		((  void (*) (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_26 = ___t0;
		return (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * Tweener_DoChangeValues_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m6E9E85ADD5066933A6C5EA53CEB5706CC3646BFF_gshared (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * ___t0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___newStartValue1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_1 = ___t0;
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_5 = ___t0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_7 = ___t0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 * L_16 = (ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_15->get_tweenPlugin_63();
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_16);
		VirtActionInvoker1< TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_16, (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_23 = ___t0;
		((  void (*) (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_26 = ___t0;
		return (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * Tweener_DoChangeValues_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisQuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_mFEE2ADE49967B3F9D654D0B058B04D0DD4517235_gshared (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * ___t0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newStartValue1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_1 = ___t0;
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_5 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_7 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * L_16 = (ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_15->get_tweenPlugin_63();
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_16);
		VirtActionInvoker1< TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_16, (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_23 = ___t0;
		((  void (*) (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_26 = ___t0;
		return (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * Tweener_DoChangeValues_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_TisRectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_m7289037174CBDAB554C9FDB2F7B3E366935E63D8_gshared (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * ___t0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___newStartValue1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_1 = ___t0;
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_5 = ___t0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_7 = ___t0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * L_16 = (ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_15->get_tweenPlugin_63();
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_16);
		VirtActionInvoker1< TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_16, (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_23 = ___t0;
		((  void (*) (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_26 = ___t0;
		return (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * Tweener_DoChangeValues_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisFloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_m4CB05E4F3D152C9CBAB659519525BB34E46D94C1_gshared (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * ___t0, float ___newStartValue1, float ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_1 = ___t0;
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_5 = ___t0;
		float L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_7 = ___t0;
		float L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * L_16 = (ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_15->get_tweenPlugin_63();
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_16);
		VirtActionInvoker1< TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_16, (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_23 = ___t0;
		((  void (*) (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_26 = ___t0;
		return (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * Tweener_DoChangeValues_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9_m2BB67BADDC33AD569979C7A509901B1762A32804_gshared (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * ___t0, uint32_t ___newStartValue1, uint32_t ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_1 = ___t0;
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_5 = ___t0;
		uint32_t L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_7 = ___t0;
		uint32_t L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 * L_16 = (ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_15->get_tweenPlugin_63();
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_16);
		VirtActionInvoker1< TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_16, (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_23 = ___t0;
		((  void (*) (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_26 = ___t0;
		return (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * Tweener_DoChangeValues_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m8A1C029B0FDB2717F0E2F2B9B1B0B66B421B2AF9_gshared (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * ___t0, uint64_t ___newStartValue1, uint64_t ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_1 = ___t0;
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_5 = ___t0;
		uint64_t L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_7 = ___t0;
		uint64_t L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 * L_16 = (ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_15->get_tweenPlugin_63();
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_16);
		VirtActionInvoker1< TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_16, (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_23 = ___t0;
		((  void (*) (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_26 = ___t0;
		return (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * Tweener_DoChangeValues_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisCircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436_m5A403A61BB8680095C4F96D0DFAD5020D56F1380_gshared (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * ___t0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newStartValue1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_1 = ___t0;
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_5 = ___t0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_7 = ___t0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC * L_16 = (ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_15->get_tweenPlugin_63();
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_16);
		VirtActionInvoker1< TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_16, (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_23 = ___t0;
		((  void (*) (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_26 = ___t0;
		return (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * Tweener_DoChangeValues_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_mA675D72B76A00A26419E051AA08B43789CF4EB53_gshared (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * ___t0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newStartValue1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_1 = ___t0;
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_5 = ___t0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_7 = ___t0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * L_16 = (ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_15->get_tweenPlugin_63();
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_16);
		VirtActionInvoker1< TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_16, (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_23 = ___t0;
		((  void (*) (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_26 = ___t0;
		return (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * Tweener_DoChangeValues_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisRuntimeObject_TisPathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_m998B8B6BF9D81E4A153F5E97D0409D33DD0F4DEE_gshared (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * ___t0, RuntimeObject * ___newStartValue1, RuntimeObject * ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_1 = ___t0;
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_5 = ___t0;
		RuntimeObject * L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_7 = ___t0;
		RuntimeObject * L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E * L_16 = (ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_15->get_tweenPlugin_63();
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_16);
		VirtActionInvoker1< TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_16, (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_23 = ___t0;
		((  void (*) (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_26 = ___t0;
		return (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * Tweener_DoChangeValues_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisRuntimeObject_TisVector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B_mDB5AB24795ECE72740F9B77D2D81BF7163D813C6_gshared (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * ___t0, RuntimeObject * ___newStartValue1, RuntimeObject * ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_1 = ___t0;
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_5 = ___t0;
		RuntimeObject * L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_7 = ___t0;
		RuntimeObject * L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF * L_16 = (ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_15->get_tweenPlugin_63();
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_16);
		VirtActionInvoker1< TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_16, (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_23 = ___t0;
		((  void (*) (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_26 = ___t0;
		return (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * Tweener_DoChangeValues_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_mFFD500AF50AFE35E7EE3CF9D251DD4B749D1CF99_gshared (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ___t0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newStartValue1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_1 = ___t0;
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_5 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_7 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * L_16 = (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_15->get_tweenPlugin_63();
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_16);
		VirtActionInvoker1< TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_16, (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_23 = ___t0;
		((  void (*) (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_26 = ___t0;
		return (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_26;
	}
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.Tweener::DoChangeValues<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T2,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * Tweener_DoChangeValues_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_m5F0EB67CD6D2E919B737EDC2DE6F0213C2EEE4BD_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * ___t0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___newStartValue1, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___newEndValue2, float ___newDuration3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_0 = ___t0;
		NullCheck(L_0);
		((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_0)->set_hasManuallySetStartValue_55((bool)1);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_1 = ___t0;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_2 = ___t0;
		int32_t L_3 = (int32_t)0;
		V_0 = (bool)L_3;
		NullCheck(L_2);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_2)->set_isFrom_21((bool)L_3);
		bool L_4 = V_0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1, (bool)L_4, /*hidden argument*/NULL);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_5 = ___t0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___newStartValue1;
		NullCheck(L_5);
		L_5->set_startValue_57(L_6);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_7 = ___t0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8 = ___newEndValue2;
		NullCheck(L_7);
		L_7->set_endValue_58(L_8);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_9 = ___t0;
		NullCheck(L_9);
		bool L_10 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->get_startupDone_45();
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11)->get_specialStartupMode_43();
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_13 = ___t0;
		bool L_14;
		L_14 = ((  bool (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_14)
		{
			goto IL_003f;
		}
	}
	{
		return (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)NULL;
	}

IL_003f:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_15 = ___t0;
		NullCheck(L_15);
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_16 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_15->get_tweenPlugin_63();
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_17 = ___t0;
		NullCheck((ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_16);
		VirtActionInvoker1< TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_16, (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_17);
	}

IL_004b:
	{
		float L_18 = ___newDuration3;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_19 = ___t0;
		float L_20 = ___newDuration3;
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_duration_26(L_20);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_21 = ___t0;
		NullCheck(L_21);
		bool L_22 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->get_startupDone_45();
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_23 = ___t0;
		((  void (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0068:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_24 = ___t0;
		bool L_25;
		L_25 = Tween_DoGoto_mBB5ECAA333D861AD3491AFAB5E7626D2F1BC310F((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_24, (float)(0.0f), (int32_t)0, (int32_t)2, /*hidden argument*/NULL);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_26 = ___t0;
		return (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_26;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_TisColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_m9C4632DAB12665D05C59A5085290DEF38673CD05_gshared (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * G_B8_0 = NULL;
	TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * G_B9_1 = NULL;
	TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * G_B18_0 = NULL;
	TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * G_B19_1 = NULL;
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_10 = ___t0;
			TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_17 = ___t0;
			TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * L_19 = (ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_18->get_tweenPlugin_63();
			TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_20 = ___t0;
			TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * L_22 = (DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 *)L_21->get_getter_61();
			NullCheck((DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 *)L_22);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23;
			L_23 = ((  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  (*) (DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_19);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
			L_24 = VirtFuncInvoker2< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_19, (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *)L_20, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_34 = ___t0;
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_41 = ___t0;
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * L_43 = (ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_42->get_tweenPlugin_63();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_44 = ___t0;
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * L_46 = (DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 *)L_45->get_getter_61();
		NullCheck((DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 *)L_46);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_47;
		L_47 = ((  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  (*) (DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_43);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48;
		L_48 = VirtFuncInvoker2< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_43, (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *)L_44, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * L_52 = (ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_51->get_tweenPlugin_63();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_52);
		VirtActionInvoker1< TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_52, (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * L_55 = (ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_54->get_tweenPlugin_63();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_55);
		VirtActionInvoker1< TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_55, (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *)L_56);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_57 = ___t0;
		((  void (*) (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisColor2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9_TisColor2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9_TisColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_mF7D762E323D345E072F09E70F410AD39696BFD10_gshared (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * G_B8_0 = NULL;
	TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * G_B9_1 = NULL;
	TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * G_B18_0 = NULL;
	TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * G_B19_1 = NULL;
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_10 = ___t0;
			TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_17 = ___t0;
			TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 * L_19 = (ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_18->get_tweenPlugin_63();
			TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_20 = ___t0;
			TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5 * L_22 = (DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5 *)L_21->get_getter_61();
			NullCheck((DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5 *)L_22);
			Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  L_23;
			L_23 = ((  Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  (*) (DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5 *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_19);
			Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  L_24;
			L_24 = VirtFuncInvoker2< Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9 , TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *, Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_19, (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *)L_20, (Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9 )L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_34 = ___t0;
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_41 = ___t0;
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 * L_43 = (ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_42->get_tweenPlugin_63();
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_44 = ___t0;
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5 * L_46 = (DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5 *)L_45->get_getter_61();
		NullCheck((DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5 *)L_46);
		Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  L_47;
		L_47 = ((  Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  (*) (DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5 *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_43);
		Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  L_48;
		L_48 = VirtFuncInvoker2< Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9 , TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *, Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_43, (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *)L_44, (Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9 )L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 * L_52 = (ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_51->get_tweenPlugin_63();
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_52);
		VirtActionInvoker1< TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_52, (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 * L_55 = (ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_54->get_tweenPlugin_63();
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_55);
		VirtActionInvoker1< TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_55, (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *)L_56);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_57 = ___t0;
		((  void (*) (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m0B27CF446964701642E109BA8997ECAD98C8CD7E_gshared (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * G_B8_0 = NULL;
	TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * G_B9_1 = NULL;
	TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * G_B18_0 = NULL;
	TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * G_B19_1 = NULL;
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_10 = ___t0;
			TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_17 = ___t0;
			TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 * L_19 = (ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_18->get_tweenPlugin_63();
			TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_20 = ___t0;
			TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE * L_22 = (DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE *)L_21->get_getter_61();
			NullCheck((DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE *)L_22);
			double L_23;
			L_23 = ((  double (*) (DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_19);
			double L_24;
			L_24 = VirtFuncInvoker2< double, TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *, double >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_19, (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *)L_20, (double)L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_34 = ___t0;
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_41 = ___t0;
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 * L_43 = (ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_42->get_tweenPlugin_63();
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_44 = ___t0;
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE * L_46 = (DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE *)L_45->get_getter_61();
		NullCheck((DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE *)L_46);
		double L_47;
		L_47 = ((  double (*) (DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_43);
		double L_48;
		L_48 = VirtFuncInvoker2< double, TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *, double >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_43, (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *)L_44, (double)L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 * L_52 = (ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_51->get_tweenPlugin_63();
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_52);
		VirtActionInvoker1< TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_52, (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 * L_55 = (ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_54->get_tweenPlugin_63();
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_55);
		VirtActionInvoker1< TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_55, (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *)L_56);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_57 = ___t0;
		((  void (*) (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m3F222EA77F985DD7D1A5560989A2E8EE6CBBCF0F_gshared (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * G_B8_0 = NULL;
	TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * G_B9_1 = NULL;
	TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * G_B18_0 = NULL;
	TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * G_B19_1 = NULL;
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_10 = ___t0;
			TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_17 = ___t0;
			TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * L_19 = (ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_18->get_tweenPlugin_63();
			TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_20 = ___t0;
			TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE * L_22 = (DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE *)L_21->get_getter_61();
			NullCheck((DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE *)L_22);
			int32_t L_23;
			L_23 = ((  int32_t (*) (DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_19);
			int32_t L_24;
			L_24 = VirtFuncInvoker2< int32_t, TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *, int32_t >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_19, (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *)L_20, (int32_t)L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_34 = ___t0;
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_41 = ___t0;
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * L_43 = (ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_42->get_tweenPlugin_63();
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_44 = ___t0;
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE * L_46 = (DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE *)L_45->get_getter_61();
		NullCheck((DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE *)L_46);
		int32_t L_47;
		L_47 = ((  int32_t (*) (DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_43);
		int32_t L_48;
		L_48 = VirtFuncInvoker2< int32_t, TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *, int32_t >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_43, (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *)L_44, (int32_t)L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * L_52 = (ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_51->get_tweenPlugin_63();
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_52);
		VirtActionInvoker1< TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_52, (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * L_55 = (ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_54->get_tweenPlugin_63();
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_55);
		VirtActionInvoker1< TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_55, (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *)L_56);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_57 = ___t0;
		((  void (*) (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m29BFF8EE20B3ED3C171AF5D8F9B2C2E4BE5A36F4_gshared (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * G_B8_0 = NULL;
	TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * G_B9_1 = NULL;
	TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * G_B18_0 = NULL;
	TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * G_B19_1 = NULL;
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_10 = ___t0;
			TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_17 = ___t0;
			TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 * L_19 = (ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_18->get_tweenPlugin_63();
			TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_20 = ___t0;
			TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B * L_22 = (DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B *)L_21->get_getter_61();
			NullCheck((DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B *)L_22);
			int64_t L_23;
			L_23 = ((  int64_t (*) (DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_19);
			int64_t L_24;
			L_24 = VirtFuncInvoker2< int64_t, TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *, int64_t >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_19, (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *)L_20, (int64_t)L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_34 = ___t0;
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_41 = ___t0;
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 * L_43 = (ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_42->get_tweenPlugin_63();
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_44 = ___t0;
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B * L_46 = (DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B *)L_45->get_getter_61();
		NullCheck((DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B *)L_46);
		int64_t L_47;
		L_47 = ((  int64_t (*) (DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_43);
		int64_t L_48;
		L_48 = VirtFuncInvoker2< int64_t, TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *, int64_t >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_43, (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *)L_44, (int64_t)L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 * L_52 = (ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_51->get_tweenPlugin_63();
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_52);
		VirtActionInvoker1< TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_52, (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 * L_55 = (ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_54->get_tweenPlugin_63();
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_55);
		VirtActionInvoker1< TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_55, (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *)L_56);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_57 = ___t0;
		((  void (*) (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<System.Object,System.Object,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisRuntimeObject_TisRuntimeObject_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m5C47310D75568AB2FA39803CC9DB36A5430981A7_gshared (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * G_B8_0 = NULL;
	TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * G_B9_1 = NULL;
	TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * G_B18_0 = NULL;
	TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * G_B19_1 = NULL;
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_10 = ___t0;
			TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_17 = ___t0;
			TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 * L_19 = (ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_18->get_tweenPlugin_63();
			TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_20 = ___t0;
			TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 * L_22 = (DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 *)L_21->get_getter_61();
			NullCheck((DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 *)L_22);
			RuntimeObject * L_23;
			L_23 = ((  RuntimeObject * (*) (DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_19);
			RuntimeObject * L_24;
			L_24 = VirtFuncInvoker2< RuntimeObject *, TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *, RuntimeObject * >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Object,System.Object,DG.Tweening.Plugins.Options.NoOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_19, (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *)L_20, (RuntimeObject *)L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_34 = ___t0;
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_41 = ___t0;
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 * L_43 = (ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_42->get_tweenPlugin_63();
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_44 = ___t0;
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 * L_46 = (DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 *)L_45->get_getter_61();
		NullCheck((DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 *)L_46);
		RuntimeObject * L_47;
		L_47 = ((  RuntimeObject * (*) (DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_43);
		RuntimeObject * L_48;
		L_48 = VirtFuncInvoker2< RuntimeObject *, TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *, RuntimeObject * >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Object,System.Object,DG.Tweening.Plugins.Options.NoOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_43, (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *)L_44, (RuntimeObject *)L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 * L_52 = (ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_51->get_tweenPlugin_63();
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_52);
		VirtActionInvoker1< TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Object,System.Object,DG.Tweening.Plugins.Options.NoOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_52, (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 * L_55 = (ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_54->get_tweenPlugin_63();
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_55);
		VirtActionInvoker1< TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Object,System.Object,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_55, (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *)L_56);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_57 = ___t0;
		((  void (*) (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<System.Object,System.Object,DG.Tweening.Plugins.Options.StringOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisRuntimeObject_TisRuntimeObject_TisStringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_m6631535343148428825AFF62AC6781FE71187F88_gshared (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * G_B8_0 = NULL;
	TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * G_B9_1 = NULL;
	TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * G_B18_0 = NULL;
	TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * G_B19_1 = NULL;
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_10 = ___t0;
			TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_17 = ___t0;
			TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C * L_19 = (ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_18->get_tweenPlugin_63();
			TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_20 = ___t0;
			TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 * L_22 = (DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 *)L_21->get_getter_61();
			NullCheck((DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 *)L_22);
			RuntimeObject * L_23;
			L_23 = ((  RuntimeObject * (*) (DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_19);
			RuntimeObject * L_24;
			L_24 = VirtFuncInvoker2< RuntimeObject *, TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *, RuntimeObject * >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Object,System.Object,DG.Tweening.Plugins.Options.StringOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_19, (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *)L_20, (RuntimeObject *)L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_34 = ___t0;
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_41 = ___t0;
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C * L_43 = (ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_42->get_tweenPlugin_63();
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_44 = ___t0;
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 * L_46 = (DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 *)L_45->get_getter_61();
		NullCheck((DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 *)L_46);
		RuntimeObject * L_47;
		L_47 = ((  RuntimeObject * (*) (DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_43);
		RuntimeObject * L_48;
		L_48 = VirtFuncInvoker2< RuntimeObject *, TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *, RuntimeObject * >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Object,System.Object,DG.Tweening.Plugins.Options.StringOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_43, (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *)L_44, (RuntimeObject *)L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C * L_52 = (ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_51->get_tweenPlugin_63();
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_52);
		VirtActionInvoker1< TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Object,System.Object,DG.Tweening.Plugins.Options.StringOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_52, (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C * L_55 = (ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_54->get_tweenPlugin_63();
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_55);
		VirtActionInvoker1< TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Object,System.Object,DG.Tweening.Plugins.Options.StringOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_55, (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *)L_56);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_57 = ___t0;
		((  void (*) (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m77ABBC614D475639CBD82B7A8D7D196C3819A1B7_gshared (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * G_B8_0 = NULL;
	TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * G_B9_1 = NULL;
	TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * G_B18_0 = NULL;
	TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * G_B19_1 = NULL;
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_10 = ___t0;
			TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_17 = ___t0;
			TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 * L_19 = (ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_18->get_tweenPlugin_63();
			TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_20 = ___t0;
			TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * L_22 = (DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B *)L_21->get_getter_61();
			NullCheck((DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B *)L_22);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
			L_23 = ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_19);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
			L_24 = VirtFuncInvoker2< Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_19, (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *)L_20, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_34 = ___t0;
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_41 = ___t0;
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 * L_43 = (ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_42->get_tweenPlugin_63();
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_44 = ___t0;
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * L_46 = (DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B *)L_45->get_getter_61();
		NullCheck((DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B *)L_46);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_47;
		L_47 = ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_43);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_48;
		L_48 = VirtFuncInvoker2< Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_43, (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *)L_44, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 * L_52 = (ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_51->get_tweenPlugin_63();
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_52);
		VirtActionInvoker1< TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_52, (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 * L_55 = (ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_54->get_tweenPlugin_63();
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_55);
		VirtActionInvoker1< TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_55, (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *)L_56);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_57 = ___t0;
		((  void (*) (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisQuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_m49BB8EC543FDF6361E7645151945C13B6CEB129C_gshared (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * G_B8_0 = NULL;
	TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * G_B9_1 = NULL;
	TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * G_B18_0 = NULL;
	TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * G_B19_1 = NULL;
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_10 = ___t0;
			TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_17 = ___t0;
			TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * L_19 = (ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_18->get_tweenPlugin_63();
			TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_20 = ___t0;
			TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * L_22 = (DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B *)L_21->get_getter_61();
			NullCheck((DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B *)L_22);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
			L_23 = ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_19);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			L_24 = VirtFuncInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_19, (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *)L_20, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_34 = ___t0;
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_41 = ___t0;
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * L_43 = (ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_42->get_tweenPlugin_63();
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_44 = ___t0;
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * L_46 = (DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B *)L_45->get_getter_61();
		NullCheck((DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B *)L_46);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_47;
		L_47 = ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_43);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = VirtFuncInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_43, (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *)L_44, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * L_52 = (ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_51->get_tweenPlugin_63();
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_52);
		VirtActionInvoker1< TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_52, (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * L_55 = (ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_54->get_tweenPlugin_63();
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_55);
		VirtActionInvoker1< TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_55, (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *)L_56);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_57 = ___t0;
		((  void (*) (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_TisRectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_mAE23B5CAC7A2A21ABDE9B03BDE7F75EB5BE5838A_gshared (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * G_B8_0 = NULL;
	TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * G_B9_1 = NULL;
	TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * G_B18_0 = NULL;
	TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * G_B19_1 = NULL;
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_10 = ___t0;
			TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_17 = ___t0;
			TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * L_19 = (ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_18->get_tweenPlugin_63();
			TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_20 = ___t0;
			TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB * L_22 = (DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB *)L_21->get_getter_61();
			NullCheck((DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB *)L_22);
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_23;
			L_23 = ((  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  (*) (DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_19);
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_24;
			L_24 = VirtFuncInvoker2< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_19, (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *)L_20, (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 )L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_34 = ___t0;
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_41 = ___t0;
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * L_43 = (ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_42->get_tweenPlugin_63();
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_44 = ___t0;
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB * L_46 = (DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB *)L_45->get_getter_61();
		NullCheck((DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB *)L_46);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_47;
		L_47 = ((  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  (*) (DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_43);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_48;
		L_48 = VirtFuncInvoker2< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_43, (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *)L_44, (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 )L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * L_52 = (ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_51->get_tweenPlugin_63();
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_52);
		VirtActionInvoker1< TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_52, (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * L_55 = (ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_54->get_tweenPlugin_63();
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_55);
		VirtActionInvoker1< TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_55, (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *)L_56);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_57 = ___t0;
		((  void (*) (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisFloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_mF571A8DCA15511745AC045D374E68E18686003F0_gshared (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * G_B8_0 = NULL;
	TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * G_B9_1 = NULL;
	TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * G_B18_0 = NULL;
	TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * G_B19_1 = NULL;
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_10 = ___t0;
			TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_17 = ___t0;
			TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * L_19 = (ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_18->get_tweenPlugin_63();
			TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_20 = ___t0;
			TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF * L_22 = (DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF *)L_21->get_getter_61();
			NullCheck((DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF *)L_22);
			float L_23;
			L_23 = ((  float (*) (DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_19);
			float L_24;
			L_24 = VirtFuncInvoker2< float, TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *, float >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_19, (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *)L_20, (float)L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_34 = ___t0;
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_41 = ___t0;
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * L_43 = (ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_42->get_tweenPlugin_63();
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_44 = ___t0;
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF * L_46 = (DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF *)L_45->get_getter_61();
		NullCheck((DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF *)L_46);
		float L_47;
		L_47 = ((  float (*) (DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_43);
		float L_48;
		L_48 = VirtFuncInvoker2< float, TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *, float >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_43, (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *)L_44, (float)L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * L_52 = (ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_51->get_tweenPlugin_63();
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_52);
		VirtActionInvoker1< TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_52, (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * L_55 = (ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_54->get_tweenPlugin_63();
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_55);
		VirtActionInvoker1< TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_55, (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *)L_56);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_57 = ___t0;
		((  void (*) (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9_mA083B982A21CC290313F83DC289030FFE3A1BEBF_gshared (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * G_B8_0 = NULL;
	TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * G_B9_1 = NULL;
	TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * G_B18_0 = NULL;
	TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * G_B19_1 = NULL;
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_10 = ___t0;
			TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_17 = ___t0;
			TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 * L_19 = (ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_18->get_tweenPlugin_63();
			TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_20 = ___t0;
			TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940 * L_22 = (DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940 *)L_21->get_getter_61();
			NullCheck((DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940 *)L_22);
			uint32_t L_23;
			L_23 = ((  uint32_t (*) (DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940 *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_19);
			uint32_t L_24;
			L_24 = VirtFuncInvoker2< uint32_t, TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *, uint32_t >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_19, (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *)L_20, (uint32_t)L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_34 = ___t0;
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_41 = ___t0;
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 * L_43 = (ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_42->get_tweenPlugin_63();
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_44 = ___t0;
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940 * L_46 = (DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940 *)L_45->get_getter_61();
		NullCheck((DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940 *)L_46);
		uint32_t L_47;
		L_47 = ((  uint32_t (*) (DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940 *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_43);
		uint32_t L_48;
		L_48 = VirtFuncInvoker2< uint32_t, TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *, uint32_t >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_43, (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *)L_44, (uint32_t)L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 * L_52 = (ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_51->get_tweenPlugin_63();
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_52);
		VirtActionInvoker1< TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_52, (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 * L_55 = (ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_54->get_tweenPlugin_63();
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_55);
		VirtActionInvoker1< TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_55, (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *)L_56);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_57 = ___t0;
		((  void (*) (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_mD8AE1BC954C089FF2D353E4152F9A8BA144ECA75_gshared (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * G_B8_0 = NULL;
	TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * G_B9_1 = NULL;
	TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * G_B18_0 = NULL;
	TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * G_B19_1 = NULL;
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_10 = ___t0;
			TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_17 = ___t0;
			TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 * L_19 = (ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_18->get_tweenPlugin_63();
			TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_20 = ___t0;
			TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5 * L_22 = (DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5 *)L_21->get_getter_61();
			NullCheck((DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5 *)L_22);
			uint64_t L_23;
			L_23 = ((  uint64_t (*) (DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5 *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_19);
			uint64_t L_24;
			L_24 = VirtFuncInvoker2< uint64_t, TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *, uint64_t >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_19, (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *)L_20, (uint64_t)L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_34 = ___t0;
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_41 = ___t0;
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 * L_43 = (ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_42->get_tweenPlugin_63();
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_44 = ___t0;
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5 * L_46 = (DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5 *)L_45->get_getter_61();
		NullCheck((DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5 *)L_46);
		uint64_t L_47;
		L_47 = ((  uint64_t (*) (DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5 *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_43);
		uint64_t L_48;
		L_48 = VirtFuncInvoker2< uint64_t, TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *, uint64_t >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_43, (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *)L_44, (uint64_t)L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 * L_52 = (ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_51->get_tweenPlugin_63();
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_52);
		VirtActionInvoker1< TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_52, (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 * L_55 = (ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_54->get_tweenPlugin_63();
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_55);
		VirtActionInvoker1< TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_55, (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *)L_56);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_57 = ___t0;
		((  void (*) (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisCircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436_mB00270203AAC7465BE5CD871CF51D8AB0A24549C_gshared (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * G_B8_0 = NULL;
	TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * G_B9_1 = NULL;
	TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * G_B18_0 = NULL;
	TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * G_B19_1 = NULL;
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_10 = ___t0;
			TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_17 = ___t0;
			TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC * L_19 = (ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_18->get_tweenPlugin_63();
			TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_20 = ___t0;
			TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * L_22 = (DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF *)L_21->get_getter_61();
			NullCheck((DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF *)L_22);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
			L_23 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_19);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
			L_24 = VirtFuncInvoker2< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_19, (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *)L_20, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_34 = ___t0;
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_41 = ___t0;
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC * L_43 = (ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_42->get_tweenPlugin_63();
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_44 = ___t0;
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * L_46 = (DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF *)L_45->get_getter_61();
		NullCheck((DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF *)L_46);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		L_47 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_43);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48;
		L_48 = VirtFuncInvoker2< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_43, (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *)L_44, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC * L_52 = (ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_51->get_tweenPlugin_63();
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_52);
		VirtActionInvoker1< TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_52, (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC * L_55 = (ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_54->get_tweenPlugin_63();
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_55);
		VirtActionInvoker1< TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_55, (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *)L_56);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_57 = ___t0;
		((  void (*) (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_m8F7AB828101E3CFEC342C8FEC4E30A6D7074CB83_gshared (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * G_B8_0 = NULL;
	TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * G_B9_1 = NULL;
	TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * G_B18_0 = NULL;
	TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * G_B19_1 = NULL;
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_10 = ___t0;
			TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_17 = ___t0;
			TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * L_19 = (ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_18->get_tweenPlugin_63();
			TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_20 = ___t0;
			TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * L_22 = (DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF *)L_21->get_getter_61();
			NullCheck((DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF *)L_22);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
			L_23 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_19);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
			L_24 = VirtFuncInvoker2< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_19, (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *)L_20, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_34 = ___t0;
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_41 = ___t0;
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * L_43 = (ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_42->get_tweenPlugin_63();
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_44 = ___t0;
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * L_46 = (DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF *)L_45->get_getter_61();
		NullCheck((DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF *)L_46);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		L_47 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_43);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48;
		L_48 = VirtFuncInvoker2< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_43, (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *)L_44, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * L_52 = (ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_51->get_tweenPlugin_63();
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_52);
		VirtActionInvoker1< TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_52, (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * L_55 = (ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_54->get_tweenPlugin_63();
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_55);
		VirtActionInvoker1< TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_55, (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *)L_56);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_57 = ___t0;
		((  void (*) (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisRuntimeObject_TisPathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_mC9F74FA1719236CFDB1056C0141E2C4F37446B12_gshared (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * G_B8_0 = NULL;
	TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * G_B9_1 = NULL;
	TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * G_B18_0 = NULL;
	TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * G_B19_1 = NULL;
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_10 = ___t0;
			TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_17 = ___t0;
			TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E * L_19 = (ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_18->get_tweenPlugin_63();
			TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_20 = ___t0;
			TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * L_22 = (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_21->get_getter_61();
			NullCheck((DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_22);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
			L_23 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_19);
			RuntimeObject * L_24;
			L_24 = VirtFuncInvoker2< RuntimeObject *, TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_19, (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *)L_20, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_34 = ___t0;
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_41 = ___t0;
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E * L_43 = (ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_42->get_tweenPlugin_63();
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_44 = ___t0;
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * L_46 = (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_45->get_getter_61();
		NullCheck((DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_43);
		RuntimeObject * L_48;
		L_48 = VirtFuncInvoker2< RuntimeObject *, TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_43, (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *)L_44, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E * L_52 = (ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_51->get_tweenPlugin_63();
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_52);
		VirtActionInvoker1< TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_52, (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E * L_55 = (ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_54->get_tweenPlugin_63();
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_55);
		VirtActionInvoker1< TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_55, (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *)L_56);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_57 = ___t0;
		((  void (*) (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisRuntimeObject_TisVector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B_m9414D9036D5482B0242DE74F9D0C644856A36899_gshared (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * G_B8_0 = NULL;
	TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * G_B9_1 = NULL;
	TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * G_B18_0 = NULL;
	TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * G_B19_1 = NULL;
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_10 = ___t0;
			TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_17 = ___t0;
			TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF * L_19 = (ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_18->get_tweenPlugin_63();
			TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_20 = ___t0;
			TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * L_22 = (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_21->get_getter_61();
			NullCheck((DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_22);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
			L_23 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_19);
			RuntimeObject * L_24;
			L_24 = VirtFuncInvoker2< RuntimeObject *, TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_19, (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *)L_20, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_34 = ___t0;
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_41 = ___t0;
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF * L_43 = (ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_42->get_tweenPlugin_63();
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_44 = ___t0;
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * L_46 = (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_45->get_getter_61();
		NullCheck((DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_43);
		RuntimeObject * L_48;
		L_48 = VirtFuncInvoker2< RuntimeObject *, TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_43, (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *)L_44, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF * L_52 = (ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_51->get_tweenPlugin_63();
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_52);
		VirtActionInvoker1< TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_52, (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF * L_55 = (ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_54->get_tweenPlugin_63();
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_55);
		VirtActionInvoker1< TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_55, (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *)L_56);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_57 = ___t0;
		((  void (*) (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_m69C7891F20AF997FBCC62471D286F722B956A5CA_gshared (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * G_B8_0 = NULL;
	TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * G_B9_1 = NULL;
	TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * G_B18_0 = NULL;
	TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * G_B19_1 = NULL;
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_10 = ___t0;
			TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_17 = ___t0;
			TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * L_19 = (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_18->get_tweenPlugin_63();
			TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_20 = ___t0;
			TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * L_22 = (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_21->get_getter_61();
			NullCheck((DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_22);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
			L_23 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_19);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			L_24 = VirtFuncInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_19, (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_20, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_34 = ___t0;
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_41 = ___t0;
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * L_43 = (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_42->get_tweenPlugin_63();
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_44 = ___t0;
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * L_46 = (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_45->get_getter_61();
		NullCheck((DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_43);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = VirtFuncInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_43, (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_44, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * L_52 = (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_51->get_tweenPlugin_63();
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_52);
		VirtActionInvoker1< TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_52, (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * L_55 = (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_54->get_tweenPlugin_63();
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_55);
		VirtActionInvoker1< TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_55, (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_56);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_57 = ___t0;
		((  void (*) (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Boolean DG.Tweening.Tweener::DoStartup<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_DoStartup_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_m0189931E74ACC2CE69EB399023E37AD95F9FB7C0_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * G_B8_0 = NULL;
	TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * G_B9_1 = NULL;
	TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * G_B18_0 = NULL;
	TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * G_B19_1 = NULL;
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_0 = ___t0;
		NullCheck(L_0);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->set_startupDone_45((bool)1);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_1)->get_specialStartupMode_43();
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_3 = ___t0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = (bool)((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)L_5)->get_hasManuallySetStartValue_55();
		if (L_6)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_7 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_7)
		{
			goto IL_00af;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_8 = ___t0;
			NullCheck(L_8);
			bool L_9 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_8)->get_isFrom_21();
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0036:
		{
			TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_10 = ___t0;
			TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_11 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11);
			bool L_12;
			L_12 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_11, /*hidden argument*/NULL);
			G_B7_0 = L_10;
			if (!L_12)
			{
				G_B8_0 = L_10;
				goto IL_004a;
			}
		}

IL_003f:
		{
			TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_13 = ___t0;
			NullCheck(L_13);
			bool L_14 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_13)->get_isBlendable_22();
			G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			G_B9_1 = G_B7_0;
			goto IL_004b;
		}

IL_004a:
		{
			G_B9_0 = 0;
			G_B9_1 = G_B8_0;
		}

IL_004b:
		{
			NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1);
			Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_15;
			L_15 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B9_1, (bool)G_B9_0);
			TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_16 = ___t0;
			NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16);
			Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_16, (bool)0, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005a:
		{
			TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_17 = ___t0;
			TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_18 = ___t0;
			NullCheck(L_18);
			ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_19 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_18->get_tweenPlugin_63();
			TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_20 = ___t0;
			TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_21 = ___t0;
			NullCheck(L_21);
			DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 * L_22 = (DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)L_21->get_getter_61();
			NullCheck((DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)L_22);
			Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_23;
			L_23 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			NullCheck((ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_19);
			Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_24;
			L_24 = VirtFuncInvoker2< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_19, (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_20, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_23);
			NullCheck(L_17);
			L_17->set_startValue_57(L_24);
		}

IL_0077:
		{
			goto IL_00f8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Exception)
		{
			V_0 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_25;
			L_25 = Debugger_ShouldLogSafeModeCapturedError_mC7B602A00B9DC8B25D35933F6320EA6C9EE9D94A(/*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_009d;
			}
		}

IL_0081:
		{
			Exception_t * L_26 = V_0;
			NullCheck((Exception_t *)L_26);
			MethodBase_t * L_27;
			L_27 = Exception_get_TargetSite_m1E1786737747AE3DD2C3CF49315E9F1B2B1C0247((Exception_t *)L_26, /*hidden argument*/NULL);
			Exception_t * L_28 = V_0;
			NullCheck((Exception_t *)L_28);
			String_t* L_29;
			L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, (Exception_t *)L_28);
			String_t* L_30;
			L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEEC35A7704ECFD616CD15F38FB2BD30AFF7D21B)), (RuntimeObject *)L_27, (RuntimeObject *)L_29, /*hidden argument*/NULL);
			TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_31 = ___t0;
			Debugger_LogSafeModeCapturedError_m8AD82B8ACC8B57A76E7856E25A6D91AEE3C18B7C((RuntimeObject *)L_30, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_31, /*hidden argument*/NULL);
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mA56225BB392A039686BAAA489AE8CEDBF3EBA7C7((SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(SafeModeReport_t91D92DAA68FAE0EAF61A108B88947E3541ED26BC *)(((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))))->get_address_of_safeModeReport_27()), (int32_t)3, /*hidden argument*/NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0135;
		}
	} // end catch (depth: 1)

IL_00af:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_32 = ___t0;
		NullCheck(L_32);
		bool L_33 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_32)->get_isFrom_21();
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_34 = ___t0;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_35 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35);
		bool L_36;
		L_36 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_35, /*hidden argument*/NULL);
		G_B17_0 = L_34;
		if (!L_36)
		{
			G_B18_0 = L_34;
			goto IL_00cb;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_37 = ___t0;
		NullCheck(L_37);
		bool L_38 = (bool)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_37)->get_isBlendable_22();
		G_B19_0 = ((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_00cc:
	{
		NullCheck((Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_39;
		L_39 = VirtFuncInvoker1< Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, bool >::Invoke(13 /* DG.Tweening.Tweener DG.Tweening.Tweener::SetFrom(System.Boolean) */, (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *)G_B19_1, (bool)G_B19_0);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_40 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40);
		Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_40, (bool)0, /*hidden argument*/NULL);
		goto IL_00f8;
	}

IL_00db:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_41 = ___t0;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_42 = ___t0;
		NullCheck(L_42);
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_43 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_42->get_tweenPlugin_63();
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_44 = ___t0;
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_45 = ___t0;
		NullCheck(L_45);
		DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 * L_46 = (DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)L_45->get_getter_61();
		NullCheck((DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)L_46);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_47;
		L_47 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_43);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_48;
		L_48 = VirtFuncInvoker2< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(7 /* T2 DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,T1) */, (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_43, (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_44, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_47);
		NullCheck(L_41);
		L_41->set_startValue_57(L_48);
	}

IL_00f8:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_49 = ___t0;
		NullCheck((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49);
		bool L_50;
		L_50 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_51 = ___t0;
		NullCheck(L_51);
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_52 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_51->get_tweenPlugin_63();
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_53 = ___t0;
		NullCheck((ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_52);
		VirtActionInvoker1< TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * >::Invoke(8 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_52, (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_53);
	}

IL_010c:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_54 = ___t0;
		NullCheck(L_54);
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_55 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_54->get_tweenPlugin_63();
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_56 = ___t0;
		NullCheck((ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_55);
		VirtActionInvoker1< TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * >::Invoke(9 /* System.Void DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>::SetChangeValue(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>) */, (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_55, (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_56);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_57 = ___t0;
		((  void (*) (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 *)L_57, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_58 = ___t0;
		NullCheck(L_58);
		float L_59 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_58)->get_duration_26();
		if ((!(((float)L_59) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_60 = ___t0;
		NullCheck(L_60);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_60)->set_easeType_31(((int32_t)36));
	}

IL_0133:
	{
		return (bool)1;
	}

IL_0135:
	{
		bool L_61 = V_1;
		return (bool)L_61;
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_TisColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_m86CE184AA6E26F096084C1FB266066DE1DEDF708_gshared (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisColor2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9_TisColor2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9_TisColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_m76EC54651E71B97DF6748D2F36DCC1E3D76898A2_gshared (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_mE49A7316978A9EB35C78BD7AD0CB75C9646C00DB_gshared (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m213B294388AD58F3446AF04D0B5836C71E99003E_gshared (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m18281F8485C6932BCD5086B1DA60E4F2194B108F_gshared (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<System.Object,System.Object,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisRuntimeObject_TisRuntimeObject_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m04B36BACB064D3617EE2AD3E447EE460682CA81C_gshared (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<System.Object,System.Object,DG.Tweening.Plugins.Options.StringOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisRuntimeObject_TisRuntimeObject_TisStringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_mD5434CF7E79F11FF1E35002A72E0AE04D02C0698_gshared (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_mFA9DBC69050256728FF9D6DE6EAD0C76EB6D8E58_gshared (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisQuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_m0B3AAD0D97020F8ABBAB61A7BB6730E2A7927FC2_gshared (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_TisRectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_mEE3D502F42F24E0B842EE4B61EAF47D37867A090_gshared (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisFloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_m5F2E83CBC4A50107CA2701B5EFE9CA4AAFEC217C_gshared (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9_m3513B097C558D419C8EDE15ABCAD02FB720849EF_gshared (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m40B95254CEC7180E1B571093B588FF5D92B06370_gshared (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisCircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436_mBEA900A1A9D7D187551DA27DE6275B721183CE31_gshared (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_mCF845BFEA0E6210196946403400BE46BA20AAF90_gshared (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisRuntimeObject_TisPathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_mAEE0D28E3F8F77CB7414A5FCB1E898F3DE0D14D6_gshared (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisRuntimeObject_TisVector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B_m3037824D51701E4E14B3B042666469779267A87D_gshared (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_mE9F3ED7FC3BC74DA90885734BB0E74BE41AC7DBB_gshared (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Single DG.Tweening.Tweener::DoUpdateDelay<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tweener_DoUpdateDelay_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_m2D0E59B2EE5CE7F71C60C58800A016320D6E30B6_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * ___t0, float ___elapsed1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = (float)((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_0)->get_delay_29();
		V_0 = (float)L_1;
		float L_2 = ___elapsed1;
		float L_3 = V_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_4 = ___t0;
		float L_5 = V_0;
		NullCheck(L_4);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_4)->set_elapsedDelay_52(L_5);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_6 = ___t0;
		NullCheck(L_6);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_6)->set_delayComplete_53((bool)1);
		float L_7 = ___elapsed1;
		float L_8 = V_0;
		return (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8));
	}

IL_001d:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_9 = ___t0;
		float L_10 = ___elapsed1;
		NullCheck(L_9);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_9)->set_elapsedDelay_52(L_10);
		return (float)(0.0f);
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_TisColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_mF44CC92AFA703E4E319AB1F3A48A9FDE5B017872_gshared (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * ___t0, DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * ___getter1, DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * ___setter2, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endValue3, float ___duration4, ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * G_B8_0 = NULL;
	TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_1 = ___t0;
		ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * L_4 = (ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_5 = ___t0;
		ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * L_6;
		L_6 = ((  ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * L_8 = (ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_9 = ___t0;
		DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_11 = ___t0;
		DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_13 = ___t0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisColor2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9_TisColor2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9_TisColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_mDE20A613361D31F4D6B58C7FA597DAE9D8D1E2E5_gshared (TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * ___t0, DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5 * ___getter1, DOSetter_1_t199F83E107F9B9D685BFE2B08A80CB3E56F2D0E1 * ___setter2, Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  ___endValue3, float ___duration4, ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * G_B8_0 = NULL;
	TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_1 = ___t0;
		ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 * L_4 = (ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_5 = ___t0;
		ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 * L_6;
		L_6 = ((  ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 * L_8 = (ABSTweenPlugin_3_tB718D1780EF12763326977CF503265AC53091649 *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_9 = ___t0;
		DOGetter_1_t783A4E662A567BA80417C22478E2C0D7A691A8F5 * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_11 = ___t0;
		DOSetter_1_t199F83E107F9B9D685BFE2B08A80CB3E56F2D0E1 * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_13 = ___t0;
		Color2_t4086E9F7E3F1C7E8C255F4F17E3BF4228D79EBE9  L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_tFE23006F67E2324961973085651033841616F5BF * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m06935CA8D8675EA84F097325958CA26D983F9269_gshared (TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * ___t0, DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE * ___getter1, DOSetter_1_tEB531C9333D39107AFB45DB640635F4E8125624A * ___setter2, double ___endValue3, float ___duration4, ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * G_B8_0 = NULL;
	TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_1 = ___t0;
		ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 * L_4 = (ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_5 = ___t0;
		ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 * L_6;
		L_6 = ((  ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 * L_8 = (ABSTweenPlugin_3_tEC4768F921D2D61ACB0483B081A635DF637CB7E0 *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_9 = ___t0;
		DOGetter_1_t53CE8060093DF90884AFCA1F8597604FC4057CAE * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_11 = ___t0;
		DOSetter_1_tEB531C9333D39107AFB45DB640635F4E8125624A * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_13 = ___t0;
		double L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_t6538D509EFE6B2B6A1D9E7A722A7CA219E4AB890 * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_mB295605AD0FFB731BCBF211D52F5F9A76414EF23_gshared (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * ___t0, DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE * ___getter1, DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8 * ___setter2, int32_t ___endValue3, float ___duration4, ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * G_B8_0 = NULL;
	TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_1 = ___t0;
		ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * L_4 = (ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_5 = ___t0;
		ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * L_6;
		L_6 = ((  ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * L_8 = (ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_9 = ___t0;
		DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_11 = ___t0;
		DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8 * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_13 = ___t0;
		int32_t L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m0167A563ACD203DAEE12D99225ADE7198AEBB66A_gshared (TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * ___t0, DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B * ___getter1, DOSetter_1_t7B88BDCE7E2B0CB1C48CB2DA8D10300F9AEC832F * ___setter2, int64_t ___endValue3, float ___duration4, ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * G_B8_0 = NULL;
	TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_1 = ___t0;
		ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 * L_4 = (ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_5 = ___t0;
		ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 * L_6;
		L_6 = ((  ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 * L_8 = (ABSTweenPlugin_3_t4A2260E86D1E2CFFDED6D659E80905BE27418BA3 *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_9 = ___t0;
		DOGetter_1_t157F6556020E7896007192B03DA4AD9B980EF07B * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_11 = ___t0;
		DOSetter_1_t7B88BDCE7E2B0CB1C48CB2DA8D10300F9AEC832F * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_13 = ___t0;
		int64_t L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_tD9A17EEC83E1686B3FAEF49532411BEE6715BE6A * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<System.Object,System.Object,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisRuntimeObject_TisRuntimeObject_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m3583B1B44360E9E9D997A82A7D699B44552BF6FE_gshared (TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * ___t0, DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 * ___getter1, DOSetter_1_tA1C3C23D13C5F1464FCE61D087CAF987FB347080 * ___setter2, RuntimeObject * ___endValue3, float ___duration4, ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * G_B8_0 = NULL;
	TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_1 = ___t0;
		ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 * L_4 = (ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_5 = ___t0;
		ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 * L_6;
		L_6 = ((  ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 * L_8 = (ABSTweenPlugin_3_t912D5D95D7225F91759832CC5B91E26FE57E0599 *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_9 = ___t0;
		DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_11 = ___t0;
		DOSetter_1_tA1C3C23D13C5F1464FCE61D087CAF987FB347080 * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_13 = ___t0;
		RuntimeObject * L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_tC62415BF62A85E3E57CC1D0534CAD2605ACE7824 * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<System.Object,System.Object,DG.Tweening.Plugins.Options.StringOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisRuntimeObject_TisRuntimeObject_TisStringOptions_tEBC24F7E4EAEE1FAAF8E33BD1CB4D4C550697104_mC48D4CDEC4A16B81839B5317F8D5FEAC0B251AE2_gshared (TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * ___t0, DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 * ___getter1, DOSetter_1_tA1C3C23D13C5F1464FCE61D087CAF987FB347080 * ___setter2, RuntimeObject * ___endValue3, float ___duration4, ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * G_B8_0 = NULL;
	TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_1 = ___t0;
		ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C * L_4 = (ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_5 = ___t0;
		ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C * L_6;
		L_6 = ((  ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C * L_8 = (ABSTweenPlugin_3_t32649AA4552248CA087AA1F72AC64F500BA5CB8C *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_9 = ___t0;
		DOGetter_1_t7AF3CA81B32BE1DECC611ECB1695586DAD697088 * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_11 = ___t0;
		DOSetter_1_tA1C3C23D13C5F1464FCE61D087CAF987FB347080 * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_13 = ___t0;
		RuntimeObject * L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_t1F63481514B9FE3BA55AD131A58B510226137353 * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m9C897400CB5F9F5D0E053767CFAEE87897E7DB5F_gshared (TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * ___t0, DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * ___getter1, DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 * ___setter2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___endValue3, float ___duration4, ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * G_B8_0 = NULL;
	TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_1 = ___t0;
		ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 * L_4 = (ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_5 = ___t0;
		ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 * L_6;
		L_6 = ((  ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 * L_8 = (ABSTweenPlugin_3_t5859705204C671A2CD038B6F78E48A79D2C2FBF5 *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_9 = ___t0;
		DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_11 = ___t0;
		DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_13 = ___t0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_tF7964410A3877B7CD5485528B0964EEF33C0D715 * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisQuaternionOptions_t9BA8DBC2ED667232C8679DD1BFAE694ED6D19BEA_mFD7EFE6598627A135055D945451B1DAB11590DA6_gshared (TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * ___t0, DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * ___getter1, DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 * ___setter2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue3, float ___duration4, ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * G_B8_0 = NULL;
	TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_1 = ___t0;
		ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * L_4 = (ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_5 = ___t0;
		ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * L_6;
		L_6 = ((  ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 * L_8 = (ABSTweenPlugin_3_tAB54EC748E301BA6BF2478FE60B1309A5011DD82 *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_9 = ___t0;
		DOGetter_1_t1014742323B980B4283DC95730D559E7A022995B * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_11 = ___t0;
		DOSetter_1_t240392DBE22E525C59927D55D807EA0C3DADA670 * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_13 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_t7DD64F4EC391C9965BE57AF51EC240453ADB1EFB * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_TisRectOptions_tB87748888062BF0B1F51E91FF703A81671355E1C_m33ADE13F25CA895B9C186272EF3B6660649B8312_gshared (TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * ___t0, DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB * ___getter1, DOSetter_1_t3C7F9B0CE7215C0D0AC5C7D7E96C515C82436485 * ___setter2, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___endValue3, float ___duration4, ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * G_B8_0 = NULL;
	TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_1 = ___t0;
		ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * L_4 = (ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_5 = ___t0;
		ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * L_6;
		L_6 = ((  ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 * L_8 = (ABSTweenPlugin_3_t33D1808F9AAA0B1CB88D92C80A0614628956C238 *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_9 = ___t0;
		DOGetter_1_t49A4EB0E00FFCAA07677FB8D5FA0F8D5C9439CBB * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_11 = ___t0;
		DOSetter_1_t3C7F9B0CE7215C0D0AC5C7D7E96C515C82436485 * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_13 = ___t0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_tEBEFF26A50AFDEACFC2ABA02E01623A540D6AC4F * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_TisFloatOptions_t83EDE0C4170937A97158EC0DE5DBBABB89818603_m3E56BE22422CA7E508DB33B92A509A9801E73B69_gshared (TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * ___t0, DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF * ___getter1, DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC * ___setter2, float ___endValue3, float ___duration4, ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * G_B8_0 = NULL;
	TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_1 = ___t0;
		ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * L_4 = (ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_5 = ___t0;
		ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * L_6;
		L_6 = ((  ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 * L_8 = (ABSTweenPlugin_3_tCBAE7B953324A17FF3FA58E62DF7FFF2F5870916 *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_9 = ___t0;
		DOGetter_1_tF0D36C857825240D5F2039FD835743757A8410EF * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_11 = ___t0;
		DOSetter_1_tB3077E9EB59C7ADF9A3076747F40B1F3F83296FC * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_13 = ___t0;
		float L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_tB6BE91A77F164BE41E0206B88B735BC28790F5E6 * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUintOptions_tF32D64824C4708B083DB716F323262B7BE4195F9_mFF7E7677A788C06C42D694D3BC52733FE72A28B2_gshared (TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * ___t0, DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940 * ___getter1, DOSetter_1_tDDF46A9A2BD2CF40775822DBAC21F8E70FBE09C6 * ___setter2, uint32_t ___endValue3, float ___duration4, ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * G_B8_0 = NULL;
	TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_1 = ___t0;
		ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 * L_4 = (ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_5 = ___t0;
		ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 * L_6;
		L_6 = ((  ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 * L_8 = (ABSTweenPlugin_3_t94BA3420748BA2C40BB8D8BEFEF63CB3667B2A05 *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_9 = ___t0;
		DOGetter_1_t5A8884106B4EAB4456A823E1059ABE07F1EB3940 * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_11 = ___t0;
		DOSetter_1_tDDF46A9A2BD2CF40775822DBAC21F8E70FBE09C6 * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_13 = ___t0;
		uint32_t L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_t42BE22A24F7F56A9443B4904003AD3E38623C86C * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_TisNoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903_m5985EAB5EF147CCB9956F38B082859574A8A6CF7_gshared (TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * ___t0, DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5 * ___getter1, DOSetter_1_t958CC463FE354998F7EF7ED30D9AAE18526C5533 * ___setter2, uint64_t ___endValue3, float ___duration4, ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * G_B8_0 = NULL;
	TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_1 = ___t0;
		ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 * L_4 = (ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_5 = ___t0;
		ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 * L_6;
		L_6 = ((  ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 * L_8 = (ABSTweenPlugin_3_t93FC5EDB85E63F93C5DCF18B1222361EF29455E1 *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_9 = ___t0;
		DOGetter_1_t064C9345B92718F489AC1374BADF1486BD6A15D5 * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_11 = ___t0;
		DOSetter_1_t958CC463FE354998F7EF7ED30D9AAE18526C5533 * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_13 = ___t0;
		uint64_t L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_t742A3C45C64FAA93B2CE39B047E38E5344876293 * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisCircleOptions_t93D1CA1904B25D0329D0B8E18FCECFBC5AE16436_m166BB7CD28EC0E662BD20691162C70C4DCB52B77_gshared (TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * ___t0, DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * ___getter1, DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC * ___setter2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___endValue3, float ___duration4, ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * G_B8_0 = NULL;
	TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_1 = ___t0;
		ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC * L_4 = (ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_5 = ___t0;
		ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC * L_6;
		L_6 = ((  ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC * L_8 = (ABSTweenPlugin_3_t5C95B401FFE828CF96A6369D35DE9193F564F9BC *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_9 = ___t0;
		DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_11 = ___t0;
		DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_13 = ___t0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_tA85F1B7D98DE37D885629197188F0C3A1E08BDA8 * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_m2B939AD67B5E28267305B34D0618655AC58846BA_gshared (TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * ___t0, DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * ___getter1, DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC * ___setter2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___endValue3, float ___duration4, ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * G_B8_0 = NULL;
	TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_1 = ___t0;
		ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * L_4 = (ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_5 = ___t0;
		ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * L_6;
		L_6 = ((  ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 * L_8 = (ABSTweenPlugin_3_tEF220F6242890F93B1000E3697D41B1262D65ED1 *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_9 = ___t0;
		DOGetter_1_t124A8173423DDFE7DBFE2D18475606BF47E278FF * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_11 = ___t0;
		DOSetter_1_tB633699E0271976DA4B170D01AF6535DE81F46CC * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_13 = ___t0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_tC048346C0B552E5B61037FE375271319C0EB9564 * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.PathOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisRuntimeObject_TisPathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_m91FFBD7E4AC770D07613EA53EFAB2403F6CC489C_gshared (TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * ___t0, DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * ___getter1, DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * ___setter2, RuntimeObject * ___endValue3, float ___duration4, ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * G_B8_0 = NULL;
	TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_1 = ___t0;
		ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E * L_4 = (ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_5 = ___t0;
		ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E * L_6;
		L_6 = ((  ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E * L_8 = (ABSTweenPlugin_3_tB684BB30E8E054CCB3EBBFB96EDE8032FBD0284E *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_9 = ___t0;
		DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_11 = ___t0;
		DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_13 = ___t0;
		RuntimeObject * L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_t3456DC6DCE3C72CB0D8A037FE930A2C2D0B92569 * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisRuntimeObject_TisVector3ArrayOptions_t12B5EB98E66864EA7DCA3647C6DCB73BB9AAD84B_mC5E67EAB8F85079C33B067A83926A38D5DA82FED_gshared (TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * ___t0, DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * ___getter1, DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * ___setter2, RuntimeObject * ___endValue3, float ___duration4, ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * G_B8_0 = NULL;
	TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_1 = ___t0;
		ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF * L_4 = (ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_5 = ___t0;
		ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF * L_6;
		L_6 = ((  ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF * L_8 = (ABSTweenPlugin_3_t051AEE0C232C044A52F76AD97CBE7C3CD01CC1FF *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_9 = ___t0;
		DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_11 = ___t0;
		DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_13 = ___t0;
		RuntimeObject * L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_tBD07E1C81870028DE23375B5038919645235BBF5 * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_m67F6DEA407A4FA1DCC7E9FCC49E3976D5B8C4E6A_gshared (TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * ___t0, DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * ___getter1, DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * ___setter2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue3, float ___duration4, ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * G_B8_0 = NULL;
	TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_1 = ___t0;
		ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * L_4 = (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_5 = ___t0;
		ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * L_6;
		L_6 = ((  ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD * L_8 = (ABSTweenPlugin_3_t386D9A789641A64FBE9159E47534C6F504DF6BDD *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_9 = ___t0;
		DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_11 = ___t0;
		DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_13 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_tEF2398744853D982DB885085C5B9A3AD4B0F84A4 * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tweener::Setup<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>(DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single,DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tweener_Setup_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_TisVectorOptions_t75B437FFE9996394BC720A3F95ABFF81F338B0AB_m71C7152FC07ECF5AAEFFC2B66708BF051D0F5AE4_gshared (TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * ___t0, DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 * ___getter1, DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 * ___setter2, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___endValue3, float ___duration4, ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * ___plugin5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * G_B8_0 = NULL;
	TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * G_B9_1 = NULL;
	{
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_0 = ___plugin5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_1 = ___t0;
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_2 = ___plugin5;
		NullCheck(L_1);
		L_1->set_tweenPlugin_63(L_2);
		goto IL_0036;
	}

IL_000e:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_3 = ___t0;
		NullCheck(L_3);
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_4 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_3->get_tweenPlugin_63();
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_5 = ___t0;
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_6;
		L_6 = ((  ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck(L_5);
		L_5->set_tweenPlugin_63(L_6);
	}

IL_0021:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_7 = ___t0;
		NullCheck(L_7);
		ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD * L_8 = (ABSTweenPlugin_3_t67093D9DA85A83458F415FBCD10410D49D8BBDFD *)L_7->get_tweenPlugin_63();
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		Debugger_LogError_m38EB7BED058B88E5AB408CEDC2BEF05574AE970D((RuntimeObject *)_stringLiteral766954CA6C416DC5101A89F56696617F86FFF3AE, (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)NULL, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0036:
	{
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_9 = ___t0;
		DOGetter_1_t0D272262C3678A8EF12C1BB30420E20828726AB0 * L_10 = ___getter1;
		NullCheck(L_9);
		L_9->set_getter_61(L_10);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_11 = ___t0;
		DOSetter_1_tEF67691F943A5CD9C9494F1C6CD5166325242373 * L_12 = ___setter2;
		NullCheck(L_11);
		L_11->set_setter_62(L_12);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_13 = ___t0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_14 = ___endValue3;
		NullCheck(L_13);
		L_13->set_endValue_58(L_14);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_15 = ___t0;
		float L_16 = ___duration4;
		NullCheck(L_15);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_15)->set_duration_26(L_16);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		bool L_18 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		NullCheck(L_17);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_17)->set_autoKill_25(L_18);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_19 = ___t0;
		bool L_20 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		NullCheck(L_19);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_19)->set_isRecyclable_23(L_20);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_21 = ___t0;
		int32_t L_22 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseType_20();
		NullCheck(L_21);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_21)->set_easeType_31(L_22);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_23 = ___t0;
		float L_24 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		NullCheck(L_23);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_23)->set_easeOvershootOrAmplitude_33(L_24);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_25 = ___t0;
		float L_26 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		NullCheck(L_25);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_25)->set_easePeriod_34(L_26);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_27 = ___t0;
		int32_t L_28 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		NullCheck(L_27);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)L_27)->set_loopType_28(L_28);
		TweenerCore_3_t42B6947D07CDEC51084590C6C7FEDED4646F42A8 * L_29 = ___t0;
		int32_t L_30 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)3)))
		{
			G_B8_0 = L_29;
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		int32_t L_31 = ((DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var))->get_defaultAutoPlay_16();
		G_B9_0 = ((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_00a9:
	{
		NullCheck(G_B9_1);
		((Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 *)G_B9_1)->set_isPlaying_50((bool)G_B9_0);
		return (bool)1;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  UnsafeUtility_ReadArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_mF1E1FA0E9424F2F320E9B0339FC687ADF10BCBA9_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = (*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Byte>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3A787297B1A91CA14E1AA3B0034A681D407C2C6F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint8_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB96EA425698FAC912FBF9F171D49A9115BBC6D3B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (int32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  UnsafeUtility_ReadArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_m4E2C63FA44B1C28449F8F4BB7905B51D78AE236D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = (*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Object>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnsafeUtility_ReadArrayElement_TisRuntimeObject_mF01BC97D058E55A4713C93F8CB551700296191ED_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = (*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (RuntimeObject *)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Plane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  UnsafeUtility_ReadArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mEECC8D753A2ECD36000F48387C6A2D1D4E564F62_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = (*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 )L_3;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_mC2658E4BCDD5CB7B35E546FAE518CF3C4102626E_gshared (void* ___destination0, int32_t ___index1, BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = ___value2;
		*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Byte>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB82F9E11B8FEC9E090AEA6C9C2C8A611682E7825_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___value2;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mB7E008D6D4C2008C47D4D71528F6AE7AFCF0B7CB_gshared (void* ___destination0, int32_t ___index1, LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = ___value2;
		*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Object>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRuntimeObject_mA6478546A0D6B20061E1DAF0862A895CF5D8C044_gshared (void* ___destination0, int32_t ___index1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = ___value2;
		*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Plane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mB75E0A57B03F72BC1744169D7F4F8CF73AD98915_gshared (void* ___destination0, int32_t ___index1, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = ___value2;
		*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Volatile_Read_TisRuntimeObject_m34EC4B420E3B86C8B06957C02A3FDD87D674E50E_gshared (RuntimeObject ** ___location0, const RuntimeMethod* method)
{
	return VolatileRead(___location0);
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_m3392CE290ADB37963BB566664A63096AF6DABAE4_gshared (RuntimeObject ** ___location0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	VolatileWrite(___location0, ___value1);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tween_set_isRelative_m000972532A32D9F382C7A4B8D1945B354D200A3D_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisRelativeU3Ek__BackingField_30(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CisRelativeU3Ek__BackingField_30();
		return L_0;
	}
}
