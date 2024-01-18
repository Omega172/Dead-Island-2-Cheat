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
	 * Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.TorsoTwistDebug
	 */
	struct UBP_PerkEffect_EnableTorsoTwists_AI_C_TorsoTwistDebug_Params
	{
	public:
		class ADICharacter*                                        TorsoTwistTargetCharacter;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CapsuleHalfHeight;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CentreLocationWS;                                        // 0x000C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TorsoTwistRequired;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6WFD[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.SetAimTargetOffsetForCharacters
	 */
	struct UBP_PerkEffect_EnableTorsoTwists_AI_C_SetAimTargetOffsetForCharacters_Params
	{
	public:
		float                                                      TargetCapsuleHalfHeight;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CentreLocationWS;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.IsHitTargetLocationWithRange
	 */
	struct UBP_PerkEffect_EnableTorsoTwists_AI_C_IsHitTargetLocationWithRange_Params
	{
	public:
		float                                                      CapsuleHalfHeight;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CentreLocationWS;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TR0U[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.GetCharacterTargetCapsuleData
	 */
	struct UBP_PerkEffect_EnableTorsoTwists_AI_C_GetCharacterTargetCapsuleData_Params
	{
	public:
		class ADSCharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TargetCapsuleHalfHeight;                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TargetCapsuleCentreLocation;                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.IsTorsoTwistRequired
	 */
	struct UBP_PerkEffect_EnableTorsoTwists_AI_C_IsTorsoTwistRequired_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3N3A[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.OnEnd
	 */
	struct UBP_PerkEffect_EnableTorsoTwists_AI_C_OnEnd_Params
	{
	public:
		struct FPerkEffectEndParams                                Params;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.OnStart
	 */
	struct UBP_PerkEffect_EnableTorsoTwists_AI_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_EnableTorsoTwists_AI.BP_PerkEffect_EnableTorsoTwists_AI_C.ExecuteUbergraph_BP_PerkEffect_EnableTorsoTwists_AI
	 */
	struct UBP_PerkEffect_EnableTorsoTwists_AI_C_ExecuteUbergraph_BP_PerkEffect_EnableTorsoTwists_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
