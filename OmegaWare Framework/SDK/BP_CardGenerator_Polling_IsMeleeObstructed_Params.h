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
	 * Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.GetTraceRadius
	 */
	struct UBP_CardGenerator_Polling_IsMeleeObstructed_C_GetTraceRadius_Params
	{
	public:
		ECharacterLocationType                                     LocationType;                                            // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FUAS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.GetWorldLocation
	 */
	struct UBP_CardGenerator_Polling_IsMeleeObstructed_C_GetWorldLocation_Params
	{
	public:
		ECharacterLocationType                                     LocationType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BNGN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.GetBlueprintDescription
	 */
	struct UBP_CardGenerator_Polling_IsMeleeObstructed_C_GetBlueprintDescription_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.ShouldReturnCard_BP
	 */
	struct UBP_CardGenerator_Polling_IsMeleeObstructed_C_ShouldReturnCard_BP_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.OnInitialise
	 */
	struct UBP_CardGenerator_Polling_IsMeleeObstructed_C_OnInitialise_Params
	{	};

	/**
	 * Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.OnCombatTargetChanged
	 */
	struct UBP_CardGenerator_Polling_IsMeleeObstructed_C_OnCombatTargetChanged_Params
	{
	public:
		class UCombatTargetComponent*                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.IsCloseEnoughToTarget
	 */
	struct UBP_CardGenerator_Polling_IsMeleeObstructed_C_IsCloseEnoughToTarget_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.OnUninitialise
	 */
	struct UBP_CardGenerator_Polling_IsMeleeObstructed_C_OnUninitialise_Params
	{	};

	/**
	 * Function BP_CardGenerator_Polling_IsMeleeObstructed.BP_CardGenerator_Polling_IsMeleeObstructed_C.ExecuteUbergraph_BP_CardGenerator_Polling_IsMeleeObstructed
	 */
	struct UBP_CardGenerator_Polling_IsMeleeObstructed_C_ExecuteUbergraph_BP_CardGenerator_Polling_IsMeleeObstructed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C1MC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
