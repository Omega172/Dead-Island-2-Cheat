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
	 * BlueprintGeneratedClass BP_ActionParams_AnimSet_AI.BP_ActionParams_AnimSet_AI_C
	 * Size -> 0x0051 (FullSize[0x00F1] - InheritedSize[0x00A0])
	 */
	class UBP_ActionParams_AnimSet_AI_C : public UNavSafeAnimSetActionParams
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FKnowledgeBaseFactKey                               AttackRulesFactToSetOnBegin;                             // 0x00A8(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               AttackRulesFactToSetOnEnd;                               // 0x00B4(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		bool                                                       StopMontageOnEnd;                                        // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5O81[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FThresholdTrackingParams>                    ThresholdInterruptionParams;                             // 0x00C8(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		float                                                      BlendOutDurationOverride;                                // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_61DC[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModifierAndValue>                           ModifiersToAddDuringAction;                              // 0x00E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       ApplyLocomotionSyncStateForActionDuration;               // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_BP_ActionParams_AnimSet_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
