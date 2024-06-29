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
	 * BlueprintGeneratedClass BP_Fluid_Puddle.BP_Fluid_Puddle_C
	 * Size -> 0x003C (FullSize[0x055C] - InheritedSize[0x0520])
	 */
	class ABP_Fluid_Puddle_C : public AFluidInstanceActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0520(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDecalComponent*                                     PreviewDecal;                                            // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender;                                              // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              FluidName;                                               // 0x0538(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FColor                                              FluidTextColour;                                         // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRandomStream                                       RandomStream;                                            // 0x054C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor
		int32_t                                                    PreviewDecalSortOrder;                                   // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DecalZHeight;                                            // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitPreviewDecal();
		void InitTextRender();
		void DrawPuddleCircles();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Fluid_Puddle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
