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
	 * Function Cooldown.BaseCooldownCondition.OnStartCooldown
	 */
	struct UBaseCooldownCondition_OnStartCooldown_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Cooldown.BaseCooldownCondition.OnReset
	 */
	struct UBaseCooldownCondition_OnReset_Params
	{	};

	/**
	 * Function Cooldown.BaseCooldownCondition.InformCooldownCompleted
	 */
	struct UBaseCooldownCondition_InformCooldownCompleted_Params
	{	};

	/**
	 * Function Cooldown.UniversalCooldownDataAsset.GenerateCooldownObject
	 */
	struct UUniversalCooldownDataAsset_GenerateCooldownObject_Params
	{
	public:
		class UObject*                                             Outer;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUniversalCooldownObject*                            ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Cooldown.UniversalCooldownObject.StartCooldown
	 */
	struct UUniversalCooldownObject_StartCooldown_Params
	{
	public:
		class FScriptDelegate                                      InCooldownCallback;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Cooldown.UniversalCooldownObject.SetupPersistence
	 */
	struct UUniversalCooldownObject_SetupPersistence_Params
	{
	public:
		class FScriptDelegate                                      InCooldownCallback;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Cooldown.UniversalCooldownObject.Setup
	 */
	struct UUniversalCooldownObject_Setup_Params
	{
	public:
		class AActor*                                              InOwnerActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Cooldown.UniversalCooldownObject.Reset
	 */
	struct UUniversalCooldownObject_Reset_Params
	{	};

	/**
	 * Function Cooldown.UniversalCooldownObject.EndPlay
	 */
	struct UUniversalCooldownObject_EndPlay_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
