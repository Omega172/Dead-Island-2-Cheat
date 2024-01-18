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
	 * Class MissionSystem.CampaignData
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UCampaignData : public UObject
	{
	public:
		class UMissionFlow*                                        Flow;                                                    // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RIP5[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        CustomTags;                                              // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IOU7[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)

	public:
		bool HasCustomTag(const class FName& InTag);
		class UCampaignInstance* CreateInstance(class AActor* Parent);
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.CampaignInstance
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UCampaignInstance : public UObject
	{
	public:
		unsigned char                                              UnknownData_11YH[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCampaignData*                                       CampaignData;                                            // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class UMissionFlowNode*, class UMissionFlowNodeInstanceDataCollectionBase*> MissionFlowNodeToInstanceData;                           // 0x0040(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R62G[0x18];                                  // 0x0090(0x0018) MISSED OFFSET (PADDING)

	public:
		class FString GetDisplayName();
		class UObjectiveInstance* FindObjectiveInstanceOrNull(class UObjectiveData* ObjectiveData);
		class UMissionInstance* FindMissionInstanceOrNull(class UMissionData* MissionData);
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.DebugSkipPathShortcut
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UDebugSkipPathShortcut : public UObject
	{
	public:
		class UObjectiveData*                                      ShortcutEnd;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ShortcutPathStartName;                                   // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionController
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class AMissionController : public AInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionData
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UMissionData : public UObject
	{
	public:
		class FText                                                DisplayName;                                             // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UObjectiveFlow*                                      ObjectiveFlow;                                           // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMissionType*                                        MissionType;                                             // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S255[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        CustomTags;                                              // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		bool HasCustomTag(const class FName& InTag);
		class UMissionInstance* GetUniqueMissionInstance(class UObject* WorldContextObject);
		TArray<class UObjectiveData*> GetAllObjectives();
		bool ContainsObjective(class UObjectiveData* ObjectiveData);
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionFlow
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UMissionFlow : public UObject
	{
	public:
		TArray<class UMissionFlowNode*>                            Nodes;                                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMissionNodeComment>                         Comments;                                                // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionFlowNodeInstanceDataCollectionBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMissionFlowNodeInstanceDataCollectionBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionNode
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMissionNode : public UObject
	{
	public:
		int32_t                                                    DebugNodePosX;                                           // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DebugNodePosY;                                           // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATSA[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionFlowNode
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UMissionFlowNode : public UMissionNode
	{
	public:
		TArray<class UMissionFlowNode*>                            ParentNodes;                                             // 0x0038(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UMissionFlowNode*>                            ChildNodes;                                              // 0x0048(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XCKH[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionFlowNode_AnyInstanceDataCollection
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UMissionFlowNode_AnyInstanceDataCollection : public UMissionFlowNodeInstanceDataCollectionBase
	{
	public:
		unsigned char                                              UnknownData_YNPS[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionFlowNode_Any
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMissionFlowNode_Any : public UMissionFlowNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionFlowNode_MissionInstanceDataCollection
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UMissionFlowNode_MissionInstanceDataCollection : public UMissionFlowNodeInstanceDataCollectionBase
	{
	public:
		class UMissionInstance*                                    MissionInstance;                                         // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionFlowNode_Mission
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UMissionFlowNode_Mission : public UMissionFlowNode
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRepeat;                                                 // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DCIH[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		void RepeatMission(class UCampaignInstance* CampainInstance);
		void OnMissionStateChangedInternal(class UMissionInstance* InMissionInstance, EMissionState NewState, EMissionState LeavingState);
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionFlowNode_PrerequisitesInstanceDataCollection
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UMissionFlowNode_PrerequisitesInstanceDataCollection : public UMissionFlowNodeInstanceDataCollectionBase
	{
	public:
		unsigned char                                              UnknownData_HK0O[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionFlowNode_Prerequisites
	 * Size -> 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
	 */
	class UMissionFlowNode_Prerequisites : public UMissionFlowNode
	{
	public:
		TArray<class UMissionData*>                                MissionsToComplete;                                      // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UObjectiveData*>                              ObjectivesToComplete;                                    // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZJZO[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionDataPersistentDataCollection
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UMissionDataPersistentDataCollection : public UPersistentDataCollectionBase
	{
	public:
		EMissionState                                              State;                                                   // 0x0048(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZN2V[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionCheckpointPersistentDataCollection
	 * Size -> 0x0050 (FullSize[0x0098] - InheritedSize[0x0048])
	 */
	class UMissionCheckpointPersistentDataCollection : public UPersistentDataCollectionBase
	{
	public:
		unsigned char                                              CompletedObjectives[0x50];                               // 0x0048(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionInstance
	 * Size -> 0x0120 (FullSize[0x0148] - InheritedSize[0x0028])
	 */
	class UMissionInstance : public UObject
	{
	public:
		unsigned char                                              UnknownData_M5YC[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStateChanged;                                          // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8IZU[0x28];                                  // 0x0040(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionData*                                        MissionData;                                             // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UObjectiveInstance*>                          AllObjectives;                                           // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UMissionDataPersistentDataCollection*                MissionPersistentDataCollection;                         // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMissionCheckpointPersistentDataCollection*          SoftCheckpointPersistentDataCollection;                  // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMissionCheckpointPersistentDataCollection*          HardCheckpointPersistentDataCollection;                  // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RE0I[0xB0];                                  // 0x0098(0x00B0) MISSED OFFSET (PADDING)

	public:
		EMissionState GetState();
		class UMissionType* GetMissionType();
		class FText GetDisplayName();
		TArray<class UObjectiveInstance*> GetAllObjectives();
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionSystemManager
	 * Size -> 0x0268 (FullSize[0x0290] - InheritedSize[0x0028])
	 */
	class UMissionSystemManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_083I[0x88];                                  // 0x0028(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCampaignInstance*>                           ActiveCampaigns;                                         // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UMissionInstance*>                            ActiveMissions;                                          // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WLGI[0x20];                                  // 0x00D0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObjectiveInstance*>                          UnpairedObjectiveInstances;                              // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5FH3[0x190];                                 // 0x0100(0x0190) MISSED OFFSET (PADDING)

	public:
		bool StartExternallyTriggered(class UMissionInstance* MissionInstance);
		void StartCampaignInstance(class UCampaignInstance* CampaignInstance, class AActor* WorldContextObject);
		void OnObjectiveStateChangedInternal(class UObjectiveInstance* ObjectiveInstance, EObjectiveState NewState, EObjectiveState LeavingState);
		void OnMissionStateChangedInternal(class UMissionInstance* MissionInstance, EMissionState NewState, EMissionState LeavingState);
		void OnMissionCheckpointReached(class UMissionInstance* InMissionInstance);
		class AObjectiveActor* GetObjectiveActorFor(class UObjectiveData* ObjectiveData);
		TArray<class UMissionInstance*> GetAllMissions();
		TArray<class UMissionInstance*> GetActiveMissions();
		class UMissionSystemManager* Get(class UObject* WorldContextObject);
		void EndCampaignInstance(class UCampaignInstance* CampaignInstance);
		void BufferedHasUnsavedProgressCheck();
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.MissionType
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UMissionType : public UObject
	{
	public:
		class FText                                                DisplayName;                                             // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bExternallyTriggered;                                    // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2W6Z[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.ObjectiveActor
	 * Size -> 0x0050 (FullSize[0x0300] - InheritedSize[0x02B0])
	 */
	class AObjectiveActor : public AActor
	{
	public:
		class UObjectiveData*                                      ObjectiveData;                                           // 0x02B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObjectiveInstance*                                  ObjectiveInstance;                                       // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameEvent*                                          ObjectiveStartedGameEvent;                               // 0x02C0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameEventState*                                     ObjectiveInProgressStateEvent;                           // 0x02C8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameEvent*                                          ObjectiveCompleteGameEvent;                              // 0x02D0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T2QA[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlueprintLinks*                                     EditorBlueprintLinks;                                    // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TJU4[0x18];                                  // 0x02E8(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnWaitingStarted();
		void OnWaitingEnded();
		void OnObjectiveStarted();
		void OnObjectiveEnded();
		void OnGameplayStartedWhileObjectiveStarted();
		void OnFinishedStarted();
		void OnFinishedEnded();
		void ObjectiveFailed();
		void ObjectiveComplete();
		void InitialiseWithObjectiveInstance(class UObjectiveInstance* InObjectiveInstance);
		bool HasObjectiveStarted();
		bool HasObjectiveFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.ObjectiveData
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UObjectiveData : public UObject
	{
	public:
		unsigned char                                              UnknownData_SD12[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ObjectiveActorTypeClass[0x28];                           // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		TArray<class FName>                                        CustomTags;                                              // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class FText                                                DisplayName;                                             // 0x0068(0x0018) Edit, NativeAccessSpecifierPrivate
		struct FVector                                             PersistentPosition;                                      // 0x0080(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ITDW[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

	public:
		bool HasCustomTag(const class FName& InTag);
		class UObjectiveInstance* GetUniqueObjectiveInstance(class UObject* WorldContextObject);
		struct FVector GetPersistentPosition();
		class FText GetDisplayName();
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.ObjectiveFlow
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UObjectiveFlow : public UObject
	{
	public:
		class UObjectiveFlowNode*                                  StartNode;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UObjectiveFlowNode*>                          Nodes;                                                   // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMissionNodeComment>                         Comments;                                                // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.ObjectiveFlowNodeInstanceDataCollectionBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UObjectiveFlowNodeInstanceDataCollectionBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.ObjectiveFlowNode
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UObjectiveFlowNode : public UMissionNode
	{
	public:
		TMap<class FName, struct FNodeLinksArray>                  PinNameToNodes;                                          // 0x0038(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_07EU[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.ObjectiveFlowNode_End
	 * Size -> 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
	 */
	class UObjectiveFlowNode_End : public UObjectiveFlowNode
	{
	public:
		TMap<class UMissionInstance*, class UObjectiveFlowNodeInstanceDataCollectionBase*> InstanceDatas;                                           // 0x0090(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.ObjectiveFlowNode_EndOptionalObjectives
	 * Size -> 0x0058 (FullSize[0x00E8] - InheritedSize[0x0090])
	 */
	class UObjectiveFlowNode_EndOptionalObjectives : public UObjectiveFlowNode
	{
	public:
		bool                                                       bRollBackToOnDeath;                                      // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRollBackToOnAbandonment;                                // 0x0091(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRollBackToOnRetry;                                      // 0x0092(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TGV4[0x5];                                   // 0x0093(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UMissionInstance*, class UObjectiveFlowNodeInstanceDataCollectionBase*> InstanceDatas;                                           // 0x0098(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.ObjectiveFlowNode_Logic
	 * Size -> 0x0058 (FullSize[0x00E8] - InheritedSize[0x0090])
	 */
	class UObjectiveFlowNode_Logic : public UObjectiveFlowNode
	{
	public:
		int32_t                                                    Required;                                                // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRollBackToOnDeath;                                      // 0x0094(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRollBackToOnAbandonment;                                // 0x0095(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRollBackToOnRetry;                                      // 0x0096(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J3HK[0x1];                                   // 0x0097(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UMissionInstance*, class UObjectiveFlowNodeInstanceDataCollectionBase*> InstanceDatas;                                           // 0x0098(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.ObjectiveFlowNode_ObjectiveInstanceDataCollection
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UObjectiveFlowNode_ObjectiveInstanceDataCollection : public UObjectiveFlowNodeInstanceDataCollectionBase
	{
	public:
		class UObjectiveInstance*                                  ObjectiveInstance;                                       // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.ObjectiveFlowNode_Objective
	 * Size -> 0x00C0 (FullSize[0x0150] - InheritedSize[0x0090])
	 */
	class UObjectiveFlowNode_Objective : public UObjectiveFlowNode
	{
	public:
		class UObjectiveData*                                      ObjectiveData;                                           // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRollBackToOnDeath;                                      // 0x0098(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRollBackToOnAbandonment;                                // 0x0099(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRollBackToOnRetry;                                      // 0x009A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsDebugCheckpoint;                                      // 0x009B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOverrideDefaultFailureResponseSettings;                 // 0x009C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4I9X[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FObjectiveFailureResponseSettings                   FailureResponseSettingsOverride;                         // 0x00A0(0x000C) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7L0H[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDebugSkipPathContainer                             DebugSkipPathContainer;                                  // 0x00B0(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class UMissionInstance*, class UObjectiveFlowNode_ObjectiveInstanceDataCollection*> InstanceDatas;                                           // 0x0100(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.ObjectiveFlowNode_Reroute
	 * Size -> 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
	 */
	class UObjectiveFlowNode_Reroute : public UObjectiveFlowNode
	{
	public:
		TMap<class UMissionInstance*, class UObjectiveFlowNodeInstanceDataCollectionBase*> InstanceDatas;                                           // 0x0090(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.ObjectiveFlowNode_Start
	 * Size -> 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
	 */
	class UObjectiveFlowNode_Start : public UObjectiveFlowNode
	{
	public:
		TMap<class UMissionInstance*, class UObjectiveFlowNodeInstanceDataCollectionBase*> InstanceDatas;                                           // 0x0090(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.ObjectivePersistentDataCollection
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UObjectivePersistentDataCollection : public UPersistentDataCollectionBase
	{
	public:
		EObjectiveState                                            State;                                                   // 0x0048(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B09H[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MissionSystem.ObjectiveInstance
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UObjectiveInstance : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnStateChanged;                                          // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GTML[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObjectiveData*                                      ObjectiveData;                                           // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UBPH[0x18];                                  // 0x0060(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObjectivePersistentDataCollection*                  ObjectivePersistentDataCollection;                       // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZHJS[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		EObjectiveState GetState();
		class UMissionInstance* GetMission();
		class FText GetDisplayName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
