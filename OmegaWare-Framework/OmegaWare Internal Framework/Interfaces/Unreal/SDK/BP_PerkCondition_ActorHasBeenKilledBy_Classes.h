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
	 * BlueprintGeneratedClass BP_PerkCondition_ActorHasBeenKilledBy.BP_PerkCondition_ActorHasBeenKilledBy_C
	 * Size -> 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
	 */
	class UBP_PerkCondition_ActorHasBeenKilledBy_C : public UPerkCondition
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              VictimClass;                                             // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              KillerActorClass;                                        // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            KillerActorExpression;                                   // 0x0078(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash

	public:
		void Enable(const struct FBlueprintPerkConditionParams& Params);
		void Disable(const struct FBlueprintPerkConditionParams& Params);
		void ExecuteUbergraph_BP_PerkCondition_ActorHasBeenKilledBy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
