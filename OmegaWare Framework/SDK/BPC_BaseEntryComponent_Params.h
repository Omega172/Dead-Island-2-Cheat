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
	 * Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Log Debug Message With Participant
	 */
	struct UBPC_BaseEntryComponent_C_LogDebugMessageWithParticipant_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDSLogVerbosity                                            LogVerbosity;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4Z08[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Log Debug Message
	 */
	struct UBPC_BaseEntryComponent_C_LogDebugMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EDSLogVerbosity                                            LogVerbosity;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Setup component Activity Data
	 */
	struct UBPC_BaseEntryComponent_C_SetupcomponentActivityData_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Clean Component State
	 */
	struct UBPC_BaseEntryComponent_C_CleanComponentState_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Perform Component Activity
	 */
	struct UBPC_BaseEntryComponent_C_PerformComponentActivity_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Prepare to Perform Component Activity
	 */
	struct UBPC_BaseEntryComponent_C_PreparetoPerformComponentActivity_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.ReceiveBeginPlay
	 */
	struct UBPC_BaseEntryComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.On Owner Participant Will Arrive
	 */
	struct UBPC_BaseEntryComponent_C_OnOwnerParticipantWillArrive_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.On Should Perform Component Activity
	 */
	struct UBPC_BaseEntryComponent_C_OnShouldPerformComponentActivity_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.On Component Activity Complete
	 */
	struct UBPC_BaseEntryComponent_C_OnComponentActivityComplete_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.On Owner Participant Received
	 */
	struct UBPC_BaseEntryComponent_C_OnOwnerParticipantReceived_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.OnZombieWillBeReleased
	 */
	struct UBPC_BaseEntryComponent_C_OnZombieWillBeReleased_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.ExecuteUbergraph_BPC_BaseEntryComponent
	 */
	struct UBPC_BaseEntryComponent_C_ExecuteUbergraph_BPC_BaseEntryComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Perform Pre-Animation trigger Logic__DelegateSignature
	 */
	struct UBPC_BaseEntryComponent_C_PerformPreAnimationtriggerLogic__DelegateSignature_Params
	{	};

	/**
	 * Function BPC_BaseEntryComponent.BPC_BaseEntryComponent_C.Perform Pre-Animation Setup Logic__DelegateSignature
	 */
	struct UBPC_BaseEntryComponent_C_PerformPreAnimationSetupLogic__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
