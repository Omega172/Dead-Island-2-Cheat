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
	 * 		Name   -> PredefinedFunction UBodyNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBodyNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BodyProxyTree.BodyNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBodyProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBodyProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BodyProxyTree.BodyProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBodyProxyTreeAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBodyProxyTreeAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BodyProxyTree.BodyProxyTreeAsset");
		return ptr;
	}

}


