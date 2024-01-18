/**
 * Name: Dead_Island_2
 * Version: Cracked
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UACLStatsDumpCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UACLStatsDumpCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.ACLStatsDumpCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBoneCompressionCodec_ACLBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBoneCompressionCodec_ACLBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACLBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBoneCompressionCodec_ACL.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBoneCompressionCodec_ACL::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACL");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBoneCompressionCodec_ACLCustom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBoneCompressionCodec_ACLCustom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBoneCompressionCodec_ACLSafe.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBoneCompressionCodec_ACLSafe::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimCurveCompressionCodec_ACL.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimCurveCompressionCodec_ACL::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimCurveCompressionCodec_ACL");
		return ptr;
	}

}


