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
	 * Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.IsActorWithinScreamCone
	 */
	struct UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C_IsActorWithinScreamCone_Params
	{
	public:
		class AActor*                                              AffectedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O65A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.SetNumberOfAIWithinScreamCone
	 */
	struct UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C_SetNumberOfAIWithinScreamCone_Params
	{
	public:
		bool                                                       Add;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1YDG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADIAICharacter*                                      AffectedDIAICharacter;                                   // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.CreateParticle
	 */
	struct UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C_CreateParticle_Params
	{
	public:
		class AActor*                                              AffectedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OwnerLocation;                                           // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.GetOwnersLocationAndBoneName
	 */
	struct UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C_GetOwnersLocationAndBoneName_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.MeetsDirectArcConditions
	 */
	struct UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C_MeetsDirectArcConditions_Params
	{
	public:
		class AActor*                                              AffectedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CC7D[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.OnActorEnter
	 */
	struct UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C_OnActorEnter_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.OnActorExit
	 */
	struct UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C_OnActorExit_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C.ExecuteUbergraph_BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric
	 */
	struct UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C_ExecuteUbergraph_BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_027X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
