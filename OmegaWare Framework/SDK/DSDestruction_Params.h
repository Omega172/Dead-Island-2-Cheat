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
	 * Function DSDestruction.DSDestructibleComponent.ToggleEnableReason
	 */
	struct UDSDestructibleComponent_ToggleEnableReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSDestruction.DSDestructibleComponent.RemoveEnableReason
	 */
	struct UDSDestructibleComponent_RemoveEnableReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSDestruction.DSDestructibleComponent.RemoveDisableReason
	 */
	struct UDSDestructibleComponent_RemoveDisableReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSDestruction.DSDestructibleComponent.K2_SetDataAsset
	 */
	struct UDSDestructibleComponent_K2_SetDataAsset_Params
	{
	public:
		class UDSDestructionAsset*                                 DataAssetIn;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InChunkID;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSDestruction.DSDestructibleComponent.K2_EnactRule
	 */
	struct UDSDestructibleComponent_K2_EnactRule_Params
	{
	public:
		class FName                                                RuleName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDSDestructionEnactRuleParams                       Params;                                                  // 0x0008(0x0001)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSDestruction.DSDestructibleComponent.K2_BreakSubChunk
	 */
	struct UDSDestructibleComponent_K2_BreakSubChunk_Params
	{
	public:
		class FName                                                InChunkID;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSDestruction.DSDestructibleComponent.IsChunkValid
	 */
	struct UDSDestructibleComponent_IsChunkValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSDestruction.DSDestructibleComponent.GetDataAsset
	 */
	struct UDSDestructibleComponent_GetDataAsset_Params
	{
	public:
		class UDSDestructionAsset*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSDestruction.DSDestructibleComponent.GetChunkName
	 */
	struct UDSDestructibleComponent_GetChunkName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSDestruction.DSDestructibleComponent.ComponentHit
	 */
	struct UDSDestructibleComponent_ComponentHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0OI5[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSDestruction.DSDestructibleComponent.ApplyBreakingImpulse
	 */
	struct UDSDestructibleComponent_ApplyBreakingImpulse_Params
	{
	public:
		struct FDSDestructionBreakParams                           Params;                                                  // 0x0000(0x0024)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                HitChunkName;                                            // 0x0024(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSDestruction.DSDestructibleComponent.AddEnableReason
	 */
	struct UDSDestructibleComponent_AddEnableReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSDestruction.DSDestructibleComponent.AddDisableReason
	 */
	struct UDSDestructibleComponent_AddDisableReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
