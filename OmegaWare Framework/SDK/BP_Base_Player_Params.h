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
	 * Function BP_Base_Player.BP_Base_Player_C.SetupFaceFX
	 */
	struct ABP_Base_Player_C_SetupFaceFX_Params
	{
	public:
		class UFaceFXActor*                                        FaceFXActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AttachPointName;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.TryNotifyInsufficientStamina
	 */
	struct ABP_Base_Player_C_TryNotifyInsufficientStamina_Params
	{
	public:
		bool                                                       HasEnoughStamina;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldNotify;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.SetHeavyAttackRequester
	 */
	struct ABP_Base_Player_C_SetHeavyAttackRequester_Params
	{
	public:
		class ABP_Base_MeleeWeaponItem_C*                          BaseMeleeWeaponItem;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.TransformWorldPositionToMapPosition
	 */
	struct ABP_Base_Player_C_TransformWorldPositionToMapPosition_Params
	{
	public:
		struct FVector                                             WorldPosition;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             MapPosition;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.GetItemOrEquippable
	 */
	struct ABP_Base_Player_C_GetItemOrEquippable_Params
	{
	public:
		class UObject*                                             ItemOrEquipable;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.QuickThrow
	 */
	struct ABP_Base_Player_C_QuickThrow_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.RequestLadderAction
	 */
	struct ABP_Base_Player_C_RequestLadderAction_Params
	{
	public:
		class USplineComponent*                                    SplineComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TopRungHeight;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      StepRungHeight;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BottomRungHeight;                                        // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumRungs;                                                // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IRM7[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InitGeneralPlayerParams
	 */
	struct ABP_Base_Player_C_InitGeneralPlayerParams_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.SetLowStaminaFact
	 */
	struct ABP_Base_Player_C_SetLowStaminaFact_Params
	{
	public:
		float                                                      CurrentStamina;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.SetWeaponProxyClass
	 */
	struct ABP_Base_Player_C_SetWeaponProxyClass_Params
	{
	public:
		class UClass*                                              WeaponClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EWeaponHand                                                Hand;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WHSJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Base_MeleeWeapon_C*                              WeaponRef;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.IsCurrentControlConfigGamepad
	 */
	struct ABP_Base_Player_C_IsCurrentControlConfigGamepad_Params
	{
	public:
		bool                                                       IsGamepad;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4XT5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.IsCurrentControlConfigMouse
	 */
	struct ABP_Base_Player_C_IsCurrentControlConfigMouse_Params
	{
	public:
		bool                                                       IsMouse;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OHO3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.GetCurrentInputConfig
	 */
	struct ABP_Base_Player_C_GetCurrentInputConfig_Params
	{
	public:
		class UInputMapperActionOverrideConfig*                    Config;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.GetControllerPitch
	 */
	struct ABP_Base_Player_C_GetControllerPitch_Params
	{
	public:
		float                                                      ReturnVlaue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IQVZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.CreatePlayerNameSlates
	 */
	struct ABP_Base_Player_C_CreatePlayerNameSlates_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.SelectWeapon
	 */
	struct ABP_Base_Player_C_SelectWeapon_Params
	{
	public:
		class UClass*                                              WeaponClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHoldCategory                                              IsDualWield;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QNPS[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.CanAffordAction
	 */
	struct ABP_Base_Player_C_CanAffordAction_Params
	{
	public:
		float                                                      ActionCost;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanTakeAction;                                           // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.Collision Slow Down on Hit
	 */
	struct ABP_Base_Player_C_CollisionSlowDownonHit_Params
	{
	public:
		class UPrimitiveComponent*                                 PrimComp;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Impulse;                                                 // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8L3W[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0018(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.DoJump
	 */
	struct ABP_Base_Player_C_DoJump_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.IsMeleeAimActionRequestValid
	 */
	struct ABP_Base_Player_C_IsMeleeAimActionRequestValid_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.HandleNoStaminaAttackCondition
	 */
	struct ABP_Base_Player_C_HandleNoStaminaAttackCondition_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.CanAffordActionStaminaCost_Native
	 */
	struct ABP_Base_Player_C_CanAffordActionStaminaCost_Native_Params
	{
	public:
		float                                                      ActionStaminaCost;                                       // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsAbsolute;                                             // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bNotifyIfLackingStamina;                                 // 0x0005(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0006(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.EndLowStaminaBasePose
	 */
	struct ABP_Base_Player_C_EndLowStaminaBasePose_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.HandleStaminaScreenFX
	 */
	struct ABP_Base_Player_C_HandleStaminaScreenFX_Params
	{
	public:
		float                                                      Stamina;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.DoCrouch
	 */
	struct ABP_Base_Player_C_DoCrouch_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.SetupActionRequestHelpers
	 */
	struct ABP_Base_Player_C_SetupActionRequestHelpers_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.UserConstructionScript
	 */
	struct ABP_Base_Player_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.Timeline_1__FinishedFunc
	 */
	struct ABP_Base_Player_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.Timeline_1__UpdateFunc
	 */
	struct ABP_Base_Player_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Base_Player_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Base_Player_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_DebugPlayMontage_InputMapperActionEventNode_21
	 */
	struct ABP_Base_Player_C_InpMapActEvt_DebugPlayMontage_InputMapperActionEventNode_21_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G8B1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_DebugSwitchToThirdPerson_InputMapperActionEventNode_20
	 */
	struct ABP_Base_Player_C_InpMapActEvt_DebugSwitchToThirdPerson_InputMapperActionEventNode_20_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4PDD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_DebugSwitchThirdPersonMesh_InputMapperActionEventNode_19
	 */
	struct ABP_Base_Player_C_InpMapActEvt_DebugSwitchThirdPersonMesh_InputMapperActionEventNode_19_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WQDJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Heal_InputMapperActionEventNode_18
	 */
	struct ABP_Base_Player_C_InpMapActEvt_Heal_InputMapperActionEventNode_18_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WJR5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Crouch_InputMapperActionEventNode_17
	 */
	struct ABP_Base_Player_C_InpMapActEvt_Crouch_InputMapperActionEventNode_17_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F93E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Sprint_InputMapperActionEventNode_16
	 */
	struct ABP_Base_Player_C_InpMapActEvt_Sprint_InputMapperActionEventNode_16_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LCW4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Jump_InputMapperActionEventNode_15
	 */
	struct ABP_Base_Player_C_InpMapActEvt_Jump_InputMapperActionEventNode_15_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K05Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Fury_InputMapperActionEventNode_14
	 */
	struct ABP_Base_Player_C_InpMapActEvt_Fury_InputMapperActionEventNode_14_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PGMN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_QuickThrow_InputMapperActionEventNode_13
	 */
	struct ABP_Base_Player_C_InpMapActEvt_QuickThrow_InputMapperActionEventNode_13_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ACF4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_ClassExclusiveActionHold_InputMapperActionEventNode_12
	 */
	struct ABP_Base_Player_C_InpMapActEvt_ClassExclusiveActionHold_InputMapperActionEventNode_12_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A9VG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_ClassExclusiveActionPress_InputMapperActionEventNode_11
	 */
	struct ABP_Base_Player_C_InpMapActEvt_ClassExclusiveActionPress_InputMapperActionEventNode_11_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L14H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_OriginalAimPose_InputMapperActionEventNode_10
	 */
	struct ABP_Base_Player_C_InpMapActEvt_OriginalAimPose_InputMapperActionEventNode_10_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NBN4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Attack_InputMapperActionEventNode_9
	 */
	struct ABP_Base_Player_C_InpMapActEvt_Attack_InputMapperActionEventNode_9_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D6RI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_DropCarryables_InputMapperActionEventNode_8
	 */
	struct ABP_Base_Player_C_InpMapActEvt_DropCarryables_InputMapperActionEventNode_8_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7M4G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Knockback_InputMapperActionEventNode_7
	 */
	struct ABP_Base_Player_C_InpMapActEvt_Knockback_InputMapperActionEventNode_7_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U9IH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_SpecialAttack_InputMapperActionEventNode_6
	 */
	struct ABP_Base_Player_C_InpMapActEvt_SpecialAttack_InputMapperActionEventNode_6_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y778[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_FurySpecialAttack_InputMapperActionEventNode_5
	 */
	struct ABP_Base_Player_C_InpMapActEvt_FurySpecialAttack_InputMapperActionEventNode_5_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1VFY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_ToggleFlashlightWheelOnly_InputMapperActionEventNode_4
	 */
	struct ABP_Base_Player_C_InpMapActEvt_ToggleFlashlightWheelOnly_InputMapperActionEventNode_4_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IDKO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_ToggleFlashlightAnywhere_InputMapperActionEventNode_3
	 */
	struct ABP_Base_Player_C_InpMapActEvt_ToggleFlashlightAnywhere_InputMapperActionEventNode_3_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6SNV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_FurySpecialAttackHold_InputMapperActionEventNode_2
	 */
	struct ABP_Base_Player_C_InpMapActEvt_FurySpecialAttackHold_InputMapperActionEventNode_2_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NLLI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.OnRequestFailed_6CAA099D4F39D898F5DFFCA68E9B1851
	 */
	struct ABP_Base_Player_C_OnRequestFailed_6CAA099D4F39D898F5DFFCA68E9B1851_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.OnCustomSignal_6CAA099D4F39D898F5DFFCA68E9B1851
	 */
	struct ABP_Base_Player_C_OnCustomSignal_6CAA099D4F39D898F5DFFCA68E9B1851_Params
	{
	public:
		struct FCharacterActionOnCustomSignalParams                CustomSignalParams;                                      // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.OnEnd_6CAA099D4F39D898F5DFFCA68E9B1851
	 */
	struct ABP_Base_Player_C_OnEnd_6CAA099D4F39D898F5DFFCA68E9B1851_Params
	{
	public:
		struct FCharacterActionOnEndParams                         EndParams;                                               // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.OnBegin_6CAA099D4F39D898F5DFFCA68E9B1851
	 */
	struct ABP_Base_Player_C_OnBegin_6CAA099D4F39D898F5DFFCA68E9B1851_Params
	{
	public:
		struct FCharacterActionOnBeginParams                       BeginParams;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.OnCancelled_6CAA099D4F39D898F5DFFCA68E9B1851
	 */
	struct ABP_Base_Player_C_OnCancelled_6CAA099D4F39D898F5DFFCA68E9B1851_Params
	{
	public:
		struct FCharacterActionOnCancelledParams                   CancelledParams;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.OnResolved_6CAA099D4F39D898F5DFFCA68E9B1851
	 */
	struct ABP_Base_Player_C_OnResolved_6CAA099D4F39D898F5DFFCA68E9B1851_Params
	{
	public:
		struct FCharacterActionOnResolvedParams                    ResolvedParams;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_VoicePTT_InputMapperActionEventNode_1
	 */
	struct ABP_Base_Player_C_InpMapActEvt_VoicePTT_InputMapperActionEventNode_1_Params
	{
	public:
		EInputActionEventType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LVVF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.Toggle Character Visibility
	 */
	struct ABP_Base_Player_C_ToggleCharacterVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.OnSetPlayerState
	 */
	struct ABP_Base_Player_C_OnSetPlayerState_Params
	{
	public:
		class APlayerState*                                        NewPlayerState;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.BndEvt__BPC_Player_Stamina_K2Node_ComponentBoundEvent_1_StaminaUpdatedDelegate__DelegateSignature
	 */
	struct ABP_Base_Player_C_BndEvt__BPC_Player_Stamina_K2Node_ComponentBoundEvent_1_StaminaUpdatedDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStamina;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Stamina;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.SetPlayerInCutscene
	 */
	struct ABP_Base_Player_C_SetPlayerInCutscene_Params
	{
	public:
		bool                                                       CutsceneActive;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W04D[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          TeleportTransform;                                       // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.ReceiveBeginPlay
	 */
	struct ABP_Base_Player_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.ReceivePostInitializeComponents
	 */
	struct ABP_Base_Player_C_ReceivePostInitializeComponents_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.ReceiveUnpossessed
	 */
	struct ABP_Base_Player_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.ScaleCrosshair
	 */
	struct ABP_Base_Player_C_ScaleCrosshair_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.ConfigChanged
	 */
	struct ABP_Base_Player_C_ConfigChanged_Params
	{
	public:
		class UInputMapperActionOverrideConfig*                    NewConfig;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.AssumingDirectControl
	 */
	struct ABP_Base_Player_C_AssumingDirectControl_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.No Stamina Attack Blendable Fade
	 */
	struct ABP_Base_Player_C_NoStaminaAttackBlendableFade_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.ReceivePossessed
	 */
	struct ABP_Base_Player_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.TutorialSampleFunction
	 */
	struct ABP_Base_Player_C_TutorialSampleFunction_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.WeaponHit
	 */
	struct ABP_Base_Player_C_WeaponHit_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Defender;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_Base_MeleeWeapon_C*                              Weapon;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.Heavy Attack Whizzy Blendable Fade
	 */
	struct ABP_Base_Player_C_HeavyAttackWhizzyBlendableFade_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.BlendableFadingFromCurve
	 */
	struct ABP_Base_Player_C_BlendableFadingFromCurve_Params
	{
	public:
		class UMaterialInstance*                                   Blendable;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCurveFloat*                                         IntensityCurve;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OverrideCurvePlayRate;                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReverseFromPosition;                                     // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AdditionalStrength;                                      // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.Heavy Attack Charge Blendable Fade In
	 */
	struct ABP_Base_Player_C_HeavyAttackChargeBlendableFadeIn_Params
	{
	public:
		float                                                      ChargeUpLength;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.Heavy Attack Charge Blendable Fade Out
	 */
	struct ABP_Base_Player_C_HeavyAttackChargeBlendableFadeOut_Params
	{
	public:
		float                                                      ChargeUpLength;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.ResetNoStaminaAttackState
	 */
	struct ABP_Base_Player_C_ResetNoStaminaAttackState_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.AssignedWeaponChanged
	 */
	struct ABP_Base_Player_C_AssignedWeaponChanged_Params
	{
	public:
		class UEquippableComponent*                                PreviousItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UEquippableComponent*                                NewItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.ResetHeavyAttackSettings
	 */
	struct ABP_Base_Player_C_ResetHeavyAttackSettings_Params
	{
	public:
		class UEquippableComponent*                                Current;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.BndEvt__CollisionPelvis_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Base_Player_C_BndEvt__CollisionPelvis_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_30GD[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.BndEvt__CollisionLeftFoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Base_Player_C_BndEvt__CollisionLeftFoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LURF[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.BndEvt__CollisionRightFoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Base_Player_C_BndEvt__CollisionRightFoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6LXL[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.BndEvt__CollisionLeftHand_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Base_Player_C_BndEvt__CollisionLeftHand_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R2O3[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.BndEvt__CollisionRightHand_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Base_Player_C_BndEvt__CollisionRightHand_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FCLV[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.InitializeFaceFX
	 */
	struct ABP_Base_Player_C_InitializeFaceFX_Params
	{
	public:
		struct FFaceFXParams                                       FaceFXParams;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.BndEvt__BPC_Player_WeaponProxy_K2Node_ComponentBoundEvent_6_OnChildActorSet__DelegateSignature
	 */
	struct ABP_Base_Player_C_BndEvt__BPC_Player_WeaponProxy_K2Node_ComponentBoundEvent_6_OnChildActorSet__DelegateSignature_Params
	{
	public:
		class AActor*                                              NewActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPerspective                                               Perspective;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.ExecuteUbergraph_BP_Base_Player
	 */
	struct ABP_Base_Player_C_ExecuteUbergraph_BP_Base_Player_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.AttackInputPressed__DelegateSignature
	 */
	struct ABP_Base_Player_C_AttackInputPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.OnBeginPlay__DelegateSignature
	 */
	struct ABP_Base_Player_C_OnBeginPlay__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.NewWeaponEquipped__DelegateSignature
	 */
	struct ABP_Base_Player_C_NewWeaponEquipped__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Base_Player.BP_Base_Player_C.Possessed__DelegateSignature
	 */
	struct ABP_Base_Player_C_Possessed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
