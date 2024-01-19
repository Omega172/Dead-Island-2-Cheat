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
	 * Function BP_PerkCondition_OwnerHasPerformedClassAbility_Data.BP_PerkCondition_OwnerHasPerformedClassAbility_Data_C.ClassAbilityPerformed
	 */
	struct UBP_PerkCondition_OwnerHasPerformedClassAbility_Data_C_ClassAbilityPerformed_Params
	{
	public:
		class AActor*                                              OwningPlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              EffectReceiver;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EClassAbilityState                                         ClassAbilityState;                                       // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_OwnerHasPerformedClassAbility_Data.BP_PerkCondition_OwnerHasPerformedClassAbility_Data_C.ExecuteUbergraph_BP_PerkCondition_OwnerHasPerformedClassAbility_Data
	 */
	struct UBP_PerkCondition_OwnerHasPerformedClassAbility_Data_C_ExecuteUbergraph_BP_PerkCondition_OwnerHasPerformedClassAbility_Data_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FJR0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
