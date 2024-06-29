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
	 * Function SectorSystem.SectorGatewayComponent.RemoveDisableReason
	 */
	struct USectorGatewayComponent_RemoveDisableReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SectorSystem.SectorGatewayComponent.IsDisabled
	 */
	struct USectorGatewayComponent_IsDisabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SectorSystem.SectorGatewayComponent.InternalOnDisableReasonsCleared
	 */
	struct USectorGatewayComponent_InternalOnDisableReasonsCleared_Params
	{	};

	/**
	 * Function SectorSystem.SectorGatewayComponent.InternalOnDisableReasonsActivated
	 */
	struct USectorGatewayComponent_InternalOnDisableReasonsActivated_Params
	{	};

	/**
	 * Function SectorSystem.SectorGatewayComponent.AddDisableReason
	 */
	struct USectorGatewayComponent_AddDisableReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SectorSystem.SectorManager.Get
	 */
	struct ASectorManager_Get_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASectorManager*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
