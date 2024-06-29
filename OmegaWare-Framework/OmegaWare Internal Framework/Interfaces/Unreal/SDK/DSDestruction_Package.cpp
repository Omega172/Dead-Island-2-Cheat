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
	 * 		RVA    -> 0x00F0DE40
	 * 		Name   -> Function DSDestruction.DSDestructibleComponent.ToggleEnableReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSDestructibleComponent::ToggleEnableReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSDestruction.DSDestructibleComponent.ToggleEnableReason");
		
		UDSDestructibleComponent_ToggleEnableReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F0DDC0
	 * 		Name   -> Function DSDestruction.DSDestructibleComponent.RemoveEnableReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSDestructibleComponent::RemoveEnableReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSDestruction.DSDestructibleComponent.RemoveEnableReason");
		
		UDSDestructibleComponent_RemoveEnableReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F0DD40
	 * 		Name   -> Function DSDestruction.DSDestructibleComponent.RemoveDisableReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSDestructibleComponent::RemoveDisableReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSDestruction.DSDestructibleComponent.RemoveDisableReason");
		
		UDSDestructibleComponent_RemoveDisableReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F0DC80
	 * 		Name   -> Function DSDestruction.DSDestructibleComponent.K2_SetDataAsset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDSDestructionAsset*                         DataAssetIn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InChunkID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSDestructibleComponent::K2_SetDataAsset(class UDSDestructionAsset* DataAssetIn, const class FName& InChunkID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSDestruction.DSDestructibleComponent.K2_SetDataAsset");
		
		UDSDestructibleComponent_K2_SetDataAsset_Params params {};
		params.DataAssetIn = DataAssetIn;
		params.InChunkID = InChunkID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F0DBC0
	 * 		Name   -> Function DSDestruction.DSDestructibleComponent.K2_EnactRule
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        RuleName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDSDestructionEnactRuleParams               Params                                                     (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDSDestructibleComponent::K2_EnactRule(const class FName& RuleName, const struct FDSDestructionEnactRuleParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSDestruction.DSDestructibleComponent.K2_EnactRule");
		
		UDSDestructibleComponent_K2_EnactRule_Params params {};
		params.RuleName = RuleName;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F0DB40
	 * 		Name   -> Function DSDestruction.DSDestructibleComponent.K2_BreakSubChunk
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InChunkID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSDestructibleComponent::K2_BreakSubChunk(const class FName& InChunkID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSDestruction.DSDestructibleComponent.K2_BreakSubChunk");
		
		UDSDestructibleComponent_K2_BreakSubChunk_Params params {};
		params.InChunkID = InChunkID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F0DB00
	 * 		Name   -> Function DSDestruction.DSDestructibleComponent.IsChunkValid
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDSDestructibleComponent::IsChunkValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSDestruction.DSDestructibleComponent.IsChunkValid");
		
		UDSDestructibleComponent_IsChunkValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F0DAE0
	 * 		Name   -> Function DSDestruction.DSDestructibleComponent.GetDataAsset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UDSDestructionAsset* UDSDestructibleComponent::GetDataAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSDestruction.DSDestructibleComponent.GetDataAsset");
		
		UDSDestructibleComponent_GetDataAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F0DAC0
	 * 		Name   -> Function DSDestruction.DSDestructibleComponent.GetChunkName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UDSDestructibleComponent::GetChunkName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSDestruction.DSDestructibleComponent.GetChunkName");
		
		UDSDestructibleComponent_GetChunkName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F0D900
	 * 		Name   -> Function DSDestruction.DSDestructibleComponent.ComponentHit
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UDSDestructibleComponent::ComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSDestruction.DSDestructibleComponent.ComponentHit");
		
		UDSDestructibleComponent_ComponentHit_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F0D7D0
	 * 		Name   -> Function DSDestruction.DSDestructibleComponent.ApplyBreakingImpulse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FDSDestructionBreakParams                   Params                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        HitChunkName                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSDestructibleComponent::ApplyBreakingImpulse(const struct FDSDestructionBreakParams& Params, const class FName& HitChunkName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSDestruction.DSDestructibleComponent.ApplyBreakingImpulse");
		
		UDSDestructibleComponent_ApplyBreakingImpulse_Params params {};
		params.Params = Params;
		params.HitChunkName = HitChunkName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F0D750
	 * 		Name   -> Function DSDestruction.DSDestructibleComponent.AddEnableReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSDestructibleComponent::AddEnableReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSDestruction.DSDestructibleComponent.AddEnableReason");
		
		UDSDestructibleComponent_AddEnableReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F0D6D0
	 * 		Name   -> Function DSDestruction.DSDestructibleComponent.AddDisableReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSDestructibleComponent::AddDisableReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSDestruction.DSDestructibleComponent.AddDisableReason");
		
		UDSDestructibleComponent_AddDisableReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSDestructibleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSDestructibleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSDestruction.DSDestructibleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSDestructionAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSDestructionAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSDestruction.DSDestructionAsset");
		return ptr;
	}

}


