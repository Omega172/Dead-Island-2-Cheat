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
	 * 		Name   -> Function Leaks.BaseLeakObject.OnLeakStopped
	 * 		Flags  -> ()
	 */
	void UBaseLeakObject::OnLeakStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaks.BaseLeakObject.OnLeakStopped");
		
		UBaseLeakObject_OnLeakStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Leaks.BaseLeakObject.OnLeakStarted
	 * 		Flags  -> ()
	 */
	void UBaseLeakObject::OnLeakStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaks.BaseLeakObject.OnLeakStarted");
		
		UBaseLeakObject_OnLeakStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Leaks.BaseLeakObject.GetRequestParams
	 * 		Flags  -> ()
	 */
	struct FLeakRequestParams UBaseLeakObject::GetRequestParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaks.BaseLeakObject.GetRequestParams");
		
		UBaseLeakObject_GetRequestParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseLeakObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseLeakObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Leaks.BaseLeakObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Leaks.LeakComponent.StopLeak
	 * 		Flags  -> ()
	 */
	void ULeakComponent::StopLeak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaks.LeakComponent.StopLeak");
		
		ULeakComponent_StopLeak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Leaks.LeakComponent.RequestLeak
	 * 		Flags  -> ()
	 */
	void ULeakComponent::RequestLeak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaks.LeakComponent.RequestLeak");
		
		ULeakComponent_RequestLeak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Leaks.LeakComponent.EditorOverrideLeakInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLeakInfo                                   InLeakInfo                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULeakComponent::EditorOverrideLeakInfo(const struct FLeakInfo& InLeakInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaks.LeakComponent.EditorOverrideLeakInfo");
		
		ULeakComponent_EditorOverrideLeakInfo_Params params {};
		params.InLeakInfo = InLeakInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeakComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeakComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Leaks.LeakComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeakDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeakDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Leaks.LeakDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Leaks.LeakFunctionLibrary.StopLeak
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ID                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULeakFunctionLibrary::StopLeak(class UObject* WorldContextObject, int32_t* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaks.LeakFunctionLibrary.StopLeak");
		
		ULeakFunctionLibrary_StopLeak_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Leaks.LeakFunctionLibrary.RequestLeak
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLeakRequestParams                          LeakRequest                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	int32_t ULeakFunctionLibrary::RequestLeak(class UObject* WorldContextObject, const struct FLeakRequestParams& LeakRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaks.LeakFunctionLibrary.RequestLeak");
		
		ULeakFunctionLibrary_RequestLeak_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LeakRequest = LeakRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeakFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeakFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Leaks.LeakFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeakObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeakObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Leaks.LeakObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALeaksManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALeaksManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Leaks.LeaksManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveLeakMaxCountEnforcementHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveLeakMaxCountEnforcementHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Leaks.RemoveLeakMaxCountEnforcementHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStartLeakMaxCountEnforcementHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartLeakMaxCountEnforcementHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Leaks.StartLeakMaxCountEnforcementHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStopLeakMaxCountEnforcementHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStopLeakMaxCountEnforcementHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Leaks.StopLeakMaxCountEnforcementHandler");
		return ptr;
	}

}


