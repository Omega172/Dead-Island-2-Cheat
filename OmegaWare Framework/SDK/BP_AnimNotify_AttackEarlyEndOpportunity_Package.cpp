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
	 * 		Name   -> Function BP_AnimNotify_AttackEarlyEndOpportunity.BP_AnimNotify_AttackEarlyEndOpportunity_C.PerformKnowledgeBaseCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADICharacter*                                OwnerCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDSLogChannelHandle*                         LoggerHandle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      MontageName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AnimNotify_AttackEarlyEndOpportunity_C::PerformKnowledgeBaseCheck(class ADICharacter* OwnerCharacter, class UDSLogChannelHandle* LoggerHandle, const class FString& MontageName, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_AttackEarlyEndOpportunity.BP_AnimNotify_AttackEarlyEndOpportunity_C.PerformKnowledgeBaseCheck");
		
		UBP_AnimNotify_AttackEarlyEndOpportunity_C_PerformKnowledgeBaseCheck_Params params {};
		params.OwnerCharacter = OwnerCharacter;
		params.LoggerHandle = LoggerHandle;
		params.MontageName = MontageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnimNotify_AttackEarlyEndOpportunity.BP_AnimNotify_AttackEarlyEndOpportunity_C.PerformDistanceCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADICharacter*                                OwnerCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDSLogChannelHandle*                         LoggerHandle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      MontageName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AnimNotify_AttackEarlyEndOpportunity_C::PerformDistanceCheck(class ADICharacter* OwnerCharacter, class UDSLogChannelHandle* LoggerHandle, const class FString& MontageName, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_AttackEarlyEndOpportunity.BP_AnimNotify_AttackEarlyEndOpportunity_C.PerformDistanceCheck");
		
		UBP_AnimNotify_AttackEarlyEndOpportunity_C_PerformDistanceCheck_Params params {};
		params.OwnerCharacter = OwnerCharacter;
		params.LoggerHandle = LoggerHandle;
		params.MontageName = MontageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnimNotify_AttackEarlyEndOpportunity.BP_AnimNotify_AttackEarlyEndOpportunity_C.PerformFacingCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDSLogChannelHandle*                         LoggerHandle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      MontageName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AnimNotify_AttackEarlyEndOpportunity_C::PerformFacingCheck(class AActor* OwnerCharacter, class UDSLogChannelHandle* LoggerHandle, const class FString& MontageName, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_AttackEarlyEndOpportunity.BP_AnimNotify_AttackEarlyEndOpportunity_C.PerformFacingCheck");
		
		UBP_AnimNotify_AttackEarlyEndOpportunity_C_PerformFacingCheck_Params params {};
		params.OwnerCharacter = OwnerCharacter;
		params.LoggerHandle = LoggerHandle;
		params.MontageName = MontageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnimNotify_AttackEarlyEndOpportunity.BP_AnimNotify_AttackEarlyEndOpportunity_C.Received_Notify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_AnimNotify_AttackEarlyEndOpportunity_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_AttackEarlyEndOpportunity.BP_AnimNotify_AttackEarlyEndOpportunity_C.Received_Notify");
		
		UBP_AnimNotify_AttackEarlyEndOpportunity_C_Received_Notify_Params params {};
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
	 * 		Name   -> PredefinedFunction UBP_AnimNotify_AttackEarlyEndOpportunity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AnimNotify_AttackEarlyEndOpportunity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotify_AttackEarlyEndOpportunity.BP_AnimNotify_AttackEarlyEndOpportunity_C");
		return ptr;
	}

}


