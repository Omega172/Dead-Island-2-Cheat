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
	 * BlueprintGeneratedClass BP_ActionParams_AnimSet_AI.BP_ActionParams_AnimSet_AI_C
	 * Size -> 0x0061 (FullSize[0x0101] - InheritedSize[0x00A0])
	 */
	class UBP_ActionParams_AnimSet_AI_C : public UNavSafeAnimSetActionParams
	{
	public:
		struct FKnowledgeBaseFactKey                               AttackRulesFactToSetOnBegin;                             // 0x00A0(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               AttackRulesFactToSetOnEnd;                               // 0x00AC(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		bool                                                       StopMontageOnEnd;                                        // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_FZBY[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FThresholdTrackingParams>                    ThresholdInterruptionParams;                             // 0x00C0(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       InterruptActionWhenDamageAmountReceived;                 // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_6LT7[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageRequiredAsHealthPortion;                           // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       ResetTheDamageTrackingWhenConditionsAreMet;              // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_23AW[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseFactKey                               FactToIncrementWhenDamageConditionAreMet;                // 0x00DC(0x000C) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      BlendOutDurationOverride;                                // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       CleanUpFactOnEntryRemoval;                               // 0x00EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_F3SK[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModifierAndValue>                           ModifiersToAddDuringAction;                              // 0x00F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       ApplyLocomotionSyncStateForActionDuration;               // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
