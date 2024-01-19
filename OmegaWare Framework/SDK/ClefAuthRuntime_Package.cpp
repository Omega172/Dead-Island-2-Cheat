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
	 * 		RVA    -> 0x00D75C60
	 * 		Name   -> Function ClefAuthRuntime.UserAuthData.SetRefreshToken
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FString                                      NewToken                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUserAuthData::SetRefreshToken(const class FString& NewToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClefAuthRuntime.UserAuthData.SetRefreshToken");
		
		UUserAuthData_SetRefreshToken_Params params {};
		params.NewToken = NewToken;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D75BE0
	 * 		Name   -> Function ClefAuthRuntime.UserAuthData.GetRefreshToken
	 * 		Flags  -> (Final, Native, Public)
	 */
	class FString UUserAuthData::GetRefreshToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClefAuthRuntime.UserAuthData.GetRefreshToken");
		
		UUserAuthData_GetRefreshToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUserAuthData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUserAuthData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClefAuthRuntime.UserAuthData");
		return ptr;
	}

}


