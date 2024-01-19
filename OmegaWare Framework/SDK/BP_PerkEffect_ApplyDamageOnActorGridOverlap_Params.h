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
	 * Function BP_PerkEffect_ApplyDamageOnActorGridOverlap.BP_PerkEffect_ApplyDamageOnActorGridOverlap_C.OnActorGridCollisionOverlap
	 */
	struct UBP_PerkEffect_ApplyDamageOnActorGridOverlap_C_OnActorGridCollisionOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_ApplyDamageOnActorGridOverlap.BP_PerkEffect_ApplyDamageOnActorGridOverlap_C.OnStart
	 */
	struct UBP_PerkEffect_ApplyDamageOnActorGridOverlap_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ApplyDamageOnActorGridOverlap.BP_PerkEffect_ApplyDamageOnActorGridOverlap_C.OnEnd
	 */
	struct UBP_PerkEffect_ApplyDamageOnActorGridOverlap_C_OnEnd_Params
	{
	public:
		struct FPerkEffectEndParams                                Params;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ApplyDamageOnActorGridOverlap.BP_PerkEffect_ApplyDamageOnActorGridOverlap_C.ExecuteUbergraph_BP_PerkEffect_ApplyDamageOnActorGridOverlap
	 */
	struct UBP_PerkEffect_ApplyDamageOnActorGridOverlap_C_ExecuteUbergraph_BP_PerkEffect_ApplyDamageOnActorGridOverlap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
