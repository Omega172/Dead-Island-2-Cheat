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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_ActionParams_WaitMovingEQS_AI.BP_ActionParams_WaitMovingEQS_AI_C
	 * Size -> 0x01EB (FullSize[0x03A4] - InheritedSize[0x01B9])
	 */
	class UBP_ActionParams_WaitMovingEQS_AI_C : public UBP_ActionParams_Wait_AI_C
	{
	public:
		unsigned char                                              UnknownData_EU25[0x3];                                   // 0x01B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MoveTargetName;                                          // 0x01BC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                OverrideMoveTargetParamsName;                            // 0x01C4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MaintainLastMoveTarget;                                  // 0x01CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D0QK[0x3];                                   // 0x01CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StaticMoveTargetUpdateInterval;                          // 0x01D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MovingMoveTargetUpdateInterval;                          // 0x01D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCardDealerCounterModification                      MovementEndedCounterModification;                        // 0x01D8(0x00A0) Edit, BlueprintVisible
		struct FCardDealerCounterModification                      MoveSuccededCounterModification;                         // 0x0278(0x00A0) Edit, BlueprintVisible
		float                                                      NewMoveTargetUpdateTolerence;                            // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CombatTargetLocationDifferenceUpdate;                    // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OwnerLocationDifferenceUpdate;                           // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LenientMovement;                                         // 0x0324(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G0MX[0x3];                                   // 0x0325(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeniencyRadius;                                          // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YXQU[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSWaitMovingMovementParams>                  MovementData;                                            // 0x0330(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		float                                                      ForceMovementUpdateIntervalOnMaintainLastMoveTarget;     // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MPMY[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EWaitMovingEQSStates, struct FSKnowledgeBaseFacts>    StateBasedFacts;                                         // 0x0348(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                MovementDataName;                                        // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FacingTargetTolerenceWithinDegrees;                      // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
