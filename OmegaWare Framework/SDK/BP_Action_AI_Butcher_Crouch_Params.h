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
	 * Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.OnCancellationExpressionChanged
	 */
	struct UBP_Action_AI_Butcher_Crouch_C_OnCancellationExpressionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.RemoveCancellationExpression
	 */
	struct UBP_Action_AI_Butcher_Crouch_C_RemoveCancellationExpression_Params
	{	};

	/**
	 * Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.AddCancellationExpression
	 */
	struct UBP_Action_AI_Butcher_Crouch_C_AddCancellationExpression_Params
	{	};

	/**
	 * Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.OnBegin
	 */
	struct UBP_Action_AI_Butcher_Crouch_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.OnConstruct
	 */
	struct UBP_Action_AI_Butcher_Crouch_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.EndRequestedBy
	 */
	struct UBP_Action_AI_Butcher_Crouch_C_EndRequestedBy_Params
	{
	public:
		struct FGuid                                               QueuedActionId;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.OnEnd
	 */
	struct UBP_Action_AI_Butcher_Crouch_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_AI_Butcher_Crouch.BP_Action_AI_Butcher_Crouch_C.ExecuteUbergraph_BP_Action_AI_Butcher_Crouch
	 */
	struct UBP_Action_AI_Butcher_Crouch_C_ExecuteUbergraph_BP_Action_AI_Butcher_Crouch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
