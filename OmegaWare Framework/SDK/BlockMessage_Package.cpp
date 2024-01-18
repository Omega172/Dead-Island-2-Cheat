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
	 * 		Name   -> Function BlockMessage.BlockMessageReceiverComponent.OnUnblocked
	 * 		Flags  -> ()
	 */
	void UBlockMessageReceiverComponent::OnUnblocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlockMessage.BlockMessageReceiverComponent.OnUnblocked");
		
		UBlockMessageReceiverComponent_OnUnblocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BlockMessage.BlockMessageReceiverComponent.OnBlocked
	 * 		Flags  -> ()
	 */
	void UBlockMessageReceiverComponent::OnBlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlockMessage.BlockMessageReceiverComponent.OnBlocked");
		
		UBlockMessageReceiverComponent_OnBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BlockMessage.BlockMessageReceiverComponent.IsBlocked
	 * 		Flags  -> ()
	 */
	bool UBlockMessageReceiverComponent::IsBlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlockMessage.BlockMessageReceiverComponent.IsBlocked");
		
		UBlockMessageReceiverComponent_IsBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlockMessageReceiverComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlockMessageReceiverComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlockMessage.BlockMessageReceiverComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlockMessengerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlockMessengerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlockMessage.BlockMessengerComponent");
		return ptr;
	}

}


