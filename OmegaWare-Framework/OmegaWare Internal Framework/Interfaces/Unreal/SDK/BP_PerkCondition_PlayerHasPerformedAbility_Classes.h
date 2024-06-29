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
	 * BlueprintGeneratedClass BP_PerkCondition_PlayerHasPerformedAbility.BP_PerkCondition_PlayerHasPerformedAbility_C
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UBP_PerkCondition_PlayerHasPerformedAbility_C : public UPerkCondition
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UActionDefinition*>                           ActionDefinition;                                        // 0x0068(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Enable(const struct FBlueprintPerkConditionParams& Params);
		void Disable(const struct FBlueprintPerkConditionParams& Params);
		void ExecuteUbergraph_BP_PerkCondition_PlayerHasPerformedAbility(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
