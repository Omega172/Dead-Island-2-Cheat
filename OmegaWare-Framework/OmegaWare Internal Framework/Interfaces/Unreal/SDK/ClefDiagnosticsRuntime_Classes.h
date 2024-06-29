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
	 * Class ClefDiagnosticsRuntime.DiagnosticsSubsystem
	 * Size -> 0x0240 (FullSize[0x0270] - InheritedSize[0x0030])
	 */
	class UDiagnosticsSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_CBHN[0x240];                                 // 0x0030(0x0240) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
