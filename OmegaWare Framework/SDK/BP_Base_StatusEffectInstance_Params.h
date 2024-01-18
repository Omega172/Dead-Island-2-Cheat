#pragma once

/**
 * Name: Dead_Island_2
 * Version: Cracked
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
	 * Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.LogRemoveRequest
	 */
	struct UBP_Base_StatusEffectInstance_C_LogRemoveRequest_Params
	{	};

	/**
	 * Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.LogDoubleRemoveError
	 */
	struct UBP_Base_StatusEffectInstance_C_LogDoubleRemoveError_Params
	{	};

	/**
	 * Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.RemoveInstanceFromComponent
	 */
	struct UBP_Base_StatusEffectInstance_C_RemoveInstanceFromComponent_Params
	{	};

	/**
	 * Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.SetupActionListeners
	 */
	struct UBP_Base_StatusEffectInstance_C_SetupActionListeners_Params
	{	};

	/**
	 * Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.ResolveInstanceFromAction
	 */
	struct UBP_Base_StatusEffectInstance_C_ResolveInstanceFromAction_Params
	{
	public:
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStatusEffectComponent*                              StatusEffectComponent;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.OnStatusEffectActionResolved
	 */
	struct UBP_Base_StatusEffectInstance_C_OnStatusEffectActionResolved_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnResolvedParams                    Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.OnStatusEffectActionEnd
	 */
	struct UBP_Base_StatusEffectInstance_C_OnStatusEffectActionEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.OnStatusEffectActionCancelled
	 */
	struct UBP_Base_StatusEffectInstance_C_OnStatusEffectActionCancelled_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnCancelledParams                   Params;                                                  // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.CreateDSLogger
	 */
	struct UBP_Base_StatusEffectInstance_C_CreateDSLogger_Params
	{	};

	/**
	 * Function BP_Base_StatusEffectInstance.BP_Base_StatusEffectInstance_C.ExecuteUbergraph_BP_Base_StatusEffectInstance
	 */
	struct UBP_Base_StatusEffectInstance_C_ExecuteUbergraph_BP_Base_StatusEffectInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
