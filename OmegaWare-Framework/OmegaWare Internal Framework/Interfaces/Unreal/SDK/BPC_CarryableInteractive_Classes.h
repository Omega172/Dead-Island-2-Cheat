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
	 * BlueprintGeneratedClass BPC_CarryableInteractive.BPC_CarryableInteractive_C
	 * Size -> 0x0009 (FullSize[0x0829] - InheritedSize[0x0820])
	 */
	class UBPC_CarryableInteractive_C : public UInteractiveComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0820(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CarryableInteractionAllowed;                             // 0x0828(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool AllowInteraction(class APawn* User, class UInteractiveComponent* InteractiveComponent);
		class UClass* GetInteractIconClass(class UInteractiveComponent* InteractiveComponent);
		bool IsPlayerInInfiniteFury(class APawn* User);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPC_CarryableInteractive(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
