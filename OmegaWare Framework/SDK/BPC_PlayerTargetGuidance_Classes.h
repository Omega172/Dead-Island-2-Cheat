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
	 * BlueprintGeneratedClass BPC_PlayerTargetGuidance.BPC_PlayerTargetGuidance_C
	 * Size -> 0x003C (FullSize[0x01DC] - InheritedSize[0x01A0])
	 */
	class UBPC_PlayerTargetGuidance_C : public UViewTargetGuidanceComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGuid                                               AutoAimRequestID;                                        // 0x01A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_Player_C*                                   PlayerCharacter;                                         // 0x01B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              ViewTargetName;                                          // 0x01C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UActionDefinition*                                   ViewTargetLifetimeAction;                                // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ViewTargetPriority;                                      // 0x01D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DisableAimGuildance();
		void EnableAimGuidance();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPC_PlayerTargetGuidance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
