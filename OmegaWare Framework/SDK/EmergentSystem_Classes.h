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
	 * Class EmergentSystem.ActivityActor
	 * Size -> 0x02C8 (FullSize[0x0578] - InheritedSize[0x02B0])
	 */
	class AActivityActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_CLHF[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActivityStartedDelegate;                               // 0x02B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActivityEndedDelegate;                                 // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAllParticipantsReceivedDelegate;                       // 0x02D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class UParticipantSlotComponent*>                   ParticipantList;                                         // 0x02E8(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FActivityParameters                                 ActivityParameters;                                      // 0x02F8(0x0070) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bIsAdvertising;                                          // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YARL[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKnowledgeBaseValueSelector>                 InstanceKBFacts;                                         // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		TArray<struct FKnowledgeBaseValueSelector>                 DefaultKBFacts;                                          // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZH5[0x168];                                 // 0x0390(0x0168) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKnowledgeBaseExpressionListener*                    ActivityRequirementsListener;                            // 0x04F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<EKnowledgeBaseContextSelection, class UKnowledgeBaseExpressionCache*> ExpressionCacheMap;                                      // 0x0500(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3244[0x10];                                  // 0x0550(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKnowledgeBaseComponent*                             KBComponent;                                             // 0x0560(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UG6X[0x10];                                  // 0x0568(0x0010) MISSED OFFSET (PADDING)

	public:
		void RequestAllAgentsToLeave();
		void RemoveDisableReason(const class FName& Reason);
		void ReleaseAgent(class UAgentComponent* AgentComponent, EAgentReleasedReason ReleaseReason);
		void OnNewComponentAdded(class UActorComponent* ActorComponent);
		void OnActivityUnregistered(class AActivityActor* Activity);
		void OnActivityStarted(class AActivityActor* Activity);
		void OnActivityEnded(class AActivityActor* Activity, EActivityEndedReason EndReason);
		bool IsRunning();
		void ExitActivity(EActivityEndedReason ActivityEndedReason);
		void AddDisableReason(const class FName& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.ActivityConstraints
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActivityConstraints : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.ActivityManagerSuppressionData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UActivityManagerSuppressionData : public UObject
	{
	public:
		unsigned char                                              UnknownData_7O6H[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.ActivityRegistrationComponent
	 * Size -> 0x00D8 (FullSize[0x01C0] - InheritedSize[0x00E8])
	 */
	class UActivityRegistrationComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_9OT8[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSpawnConstraints                                   ActivityConstraints;                                     // 0x0100(0x0050) Edit, NativeAccessSpecifierPrivate
		struct FKnowledgeBaseExpression                            ActivityRequirements;                                    // 0x0150(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HOL8[0x10];                                  // 0x0188(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKnowledgeBaseExpressionListener*                    ActivityRequirementsListener;                            // 0x0198(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IPOI[0x20];                                  // 0x01A0(0x0020) MISSED OFFSET (PADDING)

	public:
		void UpdateDisableReason(bool bActivityActive, const class FName& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.ActivitySuppressionAreaData
	 * Size -> 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
	 */
	class UActivitySuppressionAreaData : public UGameAreaData
	{
	public:
		TArray<EActivityType>                                      ActivityTypes;                                           // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FKnowledgeBaseExpression                            OptOutExpression;                                        // 0x00B8(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowInstantSpawnOnAreaDisable;                         // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDespawnAgentsInAreaOnAreaEnable;                        // 0x00F1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQSS[0x6];                                   // 0x00F2(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.ActivitySuppressionAreaManager
	 * Size -> 0x0070 (FullSize[0x03B8] - InheritedSize[0x0348])
	 */
	class AActivitySuppressionAreaManager : public AGameAreaManager
	{
	public:
		unsigned char                                              UnknownData_J1VB[0x8];                                   // 0x0348(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EActivityType, struct FKnowledgeBaseExpression>       ActivityEnablingExpressions;                             // 0x0350(0x0050) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PHA5[0x10];                                  // 0x03A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKnowledgeBaseExpressionListener*                    ExpressionListener;                                      // 0x03B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool IsActivityTypeSuppressed(EActivityType ActivityType);
		void GloballyEnableActivityType(EActivityType ActivityType, const class FString& DebugCallerInformation);
		void GloballyDisableActivityType(EActivityType ActivityType, const class FString& DebugCallerInformation);
		class AActivitySuppressionAreaManager* Get(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.AgentBehaviourDefinition
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UAgentBehaviourDefinition : public UDataAsset
	{
	public:
		class FName                                                BehaviourIssuer;                                         // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      BehaviourModifiers;                                      // 0x0038(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.AgentComponent
	 * Size -> 0x00E8 (FullSize[0x01D0] - InheritedSize[0x00E8])
	 */
	class UAgentComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_ETIU[0x28];                                  // 0x00E8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOverrideMesh;                                           // 0x0110(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EParticipantPriority                                       AgentPriority;                                           // 0x0111(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJQG[0x6];                                   // 0x0112(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAgentBehaviourDefinition*>                   HighlightedBehaviourDefinitions;                         // 0x0118(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GBF[0x18];                                  // 0x0128(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NavProjectionExtent;                                     // 0x0140(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CFT6[0x5C];                                  // 0x014C(0x005C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URequirementsContainer*                              OptOutOfSpatialManagementReasons;                        // 0x01A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class URequirementsContainer*                              ReasonsCannotBeDirected;                                 // 0x01B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class URequirementsContainer*                              ReasonsCannotBeInterrupted;                              // 0x01B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class URequirementsContainer*                              ReasonsCannotMarkForRemoval;                             // 0x01C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4TT4[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnhideAgent(bool bWithFade);
		void RemoveReasonCannotMarkForRemoval(const class FName& Reason);
		void RemoveReasonCannotBeInterrupted(const class FName& Reason);
		void RemoveReasonCannotBeDirected(const class FName& Reason);
		void RemoveAgentPriority(const class FName& PriorityName, float DelayTime);
		void OptOutOfSpatialManagement(const class FName& Reason);
		void OptInToSpatialManagement(const class FName& Reason);
		void HideAgent(bool bWithFade);
		class AActivityActor* GetCurrentAgentActivity();
		void DespawnAgent();
		bool AddReasonCannotMarkForRemoval(const class FName& Reason);
		bool AddReasonCannotBeInterrupted(const class FName& Reason);
		bool AddReasonCannotBeDirected(const class FName& Reason);
		void AddAgentPriority(const class FName& PriorityName, EParticipantPriority Priority);
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.AgentCoordinatorLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAgentCoordinatorLibrary : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.AgentExpressionAssetUserData
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UAgentExpressionAssetUserData : public USpawnUserData
	{
	public:
		struct FKnowledgeBaseExpression                            RequirementsExpression;                                  // 0x0028(0x0038) ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.AgentFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAgentFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void FindAgentInWorld(class UObject* WorldContextObject, class UClass* ClassToFind, class AActor** OutActor);
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.AgentPostspawnData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAgentPostspawnData : public USpawnUserData
	{
	public:
		unsigned char                                              UnknownData_7SJV[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.AgentPrespawnData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAgentPrespawnData : public USpawnUserData
	{
	public:
		class UGameEvent*                                          Event;                                                   // 0x0028(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.AgentRemovalHandler
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAgentRemovalHandler : public UObject
	{
	public:
		unsigned char                                              UnknownData_AYR4[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.AmbientActivityRegistrationComponent
	 * Size -> 0x0050 (FullSize[0x0210] - InheritedSize[0x01C0])
	 */
	class UAmbientActivityRegistrationComponent : public UActivityRegistrationComponent
	{
	public:
		bool                                                       bIsRejoinable;                                           // 0x01C0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_57MU[0xF];                                   // 0x01C1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOptOutOfSpatialManagement;                              // 0x01D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XV2F[0x1];                                   // 0x01D1(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseTriggerActivation;                                   // 0x01D2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N0HJ[0x5];                                   // 0x01D3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTriggerShapeComponent*                              TriggerShape;                                            // 0x01D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OMFB[0x30];                                  // 0x01E0(0x0030) MISSED OFFSET (PADDING)

	public:
		void UseTriggerActivation(class UTriggerShapeComponent* ShapeComponent);
		void OnInteractorLeftArea(class UTriggerInteractorComponent* Interactor);
		void OnInteractorEnteredArea(class UTriggerInteractorComponent* Interactor);
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.BaseAgentSource
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UBaseAgentSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_J1EE[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.BaseEntryAgentSource
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UBaseEntryAgentSource : public UBaseAgentSource
	{
	public:
		unsigned char                                              UnknownData_X4B2[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.AreaShapeEntryAgentSource
	 * Size -> 0x0060 (FullSize[0x00A0] - InheritedSize[0x0040])
	 */
	class UAreaShapeEntryAgentSource : public UBaseEntryAgentSource
	{
	public:
		struct FDSActorPicker                                      ActorWithAreaShapeViaPicker;                             // 0x0040(0x0050) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		EAreaShapeSelection                                        AreaShapeSelection;                                      // 0x0090(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELEI[0xF];                                   // 0x0091(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.BasicSpawnable
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UBasicSpawnable : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_P2G3[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ClassToSpawn;                                            // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.ExistingAgentSource
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UExistingAgentSource : public UBaseAgentSource
	{
	public:
		unsigned char                                              UnknownData_JJUT[0x48];                                  // 0x0038(0x0048) MISSED OFFSET (PADDING)

	public:
		void CheckAdvertising();
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.CastCharacterAgentSource
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UCastCharacterAgentSource : public UExistingAgentSource
	{
	public:
		bool                                                       bSkipDirectableCheck;                                    // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KI6V[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpawnInPlaceAgentSource*                            SpawnInPlaceSource;                                      // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ClassToFind;                                             // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.CompoundAgentSource
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UCompoundAgentSource : public UBaseAgentSource
	{
	public:
		TArray<class UBaseAgentSource*>                            AgentSourcesToUse;                                       // 0x0038(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.CooldownSet
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UCooldownSet : public UValidatedDataAsset
	{
	public:
		unsigned char                                              UnknownData_ZDIF[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CooldownList[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.DefaultAgentSource
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UDefaultAgentSource : public UBaseAgentSource
	{
	public:
		bool                                                       bCanSpawnInPlace;                                        // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipSpawnChecks;                                        // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanEnterScene;                                          // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanReuse;                                               // 0x003B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZUD[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.DistanceCooldown
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDistanceCooldown : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_AZ7J[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RequiredDistance;                                        // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSD3[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.EmergentActivitiesLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEmergentActivitiesLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool LaunchActivityWithSingleParticipant(class AActivityActor* Activity, class UAgentComponent* Participant, const struct FParticipantLaunchParameters& OverrideParticipantLaunchParameters);
		bool LaunchActivityWithParticipants(class AActivityActor* Activity, TArray<class UAgentComponent*> Participants);
		bool LaunchActivity(class AActivityActor* Activity, const struct FSpawnConstraints& SpawnConstraints, bool bForceInstantSpawn, bool bForceDespawnNonVitalAgentsIfNeeded, EAgentRequestInterruptionReasons InterruptionReasonsToIgnore);
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.EmergentDirector
	 * Size -> 0x0030 (FullSize[0x02E0] - InheritedSize[0x02B0])
	 */
	class AEmergentDirector : public AInfo
	{
	public:
		unsigned char                                              UnknownData_FBSE[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AgentComponentClass;                                     // 0x02B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TFTW[0x20];                                  // 0x02C0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.EmergentGroupObjectBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEmergentGroupObjectBase : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.EmergentSpatialLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEmergentSpatialLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void RemoveCustomActivePosition(class UObject* WorldContext, const struct FVector& Position);
		bool IsLocationSpatiallyActive(class UObject* WorldContext, const struct FVector& Location);
		void EnableDefaultActivePositions(class UObject* WorldContext, bool bEnable, const class FName& Reason);
		void AddCustomActivePosition(class UObject* WorldContext, const struct FVector& Position, float Size);
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.EmergentSpawnableGroupObject
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UEmergentSpawnableGroupObject : public UEmergentGroupObjectBase
	{
	public:
		TArray<struct FEmergentSpawnableGroupChild>                ChildGroups;                                             // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FEmergentSpawnableGroupData>                 Data;                                                    // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.SpawnableGroupsLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnableGroupsLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void PickSpawnableFromSet(class UObject* WorldContext, const struct FSpawnableGroupHandle& SpawnableGroup);
		struct FSpawnableGroupHandle GetGroupSetFromName(class UObject* WorldContext, const class FName& GroupName);
		struct FSpawnableGroupHandle GetGroupSetFromAsset(class UObject* WorldContext, class UEmergentSpawnableGroupObject* GroupAsset);
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.EntryActivityRegistrationComponent
	 * Size -> 0x00F0 (FullSize[0x02B0] - InheritedSize[0x01C0])
	 */
	class UEntryActivityRegistrationComponent : public UActivityRegistrationComponent
	{
	public:
		unsigned char                                              UnknownData_IRHC[0x18];                                  // 0x01C0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NavProjectionExtent;                                     // 0x01D8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZV9N[0x6C];                                  // 0x01E4(0x006C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bCanStartInView;                                         // 0x0250(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUsesNavigationChecks;                                   // 0x0251(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IRS3[0x5E];                                  // 0x0252(0x005E) MISSED OFFSET (PADDING)

	public:
		void OnActivityStarted(class AActivityActor* Activity);
		void OnActivityEnded(class AActivityActor* Activity, EActivityEndedReason EndReason);
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.ExitActivityRegistrationComponent
	 * Size -> 0x0028 (FullSize[0x01E8] - InheritedSize[0x01C0])
	 */
	class UExitActivityRegistrationComponent : public UActivityRegistrationComponent
	{
	public:
		unsigned char                                              UnknownData_F9UT[0x28];                                  // 0x01C0(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.CooldownInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCooldownInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.LifetimePopulationConstraint
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class ULifetimePopulationConstraint : public UObject
	{
	public:
		unsigned char                                              UnknownData_VU2W[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.LifetimePopulationConstraint_SlotBasedCooldown
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	class ULifetimePopulationConstraint_SlotBasedCooldown : public ULifetimePopulationConstraint
	{
	public:
		float                                                      MinCooldownDuration;                                     // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCooldownDuration;                                     // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GOS9[0xA0];                                  // 0x0038(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.LocationDirectionCollator
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class ULocationDirectionCollator : public UObject
	{
	public:
		unsigned char                                              UnknownData_6JSL[0xA0];                                  // 0x0028(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.ModelOverrideSpawnable
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UModelOverrideSpawnable : public UBasicSpawnable
	{
	public:
		TArray<class USkeletalMesh*>                               ModelOverrides;                                          // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.OnceOnlyCooldown
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UOnceOnlyCooldown : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_PJN1[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.ParticipantSlotComponent
	 * Size -> 0x0390 (FullSize[0x0620] - InheritedSize[0x0290])
	 */
	class UParticipantSlotComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_JN00[0x8];                                   // 0x0290(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               AgentPawn;                                               // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAgentComponent*                                     AgentComponent;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AAIController*                                       AIController;                                            // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FParticipantDefinition                              Participant;                                             // 0x02B0(0x0168) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UBaseAgentSource*                                    AgentSource;                                             // 0x0418(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EParticipantEvent, class UGameEvent*>                 ParticipantGameEvent;                                    // 0x0420(0x0050) Edit, ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<EParticipantState, class UGameEventState*>            ParticipantGameEventState;                               // 0x0470(0x0050) Edit, ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTransform                                          NavPositionOffset;                                       // 0x04C0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                ParticipantNavMeshName;                                  // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresValidNavPosition;                               // 0x04F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLogInvalidNavPosition;                                  // 0x04F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1061[0x6];                                   // 0x04FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            AgentRequirements;                                       // 0x0500(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7RHD[0x8];                                   // 0x0538(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NavProjectionExtent;                                     // 0x0540(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GICT[0x4];                                   // 0x054C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ParticipantAssignedDelegate;                             // 0x0550(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             ParticipantReceivedDelegate;                             // 0x0560(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             ParticipantOnTheWayDelegate;                             // 0x0570(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             ParticipantInterruptedDelegate;                          // 0x0580(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             ParticipantReleasedDelegate;                             // 0x0590(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             ParticipantUnassignedDelegate;                           // 0x05A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R7S7[0x70];                                  // 0x05B0(0x0070) MISSED OFFSET (PADDING)

	public:
		bool ShouldSkipIntro();
		void SetTravelToLocation(const struct FParticipantMoveToLocation& Location);
		void SetSpawnHidden(bool bSpawnHidden);
		void SetParticipantSpawnableGroup(class UEmergentSpawnableGroupObject* InSpawnableGroup);
		void SetParticipantPriority(EParticipantPriority InPriority);
		void SetLaunchParameters(const struct FParticipantLaunchParameters& Params);
		void OptOutOf(ESpawnConstraintTypes Flag);
		struct FParticipantMoveToLocation GetTravelToLocation();
		EParticipantState GetParticipantState();
		class UGameEvent* GetParticipantSpawnedGameEvent();
		class UEmergentSpawnableGroupObject* GetParticipantSpawnableGroup();
		class UGameEvent* GetParticipantGameEvent(EParticipantEvent Event);
		void EditorShouldCheckForValidAgentSelection(bool bShouldCheck);
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.PopulationArea
	 * Size -> 0x0210 (FullSize[0x04C0] - InheritedSize[0x02B0])
	 */
	class APopulationArea : public AActor
	{
	public:
		unsigned char                                              UnknownData_UAE6[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTriggerShapeComponent*                              PrimaryShape;                                            // 0x02B8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEmergentPopulationDefinition*                       PopulationDef;                                           // 0x02C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEmergentPopulationDefinition*                       PopulationDefInline;                                     // 0x02C8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ULifetimePopulationConstraint*>               LifetimeConstraints;                                     // 0x02D0(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bAutoAddSlotBasedCooldownConstraint;                     // 0x02E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetAtDistance;                                        // 0x02E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3U7F[0x2];                                   // 0x02E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ResetDistance;                                           // 0x02E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAtomicActivation;                                       // 0x02E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHeightRelevant;                                         // 0x02E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZYB8[0x2];                                   // 0x02EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpatialActivationZOffset;                                // 0x02EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpatialActivationHeightOffset;                           // 0x02F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAsHomeArea;                                          // 0x02F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8RC7[0x3];                                   // 0x02F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScopedKnowledgeBaseExpressionListener              ActiveExpression;                                        // 0x02F8(0x0060) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8XNJ[0x167];                                 // 0x0359(0x0167) MISSED OFFSET (PADDING)

	public:
		void SetEnabled(bool bInValue);
		void ResetAllConstraints();
		void OnPopulationStateChanged(bool bPopulationAreaEnabled);
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.PopulationAreaLinkComponent
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UPopulationAreaLinkComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.PopulationCountController
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPopulationCountController : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.DensityPopCountController
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UDensityPopCountController : public UPopulationCountController
	{
	public:
		struct FDataTableRowHandle                                 Density;                                                 // 0x0028(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.AbsolutePopCountController
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAbsolutePopCountController : public UPopulationCountController
	{
	public:
		uint32_t                                                   Count;                                                   // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9RX6[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.AutomaticPopCountController
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAutomaticPopCountController : public UPopulationCountController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.EmergentPopulationDefinition
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UEmergentPopulationDefinition : public UDataAsset
	{
	public:
		bool                                                       bAdvanced;                                               // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_90I2[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPopulationState>                            PriorityOrderedPopulationStates;                         // 0x0038(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.ConditionalPopulationStateListQueryParameters
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UConditionalPopulationStateListQueryParameters : public UConditionalListQueryParameters
	{
	public:
		unsigned char                                              UnknownData_6WRT[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.PreviousParticipantAgentSource
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UPreviousParticipantAgentSource : public UExistingAgentSource
	{
	public:
		class UBaseAgentSource*                                    FallbackAgentSource;                                     // 0x0080(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WKFR[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.RadialEntryAgentSource
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class URadialEntryAgentSource : public UBaseEntryAgentSource
	{
	public:
		float                                                      MinDistance;                                             // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseClosestEntryPoints;                                  // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YBUO[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.RequestSpawnActorTask
	 * Size -> 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
	 */
	class URequestSpawnActorTask : public UGameplayTask
	{
	public:
		unsigned char                                              UnknownData_T3DU[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Prespawn;                                                // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Success;                                                 // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             DidNotSpawn;                                             // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UClass*                                              ClassToSpawn;                                            // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AYK9[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		class URequestSpawnActorTask* SpawnActor(class UObject* WorldContextObject, const struct FSpawnParams& SpawnHandlerParams, class UClass* Class);
		void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
		bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.ReuseAgentSource
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UReuseAgentSource : public UExistingAgentSource
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.RuntimeSpawnable
	 * Size -> 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
	 */
	class URuntimeSpawnable : public UObject
	{
	public:
		unsigned char                                              UnknownData_289X[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ClassToSpawn[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              UnknownData_OB8N[0xE8];                                  // 0x0058(0x00E8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.ScriptTriggeredActivityRegistrationComponent
	 * Size -> 0x0030 (FullSize[0x01F0] - InheritedSize[0x01C0])
	 */
	class UScriptTriggeredActivityRegistrationComponent : public UActivityRegistrationComponent
	{
	public:
		unsigned char                                              UnknownData_O4JR[0x30];                                  // 0x01C0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.SimpleAgentRemovalHandler
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class USimpleAgentRemovalHandler : public UAgentRemovalHandler
	{
	public:
		unsigned char                                              UnknownData_J69E[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.SimpleDirector
	 * Size -> 0x0288 (FullSize[0x0568] - InheritedSize[0x02E0])
	 */
	class ASimpleDirector : public AEmergentDirector
	{
	public:
		unsigned char                                              UnknownData_7XJN[0x118];                                 // 0x02E0(0x0118) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULocationDirectionCollator*                          LocationDirectionCollator;                               // 0x03F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8UV3[0x20];                                  // 0x0400(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpawnInPlaceAgentSource*                            SpawnInPlaceAgentSource;                                 // 0x0420(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpawnInPlaceAgentSource*                            SpawnInPlaceWithoutChecksAgentSource;                    // 0x0428(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UReuseAgentSource*                                   ReuseAgentSource;                                        // 0x0430(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    TotalDesiredAgents;                                      // 0x0438(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    TotalAllowedAgents;                                      // 0x043C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      VerticalActivationMargin;                                // 0x0440(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxActivePopulationAreas;                                // 0x0444(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ActiveRadius;                                            // 0x0448(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VAGU[0x4];                                   // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CollatorClass;                                           // 0x0450(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              AgentRemovalHandlerClass;                                // 0x0458(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4Z2Q[0x8];                                   // 0x0460(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAgentRemovalHandler*                                AgentRemovalHandler;                                     // 0x0468(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MADU[0x38];                                  // 0x0470(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKnowledgeBaseExpressionCache*                       GameWorldVisibleExpressionCache;                         // 0x04A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BK6K[0xB8];                                  // 0x04B0(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.SingleActivityAgentSource
	 * Size -> 0x0060 (FullSize[0x00A0] - InheritedSize[0x0040])
	 */
	class USingleActivityAgentSource : public UBaseEntryAgentSource
	{
	public:
		struct FDSActorPicker                                      ActivityToUseViaPicker;                                  // 0x0040(0x0050) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class FName                                                SlotName;                                                // 0x0090(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFallbackToSourceOnOtherActivity;                        // 0x0098(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5C8W[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.SpatialActivationAreaData
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class USpatialActivationAreaData : public UGameAreaData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.SpatialActivationAreaManager
	 * Size -> 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
	 */
	class ASpatialActivationAreaManager : public AGameAreaManager
	{
	public:
		unsigned char                                              UnknownData_MH4Z[0x8];                                   // 0x0348(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.SpawnInPlaceAgentSource
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USpawnInPlaceAgentSource : public UBaseAgentSource
	{
	public:
		bool                                                       bSkipInstantSpawnChecks;                                 // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HTYQ[0xF];                                   // 0x0039(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.EmergentTestGroupObject
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UEmergentTestGroupObject : public UEmergentGroupObjectBase
	{
	public:
		TArray<struct FEmergentTestGroupChild>                     ChildGroups;                                             // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FEmergentTestGroupData>                      Data;                                                    // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.TimeCooldown
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UTimeCooldown : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_GJDW[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HGYJ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EmergentSystem.VisibleToPlayersTracker
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UVisibleToPlayersTracker : public UObject
	{
	public:
		unsigned char                                              UnknownData_LW9K[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		void UpdateVisibility();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
