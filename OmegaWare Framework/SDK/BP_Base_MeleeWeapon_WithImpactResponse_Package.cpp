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
	 * 		Name   -> Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.SpawnCEAttachedToSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCosmeticEffectsDefinition*                  Definition                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InSocketName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LocationOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    RotationOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FCosmeticEffectsID                          ID                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_MeleeWeapon_WithImpactResponse_C::SpawnCEAttachedToSocket(class UCosmeticEffectsDefinition* Definition, const class FName& InSocketName, const struct FVector& LocationOffset, const struct FRotator& RotationOffset, struct FCosmeticEffectsID* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.SpawnCEAttachedToSocket");
		
		ABP_Base_MeleeWeapon_WithImpactResponse_C_SpawnCEAttachedToSocket_Params params {};
		params.Definition = Definition;
		params.InSocketName = InSocketName;
		params.LocationOffset = LocationOffset;
		params.RotationOffset = RotationOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.GetSocketTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InSocketName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  InWorldTransform                                           (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_MeleeWeapon_WithImpactResponse_C::GetSocketTransform(const class FName& InSocketName, struct FTransform* InWorldTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.GetSocketTransform");
		
		ABP_Base_MeleeWeapon_WithImpactResponse_C_GetSocketTransform_Params params {};
		params.InSocketName = InSocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InWorldTransform != nullptr)
			*InWorldTransform = params.InWorldTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Base_MeleeWeapon_WithImpactResponse_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.ReceiveBeginPlay");
		
		ABP_Base_MeleeWeapon_WithImpactResponse_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.DeferredBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Base_MeleeWeapon_WithImpactResponse_C::DeferredBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.DeferredBeginPlay");
		
		ABP_Base_MeleeWeapon_WithImpactResponse_C_DeferredBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.PointImpactRegistered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointImpactEventResult                     Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ABP_Base_MeleeWeapon_WithImpactResponse_C::PointImpactRegistered(const struct FPointImpactEventResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.PointImpactRegistered");
		
		ABP_Base_MeleeWeapon_WithImpactResponse_C_PointImpactRegistered_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_MeleeWeapon_WithImpactResponse_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.ReceiveEndPlay");
		
		ABP_Base_MeleeWeapon_WithImpactResponse_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.ImpactInstigated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointImpactEventResult                     RecordedImpact                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void ABP_Base_MeleeWeapon_WithImpactResponse_C::ImpactInstigated(const struct FPointImpactEventResult& RecordedImpact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.ImpactInstigated");
		
		ABP_Base_MeleeWeapon_WithImpactResponse_C_ImpactInstigated_Params params {};
		params.RecordedImpact = RecordedImpact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.ExecuteUbergraph_BP_Base_MeleeWeapon_WithImpactResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_MeleeWeapon_WithImpactResponse_C::ExecuteUbergraph_BP_Base_MeleeWeapon_WithImpactResponse(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.ExecuteUbergraph_BP_Base_MeleeWeapon_WithImpactResponse");
		
		ABP_Base_MeleeWeapon_WithImpactResponse_C_ExecuteUbergraph_BP_Base_MeleeWeapon_WithImpactResponse_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_MeleeWeapon_WithImpactResponse_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_MeleeWeapon_WithImpactResponse_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C");
		return ptr;
	}

}


