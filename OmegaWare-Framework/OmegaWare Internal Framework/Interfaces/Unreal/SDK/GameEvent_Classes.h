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
	 * Class GameEvent.BaseGameEvent
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UBaseGameEvent : public UObject
	{
	public:
		unsigned char                                              UnknownData_JLPD[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		void Setup(class AActor* InOwningActor);
		void GatherBlueprintLinks(TArray<class AActor*>* ActorsToPointTo);
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.BaseGameEventResponse
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UBaseGameEventResponse : public UObject
	{
	public:
		unsigned char                                              UnknownData_FP3W[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		class AActor* GetOwningActor();
		TArray<class AActor*> GetLinkedActors();
		TArray<class FString> GetDebugText();
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.GameEvent
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UGameEvent : public UBaseGameEvent
	{
	public:
		TArray<class UGameEventResponse*>                          EventResponses;                                          // 0x0080(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1K5Y[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)

	public:
		void RemoveResponse(class UGameEventResponse* GameEventResponse);
		void Execute(class AActor* ContextualActor);
		void AddResponse(class UGameEventResponse* GameEventResponse);
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.GameEventDebugComponent
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UGameEventDebugComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_VOI8[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.GameEventFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameEventFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_HasTag(class UBaseGameEventResponse* Response, EGameEventTags Tag);
		void STATIC_AddGameEventStateResponse(class UObject* WorldContextObject, class AActor* OwningActor, class UGameEventState** GameEventState, class UGameEventStateResponse* Response);
		void STATIC_AddGameEventResponse(class UObject* WorldContextObject, class AActor* OwningActor, class UGameEvent** GameEvent, class UGameEventResponse* Response);
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.GameEventManager
	 * Size -> 0x0020 (FullSize[0x02D0] - InheritedSize[0x02B0])
	 */
	class AGameEventManager : public AInfo
	{
	public:
		unsigned char                                              UnknownData_XU4O[0x20];                                  // 0x02B0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.GameEventProxyActor
	 * Size -> 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
	 */
	class AGameEventProxyActor : public AActor
	{
	public:
		TArray<struct FGameEventProxyData>                         ProxyData;                                               // 0x02B0(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.GameEventProxyInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameEventProxyInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.GameEventProxyManager
	 * Size -> 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
	 */
	class AGameEventProxyManager : public AInfo
	{
	public:
		TArray<class AGameEventProxyActor*>                        RegisteredActors;                                        // 0x02B0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.GameEventResponse
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UGameEventResponse : public UBaseGameEventResponse
	{
	public:
		void Execute(class AActor* ContextualActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.GameEventResponse_WithNestedGameEvent
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UGameEventResponse_WithNestedGameEvent : public UGameEventResponse
	{
	public:
		class UGameEvent*                                          GameEvent;                                               // 0x0040(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SEU[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.GameEventResponse_Delay
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UGameEventResponse_Delay : public UGameEventResponse_WithNestedGameEvent
	{
	public:
		struct FGameEventDelayData                                 DelayData;                                               // 0x0050(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.GameEventResponse_RandomChance
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UGameEventResponse_RandomChance : public UGameEventResponse_WithNestedGameEvent
	{
	public:
		float                                                      ExecutionChance;                                         // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AODV[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.GameEventState
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UGameEventState : public UBaseGameEvent
	{
	public:
		TArray<class UGameEventStateResponse*>                     EventStateResponses;                                     // 0x0080(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2MM6[0x18];                                  // 0x0090(0x0018) MISSED OFFSET (PADDING)

	public:
		void StateEnd();
		void StateBegin(class AActor* ContextualActor);
		void RemoveStateResponse(class UGameEventStateResponse* GameEventStateResponse);
		void OnEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		void AddStateResponse(class UGameEventStateResponse* GameEventStateResponse);
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.GameEventStateResponse
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UGameEventStateResponse : public UBaseGameEventResponse
	{
	public:
		void StateEnd(class AActor* ContextualActor);
		void StateBegin(class AActor* ContextualActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.GameEventStateResponse_DelayedStart
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UGameEventStateResponse_DelayedStart : public UGameEventStateResponse
	{
	public:
		struct FGameEventDelayData                                 DelayData;                                               // 0x0040(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UGameEventState*                                     GameEventState;                                          // 0x0050(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P3FI[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.GameEventStateResponse_WithNestedGameEventState
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UGameEventStateResponse_WithNestedGameEventState : public UGameEventStateResponse
	{
	public:
		class UGameEventState*                                     GameEventState;                                          // 0x0040(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_66FM[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameEvent.MultiActorGameEventStateHandler
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UMultiActorGameEventStateHandler : public UObject
	{
	public:
		class UGameEventState*                                     GameEventState;                                          // 0x0028(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              OwningActor;                                             // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class AActor*, class UGameEventState*>                ActiveGameEventStates;                                   // 0x0038(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void StateEnd(class AActor* ContextualActor);
		void StateBegin(class AActor* ContextualActor);
		void Setup(class UGameEventState* State, class AActor* Owner);
		void EndAllStates();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
