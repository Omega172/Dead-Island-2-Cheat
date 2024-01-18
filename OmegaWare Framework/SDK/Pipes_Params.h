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
	 * Function Pipes.BasePipe.SetPipeAllowedToFlow
	 */
	struct ABasePipe_SetPipeAllowedToFlow_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Pipes.BasePipe.SetOutflowActive
	 */
	struct ABasePipe_SetOutflowActive_Params
	{
	public:
		int32_t                                                    OutflowIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Pipes.BasePipe.OnPipeFlowChanged
	 */
	struct ABasePipe_OnPipeFlowChanged_Params
	{
	public:
		float                                                      NewFlowingPercentage;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Pipes.BasePipe.OnPipeConnected
	 */
	struct ABasePipe_OnPipeConnected_Params
	{	};

	/**
	 * Function Pipes.BasePipe.IsFlowing
	 */
	struct ABasePipe_IsFlowing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Pipes.BasePipe.IsFillingUp
	 */
	struct ABasePipe_IsFillingUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Pipes.BasePipe.GetPipeOrigin
	 */
	struct ABasePipe_GetPipeOrigin_Params
	{
	public:
		class APipeOrigin*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Pipes.BasePipe.GetLeakIndex
	 */
	struct ABasePipe_GetLeakIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Pipes.BasePipe.GetDataAsset
	 */
	struct ABasePipe_GetDataAsset_Params
	{
	public:
		class UPipeOriginDataAsset*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Pipes.PipeOrigin.OnRep_IsOriginAllowedToFlow
	 */
	struct APipeOrigin_OnRep_IsOriginAllowedToFlow_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
