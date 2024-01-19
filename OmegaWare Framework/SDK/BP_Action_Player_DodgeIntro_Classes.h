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
	 * BlueprintGeneratedClass BP_Action_Player_DodgeIntro.BP_Action_Player_DodgeIntro_C
	 * Size -> 0x0014 (FullSize[0x010C] - InheritedSize[0x00F8])
	 */
	class UBP_Action_Player_DodgeIntro_C : public UDodgeIntroCharacterAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FKnowledgeBaseFactKey                               ResolveWindupFact;                                       // 0x0100(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_Player_DodgeIntro(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
