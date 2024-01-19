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
	 * 		Name   -> PredefinedFunction UBehaviourIssuerArbitratorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBehaviourIssuerArbitratorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BehaviourIssuers.BehaviourIssuerArbitratorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTComposite_BehaviourIssuer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTComposite_BehaviourIssuer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BehaviourIssuers.BTComposite_BehaviourIssuer");
		return ptr;
	}

}


