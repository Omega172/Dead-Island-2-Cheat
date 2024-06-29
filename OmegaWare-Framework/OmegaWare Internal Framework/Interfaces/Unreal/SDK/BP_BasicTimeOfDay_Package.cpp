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
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupDirectionalLight
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BasicTimeOfDay_C::SetupDirectionalLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupDirectionalLight");
		
		ABP_BasicTimeOfDay_C_SetupDirectionalLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupSkydome
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BasicTimeOfDay_C::SetupSkydome()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupSkydome");
		
		ABP_BasicTimeOfDay_C_SetupSkydome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupSkylightComponent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BasicTimeOfDay_C::SetupSkylightComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupSkylightComponent");
		
		ABP_BasicTimeOfDay_C_SetupSkylightComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupPostProcessComponent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BasicTimeOfDay_C::SetupPostProcessComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupPostProcessComponent");
		
		ABP_BasicTimeOfDay_C_SetupPostProcessComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupRootTransform
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BasicTimeOfDay_C::SetupRootTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupRootTransform");
		
		ABP_BasicTimeOfDay_C_SetupRootTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.ApplyNewLightingSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BasicTimeOfDay_C::ApplyNewLightingSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.ApplyNewLightingSettings");
		
		ABP_BasicTimeOfDay_C_ApplyNewLightingSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.GetNewestPresetOverride
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		ESkyPresets                                        PresetOverride                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BasicTimeOfDay_C::GetNewestPresetOverride(ESkyPresets* PresetOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.GetNewestPresetOverride");
		
		ABP_BasicTimeOfDay_C_GetNewestPresetOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PresetOverride != nullptr)
			*PresetOverride = params.PresetOverride;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.RemoveLightingOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              PresetToRemove                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BasicTimeOfDay_C::RemoveLightingOverride(float PresetToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.RemoveLightingOverride");
		
		ABP_BasicTimeOfDay_C_RemoveLightingOverride_Params params {};
		params.PresetToRemove = PresetToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.AddLightingOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Timestamp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESkyPresets                                        PresetToAdd                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BasicTimeOfDay_C::AddLightingOverride(float Timestamp, ESkyPresets PresetToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.AddLightingOverride");
		
		ABP_BasicTimeOfDay_C_AddLightingOverride_Params params {};
		params.Timestamp = Timestamp;
		params.PresetToAdd = PresetToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.ExtractDataFromPresetStruct
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSSkyPresets                                SSkyPresets                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void ABP_BasicTimeOfDay_C::ExtractDataFromPresetStruct(struct FSSkyPresets* SSkyPresets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.ExtractDataFromPresetStruct");
		
		ABP_BasicTimeOfDay_C_ExtractDataFromPresetStruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SSkyPresets != nullptr)
			*SSkyPresets = params.SSkyPresets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.DestroyComponentIfValid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UActorComponent*                             ActorComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BasicTimeOfDay_C::DestroyComponentIfValid(class UActorComponent* ActorComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.DestroyComponentIfValid");
		
		ABP_BasicTimeOfDay_C_DestroyComponentIfValid_Params params {};
		params.ActorComponent = ActorComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupFogComponent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BasicTimeOfDay_C::SetupFogComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupFogComponent");
		
		ABP_BasicTimeOfDay_C_SetupFogComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetSkyMaterialProperties
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    SkyMaterial                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BasicTimeOfDay_C::SetSkyMaterialProperties(class UMaterialInstanceDynamic* SkyMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetSkyMaterialProperties");
		
		ABP_BasicTimeOfDay_C_SetSkyMaterialProperties_Params params {};
		params.SkyMaterial = SkyMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.UpdateLightingToNewPreset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESkyPresets                                        NewPreset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BasicTimeOfDay_C::UpdateLightingToNewPreset(ESkyPresets NewPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.UpdateLightingToNewPreset");
		
		ABP_BasicTimeOfDay_C_UpdateLightingToNewPreset_Params params {};
		params.NewPreset = NewPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.CleanupSpawnedComponents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BasicTimeOfDay_C::CleanupSpawnedComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.CleanupSpawnedComponents");
		
		ABP_BasicTimeOfDay_C_CleanupSpawnedComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupLightingVariablesFromPreset
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESkyPresets                                        LightingPreset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BasicTimeOfDay_C::SetupLightingVariablesFromPreset(ESkyPresets LightingPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupLightingVariablesFromPreset");
		
		ABP_BasicTimeOfDay_C_SetupLightingVariablesFromPreset_Params params {};
		params.LightingPreset = LightingPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BasicTimeOfDay_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.UserConstructionScript");
		
		ABP_BasicTimeOfDay_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.OnLoaded_23B99E46402FC261CF3F3A90392E3B79
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BasicTimeOfDay_C::OnLoaded_23B99E46402FC261CF3F3A90392E3B79(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.OnLoaded_23B99E46402FC261CF3F3A90392E3B79");
		
		ABP_BasicTimeOfDay_C_OnLoaded_23B99E46402FC261CF3F3A90392E3B79_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.OnLoaded_7C2E8D854ADE8B6D5E743F8F652A8EDF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BasicTimeOfDay_C::OnLoaded_7C2E8D854ADE8B6D5E743F8F652A8EDF(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.OnLoaded_7C2E8D854ADE8B6D5E743F8F652A8EDF");
		
		ABP_BasicTimeOfDay_C_OnLoaded_7C2E8D854ADE8B6D5E743F8F652A8EDF_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.LoadSkyTextures
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BasicTimeOfDay_C::LoadSkyTextures()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.LoadSkyTextures");
		
		ABP_BasicTimeOfDay_C_LoadSkyTextures_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetLightingScenarioState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EScenarioLightTime                                 Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BasicTimeOfDay_C::SetLightingScenarioState(EScenarioLightTime Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetLightingScenarioState");
		
		ABP_BasicTimeOfDay_C_SetLightingScenarioState_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_BasicTimeOfDay_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.ReceiveBeginPlay");
		
		ABP_BasicTimeOfDay_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.ExecuteUbergraph_BP_BasicTimeOfDay
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BasicTimeOfDay_C::ExecuteUbergraph_BP_BasicTimeOfDay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.ExecuteUbergraph_BP_BasicTimeOfDay");
		
		ABP_BasicTimeOfDay_C_ExecuteUbergraph_BP_BasicTimeOfDay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BasicTimeOfDay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BasicTimeOfDay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BasicTimeOfDay.BP_BasicTimeOfDay_C");
		return ptr;
	}

}


