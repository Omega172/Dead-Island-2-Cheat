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
	 * Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.OnObjectiveStarted
	 */
	struct ABP_OBJ_ScriptedSequence_C_OnObjectiveStarted_Params
	{	};

	/**
	 * Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.SequenceEnded
	 */
	struct ABP_OBJ_ScriptedSequence_C_SequenceEnded_Params
	{
	public:
		class UScriptedSequenceComponent*                          EndedSequence;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.OnObjectiveEnded
	 */
	struct ABP_OBJ_ScriptedSequence_C_OnObjectiveEnded_Params
	{	};

	/**
	 * Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.ReceiveBeginPlay
	 */
	struct ABP_OBJ_ScriptedSequence_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.ReceiveEndPlay
	 */
	struct ABP_OBJ_ScriptedSequence_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_ScriptedSequence.BP_OBJ_ScriptedSequence_C.ExecuteUbergraph_BP_OBJ_ScriptedSequence
	 */
	struct ABP_OBJ_ScriptedSequence_C_ExecuteUbergraph_BP_OBJ_ScriptedSequence_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_842F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
