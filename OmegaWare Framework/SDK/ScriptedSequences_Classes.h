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
	 * Class ScriptedSequences.ScriptedSequenceExitCondition
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScriptedSequenceExitCondition : public UObject
	{
	public:
		void Setup(class UScriptedSequenceStage* InOwningStage);
		void Reset();
		bool IsConditionMet();
		TArray<class AActor*> GetLinkedActors();
		class FString GetDebuggingText();
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptedSequences.BaseScriptedSequenceStage
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBaseScriptedSequenceStage : public UObject
	{
	public:
		void OnTick(float DeltaTime);
		bool OnRequestStartStage(class AActor* InOwningActor);
		bool OnRequestEndStage();
		TMap<class FName, class FString> OnGetFactsWithDescriptions();
		TArray<class FString> OnGetDebuggingText();
		void OnCleanUp();
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptedSequences.ScriptedComponent
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	class UScriptedComponent : public UActorComponent
	{
	public:
		struct FVector                                             NavProjectionExtent;                                     // 0x00E8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KP5X[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ActorOnNavMeshToTarget;                                  // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FUFJ[0x8];                                   // 0x0100(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptedSequences.ScriptedSequenceComponent
	 * Size -> 0x0088 (FullSize[0x0190] - InheritedSize[0x0108])
	 */
	class UScriptedSequenceComponent : public UScriptedComponent
	{
	public:
		unsigned char                                              UnknownData_PC2V[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnScriptedSequenceStarted;                               // 0x0110(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnScriptedSequenceEnded;                                 // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnScriptedStageStarted;                                  // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnScriptedStageEnded;                                    // 0x0140(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		TArray<class UScriptedSequenceStage*>                      Stages;                                                  // 0x0150(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UScriptedSequenceStage*>                      OverriddenStages;                                        // 0x0160(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UScriptedSequenceStage*>                      PendingStages;                                           // 0x0170(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AMUL[0x10];                                  // 0x0180(0x0010) MISSED OFFSET (PADDING)

	public:
		void RequestStopSequence();
		bool RequestStartSequence();
		bool IsSequenceActive();
		bool HasOverriddenStages();
		void GatherComponentBlueprintLinks(TArray<struct FComponentLinkInformation>* ComponentLinks);
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptedSequences.ScriptedSequenceDataAsset
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UScriptedSequenceDataAsset : public UValidatedDataAsset
	{
	public:
		TArray<class UScriptedSequenceStage*>                      Stages;                                                  // 0x0030(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptedSequences.ScriptedSequenceExitCondition_Compound
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UScriptedSequenceExitCondition_Compound : public UScriptedSequenceExitCondition
	{
	public:
		TArray<class UScriptedSequenceExitCondition*>              ExitConditions;                                          // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfRequiredConditions;                              // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2RUQ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptedSequences.ScriptedSequenceStage
	 * Size -> 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
	 */
	class UScriptedSequenceStage : public UBaseScriptedSequenceStage
	{
	public:
		class UScriptedSequenceExitCondition*                      ExitCondition;                                           // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGameEvent*                                          OnStageStartedGameEvent;                                 // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGameEvent*                                          OnStageEndedGameEvent;                                   // 0x0038(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGameEventState*                                     WhilstStageIsActiveGameEventState;                       // 0x0040(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O5SY[0xD0];                                  // 0x0048(0x00D0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ScriptedSequences.ScriptedStateComponent
	 * Size -> 0x0090 (FullSize[0x0198] - InheritedSize[0x0108])
	 */
	class UScriptedStateComponent : public UScriptedComponent
	{
	public:
		TMap<class FName, struct FScriptedState>                   NamedStates;                                             // 0x0108(0x0050) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FScriptedTransitionState>                    TransitionStates;                                        // 0x0158(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HM04[0x30];                                  // 0x0168(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
