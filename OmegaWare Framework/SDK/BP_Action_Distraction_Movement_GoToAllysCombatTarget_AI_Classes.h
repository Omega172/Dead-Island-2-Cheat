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
	 * BlueprintGeneratedClass BP_Action_Distraction_Movement_GoToAllysCombatTarget_AI.BP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C
	 * Size -> 0x0000 (FullSize[0x0388] - InheritedSize[0x0388])
	 */
	class UBP_Action_Distraction_Movement_GoToAllysCombatTarget_AI_C : public UBP_Action_Base_Distraction_Movement_UseAllysCombatData_AI_C
	{
	public:
		void GetTargetActor(class AActor** TargetActor);
		void GetTargetLocation(struct FVector* TargetLocation);
		bool OnBeginEarly();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
