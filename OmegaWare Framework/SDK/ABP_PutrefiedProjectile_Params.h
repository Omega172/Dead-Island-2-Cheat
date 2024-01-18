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
	 * Function ABP_PutrefiedProjectile.ABP_PutrefiedProjectile_C.AnimGraph
	 */
	struct UABP_PutrefiedProjectile_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_PutrefiedProjectile.ABP_PutrefiedProjectile_C.SetIntensityState
	 */
	struct UABP_PutrefiedProjectile_C_SetIntensityState_Params
	{
	public:
		EPutrefiedProjectileState                                  Input;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PutrefiedProjectile.ABP_PutrefiedProjectile_C.ExecuteUbergraph_ABP_PutrefiedProjectile
	 */
	struct UABP_PutrefiedProjectile_C_ExecuteUbergraph_ABP_PutrefiedProjectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
