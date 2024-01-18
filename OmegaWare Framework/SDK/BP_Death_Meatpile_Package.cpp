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
	 * 		Name   -> Function BP_Death_Meatpile.BP_Death_Meatpile_C.OnMeatpileUsed
	 * 		Flags  -> ()
	 */
	void ABP_Death_Meatpile_C::OnMeatpileUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Death_Meatpile.BP_Death_Meatpile_C.OnMeatpileUsed");
		
		ABP_Death_Meatpile_C_OnMeatpileUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Death_Meatpile.BP_Death_Meatpile_C.UpdateMeatpileIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MeatpilesToRemove                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Death_Meatpile_C::UpdateMeatpileIndex(int32_t MeatpilesToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Death_Meatpile.BP_Death_Meatpile_C.UpdateMeatpileIndex");
		
		ABP_Death_Meatpile_C_UpdateMeatpileIndex_Params params {};
		params.MeatpilesToRemove = MeatpilesToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Death_Meatpile.BP_Death_Meatpile_C.OnMeatpileCountChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EKnowledgeBaseFactChangeType                       FactChangeType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Death_Meatpile_C::OnMeatpileCountChanged(const struct FKnowledgeBaseFactKey& FactKey, class UKnowledgeBaseComponent* KnowledgeBaseComponent, EKnowledgeBaseFactChangeType FactChangeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Death_Meatpile.BP_Death_Meatpile_C.OnMeatpileCountChanged");
		
		ABP_Death_Meatpile_C_OnMeatpileCountChanged_Params params {};
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
	 * 		Name   -> Function BP_Death_Meatpile.BP_Death_Meatpile_C.RemoveMeatpileCountListener
	 * 		Flags  -> ()
	 */
	void ABP_Death_Meatpile_C::RemoveMeatpileCountListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Death_Meatpile.BP_Death_Meatpile_C.RemoveMeatpileCountListener");
		
		ABP_Death_Meatpile_C_RemoveMeatpileCountListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Death_Meatpile.BP_Death_Meatpile_C.AddMeatpileCountListener
	 * 		Flags  -> ()
	 */
	void ABP_Death_Meatpile_C::AddMeatpileCountListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Death_Meatpile.BP_Death_Meatpile_C.AddMeatpileCountListener");
		
		ABP_Death_Meatpile_C_AddMeatpileCountListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Death_Meatpile.BP_Death_Meatpile_C.DecrementMeatpileCount
	 * 		Flags  -> ()
	 */
	void ABP_Death_Meatpile_C::DecrementMeatpileCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Death_Meatpile.BP_Death_Meatpile_C.DecrementMeatpileCount");
		
		ABP_Death_Meatpile_C_DecrementMeatpileCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Death_Meatpile.BP_Death_Meatpile_C.IncrementMeatpileCount
	 * 		Flags  -> ()
	 */
	void ABP_Death_Meatpile_C::IncrementMeatpileCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Death_Meatpile.BP_Death_Meatpile_C.IncrementMeatpileCount");
		
		ABP_Death_Meatpile_C_IncrementMeatpileCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Death_Meatpile.BP_Death_Meatpile_C.SetDecalFadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StartDelay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Death_Meatpile_C::SetDecalFadeOut(float StartDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Death_Meatpile.BP_Death_Meatpile_C.SetDecalFadeOut");
		
		ABP_Death_Meatpile_C_SetDecalFadeOut_Params params {};
		params.StartDelay = StartDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Death_Meatpile.BP_Death_Meatpile_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Death_Meatpile_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Death_Meatpile.BP_Death_Meatpile_C.UserConstructionScript");
		
		ABP_Death_Meatpile_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Death_Meatpile.BP_Death_Meatpile_C.BindUnpossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADIPlayerCharacter*                          DIPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Death_Meatpile_C::BindUnpossess(class ADIPlayerCharacter* DIPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Death_Meatpile.BP_Death_Meatpile_C.BindUnpossess");
		
		ABP_Death_Meatpile_C_BindUnpossess_Params params {};
		params.DIPlayer = DIPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Death_Meatpile.BP_Death_Meatpile_C.SetMeshAsVisible
	 * 		Flags  -> ()
	 */
	void ABP_Death_Meatpile_C::SetMeshAsVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Death_Meatpile.BP_Death_Meatpile_C.SetMeshAsVisible");
		
		ABP_Death_Meatpile_C_SetMeshAsVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Death_Meatpile.BP_Death_Meatpile_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Death_Meatpile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Death_Meatpile.BP_Death_Meatpile_C.ReceiveBeginPlay");
		
		ABP_Death_Meatpile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Death_Meatpile.BP_Death_Meatpile_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Death_Meatpile_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Death_Meatpile.BP_Death_Meatpile_C.ReceiveEndPlay");
		
		ABP_Death_Meatpile_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Death_Meatpile.BP_Death_Meatpile_C.ExecuteUbergraph_BP_Death_Meatpile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Death_Meatpile_C::ExecuteUbergraph_BP_Death_Meatpile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Death_Meatpile.BP_Death_Meatpile_C.ExecuteUbergraph_BP_Death_Meatpile");
		
		ABP_Death_Meatpile_C_ExecuteUbergraph_BP_Death_Meatpile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Death_Meatpile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Death_Meatpile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Death_Meatpile.BP_Death_Meatpile_C");
		return ptr;
	}

}


