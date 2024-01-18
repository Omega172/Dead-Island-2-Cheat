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
	 * 		Name   -> PredefinedFunction UAuthConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAuthConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClefSDKRuntime.AuthConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAuthUserConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAuthUserConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClefSDKRuntime.AuthUserConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAVSSDKSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAVSSDKSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClefSDKRuntime.AVSSDKSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClefBuildInfoConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClefBuildInfoConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClefSDKRuntime.ClefBuildInfoConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClefConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClefConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClefSDKRuntime.ClefConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClefEndpointConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClefEndpointConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClefSDKRuntime.ClefEndpointConfig");
		return ptr;
	}

}


