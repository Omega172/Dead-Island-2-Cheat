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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.UnbindSuiciderDetonationActionListeners
	 */
	struct UBP_Action_Distraction_AnimsetStateMachine_Suicider_C_UnbindSuiciderDetonationActionListeners_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.OnSuiciderDetonationActionEnded
	 */
	struct UBP_Action_Distraction_AnimsetStateMachine_Suicider_C_OnSuiciderDetonationActionEnded_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.TryBeginSuiciderDetonationAction
	 */
	struct UBP_Action_Distraction_AnimsetStateMachine_Suicider_C_TryBeginSuiciderDetonationAction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YDFY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.OnBegin
	 */
	struct UBP_Action_Distraction_AnimsetStateMachine_Suicider_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.OnEnd
	 */
	struct UBP_Action_Distraction_AnimsetStateMachine_Suicider_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C.ExecuteUbergraph_BP_Action_Distraction_AnimsetStateMachine_Suicider
	 */
	struct UBP_Action_Distraction_AnimsetStateMachine_Suicider_C_ExecuteUbergraph_BP_Action_Distraction_AnimsetStateMachine_Suicider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
