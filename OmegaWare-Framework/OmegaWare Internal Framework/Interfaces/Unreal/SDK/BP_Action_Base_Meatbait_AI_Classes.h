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
	 * BlueprintGeneratedClass BP_Action_Base_Meatbait_AI.BP_Action_Base_Meatbait_AI_C
	 * Size -> 0x0023 (FullSize[0x0580] - InheritedSize[0x055D])
	 */
	class UBP_Action_Base_Meatbait_AI_C : public UBP_Action_Base_Task_AI_C
	{
	public:
		unsigned char                                              UnknownData_22TC[0x3];                                   // 0x055D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0560(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FTimerHandle                                        InterestTimerHandle;                                     // 0x0568(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UBPC_Distraction_GroupCoordinator_C*                 MeatbaitCoordinatorComponent;                            // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAttributeType*                                      InterestTimerAttribute;                                  // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InterestLost();
		void StartInterestTimer();
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void LaunchParticipantWithActor(class AActor* InputActivityActor);
		void ExecuteUbergraph_BP_Action_Base_Meatbait_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
