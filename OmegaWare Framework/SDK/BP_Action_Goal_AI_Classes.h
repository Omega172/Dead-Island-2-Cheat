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
	 * BlueprintGeneratedClass BP_Action_Goal_AI.BP_Action_Goal_AI_C
	 * Size -> 0x0008 (FullSize[0x0348] - InheritedSize[0x0340])
	 */
	class UBP_Action_Goal_AI_C : public UBP_Action_Base_AreaMovement_AI_C
	{
	public:
		class UBPC_Goal_C*                                         Goal;                                                    // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EndTurningMoveTargetState();
		void EndStandardMoveTargetState();
		void EndMaintainLastMoveTargetState();
		void EndFollowingMoveTargetState();
		class UGoalComponent* GetGoal();
		void BeginTurningMoveTargetState();
		void BeginMaintainLastMoveTargetState();
		void BeginFollowingMoveTargetState();
		void BeginStandardMoveTargetState();
		void SetQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery);
		bool OnBeginEarly();
		float GetAreaRadius();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
