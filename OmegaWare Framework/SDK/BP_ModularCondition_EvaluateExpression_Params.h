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
	 * Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.GetKnowledgeBaseOwner
	 */
	struct UBP_ModularCondition_EvaluateExpression_C_GetKnowledgeBaseOwner_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.GetImGuiText
	 */
	struct UBP_ModularCondition_EvaluateExpression_C_GetImGuiText_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.EvaluateConditionExpression
	 */
	struct UBP_ModularCondition_EvaluateExpression_C_EvaluateConditionExpression_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.OnBegin
	 */
	struct UBP_ModularCondition_EvaluateExpression_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.OnEnd
	 */
	struct UBP_ModularCondition_EvaluateExpression_C_OnEnd_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularCondition_EvaluateExpression.BP_ModularCondition_EvaluateExpression_C.ExecuteUbergraph_BP_ModularCondition_EvaluateExpression
	 */
	struct UBP_ModularCondition_EvaluateExpression_C_ExecuteUbergraph_BP_ModularCondition_EvaluateExpression_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TFOI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
