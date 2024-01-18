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
	 * Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.SpawnCEAttachedToSocket
	 */
	struct ABP_Base_MeleeWeapon_WithImpactResponse_C_SpawnCEAttachedToSocket_Params
	{
	public:
		class UCosmeticEffectsDefinition*                          Definition;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                InSocketName;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LocationOffset;                                          // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            RotationOffset;                                          // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FCosmeticEffectsID                                  ID;                                                      // 0x0028(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_909F[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.GetSocketTransform
	 */
	struct ABP_Base_MeleeWeapon_WithImpactResponse_C_GetSocketTransform_Params
	{
	public:
		class FName                                                InSocketName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GRDZ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InWorldTransform;                                        // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.ReceiveBeginPlay
	 */
	struct ABP_Base_MeleeWeapon_WithImpactResponse_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.DeferredBeginPlay
	 */
	struct ABP_Base_MeleeWeapon_WithImpactResponse_C_DeferredBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.PointImpactRegistered
	 */
	struct ABP_Base_MeleeWeapon_WithImpactResponse_C_PointImpactRegistered_Params
	{
	public:
		struct FPointImpactEventResult                             Result;                                                  // 0x0000(0x0300)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.ReceiveEndPlay
	 */
	struct ABP_Base_MeleeWeapon_WithImpactResponse_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.ImpactInstigated
	 */
	struct ABP_Base_MeleeWeapon_WithImpactResponse_C_ImpactInstigated_Params
	{
	public:
		struct FPointImpactEventResult                             RecordedImpact;                                          // 0x0000(0x0300)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C.ExecuteUbergraph_BP_Base_MeleeWeapon_WithImpactResponse
	 */
	struct ABP_Base_MeleeWeapon_WithImpactResponse_C_ExecuteUbergraph_BP_Base_MeleeWeapon_WithImpactResponse_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S57V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
