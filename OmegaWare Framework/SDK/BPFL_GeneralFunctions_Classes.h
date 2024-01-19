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
	 * BlueprintGeneratedClass BPFL_GeneralFunctions.BPFL_GeneralFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_GeneralFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UnbindActionDelegates(class UCharacterActionRequestHelper* CharacterActionHelper, const class FScriptDelegate& OnActionEnded, const class FScriptDelegate& OnActionResolved, const class FScriptDelegate& OnActionCancelled, class UObject* __WorldContext);
		void STATIC_BindActionDelegates(class UCharacterActionRequestHelper* CharacterActionHelper, const class FScriptDelegate& OnActionEnded, const class FScriptDelegate& OnActionResolved, const class FScriptDelegate& OnActionCancelled, class UObject* __WorldContext);
		void ResetAllReleventStaticMeshsCollisionResponsesToStaticMeshDefaults(TArray<class UStaticMeshComponent*>* StaticMeshComponents, TArray<ECollisionChannel>* CollisionChannelsToOverride, class UObject* __WorldContext);
		void ResetCollisionResponsesToStaticMeshDefaults(class UStaticMeshComponent* StaticMeshComponent, TArray<ECollisionChannel>* CollisionChannelsToReset, class UObject* __WorldContext);
		void STATIC_SphereTraceFromLocation(class UObject* WorldContextObject, const struct FVector& LocationToTraceFrom, const struct FVector& LocationForTraceEnd, float SphereRadius, ETraceTypeQuery TraceChannel, TArray<class AActor*> ActorsToIgnore, const struct FVector& UpVector, float AcceptedAngleTolerance, float AcceptedAngleErrorMargin, EDrawDebugTrace DrawDebugType, class UObject* __WorldContext, bool* ConditionsMet, bool* HitObject, bool* AcceptedAngleToleranceMet, struct FHitResult* OutHit);
		void STATIC_FindOrAddActorComponent(class AActor* Actor, class UClass* InClass, class UObject* __WorldContext, class UActorComponent** Component);
		void STATIC_DetermineVerticalFacingPositionOffset(class AActor* Actor, const struct FVector& Position, float RotationalOffset, ECharacterLocationType CharacterLocationType, class UObject* __WorldContext, float* FacingDegree);
		void STATIC_IsLocationFacingLocation2D(const struct FVector& SourceLocation, const struct FVector& Direction, const struct FVector& TargetLocation, float RotationalOffset, float MaxFacingAngle, bool Inverse, class AActor* UpwardVectorActor, class UObject* __WorldContext, bool* Result, float* FacingDegree);
		void STATIC_DetermineLocationAndDirectionFacingLocationOffset2D(const struct FVector& SourcePosition, const struct FVector& Direction, const struct FVector& TargetPosition, float RotationalOffset, class AActor* UpwardVectorActor, class UObject* __WorldContext, float* FacingDegree);
		void STATIC_IsLocationFacingActor2D(const struct FVector& SourceLocation, const struct FVector& SourceDirection, class AActor* Target, float MaxFacingAngle, bool Inverse, float RotationalOffset, class UObject* __WorldContext, bool* Result, float* FacingDegree);
		void STATIC_DetermineLocationAndDirectionFacingActorOffset2D(const struct FVector& Position, const struct FVector& Direction, class AActor* Actor, float RotationalOffset, class UObject* __WorldContext, float* FacingDegree);
		void STATIC_CompareFloat(float Left, EComparisonOperator Operator, float Right, float EqualityErrorTolerance, class UObject* __WorldContext, bool* ComparisonReturnValue);
		void STATIC_IsActorFacingLocation2D(class AActor* Source, const struct FVector& Target, float MaxFacingAngle, bool Inverse, float RotationalOffset, class UObject* __WorldContext, bool* Result, float* FacingDegree);
		void STATIC_SafeModifyFact(class UKnowledgeBaseComponent* Target, const struct FKnowledgeBaseFactKey& FactKey, int32_t Delta, class UObject* __WorldContext, int32_t* NewValue, bool* Success);
		void STATIC_GetDistanceBetweenLocations(const struct FVector& LocationOne, const struct FVector& LocationTwo, EComparisonOperator ComparisonOperator, float ComparisonValue, float ErrorTolerance, class UObject* __WorldContext, float* DistanceBetween, bool* ComparisonReturnValue);
		void STATIC_LineTraceFromLocation(class UObject* WorldContextObject, const struct FVector& LocationToTraceFrom, const struct FVector& LocationForTraceEnd, ETraceTypeQuery TraceChannel, TArray<class AActor*> ActorsToIgnore, const struct FVector& UpVector, float AcceptedAngleTolerance, float AcceptedAngleErrorMargin, EDrawDebugTrace DrawDebugType, class UObject* __WorldContext, bool* ConditionsMet, bool* HitObject, bool* AcceptedAngleToleranceMet, struct FHitResult* OutHit);
		void STATIC_GetFinalImpactDamage(class UBaseImpactEventResultWrapper* ImpactEvent, class AActor* AffectedActor, class UObject* __WorldContext, struct FAffectedActorRecord* FinalDamageParams, bool* ReturnSuccess);
		void STATIC_FindComponentByName(class AActor* Actor, const class FName& ComponentName, class UObject* __WorldContext, class UActorComponent** ComponentOut);
		void STATIC_GetCommonImpactFactFloat(class UBaseImpactEventResultWrapper* ImpactEvent, class AActor* AffectedActor, const struct FKnowledgeBaseFactKey& FactKey, class UObject* __WorldContext, float* FactValue, bool* IsValid);
		void STATIC_GetCommonImpactFactBool(class UBaseImpactEventResultWrapper* ImpactEvent, class AActor* AffectedActor, const struct FKnowledgeBaseFactKey& FactKey, class UObject* __WorldContext, bool* FactValue, bool* IsValid);
		void STATIC_GetCommonImpactAndDamageParams(class UBaseImpactEventResultWrapper* ImpactEvent, class UObject* __WorldContext, struct FGeneralImpactEventResultParams* ImpactParams, struct FCommonImpactDamageResultParams* CommonDamageParams);
		void STATIC_FindComponentOfType(class AActor* Actor, class UClass* Component, class UObject* __WorldContext, class UActorComponent** ComponentOut);
		void STATIC_SetInteractiveDisableReason(class UInteractiveComponent* TargetComponent, bool bInteractable, const class FName& DisableReason, class UObject* __WorldContext);
		void STATIC_TransitionPlayerCamera(class UObject* Target, class ADIPlayerCharacter* Player, bool bTransitionFromPlayerView, class AActor* ViewTarget, float BlendDuration, bool bUseBlend, class UActorFeed* CameraFeedIn, class UObject* __WorldContext, class UActorFeed** CameraFeedOut);
		void STATIC_PointImpactCausedDamage(const struct FPointImpactEventResult& PointImpact, class UObject* __WorldContext, bool* DamageCaused);
		void STATIC_GetCommonImpactDamageParams(class UBaseImpactEventResultWrapper* ImpactEvent, class UObject* __WorldContext, struct FCommonImpactDamageResultParams* CommonDamageParams);
		void STATIC_DetermineFacingPositionOffset2D(class AActor* Actor, const struct FVector& Position, float RotationalOffset, class UObject* __WorldContext, float* FacingDegree);
		void STATIC_IsActorFacingActor2D(class AActor* Source, class AActor* Target, float MaxFacingAngle, bool Inverse, float RotationalOffset, class UObject* __WorldContext, bool* Result, float* FacingDegree);
		void STATIC_DetermineFacingActorOffset2D(class AActor* Source, class AActor* Target, float RotationalOffset, class UObject* __WorldContext, float* FacingDegree);
		void STATIC_MoveTo150cmOffTheGround(class AActor* Actor, class UInteractiveComponent* InteractiveComponent, bool HeightLocked, class UObject* __WorldContext);
		void STATIC_RemoveParamsFromStack(class UCustomParamsStackContainer* Stack, const struct FGuid& ParamGUID, class UObject* __WorldContext, bool* SuccessfullyRemoved);
		void STATIC_SelectClosestLocation(const struct FVector& Location, const struct FVector& TestLocation1, const struct FVector& TestLocation2, class UObject* __WorldContext, struct FVector* ClosestLocation, bool* WasLocation1Closest);
		void STATIC_PlayerLookingAndFacingLocation(class ADIPlayerCharacter* Player, const struct FVector& Location, const struct FVector& Direction, class UObject* __WorldContext, bool* LookingAndFacing, float* LookingAtDotResult, float* FacingDotResult);
		void STATIC_PlayerLookingAtLocation(class ADIPlayerCharacter* Player, const struct FVector& LocationToTest, class UObject* __WorldContext, float* DotResult, bool* LookingAt);
		void STATIC_GetCharacterAnimInstance(class ADIPlayerCharacter* Player, class UObject* __WorldContext, class UDIAnimInstance** AnimInstance);
		float STATIC_SubtractFloatWithFloor(float Value, float Decrement, float Limit, class UObject* __WorldContext, bool* IsAtLimit);
		float STATIC_AddFloatWithCeiling(float Value, float Increment, float Limit, class UObject* __WorldContext, bool* IsAtLimit);
		void STATIC_GeneratePointDamageData(class AController* InstigatorController, class ADICharacter* DamageTarget, float DamageToApply, float Force, class UClass* DamageType, const class FName& HitBoneName, class UObject* __WorldContext, class AActor** DamagedActor, float* BaseDamage, struct FVector* HitFromDirecton, struct FHitResult* HitInfo, class AController** EventInstigator, class AActor** DamageCauser, class UClass** DamageTypeClass, struct FDSDamageData* DSDamageData);
		void STATIC_GetCharacterSkeletalMesh(class ADIPlayerCharacter* Player, class UObject* __WorldContext, class USkeletalMeshComponent** Mesh);
		void STATIC_IsActorAlive(class AActor* Actor, class UObject* __WorldContext, bool* Alive);
		void STATIC_DisableListenToPlayerInputInObject(class ADIPlayerCharacter* Playertolistento, class UObject* Object, class UObject* __WorldContext);
		void STATIC_ListenToPlayerInputInObject(class ADIPlayerCharacter* Playertolistento, class UObject* Object, class UObject* __WorldContext);
		void STATIC_GetNumOfPlayers(class UObject* __WorldContext, int32_t* NumPlayers);
		void STATIC_SetCutsceneModeOnPlayer(class AController* Controller, bool Enable, class UInputMapperActionFilterDefinition* CutsceneInputMapperFilter, class UObject* __WorldContext);
		void STATIC_FlattenVector(const struct FVector& Vector, class AActor* Actor, class UObject* __WorldContext, struct FVector* OutVector);
		void STATIC_GetPlayerID(class AController* Controller, class UObject* __WorldContext, int32_t* PlayerID);
		void STATIC_FindValidGroundLocationFromPosition(const struct FVector& Location, class AActor* Actor, bool IncludePawnCollision, class UObject* __WorldContext, bool* Success, struct FVector* ValidLocation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
