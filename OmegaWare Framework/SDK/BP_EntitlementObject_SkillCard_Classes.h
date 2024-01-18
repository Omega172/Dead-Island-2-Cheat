#pragma once

/**
 * Name: Dead_Island_2
 * Version: Cracked
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
	 * BlueprintGeneratedClass BP_EntitlementObject_SkillCard.BP_EntitlementObject_SkillCard_C
	 * Size -> 0x0000 (FullSize[0x03B0] - InheritedSize[0x03B0])
	 */
	class ABP_EntitlementObject_SkillCard_C : public ABP_Base_EntitlementObject_C
	{
	public:
		void GetEntitlementDisplayName(const struct FDataTableRowHandle& Entitlement, bool* EntitlementFoundInRegistry, class FText* DisplayName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
