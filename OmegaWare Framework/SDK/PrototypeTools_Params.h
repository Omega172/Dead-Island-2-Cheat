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
	 * Function PrototypeTools.PrototypeAreaActor.OnEndOverlap
	 */
	struct APrototypeAreaActor_OnEndOverlap_Params
	{
	public:
		class UTriggerInteractorComponent*                         Interactor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PrototypeTools.PrototypeAreaActor.OnBeginOverlap
	 */
	struct APrototypeAreaActor_OnBeginOverlap_Params
	{
	public:
		class UTriggerInteractorComponent*                         Interactor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
