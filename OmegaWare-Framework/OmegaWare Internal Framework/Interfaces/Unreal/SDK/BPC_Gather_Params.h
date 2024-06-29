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
	 * Function BPC_Gather.BPC_Gather_C.StartTimerForChecking
	 */
	struct UBPC_Gather_C_StartTimerForChecking_Params
	{	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.SetGatherLocation
	 */
	struct UBPC_Gather_C_SetGatherLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KKIT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.GetSphereRadius
	 */
	struct UBPC_Gather_C_GetSphereRadius_Params
	{	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.GetCurrentGatherLocation
	 */
	struct UBPC_Gather_C_GetCurrentGatherLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FindFloorLocation;                                       // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AV8Y[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.OnRep_ShowGatherParticle
	 */
	struct UBPC_Gather_C_OnRep_ShowGatherParticle_Params
	{	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.CheckAllPlayersInRadius
	 */
	struct UBPC_Gather_C_CheckAllPlayersInRadius_Params
	{	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.Playerjoined_Update
	 */
	struct UBPC_Gather_C_Playerjoined_Update_Params
	{
	public:
		class APlayerController*                                   NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.PlayerLeft_Update
	 */
	struct UBPC_Gather_C_PlayerLeft_Update_Params
	{
	public:
		class AController*                                         ExitingPlayer;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.ReceiveBeginPlay
	 */
	struct UBPC_Gather_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.BindToGameModePlayerEvents
	 */
	struct UBPC_Gather_C_BindToGameModePlayerEvents_Params
	{	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.ReceiveEndPlay
	 */
	struct UBPC_Gather_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.ActorEnteredSphere
	 */
	struct UBPC_Gather_C_ActorEnteredSphere_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.ActorLeftSphere
	 */
	struct UBPC_Gather_C_ActorLeftSphere_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.CheckForPlayers
	 */
	struct UBPC_Gather_C_CheckForPlayers_Params
	{	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.Activate Gather
	 */
	struct UBPC_Gather_C_ActivateGather_Params
	{	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.ExecuteUbergraph_BPC_Gather
	 */
	struct UBPC_Gather_C_ExecuteUbergraph_BPC_Gather_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1BOQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.GatherUncomplete__DelegateSignature
	 */
	struct UBPC_Gather_C_GatherUncomplete__DelegateSignature_Params
	{	};

	/**
	 * Function BPC_Gather.BPC_Gather_C.GatherComplete__DelegateSignature
	 */
	struct UBPC_Gather_C_GatherComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
