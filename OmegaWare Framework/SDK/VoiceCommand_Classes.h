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
	 * Class VoiceCommand.VoiceCommandHandlerManager
	 * Size -> 0x0200 (FullSize[0x04B0] - InheritedSize[0x02B0])
	 */
	class AVoiceCommandHandlerManager : public AInfo
	{
	public:
		unsigned char                                              UnknownData_99JA[0x200];                                 // 0x02B0(0x0200) MISSED OFFSET (PADDING)

	public:
		bool IsDoingUserInitiatedCapture();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
