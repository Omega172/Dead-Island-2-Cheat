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
	 * BlueprintGeneratedClass BP_PerkCondition_DoesPlayerHaveAnyWeapon.BP_PerkCondition_DoesPlayerHaveAnyWeapon_C
	 * Size -> 0x0011 (FullSize[0x0071] - InheritedSize[0x0060])
	 */
	class UBP_PerkCondition_DoesPlayerHaveAnyWeapon_C : public UPerkCondition
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                Category;                                                // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SatisfyOnFalse;                                          // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Enable(const struct FBlueprintPerkConditionParams& Params);
		void Disable(const struct FBlueprintPerkConditionParams& Params);
		void ExecuteUbergraph_BP_PerkCondition_DoesPlayerHaveAnyWeapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
