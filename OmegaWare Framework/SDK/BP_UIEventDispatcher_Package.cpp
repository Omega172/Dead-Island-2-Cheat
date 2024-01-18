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
	 * 		Name   -> Function BP_UIEventDispatcher.BP_UIEventDispatcher_C.OnOpenVendorMenu__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AItemActor*>                          VendorItems                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ABP_Base_DebugVendor_C*                      VendorActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIEventDispatcher_C::OnOpenVendorMenu__DelegateSignature(TArray<class AItemActor*>* VendorItems, class ABP_Base_DebugVendor_C* VendorActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIEventDispatcher.BP_UIEventDispatcher_C.OnOpenVendorMenu__DelegateSignature");
		
		UBP_UIEventDispatcher_C_OnOpenVendorMenu__DelegateSignature_Params params {};
		params.VendorActor = VendorActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VendorItems != nullptr)
			*VendorItems = params.VendorItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIEventDispatcher.BP_UIEventDispatcher_C.BP_OnLocalCharacterKilled__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADIPlayerCharacter*                          PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIEventDispatcher_C::BP_OnLocalCharacterKilled__DelegateSignature(class ADIPlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIEventDispatcher.BP_UIEventDispatcher_C.BP_OnLocalCharacterKilled__DelegateSignature");
		
		UBP_UIEventDispatcher_C_BP_OnLocalCharacterKilled__DelegateSignature_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_UIEventDispatcher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_UIEventDispatcher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UIEventDispatcher.BP_UIEventDispatcher_C");
		return ptr;
	}

}


