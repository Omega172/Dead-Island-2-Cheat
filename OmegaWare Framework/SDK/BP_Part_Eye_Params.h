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
	 * Function BP_Part_Eye.BP_Part_Eye_C.ReceiveBeginPlay
	 */
	struct ABP_Part_Eye_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Part_Eye.BP_Part_Eye_C.OnSpawn
	 */
	struct ABP_Part_Eye_C_OnSpawn_Params
	{
	public:
		class USkeletalMeshComponent*                              ParentSkeletalMeshComponent;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Part_Eye.BP_Part_Eye_C.SetFadeValue
	 */
	struct ABP_Part_Eye_C_SetFadeValue_Params
	{
	public:
		float                                                      FadeValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Part_Eye.BP_Part_Eye_C.ExecuteUbergraph_BP_Part_Eye
	 */
	struct ABP_Part_Eye_C_ExecuteUbergraph_BP_Part_Eye_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5T9B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
