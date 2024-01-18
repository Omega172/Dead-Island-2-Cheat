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
	 * 		Name   -> Function BP_AnimNotify_SpawnExplosion.BP_AnimNotify_SpawnExplosion_C.ListOfActorsToIgnore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UExplosionActionArchetype*                   ExplosionActionArchetype                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADICharacter*                                Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ExplosionLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (Parm, OutParm)
	 */
	void UBP_AnimNotify_SpawnExplosion_C::ListOfActorsToIgnore(class UExplosionActionArchetype* ExplosionActionArchetype, class ADICharacter* Owner, const struct FVector& ExplosionLocation, TArray<class AActor*>* ActorsToIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_SpawnExplosion.BP_AnimNotify_SpawnExplosion_C.ListOfActorsToIgnore");
		
		UBP_AnimNotify_SpawnExplosion_C_ListOfActorsToIgnore_Params params {};
		params.ExplosionActionArchetype = ExplosionActionArchetype;
		params.Owner = Owner;
		params.ExplosionLocation = ExplosionLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorsToIgnore != nullptr)
			*ActorsToIgnore = params.ActorsToIgnore;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnimNotify_SpawnExplosion.BP_AnimNotify_SpawnExplosion_C.DetermineStaminaDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADIPlayerCharacter*                          Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StaminaDamage                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AnimNotify_SpawnExplosion_C::DetermineStaminaDamage(class AActor* Attacker, class ADIPlayerCharacter* Target, float* StaminaDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_SpawnExplosion.BP_AnimNotify_SpawnExplosion_C.DetermineStaminaDamage");
		
		UBP_AnimNotify_SpawnExplosion_C_DetermineStaminaDamage_Params params {};
		params.Attacker = Attacker;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StaminaDamage != nullptr)
			*StaminaDamage = params.StaminaDamage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnimNotify_SpawnExplosion.BP_AnimNotify_SpawnExplosion_C.Received_Notify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_AnimNotify_SpawnExplosion_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_SpawnExplosion.BP_AnimNotify_SpawnExplosion_C.Received_Notify");
		
		UBP_AnimNotify_SpawnExplosion_C_Received_Notify_Params params {};
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
	 * 		Name   -> PredefinedFunction UBP_AnimNotify_SpawnExplosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AnimNotify_SpawnExplosion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotify_SpawnExplosion.BP_AnimNotify_SpawnExplosion_C");
		return ptr;
	}

}


