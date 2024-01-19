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
	 * Function BP_AnimNotify_SpawnExplosion_Shockwave_AI.BP_AnimNotify_SpawnExplosion_Shockwave_AI_C.GetTargetBounds
	 */
	struct UBP_AnimNotify_SpawnExplosion_Shockwave_AI_C_GetTargetBounds_Params
	{
	public:
		class ADSCharacter*                                        Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ZOrigin;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Extent;                                                  // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AnimNotify_SpawnExplosion_Shockwave_AI.BP_AnimNotify_SpawnExplosion_Shockwave_AI_C.GetExplosionBounds
	 */
	struct UBP_AnimNotify_SpawnExplosion_Shockwave_AI_C_GetExplosionBounds_Params
	{
	public:
		float                                                      ExplosionZ;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ZOrigin;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Extent;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AnimNotify_SpawnExplosion_Shockwave_AI.BP_AnimNotify_SpawnExplosion_Shockwave_AI_C.CanShockwaveHitCharacter
	 */
	struct UBP_AnimNotify_SpawnExplosion_Shockwave_AI_C_CanShockwaveHitCharacter_Params
	{
	public:
		class ADSCharacter*                                        Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ExplosionLocation;                                       // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SIEK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADSCharacter*                                        Owner;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MAYJ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AnimNotify_SpawnExplosion_Shockwave_AI.BP_AnimNotify_SpawnExplosion_Shockwave_AI_C.ListOfActorsToIgnore
	 */
	struct UBP_AnimNotify_SpawnExplosion_Shockwave_AI_C_ListOfActorsToIgnore_Params
	{
	public:
		class UExplosionActionArchetype*                           ExplosionActionArchetype;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADICharacter*                                        Owner;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ExplosionLocation;                                       // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JYOG[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0020(0x0010)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
