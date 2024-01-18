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
	 * Class LevelStreaming.LevelStreamingActor
	 * Size -> 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
	 */
	class ALevelStreamingActor : public AActor
	{
	public:
		class ULevelStreamingComponent*                            StreamingComponent;                                      // 0x02B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBillboardComponent*                                 BillboardComponent;                                      // 0x02B8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelStreaming.LevelStreamingComponent
	 * Size -> 0x0360 (FullSize[0x0448] - InheritedSize[0x00E8])
	 */
	class ULevelStreamingComponent : public UActorComponent
	{
	public:
		TArray<struct FStreamingData>                              StreamingData;                                           // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class ATriggerShapeActor*>                          Triggers;                                                // 0x00F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class ATriggerShapeActor*>                          ShowTriggers;                                            // 0x0108(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		bool                                                       bServerControlled;                                       // 0x0118(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDeferredUnloading;                                   // 0x0119(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OMEY[0x2];                                   // 0x011A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UnloadDelay;                                             // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CompatibleInteractor;                                    // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStreamingStarted;                                      // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStreamingFinished;                                     // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAllLevelsLoaded;                                       // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAllLevelsUnloaded;                                     // 0x0158(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStreamingSetLoaded;                                    // 0x0168(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStreamingSetUnloaded;                                  // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAllLevelsShown;                                        // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAllLevelsHidden;                                       // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStreamingSetShown;                                     // 0x01A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStreamingSetHidden;                                    // 0x01B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UKnowledgeBaseExpressionListener*                    ExpressionListener;                                      // 0x01C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FLevelStreamingReplicatedState>              ReplicatedState;                                         // 0x01D0(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SZQ8[0x268];                                 // 0x01E0(0x0268) MISSED OFFSET (PADDING)

	public:
		void StreamingSetEvent__DelegateSignature(int32_t Index);
		void SetStreamingEnabled(EEnabledState State);
		void OnRep_LevelStreamingState();
		bool AreAllLevelsUnloaded();
		bool AreAllLevelsShown();
		bool AreAllLevelsLoaded();
		void AllLevelsEvent__DelegateSignature();
		static UClass* StaticClass();
	};

	/**
	 * Class LevelStreaming.LevelStreamingEditor
	 * Size -> 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
	 */
	class ULevelStreamingEditor : public ULevelStreamingDynamic
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelStreaming.LevelStreamingRuntime
	 * Size -> 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
	 */
	class ULevelStreamingRuntime : public ULevelStreamingDynamic
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelStreaming.LevelStreamingElement
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class ULevelStreamingElement : public UObject
	{
	public:
		class ULevelStreaming*                                     StreamingLevel;                                          // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RR55[0xC8];                                  // 0x0030(0x00C8) MISSED OFFSET (PADDING)

	public:
		void NotifyLevelUnloaded();
		void NotifyLevelShown();
		void NotifyLevelLoaded();
		void NotifyLevelHidden();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
