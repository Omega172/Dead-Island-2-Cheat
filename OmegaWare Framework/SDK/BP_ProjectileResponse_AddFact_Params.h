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
	 * Function BP_ProjectileResponse_AddFact.BP_ProjectileResponse_AddFact_C.SetFactsAsReplicating
	 */
	struct UBP_ProjectileResponse_AddFact_C_SetFactsAsReplicating_Params
	{
	public:
		TArray<struct FKnowledgeBaseFactKey>                       Facts;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FKnowledgeBaseFactKey>                       ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ProjectileResponse_AddFact.BP_ProjectileResponse_AddFact_C.ReceiveOnTriggered
	 */
	struct UBP_ProjectileResponse_AddFact_C_ReceiveOnTriggered_Params
	{	};

	/**
	 * Function BP_ProjectileResponse_AddFact.BP_ProjectileResponse_AddFact_C.ReceiveInitialize
	 */
	struct UBP_ProjectileResponse_AddFact_C_ReceiveInitialize_Params
	{	};

	/**
	 * Function BP_ProjectileResponse_AddFact.BP_ProjectileResponse_AddFact_C.ExecuteUbergraph_BP_ProjectileResponse_AddFact
	 */
	struct UBP_ProjectileResponse_AddFact_C_ExecuteUbergraph_BP_ProjectileResponse_AddFact_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_114F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
