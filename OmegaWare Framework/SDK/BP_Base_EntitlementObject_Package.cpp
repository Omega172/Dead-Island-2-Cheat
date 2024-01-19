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
	 * 		Name   -> Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.CheckEntitlementIsValidForDisplayName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Entitlement                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_EntitlementObject_C::CheckEntitlementIsValidForDisplayName(const struct FDataTableRowHandle& Entitlement, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.CheckEntitlementIsValidForDisplayName");
		
		ABP_Base_EntitlementObject_C_CheckEntitlementIsValidForDisplayName_Params params {};
		params.Entitlement = Entitlement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.UpdateCosmeticEffectVisibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_EntitlementObject_C::UpdateCosmeticEffectVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.UpdateCosmeticEffectVisibility");
		
		ABP_Base_EntitlementObject_C_UpdateCosmeticEffectVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.GetEntitlementForDisplayName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ValidEntitlementFound                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDataTableRowHandle                         EntitlementToUse                                           (Parm, OutParm, NoDestructor)
	 */
	void ABP_Base_EntitlementObject_C::GetEntitlementForDisplayName(bool* ValidEntitlementFound, struct FDataTableRowHandle* EntitlementToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.GetEntitlementForDisplayName");
		
		ABP_Base_EntitlementObject_C_GetEntitlementForDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidEntitlementFound != nullptr)
			*ValidEntitlementFound = params.ValidEntitlementFound;
		if (EntitlementToUse != nullptr)
			*EntitlementToUse = params.EntitlementToUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.GetEntitlementDisplayName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Entitlement                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               EntitlementFoundInRegistry                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        DisplayName                                                (Parm, OutParm)
	 */
	void ABP_Base_EntitlementObject_C::GetEntitlementDisplayName(const struct FDataTableRowHandle& Entitlement, bool* EntitlementFoundInRegistry, class FText* DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.GetEntitlementDisplayName");
		
		ABP_Base_EntitlementObject_C_GetEntitlementDisplayName_Params params {};
		params.Entitlement = Entitlement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntitlementFoundInRegistry != nullptr)
			*EntitlementFoundInRegistry = params.EntitlementFoundInRegistry;
		if (DisplayName != nullptr)
			*DisplayName = params.DisplayName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.SetEntitlementDisplayName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_EntitlementObject_C::SetEntitlementDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.SetEntitlementDisplayName");
		
		ABP_Base_EntitlementObject_C_SetEntitlementDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.UpdateParticleVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_EntitlementObject_C::UpdateParticleVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.UpdateParticleVisibility");
		
		ABP_Base_EntitlementObject_C_UpdateParticleVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.InitializeFromEntitlementData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_EntitlementObject_C::InitializeFromEntitlementData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.InitializeFromEntitlementData");
		
		ABP_Base_EntitlementObject_C_InitializeFromEntitlementData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.CreateResponses
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FDataTableRowHandle>                 EntitlementsRequired                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_Base_EntitlementObject_C::CreateResponses(TArray<struct FDataTableRowHandle>* EntitlementsRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.CreateResponses");
		
		ABP_Base_EntitlementObject_C_CreateResponses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntitlementsRequired != nullptr)
			*EntitlementsRequired = params.EntitlementsRequired;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.CreateGameEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_EntitlementObject_C::CreateGameEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.CreateGameEvent");
		
		ABP_Base_EntitlementObject_C_CreateGameEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.AddGameEventResponders
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UGameEventResponse*>                  ResponsesToAdd                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_Base_EntitlementObject_C::AddGameEventResponders(TArray<class UGameEventResponse*>* ResponsesToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.AddGameEventResponders");
		
		ABP_Base_EntitlementObject_C_AddGameEventResponders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResponsesToAdd != nullptr)
			*ResponsesToAdd = params.ResponsesToAdd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.BndEvt__Pickupable_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionMode                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomInteractionActionParams*              CustomParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_EntitlementObject_C::BndEvt__Pickupable_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.BndEvt__Pickupable_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature");
		
		ABP_Base_EntitlementObject_C_BndEvt__Pickupable_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature_Params params {};
		params.User = User;
		params.Mode = Mode;
		params.CustomParams = CustomParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.UpdateVisuals
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_EntitlementObject_C::UpdateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.UpdateVisuals");
		
		ABP_Base_EntitlementObject_C_UpdateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Base_EntitlementObject_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.ReceiveBeginPlay");
		
		ABP_Base_EntitlementObject_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.ReceiveUpdateVisibility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_EntitlementObject_C::ReceiveUpdateVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.ReceiveUpdateVisibility");
		
		ABP_Base_EntitlementObject_C_ReceiveUpdateVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.BndEvt__Pickupable_K2Node_ComponentBoundEvent_3_InteractionEnabledStateChangedDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_EntitlementObject_C::BndEvt__Pickupable_K2Node_ComponentBoundEvent_3_InteractionEnabledStateChangedDelegate__DelegateSignature(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.BndEvt__Pickupable_K2Node_ComponentBoundEvent_3_InteractionEnabledStateChangedDelegate__DelegateSignature");
		
		ABP_Base_EntitlementObject_C_BndEvt__Pickupable_K2Node_ComponentBoundEvent_3_InteractionEnabledStateChangedDelegate__DelegateSignature_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.ExecuteUbergraph_BP_Base_EntitlementObject
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_EntitlementObject_C::ExecuteUbergraph_BP_Base_EntitlementObject(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.ExecuteUbergraph_BP_Base_EntitlementObject");
		
		ABP_Base_EntitlementObject_C_ExecuteUbergraph_BP_Base_EntitlementObject_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_EntitlementObject_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_EntitlementObject_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_EntitlementObject.BP_Base_EntitlementObject_C");
		return ptr;
	}

}


