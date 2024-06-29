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
	 * Function BP_Part_Jaw.BP_Part_Jaw_C.BeginDetachedState
	 */
	struct ABP_Part_Jaw_C_BeginDetachedState_Params
	{
	public:
		class USkeletalMeshComponent*                              ParentSkeletalMeshComponent;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Velocity;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AngularVelocity;                                         // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Part_Jaw.BP_Part_Jaw_C.BeginAttachedState
	 */
	struct ABP_Part_Jaw_C_BeginAttachedState_Params
	{
	public:
		class USkeletalMeshComponent*                              ParentSkeletalMeshComponent;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Part_Jaw.BP_Part_Jaw_C.ReceiveBeginPlay
	 */
	struct ABP_Part_Jaw_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Part_Jaw.BP_Part_Jaw_C.OnSpawn
	 */
	struct ABP_Part_Jaw_C_OnSpawn_Params
	{
	public:
		class USkeletalMeshComponent*                              ParentSkeletalMeshComponent;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Part_Jaw.BP_Part_Jaw_C.OnDetach
	 */
	struct ABP_Part_Jaw_C_OnDetach_Params
	{
	public:
		class USkeletalMeshComponent*                              ParentSkeletalMeshComponent;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Velocity;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AngularVelocity;                                         // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Part_Jaw.BP_Part_Jaw_C.SetFadeValue
	 */
	struct ABP_Part_Jaw_C_SetFadeValue_Params
	{
	public:
		float                                                      FadeValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Part_Jaw.BP_Part_Jaw_C.ExecuteUbergraph_BP_Part_Jaw
	 */
	struct ABP_Part_Jaw_C_ExecuteUbergraph_BP_Part_Jaw_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
