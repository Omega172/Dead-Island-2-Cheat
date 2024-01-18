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
	 * BlueprintGeneratedClass BP_ActionParams_GroupDistraction_StateMachine_AI.BP_ActionParams_GroupDistraction_StateMachine_AI_C
	 * Size -> 0x0038 (FullSize[0x02B8] - InheritedSize[0x0280])
	 */
	class UBP_ActionParams_GroupDistraction_StateMachine_AI_C : public UBP_ActionParams_Distraction_StateMachine_AI_C
	{
	public:
		TArray<struct FKnowledgeBaseExpression>                    CancellationExpressions;                                 // 0x0280(0x0010) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn
		TArray<struct FThresholdTrackingParams>                    ThresholdInterruptionParams;                             // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FKnowledgeBaseFactKey>                       LifetimeFactsAddedWhenConditionsSucceed;                 // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      IDCooldownTime;                                          // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TemplateCooldownTime;                                    // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
