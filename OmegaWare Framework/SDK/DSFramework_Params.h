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
	 * Function DSFramework.CharacterAction.SyncReplicatedState
	 */
	struct UCharacterAction_SyncReplicatedState_Params
	{	};

	/**
	 * Function DSFramework.CharacterAction.SetWantsTickBP
	 */
	struct UCharacterAction_SetWantsTickBP_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.ResolveQueueTime
	 */
	struct UCharacterAction_ResolveQueueTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.Resolve
	 */
	struct UCharacterAction_Resolve_Params
	{
	public:
		struct FCharacterActionResolveParams                       Params;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		ECharacterActionResolution                                 OutResolution;                                           // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G9Y3[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutQueuedTimeout;                                        // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.OnTick
	 */
	struct UCharacterAction_OnTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.OnResolved
	 */
	struct UCharacterAction_OnResolved_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterActionOnResolvedParams                    Params;                                                  // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.OnReplicatedStateUpdated
	 */
	struct UCharacterAction_OnReplicatedStateUpdated_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCustomActionParamsBase*                             ReplicatedState;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.OnEnd
	 */
	struct UCharacterAction_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.OnConstruct
	 */
	struct UCharacterAction_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.OnBeginEarly
	 */
	struct UCharacterAction_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.OnBegin
	 */
	struct UCharacterAction_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.IsActive
	 */
	struct UCharacterAction_IsActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.HasActionAuthority
	 */
	struct UCharacterAction_HasActionAuthority_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.GetOwner
	 */
	struct UCharacterAction_GetOwner_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.GetNetworkRunningTime
	 */
	struct UCharacterAction_GetNetworkRunningTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.GetElapsedTime
	 */
	struct UCharacterAction_GetElapsedTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.GatherPrerequisites
	 */
	struct UCharacterAction_GatherPrerequisites_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.EndRequestedBy
	 */
	struct UCharacterAction_EndRequestedBy_Params
	{
	public:
		struct FGuid                                               QueuedActionId;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.EndAction
	 */
	struct UCharacterAction_EndAction_Params
	{
	public:
		ECharacterActionEndReason                                  Reason;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XN1H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DelayTime;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterAction.CustomSignal
	 */
	struct UCharacterAction_CustomSignal_Params
	{
	public:
		class FName                                                SignalName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSAIMovementComponent.RemoveMoveTargetEventDelegate
	 */
	struct UDSAIMovementComponent_RemoveMoveTargetEventDelegate_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSAIMovementComponent.RemoveMoveTarget
	 */
	struct UDSAIMovementComponent_RemoveMoveTarget_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Delay;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSAIMovementComponent.OnMovementCompletedFromController
	 */
	struct UDSAIMovementComponent_OnMovementCompletedFromController_Params
	{
	public:
		struct FAIRequestID                                        RequestId;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPathFollowingResult                                       Result;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSAIMovementComponent.GetMoveTargetParams
	 */
	struct UDSAIMovementComponent_GetMoveTargetParams_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMoveTargetParams                                   ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSAIMovementComponent.GetDistanceToCurrentMoveTarget
	 */
	struct UDSAIMovementComponent_GetDistanceToCurrentMoveTarget_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSAIMovementComponent.GetCurrentMoveTargetLocation
	 */
	struct UDSAIMovementComponent_GetCurrentMoveTargetLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSAIMovementComponent.AddMoveTargetEventDelegate
	 */
	struct UDSAIMovementComponent_AddMoveTargetEventDelegate_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSAIMovementComponent.AddMoveTarget
	 */
	struct UDSAIMovementComponent_AddMoveTarget_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMoveTarget                                         MoveTarget;                                              // 0x0008(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bUseDefaultParams;                                       // 0x0078(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemArchetype.RequestAssetsForActor
	 */
	struct UItemArchetype_RequestAssetsForActor_Params
	{
	public:
		class AActor*                                              Requestor;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHighPriority;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NBTZ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Reason;                                                  // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemArchetype.ReleaseAssetsForActor
	 */
	struct UItemArchetype_ReleaseAssetsForActor_Params
	{
	public:
		class AActor*                                              Requestor;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Reason;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction DSFramework.ItemArchetype.OnAssetsLoaded__DelegateSignature
	 */
	struct UItemArchetype_OnAssetsLoaded__DelegateSignature_Params
	{	};

	/**
	 * Function DSFramework.ItemArchetype.GetUINameCaps
	 */
	struct UItemArchetype_GetUINameCaps_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.EquippableComponent.OnUnequippableReasonsCleared
	 */
	struct UEquippableComponent_OnUnequippableReasonsCleared_Params
	{	};

	/**
	 * Function DSFramework.EquippableComponent.OnUnequippableReasonsActive
	 */
	struct UEquippableComponent_OnUnequippableReasonsActive_Params
	{	};

	/**
	 * Function DSFramework.EquippableComponent.OnRemovalFromPaperDollSlotCompleted
	 */
	struct UEquippableComponent_OnRemovalFromPaperDollSlotCompleted_Params
	{	};

	/**
	 * Function DSFramework.EquippableComponent.OnIsLocalPlayerFactChanged
	 */
	struct UEquippableComponent_OnIsLocalPlayerFactChanged_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XBMK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UKnowledgeBaseComponent*                             InKnowledgeBaseComponent;                                // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EKnowledgeBaseFactChangeType                               FactChangeType;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.EquippableComponent.IsAssignedToPaperDollSlot
	 */
	struct UEquippableComponent_IsAssignedToPaperDollSlot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.EquippableComponent.GetOwningItem
	 */
	struct UEquippableComponent_GetOwningItem_Params
	{
	public:
		class AItemActor*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.EquippableComponent.GetCurrentUser
	 */
	struct UEquippableComponent_GetCurrentUser_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.EquippableComponent.ClientAddShortcutItem
	 */
	struct UEquippableComponent_ClientAddShortcutItem_Params
	{
	public:
		class UItemAssignmentShortcutGroupInstance*                InShortcutGroup;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InShortcutGroupIndex;                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGameInstance.GetExclusiveUser
	 */
	struct UDSGameInstance_GetExclusiveUser_Params
	{
	public:
		class UExclusiveUser*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.UpdateActorVisualsToReflectItem
	 */
	struct AItemActor_UpdateActorVisualsToReflectItem_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EItemVisualDetail                                          Detail;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.ShouldHideInCounters
	 */
	struct AItemActor_ShouldHideInCounters_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.SetActorVisuals
	 */
	struct AItemActor_SetActorVisuals_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EItemVisualDetail                                          Detail;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.OnVisualActorEndPlay
	 */
	struct AItemActor_OnVisualActorEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.OnVisualActorDestroyed
	 */
	struct AItemActor_OnVisualActorDestroyed_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.OnTickReasonsCleared
	 */
	struct AItemActor_OnTickReasonsCleared_Params
	{	};

	/**
	 * Function DSFramework.ItemActor.OnTickReasonsActivated
	 */
	struct AItemActor_OnTickReasonsActivated_Params
	{	};

	/**
	 * Function DSFramework.ItemActor.OnRep_UIDataChanged
	 */
	struct AItemActor_OnRep_UIDataChanged_Params
	{	};

	/**
	 * Function DSFramework.ItemActor.OnRep_OwnerChanged
	 */
	struct AItemActor_OnRep_OwnerChanged_Params
	{
	public:
		class UInventoryComponent*                                 PrevInventory;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.OnRep_ItemInstanceData
	 */
	struct AItemActor_OnRep_ItemInstanceData_Params
	{	};

	/**
	 * Function DSFramework.ItemActor.OnRep_ItemArchetypePackage
	 */
	struct AItemActor_OnRep_ItemArchetypePackage_Params
	{	};

	/**
	 * Function DSFramework.ItemActor.OnRep_ItemArchetype
	 */
	struct AItemActor_OnRep_ItemArchetype_Params
	{	};

	/**
	 * Function DSFramework.ItemActor.K2_SetActorVisuals
	 */
	struct AItemActor_K2_SetActorVisuals_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EItemVisualDetail                                          Detail;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.K2_OnInitialize
	 */
	struct AItemActor_K2_OnInitialize_Params
	{
	public:
		class UItemArchetype*                                      ArchetypeIn;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItemInstanceData*                                   InstanceDataIn;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.IsSellable
	 */
	struct AItemActor_IsSellable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.IsScrappable
	 */
	struct AItemActor_IsScrappable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.IsReady
	 */
	struct AItemActor_IsReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.IsFreeInShops
	 */
	struct AItemActor_IsFreeInShops_Params
	{
	public:
		class APlayerController*                                   ForPlayer;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.IsDroppable
	 */
	struct AItemActor_IsDroppable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.GetUISubCategory
	 */
	struct AItemActor_GetUISubCategory_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.GetUIStats
	 */
	struct AItemActor_GetUIStats_Params
	{
	public:
		TMap<class FName, struct FItemStat>                        ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.GetUISourceName
	 */
	struct AItemActor_GetUISourceName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.GetUINameCaps
	 */
	struct AItemActor_GetUINameCaps_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.GetUIName
	 */
	struct AItemActor_GetUIName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.GetUIIconTexture
	 */
	struct AItemActor_GetUIIconTexture_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.GetUIIconLabel
	 */
	struct AItemActor_GetUIIconLabel_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.GetUIIconImage
	 */
	struct AItemActor_GetUIIconImage_Params
	{
	public:
		struct FSoftObjectPath                                     ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.GetUIDescription
	 */
	struct AItemActor_GetUIDescription_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.GetMaxCashValueForUpgrades
	 */
	struct AItemActor_GetMaxCashValueForUpgrades_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.GetMaxCashValue
	 */
	struct AItemActor_GetMaxCashValue_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.GetItemUIComponent
	 */
	struct AItemActor_GetItemUIComponent_Params
	{
	public:
		class UItemUIComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.GetInventoryOwner
	 */
	struct AItemActor_GetInventoryOwner_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemActor.GetCurrentCashValue
	 */
	struct AItemActor_GetCurrentCashValue_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.AchievementsManager.GetAchievementsManager
	 */
	struct AAchievementsManager_GetAchievementsManager_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AAchievementsManager*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.UpdateComponentHidden
	 */
	struct ADSCharacter_UpdateComponentHidden_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.SetPerspective
	 */
	struct ADSCharacter_SetPerspective_Params
	{
	public:
		EPerspective                                               NewPerspective;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.SetCharacterLocationWS
	 */
	struct ADSCharacter_SetCharacterLocationWS_Params
	{
	public:
		ECharacterLocationType                                     LocationType;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZRI4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewLocation;                                             // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSweep;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETeleportType                                              Teleport;                                                // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.SetCharacterLocationLS
	 */
	struct ADSCharacter_SetCharacterLocationLS_Params
	{
	public:
		ECharacterLocationType                                     LocationType;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_36CQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewLocation;                                             // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSweep;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETeleportType                                              Teleport;                                                // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.ServerCheatWalk
	 */
	struct ADSCharacter_ServerCheatWalk_Params
	{	};

	/**
	 * Function DSFramework.DSCharacter.ServerCheatGhost
	 */
	struct ADSCharacter_ServerCheatGhost_Params
	{	};

	/**
	 * Function DSFramework.DSCharacter.ServerCheatFly
	 */
	struct ADSCharacter_ServerCheatFly_Params
	{	};

	/**
	 * Function DSFramework.DSCharacter.RemoveHideRequest_BP
	 */
	struct ADSCharacter_RemoveHideRequest_BP_Params
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHideableTransitionType                                    TransitionType;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.OnSpatialCellDeactivated
	 */
	struct ADSCharacter_OnSpatialCellDeactivated_Params
	{
	public:
		class USpatialTickComponent*                               Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.OnSpatialCellActivated
	 */
	struct ADSCharacter_OnSpatialCellActivated_Params
	{
	public:
		class USpatialTickComponent*                               Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.IsInAir
	 */
	struct ADSCharacter_IsInAir_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.IsControlAuthority
	 */
	struct ADSCharacter_IsControlAuthority_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.GetVelocityForLocomotion
	 */
	struct ADSCharacter_GetVelocityForLocomotion_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.GetDSMesh
	 */
	struct ADSCharacter_GetDSMesh_Params
	{
	public:
		class UDSSkeletalMeshComponent*                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.GetDSCharacterMovement
	 */
	struct ADSCharacter_GetDSCharacterMovement_Params
	{
	public:
		class UDSCharacterMovementComponent*                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.GetDSCapsuleComponent
	 */
	struct ADSCharacter_GetDSCapsuleComponent_Params
	{
	public:
		class UDSCapsuleComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.GetCurrentAnimInstance
	 */
	struct ADSCharacter_GetCurrentAnimInstance_Params
	{
	public:
		class UAnimInstance*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.GetCharacterLocationWS
	 */
	struct ADSCharacter_GetCharacterLocationWS_Params
	{
	public:
		ECharacterLocationType                                     LocationType;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JNJM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.GetCharacterLocationLS
	 */
	struct ADSCharacter_GetCharacterLocationLS_Params
	{
	public:
		ECharacterLocationType                                     LocationType;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JUES[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacter.AddHideRequest_BP
	 */
	struct ADSCharacter_AddHideRequest_BP_Params
	{
	public:
		class FName                                                Requester;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHideableTransitionType                                    TransitionType;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SLV9[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuid                                               ReturnValue;                                             // 0x000C(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacterMovementComponent.UpdateMovementModeRequest
	 */
	struct UDSCharacterMovementComponent_UpdateMovementModeRequest_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementMode                                              NewRequestedMovementMode;                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewCustomMovementMode;                                   // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacterMovementComponent.RemovePushTypeRequest
	 */
	struct UDSCharacterMovementComponent_RemovePushTypeRequest_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacterMovementComponent.RemoveMovementModeRequest
	 */
	struct UDSCharacterMovementComponent_RemoveMovementModeRequest_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacterMovementComponent.IsActiveMovementModeRequest
	 */
	struct UDSCharacterMovementComponent_IsActiveMovementModeRequest_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacterMovementComponent.InstantDampenExternalVelocity
	 */
	struct UDSCharacterMovementComponent_InstantDampenExternalVelocity_Params
	{
	public:
		float                                                      DampenToFraction;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EExtraVelocityChannel                                      Channel;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacterMovementComponent.GetLastWalkingFeetLocation
	 */
	struct UDSCharacterMovementComponent_GetLastWalkingFeetLocation_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOkInvalidResult                                           Result;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacterMovementComponent.GetFilteredCollisionSlowDownScale
	 */
	struct UDSCharacterMovementComponent_GetFilteredCollisionSlowDownScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacterMovementComponent.ApplyCollsionSlowDownImpulse
	 */
	struct UDSCharacterMovementComponent_ApplyCollsionSlowDownImpulse_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x00B0(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Impulse;                                                 // 0x00B8(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacterMovementComponent.AddTargetExternalVelocityImpulse
	 */
	struct UDSCharacterMovementComponent_AddTargetExternalVelocityImpulse_Params
	{
	public:
		struct FVector                                             TargetVelocity;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Strength;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EExtraVelocityChannel                                      Channel;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDirectional;                                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3LII[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DeltaTime;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacterMovementComponent.AddPushTypeRequest
	 */
	struct UDSCharacterMovementComponent_AddPushTypeRequest_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                PushType;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacterMovementComponent.AddMovementModeRequestWithCallback
	 */
	struct UDSCharacterMovementComponent_AddMovementModeRequestWithCallback_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementMode                                              RequestedMovementMode;                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              RequestedCustomMovementMode;                             // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_21PS[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      RequestActiveCallback;                                   // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x001C(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacterMovementComponent.AddMovementModeRequest
	 */
	struct UDSCharacterMovementComponent_AddMovementModeRequest_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementMode                                              RequestedMovementMode;                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              RequestedCustomMovementMode;                             // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J8YS[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuid                                               ReturnValue;                                             // 0x000C(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCharacterMovementComponent.AddExternalVelocityImpulse
	 */
	struct UDSCharacterMovementComponent_AddExternalVelocityImpulse_Params
	{
	public:
		struct FVector                                             ExtraVelocity;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EExtraVelocityChannel                                      Channel;                                                 // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOnlyIfAuthoritative;                                    // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSAIController.UnregisterPossessionListener
	 */
	struct ADSAIController_UnregisterPossessionListener_Params
	{
	public:
		class UObject*                                             Listener;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSAIController.RemoveHomeArea
	 */
	struct ADSAIController_RemoveHomeArea_Params
	{
	public:
		class FName                                                Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHomeArea                                           HomeArea;                                                // 0x0008(0x0018)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSAIController.RegisterPossessionListener
	 */
	struct ADSAIController_RegisterPossessionListener_Params
	{
	public:
		class UObject*                                             Listener;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReceiveLatePossess;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSAIController.GetHomeAreaAsSpherical
	 */
	struct ADSAIController_GetHomeAreaAsSpherical_Params
	{
	public:
		struct FHomeArea                                           ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSAIController.AddHomeArea
	 */
	struct ADSAIController_AddHomeArea_Params
	{
	public:
		class FName                                                Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHomeArea                                           HomeArea;                                                // 0x0008(0x0018)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPlayerController.SetMenuMouse
	 */
	struct ADSPlayerController_SetMenuMouse_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6GYT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Reason;                                                  // 0x0004(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPlayerController.OnMenuMouseDisabled
	 */
	struct ADSPlayerController_OnMenuMouseDisabled_Params
	{	};

	/**
	 * Function DSFramework.DSPlayerController.OnMenuMouseActive
	 */
	struct ADSPlayerController_OnMenuMouseActive_Params
	{	};

	/**
	 * Function DSFramework.DSPlayerController.LogActiveInputFilters
	 */
	struct ADSPlayerController_LogActiveInputFilters_Params
	{	};

	/**
	 * Function DSFramework.DSPlayerController.GetCharacterTypeString
	 */
	struct ADSPlayerController_GetCharacterTypeString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPlayerController.ActionFilterEnable
	 */
	struct ADSPlayerController_ActionFilterEnable_Params
	{
	public:
		class UInputMapperActionFilterDefinition*                  ActionFilterDefinition;                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnable;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HQBX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Reason;                                                  // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeComponent.ServerOnTierCompleted
	 */
	struct UChallengeComponent_ServerOnTierCompleted_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TierCompleted;                                           // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeComponent.OnTierCompleted
	 */
	struct UChallengeComponent_OnTierCompleted_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TierCompleted;                                           // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeComponent.ClientPauseChallenge
	 */
	struct UChallengeComponent_ClientPauseChallenge_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeComponent.ClientIncrementChallenge
	 */
	struct UChallengeComponent_ClientIncrementChallenge_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ProgressDelta;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeComponent.ClientEnableChallenge
	 */
	struct UChallengeComponent_ClientEnableChallenge_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DespawnManager.ScheduleActorDespawn
	 */
	struct ADespawnManager_ScheduleActorDespawn_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                DespawnConditionsName;                                   // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DespawnReason;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UBaseDespawnCallback*                                DespawnCallback;                                         // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DespawnManager.ResetDespawning
	 */
	struct ADespawnManager_ResetDespawning_Params
	{	};

	/**
	 * Function DSFramework.DespawnManager.OnDespawningActorEndPlay
	 */
	struct ADespawnManager_OnDespawningActorEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DespawnManager.NetMulticastHide
	 */
	struct ADespawnManager_NetMulticastHide_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DespawnManager.NetMulticastEndExclusiveObservation
	 */
	struct ADespawnManager_NetMulticastEndExclusiveObservation_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   Observer;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DespawnManager.NetMulticastBeginExclusiveObservation
	 */
	struct ADespawnManager_NetMulticastBeginExclusiveObservation_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   Observer;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AlwaysVisibleAtDistance;                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NotVisibleAtDistance;                                    // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DespawnManager.InstantlyDespawnAllActors
	 */
	struct ADespawnManager_InstantlyDespawnAllActors_Params
	{	};

	/**
	 * Function DSFramework.DespawnManager.DelayedRemoveActor
	 */
	struct ADespawnManager_DelayedRemoveActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DelayTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SGAX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBaseDespawnCallback*                                DespawnCallback;                                         // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bImmediateHide;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DespawnManager.AbortActorDespawn
	 */
	struct ADespawnManager_AbortActorDespawn_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGameViewportClient.AddExternalDisplayInfo
	 */
	struct UDSGameViewportClient_AddExternalDisplayInfo_Params
	{
	public:
		class FString                                              InText;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Colour;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSInputProfileManagerComponent.PushInputContext
	 */
	struct UDSInputProfileManagerComponent_PushInputContext_Params
	{
	public:
		class FName                                                InContext;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSInputProfileManagerComponent.PopInputContext
	 */
	struct UDSInputProfileManagerComponent_PopInputContext_Params
	{
	public:
		class FName                                                InContext;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSInputProfileManagerComponent.OnControlSchemeChanged
	 */
	struct UDSInputProfileManagerComponent_OnControlSchemeChanged_Params
	{
	public:
		EControlSchemeType                                         InCurrentControlScheme;                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControlSchemeType                                         LastControlScheme;                                       // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSInputProfileManagerComponent.OnControllerTypeChanged
	 */
	struct UDSInputProfileManagerComponent_OnControllerTypeChanged_Params
	{
	public:
		EInputMapperControllerType                                 InCurrentControllerType;                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInputMapperControllerType                                 LastControllerType;                                      // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryActor.GetInventoryComponent
	 */
	struct AInventoryActor_GetInventoryComponent_Params
	{
	public:
		class UInventoryComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryCategoryContainer.IsRemainingCapacityForItemArchetype
	 */
	struct UInventoryCategoryContainer_IsRemainingCapacityForItemArchetype_Params
	{
	public:
		class UItemArchetype*                                      ItemArchetype;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryCategoryContainer.GetSlots
	 */
	struct UInventoryCategoryContainer_GetSlots_Params
	{
	public:
		TArray<struct FInventoryCategorySlot>                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryCategoryContainer.GetRemainingCapacityForItemArchetype
	 */
	struct UInventoryCategoryContainer_GetRemainingCapacityForItemArchetype_Params
	{
	public:
		class UItemArchetype*                                      ItemArchetype;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryCategoryContainer.GetNumValidItems
	 */
	struct UInventoryCategoryContainer_GetNumValidItems_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryComponent.ServerRemoveItemByArchetype
	 */
	struct UInventoryComponent_ServerRemoveItemByArchetype_Params
	{
	public:
		class UItemArchetype*                                      ItemArchetype;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryComponent.ServerRemoveItem
	 */
	struct UInventoryComponent_ServerRemoveItem_Params
	{
	public:
		class AItemActor*                                          Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryComponent.ServerAddItemByArchetype
	 */
	struct UInventoryComponent_ServerAddItemByArchetype_Params
	{
	public:
		class UItemArchetype*                                      ItemArchetype;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldDropOnOverflow;                                   // 0x000C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryComponent.ServerAddItem
	 */
	struct UInventoryComponent_ServerAddItem_Params
	{
	public:
		class AItemActor*                                          Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldDropOverflow;                                     // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryComponent.OnSlotChanged
	 */
	struct UInventoryComponent_OnSlotChanged_Params
	{
	public:
		struct FInventoryCategorySlot                              Slot;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UInventoryCategoryContainer*                         Owner;                                                   // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Delta;                                                   // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryComponent.OnSlotAdded
	 */
	struct UInventoryComponent_OnSlotAdded_Params
	{
	public:
		struct FInventoryCategorySlot                              Slot;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UInventoryCategoryContainer*                         Owner;                                                   // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Delta;                                                   // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryComponent.HasItemArchetype
	 */
	struct UInventoryComponent_HasItemArchetype_Params
	{
	public:
		class UItemArchetype*                                      ItemArchetype;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemActor*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryComponent.GetUser
	 */
	struct UInventoryComponent_GetUser_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryComponent.GetOccupiedSlotsInCategory
	 */
	struct UInventoryComponent_GetOccupiedSlotsInCategory_Params
	{
	public:
		class UInventoryCategory*                                  ItemCategory;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryComponent.GetItemArchetypeCount
	 */
	struct UInventoryComponent_GetItemArchetypeCount_Params
	{
	public:
		class UItemArchetype*                                      ItemArchetype;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryComponent.GetCategory
	 */
	struct UInventoryComponent_GetCategory_Params
	{
	public:
		class FName                                                CategoryName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryCategoryContainer*                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryComponent.GetAvailableSlotsInCategory
	 */
	struct UInventoryComponent_GetAvailableSlotsInCategory_Params
	{
	public:
		class UInventoryCategory*                                  ItemCategory;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.InventoryComponent.ClientInventoryUpdated
	 */
	struct UInventoryComponent_ClientInventoryUpdated_Params
	{
	public:
		TArray<struct FClientInventoryUpdatedItem>                 ReceivedItems;                                           // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSLocalPlayer.OnControlSchemeUsingMouseChanged
	 */
	struct UDSLocalPlayer_OnControlSchemeUsingMouseChanged_Params
	{
	public:
		bool                                                       bUsingMouse;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ObjectDespawnManagerNotifier.OnActorFellOutOfWorld
	 */
	struct UObjectDespawnManagerNotifier_OnActorFellOutOfWorld_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PaperDollComponent.RemoveItemFrom
	 */
	struct UPaperDollComponent_RemoveItemFrom_Params
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PaperDollComponent.OnRep_PaperDollState
	 */
	struct UPaperDollComponent_OnRep_PaperDollState_Params
	{	};

	/**
	 * Function DSFramework.PaperDollComponent.OnOwnerPlayerCharacterUnpossessed
	 */
	struct UPaperDollComponent_OnOwnerPlayerCharacterUnpossessed_Params
	{	};

	/**
	 * Function DSFramework.PaperDollComponent.OnOwnerPlayerCharacterPossessed
	 */
	struct UPaperDollComponent_OnOwnerPlayerCharacterPossessed_Params
	{
	public:
		class AController*                                         PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PaperDollComponent.GetSlotNameContainingItem
	 */
	struct UPaperDollComponent_GetSlotNameContainingItem_Params
	{
	public:
		class AItemActor*                                          EquippableItem;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PaperDollComponent.GetSlot
	 */
	struct UPaperDollComponent_GetSlot_Params
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPaperDollSlot*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PaperDollComponent.GetItemPendingOrAssignedToSlot
	 */
	struct UPaperDollComponent_GetItemPendingOrAssignedToSlot_Params
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemActor*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PaperDollComponent.GetItemAssignmentShortcutGroup
	 */
	struct UPaperDollComponent_GetItemAssignmentShortcutGroup_Params
	{
	public:
		class FName                                                ShortcutGroupName;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItemAssignmentShortcutGroupInstance*                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PaperDollComponent.GetItemAssignedToSlot
	 */
	struct UPaperDollComponent_GetItemAssignedToSlot_Params
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemActor*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PaperDollComponent.GetEquippableAssignedToSlot
	 */
	struct UPaperDollComponent_GetEquippableAssignedToSlot_Params
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UEquippableComponent*                                ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PaperDollComponent.DeactivateSlot
	 */
	struct UPaperDollComponent_DeactivateSlot_Params
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PaperDollComponent.AssignItemTo
	 */
	struct UPaperDollComponent_AssignItemTo_Params
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UEquippableComponent*                                Equippable;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PaperDollComponent.ActivateSlot
	 */
	struct UPaperDollComponent_ActivateSlot_Params
	{
	public:
		class FName                                                SlotName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.StarerComponent.ServerStopStaring
	 */
	struct UStarerComponent_ServerStopStaring_Params
	{
	public:
		class UStareeComponent*                                    StaringActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.StarerComponent.ServerStartStaring
	 */
	struct UStarerComponent_ServerStartStaring_Params
	{
	public:
		class UStareeComponent*                                    StaringActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPlayerState.OnRep_PaperDollState
	 */
	struct ADSPlayerState_OnRep_PaperDollState_Params
	{	};

	/**
	 * Function DSFramework.DSPlayerState.OnRep_InventoryActor
	 */
	struct ADSPlayerState_OnRep_InventoryActor_Params
	{	};

	/**
	 * Function DSFramework.DSPlayerState.GetInventoryActor
	 */
	struct ADSPlayerState_GetInventoryActor_Params
	{
	public:
		class AInventoryActor*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPlayerState.GetInventory
	 */
	struct ADSPlayerState_GetInventory_Params
	{
	public:
		class UInventoryComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPlayerState.BlueprintOnRep_InventoryActor
	 */
	struct ADSPlayerState_BlueprintOnRep_InventoryActor_Params
	{	};

	/**
	 * Function DSFramework.StareeComponent.RemoveDisableReason
	 */
	struct UStareeComponent_RemoveDisableReason_Params
	{
	public:
		class FName                                                DisableReason;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.StareeComponent.OnCooldownComplete
	 */
	struct UStareeComponent_OnCooldownComplete_Params
	{	};

	/**
	 * Function DSFramework.StareeComponent.IsWithinBounds
	 */
	struct UStareeComponent_IsWithinBounds_Params
	{
	public:
		struct FVector                                             PlayerLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.StareeComponent.AddDisableReason
	 */
	struct UStareeComponent_AddDisableReason_Params
	{
	public:
		class FName                                                DisableReason;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.BaseChallengeDataAsset.GetTierThreshold
	 */
	struct UBaseChallengeDataAsset_GetTierThreshold_Params
	{
	public:
		int32_t                                                    Tier;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.BaseChallengeDataAsset.GetTierForProgress
	 */
	struct UBaseChallengeDataAsset_GetTierForProgress_Params
	{
	public:
		int32_t                                                    Progress;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.BaseChallengeDataAsset.GetTierCompletedForProgress
	 */
	struct UBaseChallengeDataAsset_GetTierCompletedForProgress_Params
	{
	public:
		int32_t                                                    Progress;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.BaseChallengeDataAsset.GetNumTiers
	 */
	struct UBaseChallengeDataAsset_GetNumTiers_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.BaseChallengeDataAsset.GetCompletionThreshold
	 */
	struct UBaseChallengeDataAsset_GetCompletionThreshold_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.RemoveChallengeSet
	 */
	struct AChallengeManager_RemoveChallengeSet_Params
	{
	public:
		class UChallengeSetDataAsset*                              ChallengeSet;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.PauseChallenge
	 */
	struct AChallengeManager_PauseChallenge_Params
	{
	public:
		class ADSPlayerController*                                 Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ChallengeName;                                           // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.K2_RemoveCallbackForChallenge
	 */
	struct AChallengeManager_K2_RemoveCallbackForChallenge_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ChallengeName;                                           // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ENotificationRule                                          NotificationRule;                                        // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CMMR[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                FunctionName;                                            // 0x0014(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.K2_AddCallbackForChallenge
	 */
	struct AChallengeManager_K2_AddCallbackForChallenge_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ChallengeName;                                           // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ENotificationRule                                          NotificationRule;                                        // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HN4O[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                FunctionName;                                            // 0x0014(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.IncrementChallenge
	 */
	struct AChallengeManager_IncrementChallenge_Params
	{
	public:
		class ADSPlayerController*                                 TargetedPlayerController;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ChallengeName;                                           // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ProgressDelta;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.GetCompletedChallengesCount
	 */
	struct AChallengeManager_GetCompletedChallengesCount_Params
	{
	public:
		class FName                                                Category;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Tier;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.GetChallengeTierProgressFraction
	 */
	struct AChallengeManager_GetChallengeTierProgressFraction_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutProgress;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutTier;                                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.GetChallengeTierProgress
	 */
	struct AChallengeManager_GetChallengeTierProgress_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutProgress;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutTier;                                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.GetChallengeThresholdForTier
	 */
	struct AChallengeManager_GetChallengeThresholdForTier_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Tier;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.GetChallengeProgressFractionTowardsTier
	 */
	struct AChallengeManager_GetChallengeProgressFractionTowardsTier_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Tier;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.GetChallengeProgressFraction
	 */
	struct AChallengeManager_GetChallengeProgressFraction_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.GetChallengeProgress
	 */
	struct AChallengeManager_GetChallengeProgress_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.GetChallengeName
	 */
	struct AChallengeManager_GetChallengeName_Params
	{
	public:
		class UBaseChallengeDataAsset*                             ChallengeData;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.GetChallengeDisplayedProgressFractionTowardsTier
	 */
	struct AChallengeManager_GetChallengeDisplayedProgressFractionTowardsTier_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Tier;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.GetChallengeDisplayedProgressFraction
	 */
	struct AChallengeManager_GetChallengeDisplayedProgressFraction_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.GetChallengeDisplayedProgress
	 */
	struct AChallengeManager_GetChallengeDisplayedProgress_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.GetChallengeDeltaProgressTowardsTier
	 */
	struct AChallengeManager_GetChallengeDeltaProgressTowardsTier_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Tier;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.GetChallengeData
	 */
	struct AChallengeManager_GetChallengeData_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UBaseChallengeDataAsset*                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.GetChallengeCount
	 */
	struct AChallengeManager_GetChallengeCount_Params
	{
	public:
		class FName                                                Category;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.GetChallenge
	 */
	struct AChallengeManager_GetChallenge_Params
	{
	public:
		class FName                                                ChallengeName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UBaseChallengeRuntimeObject*                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.CreateAndEnableChallenge
	 */
	struct AChallengeManager_CreateAndEnableChallenge_Params
	{
	public:
		class ADSPlayerController*                                 Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ChallengeName;                                           // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeManager.AddChallengeSet
	 */
	struct AChallengeManager_AddChallengeSet_Params
	{
	public:
		class UChallengeSetDataAsset*                              ChallengeSet;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DemoFilterList.IsFilterType
	 */
	struct UDemoFilterList_IsFilterType_Params
	{
	public:
		EDemoFilterType                                            InFilterType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DemoFilterList.GetFilterType
	 */
	struct UDemoFilterList_GetFilterType_Params
	{
	public:
		EDemoFilterType                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.Attachment.UnHideAttachment
	 */
	struct UAttachment_UnHideAttachment_Params
	{
	public:
		class FName                                                HideReason;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.Attachment.OnComponentDestroyed
	 */
	struct UAttachment_OnComponentDestroyed_Params
	{
	public:
		class UActorComponent*                                     DestroyedComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.Attachment.OnActorDestroyed
	 */
	struct UAttachment_OnActorDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.Attachment.IsHidden
	 */
	struct UAttachment_IsHidden_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.Attachment.IsAttachmentAllowed
	 */
	struct UAttachment_IsAttachmentAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.Attachment.Initialize
	 */
	struct UAttachment_Initialize_Params
	{	};

	/**
	 * Function DSFramework.Attachment.HideAttachment
	 */
	struct UAttachment_HideAttachment_Params
	{
	public:
		class FName                                                HideReason;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.Attachment.HasValidData
	 */
	struct UAttachment_HasValidData_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.Attachment.GetAttachmentTargetComponent
	 */
	struct UAttachment_GetAttachmentTargetComponent_Params
	{
	public:
		class UAttachmentComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.Attachment.GetAttachmentTarget
	 */
	struct UAttachment_GetAttachmentTarget_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.Attachment.GetAttachmentSourceComponent
	 */
	struct UAttachment_GetAttachmentSourceComponent_Params
	{
	public:
		class UAttachmentComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.Attachment.GetAttachmentSource
	 */
	struct UAttachment_GetAttachmentSource_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.Attachment.Detach
	 */
	struct UAttachment_Detach_Params
	{	};

	/**
	 * Function DSFramework.Attachment.CleanupAttachment
	 */
	struct UAttachment_CleanupAttachment_Params
	{
	public:
		EDetachmentReason                                          DetachmentReason;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.Attachment.Attach
	 */
	struct UAttachment_Attach_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSSkeletalMeshComponent.RemoveVisibilityBasedAnimTickOptionRequest
	 */
	struct UDSSkeletalMeshComponent_RemoveVisibilityBasedAnimTickOptionRequest_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSSkeletalMeshComponent.AddVisibilityBasedAnimTickOptionRequest
	 */
	struct UDSSkeletalMeshComponent_AddVisibilityBasedAnimTickOptionRequest_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVisibilityBasedAnimTickOption                             AnimTickOption;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OG71[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuid                                               ReturnValue;                                             // 0x000C(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.UntagAction
	 */
	struct UCharacterActionComponent_UntagAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Tag;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.TagAction
	 */
	struct UCharacterActionComponent_TagAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Tag;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.SetKnowledgeBaseComponent
	 */
	struct UCharacterActionComponent_SetKnowledgeBaseComponent_Params
	{
	public:
		class UKnowledgeBaseComponent*                             InKnowledgeBaseComponent;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.ServerUpdateStateParams
	 */
	struct UCharacterActionComponent_ServerUpdateStateParams_Params
	{
	public:
		struct FUserParamsObjectWrapper                            Params;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.ServerRequestDenied
	 */
	struct UCharacterActionComponent_ServerRequestDenied_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.ServerRequestCancelled
	 */
	struct UCharacterActionComponent_ServerRequestCancelled_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.ServerRemoveCharacterActionRequest
	 */
	struct UCharacterActionComponent_ServerRemoveCharacterActionRequest_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECharacterActionEndedReason                                Reason;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.ServerBounceReplicationBlock
	 */
	struct UCharacterActionComponent_ServerBounceReplicationBlock_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FUserParamsObjectWrapper                            UserParams;                                              // 0x0010(0x0008)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.ServerAddCharacterActionRequest
	 */
	struct UCharacterActionComponent_ServerAddCharacterActionRequest_Params
	{
	public:
		struct FCharacterActionNetworkRequestItem                  CharacterActionRequestItem;                              // 0x0000(0x0038)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.RequestCharacterAction
	 */
	struct UCharacterActionComponent_RequestCharacterAction_Params
	{
	public:
		struct FCharacterActionRequestParams                       RequestParams;                                           // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.RegisterDefaultActions
	 */
	struct UCharacterActionComponent_RegisterDefaultActions_Params
	{	};

	/**
	 * Function DSFramework.CharacterActionComponent.RegisterAction
	 */
	struct UCharacterActionComponent_RegisterAction_Params
	{
	public:
		class UActionDefinition*                                   ActionDefinition;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LMOL[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.OnRep_StateParamsArray
	 */
	struct UCharacterActionComponent_OnRep_StateParamsArray_Params
	{	};

	/**
	 * Function DSFramework.CharacterActionComponent.NetMulticastAddCharacterActionRequest
	 */
	struct UCharacterActionComponent_NetMulticastAddCharacterActionRequest_Params
	{
	public:
		struct FCharacterActionNetworkRequestItem                  CharacterActionRequestItem;                              // 0x0000(0x0038)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.LoadActionDefinitions
	 */
	struct UCharacterActionComponent_LoadActionDefinitions_Params
	{
	public:
		class UActionDefinitions*                                  Definitions;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.IsValidActionRequest
	 */
	struct UCharacterActionComponent_IsValidActionRequest_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.GetInitParams
	 */
	struct UCharacterActionComponent_GetInitParams_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCustomActionParamsBase*                             OutInitParams;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOkInvalidResult                                           Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.FindByID
	 */
	struct UCharacterActionComponent_FindByID_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCharacterAction*                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.FindActionsByTag
	 */
	struct UCharacterActionComponent_FindActionsByTag_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FGuid>                                       ResultArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.FindActionsByName
	 */
	struct UCharacterActionComponent_FindActionsByName_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FGuid>                                       ResultArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.FindActionsByClass
	 */
	struct UCharacterActionComponent_FindActionsByClass_Params
	{
	public:
		class UClass*                                              ActionType;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FGuid>                                       ResultArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.EndActionsByTag
	 */
	struct UCharacterActionComponent_EndActionsByTag_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECharacterActionEndReason                                  Reason;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RCEX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DelayTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.EndAction
	 */
	struct UCharacterActionComponent_EndAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECharacterActionEndReason                                  Reason;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XVVE[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DelayTime;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.CustomSignal
	 */
	struct UCharacterActionComponent_CustomSignal_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SignalName;                                              // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.ClientRequestCharacterAction
	 */
	struct UCharacterActionComponent_ClientRequestCharacterAction_Params
	{
	public:
		int32_t                                                    ActionTypeHash;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QVCH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUserParamsObjectWrapper                            InitParams;                                              // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      MaxQueueTime;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               RequestId;                                               // 0x0014(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionComponent.ClientEndAction
	 */
	struct UCharacterActionComponent_ClientEndAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECharacterActionEndedReason                                Reason;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K65N[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DelayTime;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.SetMemberValueArray
	 */
	struct UDSGFxObject_SetMemberValueArray_Params
	{
	public:
		class FString                                              ArrayName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FASValue>                                    ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.SetMemberValue
	 */
	struct UDSGFxObject_SetMemberValue_Params
	{
	public:
		class FString                                              MemberName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FASValue                                            Input;                                                   // 0x0010(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.SetAssetFromOtherGFxObject
	 */
	struct UDSGFxObject_SetAssetFromOtherGFxObject_Params
	{
	public:
		class UGFxObject*                                          OtherGFxObject;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.SetAssetFromMoviePlayer
	 */
	struct UDSGFxObject_SetAssetFromMoviePlayer_Params
	{
	public:
		class UGFxMoviePlayer*                                     MoviePlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Path;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.SetAssetFromGFxObject
	 */
	struct UDSGFxObject_SetAssetFromGFxObject_Params
	{
	public:
		class UGFxObject*                                          ParentGFxObject;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Path;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.SetAssetFromDSGFxObject
	 */
	struct UDSGFxObject_SetAssetFromDSGFxObject_Params
	{
	public:
		class UDSGFxObject*                                        ParentDSGFxObject;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Path;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.IsValid
	 */
	struct UDSGFxObject_IsValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.IsNull
	 */
	struct UDSGFxObject_IsNull_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.InvokeOptionalNoReturn
	 */
	struct UDSGFxObject_InvokeOptionalNoReturn_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FASValue>                                    Params;                                                  // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.InvokeNoReturn
	 */
	struct UDSGFxObject_InvokeNoReturn_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FASValue>                                    Params;                                                  // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.HasMemberValue
	 */
	struct UDSGFxObject_HasMemberValue_Params
	{
	public:
		class FString                                              MemberName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.GetMoviePlayer
	 */
	struct UDSGFxObject_GetMoviePlayer_Params
	{
	public:
		class UGFxMoviePlayer*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.GetMemberVariable
	 */
	struct UDSGFxObject_GetMemberVariable_Params
	{
	public:
		class FString                                              MemberName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGFxObject*                                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.GetMemberValueArray
	 */
	struct UDSGFxObject_GetMemberValueArray_Params
	{
	public:
		class FString                                              ArrayName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FASValue>                                    ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.GetMemberValue
	 */
	struct UDSGFxObject_GetMemberValue_Params
	{
	public:
		class FString                                              MemberName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FASValue                                            ReturnValue;                                             // 0x0010(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.GetGFxObject
	 */
	struct UDSGFxObject_GetGFxObject_Params
	{
	public:
		class UGFxObject*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSGFxObject.ClearAssetObject
	 */
	struct UDSGFxObject_ClearAssetObject_Params
	{	};

	/**
	 * Function DSFramework.DSGFxObject.CheckIfMemberExists
	 */
	struct UDSGFxObject_CheckIfMemberExists_Params
	{
	public:
		class FString                                              MemberName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.UnregisterFromDirectCommands
	 */
	struct UGFxDisplayObject_UnregisterFromDirectCommands_Params
	{	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetYRotation
	 */
	struct UGFxDisplayObject_SetYRotation_Params
	{
	public:
		float                                                      YRotation;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetY
	 */
	struct UGFxDisplayObject_SetY_Params
	{
	public:
		float                                                      Y;                                                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetXRotation
	 */
	struct UGFxDisplayObject_SetXRotation_Params
	{
	public:
		float                                                      XRotation;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetX
	 */
	struct UGFxDisplayObject_SetX_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetWidth
	 */
	struct UGFxDisplayObject_SetWidth_Params
	{
	public:
		float                                                      Width;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetVisible
	 */
	struct UGFxDisplayObject_SetVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetScaleYFrac
	 */
	struct UGFxDisplayObject_SetScaleYFrac_Params
	{
	public:
		float                                                      ScaleYFrac;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetScaleXYFrac
	 */
	struct UGFxDisplayObject_SetScaleXYFrac_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetScaleXFrac
	 */
	struct UGFxDisplayObject_SetScaleXFrac_Params
	{
	public:
		float                                                      ScaleXFrac;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetScaleFrac
	 */
	struct UGFxDisplayObject_SetScaleFrac_Params
	{
	public:
		struct FVector2D                                           Scale2D;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetRotation
	 */
	struct UGFxDisplayObject_SetRotation_Params
	{
	public:
		float                                                      Rotation;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetPosition2D
	 */
	struct UGFxDisplayObject_SetPosition2D_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetHeight
	 */
	struct UGFxDisplayObject_SetHeight_Params
	{
	public:
		float                                                      Height;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetEdgeAAMode
	 */
	struct UGFxDisplayObject_SetEdgeAAMode_Params
	{
	public:
		EDIEdgeAAMode                                              EdgeAAMode;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetDisplayInfo
	 */
	struct UGFxDisplayObject_SetDisplayInfo_Params
	{
	public:
		struct FASDisplayInfo                                      InDisplayInfo;                                           // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetColorTransform
	 */
	struct UGFxDisplayObject_SetColorTransform_Params
	{
	public:
		struct FLinearColor                                        Multiply;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Add;                                                     // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.SetAlphaFrac
	 */
	struct UGFxDisplayObject_SetAlphaFrac_Params
	{
	public:
		float                                                      AlphaFrac;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.RegisterForDirectCommands
	 */
	struct UGFxDisplayObject_RegisterForDirectCommands_Params
	{	};

	/**
	 * Function DSFramework.GFxDisplayObject.GetYRotation
	 */
	struct UGFxDisplayObject_GetYRotation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.GetY
	 */
	struct UGFxDisplayObject_GetY_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.GetXRotation
	 */
	struct UGFxDisplayObject_GetXRotation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.GetX
	 */
	struct UGFxDisplayObject_GetX_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.GetWidth
	 */
	struct UGFxDisplayObject_GetWidth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.GetVisible
	 */
	struct UGFxDisplayObject_GetVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.GetSize2D
	 */
	struct UGFxDisplayObject_GetSize2D_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.GetScaleYFrac
	 */
	struct UGFxDisplayObject_GetScaleYFrac_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.GetScaleXFrac
	 */
	struct UGFxDisplayObject_GetScaleXFrac_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.GetScaleFrac
	 */
	struct UGFxDisplayObject_GetScaleFrac_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.GetRotation
	 */
	struct UGFxDisplayObject_GetRotation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.GetPosition2D
	 */
	struct UGFxDisplayObject_GetPosition2D_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.GetHeight
	 */
	struct UGFxDisplayObject_GetHeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.GetDisplayInfo
	 */
	struct UGFxDisplayObject_GetDisplayInfo_Params
	{
	public:
		struct FASDisplayInfo                                      OutDisplayInfo;                                          // 0x0000(0x0030)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDisplayObject.GetAlphaFrac
	 */
	struct UGFxDisplayObject_GetAlphaFrac_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxMovieClip.Unload
	 */
	struct UGFxMovieClip_Unload_Params
	{	};

	/**
	 * Function DSFramework.GFxMovieClip.RemoveMovieClipAndClear
	 */
	struct UGFxMovieClip_RemoveMovieClipAndClear_Params
	{	};

	/**
	 * Function DSFramework.GFxMovieClip.LoadMovie
	 */
	struct UGFxMovieClip_LoadMovie_Params
	{
	public:
		class USwfMovie*                                           SwfMovie;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceAdvance;                                           // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxMovieClip.LoadImageAsset
	 */
	struct UGFxMovieClip_LoadImageAsset_Params
	{
	public:
		struct FSoftObjectPath                                     AssetReference;                                          // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxMovieClip.GotoAndStopI
	 */
	struct UGFxMovieClip_GotoAndStopI_Params
	{
	public:
		int32_t                                                    FrameNum;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxMovieClip.GotoAndStop
	 */
	struct UGFxMovieClip_GotoAndStop_Params
	{
	public:
		class FString                                              FrameString;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxMovieClip.GotoAndPlayI
	 */
	struct UGFxMovieClip_GotoAndPlayI_Params
	{
	public:
		int32_t                                                    FrameNumber;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxMovieClip.GotoAndPlay
	 */
	struct UGFxMovieClip_GotoAndPlay_Params
	{
	public:
		class FString                                              FrameString;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxMovieClip.GetTotalFrames
	 */
	struct UGFxMovieClip_GetTotalFrames_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxMovieClip.GetMovieClipName
	 */
	struct UGFxMovieClip_GetMovieClipName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxMovieClip.CreateEmptyMovieClipBP
	 */
	struct UGFxMovieClip_CreateEmptyMovieClipBP_Params
	{
	public:
		class FString                                              InstanceName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Depth;                                                   // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZQOF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGFxObject*                                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxMovieClip.AttachMovieBP
	 */
	struct UGFxMovieClip_AttachMovieBP_Params
	{
	public:
		class FString                                              SymbolName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InstanceName;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Depth;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6YYM[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGFxObject*                                          ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.AttachmentComponent.UnHideAttachmentsOnBone
	 */
	struct UAttachmentComponent_UnHideAttachmentsOnBone_Params
	{
	public:
		class FName                                                HideReason;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.AttachmentComponent.RemoveAllAttachments
	 */
	struct UAttachmentComponent_RemoveAllAttachments_Params
	{	};

	/**
	 * Function DSFramework.AttachmentComponent.OnRep_NetworkedAttachments
	 */
	struct UAttachmentComponent_OnRep_NetworkedAttachments_Params
	{	};

	/**
	 * Function DSFramework.AttachmentComponent.NamedAttachmentExists
	 */
	struct UAttachmentComponent_NamedAttachmentExists_Params
	{
	public:
		class FName                                                AttachmentName;                                          // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.AttachmentComponent.IsAttachmentAllowed
	 */
	struct UAttachmentComponent_IsAttachmentAllowed_Params
	{
	public:
		class UAttachment*                                         Attachment;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.AttachmentComponent.HideAttachmentsOnBone
	 */
	struct UAttachmentComponent_HideAttachmentsOnBone_Params
	{
	public:
		class FName                                                HideReason;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.AttachmentComponent.GetAttachments
	 */
	struct UAttachmentComponent_GetAttachments_Params
	{
	public:
		TArray<class UAttachment*>                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.AttachmentComponent.GetAttachmentClassForActor
	 */
	struct UAttachmentComponent_GetAttachmentClassForActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.AttachmentComponent.AnyAttachmentExists
	 */
	struct UAttachmentComponent_AnyAttachmentExists_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.AttachmentManager.GetAttachmentManager
	 */
	struct AAttachmentManager_GetAttachmentManager_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AAttachmentManager*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.AttachmentManager.FindExistingNamedAttachment
	 */
	struct AAttachmentManager_FindExistingNamedAttachment_Params
	{
	public:
		class FName                                                AttachmentName;                                          // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAttachment*                                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.AttachmentManager.CreateAttachmentBetweenComponentAndActor
	 */
	struct AAttachmentManager_CreateAttachmentBetweenComponentAndActor_Params
	{
	public:
		class USceneComponent*                                     SourceComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDynamicAttachmentRules                             DynamicAttachmentRules;                                  // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UAttachment*                                         ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.AttachmentManager.CreateAttachmentBetweenActors
	 */
	struct AAttachmentManager_CreateAttachmentBetweenActors_Params
	{
	public:
		class AActor*                                              ActorToAttach;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDynamicAttachmentRules                             DynamicAttachmentRules;                                  // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UAttachment*                                         ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.AttachmentManager.CreateAttachmentBetweenActorAndComponent
	 */
	struct AAttachmentManager_CreateAttachmentBetweenActorAndComponent_Params
	{
	public:
		class AActor*                                              ActorToAttach;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     TargetComponent;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDynamicAttachmentRules                             DynamicAttachmentRules;                                  // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UAttachment*                                         ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ChallengeCompletionChallengeRuntimeObject.OnChallengeComplete
	 */
	struct UChallengeCompletionChallengeRuntimeObject_OnChallengeComplete_Params
	{
	public:
		class UBaseChallengeRuntimeObject*                         Challenge;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ENotificationRule                                          NotificationRule;                                        // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LMKX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    DeltaProgress;                                           // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Progress;                                                // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionFactory.AllocateAction
	 */
	struct UCharacterActionFactory_AllocateAction_Params
	{
	public:
		struct FAllocateActionParams                               Params;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UCharacterAction*                                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionRequestHelper.RequestAction
	 */
	struct UCharacterActionRequestHelper_RequestAction_Params
	{
	public:
		class UCharacterActionComponent*                           InCharacterActionComponent;                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterActionRequestParams                       RequestParams;                                           // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		ECharacterActionHelperReferenceType                        InReferenceType;                                         // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HB5D[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuid                                               ReturnValue;                                             // 0x002C(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionRequestHelper.IsRequestValid
	 */
	struct UCharacterActionRequestHelper_IsRequestValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionRequestHelper.IsRequestStatus
	 */
	struct UCharacterActionRequestHelper_IsRequestStatus_Params
	{
	public:
		ERequestStatus                                             InRequestStatus;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionRequestHelper.IsRequestInProgress
	 */
	struct UCharacterActionRequestHelper_IsRequestInProgress_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionRequestHelper.IsRequestForActionByName
	 */
	struct UCharacterActionRequestHelper_IsRequestForActionByName_Params
	{
	public:
		class FName                                                InActionName;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionRequestHelper.IsRequestForAction
	 */
	struct UCharacterActionRequestHelper_IsRequestForAction_Params
	{
	public:
		class UActionDefinition*                                   InDefinition;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionRequestHelper.HasActionAuthority
	 */
	struct UCharacterActionRequestHelper_HasActionAuthority_Params
	{
	public:
		class UCharacterActionComponent*                           InCharacterActionComponent;                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionRequestHelper.EndAction
	 */
	struct UCharacterActionRequestHelper_EndAction_Params
	{
	public:
		ECharacterActionEndReason                                  Reason;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RJ5E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DelayTime;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWaitForActionEnd;                                       // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterActionRequestHelper.CreateCharacterActionRequestHelper
	 */
	struct UCharacterActionRequestHelper_CreateCharacterActionRequestHelper_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCharacterActionRequestHelper*                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CharacterMultiActionMultiActorRequester.OnActionsSucceeded
	 */
	struct UCharacterMultiActionMultiActorRequester_OnActionsSucceeded_Params
	{	};

	/**
	 * Function DSFramework.CharacterMultiActionMultiActorRequester.OnActionsFailed
	 */
	struct UCharacterMultiActionMultiActorRequester_OnActionsFailed_Params
	{	};

	/**
	 * Function DSFramework.ControlSchemeBlueprintLibrary.GetDisplayNameForKey
	 */
	struct UControlSchemeBlueprintLibrary_GetDisplayNameForKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ControlSchemeBlueprintLibrary.GetControlSchemeManagerFromPlayerController
	 */
	struct UControlSchemeBlueprintLibrary_GetControlSchemeManagerFromPlayerController_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UControlSchemeManager*                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ControlSchemeBlueprintLibrary.GetControlSchemeManager
	 */
	struct UControlSchemeBlueprintLibrary_GetControlSchemeManager_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UControlSchemeManager*                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ControlSchemeManager.IsMouseKeyboardControlScheme
	 */
	struct UControlSchemeManager_IsMouseKeyboardControlScheme_Params
	{
	public:
		EControlSchemeType                                         ControlScheme;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ControlSchemeManager.IsGamepadControlScheme
	 */
	struct UControlSchemeManager_IsGamepadControlScheme_Params
	{
	public:
		EControlSchemeType                                         ControlScheme;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ControlSchemeManager.IsCurrentlyMouseKeyboardControlScheme
	 */
	struct UControlSchemeManager_IsCurrentlyMouseKeyboardControlScheme_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ControlSchemeManager.IsCurrentlyGamepadControlScheme
	 */
	struct UControlSchemeManager_IsCurrentlyGamepadControlScheme_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ControlSchemeManager.GetCurrentControlScheme
	 */
	struct UControlSchemeManager_GetCurrentControlScheme_Params
	{
	public:
		EControlSchemeType                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ControlSchemeManager.GetCurrentControllerType
	 */
	struct UControlSchemeManager_GetCurrentControllerType_Params
	{
	public:
		EInputMapperControllerType                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ControlSchemeManager.GetCurrentControllerLayout
	 */
	struct UControlSchemeManager_GetCurrentControllerLayout_Params
	{
	public:
		struct FControllerLayout                                   ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.UIColourRowHandleWrapper.GetLinearColor
	 */
	struct UUIColourRowHandleWrapper_GetLinearColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.UIColourRowHandleWrapper.GetColorName
	 */
	struct UUIColourRowHandleWrapper_GetColorName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.UIColourRowHandleWrapper.GetColor
	 */
	struct UUIColourRowHandleWrapper_GetColor_Params
	{
	public:
		struct FColor                                              ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CosmeticEffectData_ParticleSystem.OnSystemFinished
	 */
	struct UCosmeticEffectData_ParticleSystem_OnSystemFinished_Params
	{
	public:
		class UParticleSystemComponent*                            InPS;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CosmeticEffectData_ParticleSystem.OnSystemDestroyed
	 */
	struct UCosmeticEffectData_ParticleSystem_OnSystemDestroyed_Params
	{
	public:
		class UParticleSystemComponent*                            InPS;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CurveUtils.GetVelocityFromScaledDistanceCurve
	 */
	struct UCurveUtils_GetVelocityFromScaledDistanceCurve_Params
	{
	public:
		class UCurveFloat*                                         ScaledCurve;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Time;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeScale;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ValueScale;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CurveUtils.GetVelocityFromDistanceCurve
	 */
	struct UCurveUtils_GetVelocityFromDistanceCurve_Params
	{
	public:
		class UCurveFloat*                                         DistanceCurve;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Time;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CurveUtils.GetAccelerationFromScaledDistanceCurve
	 */
	struct UCurveUtils_GetAccelerationFromScaledDistanceCurve_Params
	{
	public:
		class UCurveFloat*                                         ScaledCurve;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Time;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeScale;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ValueScale;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CurveUtils.GetAccelerationFromDistanceCurve
	 */
	struct UCurveUtils_GetAccelerationFromDistanceCurve_Params
	{
	public:
		class UCurveFloat*                                         DistanceCurve;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Time;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CustomParamsStackContainer.Remove
	 */
	struct UCustomParamsStackContainer_Remove_Params
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CustomParamsStackContainer.IsCurrentId
	 */
	struct UCustomParamsStackContainer_IsCurrentId_Params
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CustomParamsStackContainer.GetRestrictTo
	 */
	struct UCustomParamsStackContainer_GetRestrictTo_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CustomParamsStackContainer.GetParamsById
	 */
	struct UCustomParamsStackContainer_GetParamsById_Params
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCustomParamsStackItem*                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CustomParamsStackContainer.GetParams
	 */
	struct UCustomParamsStackContainer_GetParams_Params
	{
	public:
		class UCustomParamsStackItem*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CustomParamsStackContainer.CreateCustomParamsStackContainer
	 */
	struct UCustomParamsStackContainer_CreateCustomParamsStackContainer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              InRestrictTo;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCustomParamsStackContainer*                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CustomParamsStackContainer.Add
	 */
	struct UCustomParamsStackContainer_Add_Params
	{
	public:
		class UCustomParamsStackItem*                              Params;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Priority;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x000C(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CustomParamsStackItemHelper.Remove
	 */
	struct UCustomParamsStackItemHelper_Remove_Params
	{	};

	/**
	 * Function DSFramework.CustomParamsStackItemHelper.CreateCustomParamsStackItemHelper
	 */
	struct UCustomParamsStackItemHelper_CreateCustomParamsStackItemHelper_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCustomParamsStackItemHelper*                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.CustomParamsStackItemHelper.Add
	 */
	struct UCustomParamsStackItemHelper_Add_Params
	{
	public:
		class UClass*                                              InItemType;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCustomParamsStackContainer*                         InContainer;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InPriority;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2UX1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomParamsStackItem*                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DemoSettings.GetDemoFeatureReason
	 */
	struct UDemoSettings_GetDemoFeatureReason_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DespawnUtils.RemoveLingering
	 */
	struct UDespawnUtils_RemoveLingering_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                LingeringReason;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Delay;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DespawnUtils.MarkLingering
	 */
	struct UDespawnUtils_MarkLingering_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                LingeringReason;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DespawnUtils.MakeLinger
	 */
	struct UDespawnUtils_MakeLinger_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                LingeringReason;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DespawnUtils.IsLingering
	 */
	struct UDespawnUtils_IsLingering_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCameraShake.SetShakeScale
	 */
	struct UDSCameraShake_SetShakeScale_Params
	{
	public:
		float                                                      NewShakeScale;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCapsuleComponent.UpdateCollisionRequestToProfile
	 */
	struct UDSCapsuleComponent_UpdateCollisionRequestToProfile_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NewCollisionProfileName;                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCapsuleComponent.UpdateCollisionRequestToCustom
	 */
	struct UDSCapsuleComponent_UpdateCollisionRequestToCustom_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCapsuleCustomCollisionParams                       NewParams;                                               // 0x0010(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCapsuleComponent.RemoveCollisionRequest
	 */
	struct UDSCapsuleComponent_RemoveCollisionRequest_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCapsuleComponent.AddCustomCollisionRequest
	 */
	struct UDSCapsuleComponent_AddCustomCollisionRequest_Params
	{
	public:
		class FName                                                RequestReason;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCapsuleCustomCollisionParams                       Params;                                                  // 0x0008(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSCapsuleComponent.AddCollisionProfileRequest
	 */
	struct UDSCapsuleComponent_AddCollisionProfileRequest_Params
	{
	public:
		class FName                                                RequestReason;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                CollisionProfileName;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSComponentBlueprintFunctionLibrary.CreateSceneComponent
	 */
	struct UDSComponentBlueprintFunctionLibrary_CreateSceneComponent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ComponentClass;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InstanceName;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisibleInComponentHierarchy;                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsRootComponent;                                        // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RNSA[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     ParentComponent;                                         // 0x0020(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     ReturnValue;                                             // 0x0028(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.TranslateConstraintPosition
	 */
	struct UDSPhysicsUtils_TranslateConstraintPosition_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMeshComp;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             PositionDelta;                                           // 0x0010(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                CoordinateSpaceBone;                                     // 0x001C(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.SetAllPhysicsAngularVelocity
	 */
	struct UDSPhysicsUtils_SetAllPhysicsAngularVelocity_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMeshComp;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewAngVel;                                               // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAddToCurrent;                                           // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.PutAllBodiesToSleep
	 */
	struct UDSPhysicsUtils_PutAllBodiesToSleep_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMeshComp;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.GetVectorSpringVelocity
	 */
	struct UDSPhysicsUtils_GetVectorSpringVelocity_Params
	{
	public:
		struct FVector                                             CurrentPosition;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             CurrentVelocity;                                         // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SpringConstant;                                          // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SpringDamping;                                           // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.GetSpringVelocity
	 */
	struct UDSPhysicsUtils_GetSpringVelocity_Params
	{
	public:
		float                                                      CurrentPosition;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CurrentVelocity;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SpringConstant;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SpringDamping;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.ExpLerpV
	 */
	struct UDSPhysicsUtils_ExpLerpV_Params
	{
	public:
		struct FVector                                             X;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetX;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxRate;                                                 // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.ExpLerp
	 */
	struct UDSPhysicsUtils_ExpLerp_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TargetX;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxRate;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.DSVectorSpringSetVel
	 */
	struct UDSPhysicsUtils_DSVectorSpringSetVel_Params
	{
	public:
		struct FVector                                             NewVel;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDSVectorSpringState                                SpringState;                                             // 0x000C(0x0018)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.DSVectorSpringSetPos
	 */
	struct UDSPhysicsUtils_DSVectorSpringSetPos_Params
	{
	public:
		struct FVector                                             NewPos;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDSVectorSpringState                                SpringState;                                             // 0x000C(0x0018)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.DSVectorSpringInterp
	 */
	struct UDSPhysicsUtils_DSVectorSpringInterp_Params
	{
	public:
		struct FVector                                             TargetPos;                                               // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDSVectorSpringState                                SpringState;                                             // 0x000C(0x0018)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      SpringConstant;                                          // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SpringDamping;                                           // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.DSVectorSpringAddToVel
	 */
	struct UDSPhysicsUtils_DSVectorSpringAddToVel_Params
	{
	public:
		struct FVector                                             AddToVel;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDSVectorSpringState                                SpringState;                                             // 0x000C(0x0018)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.DSVectorSpringAddToPos
	 */
	struct UDSPhysicsUtils_DSVectorSpringAddToPos_Params
	{
	public:
		struct FVector                                             AddToPos;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDSVectorSpringState                                SpringState;                                             // 0x000C(0x0018)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.DSFloatSpringSetVel
	 */
	struct UDSPhysicsUtils_DSFloatSpringSetVel_Params
	{
	public:
		float                                                      NewVel;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDSFloatSpringState                                 SpringState;                                             // 0x0004(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.DSFloatSpringSetPos
	 */
	struct UDSPhysicsUtils_DSFloatSpringSetPos_Params
	{
	public:
		float                                                      NewPos;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDSFloatSpringState                                 SpringState;                                             // 0x0004(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.DSFloatSpringInterp
	 */
	struct UDSPhysicsUtils_DSFloatSpringInterp_Params
	{
	public:
		float                                                      TargetPos;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDSFloatSpringState                                 SpringState;                                             // 0x0004(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      SpringConstant;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SpringDamping;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.DSFloatSpringAddToVel
	 */
	struct UDSPhysicsUtils_DSFloatSpringAddToVel_Params
	{
	public:
		float                                                      AddToVel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDSFloatSpringState                                 SpringState;                                             // 0x0004(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.DSFloatSpringAddToPos
	 */
	struct UDSPhysicsUtils_DSFloatSpringAddToPos_Params
	{
	public:
		float                                                      AddToPos;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDSFloatSpringState                                 SpringState;                                             // 0x0004(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.DirectionalExpLerpV
	 */
	struct UDSPhysicsUtils_DirectionalExpLerpV_Params
	{
	public:
		struct FVector                                             X;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetX;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxRate;                                                 // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.BoxSphereIntersection
	 */
	struct UDSPhysicsUtils_BoxSphereIntersection_Params
	{
	public:
		struct FTransform                                          BoxTransform;                                            // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             BoxExtents;                                              // 0x0030(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             SpherePosition;                                          // 0x003C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SphereRadius;                                            // 0x0048(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x004C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.BoxPlaneTest
	 */
	struct UDSPhysicsUtils_BoxPlaneTest_Params
	{
	public:
		struct FPlane                                              Plane;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          BoxTranform;                                             // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             BoxExtents;                                              // 0x0040(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.BoxPlaneIntersection
	 */
	struct UDSPhysicsUtils_BoxPlaneIntersection_Params
	{
	public:
		struct FPlane                                              Plane;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          BoxTranform;                                             // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             BoxExtents;                                              // 0x0040(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x004C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.ApproxOneMinusExp
	 */
	struct UDSPhysicsUtils_ApproxOneMinusExp_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.DSPhysicsUtils.ApproxExp
	 */
	struct UDSPhysicsUtils_ApproxExp_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ExclusiveUser.HasExclusiveUser
	 */
	struct UExclusiveUser_HasExclusiveUser_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ExclusiveUser.ClearExclusiveUser
	 */
	struct UExclusiveUser_ClearExclusiveUser_Params
	{	};

	/**
	 * Function DSFramework.ExclusiveUser.AcquireExclusiveUser
	 */
	struct UExclusiveUser_AcquireExclusiveUser_Params
	{
	public:
		int32_t                                                    ControllerIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.FadeableAttachmentInterface.SetFadeValue
	 */
	struct UFadeableAttachmentInterface_SetFadeValue_Params
	{
	public:
		float                                                      FadeValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.FeatureAvailabilityManager.RemoveUnavailableReasonFor
	 */
	struct UFeatureAvailabilityManager_RemoveUnavailableReasonFor_Params
	{
	public:
		class FName                                                Feature;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Reason;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.FeatureAvailabilityManager.IsFeatureAvailable
	 */
	struct UFeatureAvailabilityManager_IsFeatureAvailable_Params
	{
	public:
		class FName                                                Feature;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.FeatureAvailabilityManager.AddUnavailableReasonFor
	 */
	struct UFeatureAvailabilityManager_AddUnavailableReasonFor_Params
	{
	public:
		class FName                                                Feature;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Reason;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxMultiKeyIcon.SetKeys
	 */
	struct UGFxMultiKeyIcon_SetKeys_Params
	{
	public:
		struct FKey                                                Key1;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                Key2;                                                    // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxActionIcon.SetAction
	 */
	struct UGFxActionIcon_SetAction_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCanSendChangedEvent;                                    // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxActionIcon.OnHoldProgress
	 */
	struct UGFxActionIcon_OnHoldProgress_Params
	{
	public:
		EInputActionHoldEventType                                  Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MM8S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ProgressPct;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxActionIcon.OnActionOverrideConfigChanged
	 */
	struct UGFxActionIcon_OnActionOverrideConfigChanged_Params
	{
	public:
		class UInputMapperActionOverrideConfig*                    Config;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxCompareIcon.ShowInt
	 */
	struct UGFxCompareIcon_ShowInt_Params
	{
	public:
		int32_t                                                    ShowValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    BaseValue;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxCompareIcon.ShowFloat
	 */
	struct UGFxCompareIcon_ShowFloat_Params
	{
	public:
		float                                                      ShowValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BaseValue;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxCompareIcon.Hide
	 */
	struct UGFxCompareIcon_Hide_Params
	{	};

	/**
	 * Function DSFramework.GFxDeltaProgressBar.Tick
	 */
	struct UGFxDeltaProgressBar_Tick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDeltaProgressBar.ShortcutAnimation
	 */
	struct UGFxDeltaProgressBar_ShortcutAnimation_Params
	{	};

	/**
	 * Function DSFramework.GFxDeltaProgressBar.SetUseAnimation
	 */
	struct UGFxDeltaProgressBar_SetUseAnimation_Params
	{
	public:
		bool                                                       bInUseAnimation;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDeltaProgressBar.SetShowProgressValues
	 */
	struct UGFxDeltaProgressBar_SetShowProgressValues_Params
	{
	public:
		float                                                      BaseValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CompareValue;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDeltaProgressBar.SetShowProgressValue
	 */
	struct UGFxDeltaProgressBar_SetShowProgressValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxDeltaProgressBar.SetPlayProgressValue
	 */
	struct UGFxDeltaProgressBar_SetPlayProgressValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxImageStreamer.UnloadImage
	 */
	struct UGFxImageStreamer_UnloadImage_Params
	{	};

	/**
	 * Function DSFramework.GFxImageStreamer.StreamImage
	 */
	struct UGFxImageStreamer_StreamImage_Params
	{
	public:
		struct FSoftObjectPath                                     ImagePath;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxImageStreamer.SetImage
	 */
	struct UGFxImageStreamer_SetImage_Params
	{
	public:
		class UTexture2D*                                          Image;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxImageStreamer.IsShowingImage
	 */
	struct UGFxImageStreamer_IsShowingImage_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxProgressBar.SetProgressValue
	 */
	struct UGFxProgressBar_SetProgressValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForce;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxProgressBar.IsEmpty
	 */
	struct UGFxProgressBar_IsEmpty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxTextfield.SetTextColor
	 */
	struct UGFxTextfield_SetTextColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxTextfield.SetText
	 */
	struct UGFxTextfield_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxTextfield.GetTextWidth
	 */
	struct UGFxTextfield_GetTextWidth_Params
	{
	public:
		float                                                      OutWidth;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxTextfield.GetTextHTML
	 */
	struct UGFxTextfield_GetTextHTML_Params
	{
	public:
		class FString                                              OutText;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxTextfield.GetTextHeight
	 */
	struct UGFxTextfield_GetTextHeight_Params
	{
	public:
		float                                                      OutHeight;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxTextfield.GetText
	 */
	struct UGFxTextfield_GetText_Params
	{
	public:
		class FString                                              OutText;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxUIAligner.RefreshPositions
	 */
	struct UGFxUIAligner_RefreshPositions_Params
	{
	public:
		bool                                                       bUpdatePositionsImmediately;                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GFxUIAligner.RefreshElements
	 */
	struct UGFxUIAligner_RefreshElements_Params
	{
	public:
		bool                                                       bUpdatePositionsImmediately;                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GlobalFactsFunctionLibrary.IsLocalGameWorldObscured
	 */
	struct UGlobalFactsFunctionLibrary_IsLocalGameWorldObscured_Params
	{
	public:
		class AActor*                                              ContextActor;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.GlobalFactsFunctionLibrary.IsGameWorldObscured
	 */
	struct UGlobalFactsFunctionLibrary_IsGameWorldObscured_Params
	{
	public:
		class AActor*                                              ContextActor;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PossessionListenerInterface.OnUnPossess
	 */
	struct UPossessionListenerInterface_OnUnPossess_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDummyOutput;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PossessionListenerInterface.OnPreUnPossess
	 */
	struct UPossessionListenerInterface_OnPreUnPossess_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDummyOutput;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PossessionListenerInterface.OnPossess
	 */
	struct UPossessionListenerInterface_OnPossess_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDummyOutput;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemAssignmentShortcutGroupInstance.SwapItemShortcut
	 */
	struct UItemAssignmentShortcutGroupInstance_SwapItemShortcut_Params
	{
	public:
		class AItemActor*                                          Item1;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index1;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3C2I[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AItemActor*                                          Item2;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index2;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemAssignmentShortcutGroupInstance.SetSelectedItem
	 */
	struct UItemAssignmentShortcutGroupInstance_SetSelectedItem_Params
	{
	public:
		int32_t                                                    ShortcutIndexIn;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemAssignmentShortcutGroupInstance.ServerAssignShortcutGroup
	 */
	struct UItemAssignmentShortcutGroupInstance_ServerAssignShortcutGroup_Params
	{
	public:
		class UEquippableComponent*                                ShortcutItem;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ShortcutIndex;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemAssignmentShortcutGroupInstance.SelectPreviousItem
	 */
	struct UItemAssignmentShortcutGroupInstance_SelectPreviousItem_Params
	{	};

	/**
	 * Function DSFramework.ItemAssignmentShortcutGroupInstance.SelectNextItem
	 */
	struct UItemAssignmentShortcutGroupInstance_SelectNextItem_Params
	{	};

	/**
	 * Function DSFramework.ItemAssignmentShortcutGroupInstance.RemoveItemShortcut
	 */
	struct UItemAssignmentShortcutGroupInstance_RemoveItemShortcut_Params
	{
	public:
		class UEquippableComponent*                                ItemToRemove;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemAssignmentShortcutGroupInstance.GetSelectedItemEvenIfBroken
	 */
	struct UItemAssignmentShortcutGroupInstance_GetSelectedItemEvenIfBroken_Params
	{
	public:
		class UEquippableComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemAssignmentShortcutGroupInstance.GetLastSelectedItem
	 */
	struct UItemAssignmentShortcutGroupInstance_GetLastSelectedItem_Params
	{
	public:
		class UEquippableComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemAssignmentShortcutGroupInstance.GetItemAtShortcutIndex
	 */
	struct UItemAssignmentShortcutGroupInstance_GetItemAtShortcutIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_50HI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AItemActor*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemAssignmentShortcutGroupInstance.GetIndexForShortcutItem
	 */
	struct UItemAssignmentShortcutGroupInstance_GetIndexForShortcutItem_Params
	{
	public:
		class AItemActor*                                          QueryItem;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemAssignmentShortcutGroupInstance.GetEquippableAtShortcutIndex
	 */
	struct UItemAssignmentShortcutGroupInstance_GetEquippableAtShortcutIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZW7B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UEquippableComponent*                                ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemAssignmentShortcutGroupInstance.ClientInitialize
	 */
	struct UItemAssignmentShortcutGroupInstance_ClientInitialize_Params
	{
	public:
		TArray<struct FGuid>                                       InClientShortcutIds;                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    InSelectedShortcut;                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemAssignmentShortcutGroupInstance.CanEquip
	 */
	struct UItemAssignmentShortcutGroupInstance_CanEquip_Params
	{
	public:
		class UEquippableComponent*                                Equippable;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemAssignmentShortcutGroupInstance.AssignItemShortcut
	 */
	struct UItemAssignmentShortcutGroupInstance_AssignItemShortcut_Params
	{
	public:
		class UEquippableComponent*                                Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemFactoryManager.FindOrCreateFactory
	 */
	struct AItemFactoryManager_FindOrCreateFactory_Params
	{
	public:
		class UItemArchetype*                                      ItemArchetype;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemHelpers.CreateItem
	 */
	struct UItemHelpers_CreateItem_Params
	{
	public:
		class UObject*                                             Outer;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItemArchetype*                                      ItemArchetype;                                           // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItemInstanceData*                                   InstanceData;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemActor*                                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemStatDisplayInfo.GetStatGroup
	 */
	struct UItemStatDisplayInfo_GetStatGroup_Params
	{
	public:
		class FName                                                StatGroupIdentifier;                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        ReturnValue;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemStatDisplayInfo.GetStatContibutors
	 */
	struct UItemStatDisplayInfo_GetStatContibutors_Params
	{
	public:
		TArray<struct FItemStatContributorData>                    ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemStatDisplayInfo.GetStatContibutorInfo
	 */
	struct UItemStatDisplayInfo_GetStatContibutorInfo_Params
	{
	public:
		class FName                                                ContributorIdentifier;                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FItemStatContributorData                            ReturnValue;                                             // 0x0008(0x0040)  (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.ItemStatDisplayInfo.GetDisplayInfo
	 */
	struct UItemStatDisplayInfo_GetDisplayInfo_Params
	{
	public:
		class FName                                                StatType;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FItemStatDisplayRules                               ReturnValue;                                             // 0x0008(0x0040)  (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.LookAtTargetCameraModifier.SetTargetPosition
	 */
	struct ULookAtTargetCameraModifier_SetTargetPosition_Params
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.MissionCompletionChallengeRuntimeObject.OnMissionStateChanged
	 */
	struct UMissionCompletionChallengeRuntimeObject_OnMissionStateChanged_Params
	{
	public:
		class UMissionInstance*                                    MissionInstance;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMissionState                                              NewState;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMissionState                                              LeavingState;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.OptionsManager.GetPresentationProxy
	 */
	struct UOptionsManager_GetPresentationProxy_Params
	{
	public:
		struct FGuid                                               InHierarchyGuid;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InOptionPath;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPresentationProxy*                                  ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.OptionsManager.GetOptionStringValue
	 */
	struct UOptionsManager_GetOptionStringValue_Params
	{
	public:
		struct FGuid                                               InHierarchyGuid;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InOptionPath;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutOptionValue;                                          // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.OptionsManager.GetOptionIntValue
	 */
	struct UOptionsManager_GetOptionIntValue_Params
	{
	public:
		struct FGuid                                               InHierarchyGuid;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InOptionPath;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutOptionValue;                                          // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.OptionsManager.GetOptionFloatValue
	 */
	struct UOptionsManager_GetOptionFloatValue_Params
	{
	public:
		struct FGuid                                               InHierarchyGuid;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InOptionPath;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutOptionValue;                                          // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.OptionsManager.GetOptionBoolValue
	 */
	struct UOptionsManager_GetOptionBoolValue_Params
	{
	public:
		struct FGuid                                               InHierarchyGuid;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InOptionPath;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OutOptionValue;                                          // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.OptionsManager.GetGuidForOptionsHierarchy
	 */
	struct UOptionsManager_GetGuidForOptionsHierarchy_Params
	{
	public:
		class FString                                              InOptionsHierarchyPath;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.OptionStoragePersistentData.OnSetUserProfilePath
	 */
	struct UOptionStoragePersistentData_OnSetUserProfilePath_Params
	{
	public:
		class FString                                              InUserProfilePath;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PaperDollSlot.ServerAssignItem
	 */
	struct UPaperDollSlot_ServerAssignItem_Params
	{
	public:
		class UEquippableComponent*                                Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PaperDollSlot.OnRep_AuthorityAssignedItem
	 */
	struct UPaperDollSlot_OnRep_AuthorityAssignedItem_Params
	{	};

	/**
	 * Function DSFramework.PaperDollSlot.OnItemReadyForRemoval
	 */
	struct UPaperDollSlot_OnItemReadyForRemoval_Params
	{
	public:
		class UEquippableComponent*                                EquippableItem;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PaperDollSlot.GetUser
	 */
	struct UPaperDollSlot_GetUser_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PaperDollSlotGroup.K2_SelectedItemChanged
	 */
	struct UPaperDollSlotGroup_K2_SelectedItemChanged_Params
	{	};

	/**
	 * Function DSFramework.PaperDollState.OnRep_PaperDollUser
	 */
	struct APaperDollState_OnRep_PaperDollUser_Params
	{	};

	/**
	 * Function DSFramework.PlayerUtils.BlueprintIsLocallyControlledPlayerFromPawn
	 */
	struct UPlayerUtils_BlueprintIsLocallyControlledPlayerFromPawn_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PlayerUtils.BlueprintIsLocallyControlledPlayerFromController
	 */
	struct UPlayerUtils_BlueprintIsLocallyControlledPlayerFromController_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.PlayerUtils.BlueprintIsLocallyControlledPlayerFromActor
	 */
	struct UPlayerUtils_BlueprintIsLocallyControlledPlayerFromActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.RequestCharacterActionCallbackProxy.OnResolvedAction
	 */
	struct URequestCharacterActionCallbackProxy_OnResolvedAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterActionOnResolvedParams                    ResolvedParams;                                          // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.RequestCharacterActionCallbackProxy.OnEndAction
	 */
	struct URequestCharacterActionCallbackProxy_OnEndAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterActionOnEndParams                         EndParams;                                               // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.RequestCharacterActionCallbackProxy.OnCustomSignalReceived
	 */
	struct URequestCharacterActionCallbackProxy_OnCustomSignalReceived_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterActionOnCustomSignalParams                CustomSignalParams;                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.RequestCharacterActionCallbackProxy.OnCancelledAction
	 */
	struct URequestCharacterActionCallbackProxy_OnCancelledAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterActionOnCancelledParams                   CancelledParams;                                         // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.RequestCharacterActionCallbackProxy.OnBeginAction
	 */
	struct URequestCharacterActionCallbackProxy_OnBeginAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterActionOnBeginParams                       BeginParams;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.RequestCharacterActionCallbackProxy.IsRequestValid
	 */
	struct URequestCharacterActionCallbackProxy_IsRequestValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.RequestCharacterActionCallbackProxy.EndAction
	 */
	struct URequestCharacterActionCallbackProxy_EndAction_Params
	{
	public:
		ECharacterActionEndReason                                  Reason;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5SRB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DelayTime;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWaitForActionEnd;                                       // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.RequestCharacterActionCallbackProxy.CreateProxyObjectForRequestCharacterAction
	 */
	struct URequestCharacterActionCallbackProxy_CreateProxyObjectForRequestCharacterAction_Params
	{
	public:
		class UCharacterActionComponent*                           InCharacterActionComponent;                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterActionRequestParams                       RequestParams;                                           // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		ECharacterActionHelperReferenceType                        InReferenceType;                                         // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EFLW[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuid                                               OutRequestId;                                            // 0x002C(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_00NS[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URequestCharacterActionCallbackProxy*                ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.RequestCharacterActionCallbackProxy.Activate
	 */
	struct URequestCharacterActionCallbackProxy_Activate_Params
	{	};

	/**
	 * Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.OnResolvedAction
	 */
	struct URequestCharacterActionOnMultipleActorsCallbackProxy_OnResolvedAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterActionOnResolvedParams                    ResolvedParams;                                          // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.OnEndAction
	 */
	struct URequestCharacterActionOnMultipleActorsCallbackProxy_OnEndAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterActionOnEndParams                         EndParams;                                               // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.OnCancelledAction
	 */
	struct URequestCharacterActionOnMultipleActorsCallbackProxy_OnCancelledAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterActionOnCancelledParams                   CancelledParams;                                         // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.OnBeginAction
	 */
	struct URequestCharacterActionOnMultipleActorsCallbackProxy_OnBeginAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharacterActionOnBeginParams                       BeginParams;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.EndAllActions
	 */
	struct URequestCharacterActionOnMultipleActorsCallbackProxy_EndAllActions_Params
	{
	public:
		ECharacterActionEndReason                                  Reason;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.CreateProxyObjectForRequestCharacterAction
	 */
	struct URequestCharacterActionOnMultipleActorsCallbackProxy_CreateProxyObjectForRequestCharacterAction_Params
	{
	public:
		TArray<class AActor*>                                      Actors;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FCharacterActionRequestParams                       RequestParams;                                           // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		ECharacterActionHelperReferenceType                        InReferenceType;                                         // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8ETY[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URequestCharacterActionOnMultipleActorsCallbackProxy* ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.SlomoManager.RemoveBlockReason
	 */
	struct ASlomoManager_RemoveBlockReason_Params
	{
	public:
		class FName                                                BlockReason;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.SlomoManager.GetTimeDilation
	 */
	struct ASlomoManager_GetTimeDilation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.SlomoManager.GetSlomoManager
	 */
	struct ASlomoManager_GetSlomoManager_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASlomoManager*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.SlomoManager.EndSlomoRequest
	 */
	struct ASlomoManager_EndSlomoRequest_Params
	{
	public:
		struct FSlomoHandle                                        Handle;                                                  // 0x0000(0x0020)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bBlendOut;                                               // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.SlomoManager.DoesGroupExist
	 */
	struct ASlomoManager_DoesGroupExist_Params
	{
	public:
		class FName                                                Group;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.SlomoManager.AnySlomoActive
	 */
	struct ASlomoManager_AnySlomoActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.SlomoManager.AddStateSlomoRequest
	 */
	struct ASlomoManager_AddStateSlomoRequest_Params
	{
	public:
		struct FStateSlomoRequest                                  Request;                                                 // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_68A7[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlomoHandle                                        ReturnValue;                                             // 0x0020(0x0020)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.SlomoManager.AddSlomoRequest
	 */
	struct ASlomoManager_AddSlomoRequest_Params
	{
	public:
		struct FSlomoRequest                                       Request;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FSlomoHandle                                        ReturnValue;                                             // 0x0020(0x0020)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.SlomoManager.AddBlockReason
	 */
	struct ASlomoManager_AddBlockReason_Params
	{
	public:
		class FName                                                BlockReason;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSFramework.StatChallengeRuntimeObject.IncrementCallback
	 */
	struct UStatChallengeRuntimeObject_IncrementCallback_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Delta;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StatAndContexts;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EStatBindType                                              BindType;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
