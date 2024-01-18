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
	 * 		Name   -> Function BPI_CombatInterface.BPI_CombatInterface_C.AttackHold
	 * 		Flags  -> ()
	 */
	void UBPI_CombatInterface_C::AttackHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_CombatInterface.BPI_CombatInterface_C.AttackHold");
		
		UBPI_CombatInterface_C_AttackHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_CombatInterface.BPI_CombatInterface_C.AttackReleased
	 * 		Flags  -> ()
	 */
	void UBPI_CombatInterface_C::AttackReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_CombatInterface.BPI_CombatInterface_C.AttackReleased");
		
		UBPI_CombatInterface_C_AttackReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_CombatInterface.BPI_CombatInterface_C.AttackPressed
	 * 		Flags  -> ()
	 */
	void UBPI_CombatInterface_C::AttackPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_CombatInterface.BPI_CombatInterface_C.AttackPressed");
		
		UBPI_CombatInterface_C_AttackPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_CombatInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_CombatInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_CombatInterface.BPI_CombatInterface_C");
		return ptr;
	}

}


