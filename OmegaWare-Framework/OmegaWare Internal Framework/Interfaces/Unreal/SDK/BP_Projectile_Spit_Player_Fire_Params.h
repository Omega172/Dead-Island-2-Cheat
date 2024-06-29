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
	 * Function BP_Projectile_Spit_Player_Fire.BP_Projectile_Spit_Player_Fire_C.EnableHoming
	 */
	struct ABP_Projectile_Spit_Player_Fire_C_EnableHoming_Params
	{	};

	/**
	 * Function BP_Projectile_Spit_Player_Fire.BP_Projectile_Spit_Player_Fire_C.Initialise
	 */
	struct ABP_Projectile_Spit_Player_Fire_C_Initialise_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JANJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Projectile_Spit_Player_Fire.BP_Projectile_Spit_Player_Fire_C.ReceiveBeginPlay
	 */
	struct ABP_Projectile_Spit_Player_Fire_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Projectile_Spit_Player_Fire.BP_Projectile_Spit_Player_Fire_C.ReceiveEndPlay
	 */
	struct ABP_Projectile_Spit_Player_Fire_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Spit_Player_Fire.BP_Projectile_Spit_Player_Fire_C.ExecuteUbergraph_BP_Projectile_Spit_Player_Fire
	 */
	struct ABP_Projectile_Spit_Player_Fire_C_ExecuteUbergraph_BP_Projectile_Spit_Player_Fire_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
