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
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.InitialiseArmingAudio
	 */
	struct ABP_Base_Suicider_C_InitialiseArmingAudio_Params
	{	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.AttemptRequestSuicideExecution
	 */
	struct ABP_Base_Suicider_C_AttemptRequestSuicideExecution_Params
	{
	public:
		bool                                                       TargetConditionNotRequired;                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IMCG[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.RemoveAllSuiciderDebugText
	 */
	struct ABP_Base_Suicider_C_RemoveAllSuiciderDebugText_Params
	{	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.AddSuiciderDebugText
	 */
	struct ABP_Base_Suicider_C_AddSuiciderDebugText_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FLinearColor                                        Colour;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Identifier;                                              // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OAAE[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.UserConstructionScript
	 */
	struct ABP_Base_Suicider_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.ArmingIntensity__FinishedFunc
	 */
	struct ABP_Base_Suicider_C_ArmingIntensity__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.ArmingIntensity__UpdateFunc
	 */
	struct ABP_Base_Suicider_C_ArmingIntensity__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.ReceiveBeginPlay
	 */
	struct ABP_Base_Suicider_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.TriggerDeath
	 */
	struct ABP_Base_Suicider_C_TriggerDeath_Params
	{	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.SetArming
	 */
	struct ABP_Base_Suicider_C_SetArming_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X9T5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Duration;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.SetSuiciderDebug
	 */
	struct ABP_Base_Suicider_C_SetSuiciderDebug_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.OnActionEnd
	 */
	struct ABP_Base_Suicider_C_OnActionEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ActionType;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterActionEndedReason                                Reason;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.OnDamageReceived
	 */
	struct ABP_Base_Suicider_C_OnDamageReceived_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OriginalDamage;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageTaken;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDamageEvent                                        DamageEvent;                                             // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventInstigator                                    InstigatedBy;                                            // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDSDamageData                                       DSDamageData;                                            // 0x0038(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.BoostIntensity
	 */
	struct ABP_Base_Suicider_C_BoostIntensity_Params
	{
	public:
		float                                                      IntensityPortionChange;                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      IntensityLimit;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.OnActionBegin
	 */
	struct ABP_Base_Suicider_C_OnActionBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ActionType;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.BndEvt__ExplosionExecutionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Base_Suicider_C_BndEvt__ExplosionExecutionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FEJF[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.ArmingIntensityFastTrack
	 */
	struct ABP_Base_Suicider_C_ArmingIntensityFastTrack_Params
	{	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.CombatStateChanged
	 */
	struct ABP_Base_Suicider_C_CombatStateChanged_Params
	{
	public:
		ECosmeticCombatState                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.ExecuteStateResponse
	 */
	struct ABP_Base_Suicider_C_ExecuteStateResponse_Params
	{	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.PauseArming
	 */
	struct ABP_Base_Suicider_C_PauseArming_Params
	{	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.OnCombatTargetChanged
	 */
	struct ABP_Base_Suicider_C_OnCombatTargetChanged_Params
	{
	public:
		class UCombatTargetComponent*                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.ReceivePossessed
	 */
	struct ABP_Base_Suicider_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.OnAlternativeDeathConditions
	 */
	struct ABP_Base_Suicider_C_OnAlternativeDeathConditions_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.ReceiveEndPlay
	 */
	struct ABP_Base_Suicider_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.OnDead
	 */
	struct ABP_Base_Suicider_C_OnDead_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Suicider.BP_Base_Suicider_C.ExecuteUbergraph_BP_Base_Suicider
	 */
	struct ABP_Base_Suicider_C_ExecuteUbergraph_BP_Base_Suicider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
