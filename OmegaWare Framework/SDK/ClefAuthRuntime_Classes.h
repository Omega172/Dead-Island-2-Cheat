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
	 * Class ClefAuthRuntime.UserAuthData
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UUserAuthData : public UObject
	{
	public:
		unsigned char                                              UnknownData_OOJF[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (PADDING)

	public:
		void SetRefreshToken(const class FString& NewToken);
		class FString GetRefreshToken();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
