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
	 * Class DSFramework.CustomActionParamsBase
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCustomActionParamsBase : public USparseCustomParamsBase
	{
	public:
		struct FGuid                                               ActionId;                                                // 0x0028(0x0010) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CharacterAction
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UCharacterAction : public UObject
	{
	public:
		float                                                      QueueTime;                                               // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TickInterval;                                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChainable;                                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QTNW[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0034(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Category;                                                // 0x003C(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ActionId;                                                // 0x0044(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KC9D[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCustomActionParamsBase*                             UserParamsObject;                                        // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCustomActionParamsBase*                             StateParams;                                             // 0x0060(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCharacterActionComponent*                           ActionComponent;                                         // 0x0068(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NetworkTime;                                             // 0x0070(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomSeed;                                              // 0x0074(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZ27[0x18];                                  // 0x0078(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsActive;                                               // 0x0090(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CZHA[0x17];                                  // 0x0091(0x0017) MISSED OFFSET (PADDING)

	public:
		void SyncReplicatedState();
		void SetWantsTickBP(bool bEnable);
		float ResolveQueueTime();
		void Resolve(const struct FCharacterActionResolveParams& Params, ECharacterActionResolution* OutResolution, float* OutQueuedTimeout);
		void OnTick(float DeltaTime);
		void OnResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params);
		void OnReplicatedStateUpdated(const struct FGuid& RequestId, class UCustomActionParamsBase* ReplicatedState);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		bool OnBeginEarly();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		bool IsActive();
		bool HasActionAuthority();
		class AActor* GetOwner();
		float GetNetworkRunningTime();
		float GetElapsedTime();
		bool GatherPrerequisites();
		void EndRequestedBy(const struct FGuid& QueuedActionId);
		void EndAction(ECharacterActionEndReason Reason, float DelayTime);
		void CustomSignal(const class FName& SignalName);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.AILevelOfDetailFeature_ExternalTickScheduler
	 * Size -> 0x0060 (FullSize[0x00A0] - InheritedSize[0x0040])
	 */
	class UAILevelOfDetailFeature_ExternalTickScheduler : public UAILevelOfDetailFeature
	{
	public:
		unsigned char                                              UnknownData_XB6P[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TicksPerFrame;                                           // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TickScabilityFeatureName;                                // 0x004C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseInterpolation;                                       // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ESG5[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeSinceTickedWeight;                                   // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LevelOfDetailScoreWeight;                                // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IDH[0x18];                                  // 0x0060(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScalableCountLoadBalancedFeature*                   TicksPerFrameScalableCount;                              // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KW8L[0x20];                                  // 0x0080(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSAIMovementComponent
	 * Size -> 0x0378 (FullSize[0x0460] - InheritedSize[0x00E8])
	 */
	class UDSAIMovementComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_519N[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, int32_t>                                 MoveTargetPriorities;                                    // 0x00F0(0x0050) Edit, NativeAccessSpecifierPublic
		class UMoveTargetParamsConfig*                             MoveTargetParamsConfig;                                  // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLazyUpdater                                        MovementRequestUpdater;                                  // 0x0148(0x0030) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L8IY[0x2E8];                                 // 0x0178(0x02E8) MISSED OFFSET (PADDING)

	public:
		void RemoveMoveTargetEventDelegate(const class FName& Name, const class FScriptDelegate& Delegate);
		void RemoveMoveTarget(const class FName& Name, float Delay);
		void OnMovementCompletedFromController(const struct FAIRequestID& RequestId, EPathFollowingResult Result);
		struct FMoveTargetParams GetMoveTargetParams(const class FName& Name);
		float GetDistanceToCurrentMoveTarget();
		struct FVector GetCurrentMoveTargetLocation();
		void AddMoveTargetEventDelegate(const class FName& Name, const class FScriptDelegate& Delegate);
		void AddMoveTarget(const class FName& Name, const struct FMoveTarget& MoveTarget, bool bUseDefaultParams);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ItemArchetype
	 * Size -> 0x0230 (FullSize[0x0260] - InheritedSize[0x0030])
	 */
	class UItemArchetype : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_9C3T[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ItemType[0x28];                                          // 0x0038(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UClass*                                              InstanceDataType;                                        // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ItemFactory;                                             // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemInstancingPolicy                                      InstancingPolicy;                                        // 0x0070(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemOverflowPolicy                                        OverflowPolicy;                                          // 0x0071(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F71S[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInventoryCategory*                                  Category;                                                // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackSize;                                               // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x0084(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InstanceCount;                                           // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSellable;                                               // 0x008C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFreeInShops;                                          // 0x008D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6W09[0x2];                                   // 0x008E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            IsFreeInShopsExpression;                                 // 0x0090(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CashValue;                                               // 0x00C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CashRefundValueScalar;                                   // 0x00CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Actor[0x28];                                             // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              ItemSkeletalMesh[0x28];                                  // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DefaultPickupItemStaticMesh[0x28];                       // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UCosmeticEffectsDefinition*                          PickupAudioEvent;                                        // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCosmeticEffectsDefinition*                          PickupLogAudioEvent;                                     // 0x0150(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                UiName;                                                  // 0x0158(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                UINameCaps;                                              // 0x0170(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FString                                              UIIconLabel;                                             // 0x0188(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     UIIconImage;                                             // 0x0198(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          UIIconTexture;                                           // 0x01B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                UIDescription;                                           // 0x01B8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bShowInPickupLog;                                        // 0x01D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IR2A[0x7];                                   // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAssetsLoaded;                                          // 0x01D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K09L[0x78];                                  // 0x01E8(0x0078) MISSED OFFSET (PADDING)

	public:
		void RequestAssetsForActor(class AActor* Requestor, bool bHighPriority, const class FName& Reason);
		void ReleaseAssetsForActor(class AActor* Requestor, const class FName& Reason);
		void OnAssetsLoaded__DelegateSignature();
		class FText GetUINameCaps();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSGFxMoviePlayer
	 * Size -> 0x0108 (FullSize[0x02E0] - InheritedSize[0x01D8])
	 */
	class UDSGFxMoviePlayer : public UGFxMoviePlayer
	{
	public:
		bool                                                       bShouldDeferFSCommands;                                  // 0x01D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlockCtrlAltAKeys;                                      // 0x01D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreInputKeysWithoutPresses;                          // 0x01DA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P9US[0x5];                                   // 0x01DB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UGFxDisplayObject*, class FString>              DirectCommandObjects;                                    // 0x01E0(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<class FString, struct FDirectCommandPathObjects>      DirectCommandPathLookupObject;                           // 0x0230(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GKM2[0x60];                                  // 0x0280(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.EquippableComponent
	 * Size -> 0x00F0 (FullSize[0x01D8] - InheritedSize[0x00E8])
	 */
	class UEquippableComponent : public UActorComponent
	{
	public:
		class UPaperDollSlot*                                      AssignedPaperDollSlot;                                   // 0x00E8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             AssignedToPaperDollSlot;                                 // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             RemovedFromPaperDollSlot;                                // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActivated;                                             // 0x0110(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDeactivated;                                           // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIsEquippableChanged;                                   // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48SO[0x48];                                  // 0x0140(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URequirementsContainer*                              UnequippableReasons;                                     // 0x0188(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URequirementsContainer*                              PreventCycleReasons;                                     // 0x0190(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q5FT[0x10];                                  // 0x0198(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               PersistentId;                                            // 0x01A8(0x0010) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1Y43[0x20];                                  // 0x01B8(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnUnequippableReasonsCleared();
		void OnUnequippableReasonsActive();
		void OnRemovalFromPaperDollSlotCompleted();
		void OnIsLocalPlayerFactChanged(const struct FKnowledgeBaseFactKey& FactKey, class UKnowledgeBaseComponent* InKnowledgeBaseComponent, EKnowledgeBaseFactChangeType FactChangeType);
		bool IsAssignedToPaperDollSlot();
		class AItemActor* GetOwningItem();
		class AActor* GetCurrentUser();
		void ClientAddShortcutItem(class UItemAssignmentShortcutGroupInstance* InShortcutGroup, int32_t InShortcutGroupIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.BaseChallengeResponse
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UBaseChallengeResponse : public UObject
	{
	public:
		unsigned char                                              UnknownData_95VY[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSGameInstance
	 * Size -> 0x0118 (FullSize[0x02B8] - InheritedSize[0x01A0])
	 */
	class UDSGameInstance : public UGameInstance
	{
	public:
		unsigned char                                              UnknownData_9R08[0xE8];                                  // 0x01A0(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UExclusiveUser*                                      ExclusiveUser;                                           // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UManagerCollection*                                  ManagerCollection;                                       // 0x0290(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8W9K[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UManagerController*                                  ManagerController;                                       // 0x02A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UManagersDatabase*                                   ManagerDatabase;                                         // 0x02A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LIB6[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (PADDING)

	public:
		class UExclusiveUser* GetExclusiveUser();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ItemActor
	 * Size -> 0x0290 (FullSize[0x0540] - InheritedSize[0x02B0])
	 */
	class AItemActor : public AActor
	{
	public:
		struct FItemArchetypeData                                  ItemArchetypeData;                                       // 0x02B0(0x00C8) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             VisualsSetDelegate;                                      // 0x0378(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemGiftedToPlayer;                                    // 0x0388(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UItemArchetype*                                      DefaultItemArchetype;                                    // 0x0398(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              PickupActorClass;                                        // 0x03A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELootTier                                                  LootTierWhenDropped;                                     // 0x03A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OC0K[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObjectiveData*                                      LinkedObjectiveDataWhenDropped;                          // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemRarity                                                DefaultUIItemRarity;                                     // 0x03B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WD0T[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItemArchetype*                                      ItemArchetype;                                           // 0x03C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemArchetypePackage;                                    // 0x03C8(0x0010) Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UItemInstanceData*                                   InstanceData;                                            // 0x03D8(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryComponent*                                 OwningInventory;                                         // 0x03E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URequirementsContainer*                              TickReasons;                                             // 0x03E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48FL[0x78];                                  // 0x03F0(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InventoryItemScale;                                      // 0x0468(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4BA6[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            PreventDroppingExpression;                               // 0x0470(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FKnowledgeBaseExpression                            PreventScrappingExpression;                              // 0x04A8(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5L2Q[0x60];                                  // 0x04E0(0x0060) MISSED OFFSET (PADDING)

	public:
		bool UpdateActorVisualsToReflectItem(class AActor* Actor, EItemVisualDetail Detail);
		bool ShouldHideInCounters();
		void SetActorVisuals(class AActor* Actor, EItemVisualDetail Detail);
		void OnVisualActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		void OnVisualActorDestroyed(class AActor* Actor);
		void OnTickReasonsCleared();
		void OnTickReasonsActivated();
		void OnRep_UIDataChanged();
		void OnRep_OwnerChanged(class UInventoryComponent* PrevInventory);
		void OnRep_ItemInstanceData();
		void OnRep_ItemArchetypePackage();
		void OnRep_ItemArchetype();
		bool K2_SetActorVisuals(class AActor* Actor, EItemVisualDetail Detail);
		void K2_OnInitialize(class UItemArchetype* ArchetypeIn, class UItemInstanceData* InstanceDataIn);
		bool IsSellable();
		bool IsScrappable();
		bool IsReady();
		bool IsFreeInShops(class APlayerController* ForPlayer);
		bool IsDroppable();
		class FName GetUISubCategory();
		TMap<class FName, struct FItemStat> GetUIStats();
		class FString GetUISourceName();
		class FText GetUINameCaps();
		class FText GetUIName();
		class UTexture2D* GetUIIconTexture();
		class FString GetUIIconLabel();
		struct FSoftObjectPath GetUIIconImage();
		class FText GetUIDescription();
		int32_t GetMaxCashValueForUpgrades();
		int32_t GetMaxCashValue();
		class UItemUIComponent* GetItemUIComponent();
		class AActor* GetInventoryOwner();
		int32_t GetCurrentCashValue();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.AchievementsManager
	 * Size -> 0x0130 (FullSize[0x03E0] - InheritedSize[0x02B0])
	 */
	class AAchievementsManager : public AInfo
	{
	public:
		class UExclusiveUser*                                      LocalExclusiveUser;                                      // 0x02B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     AchievementsManagerConfig;                               // 0x02B8(0x0018) ZeroConstructor, Transient, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UDataTable*>                                  AchievementDataTables;                                   // 0x02D0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UGameAchievementsPersistentState*                    PersistentGameAchievements;                              // 0x02E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1KEC[0xF8];                                  // 0x02E8(0x00F8) MISSED OFFSET (PADDING)

	public:
		class AAchievementsManager* STATIC_GetAchievementsManager(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSCharacter
	 * Size -> 0x01C0 (FullSize[0x0740] - InheritedSize[0x0580])
	 */
	class ADSCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_5X9R[0x8];                                   // 0x0580(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCharacterPossessed;                                    // 0x0588(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCharacterUnpossessed;                                  // 0x0598(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EPerspective                                               CurrentPerspective;                                      // 0x05A8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I12Y[0x7];                                   // 0x05A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPerspectiveChanged;                                    // 0x05B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bCachedInitialMeshOffset;                                // 0x05C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CFM8[0x7];                                   // 0x05C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         LastController;                                          // 0x05C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             VelocityForLocomotion;                                   // 0x05D0(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X4QN[0x4];                                   // 0x05DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DefaultPawnMovementCapsule[0x28];                        // 0x05E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_EFF7[0x138];                                 // 0x0608(0x0138) MISSED OFFSET (PADDING)

	public:
		void UpdateComponentHidden(class UActorComponent* Component);
		bool SetPerspective(EPerspective NewPerspective);
		void SetCharacterLocationWS(ECharacterLocationType LocationType, const struct FVector& NewLocation, bool bSweep, ETeleportType Teleport);
		void SetCharacterLocationLS(ECharacterLocationType LocationType, const struct FVector& NewLocation, bool bSweep, ETeleportType Teleport);
		void ServerCheatWalk();
		void ServerCheatGhost();
		void ServerCheatFly();
		void RemoveHideRequest_BP(const struct FGuid& ID, EHideableTransitionType TransitionType);
		void OnSpatialCellDeactivated(class USpatialTickComponent* Component);
		void OnSpatialCellActivated(class USpatialTickComponent* Component);
		bool IsInAir();
		bool IsControlAuthority();
		struct FVector GetVelocityForLocomotion();
		class UDSSkeletalMeshComponent* GetDSMesh();
		class UDSCharacterMovementComponent* GetDSCharacterMovement();
		class UDSCapsuleComponent* GetDSCapsuleComponent();
		class UAnimInstance* GetCurrentAnimInstance();
		struct FVector GetCharacterLocationWS(ECharacterLocationType LocationType);
		struct FVector GetCharacterLocationLS(ECharacterLocationType LocationType);
		struct FGuid AddHideRequest_BP(const class FName& Requester, EHideableTransitionType TransitionType);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSCharacterMovementComponent
	 * Size -> 0x02A0 (FullSize[0x09D0] - InheritedSize[0x0730])
	 */
	class UDSCharacterMovementComponent : public UCharacterMovementComponent
	{
	public:
		unsigned char                                              UnknownData_GKK3[0x8];                                   // 0x0730(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterMovementModePriorityConfig*                MovementModePriorityConfig;                              // 0x0738(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DefaultPushType;                                         // 0x0740(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPushTypePriorityConfig*                             PushTypePriorityConfig;                                  // 0x0748(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultPushTypePriority;                                 // 0x0750(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0EBU[0x4];                                   // 0x0754(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDSCharacterPushTable*                               PushTable;                                               // 0x0758(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PushConfigName;                                          // 0x0760(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDepenetrationVerticalWithPawn;                        // 0x0768(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDepenetrationVerticalWithPawnAsProxy;                 // 0x076C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCollisionSlowDownSettings                          CollisionSlowDown;                                       // 0x0770(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_67JO[0x10];                                  // 0x0790(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             VelocityZeroedDelegate;                                  // 0x07A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             VelocityDecreasedDelegate;                               // 0x07B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             UpdatedComponentMovedDelegate;                           // 0x07C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_450J[0x18];                                  // 0x07D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultGravityAlignSeconds;                              // 0x07E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TY99[0x4];                                   // 0x07EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DistanceToGravityAlignSecondCurve;                       // 0x07F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LineTestLength;                                          // 0x07F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WF3T[0xE0];                                  // 0x07FC(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                InternalMovementModeRequestReason;                       // 0x08DC(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ExternalTickBlendOutTime;                                // 0x08E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1P7H[0x28];                                  // 0x08E8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCustomParamsStackContainer*                         MovementModeRequestStack;                                // 0x0910(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H309[0xB8];                                  // 0x0918(0x00B8) MISSED OFFSET (PADDING)

	public:
		void UpdateMovementModeRequest(const struct FGuid& RequestId, EMovementMode NewRequestedMovementMode, unsigned char NewCustomMovementMode);
		void RemovePushTypeRequest(const struct FGuid& RequestId);
		void RemoveMovementModeRequest(const struct FGuid& RequestId);
		bool IsActiveMovementModeRequest(const struct FGuid& RequestId);
		void InstantDampenExternalVelocity(float DampenToFraction, EExtraVelocityChannel Channel);
		void GetLastWalkingFeetLocation(struct FVector* Loc, EOkInvalidResult* Result);
		float GetFilteredCollisionSlowDownScale();
		void ApplyCollsionSlowDownImpulse(const struct FHitResult& Hit, class UPrimitiveComponent* OtherComp, const struct FVector& Impulse);
		void AddTargetExternalVelocityImpulse(const struct FVector& TargetVelocity, float Strength, EExtraVelocityChannel Channel, bool bDirectional, float DeltaTime);
		struct FGuid AddPushTypeRequest(const class FName& Reason, const class FName& PushType);
		struct FGuid AddMovementModeRequestWithCallback(const class FName& Reason, EMovementMode RequestedMovementMode, unsigned char RequestedCustomMovementMode, const class FScriptDelegate& RequestActiveCallback);
		struct FGuid AddMovementModeRequest(const class FName& Reason, EMovementMode RequestedMovementMode, unsigned char RequestedCustomMovementMode);
		void AddExternalVelocityImpulse(const struct FVector& ExtraVelocity, EExtraVelocityChannel Channel, bool bOnlyIfAuthoritative);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSAIController
	 * Size -> 0x00E0 (FullSize[0x0498] - InheritedSize[0x03B8])
	 */
	class ADSAIController : public AAIController
	{
	public:
		float                                                      DefaultHomeRadius;                                       // 0x03B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HomeAreaLocationBlackboardName;                          // 0x03BC(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HomeAreaRadiusBlackboardName;                            // 0x03C4(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJJ5[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayTasksComponent*                             GameplayTasksComponentOfPawnBeingPossessed;              // 0x03D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QEO9[0xC0];                                  // 0x03D8(0x00C0) MISSED OFFSET (PADDING)

	public:
		void STATIC_UnregisterPossessionListener(class UObject* Listener, class AActor* Actor);
		void RemoveHomeArea(const class FName& Source, const struct FHomeArea& HomeArea);
		void STATIC_RegisterPossessionListener(class UObject* Listener, class AActor* Actor, bool bReceiveLatePossess);
		struct FHomeArea GetHomeAreaAsSpherical();
		void AddHomeArea(const class FName& Source, const struct FHomeArea& HomeArea);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSPlayerController
	 * Size -> 0x0080 (FullSize[0x0680] - InheritedSize[0x0600])
	 */
	class ADSPlayerController : public APlayerController
	{
	public:
		class UInputMapperComponent*                               InputMapperComponent;                                    // 0x0600(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDSControllerTypeManager*                            ControllerTypeManager;                                   // 0x0608(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UControlSchemeManager*                               ControlSchemeManager;                                    // 0x0610(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDSInputProfileManagerComponent*                     InputManagerComponent;                                   // 0x0618(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDSInputBindingManagerComponent*                     InputBindingManagerComponent;                            // 0x0620(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UItemAssignmentShortcutGroupConfig*>          ShortcutGroupConfigAssets;                               // 0x0628(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UItemAssignmentShortcutGroupInstance*>        ShortcutGroupInstances;                                  // 0x0638(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UInputMapperActionFilterDefinition*                  DefaultFilter;                                           // 0x0648(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URequirementsContainer*                              MenuMouseRequirements;                                   // 0x0650(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BG3L[0x28];                                  // 0x0658(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetMenuMouse(bool bEnable, const class FName& Reason);
		void OnMenuMouseDisabled();
		void OnMenuMouseActive();
		void LogActiveInputFilters();
		class FString GetCharacterTypeString();
		void ActionFilterEnable(class UInputMapperActionFilterDefinition* ActionFilterDefinition, bool bEnable, const class FName& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ChallengeComponent
	 * Size -> 0x0088 (FullSize[0x0170] - InheritedSize[0x00E8])
	 */
	class UChallengeComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_VIXR[0x38];                                  // 0x00E8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class UGameEventState*>                  TierEventStates;                                         // 0x0120(0x0050) ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void ServerOnTierCompleted(const class FName& ChallengeName, int32_t TierCompleted);
		void OnTierCompleted(const class FName& ChallengeName, int32_t TierCompleted);
		void ClientPauseChallenge(const class FName& ChallengeName);
		void ClientIncrementChallenge(const class FName& ChallengeName, int32_t ProgressDelta);
		void ClientEnableChallenge(const class FName& ChallengeName);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSControllerTypeManager
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UDSControllerTypeManager : public UActorComponent
	{
	public:
		TWeakObjectPtr<class UControlSchemeManager>                ControlSchemeManager;                                    // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UOptionsManager>                      OptionsManager;                                          // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R73O[0x18];                                  // 0x00F8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DespawnManager
	 * Size -> 0x03A0 (FullSize[0x0650] - InheritedSize[0x02B0])
	 */
	class ADespawnManager : public AInfo
	{
	public:
		unsigned char                                              UnknownData_G4XK[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDespawnManagerSettings                             Settings;                                                // 0x02B8(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TMap<class FName, class UScalableCountLoadBalancedFeature*> CurrentMaxLimitedDespawnsOfCategory;                     // 0x0380(0x0050) NativeAccessSpecifierPrivate
		TArray<struct FDespawnData>                                DespawningActors;                                        // 0x03D0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FPendingRemovalEntry>                        PendingRemovals;                                         // 0x03E0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TCYI[0x50];                                  // 0x03F0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class AActor*, struct FDespawnData>                   AbortedDespawns;                                         // 0x0440(0x0050) NativeAccessSpecifierPrivate
		TArray<struct FDelayedRemovalEntry>                        DelayedRemovalQueue;                                     // 0x0490(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UScalableCountLoadBalancedFeature*                   CurrentMaxDespawningActorsScalableCount;                 // 0x04A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDespawnConditionsMaster*                            DespawnConditions;                                       // 0x04A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDespawnWeights*                                     DespawnWeights;                                          // 0x04B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WST8[0x30];                                  // 0x04B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     DespawnConditionsMasterPath;                             // 0x04E8(0x0018) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     DespawnWeightsPath;                                      // 0x0500(0x0018) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2UL6[0x138];                                 // 0x0518(0x0138) MISSED OFFSET (PADDING)

	public:
		void ScheduleActorDespawn(class AActor* InActor, const class FName& DespawnConditionsName, const class FString& DespawnReason, class UBaseDespawnCallback* DespawnCallback);
		void ResetDespawning();
		void OnDespawningActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		void NetMulticastHide(class AActor* Actor);
		void NetMulticastEndExclusiveObservation(class AActor* Actor, class APlayerController* Observer);
		void NetMulticastBeginExclusiveObservation(class AActor* Actor, class APlayerController* Observer, float AlwaysVisibleAtDistance, float NotVisibleAtDistance);
		void InstantlyDespawnAllActors();
		void DelayedRemoveActor(class AActor* Actor, float DelayTime, class UBaseDespawnCallback* DespawnCallback, bool bImmediateHide);
		void AbortActorDespawn(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.FiniteOptionsProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFiniteOptionsProxy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.StringFiniteOptionsProxy
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UStringFiniteOptionsProxy : public UFiniteOptionsProxy
	{
	public:
		TArray<struct FFiniteOptionString>                         Options;                                                 // 0x0028(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.FiniteOptionMetaData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFiniteOptionMetaData : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSGameState
	 * Size -> 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
	 */
	class ADSGameState : public AGameState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSGameViewportClient
	 * Size -> 0x0030 (FullSize[0x0368] - InheritedSize[0x0338])
	 */
	class UDSGameViewportClient : public UGameViewportClient
	{
	public:
		unsigned char                                              UnknownData_O1OU[0x30];                                  // 0x0338(0x0030) MISSED OFFSET (PADDING)

	public:
		void AddExternalDisplayInfo(const class FString& InText, const struct FLinearColor& Colour);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSInputBindingManagerComponent
	 * Size -> 0x01D8 (FullSize[0x02C0] - InheritedSize[0x00E8])
	 */
	class UDSInputBindingManagerComponent : public UActorComponent
	{
	public:
		TArray<struct FKey>                                        BlackListedPlayerKeys;                                   // 0x00E8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<EInputMapperControllerType, class UControllerLayoutControlSchemeMap*> ControllerTypeControlSchemeMap;                          // 0x00F8(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<class UInputMapperActionOverrideConfig*, struct FKnowledgeBaseExpression> ConfigsToFiltersWithCondtions;                           // 0x0148(0x0050) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6YMM[0x18];                                  // 0x0198(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UOptionsManager>                      OptionsManager;                                          // 0x01B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4FQU[0x8];                                   // 0x01B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMapperComponent*                               InputMapperComponent;                                    // 0x01C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UControlSchemeManager*                               ControlSchemeManager;                                    // 0x01C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KOD8[0x60];                                  // 0x01D0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UInputMapperActionOverrideConfig*, class UKnowledgeBaseExpressionListener*> ConditionalListeners;                                    // 0x0230(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MW4K[0x40];                                  // 0x0280(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSInputProfileManagerComponent
	 * Size -> 0x0100 (FullSize[0x01E8] - InheritedSize[0x00E8])
	 */
	class UDSInputProfileManagerComponent : public UActorComponent
	{
	public:
		TWeakObjectPtr<class UOptionsManager>                      OptionsManager;                                          // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FName>                                        ContextStack;                                            // 0x00F0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RKKC[0x10];                                  // 0x0100(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMapperComponent*                               InputMapperComponent;                                    // 0x0110(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UInputMapperPreprocessProfile*>               PreprocessProfiles;                                      // 0x0118(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SKE9[0xC0];                                  // 0x0128(0x00C0) MISSED OFFSET (PADDING)

	public:
		void PushInputContext(const class FName& InContext);
		void PopInputContext(const class FName& InContext);
		void OnControlSchemeChanged(EControlSchemeType InCurrentControlScheme, EControlSchemeType LastControlScheme);
		void OnControllerTypeChanged(EInputMapperControllerType InCurrentControllerType, EInputMapperControllerType LastControllerType);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.InventoryActor
	 * Size -> 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
	 */
	class AInventoryActor : public AInfo
	{
	public:
		class UClass*                                              InventoryComponentClass;                                 // 0x02B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInventoryComponent*                                 InventoryComponent;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UInventoryComponent* GetInventoryComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.InventoryCategoryContainer
	 * Size -> 0x0190 (FullSize[0x01B8] - InheritedSize[0x0028])
	 */
	class UInventoryCategoryContainer : public UObject
	{
	public:
		class UInventoryCategory*                                  Config;                                                  // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteSize;                                           // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A57Y[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInventoryComponent*                                 OwningInventory;                                         // 0x0038(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SlotAddedDelegates;                                      // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SlotChangedDelegates;                                    // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3Y10[0x38];                                  // 0x0060(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInventoryCategorySlots                             Slots;                                                   // 0x0098(0x0120) Net, NativeAccessSpecifierPrivate

	public:
		bool IsRemainingCapacityForItemArchetype(class UItemArchetype* ItemArchetype);
		TArray<struct FInventoryCategorySlot> GetSlots();
		int32_t GetRemainingCapacityForItemArchetype(class UItemArchetype* ItemArchetype);
		int32_t GetNumValidItems();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.InventoryComponent
	 * Size -> 0x0248 (FullSize[0x0330] - InheritedSize[0x00E8])
	 */
	class UInventoryComponent : public UActorComponent
	{
	public:
		struct FInventoryActorInfo                                 ActorInfo;                                               // 0x00E8(0x0020) BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UInventoryCategory*>                          CategoriesConfig;                                        // 0x0108(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UClass*                                              InventoryCategoryContainerClass;                         // 0x0118(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UInventoryCategoryContainer*>                 Categories;                                              // 0x0120(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInventoryModified;                                     // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RIZ[0x1F0];                                 // 0x0140(0x01F0) MISSED OFFSET (PADDING)

	public:
		void ServerRemoveItemByArchetype(class UItemArchetype* ItemArchetype, int32_t Count);
		void ServerRemoveItem(class AItemActor* Item, int32_t Count);
		void ServerAddItemByArchetype(class UItemArchetype* ItemArchetype, int32_t Count, bool bShouldDropOnOverflow);
		void ServerAddItem(class AItemActor* Item, bool bShouldDropOverflow);
		void OnSlotChanged(const struct FInventoryCategorySlot& Slot, class UInventoryCategoryContainer* Owner, int32_t Delta);
		void OnSlotAdded(const struct FInventoryCategorySlot& Slot, class UInventoryCategoryContainer* Owner, int32_t Delta);
		class AItemActor* HasItemArchetype(class UItemArchetype* ItemArchetype);
		class AActor* GetUser();
		int32_t GetOccupiedSlotsInCategory(class UInventoryCategory* ItemCategory);
		int32_t GetItemArchetypeCount(class UItemArchetype* ItemArchetype);
		class UInventoryCategoryContainer* GetCategory(const class FName& CategoryName);
		int32_t GetAvailableSlotsInCategory(class UInventoryCategory* ItemCategory);
		void ClientInventoryUpdated(TArray<struct FClientInventoryUpdatedItem> ReceivedItems);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ItemAssignmentShortcutsPersistentData
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	class UItemAssignmentShortcutsPersistentData : public UPersistentDataCollectionBase
	{
	public:
		TArray<struct FAssignedItem>                               AssignedItems;                                           // 0x0048(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate
		int32_t                                                    SelectedIndex;                                           // 0x0058(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AY0D[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ConfigName;                                              // 0x0060(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ItemUIComponent
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UItemUIComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSLocalPlayer
	 * Size -> 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
	 */
	class UDSLocalPlayer : public ULocalPlayer
	{
	public:
		class UControlSchemeManager*                               ControlSchemeManager;                                    // 0x0258(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnControlSchemeUsingMouseChanged(bool bUsingMouse);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ObjectDespawnManagerNotifier
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UObjectDespawnManagerNotifier : public UObject
	{
	public:
		unsigned char                                              UnknownData_JOTR[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnActorFellOutOfWorld(class AActor* InActor);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionHandlerProxy
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UOptionHandlerProxy : public UObject
	{
	public:
		unsigned char                                              UnknownData_51OP[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionHandlerProxyCulture
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UOptionHandlerProxyCulture : public UOptionHandlerProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionHandlerProxy_ConsoleVariable
	 * Size -> 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
	 */
	class UOptionHandlerProxy_ConsoleVariable : public UOptionHandlerProxy
	{
	public:
		class FString                                              TargetCVarName;                                          // 0x0060(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetCVarDescription;                                   // 0x0070(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N2G6[0x18];                                  // 0x0080(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionHandlerProxyTelemetry
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UOptionHandlerProxyTelemetry : public UOptionHandlerProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.PaperDollComponent
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	class UPaperDollComponent : public UActorComponent
	{
	public:
		class UPaperDollSetup*                                     SlotsConfigAsset;                                        // 0x00E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APaperDollState*                                     PaperDollState;                                          // 0x00F0(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLYV[0x20];                                  // 0x00F8(0x0020) MISSED OFFSET (PADDING)

	public:
		void RemoveItemFrom(const class FName& SlotName);
		void OnRep_PaperDollState();
		void OnOwnerPlayerCharacterUnpossessed();
		void OnOwnerPlayerCharacterPossessed(class AController* PlayerController);
		class FName GetSlotNameContainingItem(class AItemActor* EquippableItem);
		class UPaperDollSlot* GetSlot(const class FName& SlotName);
		class AItemActor* GetItemPendingOrAssignedToSlot(const class FName& SlotName);
		class UItemAssignmentShortcutGroupInstance* GetItemAssignmentShortcutGroup(const class FName& ShortcutGroupName);
		class AItemActor* GetItemAssignedToSlot(const class FName& SlotName);
		class UEquippableComponent* GetEquippableAssignedToSlot(const class FName& SlotName);
		void DeactivateSlot(const class FName& SlotName);
		void AssignItemTo(const class FName& SlotName, class UEquippableComponent* Equippable);
		void ActivateSlot(const class FName& SlotName);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSPathFollowingComponent
	 * Size -> 0x0000 (FullSize[0x0290] - InheritedSize[0x0290])
	 */
	class UDSPathFollowingComponent : public UPathFollowingComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.StarerComponent
	 * Size -> 0x00B0 (FullSize[0x0340] - InheritedSize[0x0290])
	 */
	class UStarerComponent : public USceneComponent
	{
	public:
		float                                                      GatherRange;                                             // 0x0290(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E08H[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStareBeginDelegate;                                    // 0x0298(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStareEndDelegate;                                      // 0x02A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGXA[0x88];                                  // 0x02B8(0x0088) MISSED OFFSET (PADDING)

	public:
		void ServerStopStaring(class UStareeComponent* StaringActor);
		void ServerStartStaring(class UStareeComponent* StaringActor);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSPlayerState
	 * Size -> 0x0040 (FullSize[0x03F0] - InheritedSize[0x03B0])
	 */
	class ADSPlayerState : public APlayerState
	{
	public:
		class UClass*                                              InventoryActorClass;                                     // 0x03B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              PaperDollStateClass;                                     // 0x03B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZKO1[0x18];                                  // 0x03C0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AInventoryActor*                                     InventoryActor;                                          // 0x03D8(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APaperDollState*                                     PaperDollState;                                          // 0x03E0(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9YO6[0x8];                                   // 0x03E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_PaperDollState();
		void OnRep_InventoryActor();
		class AInventoryActor* GetInventoryActor();
		class UInventoryComponent* GetInventory();
		void BlueprintOnRep_InventoryActor();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.PresentationProxy
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UPresentationProxy : public UObject
	{
	public:
		unsigned char                                              UnknownData_8GTR[0x40];                                  // 0x0028(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.StareeComponent
	 * Size -> 0x00C0 (FullSize[0x0350] - InheritedSize[0x0290])
	 */
	class UStareeComponent : public USceneComponent
	{
	public:
		float                                                      StareTimeRequired;                                       // 0x0290(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B5Y8[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScopedKnowledgeBaseExpressionListener              EnableExpression;                                        // 0x0298(0x0060) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UUniversalCooldownObject*                            UniversalCooldown;                                       // 0x02F8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                SubtitleText;                                            // 0x0300(0x0018) Edit, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBeingStared;                                           // 0x0318(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStoppedBeingStared;                                    // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KC64[0x18];                                  // 0x0338(0x0018) MISSED OFFSET (PADDING)

	public:
		void RemoveDisableReason(const class FName& DisableReason);
		void OnCooldownComplete();
		bool IsWithinBounds(const struct FVector& PlayerLocation);
		void AddDisableReason(const class FName& DisableReason);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.StareSystemManager
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class AStareSystemManager : public AInfo
	{
	public:
		unsigned char                                              UnknownData_ZGCQ[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSSubtitlesManager
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UDSSubtitlesManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_MKXP[0xA0];                                  // 0x0028(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSWorldSettings
	 * Size -> 0x0110 (FullSize[0x0570] - InheritedSize[0x0460])
	 */
	class ADSWorldSettings : public AWorldSettings
	{
	public:
		struct FSoftObjectPath                                     UIKeyNamesDataAssetPath;                                 // 0x0460(0x0018) Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      TriggerAreaManagerClass;                                 // 0x0478(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      AssetPoolManagerClass;                                   // 0x0490(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      SlomoManagerClass;                                       // 0x04A8(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      ChallengeManagerClass;                                   // 0x04C0(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F106[0x28];                                  // 0x04D8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UManagerCollection*                                  ManagerCollection;                                       // 0x0500(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UManagerController*                                  ManagerController;                                       // 0x0508(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AAttachmentManager*                                  AttachmentManager;                                       // 0x0510(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ATriggerAreaManager*                                 TriggerAreaManager;                                      // 0x0518(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AItemFactoryManager*                                 ItemFactoryManager;                                      // 0x0520(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AChallengeManager*                                   ChallengeManager;                                        // 0x0528(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ACharacterActionManager*                             CharacterActionManager;                                  // 0x0530(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AAssetPoolManager*                                   AssetPoolManager;                                        // 0x0538(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ASoftBodyManager*                                    SoftBodyManager;                                         // 0x0540(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APauseManager*                                       PauseManager;                                            // 0x0548(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ASlomoManager*                                       SlomoManager;                                            // 0x0550(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AGameplayEventManager*                               GameplayEventManager;                                    // 0x0558(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUIKeyNamesData*                                     UIKeyNamesData;                                          // 0x0560(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KVNN[0x8];                                   // 0x0568(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.BaseChallengeDataAsset
	 * Size -> 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
	 */
	class UBaseChallengeDataAsset : public UDataAsset
	{
	public:
		EChallengeBindType                                         ChallengeBindType;                                       // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NHJ2[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0038(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                DisplayProgressText;                                     // 0x0050(0x0018) Edit, NativeAccessSpecifierPublic
		class FName                                                Category;                                                // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabledByDefault;                                       // 0x0070(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_COB8[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ChallengeClass;                                          // 0x0078(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTierData>                                   Tiers;                                                   // 0x0080(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bRepeatCallbacks;                                        // 0x0090(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJPL[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ENotificationRule, struct FNotificationRule>          NotificationRules;                                       // 0x0098(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		int32_t GetTierThreshold(int32_t Tier);
		int32_t GetTierForProgress(int32_t Progress);
		int32_t GetTierCompletedForProgress(int32_t Progress);
		int32_t GetNumTiers();
		int32_t GetCompletionThreshold();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ChallengeManager
	 * Size -> 0x01D8 (FullSize[0x0488] - InheritedSize[0x02B0])
	 */
	class AChallengeManager : public AInfo
	{
	public:
		class UDataTable*                                          ChallengeDataTable;                                      // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UChallengeSetDataAsset*>                      DefaultEnabledChallengeSets;                             // 0x02B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bLoadDataOnly;                                           // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4Y3U[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FChallengeCollection>             CreatedChallenges;                                       // 0x02D0(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<class FName, struct FChallengeCollection>             ActiveChallenges;                                        // 0x0320(0x0050) Transient, NativeAccessSpecifierPrivate
		TArray<class UChallengeSetDataAsset*>                      ChallengeSets;                                           // 0x0370(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<class UBaseChallengeDataAsset*, class FName>          ChallengeAssetToNameMap;                                 // 0x0380(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_75WO[0xB8];                                  // 0x03D0(0x00B8) MISSED OFFSET (PADDING)

	public:
		void RemoveChallengeSet(class UChallengeSetDataAsset* ChallengeSet);
		void PauseChallenge(class ADSPlayerController* Player, const class FName& ChallengeName);
		void K2_RemoveCallbackForChallenge(class UObject* Object, const class FName& ChallengeName, ENotificationRule NotificationRule, const class FName& FunctionName);
		void K2_AddCallbackForChallenge(class UObject* Object, const class FName& ChallengeName, ENotificationRule NotificationRule, const class FName& FunctionName);
		void IncrementChallenge(class ADSPlayerController* TargetedPlayerController, const class FName& ChallengeName, int32_t ProgressDelta);
		int32_t GetCompletedChallengesCount(const class FName& Category, int32_t Tier);
		void GetChallengeTierProgressFraction(const class FName& ChallengeName, float* OutProgress, int32_t* OutTier);
		void GetChallengeTierProgress(const class FName& ChallengeName, int32_t* OutProgress, int32_t* OutTier);
		int32_t GetChallengeThresholdForTier(const class FName& ChallengeName, int32_t Tier);
		float GetChallengeProgressFractionTowardsTier(const class FName& ChallengeName, int32_t Tier);
		float GetChallengeProgressFraction(const class FName& ChallengeName);
		int32_t GetChallengeProgress(const class FName& ChallengeName);
		class FName GetChallengeName(class UBaseChallengeDataAsset* ChallengeData);
		float GetChallengeDisplayedProgressFractionTowardsTier(const class FName& ChallengeName, int32_t Tier);
		float GetChallengeDisplayedProgressFraction(const class FName& ChallengeName);
		int32_t GetChallengeDisplayedProgress(const class FName& ChallengeName);
		int32_t GetChallengeDeltaProgressTowardsTier(const class FName& ChallengeName, int32_t Tier);
		class UBaseChallengeDataAsset* GetChallengeData(const class FName& ChallengeName);
		int32_t GetChallengeCount(const class FName& Category);
		class UBaseChallengeRuntimeObject* GetChallenge(const class FName& ChallengeName);
		void CreateAndEnableChallenge(class ADSPlayerController* Player, const class FName& ChallengeName);
		void AddChallengeSet(class UChallengeSetDataAsset* ChallengeSet);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.BaseChallengeRuntimeObject
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UBaseChallengeRuntimeObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_PUMQ[0x68];                                  // 0x0028(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AChallengeManager*                                   ChallengeManager;                                        // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class APlayerController*                                   Controller;                                              // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RMWJ[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseChallengeRuntimeState*                          RuntimeState;                                            // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DemoFilterList
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UDemoFilterList : public UDataAsset
	{
	public:
		EDemoFilterType                                            FilterType;                                              // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BRD0[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		bool IsFilterType(EDemoFilterType InFilterType);
		EDemoFilterType GetFilterType();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.Attachment
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UAttachment : public UObject
	{
	public:
		struct FDynamicAttachmentRules                             AttachmentRules;                                         // 0x0028(0x0028) Net, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FM70[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     SourceComponent;                                         // 0x0060(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     TargetComponent;                                         // 0x0068(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UAttachmentComponent>                 CachedAttachmentComponentSource;                         // 0x0070(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UAttachmentComponent>                 CachedAttachmentComponentTarget;                         // 0x0078(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_32BB[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		bool UnHideAttachment(const class FName& HideReason);
		void OnComponentDestroyed(class UActorComponent* DestroyedComponent);
		void OnActorDestroyed(class AActor* DestroyedActor);
		bool IsHidden();
		bool IsAttachmentAllowed();
		void Initialize();
		bool HideAttachment(const class FName& HideReason);
		bool HasValidData();
		class UAttachmentComponent* GetAttachmentTargetComponent();
		class USceneComponent* GetAttachmentTarget();
		class UAttachmentComponent* GetAttachmentSourceComponent();
		class USceneComponent* GetAttachmentSource();
		void Detach();
		void CleanupAttachment(EDetachmentReason DetachmentReason);
		bool Attach();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSSkeletalMeshComponent
	 * Size -> 0x00A0 (FullSize[0x0F60] - InheritedSize[0x0EC0])
	 */
	class UDSSkeletalMeshComponent : public USkeletalMeshComponent
	{
	public:
		EVisibilityBasedAnimTickOption                             DefaultVisibilityBasedAnimTickOption;                    // 0x0EC0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YAO1[0x7];                                   // 0x0EC1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVisibilityBasedAnimTickOptionPriorityConfig*        VisibilityBasedAnimTickOptionPriorityConfig;             // 0x0EC8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultVisibilityBasedAnimTickOptionRequestPriority;     // 0x0ED0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4YAB[0x8C];                                  // 0x0ED4(0x008C) MISSED OFFSET (PADDING)

	public:
		void RemoveVisibilityBasedAnimTickOptionRequest(const struct FGuid& RequestId);
		struct FGuid AddVisibilityBasedAnimTickOptionRequest(const class FName& Reason, EVisibilityBasedAnimTickOption AnimTickOption);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CharacterActionComponent
	 * Size -> 0x0340 (FullSize[0x0428] - InheritedSize[0x00E8])
	 */
	class UCharacterActionComponent : public UActorComponent
	{
	public:
		class UActionDefinitions*                                  ActionDefinitions;                                       // 0x00E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCharacterActionResolutionTable*                     ResolutionTable;                                         // 0x00F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDSTableAsset*                                       QueueTimeResolutionTableAsset;                           // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRegisterPrePhysicsTick;                                 // 0x0100(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WH45[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnBeginAction;                                           // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBeginActionEarly;                                      // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndAction;                                             // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndActionEarly;                                        // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bAllowDebugLogThrottling;                                // 0x0148(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RD1M[0x8F];                                  // 0x0149(0x008F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCharacterActionRequest*>                     PendingReplicatedRequests;                               // 0x01D8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UCharacterActionRequest*>                     RequestQueue;                                            // 0x01E8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UCharacterActionRequest*>                     BeginQueue;                                              // 0x01F8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UCharacterActionRequest*>                     ActiveActions;                                           // 0x0208(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UCharacterActionRequest*>                     TickingActiveActions;                                    // 0x0218(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UCharacterActionRequest*>                     ProcessingQueue;                                         // 0x0228(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UCharacterActionRequest*>                     RequestPool;                                             // 0x0238(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		struct FCharacterActionNetworkRequestArray                 CharacterActionNetworkRequests;                          // 0x0248(0x0120) Net, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<struct FReplicatedStateParams>                      StateParamsArray;                                        // 0x0368(0x0010) Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected
		TArray<struct FStateParamsRepInfo>                         LocalStateParamsRepInfo;                                 // 0x0378(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_66XI[0xA0];                                  // 0x0388(0x00A0) MISSED OFFSET (PADDING)

	public:
		void UntagAction(const struct FGuid& RequestId, const class FName& Tag);
		void TagAction(const struct FGuid& RequestId, const class FName& Tag);
		void SetKnowledgeBaseComponent(class UKnowledgeBaseComponent* InKnowledgeBaseComponent);
		void ServerUpdateStateParams(const struct FUserParamsObjectWrapper& Params);
		void ServerRequestDenied(const struct FGuid& RequestId);
		void ServerRequestCancelled(const struct FGuid& RequestId);
		void ServerRemoveCharacterActionRequest(const struct FGuid& RequestId, ECharacterActionEndedReason Reason);
		void ServerBounceReplicationBlock(const struct FGuid& RequestId, const struct FUserParamsObjectWrapper& UserParams);
		void ServerAddCharacterActionRequest(const struct FCharacterActionNetworkRequestItem& CharacterActionRequestItem);
		struct FGuid RequestCharacterAction(const struct FCharacterActionRequestParams& RequestParams);
		void RegisterDefaultActions();
		bool RegisterAction(class UActionDefinition* ActionDefinition);
		void OnRep_StateParamsArray();
		void NetMulticastAddCharacterActionRequest(const struct FCharacterActionNetworkRequestItem& CharacterActionRequestItem);
		void LoadActionDefinitions(class UActionDefinitions* Definitions);
		bool IsValidActionRequest(const struct FGuid& RequestId);
		void GetInitParams(const struct FGuid& RequestId, class UCustomActionParamsBase** OutInitParams, EOkInvalidResult* Result);
		class UCharacterAction* FindByID(const struct FGuid& RequestId);
		int32_t FindActionsByTag(const class FName& Tag, TArray<struct FGuid>* ResultArray);
		int32_t FindActionsByName(const class FName& ActionName, TArray<struct FGuid>* ResultArray);
		int32_t FindActionsByClass(class UClass* ActionType, TArray<struct FGuid>* ResultArray);
		int32_t EndActionsByTag(const class FName& Tag, ECharacterActionEndReason Reason, float DelayTime);
		void EndAction(const struct FGuid& RequestId, ECharacterActionEndReason Reason, float DelayTime);
		void CustomSignal(const struct FGuid& RequestId, const class FName& SignalName);
		void ClientRequestCharacterAction(int32_t ActionTypeHash, const struct FUserParamsObjectWrapper& InitParams, float MaxQueueTime, const struct FGuid& RequestId);
		void ClientEndAction(const struct FGuid& RequestId, ECharacterActionEndedReason Reason, float DelayTime);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSGFxObject
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UDSGFxObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_CILX[0x40];                                  // 0x0028(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetMemberValueArray(const class FString& ArrayName, TArray<struct FASValue> ArrayData);
		void SetMemberValue(const class FString& MemberName, const struct FASValue& Input);
		void SetAssetFromOtherGFxObject(class UGFxObject* OtherGFxObject);
		void SetAssetFromMoviePlayer(class UGFxMoviePlayer* MoviePlayer, const class FString& Path);
		void SetAssetFromGFxObject(class UGFxObject* ParentGFxObject, const class FString& Path);
		void SetAssetFromDSGFxObject(class UDSGFxObject* ParentDSGFxObject, const class FString& Path);
		bool IsValid();
		bool IsNull();
		void InvokeOptionalNoReturn(const class FString& FunctionName, TArray<struct FASValue> Params);
		void InvokeNoReturn(const class FString& FunctionName, TArray<struct FASValue> Params);
		bool HasMemberValue(const class FString& MemberName);
		class UGFxMoviePlayer* GetMoviePlayer();
		class UGFxObject* GetMemberVariable(const class FString& MemberName);
		TArray<struct FASValue> GetMemberValueArray(const class FString& ArrayName);
		struct FASValue GetMemberValue(const class FString& MemberName);
		class UGFxObject* GetGFxObject();
		void ClearAssetObject();
		bool CheckIfMemberExists(const class FString& MemberName);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.GFxDisplayObject
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	class UGFxDisplayObject : public UDSGFxObject
	{
	public:
		unsigned char                                              UnknownData_421S[0x20];                                  // 0x0068(0x0020) MISSED OFFSET (PADDING)

	public:
		void UnregisterFromDirectCommands();
		void SetYRotation(float YRotation);
		void SetY(float Y);
		void SetXRotation(float XRotation);
		void SetX(float X);
		void SetWidth(float Width);
		void SetVisible(bool bVisible);
		void SetScaleYFrac(float ScaleYFrac);
		void SetScaleXYFrac(float Scale);
		void SetScaleXFrac(float ScaleXFrac);
		void SetScaleFrac(const struct FVector2D& Scale2D);
		void SetRotation(float Rotation);
		void SetPosition2D(const struct FVector2D& Position);
		void SetHeight(float Height);
		void SetEdgeAAMode(EDIEdgeAAMode EdgeAAMode);
		void SetDisplayInfo(const struct FASDisplayInfo& InDisplayInfo);
		void SetColorTransform(const struct FLinearColor& Multiply, const struct FLinearColor& Add);
		void SetAlphaFrac(float AlphaFrac);
		void RegisterForDirectCommands();
		float GetYRotation();
		float GetY();
		float GetXRotation();
		float GetX();
		float GetWidth();
		bool GetVisible();
		struct FVector2D GetSize2D();
		float GetScaleYFrac();
		float GetScaleXFrac();
		struct FVector2D GetScaleFrac();
		float GetRotation();
		struct FVector2D GetPosition2D();
		float GetHeight();
		bool GetDisplayInfo(struct FASDisplayInfo* OutDisplayInfo);
		float GetAlphaFrac();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.GFxMovieClip
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UGFxMovieClip : public UGFxDisplayObject
	{
	public:
		void Unload();
		void RemoveMovieClipAndClear();
		void LoadMovie(class USwfMovie* SwfMovie, bool bForceAdvance);
		void LoadImageAsset(const struct FSoftObjectPath& AssetReference);
		void GotoAndStopI(int32_t FrameNum);
		void GotoAndStop(const class FString& FrameString);
		void GotoAndPlayI(int32_t FrameNumber);
		void GotoAndPlay(const class FString& FrameString);
		int32_t GetTotalFrames();
		class FString GetMovieClipName();
		class UGFxObject* CreateEmptyMovieClipBP(const class FString& InstanceName, int32_t Depth);
		class UGFxObject* AttachMovieBP(const class FString& SymbolName, const class FString& InstanceName, int32_t Depth);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.AttachmentModule
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAttachmentModule : public UObject
	{
	public:
		class UAttachment*                                         ParentAttachment;                                        // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.BaseDespawnCallback
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBaseDespawnCallback : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ItemInstanceData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UItemInstanceData : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.AttachmentComponent
	 * Size -> 0x00C0 (FullSize[0x01A8] - InheritedSize[0x00E8])
	 */
	class UAttachmentComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_O6N2[0x30];                                  // 0x00E8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DefaultAttachmentClass;                                  // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class UClass*, class UClass*>                         AttachmentClassMap;                                      // 0x0120(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		bool                                                       bActorClassFilter;                                       // 0x0170(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4OVN[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAttachment*>                                 NetworkedAttachments;                                    // 0x0178(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		TArray<class UAttachment*>                                 PendingLocalAttachments;                                 // 0x0188(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UAttachment*>                                 LocalAttachments;                                        // 0x0198(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void UnHideAttachmentsOnBone(const class FName& HideReason, const class FName& BoneName);
		void RemoveAllAttachments();
		void OnRep_NetworkedAttachments();
		bool NamedAttachmentExists(const class FName& AttachmentName);
		bool IsAttachmentAllowed(class UAttachment* Attachment);
		void HideAttachmentsOnBone(const class FName& HideReason, const class FName& BoneName);
		TArray<class UAttachment*> GetAttachments();
		class UClass* GetAttachmentClassForActor(class AActor* Actor);
		bool AnyAttachmentExists();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.AchievementsManagerConfig
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAchievementsManagerConfig : public UDataAsset
	{
	public:
		TArray<class UDataTable*>                                  GameAchievements;                                        // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ActionDefinition
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UActionDefinition : public UDataAsset
	{
	public:
		class FName                                                Name;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Category;                                                // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Implementation;                                          // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Factory;                                                 // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              StateParams;                                             // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              RestrictInitParams;                                      // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DefaultInitParamsType;                                   // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterActionRequestPolicy                              RequestPolicy;                                           // 0x0068(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EActionNetworkType                                         NetworkType;                                             // 0x0069(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELocalActionInterruptResolution                            LocalActionInterruptResolution;                          // 0x006A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsesDefaultLifetimeFact;                                // 0x006B(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N0A5[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKnowledgeBaseFactKey>                       LifetimeFacts;                                           // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FName                                                StatName;                                                // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StatContext;                                             // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldSendTelemetry;                                    // 0x0090(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EActionRequestResolutionType                               ResolutionType;                                          // 0x0091(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34FZ[0x6];                                   // 0x0092(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ActionDefinitions
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UActionDefinitions : public UDataAsset
	{
	public:
		TArray<struct FActionDefinitionEntry>                      Entries;                                                 // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ActorContextComponent
	 * Size -> 0x0080 (FullSize[0x0168] - InheritedSize[0x00E8])
	 */
	class UActorContextComponent : public UActorComponent
	{
	public:
		float                                                      SelectionRadius;                                         // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalAngleMinimum;                                    // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalAngleVelocityMinimum;                            // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalAngleVelocityMinimum;                          // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForwardTraceDistance;                                    // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForwardTraceStartOffset;                                 // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FOVHalfAngle;                                            // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HalfTraceExtents;                                        // 0x0104(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EObjectTypeQuery>                                   TraceObjectTypes;                                        // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0120(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LookHistoryFrames;                                       // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SIH[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSceneContextQueryResult>                    QueryResults;                                            // 0x0138(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class FName>                                        ActiveContexts;                                          // 0x0148(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FD1E[0x10];                                  // 0x0158(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.AILevelOfDetailFeature_MovementTickScheduler
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UAILevelOfDetailFeature_MovementTickScheduler : public UAILevelOfDetailFeature_ExternalTickScheduler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.AnimNotifyState_BaseAttachment
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_BaseAttachment : public UAnimNotifyState
	{
	public:
		class FName                                                AttachSocketName;                                        // 0x0030(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachmentName;                                          // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PositionOffset;                                          // 0x0040(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x004C(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bKeepRelativeTransform;                                  // 0x0058(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKeepAttachment;                                         // 0x0059(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FP50[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<uint32_t, struct FAnimNotifyAttachmentInfo>           AttachmentsByMeshID;                                     // 0x0060(0x0050) BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.AnimNotifyState_ActorAttachment
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UAnimNotifyState_ActorAttachment : public UAnimNotifyState_BaseAttachment
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x00B0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.AnimNotifyState_ChainableAction
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_ChainableAction : public UAnimNotifyState
	{
	public:
		bool                                                       bSpecifyByActionDefinition;                              // 0x0030(0x0001) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CKVS[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ActionType;                                              // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UActionDefinition*                                   ActionDefinition;                                        // 0x0040(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FChainableAction>                            ChainableActions;                                        // 0x0048(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ExcludeActions;                                          // 0x0058(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UActionDefinition*>                           ExcludeActionDefinitions;                                // 0x0068(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.AnimNotifyState_Slomo
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_Slomo : public UAnimNotifyState
	{
	public:
		struct FStateSlomoRequest                                  SlomoRequest;                                            // 0x0030(0x001C) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bBlendsOutOnRemoval;                                     // 0x004C(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HWG[0x53];                                  // 0x004D(0x0053) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.AnimNotifyState_StaticMeshAttachment
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UAnimNotifyState_StaticMeshAttachment : public UAnimNotifyState_BaseAttachment
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x00B0(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              OptionalMeshComponentClass;                              // 0x00B8(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.AttachmentManager
	 * Size -> 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
	 */
	class AAttachmentManager : public AInfo
	{
	public:
		TArray<class UAttachment*>                                 Attachments;                                             // 0x02B0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		class AAttachmentManager* STATIC_GetAttachmentManager(class UObject* WorldContextObject);
		class UAttachment* FindExistingNamedAttachment(const class FName& AttachmentName);
		class UAttachment* CreateAttachmentBetweenComponentAndActor(class USceneComponent* SourceComponent, class AActor* TargetActor, const struct FDynamicAttachmentRules& DynamicAttachmentRules);
		class UAttachment* CreateAttachmentBetweenActors(class AActor* ActorToAttach, class AActor* TargetActor, const struct FDynamicAttachmentRules& DynamicAttachmentRules);
		class UAttachment* CreateAttachmentBetweenActorAndComponent(class AActor* ActorToAttach, class USceneComponent* TargetComponent, const struct FDynamicAttachmentRules& DynamicAttachmentRules);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.BaseChallengeRuntimeState
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UBaseChallengeRuntimeState : public UPersistentDataCollectionBase
	{
	public:
		bool                                                       bIsActive;                                               // 0x0048(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DFCL[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentProgress;                                         // 0x004C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentTier;                                             // 0x0050(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentCompletedTier;                                    // 0x0054(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsComplete;                                             // 0x0058(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UKJ3[0xF];                                   // 0x0059(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.BreezeActor
	 * Size -> 0x0060 (FullSize[0x0310] - InheritedSize[0x02B0])
	 */
	class ABreezeActor : public AInfo
	{
	public:
		float                                                      Weight;                                                  // 0x02B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeDistanceToCamera;                                    // 0x02B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBreezeWindSettings                                 WindSettings;                                            // 0x02B8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBreezeGustSettings                                 GustSettings;                                            // 0x02D0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SpeedChangeRate;                                         // 0x02E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TB2Q[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     SceneRoot;                                               // 0x02F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWindDirectionalSourceComponent*                     WindComponent;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FCPP[0x10];                                  // 0x0300(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CameraModifier_DepthOfField
	 * Size -> 0x07C8 (FullSize[0x0810] - InheritedSize[0x0048])
	 */
	class UCameraModifier_DepthOfField : public UCameraModifier
	{
	public:
		float                                                      FocalDistance;                                           // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NearBlurSize;                                            // 0x004C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarBlurSize;                                             // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUH8[0x7BC];                                 // 0x0054(0x07BC) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CameraModifier_FieldOfView
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UCameraModifier_FieldOfView : public UCameraModifier
	{
	public:
		bool                                                       bSpecifyAbsoluteFOV;                                     // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C7BJ[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DesiredFOV;                                              // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DesiredFOVPercentageOfDefault;                           // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWaitForSetNewDesiredFOV;                                // 0x0054(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSIV[0xB];                                   // 0x0055(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ChallengeCompletionChallengeDataAsset
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UChallengeCompletionChallengeDataAsset : public UBaseChallengeDataAsset
	{
	public:
		bool                                                       bInterpretTierThresholdAsPercentage;                     // 0x00E8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GTG3[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFixedDataTableEditableRowHandle>            ChallengesToTrack;                                       // 0x00F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ChallengeCompletionChallengeRuntimeObject
	 * Size -> 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
	 */
	class UChallengeCompletionChallengeRuntimeObject : public UBaseChallengeRuntimeObject
	{
	public:
		unsigned char                                              UnknownData_LXLR[0x58];                                  // 0x00B0(0x0058) MISSED OFFSET (PADDING)

	public:
		void OnChallengeComplete(class UBaseChallengeRuntimeObject* Challenge, ENotificationRule NotificationRule, int32_t DeltaProgress, int32_t Progress);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ChallengeManagerRuntimeState
	 * Size -> 0x0050 (FullSize[0x0098] - InheritedSize[0x0048])
	 */
	class UChallengeManagerRuntimeState : public UPersistentDataCollectionBase
	{
	public:
		TMap<class FName, struct FActiveChallengeCollection>       ActiveChallenges;                                        // 0x0048(0x0050) SaveGame, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ChallengeResponse_UpdateAchievement
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UChallengeResponse_UpdateAchievement : public UBaseChallengeResponse
	{
	public:
		struct FFixedDataTableEditableRowHandle                    AchievementRowHandle;                                    // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ChallengeSetDataAsset
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UChallengeSetDataAsset : public UDataAsset
	{
	public:
		TArray<class UBaseChallengeDataAsset*>                     ChallengeList;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScopedKnowledgeBaseExpressionListener              ActiveExpression;                                        // 0x0040(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N6DX[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CharacterActionFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCharacterActionFactory : public UInterface
	{
	public:
		class UCharacterAction* AllocateAction(const struct FAllocateActionParams& Params);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CharacterActionManager
	 * Size -> 0x0050 (FullSize[0x0300] - InheritedSize[0x02B0])
	 */
	class ACharacterActionManager : public AInfo
	{
	public:
		TMap<class UClass*, class UObject*>                        CustomActionFactories;                                   // 0x02B0(0x0050) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CharacterActionRequest
	 * Size -> 0x0130 (FullSize[0x0158] - InheritedSize[0x0028])
	 */
	class UCharacterActionRequest : public UObject
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Category;                                                // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NetworkTime;                                             // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YALJ[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCharacterAction*                                    ActionImplementation;                                    // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EActionState                                               State;                                                   // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RQYY[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Tags;                                                    // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UCharacterActionComponent*                           Requester;                                               // 0x0078(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_93P3[0xD8];                                  // 0x0080(0x00D8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CharacterActionRequestHelper
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UCharacterActionRequestHelper : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnResolvedAction;                                        // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancelledAction;                                       // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBeginActionDelegates;                                  // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndActionDelegates;                                    // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCustomSignalDelegates;                                 // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJ7E[0x88];                                  // 0x0078(0x0088) MISSED OFFSET (PADDING)

	public:
		struct FGuid RequestAction(class UCharacterActionComponent* InCharacterActionComponent, const struct FCharacterActionRequestParams& RequestParams, ECharacterActionHelperReferenceType InReferenceType);
		bool IsRequestValid();
		bool IsRequestStatus(ERequestStatus InRequestStatus);
		bool IsRequestInProgress();
		bool IsRequestForActionByName(const class FName& InActionName);
		bool IsRequestForAction(class UActionDefinition* InDefinition);
		bool HasActionAuthority(class UCharacterActionComponent* InCharacterActionComponent);
		void EndAction(ECharacterActionEndReason Reason, float DelayTime, bool bWaitForActionEnd);
		class UCharacterActionRequestHelper* STATIC_CreateCharacterActionRequestHelper(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CharacterActionResolutionTable
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UCharacterActionResolutionTable : public UObject
	{
	public:
		TArray<class FName>                                        ActionNames;                                             // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TMap<class FName, int32_t>                                 NameToIndex;                                             // 0x0038(0x0050) Protected, NativeAccessSpecifierProtected
		TArray<struct FActionResolutionEntry>                      EntryTable;                                              // 0x0088(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CustomParamsStackItem
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomParamsStackItem : public UCustomParamsBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CharacterMovementModeRequestStackItem
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UCharacterMovementModeRequestStackItem : public UCustomParamsStackItem
	{
	public:
		class FName                                                RequestReason;                                           // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMovementMode                                              MovementMode;                                            // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomMovementMode;                                      // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OB92[0xE];                                   // 0x0032(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnActiveMovementModeChanged;                             // 0x0040(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CharacterMovementModePriorityConfig
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UCharacterMovementModePriorityConfig : public UDataAsset
	{
	public:
		TMap<class FName, int32_t>                                 Priorities;                                              // 0x0030(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CharacterMultiActionMultiActorRequester
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UCharacterMultiActionMultiActorRequester : public UObject
	{
	public:
		TArray<class URequestCharacterActionOnMultipleActorsCallbackProxy*> ActionRequests;                                          // 0x0028(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SJZ2[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnActionsSucceeded();
		void OnActionsFailed();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ControlSchemeBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UControlSchemeBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class FText STATIC_GetDisplayNameForKey(const struct FKey& Key);
		class UControlSchemeManager* STATIC_GetControlSchemeManagerFromPlayerController(class APlayerController* PlayerController);
		class UControlSchemeManager* STATIC_GetControlSchemeManager(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ControlSchemeManager
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UControlSchemeManager : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnControlSchemeChanged;                                  // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnControllerTypeChanged;                                 // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EYIU[0x80];                                  // 0x0048(0x0080) MISSED OFFSET (PADDING)

	public:
		bool IsMouseKeyboardControlScheme(EControlSchemeType ControlScheme);
		bool IsGamepadControlScheme(EControlSchemeType ControlScheme);
		bool IsCurrentlyMouseKeyboardControlScheme();
		bool IsCurrentlyGamepadControlScheme();
		EControlSchemeType GetCurrentControlScheme();
		EInputMapperControllerType GetCurrentControllerType();
		struct FControllerLayout GetCurrentControllerLayout();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.UIColourRowHandleWrapper
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UUIColourRowHandleWrapper : public UObject
	{
	public:
		struct FFixedDataTableEditableRowHandle                    ColourHandle;                                            // 0x0028(0x0018) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		struct FLinearColor GetLinearColor();
		class FName GetColorName();
		struct FColor GetColor();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CosmeticEffectData_ParticleSystem
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UCosmeticEffectData_ParticleSystem : public UCosmeticEffectData
	{
	public:
		unsigned char                                              UnknownData_T7MY[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnSystemFinished(class UParticleSystemComponent* InPS);
		void OnSystemDestroyed(class UParticleSystemComponent* InPS);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CosmeticEffect_ParticleSystem
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UCosmeticEffect_ParticleSystem : public UCosmeticEffect
	{
	public:
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShouldAffectLifetime;                                   // 0x0040(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShouldStopNonLoopingParticlesOnDestroy;                 // 0x0041(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bForceNotAttached;                                       // 0x0042(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DY82[0x1];                                   // 0x0043(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RotationOffset;                                          // 0x0044(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		ERendererStencilMask                                       CustomDepthStencilWriteMask;                             // 0x0050(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HU73[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CustomDepthStencilValue;                                 // 0x0054(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRenderCustomDepth : 1;                                  // 0x0058(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1SJ7[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DesaturationResponse;                                    // 0x005C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAttachment*                                         AttachmentInstance;                                      // 0x0060(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CosmeticEffectData_Slomo
	 * Size -> 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
	 */
	class UCosmeticEffectData_Slomo : public UCosmeticEffectData
	{
	public:
		unsigned char                                              UnknownData_SBHU[0x28];                                  // 0x0060(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CosmeticEffect_Slomo
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UCosmeticEffect_Slomo : public UCosmeticEffect
	{
	public:
		struct FSlomoRequest                                       Request;                                                 // 0x0038(0x0020) Edit, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CurveUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCurveUtils : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_GetVelocityFromScaledDistanceCurve(class UCurveFloat* ScaledCurve, float Time, float TimeScale, float ValueScale);
		float STATIC_GetVelocityFromDistanceCurve(class UCurveFloat* DistanceCurve, float Time);
		float STATIC_GetAccelerationFromScaledDistanceCurve(class UCurveFloat* ScaledCurve, float Time, float TimeScale, float ValueScale);
		float STATIC_GetAccelerationFromDistanceCurve(class UCurveFloat* DistanceCurve, float Time);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CustomParamsStackContainer
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UCustomParamsStackContainer : public UObject
	{
	public:
		class UClass*                                              RestrictTo;                                              // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FCustomParamsStackRequest>                   Requests;                                                // 0x0030(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		bool Remove(const struct FGuid& ID);
		bool IsCurrentId(const struct FGuid& ID);
		class UClass* GetRestrictTo();
		class UCustomParamsStackItem* GetParamsById(const struct FGuid& ID);
		class UCustomParamsStackItem* GetParams();
		class UCustomParamsStackContainer* STATIC_CreateCustomParamsStackContainer(class UObject* WorldContextObject, class UClass* InRestrictTo);
		struct FGuid Add(class UCustomParamsStackItem* Params, int32_t Priority);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.CustomParamsStackItemHelper
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UCustomParamsStackItemHelper : public UObject
	{
	public:
		unsigned char                                              UnknownData_MDWI[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		void Remove();
		class UCustomParamsStackItemHelper* STATIC_CreateCustomParamsStackItemHelper(class UObject* WorldContextObject);
		class UCustomParamsStackItem* Add(class UClass* InItemType, class UCustomParamsStackContainer* InContainer, int32_t InPriority);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DemoSettings
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UDemoSettings : public UObject
	{
	public:
		class FString                                              DemoName;                                                // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, class UDemoFilterList*>                  FilterLists;                                             // 0x0038(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TArray<class FName>                                        UnavailableFeatures;                                     // 0x0088(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TArray<class FString>                                      SupportedConfigs;                                        // 0x0098(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate

	public:
		class FName STATIC_GetDemoFeatureReason();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DespawnConditionsMaster
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UDespawnConditionsMaster : public UDataAsset
	{
	public:
		TMap<class FName, struct FDespawnConditions>               DespawnConditions;                                       // 0x0030(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DespawnWeights
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UDespawnWeights : public UDataAsset
	{
	public:
		struct FPerPlatformFloat                                   OutstandingWeightBeforeGarbageCollection;                // 0x0030(0x0004) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E4M1[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, struct FDespawnWeight>                 DespawnWeights;                                          // 0x0038(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DespawnUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDespawnUtils : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RemoveLingering(class AActor* Actor, const class FName& LingeringReason, float Delay);
		void STATIC_MarkLingering(class AActor* Actor, const class FName& LingeringReason);
		void STATIC_MakeLinger(class AActor* Actor, const class FName& LingeringReason, float Duration);
		bool STATIC_IsLingering(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSAssetManager
	 * Size -> 0x0000 (FullSize[0x0438] - InheritedSize[0x0438])
	 */
	class UDSAssetManager : public UAssetManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSCameraShake
	 * Size -> 0x0000 (FullSize[0x0160] - InheritedSize[0x0160])
	 */
	class UDSCameraShake : public UCameraShake
	{
	public:
		void SetShakeScale(float NewShakeScale);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSCapsuleComponent
	 * Size -> 0x0210 (FullSize[0x0760] - InheritedSize[0x0550])
	 */
	class UDSCapsuleComponent : public UCapsuleComponent
	{
	public:
		unsigned char                                              UnknownData_J9ES[0x18];                                  // 0x0550(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNamedPriorityConfig*                                CollisionPriorityConfig;                                 // 0x0568(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                InternalCollisionRequestReason;                          // 0x0570(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5D5G[0x1E8];                                 // 0x0578(0x01E8) MISSED OFFSET (PADDING)

	public:
		bool UpdateCollisionRequestToProfile(const struct FGuid& RequestId, const class FName& NewCollisionProfileName);
		bool UpdateCollisionRequestToCustom(const struct FGuid& RequestId, const struct FCapsuleCustomCollisionParams& NewParams);
		void RemoveCollisionRequest(const struct FGuid& RequestId);
		struct FGuid AddCustomCollisionRequest(const class FName& RequestReason, const struct FCapsuleCustomCollisionParams& Params);
		struct FGuid AddCollisionProfileRequest(const class FName& RequestReason, const class FName& CollisionProfileName);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSCharacterMovementManager
	 * Size -> 0x00C0 (FullSize[0x0400] - InheritedSize[0x0340])
	 */
	class ADSCharacterMovementManager : public ACharacterMovementManager
	{
	public:
		float                                                      MassExponentiateFactor;                                  // 0x0340(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumResolveSteps;                                         // 0x0344(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnusedTimerMax;                                          // 0x0348(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapsuleAdditionalSize;                                   // 0x034C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtraRadiusCheckBroadFilterRadius;                       // 0x0350(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P1M4[0xAC];                                  // 0x0354(0x00AC) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSCharacterPushTableElement
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UDSCharacterPushTableElement : public UTable2DElement
	{
	public:
		struct FDSCharacterMovementPushConfig                      DefaultConfig;                                           // 0x0030(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FDSCharacterMovementPairwisePushConfig>      AdditionalConfigs;                                       // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSCharacterPushTableRow
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UDSCharacterPushTableRow : public UTable2DRowColInfo
	{
	public:
		float                                                      CapsuleAdditionalSize;                                   // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_17GL[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDSCharacterMovementFactToState>             FactsToState;                                            // 0x0048(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bValid;                                                  // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4L6C[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSCharacterPushTable
	 * Size -> 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
	 */
	class UDSCharacterPushTable : public UTable2D
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSCharacterSplineFollowCustomMovementState
	 * Size -> 0x0040 (FullSize[0x02D0] - InheritedSize[0x0290])
	 */
	class UDSCharacterSplineFollowCustomMovementState : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_Y7AS[0x40];                                  // 0x0290(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSCheatManager
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UDSCheatManager : public UCheatManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSComponentBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDSComponentBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class USceneComponent* STATIC_CreateSceneComponent(class AActor* Actor, class UClass* ComponentClass, const class FName& InstanceName, bool bVisibleInComponentHierarchy, bool bIsRootComponent, class USceneComponent* ParentComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.InputMapperActionOverrideConfigGroupArray
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UInputMapperActionOverrideConfigGroupArray : public UDataAsset
	{
	public:
		class FString                                              ControlSchemeName;                                       // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UInputMapperActionOverrideConfigGroup*>       ControlSchemes;                                          // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ControllerLayoutControlSchemeMap
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UControllerLayoutControlSchemeMap : public UDataAsset
	{
	public:
		TArray<class UInputMapperActionOverrideConfigGroupArray*>  ControllerLayoutControlSchemes;                          // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsEntry
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UOptionsEntry : public UObject
	{
	public:
		class FString                                              EntryName;                                               // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                EntryDisplayText;                                        // 0x0038(0x0018) Edit, NativeAccessSpecifierPublic
		struct FPlatformSpecificTextPicker                         EntryDisplayTextPlatformOverrides;                       // 0x0050(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<class FString, struct FGameBalanceableVariant>        MetaData;                                                // 0x00A0(0x0050) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FQG[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsEntryAtomic
	 * Size -> 0x0010 (FullSize[0x0108] - InheritedSize[0x00F8])
	 */
	class UOptionsEntryAtomic : public UOptionsEntry
	{
	public:
		class UOptionHandlerProxy*                                 OnChangedValueHandler;                                   // 0x00F8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLiveUpdate;                                             // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOptionStorageType                                         StorageType;                                             // 0x0101(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMultiPlatformDataSelector                          SupportedPlatforms;                                      // 0x0102(0x0006) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSInputOptionsEntryActionOverideConfigGroup
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	class UDSInputOptionsEntryActionOverideConfigGroup : public UOptionsEntryAtomic
	{
	public:
		class UInputMapperActionOverrideConfigGroup*               ConfigGroup;                                             // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStringFiniteOptionsProxy*                           StringFiniteOptionsProxy;                                // 0x0110(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSPhysicsUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDSPhysicsUtils : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TranslateConstraintPosition(class USkeletalMeshComponent* SkeletalMeshComp, const class FName& BoneName, const struct FVector& PositionDelta, const class FName& CoordinateSpaceBone);
		void STATIC_SetAllPhysicsAngularVelocity(class USkeletalMeshComponent* SkeletalMeshComp, const struct FVector& NewAngVel, bool bAddToCurrent);
		void STATIC_PutAllBodiesToSleep(class USkeletalMeshComponent* SkeletalMeshComp);
		struct FVector STATIC_GetVectorSpringVelocity(const struct FVector& CurrentPosition, const struct FVector& CurrentVelocity, float DeltaTime, float SpringConstant, float SpringDamping);
		float STATIC_GetSpringVelocity(float CurrentPosition, float CurrentVelocity, float DeltaTime, float SpringConstant, float SpringDamping);
		struct FVector STATIC_ExpLerpV(const struct FVector& X, const struct FVector& TargetX, float DeltaTime, float Rate, float MaxRate);
		float STATIC_ExpLerp(float X, float TargetX, float DeltaTime, float Rate, float MaxRate);
		void STATIC_DSVectorSpringSetVel(const struct FVector& NewVel, struct FDSVectorSpringState* SpringState);
		void STATIC_DSVectorSpringSetPos(const struct FVector& NewPos, struct FDSVectorSpringState* SpringState);
		void STATIC_DSVectorSpringInterp(const struct FVector& TargetPos, struct FDSVectorSpringState* SpringState, float SpringConstant, float SpringDamping, float DeltaTime);
		void STATIC_DSVectorSpringAddToVel(const struct FVector& AddToVel, struct FDSVectorSpringState* SpringState);
		void STATIC_DSVectorSpringAddToPos(const struct FVector& AddToPos, struct FDSVectorSpringState* SpringState);
		void STATIC_DSFloatSpringSetVel(float NewVel, struct FDSFloatSpringState* SpringState);
		void STATIC_DSFloatSpringSetPos(float NewPos, struct FDSFloatSpringState* SpringState);
		void STATIC_DSFloatSpringInterp(float TargetPos, struct FDSFloatSpringState* SpringState, float SpringConstant, float SpringDamping, float DeltaTime);
		void STATIC_DSFloatSpringAddToVel(float AddToVel, struct FDSFloatSpringState* SpringState);
		void STATIC_DSFloatSpringAddToPos(float AddToPos, struct FDSFloatSpringState* SpringState);
		struct FVector STATIC_DirectionalExpLerpV(const struct FVector& X, const struct FVector& TargetX, float DeltaTime, float Rate, float MaxRate);
		bool STATIC_BoxSphereIntersection(const struct FTransform& BoxTransform, const struct FVector& BoxExtents, const struct FVector& SpherePosition, float SphereRadius);
		int32_t STATIC_BoxPlaneTest(const struct FPlane& Plane, const struct FTransform& BoxTranform, const struct FVector& BoxExtents);
		bool STATIC_BoxPlaneIntersection(const struct FPlane& Plane, const struct FTransform& BoxTranform, const struct FVector& BoxExtents);
		float STATIC_ApproxOneMinusExp(float X);
		float STATIC_ApproxExp(float X);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSSignificanceManager
	 * Size -> 0x0068 (FullSize[0x0188] - InheritedSize[0x0120])
	 */
	class UDSSignificanceManager : public USignificanceManager
	{
	public:
		unsigned char                                              UnknownData_67AZ[0x68];                                  // 0x0120(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSStaticMeshComponent
	 * Size -> 0x0028 (FullSize[0x0610] - InheritedSize[0x05E8])
	 */
	class UDSStaticMeshComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_OBVA[0x8];                                   // 0x05E8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_04IB[0x20];                                  // 0x05F0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSStatsComponent
	 * Size -> 0x00B0 (FullSize[0x0350] - InheritedSize[0x02A0])
	 */
	class UDSStatsComponent : public UStatsComponent
	{
	public:
		unsigned char                                              UnknownData_ZIN2[0xB0];                                  // 0x02A0(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSTableAsset
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UDSTableAsset : public UObject
	{
	public:
		class FString                                              Data;                                                    // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F0TL[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSTextAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UDSTextAsset : public UObject
	{
	public:
		class FString                                              Data;                                                    // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.DSTreeShakeActor
	 * Size -> 0x00D8 (FullSize[0x0420] - InheritedSize[0x0348])
	 */
	class ADSTreeShakeActor : public AScopedKnowledgeBaseExpressionActor
	{
	public:
		float                                                      AmplitudeA;                                              // 0x0348(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedA;                                                  // 0x034C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmplitudeB;                                              // 0x0350(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedB;                                                  // 0x0354(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverallAmplitude;                                        // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69YM[0x4];                                   // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            AmplitudeExpr;                                           // 0x0360(0x0038) Edit, BlueprintVisible, Interp, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RampUpTime;                                              // 0x0398(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WWZ[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         SawToothCurve;                                           // 0x03A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetTimersOnDisable;                                   // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_12Q4[0x3];                                   // 0x03A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxMagnitude;                                            // 0x03AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     SceneRoot;                                               // 0x03B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWindDirectionalSourceComponent*                     WindComponent;                                           // 0x03B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K5T6[0x58];                                  // 0x03C0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKnowledgeBaseExpressionCache*                       KBCache;                                                 // 0x0418(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ExclusiveUser
	 * Size -> 0x0190 (FullSize[0x01B8] - InheritedSize[0x0028])
	 */
	class UExclusiveUser : public UObject
	{
	public:
		unsigned char                                              UnknownData_H3Y2[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnExclusiveUserAcquiredDelegates;                        // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExclusiveUserRemovedSignature;                         // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExclusiveUserLoggedOutDelegates;                       // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExclusiveUserControllerConnectionChangeDelegates;      // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UKnowledgeBaseExpressionCache*                       ExpressionCache;                                         // 0x0080(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_94JH[0x130];                                 // 0x0088(0x0130) MISSED OFFSET (PADDING)

	public:
		bool HasExclusiveUser();
		void ClearExclusiveUser();
		bool AcquireExclusiveUser(int32_t ControllerIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.FadeableAttachmentInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFadeableAttachmentInterface : public UInterface
	{
	public:
		void SetFadeValue(float FadeValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.FeatureAvailabilityManager
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UFeatureAvailabilityManager : public UObject
	{
	public:
		TMap<class FName, class URequirementsContainer*>           UnavailableFeatureReasons;                               // 0x0028(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		void RemoveUnavailableReasonFor(const class FName& Feature, const class FName& Reason);
		bool IsFeatureAvailable(const class FName& Feature);
		void AddUnavailableReasonFor(const class FName& Feature, const class FName& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.FilterActorDemoFilterList
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UFilterActorDemoFilterList : public UDemoFilterList
	{
	public:
		TArray<struct FSoftClassPath>                              ActorsToFilter;                                          // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.BoolFiniteOptionsProxy
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UBoolFiniteOptionsProxy : public UFiniteOptionsProxy
	{
	public:
		TArray<struct FFiniteOptionBool>                           Options;                                                 // 0x0028(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.IntFiniteOptionsProxy
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UIntFiniteOptionsProxy : public UFiniteOptionsProxy
	{
	public:
		TArray<struct FFiniteOptionInt>                            Options;                                                 // 0x0028(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.FloatFiniteOptionsProxy
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UFloatFiniteOptionsProxy : public UFiniteOptionsProxy
	{
	public:
		TArray<struct FFiniteOptionFloat>                          Options;                                                 // 0x0028(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.LanguagesFiniteOptionsProxy
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class ULanguagesFiniteOptionsProxy : public UStringFiniteOptionsProxy
	{
	public:
		TMap<class FString, class FText>                           CultureDisplayNameOverrides;                             // 0x0038(0x0050) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.GameAchievementsPersistentState
	 * Size -> 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
	 */
	class UGameAchievementsPersistentState : public UPersistentDataCollectionBase
	{
	public:
		unsigned char                                              UnknownData_P5XP[0x60];                                  // 0x0048(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.GFxMultiKeyIcon
	 * Size -> 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
	 */
	class UGFxMultiKeyIcon : public UGFxMovieClip
	{
	public:
		unsigned char                                              UnknownData_I3RK[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGFxMovieClip*                                       LayoutClip;                                              // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxMovieClip*                                       MultiKeySymbolClip;                                      // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxKeyIcon*                                         Key1Clip;                                                // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxKeyIcon*                                         Key2Clip;                                                // 0x00A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N7RL[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (PADDING)

	public:
		bool SetKeys(const struct FKey& Key1, const struct FKey& Key2);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.GFxActionIcon
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UGFxActionIcon : public UGFxMultiKeyIcon
	{
	public:
		int32_t                                                    ActionIconFlags;                                         // 0x00B8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4IT3[0x14];                                  // 0x00BC(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMapperAction*                                  InputMapperAction;                                       // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AXB4[0x18];                                  // 0x00D8(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetAction(class UInputMapperAction* Action, bool bCanSendChangedEvent);
		void OnHoldProgress(EInputActionHoldEventType Type, float ProgressPct);
		void OnActionOverrideConfigChanged(class UInputMapperActionOverrideConfig* Config);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.GFxArray
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UGFxArray : public UDSGFxObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.GFxCompareIcon
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UGFxCompareIcon : public UGFxMovieClip
	{
	public:
		void ShowInt(int32_t ShowValue, int32_t BaseValue);
		void ShowFloat(float ShowValue, float BaseValue);
		void Hide();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.GFxDeltaProgressBar
	 * Size -> 0x0038 (FullSize[0x00C0] - InheritedSize[0x0088])
	 */
	class UGFxDeltaProgressBar : public UGFxMovieClip
	{
	public:
		class UGFxProgressBar*                                     DeltaBarClip;                                            // 0x0088(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxMovieClip*                                       DeltaColourClip;                                         // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxProgressBar*                                     MainBarClip;                                             // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxMovieClip*                                       MainBarStateClip;                                        // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UCT6[0x18];                                  // 0x00A8(0x0018) MISSED OFFSET (PADDING)

	public:
		void Tick(float DeltaTime);
		void ShortcutAnimation();
		void SetUseAnimation(bool bInUseAnimation);
		void SetShowProgressValues(float BaseValue, float CompareValue);
		void SetShowProgressValue(float NewValue);
		void SetPlayProgressValue(float NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.GFxImageStreamer
	 * Size -> 0x0060 (FullSize[0x00E8] - InheritedSize[0x0088])
	 */
	class UGFxImageStreamer : public UGFxMovieClip
	{
	public:
		unsigned char                                              UnknownData_FJXS[0x18];                                  // 0x0088(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGFxMovieClip*                                       ImageClip;                                               // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxMovieClip*                                       ImageContainer;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8HQ7[0x38];                                  // 0x00B0(0x0038) MISSED OFFSET (PADDING)

	public:
		void UnloadImage();
		void StreamImage(const struct FSoftObjectPath& ImagePath);
		void SetImage(class UTexture2D* Image);
		bool IsShowingImage();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.GFxKeyIcon
	 * Size -> 0x0088 (FullSize[0x0110] - InheritedSize[0x0088])
	 */
	class UGFxKeyIcon : public UGFxMovieClip
	{
	public:
		class UGFxMovieClip*                                       PlatformClip;                                            // 0x0088(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGFxMovieClip*                                       KeySwitcherClip;                                         // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4HYI[0x78];                                  // 0x0098(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.GFxProgressBar
	 * Size -> 0x0018 (FullSize[0x00A0] - InheritedSize[0x0088])
	 */
	class UGFxProgressBar : public UGFxMovieClip
	{
	public:
		float                                                      ProgressValue;                                           // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4DBL[0xC];                                   // 0x008C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGFxMovieClip*                                       Bar;                                                     // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool SetProgressValue(float NewValue, bool bForce);
		bool IsEmpty();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.GFxTextfield
	 * Size -> 0x0040 (FullSize[0x00C8] - InheritedSize[0x0088])
	 */
	class UGFxTextfield : public UGFxDisplayObject
	{
	public:
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		int32_t                                                    TextfieldFlags;                                          // 0x0098(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J837[0x2C];                                  // 0x009C(0x002C) MISSED OFFSET (PADDING)

	public:
		void SetTextColor(const struct FLinearColor& Color);
		void SetText(const class FText& Text);
		bool GetTextWidth(float* OutWidth);
		bool GetTextHTML(class FString* OutText);
		bool GetTextHeight(float* OutHeight);
		bool GetText(class FString* OutText);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.GFxUIAligner
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UGFxUIAligner : public UGFxMovieClip
	{
	public:
		void RefreshPositions(bool bUpdatePositionsImmediately);
		void RefreshElements(bool bUpdatePositionsImmediately);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.GlobalFactsFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGlobalFactsFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsLocalGameWorldObscured(class AActor* ContextActor);
		bool STATIC_IsGameWorldObscured(class AActor* ContextActor);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionHandlerProxy_GraphicsMode
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UOptionHandlerProxy_GraphicsMode : public UOptionHandlerProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.GroupPresetsFiniteOptionsProxy
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UGroupPresetsFiniteOptionsProxy : public UStringFiniteOptionsProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.Hideable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHideable : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.IncrementalDespawnable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIncrementalDespawnable : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.InventoryCategory
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UInventoryCategory : public UDataAsset
	{
	public:
		class FName                                                Name;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Size;                                                    // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BS7N[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.PossessionListenerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPossessionListenerInterface : public UInterface
	{
	public:
		void OnUnPossess(class APawn* Pawn, bool* bDummyOutput);
		void OnPreUnPossess(class APawn* Pawn, bool* bDummyOutput);
		void OnPossess(class APawn* Pawn, bool* bDummyOutput);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ItemAssignmentShortcutGroupConfig
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	class UItemAssignmentShortcutGroupConfig : public UDataAsset
	{
	public:
		class FName                                                ShortcutGroupName;                                       // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FName                                                TargetPaperDollSlotName;                                 // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumItemsHeldByGroup;                                  // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumWheelVisible;                                         // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowEmptyPlaceOnWheel;                                  // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LC5X[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInventoryCategory*                                  RestrictedToItemArchetypeCategory;                       // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UItemArchetype*                                      FixedLastItemArchetype;                                  // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ProhibitAutoAssignOn;                                    // 0x0078(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       bAutoAssignFirstShortcutItemToTargetSlot;                // 0x0088(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoAssignNewItemToTargetSlotIfSelectedRemoved;         // 0x0089(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNullItemIsValidSelection;                               // 0x008A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnequippableSelectionAllowed;                           // 0x008B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectNextItemIfCurrentUnequippable;                    // 0x008C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectFixedLastItemInsteadOfBrokenItem;                 // 0x008D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttemptToPlaceInSelectedSlotIfEmpty;                    // 0x008E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreferNonDefaultItemsOnCycle;                           // 0x008F(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSameArchetypeIsDuplicate;                               // 0x0090(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZ2B[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInputMapperAction*>                          SelectIndexInputBindings;                                // 0x0098(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UInputMapperAction*                                  SelectNextItemInputBinding;                              // 0x00A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInputMapperAction*                                  SelectPreviousItemInputBinding;                          // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ItemAssignmentShortcutGroupInstance
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UItemAssignmentShortcutGroupInstance : public UObject
	{
	public:
		unsigned char                                              UnknownData_BQKR[0x80];                                  // 0x0028(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItemAssignmentShortcutGroupConfig*                  Config;                                                  // 0x00A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W3QK[0x40];                                  // 0x00B0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URequirementsContainer*                              DisableAutoEquipReasons;                                 // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class URequirementsContainer*                              DisableAutoEquipNextReasons;                             // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEquippableComponent*                                LastSelectedItem;                                        // 0x0100(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool SwapItemShortcut(class AItemActor* Item1, int32_t Index1, class AItemActor* Item2, int32_t Index2);
		void SetSelectedItem(int32_t ShortcutIndexIn);
		void ServerAssignShortcutGroup(class UEquippableComponent* ShortcutItem, int32_t ShortcutIndex);
		void SelectPreviousItem();
		void SelectNextItem();
		bool RemoveItemShortcut(class UEquippableComponent* ItemToRemove);
		class UEquippableComponent* GetSelectedItemEvenIfBroken();
		class UEquippableComponent* GetLastSelectedItem();
		class AItemActor* GetItemAtShortcutIndex(int32_t Index);
		int32_t GetIndexForShortcutItem(class AItemActor* QueryItem);
		class UEquippableComponent* GetEquippableAtShortcutIndex(int32_t Index);
		void ClientInitialize(TArray<struct FGuid> InClientShortcutIds, int32_t InSelectedShortcut);
		bool CanEquip(class UEquippableComponent* Equippable);
		bool AssignItemShortcut(class UEquippableComponent* Item, int32_t Index);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ItemFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UItemFactory : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ItemFactoryDefault
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UItemFactoryDefault : public UObject
	{
	public:
		unsigned char                                              UnknownData_YC25[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ItemFactoryManager
	 * Size -> 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
	 */
	class AItemFactoryManager : public AInfo
	{
	public:
		unsigned char                                              ItemFactories[0x10];                                     // 0x02B0(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		void FindOrCreateFactory(class UItemArchetype* ItemArchetype);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ItemFactoryNonInstanced
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UItemFactoryNonInstanced : public UObject
	{
	public:
		unsigned char                                              UnknownData_39OQ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UObject*, struct FNonInstancedActors>           ActorsMap;                                               // 0x0030(0x0050) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ItemHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UItemHelpers : public UBlueprintFunctionLibrary
	{
	public:
		class AItemActor* STATIC_CreateItem(class UObject* Outer, class UItemArchetype* ItemArchetype, class UItemInstanceData* InstanceData);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ItemStatDisplayInfo
	 * Size -> 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
	 */
	class UItemStatDisplayInfo : public UDataAsset
	{
	public:
		TArray<struct FItemStatContributorData>                    StatContributors;                                        // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TMap<class FName, struct FItemStatDisplayRules>            DisplayInfo;                                             // 0x0040(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		TMap<class FName, struct FItemStatGroupList>               OrderedStatGroups;                                       // 0x0090(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		TArray<class FName> GetStatGroup(const class FName& StatGroupIdentifier);
		TArray<struct FItemStatContributorData> GetStatContibutors();
		struct FItemStatContributorData GetStatContibutorInfo(const class FName& ContributorIdentifier);
		struct FItemStatDisplayRules GetDisplayInfo(const class FName& StatType);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ItemRarityDatas
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UItemRarityDatas : public UDataAsset
	{
	public:
		TMap<EItemRarity, struct FItemRarityData>                  Rarities;                                                // 0x0030(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.LookAtTargetCameraModifier
	 * Size -> 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
	 */
	class ULookAtTargetCameraModifier : public UCameraModifier
	{
	public:
		ELookAtRotateMode                                          Mode;                                                    // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LockOnEnabled;                                           // 0x0049(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDKJ[0x36];                                  // 0x004A(0x0036) MISSED OFFSET (PADDING)

	public:
		void SetTargetPosition(const struct FVector& Target);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.MissionCompletionChallengeDataAsset
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UMissionCompletionChallengeDataAsset : public UBaseChallengeDataAsset
	{
	public:
		TArray<class UMissionData*>                                Quests;                                                  // 0x00E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.MissionCompletionChallengeRuntimeObject
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UMissionCompletionChallengeRuntimeObject : public UBaseChallengeRuntimeObject
	{
	public:
		unsigned char                                              UnknownData_D8BW[0x30];                                  // 0x00B0(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnMissionStateChanged(class UMissionInstance* MissionInstance, EMissionState NewState, EMissionState LeavingState);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ModularAttachment
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UModularAttachment : public UAttachment
	{
	public:
		TArray<class UAttachmentModule*>                           Modules;                                                 // 0x0090(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.MontageActionParams
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UMontageActionParams : public UCustomActionParamsBase
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartTime;                                               // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StartingSection;                                         // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCountInterruptAsSuccess;                                // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideBlendOutTime;                                   // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BP2H[0x2];                                   // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendOutTime;                                            // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.MontageAction
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class UMontageAction : public UCharacterAction
	{
	public:
		unsigned char                                              UnknownData_6ON1[0x18];                                  // 0x00A8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.MoveTargetParamsConfig
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UMoveTargetParamsConfig : public UDataAsset
	{
	public:
		TMap<class FName, struct FMoveTargetParams>                Params;                                                  // 0x0030(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsEntryGroup
	 * Size -> 0x0010 (FullSize[0x0108] - InheritedSize[0x00F8])
	 */
	class UOptionsEntryGroup : public UOptionsEntry
	{
	public:
		TArray<class UOptionsEntry*>                               Entries;                                                 // 0x00F8(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsEntryInteger
	 * Size -> 0x0028 (FullSize[0x0130] - InheritedSize[0x0108])
	 */
	class UOptionsEntryInteger : public UOptionsEntryAtomic
	{
	public:
		struct FGameBalanceableInt                                 IntegerValue;                                            // 0x0108(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UIntFiniteOptionsProxy*                              IntFiniteOptionsProxy;                                   // 0x0128(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsEntryFloat
	 * Size -> 0x0028 (FullSize[0x0130] - InheritedSize[0x0108])
	 */
	class UOptionsEntryFloat : public UOptionsEntryAtomic
	{
	public:
		struct FGameBalanceableFloat                               FloatValue;                                              // 0x0108(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UFloatFiniteOptionsProxy*                            FloatFiniteOptionsProxy;                                 // 0x0128(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsEntryBool
	 * Size -> 0x0028 (FullSize[0x0130] - InheritedSize[0x0108])
	 */
	class UOptionsEntryBool : public UOptionsEntryAtomic
	{
	public:
		class UBoolFiniteOptionsProxy*                             BoolFiniteOptionsProxy;                                  // 0x0108(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameBalanceableBool                                BooleanValue;                                            // 0x0110(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsEntryMenuBool
	 * Size -> 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
	 */
	class UOptionsEntryMenuBool : public UOptionsEntryBool
	{
	public:
		class UPresentationProxy*                                  PresentationProxy;                                       // 0x0130(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsEntryString
	 * Size -> 0x0030 (FullSize[0x0138] - InheritedSize[0x0108])
	 */
	class UOptionsEntryString : public UOptionsEntryAtomic
	{
	public:
		struct FGameBalanceableString                              StringValue;                                             // 0x0108(0x0028) Edit, NativeAccessSpecifierPublic
		class UStringFiniteOptionsProxy*                           StringFiniteOptionsProxy;                                // 0x0130(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsEntryEnum
	 * Size -> 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
	 */
	class UOptionsEntryEnum : public UOptionsEntryAtomic
	{
	public:
		class UStringFiniteOptionsProxy*                           EnumFiniteOptionsProxy;                                  // 0x0108(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EnumType;                                                // 0x0110(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameBalanceableString                              EnumValue;                                               // 0x0120(0x0028) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsEntryMenuString
	 * Size -> 0x0008 (FullSize[0x0140] - InheritedSize[0x0138])
	 */
	class UOptionsEntryMenuString : public UOptionsEntryString
	{
	public:
		class UPresentationProxy*                                  PresentationProxy;                                       // 0x0138(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsEntryMenuInteger
	 * Size -> 0x0018 (FullSize[0x0148] - InheritedSize[0x0130])
	 */
	class UOptionsEntryMenuInteger : public UOptionsEntryInteger
	{
	public:
		int32_t                                                    IntegerMinValue;                                         // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    IntegerMaxValue;                                         // 0x0134(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EDisplayType                                               DisplayType;                                             // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LHS1[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPresentationProxy*                                  PresentationProxy;                                       // 0x0140(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsEntryMenuFloat
	 * Size -> 0x0018 (FullSize[0x0148] - InheritedSize[0x0130])
	 */
	class UOptionsEntryMenuFloat : public UOptionsEntryFloat
	{
	public:
		float                                                      FloatMinValue;                                           // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FloatMaxValue;                                           // 0x0134(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EDisplayType                                               DisplayType;                                             // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3AIL[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPresentationProxy*                                  PresentationProxy;                                       // 0x0140(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsEntryMenuEnum
	 * Size -> 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
	 */
	class UOptionsEntryMenuEnum : public UOptionsEntryEnum
	{
	public:
		class UPresentationProxy*                                  PresentationProxy;                                       // 0x0148(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsEntryPresetGroup
	 * Size -> 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
	 */
	class UOptionsEntryPresetGroup : public UOptionsEntryMenuString
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsCollectionData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UOptionsCollectionData : public UDataAsset
	{
	public:
		class UOptionsEntryGroup*                                  RootEntry;                                               // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionHandlerProxy_GroupPresets
	 * Size -> 0x00A0 (FullSize[0x0100] - InheritedSize[0x0060])
	 */
	class UOptionHandlerProxy_GroupPresets : public UOptionHandlerProxy
	{
	public:
		class FString                                              CustomStateLabel;                                        // 0x0060(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                CustomStateDisplayText;                                  // 0x0070(0x0018) Edit, NativeAccessSpecifierPrivate
		TArray<struct FPresetOptionsGroup>                         PresetGroups;                                            // 0x0088(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0FMB[0x68];                                  // 0x0098(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsEntryInstance
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOptionsEntryInstance : public UObject
	{
	public:
		class UOptionsEntry*                                       ReadOnlyEntry;                                           // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45QK[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.Option
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UOption : public UOptionsEntryInstance
	{
	public:
		unsigned char                                              UnknownData_4B20[0x38];                                  // 0x0038(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsGroup
	 * Size -> 0x00C0 (FullSize[0x00F8] - InheritedSize[0x0038])
	 */
	class UOptionsGroup : public UOptionsEntryInstance
	{
	public:
		TMap<class FString, class UOptionsEntry*>                  AtomicOptionsDefinitions;                                // 0x0038(0x0050) NativeAccessSpecifierPrivate
		TMap<class FString, class UOptionsEntryInstance*>          Entries;                                                 // 0x0088(0x0050) NativeAccessSpecifierPrivate
		TArray<class UOptionsEntryInstance*>                       OrderedEntries;                                          // 0x00D8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LVSX[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsHierarchyPersistentState
	 * Size -> 0x0050 (FullSize[0x0098] - InheritedSize[0x0048])
	 */
	class UOptionsHierarchyPersistentState : public UPersistentDataCollectionBase
	{
	public:
		unsigned char                                              UnknownData_S6XU[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionsManager
	 * Size -> 0x0298 (FullSize[0x02C0] - InheritedSize[0x0028])
	 */
	class UOptionsManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_8DKD[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGuid, class UOptionsGroup*>                   HierarchyRoots;                                          // 0x0030(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XKD1[0x190];                                 // 0x0080(0x0190) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EOptionStorageType, class UOptionStorageBase*>        OptionStorageHandlers;                                   // 0x0210(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DCO5[0x60];                                  // 0x0260(0x0060) MISSED OFFSET (PADDING)

	public:
		class UPresentationProxy* GetPresentationProxy(const struct FGuid& InHierarchyGuid, const class FString& InOptionPath);
		bool GetOptionStringValue(const struct FGuid& InHierarchyGuid, const class FString& InOptionPath, class FString* OutOptionValue);
		bool GetOptionIntValue(const struct FGuid& InHierarchyGuid, const class FString& InOptionPath, int32_t* OutOptionValue);
		bool GetOptionFloatValue(const struct FGuid& InHierarchyGuid, const class FString& InOptionPath, float* OutOptionValue);
		bool GetOptionBoolValue(const struct FGuid& InHierarchyGuid, const class FString& InOptionPath, bool* OutOptionValue);
		struct FGuid GetGuidForOptionsHierarchy(const class FString& InOptionsHierarchyPath);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionStorageBase
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOptionStorageBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_0J7X[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionStorageFile
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UOptionStorageFile : public UOptionStorageBase
	{
	public:
		unsigned char                                              UnknownData_S5QR[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionStorageFileGameUserSettings
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UOptionStorageFileGameUserSettings : public UOptionStorageFile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.OptionStoragePersistentData
	 * Size -> 0x0070 (FullSize[0x00A8] - InheritedSize[0x0038])
	 */
	class UOptionStoragePersistentData : public UOptionStorageBase
	{
	public:
		TMap<struct FGuid, class UOptionsHierarchyPersistentState*> PersistentHierarchies;                                   // 0x0038(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_17RB[0x20];                                  // 0x0088(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnSetUserProfilePath(const class FString& InUserProfilePath);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.PaperDollSlot
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UPaperDollSlot : public UObject
	{
	public:
		class FName                                                Name;                                                    // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAssignedItemUpdated;                                   // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UEquippableComponent>                 PendingItem;                                             // 0x0040(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UEquippableComponent>                 AssignedItem;                                            // 0x0048(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UEquippableComponent>                 AuthorityAssignedItem;                                   // 0x0050(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Owner;                                                   // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8FMD[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		void ServerAssignItem(class UEquippableComponent* Item);
		void OnRep_AuthorityAssignedItem();
		void OnItemReadyForRemoval(class UEquippableComponent* EquippableItem);
		class AActor* GetUser();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.PaperDollSlotGroup
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UPaperDollSlotGroup : public UObject
	{
	public:
		TArray<class UPaperDollSlot*>                              Slots;                                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPaperDollComponent*                                 OwningPaperDollComponent;                                // 0x0040(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJQL[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		void K2_SelectedItemChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.PaperDollState
	 * Size -> 0x0030 (FullSize[0x02E0] - InheritedSize[0x02B0])
	 */
	class APaperDollState : public AInfo
	{
	public:
		class UPaperDollSetup*                                     SlotsConfigAsset;                                        // 0x02B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPaperDollComponent*                                 PreviousUser;                                            // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPaperDollSlotGroup*>                         SlotGroups;                                              // 0x02C0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UPaperDollComponent>                  User;                                                    // 0x02D0(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4M6E[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_PaperDollUser();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.PaperDollSetup
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UPaperDollSetup : public UDataAsset
	{
	public:
		TArray<struct FSlotGroupSetupData>                         GroupsSetup;                                             // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.PauseManager
	 * Size -> 0x00B0 (FullSize[0x0360] - InheritedSize[0x02B0])
	 */
	class APauseManager : public AInfo
	{
	public:
		TMap<class FName, struct FInternalPauserImplementation>    PauserImplementations;                                   // 0x02B0(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_19UV[0x60];                                  // 0x0300(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.PhysicsAssetCacheEntry
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UPhysicsAssetCacheEntry : public UObject
	{
	public:
		class UPhysicsAsset*                                       PhysicsAsset;                                            // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicsAsset*                                       RootPhysicsAsset;                                        // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PNZU[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.PhysicsAssetCache
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UPhysicsAssetCache : public UObject
	{
	public:
		TMap<uint32_t, class UPhysicsAssetCacheEntry*>             Cache;                                                   // 0x0028(0x0050) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.PhysicsAssetManager
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class APhysicsAssetManager : public AInfo
	{
	public:
		class UPhysicsAssetCache*                                  Cache;                                                   // 0x02B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.PhysicsAssetManagerConfig
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPhysicsAssetManagerConfig : public UObject
	{
	public:
		TArray<class FName>                                        BonesToRemoveFromLimbs;                                  // 0x0028(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.PlayerUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayerUtils : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_BlueprintIsLocallyControlledPlayerFromPawn(class APawn* Pawn);
		bool STATIC_BlueprintIsLocallyControlledPlayerFromController(class AController* Controller);
		bool STATIC_BlueprintIsLocallyControlledPlayerFromActor(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.PushTypePriorityConfig
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UPushTypePriorityConfig : public UDataAsset
	{
	public:
		TMap<class FName, int32_t>                                 Priorities;                                              // 0x0030(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.ReplicatedGeneralAttachment
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UReplicatedGeneralAttachment : public UAttachment
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.RequestCharacterActionCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class URequestCharacterActionCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnResolved;                                              // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancelled;                                             // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBegin;                                                 // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnd;                                                   // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCustomSignal;                                          // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRequestFailed;                                         // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UCharacterActionRequestHelper*                       Request;                                                 // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnResolvedAction(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& ResolvedParams);
		void OnEndAction(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& EndParams);
		void OnCustomSignalReceived(const struct FGuid& RequestId, const struct FCharacterActionOnCustomSignalParams& CustomSignalParams);
		void OnCancelledAction(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& CancelledParams);
		void OnBeginAction(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& BeginParams);
		bool IsRequestValid();
		void EndAction(ECharacterActionEndReason Reason, float DelayTime, bool bWaitForActionEnd);
		class URequestCharacterActionCallbackProxy* STATIC_CreateProxyObjectForRequestCharacterAction(class UCharacterActionComponent* InCharacterActionComponent, const struct FCharacterActionRequestParams& RequestParams, ECharacterActionHelperReferenceType InReferenceType, struct FGuid* OutRequestId);
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class URequestCharacterActionOnMultipleActorsCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnNoActionsStarted;                                      // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAllActionsStarted;                                     // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActionsFailed;                                         // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TMap<class UCharacterActionRequestHelper*, struct FGuid>   Requests;                                                // 0x0058(0x0050) Transient, NativeAccessSpecifierPrivate
		TArray<struct FGuid>                                       PendingActions;                                          // 0x00A8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void OnResolvedAction(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& ResolvedParams);
		void OnEndAction(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& EndParams);
		void OnCancelledAction(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& CancelledParams);
		void OnBeginAction(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& BeginParams);
		void EndAllActions(ECharacterActionEndReason Reason);
		class URequestCharacterActionOnMultipleActorsCallbackProxy* STATIC_CreateProxyObjectForRequestCharacterAction(TArray<class AActor*> Actors, const struct FCharacterActionRequestParams& RequestParams, ECharacterActionHelperReferenceType InReferenceType);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.SceneContextComponent
	 * Size -> 0x0020 (FullSize[0x0570] - InheritedSize[0x0550])
	 */
	class USceneContextComponent : public USphereComponent
	{
	public:
		bool                                                       bEnabled;                                                // 0x0550(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseForwardVector;                                       // 0x0551(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q5AH[0x2];                                   // 0x0552(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ForwardAngleLimit;                                       // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        Tags;                                                    // 0x0558(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_28K2[0x8];                                   // 0x0568(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.SetKBFactAttachmentModule
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class USetKBFactAttachmentModule : public UAttachmentModule
	{
	public:
		TArray<struct FKnowledgeBaseValueSelector>                 AttachFacts;                                             // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FKnowledgeBaseValueSelector>                 DetachFacts;                                             // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.SlomoManager
	 * Size -> 0x00A8 (FullSize[0x0358] - InheritedSize[0x02B0])
	 */
	class ASlomoManager : public AInfo
	{
	public:
		struct FGroupingConfig                                     GlobalSettings;                                          // 0x02B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		TMap<class FName, struct FGroupingConfig>                  GroupSettings;                                           // 0x02B8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x0308(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B5NB[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticEffectsDefinition*                          SlomoEffect;                                             // 0x0310(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7LMG[0x8];                                   // 0x0318(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URequirementsContainer*                              GlobalBlockReasons;                                      // 0x0320(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4OPO[0x30];                                  // 0x0328(0x0030) MISSED OFFSET (PADDING)

	public:
		void RemoveBlockReason(const class FName& BlockReason);
		float GetTimeDilation();
		class ASlomoManager* STATIC_GetSlomoManager(class UObject* WorldContextObject);
		void EndSlomoRequest(const struct FSlomoHandle& Handle, bool bBlendOut);
		bool DoesGroupExist(const class FName& Group);
		bool AnySlomoActive();
		struct FSlomoHandle AddStateSlomoRequest(const struct FStateSlomoRequest& Request);
		struct FSlomoHandle AddSlomoRequest(const struct FSlomoRequest& Request);
		void AddBlockReason(const class FName& BlockReason);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.SpatialTickComponent
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	class USpatialTickComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnSpatialCellActivated;                                  // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSpatialCellDeactivated;                                // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bDisablesOwnerTick;                                      // 0x0108(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W3W7[0xF];                                   // 0x0109(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.SpatialTickManager
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class ASpatialTickManager : public AInfo
	{
	public:
		unsigned char                                              UnknownData_X338[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.StatChallengeDataAsset
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	class UStatChallengeDataAsset : public UBaseChallengeDataAsset
	{
	public:
		class FString                                              StatName;                                                // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Contexts;                                                // 0x00F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.StatChallengeRuntimeObject
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	class UStatChallengeRuntimeObject : public UBaseChallengeRuntimeObject
	{
	public:
		unsigned char                                              UnknownData_730V[0x20];                                  // 0x00B0(0x0020) MISSED OFFSET (PADDING)

	public:
		void IncrementCallback(int32_t Value, int32_t Delta, class FString* StatAndContexts, EStatBindType BindType);
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.AreaDiscoveryType
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAreaDiscoveryType : public USpatialDiscoveryType
	{
	public:
		class AActor*                                              LinkedActor;                                             // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UAreaShapeComponent>                  AreaShapeComponent;                                      // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.UIKeyNamesData
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class UUIKeyNamesData : public UDataAsset
	{
	public:
		TMap<struct FKey, class FText>                             KeyLongDisplayNames;                                     // 0x0030(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<struct FKey, class FText>                             KeyShortDisplayNames;                                    // 0x0080(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSFramework.VisibilityBasedAnimTickOptionPriorityConfig
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UVisibilityBasedAnimTickOptionPriorityConfig : public UDataAsset
	{
	public:
		TMap<class FName, int32_t>                                 Priorities;                                              // 0x0030(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
