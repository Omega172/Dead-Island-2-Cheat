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
	 * BlueprintGeneratedClass BP_Action_Distraction_Movement_AI.BP_Action_Distraction_Movement_AI_C
	 * Size -> 0x0034 (FullSize[0x036C] - InheritedSize[0x0338])
	 */
	class UBP_Action_Distraction_Movement_AI_C : public UBP_Action_WaitMovingEQS_AI_C
	{
	public:
		class UBP_ActionParams_Distraction_Movement_AI_C*          DistractionMovementParams;                               // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               DistractionLocationContextFact;                          // 0x0340(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                DistractionStimBBInstigatorName;                         // 0x034C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UEN1[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKnowledgeBaseComponent*                             StimOwnersKnowledgeBase;                                 // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               StimOwnersBoundsFact;                                    // 0x0360(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		bool CastAndStoreParams(class UCustomActionParamsBase* BaseParams);
		void RemoveMovement();
		void ProjectLocationToNavmesh(const struct FVector& Location, struct FVector* ProjectedLocation);
		void SetDryRunQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery);
		void GetTargetLocation(struct FVector* TargetLocation);
		void GetTargetActor(class AActor** TargetActor);
		void SetQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery);
		void AddMovement();
		void SetQueryData(const struct FVector& Location, bool* Success);
		bool OnBeginEarly();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
