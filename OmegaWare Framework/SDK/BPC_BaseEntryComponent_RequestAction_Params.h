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
	 * Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.On Participant Interrupted
	 */
	struct UBPC_BaseEntryComponent_RequestAction_C_OnParticipantInterrupted_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.End Action
	 */
	struct UBPC_BaseEntryComponent_RequestAction_C_EndAction_Params
	{	};

	/**
	 * Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.Request Action
	 */
	struct UBPC_BaseEntryComponent_RequestAction_C_RequestAction_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.OnActionEnd
	 */
	struct UBPC_BaseEntryComponent_RequestAction_C_OnActionEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.OnActionResolved
	 */
	struct UBPC_BaseEntryComponent_RequestAction_C_OnActionResolved_Params
	{
	public:
		struct FGuid                                               RequestID;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnResolvedParams                    Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.Clean Component State
	 */
	struct UBPC_BaseEntryComponent_RequestAction_C_CleanComponentState_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C.ExecuteUbergraph_BPC_BaseEntryComponent_RequestAction
	 */
	struct UBPC_BaseEntryComponent_RequestAction_C_ExecuteUbergraph_BPC_BaseEntryComponent_RequestAction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NDMB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
