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
	 * Class VoiceCommand.VoiceCommandHandlerManager
	 * Size -> 0x0218 (FullSize[0x04C8] - InheritedSize[0x02B0])
	 */
	class AVoiceCommandHandlerManager : public AInfo
	{
	public:
		unsigned char                                              UnknownData_5P06[0x218];                                 // 0x02B0(0x0218) MISSED OFFSET (PADDING)

	public:
		bool IsDoingUserInitiatedCapture();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
