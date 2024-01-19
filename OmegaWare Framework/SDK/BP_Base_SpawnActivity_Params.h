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
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.EndBehaviourModifiers
	 */
	struct ABP_Base_SpawnActivity_C_EndBehaviourModifiers_Params
	{
	public:
		class APawn*                                               Agent;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.BeginBehaviourModifiers
	 */
	struct ABP_Base_SpawnActivity_C_BeginBehaviourModifiers_Params
	{
	public:
		class APawn*                                               Agent;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.UnbindFromAgentImpact
	 */
	struct ABP_Base_SpawnActivity_C_UnbindFromAgentImpact_Params
	{
	public:
		class AActor*                                              Agent;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.BindToAgentImpact
	 */
	struct ABP_Base_SpawnActivity_C_BindToAgentImpact_Params
	{
	public:
		class AActor*                                              Agent;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.ShouldImpactEjectParticipants
	 */
	struct ABP_Base_SpawnActivity_C_ShouldImpactEjectParticipants_Params
	{
	public:
		class AActor*                                              AffectedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseImpactEventResultWrapper*                       ImpactEvent;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ParticipantsShouldLeave;                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AGGV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.OnImpactReceived
	 */
	struct ABP_Base_SpawnActivity_C_OnImpactReceived_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseImpactEventResultWrapper*                       ImpactEvent;                                             // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Force Agent To Traversal Position
	 */
	struct ABP_Base_SpawnActivity_C_ForceAgentToTraversalPosition_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantComponent;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XX26[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.AlignTraversalTargetWithGround
	 */
	struct ABP_Base_SpawnActivity_C_AlignTraversalTargetWithGround_Params
	{
	public:
		struct FVector                                             StartPositionOffset;                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Is All Component Activity Complete
	 */
	struct ABP_Base_SpawnActivity_C_IsAllComponentActivityComplete_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ComponentsReady;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Is All Pre-Activity Setup Complete
	 */
	struct ABP_Base_SpawnActivity_C_IsAllPreActivitySetupComplete_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ComponentsReady;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Clear Component Response Counters
	 */
	struct ABP_Base_SpawnActivity_C_ClearComponentResponseCounters_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Setup And Run Ignoring Callbacks
	 */
	struct ABP_Base_SpawnActivity_C_SetupAndRunIgnoringCallbacks_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Clean Up Spawn Process
	 */
	struct ABP_Base_SpawnActivity_C_CleanUpSpawnProcess_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Log Spawn Error Message
	 */
	struct ABP_Base_SpawnActivity_C_LogSpawnErrorMessage_Params
	{
	public:
		class FString                                              ErrorMessage;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Throw Spawn Error
	 */
	struct ABP_Base_SpawnActivity_C_ThrowSpawnError_Params
	{
	public:
		class FString                                              ErrorMessage;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Set Actor Start Location
	 */
	struct ABP_Base_SpawnActivity_C_SetActorStartLocation_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VUBK[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Initialise Actor Instance
	 */
	struct ABP_Base_SpawnActivity_C_InitialiseActorInstance_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.UserConstructionScript
	 */
	struct ABP_Base_SpawnActivity_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Set Up Actor
	 */
	struct ABP_Base_SpawnActivity_C_SetUpActor_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.On Component Pre Activity Setup Complete
	 */
	struct ABP_Base_SpawnActivity_C_OnComponentPreActivitySetupComplete_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.ReceiveBeginPlay
	 */
	struct ABP_Base_SpawnActivity_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.On Participant Will Be Received
	 */
	struct ABP_Base_SpawnActivity_C_OnParticipantWillBeReceived_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.On zombie Can Be Released
	 */
	struct ABP_Base_SpawnActivity_C_OnzombieCanBeReleased_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.On Component Activity Complete
	 */
	struct ABP_Base_SpawnActivity_C_OnComponentActivityComplete_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.ParticipantReceived
	 */
	struct ABP_Base_SpawnActivity_C_ParticipantReceived_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.ParticipantReleasedDelegate
	 */
	struct ABP_Base_SpawnActivity_C_ParticipantReleasedDelegate_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.ExecuteUbergraph_BP_Base_SpawnActivity
	 */
	struct ABP_Base_SpawnActivity_C_ExecuteUbergraph_BP_Base_SpawnActivity_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.OnParticipantWillBeReceived__DelegateSignature
	 */
	struct ABP_Base_SpawnActivity_C_OnParticipantWillBeReceived__DelegateSignature_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.OnDIAICharacterReceived__DelegateSignature
	 */
	struct ABP_Base_SpawnActivity_C_OnDIAICharacterReceived__DelegateSignature_Params
	{
	public:
		class ADIAICharacter*                                      SpawnedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.OnZombieWillBeReleased__DelegateSignature
	 */
	struct ABP_Base_SpawnActivity_C_OnZombieWillBeReleased__DelegateSignature_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.On Actor Setup Complete__DelegateSignature
	 */
	struct ABP_Base_SpawnActivity_C_OnActorSetupComplete__DelegateSignature_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Trigger Activity__DelegateSignature
	 */
	struct ABP_Base_SpawnActivity_C_TriggerActivity__DelegateSignature_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.OnParticipantReceived__DelegateSignature
	 */
	struct ABP_Base_SpawnActivity_C_OnParticipantReceived__DelegateSignature_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
