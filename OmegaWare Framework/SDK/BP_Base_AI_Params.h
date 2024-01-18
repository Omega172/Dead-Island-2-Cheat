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
	 * Function BP_Base_AI.BP_Base_AI_C.AllowInteraction
	 */
	struct ABP_Base_AI_C_AllowInteraction_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractiveComponent*                               InteractiveComponent;                                    // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LLV8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.GetInteractIconClass
	 */
	struct ABP_Base_AI_C_GetInteractIconClass_Params
	{
	public:
		class UInteractiveComponent*                               InteractiveComponent;                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.RefreshAIHUDSlateVisbility
	 */
	struct ABP_Base_AI_C_RefreshAIHUDSlateVisbility_Params
	{	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.Increment Counter Facts
	 */
	struct ABP_Base_AI_C_IncrementCounterFacts_Params
	{
	public:
		TArray<struct FKnowledgeBaseFactKey>                       FactsToApply;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.RemoveAIHUDSlate
	 */
	struct ABP_Base_AI_C_RemoveAIHUDSlate_Params
	{	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.AddAIHUDSlate
	 */
	struct ABP_Base_AI_C_AddAIHUDSlate_Params
	{	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.ToggleDebugPassive
	 */
	struct ABP_Base_AI_C_ToggleDebugPassive_Params
	{
	public:
		bool                                                       PassiveRequested;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5BPK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Instigator;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.CounterPreConditionsMet
	 */
	struct ABP_Base_AI_C_CounterPreConditionsMet_Params
	{
	public:
		bool                                                       ConditionsMet;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.ApplyPerks
	 */
	struct ABP_Base_AI_C_ApplyPerks_Params
	{
	public:
		TArray<class UPerkDefinition*>                             PerksToApply;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.OnRep_Is AI HUD Visible
	 */
	struct ABP_Base_AI_C_OnRep_IsAIHUDVisible_Params
	{	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.AddParticleSystemComponent
	 */
	struct ABP_Base_AI_C_AddParticleSystemComponent_Params
	{
	public:
		class UParticleSystem*                                     ParticleTemplate;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UParticleSystemComponent*                            ParticleSystemComponent;                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.AddProjectileSpawner
	 */
	struct ABP_Base_AI_C_AddProjectileSpawner_Params
	{
	public:
		float                                                      ProjectileSpawnRate;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HY0K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ProjectileClass;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DecayLength;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JBKP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveFloat*                                         VelocityDecayCurve;                                      // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCurveFloat*                                         OffsetDecayCurve;                                        // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             MinimumRandomOffset;                                     // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             MaximumRandomOffset;                                     // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0040(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H3NK[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBPC_ProjectileSpawner_C*                            ProjectileSpawnerComponent;                              // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_39ZS[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.OnCounterInteractionCompleteInternal
	 */
	struct ABP_Base_AI_C_OnCounterInteractionCompleteInternal_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCoopSequenceTaskSetupParams_Counter*                CounterSetupParams;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.InitHitReactBalacingData
	 */
	struct ABP_Base_AI_C_InitHitReactBalacingData_Params
	{	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.OnCounterInteractionComplete
	 */
	struct ABP_Base_AI_C_OnCounterInteractionComplete_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCoopSequenceTaskSetupParams_Counter*                CounterSetupParams;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.TryToCreateCrawler
	 */
	struct ABP_Base_AI_C_TryToCreateCrawler_Params
	{	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.GetSpawnBehaviourTargetActor
	 */
	struct ABP_Base_AI_C_GetSpawnBehaviourTargetActor_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.CombatStateChanged
	 */
	struct ABP_Base_AI_C_CombatStateChanged_Params
	{
	public:
		ECosmeticCombatState                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FGT4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.IsAlive
	 */
	struct ABP_Base_AI_C_IsAlive_Params
	{
	public:
		bool                                                       Alive;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YC1I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.UserConstructionScript
	 */
	struct ABP_Base_AI_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.ReplicateState_6BAAE5034F7256B2BD052ABA7E7992D1
	 */
	struct ABP_Base_AI_C_ReplicateState_6BAAE5034F7256B2BD052ABA7E7992D1_Params
	{
	public:
		int32_t                                                    PredictionKey;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_64C5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomParamsBase*                                   Params;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.Interrupted_6BAAE5034F7256B2BD052ABA7E7992D1
	 */
	struct ABP_Base_AI_C_Interrupted_6BAAE5034F7256B2BD052ABA7E7992D1_Params
	{
	public:
		class UCoopSequenceTask*                                   Task;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.Completed_6BAAE5034F7256B2BD052ABA7E7992D1
	 */
	struct ABP_Base_AI_C_Completed_6BAAE5034F7256B2BD052ABA7E7992D1_Params
	{
	public:
		class UCoopSequenceTask*                                   Task;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.Activated_6BAAE5034F7256B2BD052ABA7E7992D1
	 */
	struct ABP_Base_AI_C_Activated_6BAAE5034F7256B2BD052ABA7E7992D1_Params
	{	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.ReplicateState_EA1999CC48FDB102BE36DA8992CA26FF
	 */
	struct ABP_Base_AI_C_ReplicateState_EA1999CC48FDB102BE36DA8992CA26FF_Params
	{
	public:
		int32_t                                                    PredictionKey;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_90ME[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomParamsBase*                                   Params;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.Interrupted_EA1999CC48FDB102BE36DA8992CA26FF
	 */
	struct ABP_Base_AI_C_Interrupted_EA1999CC48FDB102BE36DA8992CA26FF_Params
	{
	public:
		class UCoopSequenceTask*                                   Task;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.Completed_EA1999CC48FDB102BE36DA8992CA26FF
	 */
	struct ABP_Base_AI_C_Completed_EA1999CC48FDB102BE36DA8992CA26FF_Params
	{
	public:
		class UCoopSequenceTask*                                   Task;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.Activated_EA1999CC48FDB102BE36DA8992CA26FF
	 */
	struct ABP_Base_AI_C_Activated_EA1999CC48FDB102BE36DA8992CA26FF_Params
	{	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.ReceivePossessed
	 */
	struct ABP_Base_AI_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.Death
	 */
	struct ABP_Base_AI_C_Death_Params
	{	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.ReceiveBeginPlay
	 */
	struct ABP_Base_AI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.BndEvt__BPC_AI_MultiPartDamageable_K2Node_ComponentBoundEvent_0_ActorDeadDelegate__DelegateSignature
	 */
	struct ABP_Base_AI_C_BndEvt__BPC_AI_MultiPartDamageable_K2Node_ComponentBoundEvent_0_ActorDeadDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.BndEvt__HeadStompInteractive_K2Node_ComponentBoundEvent_3_InteractDelegate__DelegateSignature
	 */
	struct ABP_Base_AI_C_BndEvt__HeadStompInteractive_K2Node_ComponentBoundEvent_3_InteractDelegate__DelegateSignature_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QZ6A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.BndEvt__CounterInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature
	 */
	struct ABP_Base_AI_C_BndEvt__CounterInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MVEP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.ReceiveEndPlay
	 */
	struct ABP_Base_AI_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.OnHUDVisibilityUpdated
	 */
	struct ABP_Base_AI_C_OnHUDVisibilityUpdated_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.ExecuteUbergraph_BP_Base_AI
	 */
	struct ABP_Base_AI_C_ExecuteUbergraph_BP_Base_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AI.BP_Base_AI_C.OnBeginPlay__DelegateSignature
	 */
	struct ABP_Base_AI_C_OnBeginPlay__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
