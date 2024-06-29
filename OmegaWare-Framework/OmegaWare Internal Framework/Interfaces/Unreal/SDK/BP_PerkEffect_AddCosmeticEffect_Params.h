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
	 * Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.BindOnActorKilled
	 */
	struct UBP_PerkEffect_AddCosmeticEffect_C_BindOnActorKilled_Params
	{	};

	/**
	 * Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.StopListeningToParamFacts
	 */
	struct UBP_PerkEffect_AddCosmeticEffect_C_StopListeningToParamFacts_Params
	{	};

	/**
	 * Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.StartListeningToParamFacts
	 */
	struct UBP_PerkEffect_AddCosmeticEffect_C_StartListeningToParamFacts_Params
	{	};

	/**
	 * Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.OnParamFactChanged
	 */
	struct UBP_PerkEffect_AddCosmeticEffect_C_OnParamFactChanged_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1P8C[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EKnowledgeBaseFactChangeType                               FactChangeType;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4B8L[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.AttachToActor
	 */
	struct UBP_PerkEffect_AddCosmeticEffect_C_AttachToActor_Params
	{	};

	/**
	 * Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.AttachToSkeletalMesh
	 */
	struct UBP_PerkEffect_AddCosmeticEffect_C_AttachToSkeletalMesh_Params
	{	};

	/**
	 * Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.LifeSpan
	 */
	struct UBP_PerkEffect_AddCosmeticEffect_C_LifeSpan_Params
	{	};

	/**
	 * Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.DestroySpawnedActor
	 */
	struct UBP_PerkEffect_AddCosmeticEffect_C_DestroySpawnedActor_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.AttachCosmeticToActor
	 */
	struct UBP_PerkEffect_AddCosmeticEffect_C_AttachCosmeticToActor_Params
	{	};

	/**
	 * Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.OnEnd
	 */
	struct UBP_PerkEffect_AddCosmeticEffect_C_OnEnd_Params
	{
	public:
		struct FPerkEffectEndParams                                Params;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.AttachCosmeticToSkeletalMesh
	 */
	struct UBP_PerkEffect_AddCosmeticEffect_C_AttachCosmeticToSkeletalMesh_Params
	{	};

	/**
	 * Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.OnStart
	 */
	struct UBP_PerkEffect_AddCosmeticEffect_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_AddCosmeticEffect.BP_PerkEffect_AddCosmeticEffect_C.ExecuteUbergraph_BP_PerkEffect_AddCosmeticEffect
	 */
	struct UBP_PerkEffect_AddCosmeticEffect_C_ExecuteUbergraph_BP_PerkEffect_AddCosmeticEffect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
