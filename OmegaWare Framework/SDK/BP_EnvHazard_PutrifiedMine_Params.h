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
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.OnRep_Broken
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_OnRep_Broken_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.OnRep_Detonated
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_OnRep_Detonated_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.PlayerExitedRange
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_PlayerExitedRange_Params
	{
	public:
		class ADIPlayerCharacter*                                  Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.CheckPawns
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_CheckPawns_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.PlayerEnteredRange
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_PlayerEnteredRange_Params
	{
	public:
		class ADIPlayerCharacter*                                  Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.VisibilityTest
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_VisibilityTest_Params
	{
	public:
		struct FVector                                             OtherLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSuccess;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IFHI[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.CheckVectorInConeWS
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_CheckVectorInConeWS_Params
	{
	public:
		struct FVector                                             ConeOrigin;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ConeDirection;                                           // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ConeRadius;                                              // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OtherLocation;                                           // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QNBU[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.CheckAngle
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_CheckAngle_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I3A0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.ShowTriggerCone
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_ShowTriggerCone_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.HideRadii
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_HideRadii_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.ShowBlastRadius
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_ShowBlastRadius_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.ShowDetectionRadius
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_ShowDetectionRadius_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.CacheABP
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_CacheABP_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.PlayChargeSound
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_PlayChargeSound_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.Timeline_0__FinishedFunc
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.Timeline_0__UpdateFunc
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.BlueprintOnBeginAction
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_BlueprintOnBeginAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ActionType;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DSLY[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.TriggerBrokenAction
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_TriggerBrokenAction_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_3_OnAnyImpactEventReceivedDelegate__DelegateSignature
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_3_OnAnyImpactEventReceivedDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseImpactEventResultWrapper*                       ImpactEvent;                                             // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.BndEvt__StateTransmitter_K2Node_ComponentBoundEvent_4_OnStatusTypeActivated__DelegateSignature
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_BndEvt__StateTransmitter_K2Node_ComponentBoundEvent_4_OnStatusTypeActivated__DelegateSignature_Params
	{
	public:
		class UStateTransmitterComponent*                          Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETransmittableStatus                                       StatusType;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4GA7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Strength;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.OnTerminal
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_OnTerminal_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.ReceiveBeginPlay
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.OnBroken
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_OnBroken_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.Detonate
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_Detonate_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.HideMesh
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_HideMesh_Params
	{	};

	/**
	 * Function BP_EnvHazard_PutrifiedMine.BP_EnvHazard_PutrifiedMine_C.ExecuteUbergraph_BP_EnvHazard_PutrifiedMine
	 */
	struct ABP_EnvHazard_PutrifiedMine_C_ExecuteUbergraph_BP_EnvHazard_PutrifiedMine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XRUZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
