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
	 * Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.OnEarlyEndMovement
	 */
	struct UBP_Action_DistractionWander_AI_C_OnEarlyEndMovement_Params
	{	};

	/**
	 * Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.SetQueryParams
	 */
	struct UBP_Action_DistractionWander_AI_C_SetQueryParams_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   ActiveQuery;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.TryRemoveDistractionWanderFact
	 */
	struct UBP_Action_DistractionWander_AI_C_TryRemoveDistractionWanderFact_Params
	{	};

	/**
	 * Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.AddDistractionWanderFact
	 */
	struct UBP_Action_DistractionWander_AI_C_AddDistractionWanderFact_Params
	{	};

	/**
	 * Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.RemoveMovement
	 */
	struct UBP_Action_DistractionWander_AI_C_RemoveMovement_Params
	{	};

	/**
	 * Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.TrySetDistractionWanderTarget
	 */
	struct UBP_Action_DistractionWander_AI_C_TrySetDistractionWanderTarget_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.AddMovement
	 */
	struct UBP_Action_DistractionWander_AI_C_AddMovement_Params
	{	};

	/**
	 * Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.OnBeginEarly
	 */
	struct UBP_Action_DistractionWander_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_DistractionWander_AI.BP_Action_DistractionWander_AI_C.GetAreaRadius
	 */
	struct UBP_Action_DistractionWander_AI_C_GetAreaRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
