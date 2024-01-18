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
	 * Function BPC_Carryable.BPC_Carryable_C.UnbindImpacyEvents
	 */
	struct UBPC_Carryable_C_UnbindImpacyEvents_Params
	{	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.GenerateMeleeImpact
	 */
	struct UBPC_Carryable_C_GenerateMeleeImpact_Params
	{
	public:
		TArray<struct FHitResult>                                  HitResults;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		struct FVector                                             SweepDirection;                                          // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AttackOrigin;                                            // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.BindImpactEvents
	 */
	struct UBPC_Carryable_C_BindImpactEvents_Params
	{	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.GetOwnerKnowledgeCompRef
	 */
	struct UBPC_Carryable_C_GetOwnerKnowledgeCompRef_Params
	{
	public:
		class UKnowledgeBaseComponent*                             KnowledgeBaseRef;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.GetOwnerActionCompRef
	 */
	struct UBPC_Carryable_C_GetOwnerActionCompRef_Params
	{	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.SetUpBalancingData
	 */
	struct UBPC_Carryable_C_SetUpBalancingData_Params
	{	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.DockCarryable
	 */
	struct UBPC_Carryable_C_DockCarryable_Params
	{
	public:
		struct FTransform                                          DockTransform;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       DisableAfterDock;                                        // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6RWO[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.EquippableAssignedToPaperDollSlot
	 */
	struct UBPC_Carryable_C_EquippableAssignedToPaperDollSlot_Params
	{
	public:
		class UPaperDollSlot*                                      PaperDollSlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.AttackHold
	 */
	struct UBPC_Carryable_C_AttackHold_Params
	{	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.AttackReleased
	 */
	struct UBPC_Carryable_C_AttackReleased_Params
	{	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.EquippableRemovedFromPaperDollSlot
	 */
	struct UBPC_Carryable_C_EquippableRemovedFromPaperDollSlot_Params
	{
	public:
		class UPaperDollSlot*                                      PaperDollSlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.AttackPressed
	 */
	struct UBPC_Carryable_C_AttackPressed_Params
	{	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.ReceiveBeginPlay
	 */
	struct UBPC_Carryable_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.RequestCustomHeavyAttackAction
	 */
	struct UBPC_Carryable_C_RequestCustomHeavyAttackAction_Params
	{	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.SkipToHold
	 */
	struct UBPC_Carryable_C_SkipToHold_Params
	{	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.OnMeleeHit
	 */
	struct UBPC_Carryable_C_OnMeleeHit_Params
	{
	public:
		TArray<struct FHitResult>                                  HitResults;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		struct FVector                                             SweepDirection;                                          // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AttackOrigin;                                            // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.ExecuteUbergraph_BPC_Carryable
	 */
	struct UBPC_Carryable_C_ExecuteUbergraph_BPC_Carryable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S628[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Carryable.BPC_Carryable_C.CarryableUnDocked__DelegateSignature
	 */
	struct UBPC_Carryable_C_CarryableUnDocked__DelegateSignature_Params
	{
	public:
		class AActor*                                              UndockedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
