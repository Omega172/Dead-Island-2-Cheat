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
	 * Class DSUtils.CustomParamsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomParamsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.DSActorBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDSActorBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class AActor* CreateActor(class AActor* ActorProvidingTransform, class UClass* ActorClass);
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.ActorPickerRecurringObject
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UActorPickerRecurringObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_LQ0R[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnOwningActorDestroyed(class AActor* Actor, EEndPlayReason EndPlayReason);
		void OnObjectLinkActorAdded(const class FName& Name, class AActor* Actor);
		void OnActorSupplied(class AActor* Actor);
		void OnAcquiredActorDestroyed(class AActor* Actor, EEndPlayReason EndPlayReason);
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.DSActorPickerFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDSActorPickerFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class AActor* TryToGetActor(class UObject* WorldContextObject, struct FDSActorPicker* ActorPicker, const class FScriptDelegate& Callback);
		void ShutdownRecurringActor(struct FDSActorPicker* ActorPicker);
		class AActor* GetActor(class UObject* WorldContextObject, const struct FDSActorPicker& ActorPicker);
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.DSLogChannelHandle
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UDSLogChannelHandle : public UObject
	{
	public:
		unsigned char                                              UnknownData_AQ0D[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.DSLogBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDSLogBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UDSLogChannelHandle* SetupLogger(class UObject* WorldContextObject, EDSLogDepartmentChannel DepartmentChannel, const class FString& AdditionalChannelSpecifier, EDSLogUploadBugsSetting UploadBugs, bool NoTelemetry, bool ShowOnce, bool ShowOnlyInPIE, bool ShowOncePerPIEInstance);
		void DSLog(class UObject* WorldContextObject, const class FString& LogText, class UDSLogChannelHandle* LoggerHandle, EDSLogVerbosity Verbosity, bool Condition);
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.EventInstigatorUtilities
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEventInstigatorUtilities : public UBlueprintFunctionLibrary
	{
	public:
		struct FWeakEventInstigator MakeWeakEventInstigator(class AController* Controller, class APawn* Pawn);
		struct FEventInstigator MakeEventInstigator(class AController* Controller, class APawn* Pawn);
		bool IsWeakInstigatorValid(const struct FWeakEventInstigator& Instigator);
		bool IsInstigatorValid(const struct FEventInstigator& Instigator);
		class APawn* GetWeakInstigatorPawn(const struct FWeakEventInstigator& Instigator);
		class AController* GetWeakInstigatorController(const struct FWeakEventInstigator& Instigator);
		class APawn* GetInstigatorPawn(const struct FEventInstigator& Instigator);
		class AController* GetInstigatorController(const struct FEventInstigator& Instigator);
		struct FEventInstigator EventInstigator_WeakToRaw(const struct FWeakEventInstigator& Instigator);
		struct FWeakEventInstigator EventInstigator_RawToWeak(const struct FEventInstigator& Instigator);
		void BreakWeakEventInstigator(const struct FWeakEventInstigator& Instigator, class AController** Controller, class APawn** Pawn);
		void BreakEventInstigator(const struct FEventInstigator& Instigator, class AController** Controller, class APawn** Pawn);
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.ActorSupplier
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActorSupplier : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.PredictiveMoveableActorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPredictiveMoveableActorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.NamedPriorityConfig
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UNamedPriorityConfig : public UDataAsset
	{
	public:
		TMap<class FName, int32_t>                                 Priorities;                                              // 0x0030(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.NetworkUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNetworkUtils : public UBlueprintFunctionLibrary
	{
	public:
		float GetServerWorldTime(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.ObjectLinkComponent
	 * Size -> 0x0148 (FullSize[0x0230] - InheritedSize[0x00E8])
	 */
	class UObjectLinkComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnObjectLinkActorAdded;                                  // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnObjectLinkComponentAdded;                              // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnObjectLinkActorRemoved;                                // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnObjectLinkComponentRemoved;                            // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TMap<class FName, struct FDSActorPicker>                   LinkedActorsViaPicker;                                   // 0x0128(0x0050) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_56V9[0xB8];                                  // 0x0178(0x00B8) MISSED OFFSET (PADDING)

	public:
		void UnregisterLinkedActorsFromBP();
		void UnregisterLink(struct FGuid* ID);
		struct FGuid RegisterComponentLink(const class FName& Name, class UActorComponent* Component);
		struct FGuid RegisterActorLink(const class FName& Name, class AActor* Actor);
		void OnComponentRemovedFromGlobalList(const class FName& Name, class UActorComponent* Component);
		void OnComponentAddedToGlobalList(const class FName& Name, class UActorComponent* Component);
		void OnActorRemovedFromGlobalList(const class FName& Name, class AActor* Actor);
		void OnActorDestroyed(class AActor* Actor);
		void OnActorAddedToGlobalList(const class FName& Name, class AActor* Actor);
		void GetLinkedObjects(TArray<struct FObjectLinkPair>* OutLinkedObjects);
		class UActorComponent* GetLinkedComponent(const class FName& Name);
		class AActor* GetLinkedActor(const class FName& Name);
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.ObjectLinkManager
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class AObjectLinkManager : public AInfo
	{
	public:
		class UObjectLinkComponent*                                ObjectLinkComponent;                                     // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.RequirementsContainer
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class URequirementsContainer : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnRequirementsActiveDelegates;                           // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRequirementsClearedDelegates;                          // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_II8M[0x30];                                  // 0x0048(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHasRequirements;                                        // 0x0078(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EPQ3[0x2F];                                  // 0x0079(0x002F) MISSED OFFSET (PADDING)

	public:
		void RemoveByName(const class FName& Requirement);
		void RemoveById(const struct FGuid& ID);
		void OnRep_HasRequirements();
		bool HasRequirements();
		bool HasRequirement(const class FName& Requirement);
		struct FGuid FindIDByName(const class FName& Requirement);
		class URequirementsContainer* CreateRequirementsContainer(class UObject* WorldContextObject, const class FName& Name);
		void Clear();
		struct FGuid AddTemporary(const class FName& Requirement, bool bUnique, float Duration);
		struct FGuid Add(const class FName& Requirement, bool bUnique);
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.Table2DElement
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTable2DElement : public UObject
	{
	public:
		bool                                                       bReadOnly;                                               // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCantDelete;                                             // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideDetailsView;                                        // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4F5I[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.Table2DRowColInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UTable2DRowColInfo : public UObject
	{
	public:
		class FName                                                Name;                                                    // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPermanent;                                              // 0x0030(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJ7R[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TypeID;                                                  // 0x0034(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Parent;                                                  // 0x0038(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.Table2DBase
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UTable2DBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_HV8J[0x40];                                  // 0x0028(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSUtils.Table2D
	 * Size -> 0x00D0 (FullSize[0x0138] - InheritedSize[0x0068])
	 */
	class UTable2D : public UTable2DBase
	{
	public:
		TArray<class UTable2DElement*>                             Elements;                                                // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UTable2DRowColInfo*>                          RowIDs;                                                  // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UTable2DRowColInfo*>                          ColIDs;                                                  // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<class FName, int32_t>                                 RowNameToIndex;                                          // 0x0098(0x0050) NativeAccessSpecifierPrivate
		TMap<class FName, int32_t>                                 ColNameToIndex;                                          // 0x00E8(0x0050) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
