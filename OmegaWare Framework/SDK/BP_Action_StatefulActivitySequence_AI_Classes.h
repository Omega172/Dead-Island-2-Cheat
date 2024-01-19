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
	 * BlueprintGeneratedClass BP_Action_StatefulActivitySequence_AI.BP_Action_StatefulActivitySequence_AI_C
	 * Size -> 0x001A (FullSize[0x00C2] - InheritedSize[0x00A8])
	 */
	class UBP_Action_StatefulActivitySequence_AI_C : public UCharacterAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_ActionParams_StatefulActivitySequence_AI_C*      ActionParamsRef;                                         // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGameSequence*                                       GameSequenceRef;                                         // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EndCalledBySequenceEnd;                                  // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OnEndCalled;                                             // 0x00C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AddCallbackForSequenceEnd(class UGameSequence* GameSequence);
		void ActionEndCleanUp();
		void Interrupted_C85427844376243611D8368B53F62BBB();
		void Completed_C85427844376243611D8368B53F62BBB();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void EndGameSequence(float TimeRequested);
		void ExecuteUbergraph_BP_Action_StatefulActivitySequence_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
