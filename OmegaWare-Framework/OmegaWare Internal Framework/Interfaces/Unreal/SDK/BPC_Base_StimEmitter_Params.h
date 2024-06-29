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
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.RemoveFeelAllyCloseStim
	 */
	struct UBPC_Base_StimEmitter_C_RemoveFeelAllyCloseStim_Params
	{	};

	/**
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.AddFeelAllyCloseStim
	 */
	struct UBPC_Base_StimEmitter_C_AddFeelAllyCloseStim_Params
	{
	public:
		class UStimTemplate*                                       StimTemplate;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.OnCombatStateChanged
	 */
	struct UBPC_Base_StimEmitter_C_OnCombatStateChanged_Params
	{
	public:
		ECombatState                                               NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.OnCharacterUnpossessed
	 */
	struct UBPC_Base_StimEmitter_C_OnCharacterUnpossessed_Params
	{	};

	/**
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.OnCharacterPossessed
	 */
	struct UBPC_Base_StimEmitter_C_OnCharacterPossessed_Params
	{
	public:
		class AController*                                         PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.UninitialiseFeelAllyCloseStim
	 */
	struct UBPC_Base_StimEmitter_C_UninitialiseFeelAllyCloseStim_Params
	{	};

	/**
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.IntialiseFeelAllyCloseStim
	 */
	struct UBPC_Base_StimEmitter_C_IntialiseFeelAllyCloseStim_Params
	{	};

	/**
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.SetAlive
	 */
	struct UBPC_Base_StimEmitter_C_SetAlive_Params
	{
	public:
		bool                                                       Alive;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.OnResurrect
	 */
	struct UBPC_Base_StimEmitter_C_OnResurrect_Params
	{	};

	/**
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.OnDeath
	 */
	struct UBPC_Base_StimEmitter_C_OnDeath_Params
	{	};

	/**
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.ReceiveBeginPlay
	 */
	struct UBPC_Base_StimEmitter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.ReceiveEndPlay
	 */
	struct UBPC_Base_StimEmitter_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.ExecuteUbergraph_BPC_Base_StimEmitter
	 */
	struct UBPC_Base_StimEmitter_C_ExecuteUbergraph_BPC_Base_StimEmitter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
