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
	 * BlueprintGeneratedClass BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI.BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C
	 * Size -> 0x00C3 (FullSize[0x0620] - InheritedSize[0x055D])
	 */
	class UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C : public UBP_Action_Base_Task_AI_C
	{
	public:
		unsigned char                                              UnknownData_GZGI[0x3];                                   // 0x055D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0560(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class AActor*>                                      Walls;                                                   // 0x0568(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      RotationErrorTolerence;                                  // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceErrorTolerence;                                  // 0x057C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_ActionParams_CannotReachTarget_BangOnSurface_AI_C* BangOnSurfaceParams;                                     // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UNavBarrierComponent*>                        NavBarrierComponents;                                    // 0x0588(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class ABP_Activity_BangOnSurface_CannotReachTarget_C*      SpawnedActivity;                                         // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<EOpenableState>                                     OpenableStatesThatCanBeBangedOn;                         // 0x05A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UOpenableComponent*>                          OpenableComponents;                                      // 0x05B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UBPC_AnimationCoordinator_AI_C*                      AnimationComponent;                                      // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugEnabled;                                            // 0x05C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OTBC[0x7];                                   // 0x05C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            DistanceExceptionForMaxFacingAngleExpression;            // 0x05D0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class FName                                                CharacterOverlapProfile;                                 // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0610(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void CleanUpActivity();
		void UpdateActorsToIgnoreForHandsTraceTesting();
		void SetActorsToIgnoreTraceTests();
		TArray<class AActor*> GetAttachmentActors();
		EDrawDebugTrace DebugForTracing();
		void DSLogCombatTargetWithinDistanceOfActivity(bool WithinAcceptableDistance, float DebugDuration);
		void DSLogActivityFacingAngle(bool Success, float CurrentFacingDegree, float MaxFacingDegree, float DebugDuration);
		void RemoveWallHeightFact();
		void AddWallHeightFact(const struct FVector& ImpactPoint);
		bool FindAndGetCentralWallData(const struct FRotator& WallSearchRotation, float* Distance, struct FVector* ImpactPoint, struct FVector* ImpactNormal);
		void GetTraceLocationsForHands(const struct FVector& StartLocationOffset, const struct FVector& EndLocationOffset, bool LeftHand, struct FVector* StartLocation, struct FVector* EndLocation);
		struct FRotator GetWallSearchDirection();
		bool CheckCombatTargetsHeightConditions();
		void OnOpenableStateChanged(EOpenableState NewState);
		void OnNavigationStateChanged(class UNavBarrierComponent* NavBarrier, const class FName& OldState, const class FName& NewState);
		void UnbindMoveableSurfaceEvents();
		void BindMoveableSurfaceEvents(bool* Success);
		bool OnBeginEarly();
		bool IsCombatTargetWithinFacingAngleOfPotentialActivity(const struct FRotator& WallSearchRotation, const struct FVector& WallCentreImpactLocation, float MaxFacingDegree);
		bool FindAndGetWallData(const struct FVector& StartLocationOffset, const struct FVector& EndLocationOffset, const struct FRotator& DirectionRotation, ECharacterBodyPartHeights BodyPartOrigin, float SphereRadius, float* Distance, struct FVector* ImpactPoint, struct FVector* ImpactNormal);
		bool GetWallSearchLocation(const struct FRotator& DirectionRotation, ECharacterBodyPartHeights BodyPartOrigin, struct FRotator* SearchDirection);
		bool SpawnActivity(const struct FVector& WallCentreLocation, const struct FVector& WallCentreImpactNormal, class ABP_Activity_BangOnSurface_CannotReachTarget_C** Activity);
		void CheckForCharacterCollisions(bool* NoOverlap);
		void CheckForParallelWall(bool* ValidWallSurface, struct FVector* CentreLocation, struct FVector* CentreImpactNormal);
		void SphereTraceByChannelFromCharacterLocation(const struct FVector& StartLocationOffset, const struct FVector& EndLocationOffset, const struct FRotator& DirectionRotation, ETraceTypeQuery TraceChannel, ECharacterBodyPartHeights BodyPartOrigin, float SphereRadius, struct FHitResult* OutHit, bool* ConditionsMet, bool* HitObject);
		void LineTraceByChannelFromCharacterLocation(const struct FVector& StartLocationOffset, const struct FVector& EndLocationOffset, const struct FRotator& DirectionRotation, ETraceTypeQuery TraceChannel, ECharacterBodyPartHeights BodyPartOrigin, struct FHitResult* OutHit, bool* ConditionsMet, bool* HitObject);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void ExecuteUbergraph_BP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
