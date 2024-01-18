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
	 * Class DynamicActorTracker.DynamicActorTrackingManager
	 * Size -> 0x0058 (FullSize[0x0308] - InheritedSize[0x02B0])
	 */
	class ADynamicActorTrackingManager : public AInfo
	{
	public:
		unsigned char                                              UnknownData_YVVN[0x58];                                  // 0x02B0(0x0058) MISSED OFFSET (PADDING)

	public:
		void WriteToCSV();
		void TakeWorldSnapshot();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
