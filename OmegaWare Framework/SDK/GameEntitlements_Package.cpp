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
	 * 		Name   -> PredefinedFunction UGameEntitlementsDataTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEntitlementsDataTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEntitlements.GameEntitlementsDataTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.RevokeEntitlementFromLocalPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFixedDataTableEditableRowHandle            GameEntitlementDefinitionHandle                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::RevokeEntitlementFromLocalPlayer(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.RevokeEntitlementFromLocalPlayer");
		
		AGameEntitlementsManager_RevokeEntitlementFromLocalPlayer_Params params {};
		params.GameEntitlementDefinitionHandle = GameEntitlementDefinitionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.RevokeEntitlementFromAllPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFixedDataTableEditableRowHandle            GameEntitlementDefinitionHandle                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::RevokeEntitlementFromAllPlayers(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.RevokeEntitlementFromAllPlayers");
		
		AGameEntitlementsManager_RevokeEntitlementFromAllPlayers_Params params {};
		params.GameEntitlementDefinitionHandle = GameEntitlementDefinitionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.RevokeEntitlementFrom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFixedDataTableEditableRowHandle            GameEntitlementDefinitionHandle                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::RevokeEntitlementFrom(class APlayerController* PlayerController, const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.RevokeEntitlementFrom");
		
		AGameEntitlementsManager_RevokeEntitlementFrom_Params params {};
		params.PlayerController = PlayerController;
		params.GameEntitlementDefinitionHandle = GameEntitlementDefinitionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.RevokeEntitlement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFixedDataTableEditableRowHandle            GameEntitlementDefinitionHandle                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::RevokeEntitlement(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.RevokeEntitlement");
		
		AGameEntitlementsManager_RevokeEntitlement_Params params {};
		params.GameEntitlementDefinitionHandle = GameEntitlementDefinitionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.RemoveEntitlementRevokedTableDelegateFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameEntitlementsDataTable*                  Table                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::RemoveEntitlementRevokedTableDelegateFor(class UGameEntitlementsDataTable* Table, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.RemoveEntitlementRevokedTableDelegateFor");
		
		AGameEntitlementsManager_RemoveEntitlementRevokedTableDelegateFor_Params params {};
		params.Table = Table;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.RemoveEntitlementRevokedDelegateFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFixedDataTableEditableRowHandle            Row                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::RemoveEntitlementRevokedDelegateFor(const struct FFixedDataTableEditableRowHandle& Row, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.RemoveEntitlementRevokedDelegateFor");
		
		AGameEntitlementsManager_RemoveEntitlementRevokedDelegateFor_Params params {};
		params.Row = Row;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.RemoveEntitlementGrantedTableListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameEntitlementsDataTable*                  DataTableToListenTo                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::RemoveEntitlementGrantedTableListener(class UGameEntitlementsDataTable* DataTableToListenTo, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.RemoveEntitlementGrantedTableListener");
		
		AGameEntitlementsManager_RemoveEntitlementGrantedTableListener_Params params {};
		params.DataTableToListenTo = DataTableToListenTo;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.RemoveEntitlementGrantedListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFixedDataTableEditableRowHandle            RowToListenTo                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::RemoveEntitlementGrantedListener(const struct FFixedDataTableEditableRowHandle& RowToListenTo, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.RemoveEntitlementGrantedListener");
		
		AGameEntitlementsManager_RemoveEntitlementGrantedListener_Params params {};
		params.RowToListenTo = RowToListenTo;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.RegisterGameEntitlementsDataTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameEntitlementsDataTable*                  GameEntitlementsDataTable                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::RegisterGameEntitlementsDataTable(class UGameEntitlementsDataTable* GameEntitlementsDataTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.RegisterGameEntitlementsDataTable");
		
		AGameEntitlementsManager_RegisterGameEntitlementsDataTable_Params params {};
		params.GameEntitlementsDataTable = GameEntitlementsDataTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.IsEntitlementGivenToLocalPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFixedDataTableEditableRowHandle            GameEntitlementDefinitionHandle                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AGameEntitlementsManager::IsEntitlementGivenToLocalPlayer(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.IsEntitlementGivenToLocalPlayer");
		
		AGameEntitlementsManager_IsEntitlementGivenToLocalPlayer_Params params {};
		params.GameEntitlementDefinitionHandle = GameEntitlementDefinitionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.IsEntitlementGivenTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFixedDataTableEditableRowHandle            GameEntitlementDefinitionHandle                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AGameEntitlementsManager::IsEntitlementGivenTo(class APlayerController* PlayerController, const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.IsEntitlementGivenTo");
		
		AGameEntitlementsManager_IsEntitlementGivenTo_Params params {};
		params.PlayerController = PlayerController;
		params.GameEntitlementDefinitionHandle = GameEntitlementDefinitionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.IsEntitlementGiven
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFixedDataTableEditableRowHandle            GameEntitlementDefinitionHandle                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AGameEntitlementsManager::IsEntitlementGiven(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.IsEntitlementGiven");
		
		AGameEntitlementsManager_IsEntitlementGiven_Params params {};
		params.GameEntitlementDefinitionHandle = GameEntitlementDefinitionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.GiveEntitlementToLocalPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFixedDataTableEditableRowHandle            GameEntitlementDefinitionHandle                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::GiveEntitlementToLocalPlayer(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.GiveEntitlementToLocalPlayer");
		
		AGameEntitlementsManager_GiveEntitlementToLocalPlayer_Params params {};
		params.GameEntitlementDefinitionHandle = GameEntitlementDefinitionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.GiveEntitlementToAllPlayersWithCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFixedDataTableEditableRowHandle            GameEntitlementDefinitionHandle                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameEntitlementCategory                           Category                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::GiveEntitlementToAllPlayersWithCategory(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle, EGameEntitlementCategory Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.GiveEntitlementToAllPlayersWithCategory");
		
		AGameEntitlementsManager_GiveEntitlementToAllPlayersWithCategory_Params params {};
		params.GameEntitlementDefinitionHandle = GameEntitlementDefinitionHandle;
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.GiveEntitlementToAllPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFixedDataTableEditableRowHandle            GameEntitlementDefinitionHandle                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::GiveEntitlementToAllPlayers(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.GiveEntitlementToAllPlayers");
		
		AGameEntitlementsManager_GiveEntitlementToAllPlayers_Params params {};
		params.GameEntitlementDefinitionHandle = GameEntitlementDefinitionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.GiveEntitlementTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFixedDataTableEditableRowHandle            GameEntitlementDefinitionHandle                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::GiveEntitlementTo(class APlayerController* PlayerController, const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.GiveEntitlementTo");
		
		AGameEntitlementsManager_GiveEntitlementTo_Params params {};
		params.PlayerController = PlayerController;
		params.GameEntitlementDefinitionHandle = GameEntitlementDefinitionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.GiveEntitlement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFixedDataTableEditableRowHandle            GameEntitlementDefinitionHandle                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::GiveEntitlement(const struct FFixedDataTableEditableRowHandle& GameEntitlementDefinitionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.GiveEntitlement");
		
		AGameEntitlementsManager_GiveEntitlement_Params params {};
		params.GameEntitlementDefinitionHandle = GameEntitlementDefinitionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.AddEntitlementRevokedTableDelegateFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameEntitlementsDataTable*                  Table                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::AddEntitlementRevokedTableDelegateFor(class UGameEntitlementsDataTable* Table, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.AddEntitlementRevokedTableDelegateFor");
		
		AGameEntitlementsManager_AddEntitlementRevokedTableDelegateFor_Params params {};
		params.Table = Table;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.AddEntitlementRevokedDelegateFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFixedDataTableEditableRowHandle            Row                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::AddEntitlementRevokedDelegateFor(const struct FFixedDataTableEditableRowHandle& Row, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.AddEntitlementRevokedDelegateFor");
		
		AGameEntitlementsManager_AddEntitlementRevokedDelegateFor_Params params {};
		params.Row = Row;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.AddEntitlementGrantedTableListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameEntitlementsDataTable*                  DataTableToListenTo                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::AddEntitlementGrantedTableListener(class UGameEntitlementsDataTable* DataTableToListenTo, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.AddEntitlementGrantedTableListener");
		
		AGameEntitlementsManager_AddEntitlementGrantedTableListener_Params params {};
		params.DataTableToListenTo = DataTableToListenTo;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameEntitlements.GameEntitlementsManager.AddEntitlementGrantedListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFixedDataTableEditableRowHandle            RowToListenTo                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGameEntitlementsManager::AddEntitlementGrantedListener(const struct FFixedDataTableEditableRowHandle& RowToListenTo, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameEntitlements.GameEntitlementsManager.AddEntitlementGrantedListener");
		
		AGameEntitlementsManager_AddEntitlementGrantedListener_Params params {};
		params.RowToListenTo = RowToListenTo;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameEntitlementsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameEntitlementsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEntitlements.GameEntitlementsManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameEntitlementsManagerRuntimeState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEntitlementsManagerRuntimeState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEntitlements.GameEntitlementsManagerRuntimeState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseExpressionBuilderObject_HasEntitlement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseExpressionBuilderObject_HasEntitlement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameEntitlements.KnowledgeBaseExpressionBuilderObject_HasEntitlement");
		return ptr;
	}

}


