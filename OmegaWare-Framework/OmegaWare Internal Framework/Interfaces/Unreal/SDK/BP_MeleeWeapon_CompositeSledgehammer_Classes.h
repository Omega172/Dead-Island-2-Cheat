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
	 * BlueprintGeneratedClass BP_MeleeWeapon_CompositeSledgehammer.BP_MeleeWeapon_CompositeSledgehammer_C
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	class ABP_MeleeWeapon_CompositeSledgehammer_C : public ABP_Base_MeleeWeapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SetOwningActor(class AActor* Actor);
		void ExecuteUbergraph_BP_MeleeWeapon_CompositeSledgehammer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
