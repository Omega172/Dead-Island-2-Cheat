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
	 * 		Name   -> Function StandinActor.StandInMeshActor.GetStaticMeshComponent
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* AStandInMeshActor::GetStaticMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandinActor.StandInMeshActor.GetStaticMeshComponent");
		
		AStandInMeshActor_GetStaticMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStandInMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStandInMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StandinActor.StandInMeshActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StandinActor.TestActor");
		return ptr;
	}

}


