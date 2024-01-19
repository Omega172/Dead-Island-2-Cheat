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
	 * BlueprintGeneratedClass BP_ActorLootTypeDef_Skill.BP_ActorLootTypeDef_Skill_C
	 * Size -> 0x0040 (FullSize[0x00B8] - InheritedSize[0x0078])
	 */
	class UBP_ActorLootTypeDef_Skill_C : public UBP_ActorLootTypeDef_Entitlements_C
	{
	public:
		struct FFixedDataTableEditableRowHandle                    SkillId;                                                 // 0x0078(0x0018) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SkillActorClass[0x28];                                   // 0x0090(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		void GetEntitlementTableAndRow(struct FFixedDataTableEditableRowHandle* Entitlement);
		void GetLootActorClassToSpawn();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
