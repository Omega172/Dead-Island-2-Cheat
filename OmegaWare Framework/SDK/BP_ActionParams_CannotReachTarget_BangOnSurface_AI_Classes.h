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
	 * BlueprintGeneratedClass BP_ActionParams_CannotReachTarget_BangOnSurface_AI.BP_ActionParams_CannotReachTarget_BangOnSurface_AI_C
	 * Size -> 0x0144 (FullSize[0x01A4] - InheritedSize[0x0060])
	 */
	class UBP_ActionParams_CannotReachTarget_BangOnSurface_AI_C : public UBP_ActionParams_Task_AI_C
	{
	public:
		float                                                      PeekCheckFrequencey;                                     // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NYIW[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCard*>                                       PeekedCards;                                             // 0x0068(0x0010) Edit, BlueprintVisible
		float                                                      StateDelayedEndActionMin;                                // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StateDelayedEndActionMax;                                // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxFacingAngleFromActivity;                              // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceExceptionForMaxFacingAngle;                      // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCardDealerCounterModification                      DeckCounterModificationOnActionBegin;                    // 0x0088(0x00A0) Edit, BlueprintVisible
		float                                                      ZDistanceForCombatTargetAbove;                           // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GS98[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            DistanceRequiredToLaunchActivityWhenCombatTargetIsAboveExpression; // 0x0130(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, HasGetValueTypeHash
		ECharacterBodyPartHeights                                  HandHeightLevel;                                         // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HEPL[0x3];                                   // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SphereRadiusForHands;                                    // 0x016C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CapsuleScalarUsedForWallTests;                           // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      MaxTestDistanceForWallTests;                             // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      PawnOverlapScalarTest;                                   // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      WallRotationErrorTolerence;                              // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WallDistanceErrorTolerence;                              // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WallAngleErrorMargin;                                    // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSCharacterBodyPartHeightsWithOffset>        RequiredHeightsForActivity;                              // 0x0188(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		struct FKnowledgeBaseFactKey                               WallHeightFact;                                          // 0x0198(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
