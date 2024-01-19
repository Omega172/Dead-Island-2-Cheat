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
	 * Function BP_Projectile_Tooth_Mutator.BP_Projectile_Tooth_Mutator_C.OnProjectileEmbedded
	 */
	struct ABP_Projectile_Tooth_Mutator_C_OnProjectileEmbedded_Params
	{
	public:
		class AModularProjectileActor*                             ModularProjectileActor;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AttachPosition;                                          // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NNSC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          ProjectileHitResult;                                     // 0x0018(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Projectile_Tooth_Mutator.BP_Projectile_Tooth_Mutator_C.UserConstructionScript
	 */
	struct ABP_Projectile_Tooth_Mutator_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Projectile_Tooth_Mutator.BP_Projectile_Tooth_Mutator_C.ReceiveCollide
	 */
	struct ABP_Projectile_Tooth_Mutator_C_ReceiveCollide_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComp;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WY0R[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Projectile_Tooth_Mutator.BP_Projectile_Tooth_Mutator_C.ReceiveBeginPlay
	 */
	struct ABP_Projectile_Tooth_Mutator_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Projectile_Tooth_Mutator.BP_Projectile_Tooth_Mutator_C.ReceiveEndPlay
	 */
	struct ABP_Projectile_Tooth_Mutator_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Tooth_Mutator.BP_Projectile_Tooth_Mutator_C.ExecuteUbergraph_BP_Projectile_Tooth_Mutator
	 */
	struct ABP_Projectile_Tooth_Mutator_C_ExecuteUbergraph_BP_Projectile_Tooth_Mutator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
