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
	 * BlueprintGeneratedClass BP_PerkCondition_ActionHasJustEnded.BP_PerkCondition_ActionHasJustEnded_C
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBP_PerkCondition_ActionHasJustEnded_C : public UPerkCondition
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UActionDefinition*                                   PerformedAction;                                         // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Disable(const struct FBlueprintPerkConditionParams& Params);
		void Enable(const struct FBlueprintPerkConditionParams& Params);
		void ExecuteUbergraph_BP_PerkCondition_ActionHasJustEnded(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
