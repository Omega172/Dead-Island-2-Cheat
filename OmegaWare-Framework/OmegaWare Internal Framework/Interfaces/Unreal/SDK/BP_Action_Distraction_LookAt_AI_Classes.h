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
	 * BlueprintGeneratedClass BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UBP_Action_Distraction_LookAt_AI_C : public UBP_Action_Base_Distraction_AI_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_ActionParams_Distraction_LookAt_AI_C*            LookAtDistractionActionParams;                           // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TimerHandle;                                             // 0x00F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               LookAtRequestID;                                         // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetLookAtTarget(bool* FoundLookAtTarget, class USceneComponent** GetLookAtComponent, struct FVector* GetLookatLocation);
		void RemoveLookAtRequest();
		void AddLookAtRequest(bool* ReturnSuccess);
		void RemoveTImer();
		void AddTimer();
		bool OnBeginEarly();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnTimerFinished();
		void ExecuteUbergraph_BP_Action_Distraction_LookAt_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
