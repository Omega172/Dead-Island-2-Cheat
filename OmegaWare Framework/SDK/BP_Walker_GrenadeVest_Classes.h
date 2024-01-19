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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Walker_GrenadeVest.BP_Walker_GrenadeVest_C
	 * Size -> 0x0010 (FullSize[0x10B8] - InheritedSize[0x10A8])
	 */
	class ABP_Walker_GrenadeVest_C : public ABP_Base_Walker_C
	{
	public:
		class USceneComponent*                                     VestLocation;                                            // 0x10A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_AttachmentSettings_AI_C*                        BPC_AttachmentSettings_AI;                               // 0x10B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
