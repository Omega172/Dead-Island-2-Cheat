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
	 * BlueprintGeneratedClass BPC_Base_MultiPartHealth_AI.BPC_Base_MultiPartHealth_AI_C
	 * Size -> 0x0060 (FullSize[0x0568] - InheritedSize[0x0508])
	 */
	class UBPC_Base_MultiPartHealth_AI_C : public UMultiPartHealthComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0508(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_AI_C*                                       Pawn;                                                    // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            BodyPartExpressionRequiredToLive;                        // 0x0518(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		struct FEventInstigator                                    LastDamageInstigator;                                    // 0x0550(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UCharacterActionRequestHelper*                       CrawlerActionRequestHelper;                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EvaluateBodyPartExpressionRequiredtoLive();
		void OnBodyPartKilled(class AActor* DamagedActor, const class FName& BodyPartName, class UBodyPartState* PartState);
		void AuthorityOnDismemberment(class AActor* LastDamager, const struct FEventInstigator& LastInstigator);
		void ReceiveBeginPlay();
		void OnActorJustDamagedDelegate_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, const struct FEventInstigator& InstigatedBy, class AActor* DamageCauser, const struct FDSDamageData& DSDamageData);
		void ExecuteUbergraph_BPC_Base_MultiPartHealth_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
