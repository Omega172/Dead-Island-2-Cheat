/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnImpactCosmeticEffect_Fire
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HUD_HitIndicator_C::OnImpactCosmeticEffect_Fire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnImpactCosmeticEffect_Fire");
		
		UWBP_HUD_HitIndicator_C_OnImpactCosmeticEffect_Fire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.LocationPlayGradientEffect
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_GraidentIndicatorElement_C*             Indicator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Translation                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PivotY                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUD_HitIndicator_C::LocationPlayGradientEffect(class UWBP_GraidentIndicatorElement_C** Indicator, float* Angle, struct FVector2D* Translation, float PivotY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.LocationPlayGradientEffect");
		
		UWBP_HUD_HitIndicator_C_LocationPlayGradientEffect_Params params {};
		params.PivotY = PivotY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Indicator != nullptr)
			*Indicator = params.Indicator;
		if (Angle != nullptr)
			*Angle = params.Angle;
		if (Translation != nullptr)
			*Translation = params.Translation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.GradientImpactAngleAndTranslation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPointImpactEventResult                     ImpactEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		float                                              Angle                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Translation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PivotY                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUD_HitIndicator_C::GradientImpactAngleAndTranslation(class AActor** DamageCauser, struct FPointImpactEventResult* ImpactEvent, float* Angle, struct FVector2D* Translation, float* PivotY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.GradientImpactAngleAndTranslation");
		
		UWBP_HUD_HitIndicator_C_GradientImpactAngleAndTranslation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageCauser != nullptr)
			*DamageCauser = params.DamageCauser;
		if (ImpactEvent != nullptr)
			*ImpactEvent = params.ImpactEvent;
		if (Angle != nullptr)
			*Angle = params.Angle;
		if (Translation != nullptr)
			*Translation = params.Translation;
		if (PivotY != nullptr)
			*PivotY = params.PivotY;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.DirectionToClampedLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Min                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Translation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PivotY                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUD_HitIndicator_C::DirectionToClampedLocation(struct FVector* Direction, float Min, float Max, float* Angle, struct FVector2D* Translation, float* PivotY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.DirectionToClampedLocation");
		
		UWBP_HUD_HitIndicator_C_DirectionToClampedLocation_Params params {};
		params.Min = Min;
		params.Max = Max;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
		if (Angle != nullptr)
			*Angle = params.Angle;
		if (Translation != nullptr)
			*Translation = params.Translation;
		if (PivotY != nullptr)
			*PivotY = params.PivotY;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.CheckFact
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointImpactEventResult                     Impact                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		struct FKnowledgeBaseFactKey                       Fact                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWBP_HUD_HitIndicator_C::CheckFact(struct FPointImpactEventResult* Impact, const struct FKnowledgeBaseFactKey& Fact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.CheckFact");
		
		UWBP_HUD_HitIndicator_C_CheckFact_Params params {};
		params.Fact = Fact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Impact != nullptr)
			*Impact = params.Impact;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.DirectionToLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Translation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PivotY                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUD_HitIndicator_C::DirectionToLocation(struct FVector* Direction, float* Angle, struct FVector2D* Translation, float* PivotY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.DirectionToLocation");
		
		UWBP_HUD_HitIndicator_C_DirectionToLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
		if (Angle != nullptr)
			*Angle = params.Angle;
		if (Translation != nullptr)
			*Translation = params.Translation;
		if (PivotY != nullptr)
			*PivotY = params.PivotY;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OutsideImpactAngleAndTranslation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPointImpactEventResult                     ImpactEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		float                                              Angle                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Translation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PivotY                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUD_HitIndicator_C::OutsideImpactAngleAndTranslation(class AActor** DamageCauser, struct FPointImpactEventResult* ImpactEvent, float* Angle, struct FVector2D* Translation, float* PivotY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OutsideImpactAngleAndTranslation");
		
		UWBP_HUD_HitIndicator_C_OutsideImpactAngleAndTranslation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageCauser != nullptr)
			*DamageCauser = params.DamageCauser;
		if (ImpactEvent != nullptr)
			*ImpactEvent = params.ImpactEvent;
		if (Angle != nullptr)
			*Angle = params.Angle;
		if (Translation != nullptr)
			*Translation = params.Translation;
		if (PivotY != nullptr)
			*PivotY = params.PivotY;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.GetDamageCauser
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointImpactEventResult                     ImpactEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class AActor*                                      DamageCauser                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUD_HitIndicator_C::GetDamageCauser(struct FPointImpactEventResult* ImpactEvent, class AActor** DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.GetDamageCauser");
		
		UWBP_HUD_HitIndicator_C_GetDamageCauser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImpactEvent != nullptr)
			*ImpactEvent = params.ImpactEvent;
		if (DamageCauser != nullptr)
			*DamageCauser = params.DamageCauser;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.InsideImpactAngleAndTranslation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPointImpactEventResult                     ImpactEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		float                                              Angle                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Translation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUD_HitIndicator_C::InsideImpactAngleAndTranslation(class AActor** DamageCauser, struct FPointImpactEventResult* ImpactEvent, float* Angle, struct FVector2D* Translation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.InsideImpactAngleAndTranslation");
		
		UWBP_HUD_HitIndicator_C_InsideImpactAngleAndTranslation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageCauser != nullptr)
			*DamageCauser = params.DamageCauser;
		if (ImpactEvent != nullptr)
			*ImpactEvent = params.ImpactEvent;
		if (Angle != nullptr)
			*Angle = params.Angle;
		if (Translation != nullptr)
			*Translation = params.Translation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.LocationPlayHitEffect
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_HitIndicatorElement_C*                  Indicator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Translation                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PivotY                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUD_HitIndicator_C::LocationPlayHitEffect(class UWBP_HitIndicatorElement_C* Indicator, float* Angle, struct FVector2D* Translation, float PivotY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.LocationPlayHitEffect");
		
		UWBP_HUD_HitIndicator_C_LocationPlayHitEffect_Params params {};
		params.Indicator = Indicator;
		params.PivotY = PivotY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Angle != nullptr)
			*Angle = params.Angle;
		if (Translation != nullptr)
			*Translation = params.Translation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnImpactCosmeticEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HUD_HitIndicator_C::OnImpactCosmeticEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnImpactCosmeticEffect");
		
		UWBP_HUD_HitIndicator_C_OnImpactCosmeticEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.ShowHitIndicator
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointImpactEventResult                     ImpactEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UWBP_HUD_HitIndicator_C::ShowHitIndicator(struct FPointImpactEventResult* ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.ShowHitIndicator");
		
		UWBP_HUD_HitIndicator_C_ShowHitIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImpactEvent != nullptr)
			*ImpactEvent = params.ImpactEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.UpdatePlayerPawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUD_HitIndicator_C::UpdatePlayerPawn(class APawn* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.UpdatePlayerPawn");
		
		UWBP_HUD_HitIndicator_C_UpdatePlayerPawn_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HUD_HitIndicator_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.PreConstruct");
		
		UWBP_HUD_HitIndicator_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnPawnUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       OldPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUD_HitIndicator_C::OnPawnUpdated(class APlayerController* Controller, class APawn* NewPawn, class APawn* OldPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnPawnUpdated");
		
		UWBP_HUD_HitIndicator_C_OnPawnUpdated_Params params {};
		params.Controller = Controller;
		params.NewPawn = NewPawn;
		params.OldPawn = OldPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.BindEventsOnCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADIPlayerCharacter*                          PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUD_HitIndicator_C::BindEventsOnCharacter(class ADIPlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.BindEventsOnCharacter");
		
		UWBP_HUD_HitIndicator_C_BindEventsOnCharacter_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.UnbindEventsOnCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADIPlayerCharacter*                          PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUD_HitIndicator_C::UnbindEventsOnCharacter(class ADIPlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.UnbindEventsOnCharacter");
		
		UWBP_HUD_HitIndicator_C_UnbindEventsOnCharacter_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.BlueprintInitializeWidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWBP_HUD_HitIndicator_C::BlueprintInitializeWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.BlueprintInitializeWidget");
		
		UWBP_HUD_HitIndicator_C_BlueprintInitializeWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.BlueprintDestroyWidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWBP_HUD_HitIndicator_C::BlueprintDestroyWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.BlueprintDestroyWidget");
		
		UWBP_HUD_HitIndicator_C_BlueprintDestroyWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnGeneralImpact
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeneralImpactEventResult                   ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UWBP_HUD_HitIndicator_C::OnGeneralImpact(const struct FGeneralImpactEventResult& ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnGeneralImpact");
		
		UWBP_HUD_HitIndicator_C_OnGeneralImpact_Params params {};
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnRadialImpact
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRadialImpactEventResult                    ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UWBP_HUD_HitIndicator_C::OnRadialImpact(const struct FRadialImpactEventResult& ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnRadialImpact");
		
		UWBP_HUD_HitIndicator_C_OnRadialImpact_Params params {};
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnPointImpact
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointImpactEventResult                     ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UWBP_HUD_HitIndicator_C::OnPointImpact(const struct FPointImpactEventResult& ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.OnPointImpact");
		
		UWBP_HUD_HitIndicator_C_OnPointImpact_Params params {};
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.ExecuteUbergraph_WBP_HUD_HitIndicator
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUD_HitIndicator_C::ExecuteUbergraph_WBP_HUD_HitIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C.ExecuteUbergraph_WBP_HUD_HitIndicator");
		
		UWBP_HUD_HitIndicator_C_ExecuteUbergraph_WBP_HUD_HitIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HUD_HitIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HUD_HitIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C");
		return ptr;
	}

}


