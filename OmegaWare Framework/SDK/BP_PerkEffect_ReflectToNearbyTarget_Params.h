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
	 * Function BP_PerkEffect_ReflectToNearbyTarget.BP_PerkEffect_ReflectToNearbyTarget_C.FindTarget
	 */
	struct UBP_PerkEffect_ReflectToNearbyTarget_C_FindTarget_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Output;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_ReflectToNearbyTarget.BP_PerkEffect_ReflectToNearbyTarget_C.Calculate Damage
	 */
	struct UBP_PerkEffect_ReflectToNearbyTarget_C_CalculateDamage_Params
	{
	public:
		class UImpactEventComponent*                               ImpactEventComponent;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TotalDamage;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_ReflectToNearbyTarget.BP_PerkEffect_ReflectToNearbyTarget_C.BuildPointImpactRequest
	 */
	struct UBP_PerkEffect_ReflectToNearbyTarget_C_BuildPointImpactRequest_Params
	{
	public:
		class AActor*                                              ActorToDamage;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageToApply;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T5T7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEventInstigator                                    Instigator;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class AActor*                                              OwnerActor;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPointImpactEventRequest                            Request;                                                 // 0x0028(0x0320)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_PerkEffect_ReflectToNearbyTarget.BP_PerkEffect_ReflectToNearbyTarget_C.OnStart
	 */
	struct UBP_PerkEffect_ReflectToNearbyTarget_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ReflectToNearbyTarget.BP_PerkEffect_ReflectToNearbyTarget_C.ExecuteUbergraph_BP_PerkEffect_ReflectToNearbyTarget
	 */
	struct UBP_PerkEffect_ReflectToNearbyTarget_C_ExecuteUbergraph_BP_PerkEffect_ReflectToNearbyTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
