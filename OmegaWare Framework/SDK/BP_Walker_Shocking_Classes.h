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
	 * BlueprintGeneratedClass BP_Walker_Shocking.BP_Walker_Shocking_C
	 * Size -> 0x0020 (FullSize[0x10C8] - InheritedSize[0x10A8])
	 */
	class ABP_Walker_Shocking_C : public ABP_Base_Walker_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCharacterActionRequestHelper*                       ShockingBuildUpActionHelper;                             // 0x10B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitialWarmup;                                           // 0x10B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PostElectrocuteCooldown;                                 // 0x10BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        BuildUpCooldownTimer;                                    // 0x10C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Walker_Shocking(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
