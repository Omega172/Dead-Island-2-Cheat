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
	 * Function BP_Base_Light.BP_Base_Light_C.GetCurrentScenarioState
	 */
	struct ABP_Base_Light_C_GetCurrentScenarioState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.UpdateAudioAttachComponent
	 */
	struct ABP_Base_Light_C_UpdateAudioAttachComponent_Params
	{	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.UpdateRTPC
	 */
	struct ABP_Base_Light_C_UpdateRTPC_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.StopAudio
	 */
	struct ABP_Base_Light_C_StopAudio_Params
	{	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.StartAudio
	 */
	struct ABP_Base_Light_C_StartAudio_Params
	{	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.SetAllStaticProperties
	 */
	struct ABP_Base_Light_C_SetAllStaticProperties_Params
	{	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.DeactivateLight
	 */
	struct ABP_Base_Light_C_DeactivateLight_Params
	{	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.UpdateLightFlicker
	 */
	struct ABP_Base_Light_C_UpdateLightFlicker_Params
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.StartFlickerDelay
	 */
	struct ABP_Base_Light_C_StartFlickerDelay_Params
	{	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.UpdateMaterialState
	 */
	struct ABP_Base_Light_C_UpdateMaterialState_Params
	{
	public:
		class UMaterialInstanceDynamic*                            MaterialInstanceDynamic;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       State;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1C9N[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.UpdateParticleState
	 */
	struct ABP_Base_Light_C_UpdateParticleState_Params
	{
	public:
		class UParticleSystemComponent*                            Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       State;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.UpdateMeshState
	 */
	struct ABP_Base_Light_C_UpdateMeshState_Params
	{
	public:
		class UStaticMeshComponent*                                MeshComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       State;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.UpdateLightState
	 */
	struct ABP_Base_Light_C_UpdateLightState_Params
	{
	public:
		class ULocalLightComponent*                                Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       State;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.UpdateStateForScenario
	 */
	struct ABP_Base_Light_C_UpdateStateForScenario_Params
	{	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.SetMaterialConstants
	 */
	struct ABP_Base_Light_C_SetMaterialConstants_Params
	{
	public:
		class UMaterialInstanceDynamic*                            MaterialInstanceDynamic;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.SetMeshConstants
	 */
	struct ABP_Base_Light_C_SetMeshConstants_Params
	{
	public:
		class UStaticMeshComponent*                                Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.SetLightConstants
	 */
	struct ABP_Base_Light_C_SetLightConstants_Params
	{
	public:
		class ULocalLightComponent*                                Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Intensity;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.Calculate Emissive Intensity
	 */
	struct ABP_Base_Light_C_CalculateEmissiveIntensity_Params
	{
	public:
		float                                                      EmissiveIntensity;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.UserConstructionScript
	 */
	struct ABP_Base_Light_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.Flicker Timeline__FinishedFunc
	 */
	struct ABP_Base_Light_C_FlickerTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.Flicker Timeline__UpdateFunc
	 */
	struct ABP_Base_Light_C_FlickerTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.StartFlicker
	 */
	struct ABP_Base_Light_C_StartFlicker_Params
	{	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.ReceiveBeginPlay
	 */
	struct ABP_Base_Light_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.StopFlicker
	 */
	struct ABP_Base_Light_C_StopFlicker_Params
	{	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.UpdateFlickerTimelineTime
	 */
	struct ABP_Base_Light_C_UpdateFlickerTimelineTime_Params
	{	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.BndEvt__SpatialTick_K2Node_ComponentBoundEvent_2_OnSpatialCellActivatedSignature__DelegateSignature
	 */
	struct ABP_Base_Light_C_BndEvt__SpatialTick_K2Node_ComponentBoundEvent_2_OnSpatialCellActivatedSignature__DelegateSignature_Params
	{
	public:
		class USpatialTickComponent*                               Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.BndEvt__SpatialTick_K2Node_ComponentBoundEvent_3_OnSpatialCellDeativatedSignature__DelegateSignature
	 */
	struct ABP_Base_Light_C_BndEvt__SpatialTick_K2Node_ComponentBoundEvent_3_OnSpatialCellDeativatedSignature__DelegateSignature_Params
	{
	public:
		class USpatialTickComponent*                               Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Light.BP_Base_Light_C.ExecuteUbergraph_BP_Base_Light
	 */
	struct ABP_Base_Light_C_ExecuteUbergraph_BP_Base_Light_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
