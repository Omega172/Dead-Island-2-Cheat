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
	 * BlueprintGeneratedClass BP_ProjectileResponse_AddFact.BP_ProjectileResponse_AddFact_C
	 * Size -> 0x002A (FullSize[0x008A] - InheritedSize[0x0060])
	 */
	class UBP_ProjectileResponse_AddFact_C : public UModularProjectileResponse
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		TArray<struct FKnowledgeBaseFactKey>                       FactsToAdd;                                              // 0x0078(0x0010) Edit, BlueprintVisible
		bool                                                       UseProjectilesKnowledgeBase;                             // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ReplicateFacts;                                          // 0x0089(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		TArray<struct FKnowledgeBaseFactKey> SetFactsAsReplicating(TArray<struct FKnowledgeBaseFactKey>* Facts);
		void ReceiveOnTriggered();
		void ReceiveInitialize();
		void ExecuteUbergraph_BP_ProjectileResponse_AddFact(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
