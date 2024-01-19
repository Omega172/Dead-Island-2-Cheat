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
	 * Class ValidatedDataAsset.BaseValidatedDataAsset
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBaseValidatedDataAsset : public UDataAsset
	{
	public:
		bool IsValidInternal();
		void GetErrorsToOutput(TArray<class FText>* Errors);
		static UClass* StaticClass();
	};

	/**
	 * Class ValidatedDataAsset.ValidatedDataAsset
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UValidatedDataAsset : public UBaseValidatedDataAsset
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
