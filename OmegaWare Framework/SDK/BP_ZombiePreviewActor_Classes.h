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
	 * BlueprintGeneratedClass BP_ZombiePreviewActor.BP_ZombiePreviewActor_C
	 * Size -> 0x0010 (FullSize[0x0338] - InheritedSize[0x0328])
	 */
	class ABP_ZombiePreviewActor_C : public ACharacterPreviewActor
	{
	public:
		class UBPC_SplatterMesh_AI_C*                              BPC_SplatterMesh_AI;                                     // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_DamageRepercussions_AI_C*                       BPC_DamageRepercussions_AI;                              // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
