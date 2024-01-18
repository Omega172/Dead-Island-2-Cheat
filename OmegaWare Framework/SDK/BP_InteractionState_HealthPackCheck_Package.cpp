/**
 * Name: Dead_Island_2
 * Version: Cracked
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C.CheckInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StackSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_HealthPackCheck_C::CheckInteraction(int32_t StackSize, int32_t NewCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C.CheckInteraction");
		
		UBP_InteractionState_HealthPackCheck_C_CheckInteraction_Params params {};
		params.StackSize = StackSize;
		params.NewCount = NewCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInteractiveComponent*                       InInteractiveComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_HealthPackCheck_C::Initialize(class UInteractiveComponent* InInteractiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C.Initialize");
		
		UBP_InteractionState_HealthPackCheck_C_Initialize_Params params {};
		params.InInteractiveComponent = InInteractiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C.OnInteractionComplete_Local
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionMode                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomInteractionActionParams*              CustomParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_HealthPackCheck_C::OnInteractionComplete_Local(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C.OnInteractionComplete_Local");
		
		UBP_InteractionState_HealthPackCheck_C_OnInteractionComplete_Local_Params params {};
		params.User = User;
		params.Mode = Mode;
		params.CustomParams = CustomParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C.OnInteractionComplete_Server
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionMode                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomInteractionActionParams*              CustomParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_HealthPackCheck_C::OnInteractionComplete_Server(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C.OnInteractionComplete_Server");
		
		UBP_InteractionState_HealthPackCheck_C_OnInteractionComplete_Server_Params params {};
		params.User = User;
		params.Mode = Mode;
		params.CustomParams = CustomParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C.InventoryModified
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemArchetype*                              ItemArchetype                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AItemActor*                                  Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_HealthPackCheck_C::InventoryModified(class UItemArchetype* ItemArchetype, class AItemActor* Item, int32_t NewCount, int32_t Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C.InventoryModified");
		
		UBP_InteractionState_HealthPackCheck_C_InventoryModified_Params params {};
		params.ItemArchetype = ItemArchetype;
		params.Item = Item;
		params.NewCount = NewCount;
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C.OnEnterRangeOrFocus_Local
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_HealthPackCheck_C::OnEnterRangeOrFocus_Local(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C.OnEnterRangeOrFocus_Local");
		
		UBP_InteractionState_HealthPackCheck_C_OnEnterRangeOrFocus_Local_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C.OnLeaveRangeAndFocus_Local
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_HealthPackCheck_C::OnLeaveRangeAndFocus_Local(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C.OnLeaveRangeAndFocus_Local");
		
		UBP_InteractionState_HealthPackCheck_C_OnLeaveRangeAndFocus_Local_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C.ExecuteUbergraph_BP_InteractionState_HealthPackCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_HealthPackCheck_C::ExecuteUbergraph_BP_InteractionState_HealthPackCheck(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C.ExecuteUbergraph_BP_InteractionState_HealthPackCheck");
		
		UBP_InteractionState_HealthPackCheck_C_ExecuteUbergraph_BP_InteractionState_HealthPackCheck_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InteractionState_HealthPackCheck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InteractionState_HealthPackCheck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InteractionState_HealthPackCheck.BP_InteractionState_HealthPackCheck_C");
		return ptr;
	}

}


