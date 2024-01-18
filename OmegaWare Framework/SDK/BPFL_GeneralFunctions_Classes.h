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
	 * BlueprintGeneratedClass BPFL_GeneralFunctions.BPFL_GeneralFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_GeneralFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void ResetAllReleventStaticMeshsCollisionResponsesToStaticMeshDefaults(TArray<class UStaticMeshComponent*>* StaticMeshComponents, TArray<ECollisionChannel>* CollisionChannelsToOverride, class UObject* __WorldContext);
		void ResetCollisionResponsesToStaticMeshDefaults(class UStaticMeshComponent* StaticMeshComponent, TArray<ECollisionChannel>* CollisionChannelsToReset, class UObject* __WorldContext);
		void SphereTraceFromLocation(class UObject* WorldContextObject, const struct FVector& LocationToTraceFrom, const struct FVector& LocationForTraceEnd, float SphereRadius, ETraceTypeQuery TraceChannel, TArray<class AActor*> ActorsToIgnore, const struct FVector& UpVector, float AcceptedAngleTolerance, float AcceptedAngleErrorMargin, EDrawDebugTrace DrawDebugType, class UObject* __WorldContext, bool* ConditionsMet, bool* HitObject, bool* AcceptedAngleToleranceMet, struct FHitResult* OutHit);
		void FindOrAddActorComponent(class AActor* Actor, class UClass* InClass, class UObject* __WorldContext, class UActorComponent** Component);
		void DetermineVerticalFacingPositionOffset(class AActor* Actor, const struct FVector& Position, float RotationalOffset, ECharacterLocationType CharacterLocationType, class UObject* __WorldContext, float* FacingDegree);
		void IsLocationFacingLocation2D(const struct FVector& SourceLocation, const struct FVector& Direction, const struct FVector& TargetLocation, float RotationalOffset, float MaxFacingAngle, bool Inverse, class AActor* UpwardVectorActor, class UObject* __WorldContext, bool* Result, float* FacingDegree);
		void DetermineLocationAndDirectionFacingLocationOffset2D(const struct FVector& SourcePosition, const struct FVector& Direction, const struct FVector& TargetPosition, float RotationalOffset, class AActor* UpwardVectorActor, class UObject* __WorldContext, float* FacingDegree);
		void IsLocationFacingActor2D(const struct FVector& SourceLocation, const struct FVector& SourceDirection, class AActor* Target, float MaxFacingAngle, bool Inverse, float RotationalOffset, class UObject* __WorldContext, bool* Result, float* FacingDegree);
		void DetermineLocationAndDirectionFacingActorOffset2D(const struct FVector& Position, const struct FVector& Direction, class AActor* Actor, float RotationalOffset, class UObject* __WorldContext, float* FacingDegree);
		void CompareFloat(float Left, EComparisonOperator Operator, float Right, float EqualityErrorTolerance, class UObject* __WorldContext, bool* ComparisonReturnValue);
		void IsActorFacingLocation2D(class AActor* Source, const struct FVector& Target, float MaxFacingAngle, bool Inverse, float RotationalOffset, class UObject* __WorldContext, bool* Result, float* FacingDegree);
		void SafeModifyFact(class UKnowledgeBaseComponent* Target, const struct FKnowledgeBaseFactKey& FactKey, int32_t Delta, class UObject* __WorldContext, int32_t* NewValue, bool* Success);
		void GetDistanceBetweenLocations(const struct FVector& LocationOne, const struct FVector& LocationTwo, EComparisonOperator ComparisonOperator, float ComparisonValue, float ErrorTolerance, class UObject* __WorldContext, float* DistanceBetween, bool* ComparisonReturnValue);
		void LineTraceFromLocation(class UObject* WorldContextObject, const struct FVector& LocationToTraceFrom, const struct FVector& LocationForTraceEnd, ETraceTypeQuery TraceChannel, TArray<class AActor*> ActorsToIgnore, const struct FVector& UpVector, float AcceptedAngleTolerance, float AcceptedAngleErrorMargin, EDrawDebugTrace DrawDebugType, class UObject* __WorldContext, bool* ConditionsMet, bool* HitObject, bool* AcceptedAngleToleranceMet, struct FHitResult* OutHit);
		void GetFinalImpactDamage(class UBaseImpactEventResultWrapper* ImpactEvent, class AActor* AffectedActor, class UObject* __WorldContext, struct FAffectedActorRecord* FinalDamageParams, bool* ReturnSuccess);
		void FindComponentByName(class AActor* Actor, const class FName& ComponentName, class UObject* __WorldContext, class UActorComponent** ComponentOut);
		void GetCommonImpactFactFloat(class UBaseImpactEventResultWrapper* ImpactEvent, class AActor* AffectedActor, const struct FKnowledgeBaseFactKey& FactKey, class UObject* __WorldContext, float* FactValue, bool* IsValid);
		void GetCommonImpactFactBool(class UBaseImpactEventResultWrapper* ImpactEvent, class AActor* AffectedActor, const struct FKnowledgeBaseFactKey& FactKey, class UObject* __WorldContext, bool* FactValue, bool* IsValid);
		void GetCommonImpactAndDamageParams(class UBaseImpactEventResultWrapper* ImpactEvent, class UObject* __WorldContext, struct FGeneralImpactEventResultParams* ImpactParams, struct FCommonImpactDamageResultParams* CommonDamageParams);
		void FindComponentOfType(class AActor* Actor, class UClass* Component, class UObject* __WorldContext, class UActorComponent** ComponentOut);
		void SetInteractiveDisableReason(class UInteractiveComponent* TargetComponent, bool bInteractable, const class FName& DisableReason, class UObject* __WorldContext);
		void TransitionPlayerCamera(class UObject* Target, class ADIPlayerCharacter* Player, bool bTransitionFromPlayerView, class AActor* ViewTarget, float BlendDuration, bool bUseBlend, class UActorFeed* CameraFeedIn, class UObject* __WorldContext, class UActorFeed** CameraFeedOut);
		void PointImpactCausedDamage(const struct FPointImpactEventResult& PointImpact, class UObject* __WorldContext, bool* DamageCaused);
		void GetCommonImpactDamageParams(class UBaseImpactEventResultWrapper* ImpactEvent, class UObject* __WorldContext, struct FCommonImpactDamageResultParams* CommonDamageParams);
		void DetermineFacingPositionOffset2D(class AActor* Actor, const struct FVector& Position, float RotationalOffset, class UObject* __WorldContext, float* FacingDegree);
		void IsActorFacingActor2D(class AActor* Source, class AActor* Target, float MaxFacingAngle, bool Inverse, float RotationalOffset, class UObject* __WorldContext, bool* Result, float* FacingDegree);
		void DetermineFacingActorOffset2D(class AActor* Source, class AActor* Target, float RotationalOffset, class UObject* __WorldContext, float* FacingDegree);
		void MoveTo150cmOffTheGround(class AActor* Actor, class UInteractiveComponent* InteractiveComponent, bool HeightLocked, class UObject* __WorldContext);
		void RemoveParamsFromStack(class UCustomParamsStackContainer* Stack, const struct FGuid& ParamGUID, class UObject* __WorldContext, bool* SuccessfullyRemoved);
		void SelectClosestLocation(const struct FVector& Location, const struct FVector& TestLocation1, const struct FVector& TestLocation2, class UObject* __WorldContext, struct FVector* ClosestLocation, bool* WasLocation1Closest);
		void PlayerLookingAndFacingLocation(class ADIPlayerCharacter* Player, const struct FVector& Location, const struct FVector& Direction, class UObject* __WorldContext, bool* LookingAndFacing, float* LookingAtDotResult, float* FacingDotResult);
		void PlayerLookingAtLocation(class ADIPlayerCharacter* Player, const struct FVector& LocationToTest, class UObject* __WorldContext, float* DotResult, bool* LookingAt);
		void GetCharacterAnimInstance(class ADIPlayerCharacter* Player, class UObject* __WorldContext, class UDIAnimInstance** AnimInstance);
		float SubtractFloatWithFloor(float Value, float Decrement, float Limit, class UObject* __WorldContext, bool* IsAtLimit);
		float AddFloatWithCeiling(float Value, float Increment, float Limit, class UObject* __WorldContext, bool* IsAtLimit);
		void GeneratePointDamageData(class AController* InstigatorController, class ADICharacter* DamageTarget, float DamageToApply, float Force, class UClass* DamageType, const class FName& HitBoneName, class UObject* __WorldContext, class AActor** DamagedActor, float* BaseDamage, struct FVector* HitFromDirecton, struct FHitResult* HitInfo, class AController** EventInstigator, class AActor** DamageCauser, class UClass** DamageTypeClass, struct FDSDamageData* DSDamageData);
		void GetCharacterSkeletalMesh(class ADIPlayerCharacter* Player, class UObject* __WorldContext, class USkeletalMeshComponent** Mesh);
		void IsActorAlive(class AActor* Actor, class UObject* __WorldContext, bool* Alive);
		void DisableListenToPlayerInputInObject(class ADIPlayerCharacter* Playertolistento, class UObject* Object, class UObject* __WorldContext);
		void ListenToPlayerInputInObject(class ADIPlayerCharacter* Playertolistento, class UObject* Object, class UObject* __WorldContext);
		void GetNumOfPlayers(class UObject* __WorldContext, int32_t* NumPlayers);
		void SetCutsceneModeOnPlayer(class AController* Controller, bool Enable, class UInputMapperActionFilterDefinition* CutsceneInputMapperFilter, class UObject* __WorldContext);
		void FlattenVector(const struct FVector& Vector, class AActor* Actor, class UObject* __WorldContext, struct FVector* OutVector);
		void GetPlayerID(class AController* Controller, class UObject* __WorldContext, int32_t* PlayerID);
		void FindValidGroundLocationFromPosition(const struct FVector& Location, class AActor* Actor, bool IncludePawnCollision, class UObject* __WorldContext, bool* Success, struct FVector* ValidLocation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
