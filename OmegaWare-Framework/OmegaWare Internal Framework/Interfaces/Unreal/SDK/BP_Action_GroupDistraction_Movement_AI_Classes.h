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
	 * BlueprintGeneratedClass BP_Action_GroupDistraction_Movement_AI.BP_Action_GroupDistraction_Movement_AI_C
	 * Size -> 0x001C (FullSize[0x0398] - InheritedSize[0x037C])
	 */
	class UBP_Action_GroupDistraction_Movement_AI_C : public UBP_Action_Distraction_Movement_AI_C
	{
	public:
		unsigned char                                              UnknownData_E4Q7[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBPC_Distraction_GroupCoordinator_C*                 GroupDistractionCoordinatorComponent;                    // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActivityActor*                                      AssignedActivity;                                        // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIAICharacter*                                      DIAICharacter;                                           // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		TMap<class FName, float> GetQueryParams();
		TMap<class FName, float> GetDryRunQueryParams();
		void EndRunQueryState();
		void EndDryRunQueryState();
		bool OnBeginEarly();
		void OnQuerySucceeded();
		struct FVector GetMoveTargetDirection(const struct FVector& From);
		void BeginRunQueryState();
		void BeginDryRunQueryState();
		bool IsAbleToUseActivity();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
