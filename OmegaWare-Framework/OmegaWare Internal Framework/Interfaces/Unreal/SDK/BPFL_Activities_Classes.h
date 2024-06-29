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
	 * BlueprintGeneratedClass BPFL_Activities.BPFL_Activities_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_Activities_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_AddErrorDebugForUnsupportedSpawn(class UParticipantSlotComponent* ParticipantSlotComponent, class UObject* __WorldContext);
		void STATIC_GetTableEntryForArchetype(class ABP_Base_Zombie_C* Zombie, const class FName& SequenceName, bool UseDefaultTable, class UObject* __WorldContext, struct FSActivityData* TableRow, bool* Success);
		void STATIC_ToggleCinematicActivityFact(bool IsApplied, class ADIAICharacter* Character, const class FName& InvokerName, class UObject* __WorldContext);
		void STATIC_ToggleAIHUDVisibility(bool IsVisible, class ADIAICharacter* Character, const class FName& InvokerName, class UObject* __WorldContext);
		void STATIC_GetAttackSequenceFromAssetLinkage(class UAssetLinkage* AssetLinkageobj, const class FName& Name, class UObject* __WorldContext, class UAttackSequence** AsAttackSequence);
		void STATIC_GetLevelSequenceFromAssetLinkage(class UAssetLinkage* AssetLinkageobj, const class FName& Name, class UObject* __WorldContext, class ULevelSequence** LevelSequence);
		void STATIC_GetBoundAssetEntryForActivityType(class UParticipantSlotComponent** ParticipantSlot, const class FName& SequenceName, bool UseDefaultTable, class UObject* __WorldContext, class UAssetLinkage** AssetLinkage);
		void STATIC_GetActivityAnimSetData_WithNameAndTable(class UDataTable* DataTable, const class FName& ActivityAnimationTable, class UObject* __WorldContext, TMap<class FName, struct FAnimSetCollectionItem>* AnimSetMap, class FName* ActivityAnimationRowName);
		void STATIC_UnloadAnimSet(class UDIAnimInstance* CharacterAnimInstance, int32_t AnimSetID, class UObject* __WorldContext);
		void STATIC_SetupActivitiesLogger(class AActivityActor* Activity, class UObject* __WorldContext, class UDSLogChannelHandle** ActivitiesLogger);
		void STATIC_DisplayActivitiesLog(class AActivityActor* Activity, const class FString& LogMessage, class UDSLogChannelHandle* ActivityLogger, EDSLogVerbosity LogVerbosity, class UObject* __WorldContext);
		void STATIC_UpdateEditorPreviewAnimation(const struct FFixedDataTableEditableRowHandle& ActivityAnimationTable, class USkeletalMeshComponent* AnimationPreview, class UObject* __WorldContext);
		void STATIC_SetupActivityCharacterRefs(class UParticipantSlotComponent* Participant, class UObject* __WorldContext, class ADIAICharacter** CharacterRef, class UDIAnimInstance** CharacterAnimInstanceRef);
		void STATIC_LoadAndResolveActivityLS(class UDIAnimInstance* CharacterAnimInstance, TMap<class FName, struct FAnimSetCollectionItem> AnimSetMap, const class FName& ActivityAnimationRowName, class UObject* __WorldContext, int32_t* AnimSetID, class ULevelSequence** IntoLevelSequence, class ULevelSequence** LoopLevelSequence, class ULevelSequence** OutOfLevelSequence);
		void STATIC_GetActivityAnimSetData(const struct FFixedDataTableEditableRowHandle& ActivityAnimationTable, class UObject* __WorldContext, TMap<class FName, struct FAnimSetCollectionItem>* AnimSetMap, class FName* ActivityAnimationRowName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
