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
	 * Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.SetInstigatedImpactsFactInWeaponKB
	 */
	struct ABP_MeleeWeapon_LegendaryScythe_C_SetInstigatedImpactsFactInWeaponKB_Params
	{	};

	/**
	 * Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.CheckCurrentStateInKB
	 */
	struct ABP_MeleeWeapon_LegendaryScythe_C_CheckCurrentStateInKB_Params
	{
	public:
		int32_t                                                    CurrentImpacts;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.EvaluateStage
	 */
	struct ABP_MeleeWeapon_LegendaryScythe_C_EvaluateStage_Params
	{	};

	/**
	 * Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.ActionStarts
	 */
	struct ABP_MeleeWeapon_LegendaryScythe_C_ActionStarts_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ActionType;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.ActionEnd
	 */
	struct ABP_MeleeWeapon_LegendaryScythe_C_ActionEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ActionType;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterActionEndedReason                                Reason;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.ReceiveEndPlay
	 */
	struct ABP_MeleeWeapon_LegendaryScythe_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.DeferredBeginPlay
	 */
	struct ABP_MeleeWeapon_LegendaryScythe_C_DeferredBeginPlay_Params
	{	};

	/**
	 * Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.ImpactInstigated
	 */
	struct ABP_MeleeWeapon_LegendaryScythe_C_ImpactInstigated_Params
	{
	public:
		struct FPointImpactEventResult                             RecordedImpact;                                          // 0x0000(0x0300)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C.ExecuteUbergraph_BP_MeleeWeapon_LegendaryScythe
	 */
	struct ABP_MeleeWeapon_LegendaryScythe_C_ExecuteUbergraph_BP_MeleeWeapon_LegendaryScythe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
