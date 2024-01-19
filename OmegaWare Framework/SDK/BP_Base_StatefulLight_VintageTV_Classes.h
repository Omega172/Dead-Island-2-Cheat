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
	 * BlueprintGeneratedClass BP_Base_StatefulLight_VintageTV.BP_Base_StatefulLight_VintageTV_C
	 * Size -> 0x0038 (FullSize[0x04F0] - InheritedSize[0x04B8])
	 */
	class ABP_Base_StatefulLight_VintageTV_C : public ABP_Base_StatefulLight_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                ScreenMesh;                                              // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImpactEventComponent*                               ImpactEvent;                                             // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            ScreenInstanceDynamic;                                   // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  ScreenMaterial;                                          // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         InteriorMesh;                                            // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                InteriorMeshComponent;                                   // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RemoveInteriorMesh();
		void AddInteriorMesh();
		void UserConstructionScript();
		void BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnPointImpactEventReceivedDelegate__DelegateSignature(class AActor* Actor, const struct FPointImpactEventResult& ImpactEvent);
		void ExecuteUbergraph_BP_Base_StatefulLight_VintageTV(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
