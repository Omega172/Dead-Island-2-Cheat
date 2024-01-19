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
	 * BlueprintGeneratedClass BP_Base_AmbientSpawnActivity.BP_Base_AmbientSpawnActivity_C
	 * Size -> 0x0008 (FullSize[0x07C0] - InheritedSize[0x07B8])
	 */
	class ABP_Base_AmbientSpawnActivity_C : public ABP_Base_SpawnActivity_C
	{
	public:
		class UAmbientActivityRegistrationComponent*               AmbientActivityRegistration;                             // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
