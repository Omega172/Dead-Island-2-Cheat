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
	 * BlueprintGeneratedClass BP_Action_Distaction_ControlledAnimStateMachine_AI.BP_Action_Distaction_ControlledAnimStateMachine_AI_C
	 * Size -> 0x000F (FullSize[0x0210] - InheritedSize[0x0201])
	 */
	class UBP_Action_Distaction_ControlledAnimStateMachine_AI_C : public UBP_Action_Distraction_AnimStateMachine_AI_C
	{
	public:
		unsigned char                                              UnknownData_J5FS[0x3];                                   // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAccumulatingEffectTypeAndValue                     SelfElectrocuteParams;                                   // 0x0204(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void EndAnimSetActionState();
		void BeginAnimSetActionState();
		struct FVector GetMoveTargetDirection();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
