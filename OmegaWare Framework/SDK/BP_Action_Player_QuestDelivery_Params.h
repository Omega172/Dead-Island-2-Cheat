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
	 * Function BP_Action_Player_QuestDelivery.BP_Action_Player_QuestDelivery_C.CallStandAndDeliverEnd
	 */
	struct UBP_Action_Player_QuestDelivery_C_CallStandAndDeliverEnd_Params
	{	};

	/**
	 * Function BP_Action_Player_QuestDelivery.BP_Action_Player_QuestDelivery_C.CallStandAndDeliver
	 */
	struct UBP_Action_Player_QuestDelivery_C_CallStandAndDeliver_Params
	{	};

	/**
	 * Function BP_Action_Player_QuestDelivery.BP_Action_Player_QuestDelivery_C.EndActions
	 */
	struct UBP_Action_Player_QuestDelivery_C_EndActions_Params
	{	};

	/**
	 * Function BP_Action_Player_QuestDelivery.BP_Action_Player_QuestDelivery_C.AddInvulnerableAction
	 */
	struct UBP_Action_Player_QuestDelivery_C_AddInvulnerableAction_Params
	{	};

	/**
	 * Function BP_Action_Player_QuestDelivery.BP_Action_Player_QuestDelivery_C.AddLookAt
	 */
	struct UBP_Action_Player_QuestDelivery_C_AddLookAt_Params
	{	};

	/**
	 * Function BP_Action_Player_QuestDelivery.BP_Action_Player_QuestDelivery_C.RemoveHudState
	 */
	struct UBP_Action_Player_QuestDelivery_C_RemoveHudState_Params
	{	};

	/**
	 * Function BP_Action_Player_QuestDelivery.BP_Action_Player_QuestDelivery_C.AddHudState
	 */
	struct UBP_Action_Player_QuestDelivery_C_AddHudState_Params
	{	};

	/**
	 * Function BP_Action_Player_QuestDelivery.BP_Action_Player_QuestDelivery_C.RemoveInputFilters
	 */
	struct UBP_Action_Player_QuestDelivery_C_RemoveInputFilters_Params
	{	};

	/**
	 * Function BP_Action_Player_QuestDelivery.BP_Action_Player_QuestDelivery_C.CacheParams
	 */
	struct UBP_Action_Player_QuestDelivery_C_CacheParams_Params
	{	};

	/**
	 * Function BP_Action_Player_QuestDelivery.BP_Action_Player_QuestDelivery_C.AddInputFilters
	 */
	struct UBP_Action_Player_QuestDelivery_C_AddInputFilters_Params
	{	};

	/**
	 * Function BP_Action_Player_QuestDelivery.BP_Action_Player_QuestDelivery_C.CachePlayer
	 */
	struct UBP_Action_Player_QuestDelivery_C_CachePlayer_Params
	{	};

	/**
	 * Function BP_Action_Player_QuestDelivery.BP_Action_Player_QuestDelivery_C.OnBegin
	 */
	struct UBP_Action_Player_QuestDelivery_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_QuestDelivery.BP_Action_Player_QuestDelivery_C.OnEnd
	 */
	struct UBP_Action_Player_QuestDelivery_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Player_QuestDelivery.BP_Action_Player_QuestDelivery_C.ExecuteUbergraph_BP_Action_Player_QuestDelivery
	 */
	struct UBP_Action_Player_QuestDelivery_C_ExecuteUbergraph_BP_Action_Player_QuestDelivery_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
