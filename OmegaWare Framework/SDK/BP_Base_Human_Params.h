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
	 * Function BP_Base_Human.BP_Base_Human_C.EnableWeaponPose
	 */
	struct ABP_Base_Human_C_EnableWeaponPose_Params
	{	};

	/**
	 * Function BP_Base_Human.BP_Base_Human_C.DisableWeaponPose
	 */
	struct ABP_Base_Human_C_DisableWeaponPose_Params
	{	};

	/**
	 * Function BP_Base_Human.BP_Base_Human_C.SetupFaceFX
	 */
	struct ABP_Base_Human_C_SetupFaceFX_Params
	{
	public:
		class UFaceFXActor*                                        FaceFXActor;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AttachPointName;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Human.BP_Base_Human_C.UserConstructionScript
	 */
	struct ABP_Base_Human_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Base_Human.BP_Base_Human_C.CombatStateChanged
	 */
	struct ABP_Base_Human_C_CombatStateChanged_Params
	{
	public:
		ECosmeticCombatState                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Human.BP_Base_Human_C.ReceiveBeginPlay
	 */
	struct ABP_Base_Human_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_Human.BP_Base_Human_C.InitializeFaceFX
	 */
	struct ABP_Base_Human_C_InitializeFaceFX_Params
	{
	public:
		struct FFaceFXParams                                       FaceFXParams;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Base_Human.BP_Base_Human_C.ReceiveEndPlay
	 */
	struct ABP_Base_Human_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_Human.BP_Base_Human_C.ExecuteUbergraph_BP_Base_Human
	 */
	struct ABP_Base_Human_C_ExecuteUbergraph_BP_Base_Human_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_50U3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
