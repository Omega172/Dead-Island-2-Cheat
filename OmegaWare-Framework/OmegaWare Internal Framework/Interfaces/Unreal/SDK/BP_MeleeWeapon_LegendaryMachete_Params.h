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
	 * Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.StartCE
	 */
	struct ABP_MeleeWeapon_LegendaryMachete_C_StartCE_Params
	{
	public:
		struct FVector                                             LocationOffset;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            RotationOffset;                                          // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.ImpactInstigated
	 */
	struct ABP_MeleeWeapon_LegendaryMachete_C_ImpactInstigated_Params
	{
	public:
		struct FPointImpactEventResult                             RecordedImpact;                                          // 0x0000(0x0300)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.EffectEnded
	 */
	struct ABP_MeleeWeapon_LegendaryMachete_C_EffectEnded_Params
	{	};

	/**
	 * Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.ReceiveTick
	 */
	struct ABP_MeleeWeapon_LegendaryMachete_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.ClearEffect
	 */
	struct ABP_MeleeWeapon_LegendaryMachete_C_ClearEffect_Params
	{	};

	/**
	 * Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.DeferredBeginPlay
	 */
	struct ABP_MeleeWeapon_LegendaryMachete_C_DeferredBeginPlay_Params
	{	};

	/**
	 * Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.FactChanged
	 */
	struct ABP_MeleeWeapon_LegendaryMachete_C_FactChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.ReceiveEndPlay
	 */
	struct ABP_MeleeWeapon_LegendaryMachete_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C.ExecuteUbergraph_BP_MeleeWeapon_LegendaryMachete
	 */
	struct ABP_MeleeWeapon_LegendaryMachete_C_ExecuteUbergraph_BP_MeleeWeapon_LegendaryMachete_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
