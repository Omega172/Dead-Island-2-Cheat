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
	 * BlueprintGeneratedClass BP_Action_GroupDistraction_Movement_Screamer_Electric.BP_Action_GroupDistraction_Movement_Screamer_Electric_C
	 * Size -> 0x0000 (FullSize[0x0398] - InheritedSize[0x0398])
	 */
	class UBP_Action_GroupDistraction_Movement_Screamer_Electric_C : public UBP_Action_GroupDistraction_Movement_AI_C
	{
	public:
		struct FVector GetMoveTargetDirection(const struct FVector& From);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
