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
	 * Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.AddKBListenerForCombatTarget
	 */
	struct UBP_CardGenerator_Latent_CombatTargetKB_C_AddKBListenerForCombatTarget_Params
	{
	public:
		class AActor*                                              CombatTargetActor;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.GetBlueprintDescription
	 */
	struct UBP_CardGenerator_Latent_CombatTargetKB_C_GetBlueprintDescription_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.OnInitialise
	 */
	struct UBP_CardGenerator_Latent_CombatTargetKB_C_OnInitialise_Params
	{	};

	/**
	 * Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.OnCombatTargetChanged
	 */
	struct UBP_CardGenerator_Latent_CombatTargetKB_C_OnCombatTargetChanged_Params
	{
	public:
		class UCombatTargetComponent*                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.OnExpressionChanged
	 */
	struct UBP_CardGenerator_Latent_CombatTargetKB_C_OnExpressionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.OnUninitialise
	 */
	struct UBP_CardGenerator_Latent_CombatTargetKB_C_OnUninitialise_Params
	{	};

	/**
	 * Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.ExecuteUbergraph_BP_CardGenerator_Latent_CombatTargetKB
	 */
	struct UBP_CardGenerator_Latent_CombatTargetKB_C_ExecuteUbergraph_BP_CardGenerator_Latent_CombatTargetKB_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
