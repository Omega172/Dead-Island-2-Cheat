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
	 * Function Vision.ObservableComponent.UnregisterFromVisionManager
	 */
	struct UObservableComponent_UnregisterFromVisionManager_Params
	{	};

	/**
	 * Function Vision.ObservableComponent.RegisterWithVisionManager
	 */
	struct UObservableComponent_RegisterWithVisionManager_Params
	{	};

	/**
	 * Function Vision.ObservableComponent.IsRegisteredWithVisionManager
	 */
	struct UObservableComponent_IsRegisteredWithVisionManager_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Vision.ObservableComponent.CanBeSeenBy
	 */
	struct UObservableComponent_CanBeSeenBy_Params
	{
	public:
		class UObserverComponent*                                  Observer;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Vision.ObserverComponent.SeenRecently
	 */
	struct UObserverComponent_SeenRecently_Params
	{
	public:
		class UObservableComponent*                                Observable;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ThresholdTime;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Vision.ObserverComponent.CanSee
	 */
	struct UObserverComponent_CanSee_Params
	{
	public:
		class UObservableComponent*                                Observable;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
