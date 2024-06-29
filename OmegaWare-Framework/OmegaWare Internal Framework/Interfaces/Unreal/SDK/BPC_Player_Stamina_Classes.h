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
	 * BlueprintGeneratedClass BPC_Player_Stamina.BPC_Player_Stamina_C
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class UBPC_Player_Stamina_C : public UPlayerStaminaComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void OnStaminaUpdatedDelegate_Event(class AActor* Actor, float PreviousStamina, float Stamina);
		void ExecuteUbergraph_BPC_Player_Stamina(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
