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
	 * Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.Unpossessed
	 */
	struct UBPC_StimEmitter_Player_C_Unpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.Possessed
	 */
	struct UBPC_StimEmitter_Player_C_Possessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.GetPlayerID
	 */
	struct UBPC_StimEmitter_Player_C_GetPlayerID_Params
	{
	public:
		int32_t                                                    PlayerID;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.UpdateIgnorePlayer
	 */
	struct UBPC_StimEmitter_Player_C_UpdateIgnorePlayer_Params
	{
	public:
		bool                                                       NewIgnorePlayer;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M9JQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PlayerID;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.DoJump
	 */
	struct UBPC_StimEmitter_Player_C_DoJump_Params
	{	};

	/**
	 * Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.SetEmitterActivationByName
	 */
	struct UBPC_StimEmitter_Player_C_SetEmitterActivationByName_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7ZI7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStimChooser                                        StimName;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.DoLowerBody
	 */
	struct UBPC_StimEmitter_Player_C_DoLowerBody_Params
	{
	public:
		class FName                                                Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.EndAction
	 */
	struct UBPC_StimEmitter_Player_C_EndAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ActionType;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterActionEndedReason                                Reason;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.OnIgnorePlayerChanged
	 */
	struct UBPC_StimEmitter_Player_C_OnIgnorePlayerChanged_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NEKQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PlayerID;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.BeginAction
	 */
	struct UBPC_StimEmitter_Player_C_BeginAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ActionType;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.ReceiveBeginPlay
	 */
	struct UBPC_StimEmitter_Player_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.ExecuteUbergraph_BPC_StimEmitter_Player
	 */
	struct UBPC_StimEmitter_Player_C_ExecuteUbergraph_BPC_StimEmitter_Player_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
