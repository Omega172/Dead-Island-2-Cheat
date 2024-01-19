#pragma once

/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
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
	 * Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.Update Glass State
	 */
	struct ABP_VEH_Glass_Base_C_UpdateGlassState_Params
	{
	public:
		bool                                                       IsBroken;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0ET1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.GetGlassExplosionBySize
	 */
	struct ABP_VEH_Glass_Base_C_GetGlassExplosionBySize_Params
	{
	public:
		class UCosmeticEffectsDefinition*                          Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.UserConstructionScript
	 */
	struct ABP_VEH_Glass_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.BndEvt__ImpactEvent1_K2Node_ComponentBoundEvent_0_OnPointImpactEventReceivedDelegate__DelegateSignature
	 */
	struct ABP_VEH_Glass_Base_C_BndEvt__ImpactEvent1_K2Node_ComponentBoundEvent_0_OnPointImpactEventReceivedDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPointImpactEventResult                             ImpactEvent;                                             // 0x0008(0x0300)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.ExecuteUbergraph_BP_VEH_Glass_Base
	 */
	struct ABP_VEH_Glass_Base_C_ExecuteUbergraph_BP_VEH_Glass_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZV7Z[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VEH_Glass_Base.BP_VEH_Glass_Base_C.OnGlassHit__DelegateSignature
	 */
	struct ABP_VEH_Glass_Base_C_OnGlassHit__DelegateSignature_Params
	{
	public:
		class ABP_VEH_Glass_Base_C*                                GlassActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
