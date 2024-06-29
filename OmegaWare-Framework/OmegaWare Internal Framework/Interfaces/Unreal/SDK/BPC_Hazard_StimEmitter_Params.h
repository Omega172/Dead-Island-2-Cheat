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
	 * Function BPC_Hazard_StimEmitter.BPC_Hazard_StimEmitter_C.CreateAndBeginStim
	 */
	struct UBPC_Hazard_StimEmitter_C_CreateAndBeginStim_Params
	{
	public:
		struct FSCustomHazardStimParams                            StimParams;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		struct FStimID                                             StimID;                                                  // 0x0010(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JQUK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Hazard_StimEmitter.BPC_Hazard_StimEmitter_C.EndHazardStim
	 */
	struct UBPC_Hazard_StimEmitter_C_EndHazardStim_Params
	{
	public:
		struct FStimID                                             StimID;                                                  // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Hazard_StimEmitter.BPC_Hazard_StimEmitter_C.BeginHazardStim
	 */
	struct UBPC_Hazard_StimEmitter_C_BeginHazardStim_Params
	{
	public:
		struct FSCustomHazardStimParams                            StimParams;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		struct FStimID                                             StimID;                                                  // 0x0010(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XQTH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
