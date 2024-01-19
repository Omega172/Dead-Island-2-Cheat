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
	 * Function DSEventSystem.DSEventSystemBlueprintFunctionLibrary.DSEventSubscribeToSubject
	 */
	struct UDSEventSystemBlueprintFunctionLibrary_DSEventSubscribeToSubject_Params
	{
	public:
		class UObject*                                             Outer;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Subject;                                                 // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              EventClass;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDSEventHandle*                                      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSEventSystem.DSEventSystemBlueprintFunctionLibrary.DSEventSubscribeToAnySubject
	 */
	struct UDSEventSystemBlueprintFunctionLibrary_DSEventSubscribeToAnySubject_Params
	{
	public:
		class UObject*                                             Outer;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              EventClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDSEventHandle*                                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSEventSystem.DSEventSystemBlueprintFunctionLibrary.DSEventSubscribe
	 */
	struct UDSEventSystemBlueprintFunctionLibrary_DSEventSubscribe_Params
	{
	public:
		class UObject*                                             Outer;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              EventClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDSEventHandle*                                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSEventSystem.DSEventSystemBlueprintFunctionLibrary.DSEventCreateBroadcaster
	 */
	struct UDSEventSystemBlueprintFunctionLibrary_DSEventCreateBroadcaster_Params
	{
	public:
		class UObject*                                             Outer;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              EventClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDSEventBroadcaster*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSEventSystem.DSEventHandle.Unsubscribe
	 */
	struct UDSEventHandle_Unsubscribe_Params
	{	};

	/**
	 * Function DSEventSystem.DSNetEventComponent.ServerBroadcast
	 */
	struct UDSNetEventComponent_ServerBroadcast_Params
	{
	public:
		struct FDSNetEventWrapper                                  NetEventWrapper;                                         // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DSEventSystem.DSNetEventComponent.ClientBroadcast
	 */
	struct UDSNetEventComponent_ClientBroadcast_Params
	{
	public:
		struct FDSNetEventWrapper                                  NetEventWrapper;                                         // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
