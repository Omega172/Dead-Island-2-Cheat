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
	 * BlueprintGeneratedClass BP_ActionParams_Distraction_Movement_AI.BP_ActionParams_Distraction_Movement_AI_C
	 * Size -> 0x0108 (FullSize[0x04AC] - InheritedSize[0x03A4])
	 */
	class UBP_ActionParams_Distraction_Movement_AI_C : public UBP_ActionParams_WaitMovingEQS_AI_C
	{
	public:
		unsigned char                                              UnknownData_6EJ5[0x4];                                   // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStim                                               Stim;                                                    // 0x03A8(0x00B8) Edit, BlueprintVisible, ContainsInstancedReference, AdvancedDisplay, ExposeOnSpawn
		float                                                      MaxPathCost;                                             // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6O32[0x4];                                   // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            ActivityExpression;                                      // 0x0468(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector                                             DistractionLocationProjectionExtent;                     // 0x04A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
