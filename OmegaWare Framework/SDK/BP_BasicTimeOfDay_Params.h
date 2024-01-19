#pragma once

/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupDirectionalLight
	 */
	struct ABP_BasicTimeOfDay_C_SetupDirectionalLight_Params
	{	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupSkydome
	 */
	struct ABP_BasicTimeOfDay_C_SetupSkydome_Params
	{	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupSkylightComponent
	 */
	struct ABP_BasicTimeOfDay_C_SetupSkylightComponent_Params
	{	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupPostProcessComponent
	 */
	struct ABP_BasicTimeOfDay_C_SetupPostProcessComponent_Params
	{	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupRootTransform
	 */
	struct ABP_BasicTimeOfDay_C_SetupRootTransform_Params
	{	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.ApplyNewLightingSettings
	 */
	struct ABP_BasicTimeOfDay_C_ApplyNewLightingSettings_Params
	{	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.GetNewestPresetOverride
	 */
	struct ABP_BasicTimeOfDay_C_GetNewestPresetOverride_Params
	{
	public:
		ESkyPresets                                                PresetOverride;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_83LF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.RemoveLightingOverride
	 */
	struct ABP_BasicTimeOfDay_C_RemoveLightingOverride_Params
	{
	public:
		float                                                      PresetToRemove;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.AddLightingOverride
	 */
	struct ABP_BasicTimeOfDay_C_AddLightingOverride_Params
	{
	public:
		float                                                      Timestamp;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESkyPresets                                                PresetToAdd;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.ExtractDataFromPresetStruct
	 */
	struct ABP_BasicTimeOfDay_C_ExtractDataFromPresetStruct_Params
	{
	public:
		struct FSSkyPresets                                        SSkyPresets;                                             // 0x0000(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.DestroyComponentIfValid
	 */
	struct ABP_BasicTimeOfDay_C_DestroyComponentIfValid_Params
	{
	public:
		class UActorComponent*                                     ActorComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupFogComponent
	 */
	struct ABP_BasicTimeOfDay_C_SetupFogComponent_Params
	{	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetSkyMaterialProperties
	 */
	struct ABP_BasicTimeOfDay_C_SetSkyMaterialProperties_Params
	{
	public:
		class UMaterialInstanceDynamic*                            SkyMaterial;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.UpdateLightingToNewPreset
	 */
	struct ABP_BasicTimeOfDay_C_UpdateLightingToNewPreset_Params
	{
	public:
		ESkyPresets                                                NewPreset;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.CleanupSpawnedComponents
	 */
	struct ABP_BasicTimeOfDay_C_CleanupSpawnedComponents_Params
	{	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetupLightingVariablesFromPreset
	 */
	struct ABP_BasicTimeOfDay_C_SetupLightingVariablesFromPreset_Params
	{
	public:
		ESkyPresets                                                LightingPreset;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SURQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.UserConstructionScript
	 */
	struct ABP_BasicTimeOfDay_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.OnLoaded_23B99E46402FC261CF3F3A90392E3B79
	 */
	struct ABP_BasicTimeOfDay_C_OnLoaded_23B99E46402FC261CF3F3A90392E3B79_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.OnLoaded_7C2E8D854ADE8B6D5E743F8F652A8EDF
	 */
	struct ABP_BasicTimeOfDay_C_OnLoaded_7C2E8D854ADE8B6D5E743F8F652A8EDF_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.LoadSkyTextures
	 */
	struct ABP_BasicTimeOfDay_C_LoadSkyTextures_Params
	{	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.SetLightingScenarioState
	 */
	struct ABP_BasicTimeOfDay_C_SetLightingScenarioState_Params
	{
	public:
		EScenarioLightTime                                         Time;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.ReceiveBeginPlay
	 */
	struct ABP_BasicTimeOfDay_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BasicTimeOfDay.BP_BasicTimeOfDay_C.ExecuteUbergraph_BP_BasicTimeOfDay
	 */
	struct ABP_BasicTimeOfDay_C_ExecuteUbergraph_BP_BasicTimeOfDay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6XJD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
