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
	 * 		Name   -> Function BP_Projectile_Spit_Slobber_Firestorm.BP_Projectile_Spit_Slobber_Firestorm_C.EnableHoming
	 * 		Flags  -> ()
	 */
	void ABP_Projectile_Spit_Slobber_Firestorm_C::EnableHoming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Spit_Slobber_Firestorm.BP_Projectile_Spit_Slobber_Firestorm_C.EnableHoming");
		
		ABP_Projectile_Spit_Slobber_Firestorm_C_EnableHoming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Projectile_Spit_Slobber_Firestorm.BP_Projectile_Spit_Slobber_Firestorm_C.Initialise
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Projectile_Spit_Slobber_Firestorm_C::Initialise(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Spit_Slobber_Firestorm.BP_Projectile_Spit_Slobber_Firestorm_C.Initialise");
		
		ABP_Projectile_Spit_Slobber_Firestorm_C_Initialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Projectile_Spit_Slobber_Firestorm.BP_Projectile_Spit_Slobber_Firestorm_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Projectile_Spit_Slobber_Firestorm_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Spit_Slobber_Firestorm.BP_Projectile_Spit_Slobber_Firestorm_C.ReceiveBeginPlay");
		
		ABP_Projectile_Spit_Slobber_Firestorm_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Projectile_Spit_Slobber_Firestorm.BP_Projectile_Spit_Slobber_Firestorm_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Spit_Slobber_Firestorm_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Spit_Slobber_Firestorm.BP_Projectile_Spit_Slobber_Firestorm_C.ReceiveEndPlay");
		
		ABP_Projectile_Spit_Slobber_Firestorm_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Projectile_Spit_Slobber_Firestorm.BP_Projectile_Spit_Slobber_Firestorm_C.ExecuteUbergraph_BP_Projectile_Spit_Slobber_Firestorm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Spit_Slobber_Firestorm_C::ExecuteUbergraph_BP_Projectile_Spit_Slobber_Firestorm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Spit_Slobber_Firestorm.BP_Projectile_Spit_Slobber_Firestorm_C.ExecuteUbergraph_BP_Projectile_Spit_Slobber_Firestorm");
		
		ABP_Projectile_Spit_Slobber_Firestorm_C_ExecuteUbergraph_BP_Projectile_Spit_Slobber_Firestorm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Projectile_Spit_Slobber_Firestorm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Projectile_Spit_Slobber_Firestorm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Spit_Slobber_Firestorm.BP_Projectile_Spit_Slobber_Firestorm_C");
		return ptr;
	}

}


