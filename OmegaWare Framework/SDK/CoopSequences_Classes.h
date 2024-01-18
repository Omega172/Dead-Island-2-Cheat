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
	 * Class CoopSequences.CoopSequenceManager
	 * Size -> 0x0028 (FullSize[0x02D8] - InheritedSize[0x02B0])
	 */
	class ACoopSequenceManager : public AInfo
	{
	public:
		TArray<class ACoopSequenceState*>                          PlayerCoopSequenceStates;                                // 0x02B0(0x0010) Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UWS8[0x10];                                  // 0x02C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACoopSequenceState*                                  WorldCoopSequences;                                      // 0x02D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class ACoopSequenceState* GetWorldCoopSequenceState(class UObject* WorldContextObject);
		class ACoopSequenceState* GetLocalPlayerCoopSequenceState(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class CoopSequences.CoopSequenceState
	 * Size -> 0x0068 (FullSize[0x0318] - InheritedSize[0x02B0])
	 */
	class ACoopSequenceState : public AInfo
	{
	public:
		unsigned char                                              UnknownData_6W1H[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayTasksComponent*                             GameplayTasksComponent;                                  // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UCoopSequenceTask*>                           PendingActivationTasks;                                  // 0x02C0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OQ77[0x48];                                  // 0x02D0(0x0048) MISSED OFFSET (PADDING)

	public:
		void ServerRequestSequence(int32_t PredictionKey, class UClass* TaskType, const struct FUserParamsObjectWrapper& CustomData);
		void ServerReplicateState(int32_t PredictionKey, const struct FUserParamsObjectWrapper& Params);
		void ServerEndSequence(int32_t PredictionKey, bool bInterrupted);
		void ServerAcknowledgeSequence(int32_t PredictionKey);
		void OnTaskReplicateState(int32_t PredictionKey, class UCustomParamsBase* Params);
		void OnTaskInterrupted(class UCoopSequenceTask* Task);
		void OnTaskCompleted(class UCoopSequenceTask* Task);
		void ClientRequestSequence(int32_t PredictionKey, class UClass* TaskType, const struct FUserParamsObjectWrapper& CustomData);
		void ClientRefuseSequence(int32_t PredictionKey);
		static UClass* StaticClass();
	};

	/**
	 * Class CoopSequences.CoopSequenceTask
	 * Size -> 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
	 */
	class UCoopSequenceTask : public UGameplayTask
	{
	public:
		struct FUserParamsObjectWrapper                            Data;                                                    // 0x0068(0x0008) Net, NoDestructor, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             Activated;                                               // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             Completed;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             Interrupted;                                             // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             ReplicateState;                                          // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6YTC[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoopSequences.CoopSequenceParams
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UCoopSequenceParams : public UCustomParamsBase
	{
	public:
		float                                                      NetworkStartTime;                                        // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I7IY[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      Participants;                                            // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
