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
	 * Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.OnCharacterPossessed
	 */
	struct UBPC_AIMovement_AI_C_OnCharacterPossessed_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.RemoveAgainstWallFactDisableListener
	 */
	struct UBPC_AIMovement_AI_C_RemoveAgainstWallFactDisableListener_Params
	{	};

	/**
	 * Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.OnDisableAgainstWallFactExpressionChanged
	 */
	struct UBPC_AIMovement_AI_C_OnDisableAgainstWallFactExpressionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.AddAgainstWallFactDisableListener
	 */
	struct UBPC_AIMovement_AI_C_AddAgainstWallFactDisableListener_Params
	{	};

	/**
	 * Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.TryGetCachedMovementData
	 */
	struct UBPC_AIMovement_AI_C_TryGetCachedMovementData_Params
	{
	public:
		class FName                                                MovementDataName;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K896[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSCachedMovementData                                CachedMovementData;                                      // 0x0010(0x0030)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.ReceiveBeginPlay
	 */
	struct UBPC_AIMovement_AI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.ReceiveEndPlay
	 */
	struct UBPC_AIMovement_AI_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.ExecuteUbergraph_BPC_AIMovement_AI
	 */
	struct UBPC_AIMovement_AI_C_ExecuteUbergraph_BPC_AIMovement_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
