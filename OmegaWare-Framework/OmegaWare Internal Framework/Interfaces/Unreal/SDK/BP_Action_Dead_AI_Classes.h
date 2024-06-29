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
	 * BlueprintGeneratedClass BP_Action_Dead_AI.BP_Action_Dead_AI_C
	 * Size -> 0x0018 (FullSize[0x01B8] - InheritedSize[0x01A0])
	 */
	class UBP_Action_Dead_AI_C : public UAIDeadCharacterAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_AI_C*                                       Owner;                                                   // 0x01A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        PostDeathTimerGUID;                                      // 0x01B0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnSignificantDurationAfterDeath();
		void OnRagdollResting(bool bResult);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_Dead_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
