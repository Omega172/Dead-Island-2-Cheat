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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Action_Player_Dead.BP_Action_Player_Dead_C.SpawnFeastingMeatpile
	 */
	struct UBP_Action_Player_Dead_C_SpawnFeastingMeatpile_Params
	{	};

	/**
	 * Function BP_Action_Player_Dead.BP_Action_Player_Dead_C.GetAllActorToIgnoreForLineTrace
	 */
	struct UBP_Action_Player_Dead_C_GetAllActorToIgnoreForLineTrace_Params
	{
	public:
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Action_Player_Dead.BP_Action_Player_Dead_C.DeathPosedExpressionChanged
	 */
	struct UBP_Action_Player_Dead_C_DeathPosedExpressionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_Dead.BP_Action_Player_Dead_C.GetDeathPosedExpression
	 */
	struct UBP_Action_Player_Dead_C_GetDeathPosedExpression_Params
	{
	public:
		struct FKnowledgeBaseExpression                            ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Player_Dead.BP_Action_Player_Dead_C.OnBegin
	 */
	struct UBP_Action_Player_Dead_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_Dead.BP_Action_Player_Dead_C.OnEnd
	 */
	struct UBP_Action_Player_Dead_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_Dead.BP_Action_Player_Dead_C.ExecuteUbergraph_BP_Action_Player_Dead
	 */
	struct UBP_Action_Player_Dead_C_ExecuteUbergraph_BP_Action_Player_Dead_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
