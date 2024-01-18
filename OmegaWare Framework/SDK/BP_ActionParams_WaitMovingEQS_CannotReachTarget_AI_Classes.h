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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_ActionParams_WaitMovingEQS_CannotReachTarget_AI.BP_ActionParams_WaitMovingEQS_CannotReachTarget_AI_C
	 * Size -> 0x0038 (FullSize[0x03DC] - InheritedSize[0x03A4])
	 */
	class UBP_ActionParams_WaitMovingEQS_CannotReachTarget_AI_C : public UBP_ActionParams_WaitMovingEQS_AI_C
	{
	public:
		float                                                      NoneAttackLevelGroundVerticalRange;                      // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      NoneAttackLevelGround2DHorizontalDistanceTolerence;      // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      MeleeRadius2D;                                           // 0x03AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeleeHeightRadiusWhenCombatTargetIsAbove;                // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeleeHeightRadiusWhenCombatTargetIsBelow;                // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RangedMinRadius2D;                                       // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RangedMaxRadius2D;                                       // 0x03BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RangedHeightRadiusWhenCombatTargetIsAbove;               // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RangedHeightRadiusWhenCombatTargetIsBelow;               // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSDeckCounterComparison>                     AlwayMoveIfDeckCounterConditionMet;                      // 0x03C8(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		float                                                      AlwayMoveIfCombatTargetNotSeenWithTimeThershold;         // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
