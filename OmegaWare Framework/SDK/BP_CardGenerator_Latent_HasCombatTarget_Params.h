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
	 * Function BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C.GetBlueprintDescription
	 */
	struct UBP_CardGenerator_Latent_HasCombatTarget_C_GetBlueprintDescription_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C.OnInitialise
	 */
	struct UBP_CardGenerator_Latent_HasCombatTarget_C_OnInitialise_Params
	{	};

	/**
	 * Function BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C.OnCombatTargetChanged
	 */
	struct UBP_CardGenerator_Latent_HasCombatTarget_C_OnCombatTargetChanged_Params
	{
	public:
		class UCombatTargetComponent*                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C.OnUninitialise
	 */
	struct UBP_CardGenerator_Latent_HasCombatTarget_C_OnUninitialise_Params
	{	};

	/**
	 * Function BP_CardGenerator_Latent_HasCombatTarget.BP_CardGenerator_Latent_HasCombatTarget_C.ExecuteUbergraph_BP_CardGenerator_Latent_HasCombatTarget
	 */
	struct UBP_CardGenerator_Latent_HasCombatTarget_C_ExecuteUbergraph_BP_CardGenerator_Latent_HasCombatTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LHXA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
