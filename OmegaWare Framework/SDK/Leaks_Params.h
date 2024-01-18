#pragma once

/**
 * Name: Dead_Island_2
 * Version: Cracked
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Leaks.BaseLeakObject.OnLeakStopped
	 */
	struct UBaseLeakObject_OnLeakStopped_Params
	{	};

	/**
	 * Function Leaks.BaseLeakObject.OnLeakStarted
	 */
	struct UBaseLeakObject_OnLeakStarted_Params
	{	};

	/**
	 * Function Leaks.BaseLeakObject.GetRequestParams
	 */
	struct UBaseLeakObject_GetRequestParams_Params
	{
	public:
		struct FLeakRequestParams                                  ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Leaks.LeakComponent.StopLeak
	 */
	struct ULeakComponent_StopLeak_Params
	{	};

	/**
	 * Function Leaks.LeakComponent.RequestLeak
	 */
	struct ULeakComponent_RequestLeak_Params
	{	};

	/**
	 * Function Leaks.LeakComponent.EditorOverrideLeakInfo
	 */
	struct ULeakComponent_EditorOverrideLeakInfo_Params
	{
	public:
		struct FLeakInfo                                           InLeakInfo;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Leaks.LeakFunctionLibrary.StopLeak
	 */
	struct ULeakFunctionLibrary_StopLeak_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ID;                                                      // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Leaks.LeakFunctionLibrary.RequestLeak
	 */
	struct ULeakFunctionLibrary_RequestLeak_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLeakRequestParams                                  LeakRequest;                                             // 0x0008(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
