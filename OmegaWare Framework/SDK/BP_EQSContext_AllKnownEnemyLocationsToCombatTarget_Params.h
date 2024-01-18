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
	 * Function BP_EQSContext_AllKnownEnemyLocationsToCombatTarget.BP_EQSContext_AllKnownEnemyLocationsToCombatTarget_C.ProvideLocationsSet
	 */
	struct UBP_EQSContext_AllKnownEnemyLocationsToCombatTarget_C_ProvideLocationsSet_Params
	{
	public:
		class UObject*                                             QuerierObject;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              QuerierActor;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FVector>                                     ResultingLocationSet;                                    // 0x0010(0x0010)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
