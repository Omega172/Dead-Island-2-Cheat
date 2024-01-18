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
	 * 		Name   -> Function BP_MenusFunctionLibrary.BP_MenusFunctionLibrary_C.ShowUnavailableInDemoDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MenusFunctionLibrary_C::ShowUnavailableInDemoDialog(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenusFunctionLibrary.BP_MenusFunctionLibrary_C.ShowUnavailableInDemoDialog");
		
		UBP_MenusFunctionLibrary_C_ShowUnavailableInDemoDialog_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MenusFunctionLibrary.BP_MenusFunctionLibrary_C.OpenVendorMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVendorComponent*                            Vendor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MenusFunctionLibrary_C::OpenVendorMenu(class UVendorComponent* Vendor, class APlayerController* PlayerController, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenusFunctionLibrary.BP_MenusFunctionLibrary_C.OpenVendorMenu");
		
		UBP_MenusFunctionLibrary_C_OpenVendorMenu_Params params {};
		params.Vendor = Vendor;
		params.PlayerController = PlayerController;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MenusFunctionLibrary.BP_MenusFunctionLibrary_C.OpenMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMenuType*                                   Menu                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMenuOpeningParams                          OpeningParams                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UMenuInstance* UBP_MenusFunctionLibrary_C::OpenMenu(class UMenuType* Menu, const struct FMenuOpeningParams& OpeningParams, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenusFunctionLibrary.BP_MenusFunctionLibrary_C.OpenMenu");
		
		UBP_MenusFunctionLibrary_C_OpenMenu_Params params {};
		params.Menu = Menu;
		params.OpeningParams = OpeningParams;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MenusFunctionLibrary.BP_MenusFunctionLibrary_C.OpenCloseInGameMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Opened                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        ActionFilterReason                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputMapperActionFilterDefinition*          ActionFilter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      HUDState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       GameMenuAudioStateId                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MenusFunctionLibrary_C::OpenCloseInGameMenu(bool Opened, const class FName& ActionFilterReason, class UInputMapperActionFilterDefinition* ActionFilter, class UClass* HUDState, struct FGuid* GameMenuAudioStateId, class UObject* WorldContextObject, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenusFunctionLibrary.BP_MenusFunctionLibrary_C.OpenCloseInGameMenu");
		
		UBP_MenusFunctionLibrary_C_OpenCloseInGameMenu_Params params {};
		params.Opened = Opened;
		params.ActionFilterReason = ActionFilterReason;
		params.ActionFilter = ActionFilter;
		params.HUDState = HUDState;
		params.WorldContextObject = WorldContextObject;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameMenuAudioStateId != nullptr)
			*GameMenuAudioStateId = params.GameMenuAudioStateId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MenusFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MenusFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenusFunctionLibrary.BP_MenusFunctionLibrary_C");
		return ptr;
	}

}


