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
	 * BlueprintGeneratedClass BP_Frontend_PlayerController.BP_Frontend_PlayerController_C
	 * Size -> 0x0018 (FullSize[0x0BF8] - InheritedSize[0x0BE0])
	 */
	class ABP_Frontend_PlayerController_C : public AFrontendPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0BE0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UKnowledgeBaseComponent*                             KnowledgeBase;                                           // 0x0BE8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_BaseStatsComponent_C*                           BPC_BaseStatsComponent;                                  // 0x0BF0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnStartFindSession();
		void OnStartCreateSession();
		void OpenGameLobbyWidget(EGameType InGameType);
		void ExecuteUbergraph_BP_Frontend_PlayerController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
