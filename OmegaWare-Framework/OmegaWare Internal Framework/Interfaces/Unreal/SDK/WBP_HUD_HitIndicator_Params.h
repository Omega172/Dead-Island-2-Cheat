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
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnImpactCosmeticEffect_Fire
	 */
	struct UWBP_HUD_HitIndicator_C_OnImpactCosmeticEffect_Fire_Params
	{	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.LocationPlayGradientEffect
	 */
	struct UWBP_HUD_HitIndicator_C_LocationPlayGradientEffect_Params
	{
	public:
		class UWBP_GraidentIndicatorElement_C*                     Indicator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Angle;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Translation;                                             // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PivotY;                                                  // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.GradientImpactAngleAndTranslation
	 */
	struct UWBP_HUD_HitIndicator_C_GradientImpactAngleAndTranslation_Params
	{
	public:
		class AActor*                                              DamageCauser;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPointImpactEventResult                             ImpactEvent;                                             // 0x0008(0x0300)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		float                                                      Angle;                                                   // 0x0308(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Translation;                                             // 0x030C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PivotY;                                                  // 0x0314(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.DirectionToClampedLocation
	 */
	struct UWBP_HUD_HitIndicator_C_DirectionToClampedLocation_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Min;                                                     // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Max;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Angle;                                                   // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Translation;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PivotY;                                                  // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.CheckFact
	 */
	struct UWBP_HUD_HitIndicator_C_CheckFact_Params
	{
	public:
		struct FPointImpactEventResult                             Impact;                                                  // 0x0000(0x0300)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		struct FKnowledgeBaseFactKey                               Fact;                                                    // 0x0300(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x030C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.DirectionToLocation
	 */
	struct UWBP_HUD_HitIndicator_C_DirectionToLocation_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Angle;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Translation;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PivotY;                                                  // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OutsideImpactAngleAndTranslation
	 */
	struct UWBP_HUD_HitIndicator_C_OutsideImpactAngleAndTranslation_Params
	{
	public:
		class AActor*                                              DamageCauser;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPointImpactEventResult                             ImpactEvent;                                             // 0x0008(0x0300)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		float                                                      Angle;                                                   // 0x0308(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Translation;                                             // 0x030C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PivotY;                                                  // 0x0314(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.GetDamageCauser
	 */
	struct UWBP_HUD_HitIndicator_C_GetDamageCauser_Params
	{
	public:
		struct FPointImpactEventResult                             ImpactEvent;                                             // 0x0000(0x0300)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class AActor*                                              DamageCauser;                                            // 0x0300(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.InsideImpactAngleAndTranslation
	 */
	struct UWBP_HUD_HitIndicator_C_InsideImpactAngleAndTranslation_Params
	{
	public:
		class AActor*                                              DamageCauser;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPointImpactEventResult                             ImpactEvent;                                             // 0x0008(0x0300)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		float                                                      Angle;                                                   // 0x0308(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Translation;                                             // 0x030C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_58HT[0xC];                                   // 0x0314(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.LocationPlayHitEffect
	 */
	struct UWBP_HUD_HitIndicator_C_LocationPlayHitEffect_Params
	{
	public:
		class UWBP_HitIndicatorElement_C*                          Indicator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Angle;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Translation;                                             // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PivotY;                                                  // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnImpactCosmeticEffect
	 */
	struct UWBP_HUD_HitIndicator_C_OnImpactCosmeticEffect_Params
	{	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.ShowHitIndicator
	 */
	struct UWBP_HUD_HitIndicator_C_ShowHitIndicator_Params
	{
	public:
		struct FPointImpactEventResult                             ImpactEvent;                                             // 0x0000(0x0300)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.UpdatePlayerPawn
	 */
	struct UWBP_HUD_HitIndicator_C_UpdatePlayerPawn_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.PreConstruct
	 */
	struct UWBP_HUD_HitIndicator_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnPawnUpdated
	 */
	struct UWBP_HUD_HitIndicator_C_OnPawnUpdated_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               NewPawn;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               OldPawn;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.BindEventsOnCharacter
	 */
	struct UWBP_HUD_HitIndicator_C_BindEventsOnCharacter_Params
	{
	public:
		class ADIPlayerCharacter*                                  PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.UnbindEventsOnCharacter
	 */
	struct UWBP_HUD_HitIndicator_C_UnbindEventsOnCharacter_Params
	{
	public:
		class ADIPlayerCharacter*                                  PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.BlueprintInitializeWidget
	 */
	struct UWBP_HUD_HitIndicator_C_BlueprintInitializeWidget_Params
	{	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.BlueprintDestroyWidget
	 */
	struct UWBP_HUD_HitIndicator_C_BlueprintDestroyWidget_Params
	{	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnGeneralImpact
	 */
	struct UWBP_HUD_HitIndicator_C_OnGeneralImpact_Params
	{
	public:
		struct FGeneralImpactEventResult                           ImpactEvent;                                             // 0x0000(0x0240)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnRadialImpact
	 */
	struct UWBP_HUD_HitIndicator_C_OnRadialImpact_Params
	{
	public:
		struct FRadialImpactEventResult                            ImpactEvent;                                             // 0x0000(0x0278)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnPointImpact
	 */
	struct UWBP_HUD_HitIndicator_C_OnPointImpact_Params
	{
	public:
		struct FPointImpactEventResult                             ImpactEvent;                                             // 0x0000(0x0300)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.ExecuteUbergraph_WBP_HUD_HitIndicator
	 */
	struct UWBP_HUD_HitIndicator_C_ExecuteUbergraph_WBP_HUD_HitIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
