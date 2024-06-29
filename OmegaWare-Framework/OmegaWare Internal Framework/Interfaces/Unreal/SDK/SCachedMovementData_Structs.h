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
	 * UserDefinedStruct SCachedMovementData.SCachedMovementData
	 * Size -> 0x002C
	 */
	struct FSCachedMovementData
	{
	public:
		class FName                                                MovementDataName_136_93DE98AA479A72A3F08270A31F58EC60;   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OwnerLastKnowLocation_124_51C68F524A78E4FF1442559F104580F2; // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OC4G[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              PreviousCombatTarget_130_5D63F13749E0232525A50A9F8F93E7B5; // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CombatTargetsLastKnowLocation_125_E82C89334DBAABE0FE2DC0BCD6095A80; // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
