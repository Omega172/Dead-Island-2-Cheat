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
	 * Function BP_Base_Weapon.BP_Base_Weapon_C.HandleExternalHits
	 */
	struct ABP_Base_Weapon_C_HandleExternalHits_Params
	{
	public:
		TArray<struct FHitResult>                                  Hits;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Base_Weapon.BP_Base_Weapon_C.AttackFinished
	 */
	struct ABP_Base_Weapon_C_AttackFinished_Params
	{	};

	/**
	 * Function BP_Base_Weapon.BP_Base_Weapon_C.SetOwningActor
	 */
	struct ABP_Base_Weapon_C_SetOwningActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Weapon.BP_Base_Weapon_C.Attack
	 */
	struct ABP_Base_Weapon_C_Attack_Params
	{
	public:
		bool                                                       bIsDualWield;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_Weapon.BP_Base_Weapon_C.UserConstructionScript
	 */
	struct ABP_Base_Weapon_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
