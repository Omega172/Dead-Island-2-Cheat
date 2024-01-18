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
	 * Function BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data.BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C.SetTargetAndTargetImpactComponent
	 */
	struct UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C_SetTargetAndTargetImpactComponent_Params
	{
	public:
		class UCombatTargetComponent*                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data.BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C.OnCombatTargetChanged
	 */
	struct UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C_OnCombatTargetChanged_Params
	{
	public:
		class UCombatTargetComponent*                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data.BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C.OnImpactReceived
	 */
	struct UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C_OnImpactReceived_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseImpactEventResultWrapper*                       ImpactEvent;                                             // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data.BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C.UnbindImpactComponent
	 */
	struct UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C_UnbindImpactComponent_Params
	{	};

	/**
	 * Function BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data.BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C.ExecuteUbergraph_BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data
	 */
	struct UBP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_C_ExecuteUbergraph_BP_PerkCondition_AIListenForImpactsOnCombatTarget_Data_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E30G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
