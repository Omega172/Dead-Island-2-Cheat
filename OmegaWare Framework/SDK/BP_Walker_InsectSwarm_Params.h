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
	 * Function BP_Walker_InsectSwarm.BP_Walker_InsectSwarm_C.SetSwarmLocationBasedIfCrawler
	 */
	struct ABP_Walker_InsectSwarm_C_SetSwarmLocationBasedIfCrawler_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2ZVZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Walker_InsectSwarm.BP_Walker_InsectSwarm_C.ReceiveBeginPlay
	 */
	struct ABP_Walker_InsectSwarm_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Walker_InsectSwarm.BP_Walker_InsectSwarm_C.ReceiveEndPlay
	 */
	struct ABP_Walker_InsectSwarm_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Walker_InsectSwarm.BP_Walker_InsectSwarm_C.ExecuteUbergraph_BP_Walker_InsectSwarm
	 */
	struct ABP_Walker_InsectSwarm_C_ExecuteUbergraph_BP_Walker_InsectSwarm_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
