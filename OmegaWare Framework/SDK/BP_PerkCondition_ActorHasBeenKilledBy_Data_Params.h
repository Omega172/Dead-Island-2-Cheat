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
	 * Function BP_PerkCondition_ActorHasBeenKilledBy_Data.BP_PerkCondition_ActorHasBeenKilledBy_Data_C.ActorKilled
	 */
	struct UBP_PerkCondition_ActorHasBeenKilledBy_Data_C_ActorKilled_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Killer;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FEventInstigator                                    Instigator;                                              // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		TArray<struct FDSDamageInfo>                               DamageInfo;                                              // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PerkCondition_ActorHasBeenKilledBy_Data.BP_PerkCondition_ActorHasBeenKilledBy_Data_C.ExecuteUbergraph_BP_PerkCondition_ActorHasBeenKilledBy_Data
	 */
	struct UBP_PerkCondition_ActorHasBeenKilledBy_Data_C_ExecuteUbergraph_BP_PerkCondition_ActorHasBeenKilledBy_Data_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
