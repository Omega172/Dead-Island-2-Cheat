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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.GetCurrentScenarioState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABP_Base_Light_C::GetCurrentScenarioState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.GetCurrentScenarioState");
		
		ABP_Base_Light_C_GetCurrentScenarioState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.UpdateAudioAttachComponent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Light_C::UpdateAudioAttachComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.UpdateAudioAttachComponent");
		
		ABP_Base_Light_C_UpdateAudioAttachComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.UpdateRTPC
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Light_C::UpdateRTPC(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.UpdateRTPC");
		
		ABP_Base_Light_C_UpdateRTPC_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.StopAudio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Light_C::StopAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.StopAudio");
		
		ABP_Base_Light_C_StopAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.StartAudio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Light_C::StartAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.StartAudio");
		
		ABP_Base_Light_C_StartAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.SetAllStaticProperties
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Light_C::SetAllStaticProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.SetAllStaticProperties");
		
		ABP_Base_Light_C_SetAllStaticProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.DeactivateLight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Light_C::DeactivateLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.DeactivateLight");
		
		ABP_Base_Light_C_DeactivateLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.UpdateLightFlicker
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Intensity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Light_C::UpdateLightFlicker(float Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.UpdateLightFlicker");
		
		ABP_Base_Light_C_UpdateLightFlicker_Params params {};
		params.Intensity = Intensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.StartFlickerDelay
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Light_C::StartFlickerDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.StartFlickerDelay");
		
		ABP_Base_Light_C_StartFlickerDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.UpdateMaterialState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    MaterialInstanceDynamic                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Light_C::UpdateMaterialState(class UMaterialInstanceDynamic* MaterialInstanceDynamic, bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.UpdateMaterialState");
		
		ABP_Base_Light_C_UpdateMaterialState_Params params {};
		params.MaterialInstanceDynamic = MaterialInstanceDynamic;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.UpdateParticleState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Light_C::UpdateParticleState(class UParticleSystemComponent* Component, bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.UpdateParticleState");
		
		ABP_Base_Light_C_UpdateParticleState_Params params {};
		params.Component = Component;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.UpdateMeshState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        MeshComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Light_C::UpdateMeshState(class UStaticMeshComponent* MeshComponent, bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.UpdateMeshState");
		
		ABP_Base_Light_C_UpdateMeshState_Params params {};
		params.MeshComponent = MeshComponent;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.UpdateLightState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULocalLightComponent*                        Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_Light_C::UpdateLightState(class ULocalLightComponent* Component, bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.UpdateLightState");
		
		ABP_Base_Light_C_UpdateLightState_Params params {};
		params.Component = Component;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.UpdateStateForScenario
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Light_C::UpdateStateForScenario()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.UpdateStateForScenario");
		
		ABP_Base_Light_C_UpdateStateForScenario_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.SetMaterialConstants
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    MaterialInstanceDynamic                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Light_C::SetMaterialConstants(class UMaterialInstanceDynamic* MaterialInstanceDynamic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.SetMaterialConstants");
		
		ABP_Base_Light_C_SetMaterialConstants_Params params {};
		params.MaterialInstanceDynamic = MaterialInstanceDynamic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.SetMeshConstants
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Light_C::SetMeshConstants(class UStaticMeshComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.SetMeshConstants");
		
		ABP_Base_Light_C_SetMeshConstants_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.SetLightConstants
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULocalLightComponent*                        Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Intensity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Light_C::SetLightConstants(class ULocalLightComponent* Component, float Intensity, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.SetLightConstants");
		
		ABP_Base_Light_C_SetLightConstants_Params params {};
		params.Component = Component;
		params.Intensity = Intensity;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.Calculate Emissive Intensity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              EmissiveIntensity                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Light_C::CalculateEmissiveIntensity(float* EmissiveIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.Calculate Emissive Intensity");
		
		ABP_Base_Light_C_CalculateEmissiveIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EmissiveIntensity != nullptr)
			*EmissiveIntensity = params.EmissiveIntensity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Light_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.UserConstructionScript");
		
		ABP_Base_Light_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.Flicker Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Base_Light_C::FlickerTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.Flicker Timeline__FinishedFunc");
		
		ABP_Base_Light_C_FlickerTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.Flicker Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Base_Light_C::FlickerTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.Flicker Timeline__UpdateFunc");
		
		ABP_Base_Light_C_FlickerTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.StartFlicker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Light_C::StartFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.StartFlicker");
		
		ABP_Base_Light_C_StartFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Base_Light_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.ReceiveBeginPlay");
		
		ABP_Base_Light_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.StopFlicker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Light_C::StopFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.StopFlicker");
		
		ABP_Base_Light_C_StopFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.UpdateFlickerTimelineTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Light_C::UpdateFlickerTimelineTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.UpdateFlickerTimelineTime");
		
		ABP_Base_Light_C_UpdateFlickerTimelineTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.BndEvt__SpatialTick_K2Node_ComponentBoundEvent_2_OnSpatialCellActivatedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class USpatialTickComponent*                       Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Light_C::BndEvt__SpatialTick_K2Node_ComponentBoundEvent_2_OnSpatialCellActivatedSignature__DelegateSignature(class USpatialTickComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.BndEvt__SpatialTick_K2Node_ComponentBoundEvent_2_OnSpatialCellActivatedSignature__DelegateSignature");
		
		ABP_Base_Light_C_BndEvt__SpatialTick_K2Node_ComponentBoundEvent_2_OnSpatialCellActivatedSignature__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.BndEvt__SpatialTick_K2Node_ComponentBoundEvent_3_OnSpatialCellDeativatedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class USpatialTickComponent*                       Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Light_C::BndEvt__SpatialTick_K2Node_ComponentBoundEvent_3_OnSpatialCellDeativatedSignature__DelegateSignature(class USpatialTickComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.BndEvt__SpatialTick_K2Node_ComponentBoundEvent_3_OnSpatialCellDeativatedSignature__DelegateSignature");
		
		ABP_Base_Light_C_BndEvt__SpatialTick_K2Node_ComponentBoundEvent_3_OnSpatialCellDeativatedSignature__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_Light.BP_Base_Light_C.ExecuteUbergraph_BP_Base_Light
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Light_C::ExecuteUbergraph_BP_Base_Light(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Light.BP_Base_Light_C.ExecuteUbergraph_BP_Base_Light");
		
		ABP_Base_Light_C_ExecuteUbergraph_BP_Base_Light_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_Light_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_Light_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_Light.BP_Base_Light_C");
		return ptr;
	}

}


