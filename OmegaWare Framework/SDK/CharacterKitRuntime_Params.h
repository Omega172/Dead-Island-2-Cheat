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
	 * Function CharacterKitRuntime.BodyPartActor.OnSpawn
	 */
	struct ABodyPartActor_OnSpawn_Params
	{	};

	/**
	 * Function CharacterKitRuntime.BodyPartActor.OnDetach
	 */
	struct ABodyPartActor_OnDetach_Params
	{	};

	/**
	 * Function CharacterKitRuntime.BodyPartActor.BuildMeshFromViscera
	 */
	struct ABodyPartActor_BuildMeshFromViscera_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        SectionsToKeep;                                          // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterKitRuntime.CharacterKitMeshUtils.ShowSubSections
	 */
	struct UCharacterKitMeshUtils_ShowSubSections_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        SectionsToKeep;                                          // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterKitRuntime.CharacterKitMeshUtils.ShowAllSubSections
	 */
	struct UCharacterKitMeshUtils_ShowAllSubSections_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterKitRuntime.CharacterKitMeshUtils.HideAllSubSections
	 */
	struct UCharacterKitMeshUtils_HideAllSubSections_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterKitRuntime.BodyPartActorInterface.OnSpawn
	 */
	struct UBodyPartActorInterface_OnSpawn_Params
	{
	public:
		class USkeletalMeshComponent*                              ParentSkeletalMeshComponent;                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterKitRuntime.BodyPartActorInterface.OnDetach
	 */
	struct UBodyPartActorInterface_OnDetach_Params
	{
	public:
		class USkeletalMeshComponent*                              ParentSkeletalMeshComponent;                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Velocity;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             AngularVelocity;                                         // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterKitRuntime.SpawnablePartsUtils.UnHideSkeletonPart
	 */
	struct USpawnablePartsUtils_UnHideSkeletonPart_Params
	{
	public:
		class USkeletalMeshComponent*                              Skeleton;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                PartName;                                                // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterKitRuntime.SpawnablePartsUtils.IsSkeletonPartVisible
	 */
	struct USpawnablePartsUtils_IsSkeletonPartVisible_Params
	{
	public:
		class USkeletalMeshComponent*                              Skeleton;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                PartName;                                                // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterKitRuntime.SpawnablePartsUtils.HideViscera
	 */
	struct USpawnablePartsUtils_HideViscera_Params
	{
	public:
		class USkeletalMeshComponent*                              Skeleton;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CharacterKitRuntime.SpawnablePartsUtils.HideSkeletonPart
	 */
	struct USpawnablePartsUtils_HideSkeletonPart_Params
	{
	public:
		class USkeletalMeshComponent*                              Skeleton;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                PartName;                                                // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
