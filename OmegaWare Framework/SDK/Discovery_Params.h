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
	 * Function Discovery.DiscoverableComponent.RemoveDisableReason
	 */
	struct UDiscoverableComponent_RemoveDisableReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Discovery.DiscoverableComponent.OnDiscoveryChanged
	 */
	struct UDiscoverableComponent_OnDiscoveryChanged_Params
	{
	public:
		bool                                                       bDiscovered;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Discovery.DiscoverableComponent.AddDisableReason
	 */
	struct UDiscoverableComponent_AddDisableReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Discovery.DiscoveryManager.UnRegisterDiscoveryObject
	 */
	struct UDiscoveryManager_UnRegisterDiscoveryObject_Params
	{
	public:
		class UDiscoveryObject*                                    DiscoveryObject;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Discovery.DiscoveryManager.RegisterDiscoveryObject
	 */
	struct UDiscoveryManager_RegisterDiscoveryObject_Params
	{
	public:
		class UDiscoveryObject*                                    DiscoveryObject;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Discovery.DiscoveryManager.Get
	 */
	struct UDiscoveryManager_Get_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDiscoveryManager*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
