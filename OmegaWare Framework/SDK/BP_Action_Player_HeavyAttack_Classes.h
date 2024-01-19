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
	 * BlueprintGeneratedClass BP_Action_Player_HeavyAttack.BP_Action_Player_HeavyAttack_C
	 * Size -> 0x0018 (FullSize[0x01E8] - InheritedSize[0x01D0])
	 */
	class UBP_Action_Player_HeavyAttack_C : public UHeavyAttackCharacterActionMaster
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UKnowledgeBaseComponent*                             KnowledgeBaseRef;                                        // 0x01D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIPlayerCharacter*                                  Player;                                                  // 0x01E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool GatherPrerequisites();
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnHeavyAttackCancelled();
		void ExecuteUbergraph_BP_Action_Player_HeavyAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
