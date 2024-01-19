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
	 * 		RVA    -> 0x00BFC630
	 * 		Name   -> Function Stats.StatsComponent.SetParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UStatsComponent*                             Parent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsComponent::SetParent(class UStatsComponent* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stats.StatsComponent.SetParent");
		
		UStatsComponent_SetParent_Params params {};
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BFC550
	 * 		Name   -> Function Stats.StatsComponent.SetContext
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InContext                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAdd                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsComponent::SetContext(const class FString& InContext, bool bAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stats.StatsComponent.SetContext");
		
		UStatsComponent_SetContext_Params params {};
		params.InContext = InContext;
		params.bAdd = bAdd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BFC4D0
	 * 		Name   -> Function Stats.StatsComponent.RemoveParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UStatsComponent*                             Parent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsComponent::RemoveParent(class UStatsComponent* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stats.StatsComponent.RemoveParent");
		
		UStatsComponent_RemoveParent_Params params {};
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BFC430
	 * 		Name   -> Function Stats.StatsComponent.RemoveContext
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InContext                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsComponent::RemoveContext(const class FString& InContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stats.StatsComponent.RemoveContext");
		
		UStatsComponent_RemoveContext_Params params {};
		params.InContext = InContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BFC410
	 * 		Name   -> Function Stats.StatsComponent.RemoveAllParents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UStatsComponent::RemoveAllParents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stats.StatsComponent.RemoveAllParents");
		
		UStatsComponent_RemoveAllParents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BFC320
	 * 		Name   -> Function Stats.StatsComponent.ParseGet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      StatAndContexts                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EStatBindType                                      BindType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UStatsComponent::ParseGet(const class FString& StatAndContexts, EStatBindType BindType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stats.StatsComponent.ParseGet");
		
		UStatsComponent_ParseGet_Params params {};
		params.StatAndContexts = StatAndContexts;
		params.BindType = BindType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BFC140
	 * 		Name   -> Function Stats.StatsComponent.K2_SetCallbackForStat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Stat                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EStatBindType                                      BindType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallOnRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsComponent::K2_SetCallbackForStat(class UObject* Object, const class FString& Stat, const class FString& FunctionName, EStatBindType BindType, bool bCallOnRegister)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stats.StatsComponent.K2_SetCallbackForStat");
		
		UStatsComponent_K2_SetCallbackForStat_Params params {};
		params.Object = Object;
		params.Stat = Stat;
		params.FunctionName = FunctionName;
		params.BindType = BindType;
		params.bCallOnRegister = bCallOnRegister;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BFBF60
	 * 		Name   -> Function Stats.StatsComponent.K2_RemoveCallbackForStat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Stat                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EStatBindType                                      BindType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallOnRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsComponent::K2_RemoveCallbackForStat(class UObject* Object, const class FString& Stat, const class FString& FunctionName, EStatBindType BindType, bool bCallOnRegister)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stats.StatsComponent.K2_RemoveCallbackForStat");
		
		UStatsComponent_K2_RemoveCallbackForStat_Params params {};
		params.Object = Object;
		params.Stat = Stat;
		params.FunctionName = FunctionName;
		params.BindType = BindType;
		params.bCallOnRegister = bCallOnRegister;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BFBDF0
	 * 		Name   -> Function Stats.StatsComponent.IncrementWithContexts
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Stat                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              InContexts                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsComponent::IncrementWithContexts(const class FString& Stat, TArray<class FString> InContexts, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stats.StatsComponent.IncrementWithContexts");
		
		UStatsComponent_IncrementWithContexts_Params params {};
		params.Stat = Stat;
		params.InContexts = InContexts;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BFBD10
	 * 		Name   -> Function Stats.StatsComponent.Increment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Stat                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsComponent::Increment(const class FString& Stat, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stats.StatsComponent.Increment");
		
		UStatsComponent_Increment_Params params {};
		params.Stat = Stat;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BFBBA0
	 * 		Name   -> Function Stats.StatsComponent.GetWithContexts
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      Stat                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              InContexts                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EStatBindType                                      BindType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UStatsComponent::GetWithContexts(const class FString& Stat, TArray<class FString>* InContexts, EStatBindType BindType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stats.StatsComponent.GetWithContexts");
		
		UStatsComponent_GetWithContexts_Params params {};
		params.Stat = Stat;
		params.BindType = BindType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InContexts != nullptr)
			*InContexts = params.InContexts;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BFBAB0
	 * 		Name   -> Function Stats.StatsComponent.Get
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      Stat                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EStatBindType                                      BindType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UStatsComponent::Get(const class FString& Stat, EStatBindType BindType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stats.StatsComponent.Get");
		
		UStatsComponent_Get_Params params {};
		params.Stat = Stat;
		params.BindType = BindType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BFB9A0
	 * 		Name   -> Function Stats.StatsComponent.ClientReceiveStatRequests
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 * Parameters:
	 * 		TArray<struct FStatRequest>                        StatRequests                                               (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UStatsComponent::ClientReceiveStatRequests(TArray<struct FStatRequest> StatRequests)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stats.StatsComponent.ClientReceiveStatRequests");
		
		UStatsComponent_ClientReceiveStatRequests_Params params {};
		params.StatRequests = StatRequests;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BFB920
	 * 		Name   -> Function Stats.StatsComponent.AddParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UStatsComponent*                             Parent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsComponent::AddParent(class UStatsComponent* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stats.StatsComponent.AddParent");
		
		UStatsComponent_AddParent_Params params {};
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BFB880
	 * 		Name   -> Function Stats.StatsComponent.AddContext
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InContext                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsComponent::AddContext(const class FString& InContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stats.StatsComponent.AddContext");
		
		UStatsComponent_AddContext_Params params {};
		params.InContext = InContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stats.StatsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatsRuntimeState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatsRuntimeState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stats.StatsRuntimeState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatWhiteListDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatWhiteListDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Stats.StatWhiteListDataAsset");
		return ptr;
	}

}


