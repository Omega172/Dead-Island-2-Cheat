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
	 * BlueprintGeneratedClass BP_AnimNotify_HideWeapon.BP_AnimNotify_HideWeapon_C
	 * Size -> 0x0001 (FullSize[0x0039] - InheritedSize[0x0038])
	 */
	class UBP_AnimNotify_HideWeapon_C : public UAnimNotify
	{
	public:
		bool                                                       Hidden;                                                  // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
