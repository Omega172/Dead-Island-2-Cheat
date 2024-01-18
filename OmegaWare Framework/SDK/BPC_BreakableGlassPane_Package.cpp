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
	 * 		Name   -> Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.OnRep_IsBroken_Delayed
	 * 		Flags  -> ()
	 */
	void UBPC_BreakableGlassPane_C::OnRep_IsBroken_Delayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.OnRep_IsBroken_Delayed");
		
		UBPC_BreakableGlassPane_C_OnRep_IsBroken_Delayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.OnRep_IsBroken
	 * 		Flags  -> ()
	 */
	void UBPC_BreakableGlassPane_C::OnRep_IsBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.OnRep_IsBroken");
		
		UBPC_BreakableGlassPane_C_OnRep_IsBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.RemoveUnbrokenMesh
	 * 		Flags  -> ()
	 */
	void UBPC_BreakableGlassPane_C::RemoveUnbrokenMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.RemoveUnbrokenMesh");
		
		UBPC_BreakableGlassPane_C_RemoveUnbrokenMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.CalculateWorldUVsAndNormals
	 * 		Flags  -> ()
	 */
	void UBPC_BreakableGlassPane_C::CalculateWorldUVsAndNormals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.CalculateWorldUVsAndNormals");
		
		UBPC_BreakableGlassPane_C_CalculateWorldUVsAndNormals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.DrawDebug
	 * 		Flags  -> ()
	 */
	void UBPC_BreakableGlassPane_C::DrawDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.DrawDebug");
		
		UBPC_BreakableGlassPane_C_DrawDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.Find Or Add Component
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UActorComponent*                             Component                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BreakableGlassPane_C::FindOrAddComponent(class AActor* Actor, class UClass* InClass, class UActorComponent** Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.Find Or Add Component");
		
		UBPC_BreakableGlassPane_C_FindOrAddComponent_Params params {};
		params.Actor = Actor;
		params.InClass = InClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Component != nullptr)
			*Component = params.Component;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.Get Pane Hit Loc From World Hit Loc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldHitLocInPlane                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BreakableGlassPane_C::GetPaneHitLocFromWorldHitLoc(const struct FVector& Impulse, const struct FVector& Location, struct FVector* WorldHitLocInPlane)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.Get Pane Hit Loc From World Hit Loc");
		
		UBPC_BreakableGlassPane_C_GetPaneHitLocFromWorldHitLoc_Params params {};
		params.Impulse = Impulse;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldHitLocInPlane != nullptr)
			*WorldHitLocInPlane = params.WorldHitLocInPlane;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.Setup Pane Data
	 * 		Flags  -> ()
	 */
	void UBPC_BreakableGlassPane_C::SetupPaneData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.Setup Pane Data");
		
		UBPC_BreakableGlassPane_C_SetupPaneData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.Generate Shards
	 * 		Flags  -> ()
	 */
	void UBPC_BreakableGlassPane_C::GenerateShards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.Generate Shards");
		
		UBPC_BreakableGlassPane_C_GenerateShards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.GetRandomPositionInPane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BreakableGlassPane_C::GetRandomPositionInPane(struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.GetRandomPositionInPane");
		
		UBPC_BreakableGlassPane_C_GetRandomPositionInPane_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.TriggerMeshShatter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ImpactLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ImpactVector                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BreakableGlassPane_C::TriggerMeshShatter(const struct FVector& ImpactLocation, const struct FVector& ImpactVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.TriggerMeshShatter");
		
		UBPC_BreakableGlassPane_C_TriggerMeshShatter_Params params {};
		params.ImpactLocation = ImpactLocation;
		params.ImpactVector = ImpactVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.OnAnyImpactReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BreakableGlassPane_C::OnAnyImpactReceived(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.OnAnyImpactReceived");
		
		UBPC_BreakableGlassPane_C_OnAnyImpactReceived_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_BreakableGlassPane_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.ReceiveBeginPlay");
		
		UBPC_BreakableGlassPane_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.ExecuteUbergraph_BPC_BreakableGlassPane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BreakableGlassPane_C::ExecuteUbergraph_BPC_BreakableGlassPane(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.ExecuteUbergraph_BPC_BreakableGlassPane");
		
		UBPC_BreakableGlassPane_C_ExecuteUbergraph_BPC_BreakableGlassPane_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.Impact Received__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BreakableGlassPane_C::ImpactReceived__DelegateSignature(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.Impact Received__DelegateSignature");
		
		UBPC_BreakableGlassPane_C_ImpactReceived__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.GlassBroken__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBPC_BreakableGlassPane_C::GlassBroken__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_BreakableGlassPane.BPC_BreakableGlassPane_C.GlassBroken__DelegateSignature");
		
		UBPC_BreakableGlassPane_C_GlassBroken__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_BreakableGlassPane_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_BreakableGlassPane_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_BreakableGlassPane.BPC_BreakableGlassPane_C");
		return ptr;
	}

}


