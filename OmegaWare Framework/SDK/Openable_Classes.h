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
	 * Class Openable.OpenableComponent
	 * Size -> 0x01D8 (FullSize[0x02C0] - InheritedSize[0x00E8])
	 */
	class UOpenableComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnOpened;                                                // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnClosed;                                                // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnOpenableStateChanged;                                  // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FScopedKnowledgeBaseExpressionListener              OpenExpressionListener;                                  // 0x0118(0x0060) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FOpenableRuntimeData                                RuntimeData;                                             // 0x0178(0x00A8) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UGameEvent*                                          OnOpenGameEvent;                                         // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGameEvent*                                          OnOpeningGameEvent;                                      // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGameEvent*                                          OnClosedGameEvent;                                       // 0x0230(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGameEvent*                                          OnClosingGameEvent;                                      // 0x0238(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FOpenableDataAssetCollection                        AssetCollection;                                         // 0x0240(0x0020) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		EOpenableNetworkingRule                                    NetworkingRule;                                          // 0x0260(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AP2X[0x3];                                   // 0x0261(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_3YKB[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterActionComponent*                           CharacterAction;                                         // 0x0268(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCharacterActionRequestHelper*                       OpenActionHelper;                                        // 0x0270(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCharacterActionRequestHelper*                       OpeningActionHelper;                                     // 0x0278(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCharacterActionRequestHelper*                       CloseActionHelper;                                       // 0x0280(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCharacterActionRequestHelper*                       ClosingActionHelper;                                     // 0x0288(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class URequirementsContainer*                              DisableReasons;                                          // 0x0290(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBlockMessageReceiverComponent*                      BlockMessageReceiverComponent;                           // 0x0298(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOpenableControlObject*                              ControlObject;                                           // 0x02A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRequiresPersistence;                                    // 0x02A8(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NSWF[0x17];                                  // 0x02A9(0x0017) MISSED OFFSET (PADDING)

	public:
		void SetOverrideSpeedModifier(float NewSpeedModifier);
		bool SetControlObject(class UOpenableControlObject* Object);
		void SetAssetCollection(const struct FOpenableDataAssetCollection& InAssetCollection);
		bool RequestOpen();
		bool RequestClose();
		void RemoveDisableOpenReason(const class FName& Reason);
		void RemoveControlObject(class UOpenableControlObject* Object);
		void OnEndAction(const struct FGuid& RequestId, const class FName& ActionType, ECharacterActionEndedReason Reason);
		void OnBlockMessageStateChanged(bool bIsBlocked);
		void OnBeginAction(const struct FGuid& RequestId, const class FName& ActionType);
		EOpenableState GetCurrentState();
		void AddDisableOpenReason(const class FName& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class Openable.OpenableControlObject
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UOpenableControlObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_JD1O[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		void RequestOpen();
		void RequestClosed();
		void OnOpenRequested();
		void OnCloseRequested();
		static UClass* StaticClass();
	};

	/**
	 * Class Openable.OpenableDataAsset
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UOpenableDataAsset : public UValidatedDataAsset
	{
	public:
		class UClass*                                              OpenableObjectClass;                                     // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Openable.OpenableObject
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UOpenableObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_XQ40[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		void StopMovement();
		void StartMovement();
		bool Start(class AActor* InOwnerActor, const class FScriptDelegate& InOpenableObjectCallback);
		bool RequestInformWhenPercentageThroughMovement(const class FScriptDelegate& Callback, TArray<float> PercentagesThrough);
		bool RequestInformWhenPercentageRemainingMovement(const class FScriptDelegate& Callback, TArray<float> PercentagesRemaining);
		void RemoveAllCallbacks();
		void OnRemoveAllCallbacks();
		bool OnInformWhenPercentageThroughMovement(const class FScriptDelegate& Callback, TArray<float> PercentagesThrough);
		bool OnInformWhenPercentageRemainingMovement(const class FScriptDelegate& Callback, TArray<float> PercentagesRemaining);
		float OnGetPercentageThroughMovement();
		float OnGetPercentageRemainingMovement();
		void InformMovementFinished();
		float GetPercentageThroughMovement();
		float GetPercentageRemainingMovement();
		class AActor* GetOwningActor();
		void ForceStop();
		static UClass* StaticClass();
	};

	/**
	 * Class Openable.OpenableObjectActionParams
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UOpenableObjectActionParams : public UCustomActionParamsBase
	{
	public:
		class UOpenableDataAsset*                                  OpenableDataAsset;                                       // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOpenableRuntimeResolvedData                        RuntimeData;                                             // 0x0040(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EGXU[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Openable.OpenableObjectAction
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UOpenableObjectAction : public UCharacterAction
	{
	public:
		class UOpenableObject*                                     OpenableObject;                                          // 0x00A8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool RequestInformWhenPercentageThroughMovement(const class FScriptDelegate& Callback, TArray<float> PercentagesThrough);
		bool RequestInformWhenPercentageRemainingMovement(const class FScriptDelegate& Callback, TArray<float> PercentagesRemaining);
		void RemoveAllCallbacks();
		void OnOpenableObjectMovementComponent();
		float GetPercentageThroughMovement();
		float GetPercentageRemainingMovement();
		static UClass* StaticClass();
	};

	/**
	 * Class Openable.OpenablePersistentDataCollection
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UOpenablePersistentDataCollection : public UPersistentDataCollectionBase
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0048(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GW9J[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
