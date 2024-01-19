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
	 * BlueprintGeneratedClass BP_Action_Player_UseMedkit.BP_Action_Player_UseMedkit_C
	 * Size -> 0x0008 (FullSize[0x01E8] - InheritedSize[0x01E0])
	 */
	class UBP_Action_Player_UseMedkit_C : public UPlayerUseMedkitAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void ExecuteUbergraph_BP_Action_Player_UseMedkit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
