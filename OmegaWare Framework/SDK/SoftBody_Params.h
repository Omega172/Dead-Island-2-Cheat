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
	 * Function SoftBody.SoftBodyComponent.UpdateSimulationTransforms
	 */
	struct USoftBodyComponent_UpdateSimulationTransforms_Params
	{
	public:
		bool                                                       bWasTeleport;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SoftBody.SoftBodyComponent.SetTargetMesh
	 */
	struct USoftBodyComponent_SetTargetMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              InMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SoftBody.SoftBodyComponent.SetEnableAll
	 */
	struct USoftBodyComponent_SetEnableAll_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SoftBody.SoftBodyComponent.SetEnable
	 */
	struct USoftBodyComponent_SetEnable_Params
	{
	public:
		class FName                                                SoftBodyNode;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnable;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SoftBody.SoftBodyComponent.SetDataAsset
	 */
	struct USoftBodyComponent_SetDataAsset_Params
	{
	public:
		class USoftBodyDataObject*                                 DataAssetIn;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SoftBody.SoftBodyComponent.FlagTeleportTransition
	 */
	struct USoftBodyComponent_FlagTeleportTransition_Params
	{
	public:
		int32_t                                                    NumberOfFrames;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SoftBody.SoftBodyComponent.DestroySoftSimulations
	 */
	struct USoftBodyComponent_DestroySoftSimulations_Params
	{	};

	/**
	 * Function SoftBody.SoftBodyComponent.CreateSoftSimulations
	 */
	struct USoftBodyComponent_CreateSoftSimulations_Params
	{	};

	/**
	 * Function SoftBody.SoftBodyComponent.CreateAndShareFrom
	 */
	struct USoftBodyComponent_CreateAndShareFrom_Params
	{
	public:
		class USkinnedMeshComponent*                               ShareFrom;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SoftBody.SoftBodyComponent.AutoEnableDisableVisibleSections
	 */
	struct USoftBodyComponent_AutoEnableDisableVisibleSections_Params
	{	};

	/**
	 * Function SoftBody.SoftBodyComponent.AddSoftBodyImpulse
	 */
	struct USoftBodyComponent_AddSoftBodyImpulse_Params
	{
	public:
		struct FSoftBodyImpulse                                    ImpulseData;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                SoftBodyNode;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SoftBody.SoftBodyComponent.AddMovementModifier
	 */
	struct USoftBodyComponent_AddMovementModifier_Params
	{
	public:
		struct FSoftBodyMovementModifer                            ModifierData;                                            // 0x0000(0x002C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
