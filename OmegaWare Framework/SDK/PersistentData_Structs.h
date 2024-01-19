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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct PersistentData.PersistentStoringParams
	 * Size -> 0x0018
	 */
	struct FPersistentStoringParams
	{
	public:
		unsigned char                                              UnknownData_4SBK[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PersistentData.CategoryPath
	 * Size -> 0x0018
	 */
	struct FCategoryPath
	{
	public:
		unsigned char                                              UnknownData_NYZ9[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
