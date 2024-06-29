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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHandlerComponentFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHandlerComponentFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PacketHandler.HandlerComponentFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPacketHandlerProfileConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPacketHandlerProfileConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PacketHandler.PacketHandlerProfileConfig");
		return ptr;
	}

}


