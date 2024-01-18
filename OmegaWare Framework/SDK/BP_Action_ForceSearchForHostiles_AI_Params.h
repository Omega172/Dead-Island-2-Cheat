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
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnUnpossessed
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_OnUnpossessed_Params
	{	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.ClearTimers
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_ClearTimers_Params
	{	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.RemoveToHostilesList
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_RemoveToHostilesList_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DWBY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.RemoveForceSearchBehaviourStim
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_RemoveForceSearchBehaviourStim_Params
	{	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.ForceMovementToUpdate
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_ForceMovementToUpdate_Params
	{	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.UnbindListeners
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_UnbindListeners_Params
	{	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.StartSearchBehaviourUpdate
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_StartSearchBehaviourUpdate_Params
	{	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.StartPendingStimReceiverRegistrationCheck
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_StartPendingStimReceiverRegistrationCheck_Params
	{	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.CheckIfStimReceiverRegistered
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_CheckIfStimReceiverRegistered_Params
	{	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.GlobalUpdateForceSearchBehaviour
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_GlobalUpdateForceSearchBehaviour_Params
	{	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.AddForceSearchBehaviourStim
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_AddForceSearchBehaviourStim_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CQKR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.IsStimUpdateRequired
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_IsStimUpdateRequired_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TUMT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.CanUseSearchBehaviour
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_CanUseSearchBehaviour_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BFB4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.GetClosestHostile
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_GetClosestHostile_Params
	{
	public:
		class ADICharacter*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.AddToHostilesList
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_AddToHostilesList_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.GetAllHostilesWithAreaShape
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_GetAllHostilesWithAreaShape_Params
	{	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnInteractorOverlapEnd
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_OnInteractorOverlapEnd_Params
	{
	public:
		class UTriggerInteractorComponent*                         Interactor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnInteractorOverlapBegin
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_OnInteractorOverlapBegin_Params
	{
	public:
		class UTriggerInteractorComponent*                         Interactor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.BindListeners
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_BindListeners_Params
	{	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnBeginEarly
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_78DU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnBegin
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.OnEnd
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_ForceSearchForHostiles_AI.BP_Action_ForceSearchForHostiles_AI_C.ExecuteUbergraph_BP_Action_ForceSearchForHostiles_AI
	 */
	struct UBP_Action_ForceSearchForHostiles_AI_C_ExecuteUbergraph_BP_Action_ForceSearchForHostiles_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
