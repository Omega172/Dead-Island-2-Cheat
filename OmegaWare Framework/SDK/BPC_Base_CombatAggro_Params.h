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
	 * Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.SetOwnersKnowledgeBaseComponent
	 */
	struct UBPC_Base_CombatAggro_C_SetOwnersKnowledgeBaseComponent_Params
	{	};

	/**
	 * Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.CombatTargetDiedFactDurationFinished
	 */
	struct UBPC_Base_CombatAggro_C_CombatTargetDiedFactDurationFinished_Params
	{	};

	/**
	 * Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.EndCombatTargetDiedStim
	 */
	struct UBPC_Base_CombatAggro_C_EndCombatTargetDiedStim_Params
	{	};

	/**
	 * Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.BeginCombatTargetDiedStim
	 */
	struct UBPC_Base_CombatAggro_C_BeginCombatTargetDiedStim_Params
	{	};

	/**
	 * Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.GetDICharacterFromComponent
	 */
	struct UBPC_Base_CombatAggro_C_GetDICharacterFromComponent_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADICharacter*                                        AsDICharacter;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.OnOwnersCombatTargetChanged
	 */
	struct UBPC_Base_CombatAggro_C_OnOwnersCombatTargetChanged_Params
	{
	public:
		class UCombatTargetComponent*                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.ReceiveBeginPlay
	 */
	struct UBPC_Base_CombatAggro_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Base_CombatAggro.BPC_Base_CombatAggro_C.ExecuteUbergraph_BPC_Base_CombatAggro
	 */
	struct UBPC_Base_CombatAggro_C_ExecuteUbergraph_BPC_Base_CombatAggro_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
