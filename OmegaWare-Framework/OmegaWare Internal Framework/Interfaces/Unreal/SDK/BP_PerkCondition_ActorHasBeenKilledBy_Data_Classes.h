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
	 * BlueprintGeneratedClass BP_PerkCondition_ActorHasBeenKilledBy_Data.BP_PerkCondition_ActorHasBeenKilledBy_Data_C
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UBP_PerkCondition_ActorHasBeenKilledBy_Data_C : public UConditionCustomDataBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              ActorOwner;                                              // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Killer;                                                  // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            KillerExpression;                                        // 0x0050(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class UClass*                                              VictimClass;                                             // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               DamageInstigatorPawn;                                    // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ActorKilled(class AActor* Target, class AActor* Killer, const struct FEventInstigator& Instigator, TArray<struct FDSDamageInfo> DamageInfo);
		void ExecuteUbergraph_BP_PerkCondition_ActorHasBeenKilledBy_Data(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
