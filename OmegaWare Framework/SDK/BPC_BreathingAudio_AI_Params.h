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
	 * Function BPC_BreathingAudio_AI.BPC_BreathingAudio_AI_C.ReceiveBeginPlay
	 */
	struct UBPC_BreathingAudio_AI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_BreathingAudio_AI.BPC_BreathingAudio_AI_C.Combat State Changed
	 */
	struct UBPC_BreathingAudio_AI_C_CombatStateChanged_Params
	{
	public:
		ECosmeticCombatState                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BreathingAudio_AI.BPC_BreathingAudio_AI_C.ExecuteUbergraph_BPC_BreathingAudio_AI
	 */
	struct UBPC_BreathingAudio_AI_C_ExecuteUbergraph_BPC_BreathingAudio_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SPZZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
