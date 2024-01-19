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
	 * Function BP_ClippedSkinnedGlassShards.BP_ClippedSkinnedGlassShards_C.AddDespawnRequest
	 */
	struct ABP_ClippedSkinnedGlassShards_C_AddDespawnRequest_Params
	{	};

	/**
	 * Function BP_ClippedSkinnedGlassShards.BP_ClippedSkinnedGlassShards_C.AddImpulseAtLocation
	 */
	struct ABP_ClippedSkinnedGlassShards_C_AddImpulseAtLocation_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InImpulse;                                               // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InImpulseFalloffDistance;                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InImpulseMin;                                            // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InImpulseMax;                                            // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ClippedSkinnedGlassShards.BP_ClippedSkinnedGlassShards_C.UserConstructionScript
	 */
	struct ABP_ClippedSkinnedGlassShards_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
