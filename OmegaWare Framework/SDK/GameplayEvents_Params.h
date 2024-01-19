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
	 * Function GameplayEvents.GameplayEventComponent.ServerMulticastDispatchEvent
	 */
	struct UGameplayEventComponent_ServerMulticastDispatchEvent_Params
	{
	public:
		struct FGameplayEvent                                      GameplayEvent;                                           // 0x0000(0x0020)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayEvents.GameplayEventComponent.ServerDispatchEvent
	 */
	struct UGameplayEventComponent_ServerDispatchEvent_Params
	{
	public:
		struct FGameplayEvent                                      GameplayEvent;                                           // 0x0000(0x0020)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayEvents.GameplayEventComponent.NetMulticastDispatchEvent
	 */
	struct UGameplayEventComponent_NetMulticastDispatchEvent_Params
	{
	public:
		struct FGameplayEvent                                      GameplayEvent;                                           // 0x0000(0x0020)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		EGameplayEventInstigator                                   Instigator;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayEvents.GameplayEventComponent.ClientDispatchEvent
	 */
	struct UGameplayEventComponent_ClientDispatchEvent_Params
	{
	public:
		struct FGameplayEvent                                      GameplayEvent;                                           // 0x0000(0x0020)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
