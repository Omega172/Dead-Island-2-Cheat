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
	 * Function BP_PerkCondition_TryUseHealthKit_Data.BP_PerkCondition_TryUseHealthKit_Data_C.UsedHealthPack
	 */
	struct UBP_PerkCondition_TryUseHealthKit_Data_C_UsedHealthPack_Params
	{
	public:
		EHUDHealthPackUseResult                                    UseResult;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9VP4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADIPlayerCharacter*                                  Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_TryUseHealthKit_Data.BP_PerkCondition_TryUseHealthKit_Data_C.ExecuteUbergraph_BP_PerkCondition_TryUseHealthKit_Data
	 */
	struct UBP_PerkCondition_TryUseHealthKit_Data_C_ExecuteUbergraph_BP_PerkCondition_TryUseHealthKit_Data_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
