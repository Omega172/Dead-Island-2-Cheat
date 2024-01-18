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
	 * Function BP_Base_GatherActor.BP_Base_GatherActor_C.TryEndGather
	 */
	struct ABP_Base_GatherActor_C_TryEndGather_Params
	{	};

	/**
	 * Function BP_Base_GatherActor.BP_Base_GatherActor_C.TryStartGather
	 */
	struct ABP_Base_GatherActor_C_TryStartGather_Params
	{
	public:
		class APawn*                                               Initiator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGatherContext                                      Context;                                                 // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       bSuccess;                                                // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_GatherActor.BP_Base_GatherActor_C.RequestGatherEnd
	 */
	struct ABP_Base_GatherActor_C_RequestGatherEnd_Params
	{	};

	/**
	 * Function BP_Base_GatherActor.BP_Base_GatherActor_C.RequestGather
	 */
	struct ABP_Base_GatherActor_C_RequestGather_Params
	{
	public:
		class APawn*                                               Initiator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGatherContext                                      Context;                                                 // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       bSuccess;                                                // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_GatherActor.BP_Base_GatherActor_C.UserConstructionScript
	 */
	struct ABP_Base_GatherActor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Base_GatherActor.BP_Base_GatherActor_C.ReceiveBeginPlay
	 */
	struct ABP_Base_GatherActor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_GatherActor.BP_Base_GatherActor_C.StartGatherVisuals
	 */
	struct ABP_Base_GatherActor_C_StartGatherVisuals_Params
	{	};

	/**
	 * Function BP_Base_GatherActor.BP_Base_GatherActor_C.EndGatherVisuals
	 */
	struct ABP_Base_GatherActor_C_EndGatherVisuals_Params
	{	};

	/**
	 * Function BP_Base_GatherActor.BP_Base_GatherActor_C.EnableGatherShape
	 */
	struct ABP_Base_GatherActor_C_EnableGatherShape_Params
	{	};

	/**
	 * Function BP_Base_GatherActor.BP_Base_GatherActor_C.DisableGatherShape
	 */
	struct ABP_Base_GatherActor_C_DisableGatherShape_Params
	{	};

	/**
	 * Function BP_Base_GatherActor.BP_Base_GatherActor_C.OnStartGathering
	 */
	struct ABP_Base_GatherActor_C_OnStartGathering_Params
	{	};

	/**
	 * Function BP_Base_GatherActor.BP_Base_GatherActor_C.OnStopGathering
	 */
	struct ABP_Base_GatherActor_C_OnStopGathering_Params
	{	};

	/**
	 * Function BP_Base_GatherActor.BP_Base_GatherActor_C.BndEvt__PlayerGatherComponent_K2Node_ComponentBoundEvent_0_GatherComponentOnCancelled__DelegateSignature
	 */
	struct ABP_Base_GatherActor_C_BndEvt__PlayerGatherComponent_K2Node_ComponentBoundEvent_0_GatherComponentOnCancelled__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Base_GatherActor.BP_Base_GatherActor_C.ExecuteUbergraph_BP_Base_GatherActor
	 */
	struct ABP_Base_GatherActor_C_ExecuteUbergraph_BP_Base_GatherActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LCN4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
