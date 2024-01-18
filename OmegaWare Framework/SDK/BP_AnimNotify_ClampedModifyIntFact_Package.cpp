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
	 * 		Name   -> Function BP_AnimNotify_ClampedModifyIntFact.BP_AnimNotify_ClampedModifyIntFact_C.ClampedFactIncrement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            IncrementAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AnimNotify_ClampedModifyIntFact_C::ClampedFactIncrement(class UKnowledgeBaseComponent* KnowledgeBaseComponent, int32_t IncrementAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_ClampedModifyIntFact.BP_AnimNotify_ClampedModifyIntFact_C.ClampedFactIncrement");
		
		UBP_AnimNotify_ClampedModifyIntFact_C_ClampedFactIncrement_Params params {};
		params.KnowledgeBaseComponent = KnowledgeBaseComponent;
		params.IncrementAmount = IncrementAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnimNotify_ClampedModifyIntFact.BP_AnimNotify_ClampedModifyIntFact_C.GetNotifyName
	 * 		Flags  -> ()
	 */
	class FString UBP_AnimNotify_ClampedModifyIntFact_C::GetNotifyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_ClampedModifyIntFact.BP_AnimNotify_ClampedModifyIntFact_C.GetNotifyName");
		
		UBP_AnimNotify_ClampedModifyIntFact_C_GetNotifyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnimNotify_ClampedModifyIntFact.BP_AnimNotify_ClampedModifyIntFact_C.Received_Notify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_AnimNotify_ClampedModifyIntFact_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_ClampedModifyIntFact.BP_AnimNotify_ClampedModifyIntFact_C.Received_Notify");
		
		UBP_AnimNotify_ClampedModifyIntFact_C_Received_Notify_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AnimNotify_ClampedModifyIntFact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AnimNotify_ClampedModifyIntFact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotify_ClampedModifyIntFact.BP_AnimNotify_ClampedModifyIntFact_C");
		return ptr;
	}

}


