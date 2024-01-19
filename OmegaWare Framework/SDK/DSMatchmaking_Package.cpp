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
	 * 		Name   -> PredefinedFunction UPeerMeshNetConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPeerMeshNetConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSMatchmaking.PeerMeshNetConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPeerMeshNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPeerMeshNetDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSMatchmaking.PeerMeshNetDriver");
		return ptr;
	}

}


