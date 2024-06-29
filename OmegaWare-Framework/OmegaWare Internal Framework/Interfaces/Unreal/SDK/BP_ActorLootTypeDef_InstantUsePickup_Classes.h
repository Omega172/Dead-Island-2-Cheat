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
	 * BlueprintGeneratedClass BP_ActorLootTypeDef_InstantUsePickup.BP_ActorLootTypeDef_InstantUsePickup_C
	 * Size -> 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
	 */
	class UBP_ActorLootTypeDef_InstantUsePickup_C : public UActorLootTypeDefinition
	{
	public:
		unsigned char                                              InstantUsePickupActorClass[0x28];                        // 0x0078(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		void GetLootActorClassToSpawn();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
