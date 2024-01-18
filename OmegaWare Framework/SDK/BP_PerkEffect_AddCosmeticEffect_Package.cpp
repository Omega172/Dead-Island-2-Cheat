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
	 * 		Name   -> Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.BindOnActorKilled
	 * 		Flags  -> ()
	 */
	void UBP_PerkEffect_AddCosmeticEffect_C::BindOnActorKilled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.BindOnActorKilled");
		
		UBP_PerkEffect_AddCosmeticEffect_C_BindOnActorKilled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.StopListeningToParamFacts
	 * 		Flags  -> ()
	 */
	void UBP_PerkEffect_AddCosmeticEffect_C::StopListeningToParamFacts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.StopListeningToParamFacts");
		
		UBP_PerkEffect_AddCosmeticEffect_C_StopListeningToParamFacts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.StartListeningToParamFacts
	 * 		Flags  -> ()
	 */
	void UBP_PerkEffect_AddCosmeticEffect_C::StartListeningToParamFacts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.StartListeningToParamFacts");
		
		UBP_PerkEffect_AddCosmeticEffect_C_StartListeningToParamFacts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.OnParamFactChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EKnowledgeBaseFactChangeType                       FactChangeType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_AddCosmeticEffect_C::OnParamFactChanged(const struct FKnowledgeBaseFactKey& FactKey, class UKnowledgeBaseComponent* KnowledgeBaseComponent, EKnowledgeBaseFactChangeType FactChangeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.OnParamFactChanged");
		
		UBP_PerkEffect_AddCosmeticEffect_C_OnParamFactChanged_Params params {};
		params.FactKey = FactKey;
		params.KnowledgeBaseComponent = KnowledgeBaseComponent;
		params.FactChangeType = FactChangeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.AttachToActor
	 * 		Flags  -> ()
	 */
	void UBP_PerkEffect_AddCosmeticEffect_C::AttachToActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.AttachToActor");
		
		UBP_PerkEffect_AddCosmeticEffect_C_AttachToActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.AttachToSkeletalMesh
	 * 		Flags  -> ()
	 */
	void UBP_PerkEffect_AddCosmeticEffect_C::AttachToSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.AttachToSkeletalMesh");
		
		UBP_PerkEffect_AddCosmeticEffect_C_AttachToSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.LifeSpan
	 * 		Flags  -> ()
	 */
	void UBP_PerkEffect_AddCosmeticEffect_C::LifeSpan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.LifeSpan");
		
		UBP_PerkEffect_AddCosmeticEffect_C_LifeSpan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.DestroySpawnedActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_AddCosmeticEffect_C::DestroySpawnedActor(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.DestroySpawnedActor");
		
		UBP_PerkEffect_AddCosmeticEffect_C_DestroySpawnedActor_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.AttachCosmeticToActor
	 * 		Flags  -> ()
	 */
	void UBP_PerkEffect_AddCosmeticEffect_C::AttachCosmeticToActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.AttachCosmeticToActor");
		
		UBP_PerkEffect_AddCosmeticEffect_C_AttachCosmeticToActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectEndParams                        Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_AddCosmeticEffect_C::OnEnd(const struct FPerkEffectEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.OnEnd");
		
		UBP_PerkEffect_AddCosmeticEffect_C_OnEnd_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.AttachCosmeticToSkeletalMesh
	 * 		Flags  -> ()
	 */
	void UBP_PerkEffect_AddCosmeticEffect_C::AttachCosmeticToSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.AttachCosmeticToSkeletalMesh");
		
		UBP_PerkEffect_AddCosmeticEffect_C_AttachCosmeticToSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.OnStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_AddCosmeticEffect_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.OnStart");
		
		UBP_PerkEffect_AddCosmeticEffect_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.ExecuteUbergraph_BP_PerkEffect_AddCosmeticEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_AddCosmeticEffect_C::ExecuteUbergraph_BP_PerkEffect_AddCosmeticEffect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.ExecuteUbergraph_BP_PerkEffect_AddCosmeticEffect");
		
		UBP_PerkEffect_AddCosmeticEffect_C_ExecuteUbergraph_BP_PerkEffect_AddCosmeticEffect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_AddCosmeticEffect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_AddCosmeticEffect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C");
		return ptr;
	}

}


