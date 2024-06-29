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
	 * BlueprintGeneratedClass BP_Action_ExecuteScriptedAttack.BP_Action_ExecuteScriptedAttack_C
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	class UBP_Action_ExecuteScriptedAttack_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_ActionParams_ExecuteScriptedAttack_C*            ScriptedAttackParams;                                    // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_AI_C*                                       Character;                                               // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetupActionParams();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnScriptedAttackend(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnScriptedAttackCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params);
		void ExecuteUbergraph_BP_Action_ExecuteScriptedAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
