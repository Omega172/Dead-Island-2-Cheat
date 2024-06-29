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
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.UpdateAudio
	 */
	struct ABP_Base_StatefulLight_C_UpdateAudio_Params
	{	};

	/**
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.EmissiveLights
	 */
	struct ABP_Base_StatefulLight_C_EmissiveLights_Params
	{
	public:
		class ULightComponent*                                     LocalLightComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.SubsurfaceLights
	 */
	struct ABP_Base_StatefulLight_C_SubsurfaceLights_Params
	{
	public:
		class ULocalLightComponent*                                LocalLightComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.OptimiseLights
	 */
	struct ABP_Base_StatefulLight_C_OptimiseLights_Params
	{	};

	/**
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.RestoreDefaultIntensities
	 */
	struct ABP_Base_StatefulLight_C_RestoreDefaultIntensities_Params
	{	};

	/**
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.GetDefaultIntensities
	 */
	struct ABP_Base_StatefulLight_C_GetDefaultIntensities_Params
	{	};

	/**
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.OnRep_ActiveState
	 */
	struct ABP_Base_StatefulLight_C_OnRep_ActiveState_Params
	{	};

	/**
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.OnRep_NewState
	 */
	struct ABP_Base_StatefulLight_C_OnRep_NewState_Params
	{	};

	/**
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.EndState
	 */
	struct ABP_Base_StatefulLight_C_EndState_Params
	{
	public:
		int32_t                                                    EndState;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.BeginState
	 */
	struct ABP_Base_StatefulLight_C_BeginState_Params
	{
	public:
		int32_t                                                    BeginState;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.UpdateLightProperties
	 */
	struct ABP_Base_StatefulLight_C_UpdateLightProperties_Params
	{
	public:
		struct FSLightSettings                                     LightSettings;                                           // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.SetState
	 */
	struct ABP_Base_StatefulLight_C_SetState_Params
	{
	public:
		int32_t                                                    State;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4SW4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.UserConstructionScript
	 */
	struct ABP_Base_StatefulLight_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.SetLightingScenarioState
	 */
	struct ABP_Base_StatefulLight_C_SetLightingScenarioState_Params
	{
	public:
		EScenarioLightTime                                         Time;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.ReceiveBeginPlay
	 */
	struct ABP_Base_StatefulLight_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.ExpresionResult
	 */
	struct ABP_Base_StatefulLight_C_ExpresionResult_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatefulLight.BP_Base_StatefulLight_C.ExecuteUbergraph_BP_Base_StatefulLight
	 */
	struct ABP_Base_StatefulLight_C_ExecuteUbergraph_BP_Base_StatefulLight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
