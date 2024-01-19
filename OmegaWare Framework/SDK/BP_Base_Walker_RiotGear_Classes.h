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
	 * BlueprintGeneratedClass BP_Base_Walker_RiotGear.BP_Base_Walker_RiotGear_C
	 * Size -> 0x0010 (FullSize[0x10B8] - InheritedSize[0x10A8])
	 */
	class ABP_Base_Walker_RiotGear_C : public ABP_Base_Walker_C
	{
	public:
		class UBPC_AttachmentSettings_AI_C*                        BPC_AttachmentSettings_AI;                               // 0x10A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImpactEventComponent*                               ImpactEventComponentRef;                                 // 0x10B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
