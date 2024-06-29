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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum DSUtils.EActorPickerSelection
	 */
	enum class EActorPickerSelection : uint8_t
	{
		HardReference         = 0,
		SoftReference         = 1,
		GlobalObjectLink      = 2,
		ActorFromSupplier     = 3,
		ActorFromSoftSupplier = 4,
		MAX                   = 5
	};

	/**
	 * Enum DSUtils.EDSLogVerbosity
	 */
	enum class EDSLogVerbosity : uint8_t
	{
		Error   = 0,
		Warning = 1,
		Info    = 2,
		Debug   = 3,
		MAX     = 4
	};

	/**
	 * Enum DSUtils.EDSLogUploadBugsSetting
	 */
	enum class EDSLogUploadBugsSetting : uint8_t
	{
		None                  = 0,
		NoBug                 = 1,
		UploadAllBugInstances = 2,
		MAX                   = 3
	};

	/**
	 * Enum DSUtils.EDSLogDepartmentChannel
	 */
	enum class EDSLogDepartmentChannel : uint8_t
	{
		Blueprint           = 0,
		BlueprintDesign     = 1,
		BlueprintDesignCode = 2,
		All                 = 3,
		None                = 4,
		MAX                 = 5
	};

	/**
	 * Enum DSUtils.ERandomIntGeneratorDistribution
	 */
	enum class ERandomIntGeneratorDistribution : uint8_t
	{
		Absolute = 0,
		Uniform  = 1,
		MAX      = 2
	};

	/**
	 * Enum DSUtils.EGameBalanceableType
	 */
	enum class EGameBalanceableType : uint8_t
	{
		Direct = 0,
		Table  = 1,
		MAX    = 2
	};

	/**
	 * Enum DSUtils.EGameBalanceableDataTypeOfData
	 */
	enum class EGameBalanceableDataTypeOfData : uint8_t
	{
		Integer = 0,
		Float   = 1,
		String  = 2,
		Boolean = 3,
		MAX     = 4
	};

	/**
	 * Enum DSUtils.EComparisonOperator
	 */
	enum class EComparisonOperator : uint8_t
	{
		Equal        = 0,
		NotEqual     = 1,
		Greater      = 2,
		GreaterEqual = 3,
		Less         = 4,
		LessEqual    = 5,
		MAX          = 6
	};

	/**
	 * Enum DSUtils.ERandomDeckMode
	 */
	enum class ERandomDeckMode : uint8_t
	{
		Shuffle    = 0,
		Ascending  = 1,
		Descending = 2,
		MAX        = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DSUtils.DSActorPicker
	 * Size -> 0x0078
	 */
	struct FDSActorPicker
	{
	public:
		EActorPickerSelection                                      PickerSelection;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KXF3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              SoftActor[0x28];                                         // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                ObjectLinkNameSearcher;                                  // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              ActorSupplier;                                           // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              SoftActorSupplier[0x28];                                 // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UActorPickerRecurringObject*                         RecurringObject;                                         // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DSUtils.FixedDataTableEditableRowHandle
	 * Size -> 0x0018
	 */
	struct FFixedDataTableEditableRowHandle
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RowName;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDataTableEditable;                                      // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1FT2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSUtils.EventInstigator
	 * Size -> 0x0010
	 */
	struct FEventInstigator
	{
	public:
		class AController*                                         InstigatorController;                                    // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APawn*                                               InstigatorPawn;                                          // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DSUtils.UserParamsObjectWrapper
	 * Size -> 0x0008
	 */
	struct FUserParamsObjectWrapper
	{
	public:
		class UCustomParamsBase*                                   CustomUserObject;                                        // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSUtils.DelegateHandleWrapper
	 * Size -> 0x0008
	 */
	struct FDelegateHandleWrapper
	{
	public:
		unsigned char                                              UnknownData_NX2Q[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSUtils.RandomNumberGenerator_Int
	 * Size -> 0x0010
	 */
	struct FRandomNumberGenerator_Int
	{
	public:
		ERandomIntGeneratorDistribution                            Distribution;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P46G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AbsoluteValue;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Min;                                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Max;                                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSUtils.WeakEventInstigator
	 * Size -> 0x0010
	 */
	struct FWeakEventInstigator
	{
	public:
		TWeakObjectPtr<class AController>                          InstigatorController;                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class APawn>                                InstigatorPawn;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DSUtils.GameBalanceableData
	 * Size -> 0x0018
	 */
	struct FGameBalanceableData
	{
	public:
		EGameBalanceableType                                       Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YOFI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 DTRowHandle;                                             // 0x0008(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSUtils.GameBalanceableBool
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FGameBalanceableBool : public FGameBalanceableData
	{
	public:
		bool                                                       Value;                                                   // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IV4L[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSUtils.GameBalanceableFloat
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FGameBalanceableFloat : public FGameBalanceableData
	{
	public:
		float                                                      Value;                                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9J9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSUtils.GameBalanceableInt
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FGameBalanceableInt : public FGameBalanceableData
	{
	public:
		int32_t                                                    Value;                                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W9BN[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSUtils.GameBalanceableString
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FGameBalanceableString : public FGameBalanceableData
	{
	public:
		class FString                                              Value;                                                   // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSUtils.MultiPlatformDataSelector
	 * Size -> 0x0006
	 */
	struct FMultiPlatformDataSelector
	{
	public:
		bool                                                       bWindows;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPS5;                                                    // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPS4;                                                    // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bXSX;                                                    // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bXBoxOne;                                                // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStadia;                                                 // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSUtils.PlatformsIntPair
	 * Size -> 0x000C
	 */
	struct FPlatformsIntPair
	{
	public:
		struct FMultiPlatformDataSelector                          Platforms;                                               // 0x0000(0x0006) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5UL[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Data;                                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSUtils.PlatformsFloatPair
	 * Size -> 0x000C
	 */
	struct FPlatformsFloatPair
	{
	public:
		struct FMultiPlatformDataSelector                          Platforms;                                               // 0x0000(0x0006) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FUS4[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Data;                                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSUtils.PlatformsStringPair
	 * Size -> 0x0018
	 */
	struct FPlatformsStringPair
	{
	public:
		struct FMultiPlatformDataSelector                          Platforms;                                               // 0x0000(0x0006) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G6ZF[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Data;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSUtils.PlatformsBooleanPair
	 * Size -> 0x0007
	 */
	struct FPlatformsBooleanPair
	{
	public:
		struct FMultiPlatformDataSelector                          Platforms;                                               // 0x0000(0x0006) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Data;                                                    // 0x0006(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSUtils.GameBalanceableTypeRowData
	 * Size -> 0x0068
	 */
	struct FGameBalanceableTypeRowData
	{
	public:
		EGameBalanceableDataTypeOfData                             DataType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WPE5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DefaultInteger;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPlatformsIntPair>                           IntegerPlatformOverride;                                 // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      DefaultFloat;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OENS[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlatformsFloatPair>                         FloatPlatformOverride;                                   // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              DefaultString;                                           // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPlatformsStringPair>                        StringPlatformOverride;                                  // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       DefaultBoolean;                                          // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C0FP[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlatformsBooleanPair>                       BoolPlatformOverride;                                    // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSUtils.GameBalanceableVariant
	 * Size -> 0x0068 (FullSize[0x0080] - InheritedSize[0x0018])
	 */
	struct FGameBalanceableVariant : public FGameBalanceableData
	{
	public:
		struct FGameBalanceableTypeRowData                         Data;                                                    // 0x0018(0x0068) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSUtils.GameBalanceableTypeRow
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FGameBalanceableTypeRow : public FTableRowBase
	{
	public:
		struct FGameBalanceableTypeRowData                         Data;                                                    // 0x0008(0x0068) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSUtils.LazyUpdaterBase
	 * Size -> 0x0018
	 */
	struct FLazyUpdaterBase
	{
	public:
		unsigned char                                              UnknownData_6PMP[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSUtils.LazyUpdater_Percentage
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FLazyUpdater_Percentage : public FLazyUpdaterBase
	{
	public:
		float                                                      PercentageDifferenceToUpdate;                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTimeBetweenUpdates;                                   // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumDifferenceToEverUpdate;                           // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HGAN[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSUtils.LazyUpdater
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FLazyUpdater : public FLazyUpdaterBase
	{
	public:
		float                                                      DifferenceToAlwaysUpdate;                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DifferenceToUpdateMantissa;                              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToAlwaysUpdate;                                      // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTimeBasedNoChangeUpdates;                          // 0x0024(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompareToZero;                                          // 0x0025(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_780P[0xA];                                   // 0x0026(0x000A) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSUtils.ObjectLinkPair
	 * Size -> 0x0010
	 */
	struct FObjectLinkPair
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
