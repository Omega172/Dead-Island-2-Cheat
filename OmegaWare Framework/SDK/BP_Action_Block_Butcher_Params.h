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
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.GatherPrerequisites
	 */
	struct UBP_Action_Block_Butcher_C_GatherPrerequisites_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U6T1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.OnBeginEarly
	 */
	struct UBP_Action_Block_Butcher_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C4LD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.LogInfo
	 */
	struct UBP_Action_Block_Butcher_C_LogInfo_Params
	{
	public:
		class FString                                              DebugText;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.DecrementStopActionsFact
	 */
	struct UBP_Action_Block_Butcher_C_DecrementStopActionsFact_Params
	{	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.IncrementStopActionsFact
	 */
	struct UBP_Action_Block_Butcher_C_IncrementStopActionsFact_Params
	{	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.DisableBlockLayer
	 */
	struct UBP_Action_Block_Butcher_C_DisableBlockLayer_Params
	{	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.EnableBlockLayer
	 */
	struct UBP_Action_Block_Butcher_C_EnableBlockLayer_Params
	{	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.OnEnd
	 */
	struct UBP_Action_Block_Butcher_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.EndRequestedBy
	 */
	struct UBP_Action_Block_Butcher_C_EndRequestedBy_Params
	{
	public:
		struct FGuid                                               QueuedActionId;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.OnMaintainExpressionResultChanged
	 */
	struct UBP_Action_Block_Butcher_C_OnMaintainExpressionResultChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.OnMaxDurationPassed
	 */
	struct UBP_Action_Block_Butcher_C_OnMaxDurationPassed_Params
	{	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.OnBegin
	 */
	struct UBP_Action_Block_Butcher_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.OnBlockOutroCanceled
	 */
	struct UBP_Action_Block_Butcher_C_OnBlockOutroCanceled_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnCancelledParams                   Params;                                                  // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.OnMinDurationPassed
	 */
	struct UBP_Action_Block_Butcher_C_OnMinDurationPassed_Params
	{	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.OnAnyImpactEvent
	 */
	struct UBP_Action_Block_Butcher_C_OnAnyImpactEvent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseImpactEventResultWrapper*                       ImpactEvent;                                             // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.OnStopActionBufferDurationPassed
	 */
	struct UBP_Action_Block_Butcher_C_OnStopActionBufferDurationPassed_Params
	{	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.OnConstruct
	 */
	struct UBP_Action_Block_Butcher_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.OnBlockOutroEnd
	 */
	struct UBP_Action_Block_Butcher_C_OnBlockOutroEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Block_Butcher.BP_Action_Block_Butcher_C.ExecuteUbergraph_BP_Action_Block_Butcher
	 */
	struct UBP_Action_Block_Butcher_C_ExecuteUbergraph_BP_Action_Block_Butcher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
