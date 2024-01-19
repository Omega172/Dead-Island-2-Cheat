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
	 * 		Name   -> Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.IsClassToTest
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InteractionState_Dockable_C::IsClassToTest(class UClass* Class, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.IsClassToTest");
		
		UBP_InteractionState_Dockable_C_IsClassToTest_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.UserExitedRange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_Dockable_C::UserExitedRange(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.UserExitedRange");
		
		UBP_InteractionState_Dockable_C_UserExitedRange_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.UserEnteredRange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_Dockable_C::UserEnteredRange(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.UserEnteredRange");
		
		UBP_InteractionState_Dockable_C_UserEnteredRange_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.CacheRequiredComponents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_Dockable_C::CacheRequiredComponents(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.CacheRequiredComponents");
		
		UBP_InteractionState_Dockable_C_CacheRequiredComponents_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.UnbindPaperDollUpdate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPaperDollSlot*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_Dockable_C::UnbindPaperDollUpdate(class UPaperDollSlot** Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.UnbindPaperDollUpdate");
		
		UBP_InteractionState_Dockable_C_UnbindPaperDollUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Slot != nullptr)
			*Slot = params.Slot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.BindPaperDollUpdate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPaperDollSlot*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_Dockable_C::BindPaperDollUpdate(class UPaperDollSlot** Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.BindPaperDollUpdate");
		
		UBP_InteractionState_Dockable_C_BindPaperDollUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Slot != nullptr)
			*Slot = params.Slot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.GetUserCarrySlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPaperDollSlot*                              Slot                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_Dockable_C::GetUserCarrySlot(class APawn* Pawn, class UPaperDollSlot** Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.GetUserCarrySlot");
		
		UBP_InteractionState_Dockable_C_GetUserCarrySlot_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Slot != nullptr)
			*Slot = params.Slot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.CheckHands
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPaperDollSlot*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Output_Get                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InteractionState_Dockable_C::CheckHands(class UPaperDollSlot** Slot, bool* Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.CheckHands");
		
		UBP_InteractionState_Dockable_C_CheckHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Slot != nullptr)
			*Slot = params.Slot;
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.OnPaperDollSlotUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEquippableComponent*                        PreviousItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UEquippableComponent*                        NewItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_Dockable_C::OnPaperDollSlotUpdated(class UEquippableComponent* PreviousItem, class UEquippableComponent* NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.OnPaperDollSlotUpdated");
		
		UBP_InteractionState_Dockable_C_OnPaperDollSlotUpdated_Params params {};
		params.PreviousItem = PreviousItem;
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.ExecuteUbergraph_BP_InteractionState_Dockable
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_Dockable_C::ExecuteUbergraph_BP_InteractionState_Dockable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_Dockable.BP_InteractionState_Dockable_C.ExecuteUbergraph_BP_InteractionState_Dockable");
		
		UBP_InteractionState_Dockable_C_ExecuteUbergraph_BP_InteractionState_Dockable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InteractionState_Dockable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InteractionState_Dockable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InteractionState_Dockable.BP_InteractionState_Dockable_C");
		return ptr;
	}

}


