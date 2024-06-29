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
	 * 		RVA    -> 0x00B9EFF0
	 * 		Name   -> Function DSOnline.TelemetryClient.SetState
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StateName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETelemetryEventCategory                            StateCategory                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGenericStruct                              Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTelemetryClient::SetState(const class FString& StateName, ETelemetryEventCategory StateCategory, struct FGenericStruct* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSOnline.TelemetryClient.SetState");
		
		UTelemetryClient_SetState_Params params {};
		params.StateName = StateName;
		params.StateCategory = StateCategory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B9EEE0
	 * 		Name   -> Function DSOnline.TelemetryClient.SendEvent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETelemetryEventCategory                            EventCategory                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGenericStruct                              Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTelemetryClient::SendEvent(const class FString& EventName, ETelemetryEventCategory EventCategory, struct FGenericStruct* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSOnline.TelemetryClient.SendEvent");
		
		UTelemetryClient_SendEvent_Params params {};
		params.EventName = EventName;
		params.EventCategory = EventCategory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTelemetryClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTelemetryClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSOnline.TelemetryClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B9EEB0
	 * 		Name   -> Function DSOnline.DSOnlineTelemetryFunctionLibrary.GetLocalPlayerClient
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UTelemetryClient* UDSOnlineTelemetryFunctionLibrary::STATIC_GetLocalPlayerClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSOnline.DSOnlineTelemetryFunctionLibrary.GetLocalPlayerClient");
		
		UDSOnlineTelemetryFunctionLibrary_GetLocalPlayerClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSOnlineTelemetryFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSOnlineTelemetryFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSOnline.DSOnlineTelemetryFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSOnlineSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSOnlineSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSOnline.DSOnlineSettings");
		return ptr;
	}

}


