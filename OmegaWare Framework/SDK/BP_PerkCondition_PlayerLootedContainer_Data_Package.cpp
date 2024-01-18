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
	 * 		Name   -> Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.HandleSatisfy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELootContainerMapDiscoveryType                     ContainerType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_PlayerLootedContainer_Data_C::HandleSatisfy(ELootContainerMapDiscoveryType ContainerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.HandleSatisfy");
		
		UBP_PerkCondition_PlayerLootedContainer_Data_C_HandleSatisfy_Params params {};
		params.ContainerType = ContainerType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.Possessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_PlayerLootedContainer_Data_C::Possessed(class AController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.Possessed");
		
		UBP_PerkCondition_PlayerLootedContainer_Data_C_Possessed_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.SetupLootingListener
	 * 		Flags  -> ()
	 */
	void UBP_PerkCondition_PlayerLootedContainer_Data_C::SetupLootingListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.SetupLootingListener");
		
		UBP_PerkCondition_PlayerLootedContainer_Data_C_SetupLootingListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.RemoveLootingListener
	 * 		Flags  -> ()
	 */
	void UBP_PerkCondition_PlayerLootedContainer_Data_C::RemoveLootingListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.RemoveLootingListener");
		
		UBP_PerkCondition_PlayerLootedContainer_Data_C_RemoveLootingListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.OnPlayerLooted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADIPlayerController*                         PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ALootableContainer*                          LootableContainer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_PlayerLootedContainer_Data_C::OnPlayerLooted(class ADIPlayerController* PlayerController, class ALootableContainer* LootableContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.OnPlayerLooted");
		
		UBP_PerkCondition_PlayerLootedContainer_Data_C_OnPlayerLooted_Params params {};
		params.PlayerController = PlayerController;
		params.LootableContainer = LootableContainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.OnPlayerLooted_Trunk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELootContainerMapDiscoveryType                     LootContainerType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_PlayerLootedContainer_Data_C::OnPlayerLooted_Trunk(ELootContainerMapDiscoveryType LootContainerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.OnPlayerLooted_Trunk");
		
		UBP_PerkCondition_PlayerLootedContainer_Data_C_OnPlayerLooted_Trunk_Params params {};
		params.LootContainerType = LootContainerType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.ExecuteUbergraph_BP_PerkCondition_PlayerLootedContainer_Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_PlayerLootedContainer_Data_C::ExecuteUbergraph_BP_PerkCondition_PlayerLootedContainer_Data(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.ExecuteUbergraph_BP_PerkCondition_PlayerLootedContainer_Data");
		
		UBP_PerkCondition_PlayerLootedContainer_Data_C_ExecuteUbergraph_BP_PerkCondition_PlayerLootedContainer_Data_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkCondition_PlayerLootedContainer_Data_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkCondition_PlayerLootedContainer_Data_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C");
		return ptr;
	}

}


