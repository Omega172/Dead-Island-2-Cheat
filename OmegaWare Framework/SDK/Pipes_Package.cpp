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
	 * 		Name   -> Function Pipes.BasePipe.SetPipeAllowedToFlow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABasePipe::SetPipeAllowedToFlow(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pipes.BasePipe.SetPipeAllowedToFlow");
		
		ABasePipe_SetPipeAllowedToFlow_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pipes.BasePipe.SetOutflowActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutflowIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABasePipe::SetOutflowActive(int32_t OutflowIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pipes.BasePipe.SetOutflowActive");
		
		ABasePipe_SetOutflowActive_Params params {};
		params.OutflowIndex = OutflowIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pipes.BasePipe.OnPipeFlowChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFlowingPercentage                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABasePipe::OnPipeFlowChanged(float NewFlowingPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pipes.BasePipe.OnPipeFlowChanged");
		
		ABasePipe_OnPipeFlowChanged_Params params {};
		params.NewFlowingPercentage = NewFlowingPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pipes.BasePipe.OnPipeConnected
	 * 		Flags  -> ()
	 */
	void ABasePipe::OnPipeConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pipes.BasePipe.OnPipeConnected");
		
		ABasePipe_OnPipeConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pipes.BasePipe.IsFlowing
	 * 		Flags  -> ()
	 */
	bool ABasePipe::IsFlowing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pipes.BasePipe.IsFlowing");
		
		ABasePipe_IsFlowing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pipes.BasePipe.IsFillingUp
	 * 		Flags  -> ()
	 */
	bool ABasePipe::IsFillingUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pipes.BasePipe.IsFillingUp");
		
		ABasePipe_IsFillingUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pipes.BasePipe.GetPipeOrigin
	 * 		Flags  -> ()
	 */
	class APipeOrigin* ABasePipe::GetPipeOrigin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pipes.BasePipe.GetPipeOrigin");
		
		ABasePipe_GetPipeOrigin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pipes.BasePipe.GetLeakIndex
	 * 		Flags  -> ()
	 */
	int32_t ABasePipe::GetLeakIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pipes.BasePipe.GetLeakIndex");
		
		ABasePipe_GetLeakIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pipes.BasePipe.GetDataAsset
	 * 		Flags  -> ()
	 */
	class UPipeOriginDataAsset* ABasePipe::GetDataAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pipes.BasePipe.GetDataAsset");
		
		ABasePipe_GetDataAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABasePipe.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABasePipe::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pipes.BasePipe");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPipeLinkComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPipeLinkComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pipes.PipeLinkComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APipeLinker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APipeLinker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pipes.PipeLinker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pipes.PipeOrigin.OnRep_IsOriginAllowedToFlow
	 * 		Flags  -> ()
	 */
	void APipeOrigin::OnRep_IsOriginAllowedToFlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pipes.PipeOrigin.OnRep_IsOriginAllowedToFlow");
		
		APipeOrigin_OnRep_IsOriginAllowedToFlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APipeOrigin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APipeOrigin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pipes.PipeOrigin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPipeOriginDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPipeOriginDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pipes.PipeOriginDataAsset");
		return ptr;
	}

}


