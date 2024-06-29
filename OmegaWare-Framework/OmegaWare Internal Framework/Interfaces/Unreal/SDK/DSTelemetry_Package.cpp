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
	 * 		Name   -> Function DSTelemetry.TelemetryFunctionLibrary.SendLocalTelemetry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGenericStruct                              Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EventVersion                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTelemetryFunctionLibrary::SendLocalTelemetry(const class FString& EventName, struct FGenericStruct* Data, int32_t EventVersion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.TelemetryFunctionLibrary.SendLocalTelemetry");
		
		UTelemetryFunctionLibrary_SendLocalTelemetry_Params params {};
		params.EventName = EventName;
		params.EventVersion = EventVersion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTelemetryFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTelemetryFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSTelemetry.TelemetryFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTelemetrySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTelemetrySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSTelemetry.TelemetrySettings");
		return ptr;
	}

}


