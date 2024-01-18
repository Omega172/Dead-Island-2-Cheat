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
	 * 		Name   -> Function BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C.UserExitedRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_HostileClose_C::UserExitedRange(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C.UserExitedRange");
		
		UBP_InteractionState_HostileClose_C_UserExitedRange_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C.UserEnteredRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_HostileClose_C::UserEnteredRange(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C.UserEnteredRange");
		
		UBP_InteractionState_HostileClose_C_UserEnteredRange_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C.On Hostile Tracking Updated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     OriginLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHostilesInArea                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InteractionState_HostileClose_C::OnHostileTrackingUpdated(const struct FVector& OriginLocation, bool bHostilesInArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C.On Hostile Tracking Updated");
		
		UBP_InteractionState_HostileClose_C_OnHostileTrackingUpdated_Params params {};
		params.OriginLocation = OriginLocation;
		params.bHostilesInArea = bHostilesInArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C.Uninitialize
	 * 		Flags  -> ()
	 */
	void UBP_InteractionState_HostileClose_C::Uninitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C.Uninitialize");
		
		UBP_InteractionState_HostileClose_C_Uninitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C.ExecuteUbergraph_BP_InteractionState_HostileClose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_HostileClose_C::ExecuteUbergraph_BP_InteractionState_HostileClose(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C.ExecuteUbergraph_BP_InteractionState_HostileClose");
		
		UBP_InteractionState_HostileClose_C_ExecuteUbergraph_BP_InteractionState_HostileClose_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InteractionState_HostileClose_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InteractionState_HostileClose_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C");
		return ptr;
	}

}


