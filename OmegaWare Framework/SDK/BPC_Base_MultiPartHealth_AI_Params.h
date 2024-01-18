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
	 * Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.Evaluate Body Part Expression Required to Live
	 */
	struct UBPC_Base_MultiPartHealth_AI_C_EvaluateBodyPartExpressionRequiredtoLive_Params
	{	};

	/**
	 * Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.OnBodyPartKilled
	 */
	struct UBPC_Base_MultiPartHealth_AI_C_OnBodyPartKilled_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BodyPartName;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBodyPartState*                                      PartState;                                               // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.AuthorityOnDismemberment
	 */
	struct UBPC_Base_MultiPartHealth_AI_C_AuthorityOnDismemberment_Params
	{
	public:
		class AActor*                                              LastDamager;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FEventInstigator                                    LastInstigator;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.ReceiveBeginPlay
	 */
	struct UBPC_Base_MultiPartHealth_AI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.OnActorJustDamagedDelegate_Event
	 */
	struct UBPC_Base_MultiPartHealth_AI_C_OnActorJustDamagedDelegate_Event_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4UH2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FEventInstigator                                    InstigatedBy;                                            // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDSDamageData                                       DSDamageData;                                            // 0x0030(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C.ExecuteUbergraph_BPC_Base_MultiPartHealth_AI
	 */
	struct UBPC_Base_MultiPartHealth_AI_C_ExecuteUbergraph_BPC_Base_MultiPartHealth_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BG1F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
