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
	 * 		Name   -> Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.AllowInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractiveComponent*                       InteractiveComponent                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_Carryable_DockingPoint_C::AllowInteraction(class APawn* User, class UInteractiveComponent* InteractiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.AllowInteraction");
		
		UBPC_Carryable_DockingPoint_C_AllowInteraction_Params params {};
		params.User = User;
		params.InteractiveComponent = InteractiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.GetInteractIconClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInteractiveComponent*                       InteractiveComponent                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UClass* UBPC_Carryable_DockingPoint_C::GetInteractIconClass(class UInteractiveComponent* InteractiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.GetInteractIconClass");
		
		UBPC_Carryable_DockingPoint_C_GetInteractIconClass_Params params {};
		params.InteractiveComponent = InteractiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.ShouldLockDockable
	 * 		Flags  -> ()
	 */
	bool UBPC_Carryable_DockingPoint_C::ShouldLockDockable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.ShouldLockDockable");
		
		UBPC_Carryable_DockingPoint_C_ShouldLockDockable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.GetMeshOffset
	 * 		Flags  -> ()
	 */
	struct FTransform UBPC_Carryable_DockingPoint_C::GetMeshOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.GetMeshOffset");
		
		UBPC_Carryable_DockingPoint_C_GetMeshOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.SetDockingPointActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Carryable_DockingPoint_C::SetDockingPointActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.SetDockingPointActive");
		
		UBPC_Carryable_DockingPoint_C_SetDockingPointActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_Carryable_DockingPoint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.ReceiveBeginPlay");
		
		UBPC_Carryable_DockingPoint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.BlueprintOnDocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Dockable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Carryable_DockingPoint_C::BlueprintOnDocked(class AActor* Dockable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.BlueprintOnDocked");
		
		UBPC_Carryable_DockingPoint_C_BlueprintOnDocked_Params params {};
		params.Dockable = Dockable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.ExecuteUbergraph_BPC_Carryable_DockingPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Carryable_DockingPoint_C::ExecuteUbergraph_BPC_Carryable_DockingPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.ExecuteUbergraph_BPC_Carryable_DockingPoint");
		
		UBPC_Carryable_DockingPoint_C_ExecuteUbergraph_BPC_Carryable_DockingPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.ActorDocked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DockedActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Carryable_DockingPoint_C::ActorDocked__DelegateSignature(class AActor* DockedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C.ActorDocked__DelegateSignature");
		
		UBPC_Carryable_DockingPoint_C_ActorDocked__DelegateSignature_Params params {};
		params.DockedActor = DockedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Carryable_DockingPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Carryable_DockingPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Carryable_DockingPoint.BPC_Carryable_DockingPoint_C");
		return ptr;
	}

}


