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
	 * Class ActorGrouping.ActorGroupFeederObject
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UActorGroupFeederObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_SL6Q[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActorGrouping.ActorGroupFeederObject_Spatial
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UActorGroupFeederObject_Spatial : public UActorGroupFeederObject
	{
	public:
		unsigned char                                              UnknownData_EDKW[0x30];                                  // 0x0038(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnEndOverlap(class UTriggerInteractorComponent* Interactor);
		void OnBeginOverlap(class UTriggerInteractorComponent* Interactor);
		static UClass* StaticClass();
	};

	/**
	 * Class ActorGrouping.ActorGroupFilter
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UActorGroupFilter : public UObject
	{
	public:
		class FName                                                Name;                                                    // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K4ID[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		bool CanBeAdded(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class ActorGrouping.ActorGroupFilter_True
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UActorGroupFilter_True : public UActorGroupFilter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActorGrouping.ActorGroupFilter_False
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UActorGroupFilter_False : public UActorGroupFilter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActorGrouping.ActorGroupMemberComponent
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UActorGroupMemberComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_0N5I[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActorGrouping.ActorGroupOwnerComponent
	 * Size -> 0x0148 (FullSize[0x0230] - InheritedSize[0x00E8])
	 */
	class UActorGroupOwnerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_89FF[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FActorGroupEditorSettings                           ActorGroupEditorSettings;                                // 0x00F0(0x0010) Edit, NativeAccessSpecifierPrivate
		TMap<EActorGroupCallbackType, class UGameEvent*>           GameEvents;                                              // 0x0100(0x0050) Edit, ExportObject, DisableEditOnTemplate, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UGameEventState*                                     GameEventState;                                          // 0x0150(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FActorGroupOwnerEvent>                       ConditionalEvents;                                       // 0x0158(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, NativeAccessSpecifierPrivate
		int32_t                                                    MaximumGroupSize;                                        // 0x0168(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y3SI[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UActorGroupFilter*>                           FiltersThatMustPass;                                     // 0x0170(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UActorGroupFilter*>                           FiltersThatOneMustPass;                                  // 0x0180(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FScopedKnowledgeBaseExpressionListener              ActiveExpression;                                        // 0x0190(0x0060) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4ZFS[0x38];                                  // 0x01F0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMultiActorGameEventStateHandler*                    GameEventStateHandler;                                   // 0x0228(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void RemoveListener(const class FScriptDelegate& ActorGroupCallback, EActorGroupCallbackType ActorGroupCallbackType);
		void RemoveAllListenersOfCallbackType(class UObject* Object, EActorGroupCallbackType ActorGroupCallbackType);
		void RemoveAllListeners(class UObject* Object);
		bool IsActorInGroup(class AActor* Actor);
		int32_t GetNumberOfMembers();
		void DisbandGroup();
		void ApplyToAllMembersDelegate(const class FScriptDelegate& ForEachMemberCallback);
		void AddListener(const class FScriptDelegate& ActorGroupCallback, EActorGroupCallbackType ActorGroupCallbackType);
		void AddGameEventStateResponse(class UGameEventStateResponse* StateResponse);
		static UClass* StaticClass();
	};

	/**
	 * Class ActorGrouping.ActorSpatialGroupOwnerComponent
	 * Size -> 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
	 */
	class UActorSpatialGroupOwnerComponent : public UActorGroupOwnerComponent
	{
	public:
		bool                                                       bAddToGroupWhenActorEntersTrigger;                       // 0x0230(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRemoveFromGroupWhenActorLeavesTrigger;                  // 0x0231(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5IDU[0x6];                                   // 0x0232(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UActorGroupFilter*>                           FiltersToStopRemovalOfMembers;                           // 0x0238(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UActorGroupFeederObject_Spatial*                     SpatialFeeder;                                           // 0x0248(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetTriggerComponent(class UTriggerShapeComponent* InTriggerComponent);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
