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
	 * 		Name   -> Function BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C.AllowInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractiveComponent*                       InteractiveComponent                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Base_InstantUsePickup_C::AllowInteraction(class APawn* User, class UInteractiveComponent* InteractiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C.AllowInteraction");
		
		ABP_Base_InstantUsePickup_C_AllowInteraction_Params params {};
		params.User = User;
		params.InteractiveComponent = InteractiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C.GetInteractIconClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInteractiveComponent*                       InteractiveComponent                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UClass* ABP_Base_InstantUsePickup_C::GetInteractIconClass(class UInteractiveComponent* InteractiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C.GetInteractIconClass");
		
		ABP_Base_InstantUsePickup_C_GetInteractIconClass_Params params {};
		params.InteractiveComponent = InteractiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C.ServerInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_InstantUsePickup_C::ServerInteraction(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C.ServerInteraction");
		
		ABP_Base_InstantUsePickup_C_ServerInteraction_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C.LocalInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_InstantUsePickup_C::LocalInteraction(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C.LocalInteraction");
		
		ABP_Base_InstantUsePickup_C_LocalInteraction_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C.IsPlayerAtMaxFury
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsTrue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_InstantUsePickup_C::IsPlayerAtMaxFury(class APawn* User, bool* IsTrue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C.IsPlayerAtMaxFury");
		
		ABP_Base_InstantUsePickup_C_IsPlayerAtMaxFury_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTrue != nullptr)
			*IsTrue = params.IsTrue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C.HasPlayerUsedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsTrue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_InstantUsePickup_C::HasPlayerUsedItem(class APawn* User, bool* IsTrue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C.HasPlayerUsedItem");
		
		ABP_Base_InstantUsePickup_C_HasPlayerUsedItem_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTrue != nullptr)
			*IsTrue = params.IsTrue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C.IsPlayerAtMaxHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsTrue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_InstantUsePickup_C::IsPlayerAtMaxHealth(class APawn* User, bool* IsTrue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C.IsPlayerAtMaxHealth");
		
		ABP_Base_InstantUsePickup_C_IsPlayerAtMaxHealth_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTrue != nullptr)
			*IsTrue = params.IsTrue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Base_InstantUsePickup_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C.UserConstructionScript");
		
		ABP_Base_InstantUsePickup_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_InstantUsePickup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_InstantUsePickup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_InstantUsePickup.BP_Base_InstantUsePickup_C");
		return ptr;
	}

}


