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
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.SetupFaceFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFaceFXActor*                                FaceFXActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AttachPointName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::SetupFaceFX(class UFaceFXActor* FaceFXActor, const class FName& AttachPointName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.SetupFaceFX");
		
		ABP_Base_Player_C_SetupFaceFX_Params params {};
		params.FaceFXActor = FaceFXActor;
		params.AttachPointName = AttachPointName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.TryNotifyInsufficientStamina
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasEnoughStamina                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldNotify                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Player_C::TryNotifyInsufficientStamina(bool HasEnoughStamina, bool ShouldNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.TryNotifyInsufficientStamina");
		
		ABP_Base_Player_C_TryNotifyInsufficientStamina_Params params {};
		params.HasEnoughStamina = HasEnoughStamina;
		params.ShouldNotify = ShouldNotify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.SetHeavyAttackRequester
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Base_MeleeWeaponItem_C*                  BaseMeleeWeaponItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::SetHeavyAttackRequester(class ABP_Base_MeleeWeaponItem_C** BaseMeleeWeaponItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.SetHeavyAttackRequester");
		
		ABP_Base_Player_C_SetHeavyAttackRequester_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BaseMeleeWeaponItem != nullptr)
			*BaseMeleeWeaponItem = params.BaseMeleeWeaponItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.TransformWorldPositionToMapPosition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     WorldPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     MapPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::TransformWorldPositionToMapPosition(struct FVector* WorldPosition, struct FVector* MapPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.TransformWorldPositionToMapPosition");
		
		ABP_Base_Player_C_TransformWorldPositionToMapPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldPosition != nullptr)
			*WorldPosition = params.WorldPosition;
		if (MapPosition != nullptr)
			*MapPosition = params.MapPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.GetItemOrEquippable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ItemOrEquipable                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::GetItemOrEquippable(class UObject** ItemOrEquipable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.GetItemOrEquippable");
		
		ABP_Base_Player_C_GetItemOrEquippable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemOrEquipable != nullptr)
			*ItemOrEquipable = params.ItemOrEquipable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.QuickThrow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::QuickThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.QuickThrow");
		
		ABP_Base_Player_C_QuickThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.RequestLadderAction
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USplineComponent*                            SplineComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TopRungHeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StepRungHeight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BottomRungHeight                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumRungs                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::RequestLadderAction(class USplineComponent* SplineComponent, float TopRungHeight, float StepRungHeight, float BottomRungHeight, int32_t NumRungs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.RequestLadderAction");
		
		ABP_Base_Player_C_RequestLadderAction_Params params {};
		params.SplineComponent = SplineComponent;
		params.TopRungHeight = TopRungHeight;
		params.StepRungHeight = StepRungHeight;
		params.BottomRungHeight = BottomRungHeight;
		params.NumRungs = NumRungs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InitGeneralPlayerParams
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::InitGeneralPlayerParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InitGeneralPlayerParams");
		
		ABP_Base_Player_C_InitGeneralPlayerParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.SetLowStaminaFact
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CurrentStamina                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::SetLowStaminaFact(float CurrentStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.SetLowStaminaFact");
		
		ABP_Base_Player_C_SetLowStaminaFact_Params params {};
		params.CurrentStamina = CurrentStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.SetWeaponProxyClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      WeaponClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EWeaponHand                                        Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_Base_MeleeWeapon_C*                      WeaponRef                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::SetWeaponProxyClass(class UClass* WeaponClass, EWeaponHand Hand, class ABP_Base_MeleeWeapon_C** WeaponRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.SetWeaponProxyClass");
		
		ABP_Base_Player_C_SetWeaponProxyClass_Params params {};
		params.WeaponClass = WeaponClass;
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponRef != nullptr)
			*WeaponRef = params.WeaponRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.IsCurrentControlConfigGamepad
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsGamepad                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Player_C::IsCurrentControlConfigGamepad(bool* IsGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.IsCurrentControlConfigGamepad");
		
		ABP_Base_Player_C_IsCurrentControlConfigGamepad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsGamepad != nullptr)
			*IsGamepad = params.IsGamepad;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.IsCurrentControlConfigMouse
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsMouse                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Player_C::IsCurrentControlConfigMouse(bool* IsMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.IsCurrentControlConfigMouse");
		
		ABP_Base_Player_C_IsCurrentControlConfigMouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsMouse != nullptr)
			*IsMouse = params.IsMouse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.GetCurrentInputConfig
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInputMapperActionOverrideConfig*            Config                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::GetCurrentInputConfig(class UInputMapperActionOverrideConfig** Config)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.GetCurrentInputConfig");
		
		ABP_Base_Player_C_GetCurrentInputConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Config != nullptr)
			*Config = params.Config;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.GetControllerPitch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ReturnVlaue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::GetControllerPitch(float* ReturnVlaue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.GetControllerPitch");
		
		ABP_Base_Player_C_GetControllerPitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnVlaue != nullptr)
			*ReturnVlaue = params.ReturnVlaue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.CreatePlayerNameSlates
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::CreatePlayerNameSlates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.CreatePlayerNameSlates");
		
		ABP_Base_Player_C_CreatePlayerNameSlates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.SelectWeapon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      WeaponClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHoldCategory                                      IsDualWield                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::SelectWeapon(class UClass* WeaponClass, EHoldCategory IsDualWield)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.SelectWeapon");
		
		ABP_Base_Player_C_SelectWeapon_Params params {};
		params.WeaponClass = WeaponClass;
		params.IsDualWield = IsDualWield;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.CanAffordAction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ActionCost                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanTakeAction                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Player_C::CanAffordAction(float ActionCost, bool* CanTakeAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.CanAffordAction");
		
		ABP_Base_Player_C_CanAffordAction_Params params {};
		params.ActionCost = ActionCost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanTakeAction != nullptr)
			*CanTakeAction = params.CanTakeAction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.Collision Slow Down on Hit
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         PrimComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Base_Player_C::CollisionSlowDownonHit(class UPrimitiveComponent* PrimComp, const struct FVector& Impulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.Collision Slow Down on Hit");
		
		ABP_Base_Player_C_CollisionSlowDownonHit_Params params {};
		params.PrimComp = PrimComp;
		params.Impulse = Impulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.DoJump
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::DoJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.DoJump");
		
		ABP_Base_Player_C_DoJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.IsMeleeAimActionRequestValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Player_C::IsMeleeAimActionRequestValid(bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.IsMeleeAimActionRequestValid");
		
		ABP_Base_Player_C_IsMeleeAimActionRequestValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.HandleNoStaminaAttackCondition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::HandleNoStaminaAttackCondition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.HandleNoStaminaAttackCondition");
		
		ABP_Base_Player_C_HandleNoStaminaAttackCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.CanAffordActionStaminaCost_Native
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ActionStaminaCost                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsAbsolute                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bNotifyIfLackingStamina                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABP_Base_Player_C::CanAffordActionStaminaCost_Native(float ActionStaminaCost, bool bIsAbsolute, bool bNotifyIfLackingStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.CanAffordActionStaminaCost_Native");
		
		ABP_Base_Player_C_CanAffordActionStaminaCost_Native_Params params {};
		params.ActionStaminaCost = ActionStaminaCost;
		params.bIsAbsolute = bIsAbsolute;
		params.bNotifyIfLackingStamina = bNotifyIfLackingStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.EndLowStaminaBasePose
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::EndLowStaminaBasePose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.EndLowStaminaBasePose");
		
		ABP_Base_Player_C_EndLowStaminaBasePose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.HandleStaminaScreenFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Stamina                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::HandleStaminaScreenFX(float Stamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.HandleStaminaScreenFX");
		
		ABP_Base_Player_C_HandleStaminaScreenFX_Params params {};
		params.Stamina = Stamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.DoCrouch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::DoCrouch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.DoCrouch");
		
		ABP_Base_Player_C_DoCrouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.SetupActionRequestHelpers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::SetupActionRequestHelpers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.SetupActionRequestHelpers");
		
		ABP_Base_Player_C_SetupActionRequestHelpers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.UserConstructionScript");
		
		ABP_Base_Player_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Base_Player_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.Timeline_1__FinishedFunc");
		
		ABP_Base_Player_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Base_Player_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.Timeline_1__UpdateFunc");
		
		ABP_Base_Player_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Base_Player_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.Timeline_0__FinishedFunc");
		
		ABP_Base_Player_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Base_Player_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.Timeline_0__UpdateFunc");
		
		ABP_Base_Player_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_DebugPlayMontage_InputMapperActionEventNode_21
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_DebugPlayMontage_InputMapperActionEventNode_21(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_DebugPlayMontage_InputMapperActionEventNode_21");
		
		ABP_Base_Player_C_InpMapActEvt_DebugPlayMontage_InputMapperActionEventNode_21_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_DebugSwitchToThirdPerson_InputMapperActionEventNode_20
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_DebugSwitchToThirdPerson_InputMapperActionEventNode_20(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_DebugSwitchToThirdPerson_InputMapperActionEventNode_20");
		
		ABP_Base_Player_C_InpMapActEvt_DebugSwitchToThirdPerson_InputMapperActionEventNode_20_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_DebugSwitchThirdPersonMesh_InputMapperActionEventNode_19
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_DebugSwitchThirdPersonMesh_InputMapperActionEventNode_19(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_DebugSwitchThirdPersonMesh_InputMapperActionEventNode_19");
		
		ABP_Base_Player_C_InpMapActEvt_DebugSwitchThirdPersonMesh_InputMapperActionEventNode_19_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Heal_InputMapperActionEventNode_18
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_Heal_InputMapperActionEventNode_18(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Heal_InputMapperActionEventNode_18");
		
		ABP_Base_Player_C_InpMapActEvt_Heal_InputMapperActionEventNode_18_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Crouch_InputMapperActionEventNode_17
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_Crouch_InputMapperActionEventNode_17(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Crouch_InputMapperActionEventNode_17");
		
		ABP_Base_Player_C_InpMapActEvt_Crouch_InputMapperActionEventNode_17_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Sprint_InputMapperActionEventNode_16
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_Sprint_InputMapperActionEventNode_16(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Sprint_InputMapperActionEventNode_16");
		
		ABP_Base_Player_C_InpMapActEvt_Sprint_InputMapperActionEventNode_16_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Jump_InputMapperActionEventNode_15
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_Jump_InputMapperActionEventNode_15(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Jump_InputMapperActionEventNode_15");
		
		ABP_Base_Player_C_InpMapActEvt_Jump_InputMapperActionEventNode_15_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Fury_InputMapperActionEventNode_14
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_Fury_InputMapperActionEventNode_14(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Fury_InputMapperActionEventNode_14");
		
		ABP_Base_Player_C_InpMapActEvt_Fury_InputMapperActionEventNode_14_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_QuickThrow_InputMapperActionEventNode_13
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_QuickThrow_InputMapperActionEventNode_13(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_QuickThrow_InputMapperActionEventNode_13");
		
		ABP_Base_Player_C_InpMapActEvt_QuickThrow_InputMapperActionEventNode_13_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_ClassExclusiveActionHold_InputMapperActionEventNode_12
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_ClassExclusiveActionHold_InputMapperActionEventNode_12(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_ClassExclusiveActionHold_InputMapperActionEventNode_12");
		
		ABP_Base_Player_C_InpMapActEvt_ClassExclusiveActionHold_InputMapperActionEventNode_12_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_ClassExclusiveActionPress_InputMapperActionEventNode_11
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_ClassExclusiveActionPress_InputMapperActionEventNode_11(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_ClassExclusiveActionPress_InputMapperActionEventNode_11");
		
		ABP_Base_Player_C_InpMapActEvt_ClassExclusiveActionPress_InputMapperActionEventNode_11_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_OriginalAimPose_InputMapperActionEventNode_10
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_OriginalAimPose_InputMapperActionEventNode_10(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_OriginalAimPose_InputMapperActionEventNode_10");
		
		ABP_Base_Player_C_InpMapActEvt_OriginalAimPose_InputMapperActionEventNode_10_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Attack_InputMapperActionEventNode_9
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_Attack_InputMapperActionEventNode_9(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Attack_InputMapperActionEventNode_9");
		
		ABP_Base_Player_C_InpMapActEvt_Attack_InputMapperActionEventNode_9_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_DropCarryables_InputMapperActionEventNode_8
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_DropCarryables_InputMapperActionEventNode_8(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_DropCarryables_InputMapperActionEventNode_8");
		
		ABP_Base_Player_C_InpMapActEvt_DropCarryables_InputMapperActionEventNode_8_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Knockback_InputMapperActionEventNode_7
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_Knockback_InputMapperActionEventNode_7(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_Knockback_InputMapperActionEventNode_7");
		
		ABP_Base_Player_C_InpMapActEvt_Knockback_InputMapperActionEventNode_7_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_SpecialAttack_InputMapperActionEventNode_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_SpecialAttack_InputMapperActionEventNode_6(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_SpecialAttack_InputMapperActionEventNode_6");
		
		ABP_Base_Player_C_InpMapActEvt_SpecialAttack_InputMapperActionEventNode_6_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_FurySpecialAttack_InputMapperActionEventNode_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_FurySpecialAttack_InputMapperActionEventNode_5(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_FurySpecialAttack_InputMapperActionEventNode_5");
		
		ABP_Base_Player_C_InpMapActEvt_FurySpecialAttack_InputMapperActionEventNode_5_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_ToggleFlashlightWheelOnly_InputMapperActionEventNode_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_ToggleFlashlightWheelOnly_InputMapperActionEventNode_4(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_ToggleFlashlightWheelOnly_InputMapperActionEventNode_4");
		
		ABP_Base_Player_C_InpMapActEvt_ToggleFlashlightWheelOnly_InputMapperActionEventNode_4_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_ToggleFlashlightAnywhere_InputMapperActionEventNode_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_ToggleFlashlightAnywhere_InputMapperActionEventNode_3(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_ToggleFlashlightAnywhere_InputMapperActionEventNode_3");
		
		ABP_Base_Player_C_InpMapActEvt_ToggleFlashlightAnywhere_InputMapperActionEventNode_3_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_FurySpecialAttackHold_InputMapperActionEventNode_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_FurySpecialAttackHold_InputMapperActionEventNode_2(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_FurySpecialAttackHold_InputMapperActionEventNode_2");
		
		ABP_Base_Player_C_InpMapActEvt_FurySpecialAttackHold_InputMapperActionEventNode_2_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.OnRequestFailed_6CAA099D4F39D898F5DFFCA68E9B1851
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::OnRequestFailed_6CAA099D4F39D898F5DFFCA68E9B1851()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.OnRequestFailed_6CAA099D4F39D898F5DFFCA68E9B1851");
		
		ABP_Base_Player_C_OnRequestFailed_6CAA099D4F39D898F5DFFCA68E9B1851_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.OnCustomSignal_6CAA099D4F39D898F5DFFCA68E9B1851
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnCustomSignalParams        CustomSignalParams                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_Base_Player_C::OnCustomSignal_6CAA099D4F39D898F5DFFCA68E9B1851(const struct FCharacterActionOnCustomSignalParams& CustomSignalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.OnCustomSignal_6CAA099D4F39D898F5DFFCA68E9B1851");
		
		ABP_Base_Player_C_OnCustomSignal_6CAA099D4F39D898F5DFFCA68E9B1851_Params params {};
		params.CustomSignalParams = CustomSignalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.OnEnd_6CAA099D4F39D898F5DFFCA68E9B1851
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnEndParams                 EndParams                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_Base_Player_C::OnEnd_6CAA099D4F39D898F5DFFCA68E9B1851(const struct FCharacterActionOnEndParams& EndParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.OnEnd_6CAA099D4F39D898F5DFFCA68E9B1851");
		
		ABP_Base_Player_C_OnEnd_6CAA099D4F39D898F5DFFCA68E9B1851_Params params {};
		params.EndParams = EndParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.OnBegin_6CAA099D4F39D898F5DFFCA68E9B1851
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnBeginParams               BeginParams                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_Base_Player_C::OnBegin_6CAA099D4F39D898F5DFFCA68E9B1851(const struct FCharacterActionOnBeginParams& BeginParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.OnBegin_6CAA099D4F39D898F5DFFCA68E9B1851");
		
		ABP_Base_Player_C_OnBegin_6CAA099D4F39D898F5DFFCA68E9B1851_Params params {};
		params.BeginParams = BeginParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.OnCancelled_6CAA099D4F39D898F5DFFCA68E9B1851
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnCancelledParams           CancelledParams                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_Base_Player_C::OnCancelled_6CAA099D4F39D898F5DFFCA68E9B1851(const struct FCharacterActionOnCancelledParams& CancelledParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.OnCancelled_6CAA099D4F39D898F5DFFCA68E9B1851");
		
		ABP_Base_Player_C_OnCancelled_6CAA099D4F39D898F5DFFCA68E9B1851_Params params {};
		params.CancelledParams = CancelledParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.OnResolved_6CAA099D4F39D898F5DFFCA68E9B1851
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnResolvedParams            ResolvedParams                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_Base_Player_C::OnResolved_6CAA099D4F39D898F5DFFCA68E9B1851(const struct FCharacterActionOnResolvedParams& ResolvedParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.OnResolved_6CAA099D4F39D898F5DFFCA68E9B1851");
		
		ABP_Base_Player_C_OnResolved_6CAA099D4F39D898F5DFFCA68E9B1851_Params params {};
		params.ResolvedParams = ResolvedParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_VoicePTT_InputMapperActionEventNode_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::InpMapActEvt_VoicePTT_InputMapperActionEventNode_1(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InpMapActEvt_VoicePTT_InputMapperActionEventNode_1");
		
		ABP_Base_Player_C_InpMapActEvt_VoicePTT_InputMapperActionEventNode_1_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.Toggle Character Visibility
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Player_C::ToggleCharacterVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.Toggle Character Visibility");
		
		ABP_Base_Player_C_ToggleCharacterVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.OnSetPlayerState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                NewPlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::OnSetPlayerState(class APlayerState* NewPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.OnSetPlayerState");
		
		ABP_Base_Player_C_OnSetPlayerState_Params params {};
		params.NewPlayerState = NewPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.BndEvt__BPC_Player_Stamina_K2Node_ComponentBoundEvent_1_StaminaUpdatedDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PreviousStamina                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Stamina                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::BndEvt__BPC_Player_Stamina_K2Node_ComponentBoundEvent_1_StaminaUpdatedDelegate__DelegateSignature(class AActor* Actor, float PreviousStamina, float Stamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.BndEvt__BPC_Player_Stamina_K2Node_ComponentBoundEvent_1_StaminaUpdatedDelegate__DelegateSignature");
		
		ABP_Base_Player_C_BndEvt__BPC_Player_Stamina_K2Node_ComponentBoundEvent_1_StaminaUpdatedDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.PreviousStamina = PreviousStamina;
		params.Stamina = Stamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.SetPlayerInCutscene
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CutsceneActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  TeleportTransform                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Player_C::SetPlayerInCutscene(bool CutsceneActive, const struct FTransform& TeleportTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.SetPlayerInCutscene");
		
		ABP_Base_Player_C_SetPlayerInCutscene_Params params {};
		params.CutsceneActive = CutsceneActive;
		params.TeleportTransform = TeleportTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Base_Player_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.ReceiveBeginPlay");
		
		ABP_Base_Player_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.ReceivePostInitializeComponents
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_Base_Player_C::ReceivePostInitializeComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.ReceivePostInitializeComponents");
		
		ABP_Base_Player_C_ReceivePostInitializeComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.ReceiveUnpossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 OldController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::ReceiveUnpossessed(class AController* OldController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.ReceiveUnpossessed");
		
		ABP_Base_Player_C_ReceiveUnpossessed_Params params {};
		params.OldController = OldController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.ScaleCrosshair
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::ScaleCrosshair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.ScaleCrosshair");
		
		ABP_Base_Player_C_ScaleCrosshair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.ConfigChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInputMapperActionOverrideConfig*            NewConfig                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::ConfigChanged(class UInputMapperActionOverrideConfig* NewConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.ConfigChanged");
		
		ABP_Base_Player_C_ConfigChanged_Params params {};
		params.NewConfig = NewConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.AssumingDirectControl
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::AssumingDirectControl(class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.AssumingDirectControl");
		
		ABP_Base_Player_C_AssumingDirectControl_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.No Stamina Attack Blendable Fade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::NoStaminaAttackBlendableFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.No Stamina Attack Blendable Fade");
		
		ABP_Base_Player_C_NoStaminaAttackBlendableFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.ReceivePossessed");
		
		ABP_Base_Player_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.TutorialSampleFunction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::TutorialSampleFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.TutorialSampleFunction");
		
		ABP_Base_Player_C_TutorialSampleFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.WeaponHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Defender                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_Base_MeleeWeapon_C*                      Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::WeaponHit(class AActor* Attacker, class AActor* Defender, class ABP_Base_MeleeWeapon_C* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.WeaponHit");
		
		ABP_Base_Player_C_WeaponHit_Params params {};
		params.Attacker = Attacker;
		params.Defender = Defender;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.Heavy Attack Whizzy Blendable Fade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::HeavyAttackWhizzyBlendableFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.Heavy Attack Whizzy Blendable Fade");
		
		ABP_Base_Player_C_HeavyAttackWhizzyBlendableFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.BlendableFadingFromCurve
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstance*                           Blendable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCurveFloat*                                 IntensityCurve                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OverrideCurvePlayRate                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ReverseFromPosition                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AdditionalStrength                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::BlendableFadingFromCurve(class UMaterialInstance* Blendable, class UCurveFloat* IntensityCurve, float OverrideCurvePlayRate, float ReverseFromPosition, float AdditionalStrength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.BlendableFadingFromCurve");
		
		ABP_Base_Player_C_BlendableFadingFromCurve_Params params {};
		params.Blendable = Blendable;
		params.IntensityCurve = IntensityCurve;
		params.OverrideCurvePlayRate = OverrideCurvePlayRate;
		params.ReverseFromPosition = ReverseFromPosition;
		params.AdditionalStrength = AdditionalStrength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.Heavy Attack Charge Blendable Fade In
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ChargeUpLength                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::HeavyAttackChargeBlendableFadeIn(float ChargeUpLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.Heavy Attack Charge Blendable Fade In");
		
		ABP_Base_Player_C_HeavyAttackChargeBlendableFadeIn_Params params {};
		params.ChargeUpLength = ChargeUpLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.Heavy Attack Charge Blendable Fade Out
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ChargeUpLength                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::HeavyAttackChargeBlendableFadeOut(float ChargeUpLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.Heavy Attack Charge Blendable Fade Out");
		
		ABP_Base_Player_C_HeavyAttackChargeBlendableFadeOut_Params params {};
		params.ChargeUpLength = ChargeUpLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.ResetNoStaminaAttackState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::ResetNoStaminaAttackState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.ResetNoStaminaAttackState");
		
		ABP_Base_Player_C_ResetNoStaminaAttackState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.AssignedWeaponChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEquippableComponent*                        PreviousItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UEquippableComponent*                        NewItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::AssignedWeaponChanged(class UEquippableComponent* PreviousItem, class UEquippableComponent* NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.AssignedWeaponChanged");
		
		ABP_Base_Player_C_AssignedWeaponChanged_Params params {};
		params.PreviousItem = PreviousItem;
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.ResetHeavyAttackSettings
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UEquippableComponent*                        Current                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::ResetHeavyAttackSettings(class UEquippableComponent* Current)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.ResetHeavyAttackSettings");
		
		ABP_Base_Player_C_ResetHeavyAttackSettings_Params params {};
		params.Current = Current;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.BndEvt__CollisionPelvis_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Base_Player_C::BndEvt__CollisionPelvis_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.BndEvt__CollisionPelvis_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		ABP_Base_Player_C_BndEvt__CollisionPelvis_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.BndEvt__CollisionLeftFoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Base_Player_C::BndEvt__CollisionLeftFoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.BndEvt__CollisionLeftFoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
		
		ABP_Base_Player_C_BndEvt__CollisionLeftFoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.BndEvt__CollisionRightFoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Base_Player_C::BndEvt__CollisionRightFoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.BndEvt__CollisionRightFoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature");
		
		ABP_Base_Player_C_BndEvt__CollisionRightFoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.BndEvt__CollisionLeftHand_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Base_Player_C::BndEvt__CollisionLeftHand_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.BndEvt__CollisionLeftHand_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature");
		
		ABP_Base_Player_C_BndEvt__CollisionLeftHand_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.BndEvt__CollisionRightHand_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Base_Player_C::BndEvt__CollisionRightHand_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.BndEvt__CollisionRightHand_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature");
		
		ABP_Base_Player_C_BndEvt__CollisionRightHand_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.InitializeFaceFX
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FFaceFXParams                               FaceFXParams                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_Base_Player_C::InitializeFaceFX(const struct FFaceFXParams& FaceFXParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.InitializeFaceFX");
		
		ABP_Base_Player_C_InitializeFaceFX_Params params {};
		params.FaceFXParams = FaceFXParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.BndEvt__BPC_Player_WeaponProxy_K2Node_ComponentBoundEvent_6_OnChildActorSet__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPerspective                                       Perspective                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::BndEvt__BPC_Player_WeaponProxy_K2Node_ComponentBoundEvent_6_OnChildActorSet__DelegateSignature(class AActor* NewActor, EPerspective Perspective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.BndEvt__BPC_Player_WeaponProxy_K2Node_ComponentBoundEvent_6_OnChildActorSet__DelegateSignature");
		
		ABP_Base_Player_C_BndEvt__BPC_Player_WeaponProxy_K2Node_ComponentBoundEvent_6_OnChildActorSet__DelegateSignature_Params params {};
		params.NewActor = NewActor;
		params.Perspective = Perspective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.ExecuteUbergraph_BP_Base_Player
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Player_C::ExecuteUbergraph_BP_Base_Player(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.ExecuteUbergraph_BP_Base_Player");
		
		ABP_Base_Player_C_ExecuteUbergraph_BP_Base_Player_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.AttackInputPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::AttackInputPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.AttackInputPressed__DelegateSignature");
		
		ABP_Base_Player_C_AttackInputPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.OnBeginPlay__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::OnBeginPlay__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.OnBeginPlay__DelegateSignature");
		
		ABP_Base_Player_C_OnBeginPlay__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.NewWeaponEquipped__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::NewWeaponEquipped__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.NewWeaponEquipped__DelegateSignature");
		
		ABP_Base_Player_C_NewWeaponEquipped__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Player.BP_Base_Player_C.Possessed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Player_C::Possessed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Player.BP_Base_Player_C.Possessed__DelegateSignature");
		
		ABP_Base_Player_C_Possessed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_Player.BP_Base_Player_C");
		return ptr;
	}

}


