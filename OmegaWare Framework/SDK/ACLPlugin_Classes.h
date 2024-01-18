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
	 * Class ACLPlugin.ACLStatsDumpCommandlet
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UACLStatsDumpCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ACLPlugin.AnimBoneCompressionCodec_ACLBase
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ACLPlugin.AnimBoneCompressionCodec_ACL
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase
	{
	public:
		class UAnimBoneCompressionCodec*                           SafetyFallbackCodec;                                     // 0x0038(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAnimBoneCompressionCodec_ACLCustom : public UAnimBoneCompressionCodec_ACLBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAnimBoneCompressionCodec_ACLSafe : public UAnimBoneCompressionCodec_ACLBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ACLPlugin.AnimCurveCompressionCodec_ACL
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimCurveCompressionCodec_ACL : public UAnimCurveCompressionCodec
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
