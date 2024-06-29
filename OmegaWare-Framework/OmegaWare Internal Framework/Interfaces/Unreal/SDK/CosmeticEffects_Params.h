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
	 * Function CosmeticEffects.CosmeticEffectData.OnComplete
	 */
	struct UCosmeticEffectData_OnComplete_Params
	{	};

	/**
	 * Function CosmeticEffects.CosmeticEffectData_Decal.OnDecalComponentDestroyed
	 */
	struct UCosmeticEffectData_Decal_OnDecalComponentDestroyed_Params
	{
	public:
		class UActorComponent*                                     DestroyedComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectPlaceableActor.RequestStopEffect
	 */
	struct ACosmeticEffectPlaceableActor_RequestStopEffect_Params
	{	};

	/**
	 * Function CosmeticEffects.CosmeticEffectPlaceableActor.RequestPlayEffect
	 */
	struct ACosmeticEffectPlaceableActor_RequestPlayEffect_Params
	{
	public:
		bool                                                       bInterruptCurrentEffect;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectPlaceableActor.NetMulticastUpdateCosmeticEffect
	 */
	struct ACosmeticEffectPlaceableActor_NetMulticastUpdateCosmeticEffect_Params
	{
	public:
		bool                                                       bShouldPlay;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterruptCurrentEffectIn;                               // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnLocationID
	 */
	struct UCosmeticEffectsBlueprintLibrary_SpawnLocationID_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCosmeticEffectsDefinition*                          Definition;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InPosition;                                              // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            InRotation;                                              // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FCosmeticEffectParams                               Params;                                                  // 0x0028(0x00D8)  (Parm, NativeAccessSpecifierPublic)
		struct FCosmeticEffectsID                                  ReturnValue;                                             // 0x0100(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnLocation
	 */
	struct UCosmeticEffectsBlueprintLibrary_SpawnLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCosmeticEffectsDefinition*                          Definition;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InPosition;                                              // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            InRotation;                                              // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FCosmeticEffectParams                               Params;                                                  // 0x0028(0x00D8)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnAttachedID
	 */
	struct UCosmeticEffectsBlueprintLibrary_SpawnAttachedID_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCosmeticEffectsDefinition*                          Definition;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InActor;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     InSceneComponent;                                        // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InPosition;                                              // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            InRotation;                                              // 0x002C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                InPointName;                                             // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCosmeticEffectParams                               Params;                                                  // 0x0040(0x00D8)  (Parm, NativeAccessSpecifierPublic)
		struct FCosmeticEffectsID                                  ReturnValue;                                             // 0x0118(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnAttachedActorID
	 */
	struct UCosmeticEffectsBlueprintLibrary_SpawnAttachedActorID_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCosmeticEffectsDefinition*                          Definition;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCosmeticEffectsID                                  ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnAttachedActor
	 */
	struct UCosmeticEffectsBlueprintLibrary_SpawnAttachedActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCosmeticEffectsDefinition*                          Definition;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnAttached
	 */
	struct UCosmeticEffectsBlueprintLibrary_SpawnAttached_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCosmeticEffectsDefinition*                          Definition;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InActor;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     InSceneComponent;                                        // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InPosition;                                              // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            InRotation;                                              // 0x002C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                InPointName;                                             // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCosmeticEffectParams                               Params;                                                  // 0x0040(0x00D8)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SetVec3Parameter
	 */
	struct UCosmeticEffectsBlueprintLibrary_SetVec3Parameter_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCosmeticEffectsID                                  CosmeticEffectsID;                                       // 0x0008(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Parameter;                                               // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SetParameter
	 */
	struct UCosmeticEffectsBlueprintLibrary_SetParameter_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCosmeticEffectsID                                  CosmeticEffectsID;                                       // 0x0008(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Parameter;                                               // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.RelinquishID
	 */
	struct UCosmeticEffectsBlueprintLibrary_RelinquishID_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCosmeticEffectsID                                  CosmeticEffectsID;                                       // 0x0008(0x0004)  (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.LerpVec3Parameter
	 */
	struct UCosmeticEffectsBlueprintLibrary_LerpVec3Parameter_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCosmeticEffectsID                                  CosmeticEffectsID;                                       // 0x0008(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Parameter;                                               // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewValue;                                                // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LerpTime;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Delay;                                                   // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECosmeticEffectLerpType                                    LerpType;                                                // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.LerpParameter
	 */
	struct UCosmeticEffectsBlueprintLibrary_LerpParameter_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCosmeticEffectsID                                  CosmeticEffectsID;                                       // 0x0008(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Parameter;                                               // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewValue;                                                // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LerpTime;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Delay;                                                   // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECosmeticEffectLerpType                                    LerpType;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.DestroyWithDelay
	 */
	struct UCosmeticEffectsBlueprintLibrary_DestroyWithDelay_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCosmeticEffectsID                                  CosmeticEffectsID;                                       // 0x0008(0x0004)  (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Delay;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.Destroy
	 */
	struct UCosmeticEffectsBlueprintLibrary_Destroy_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCosmeticEffectsID                                  CosmeticEffectsID;                                       // 0x0008(0x0004)  (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectDataStore.OnEffectCompleted
	 */
	struct UCosmeticEffectDataStore_OnEffectCompleted_Params
	{
	public:
		class UCosmeticEffect*                                     Effect;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCosmeticEffectData*                                 Data;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectsManager.DelayedDestroyCallback
	 */
	struct ACosmeticEffectsManager_DelayedDestroyCallback_Params
	{
	public:
		struct FCosmeticEffectsID                                  EffectID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.CosmeticEffectsObject.OnEffectCompleted
	 */
	struct UCosmeticEffectsObject_OnEffectCompleted_Params
	{
	public:
		class UCosmeticEffect*                                     Effect;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCosmeticEffectData*                                 Data;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CosmeticEffects.FadingCosmeticEffectsManager.OnActorDestroyed
	 */
	struct AFadingCosmeticEffectsManager_OnActorDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
