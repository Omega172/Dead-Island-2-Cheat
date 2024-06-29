/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
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
	 * 		Name   -> PredefinedFunction URigidBodyAnimData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URigidBodyAnimData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProceduralAnimationNodes.RigidBodyAnimData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URigidBodyAnimDataUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URigidBodyAnimDataUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProceduralAnimationNodes.RigidBodyAnimDataUserData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmartBoneDriver_BoneDrivenControllerItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmartBoneDriver_BoneDrivenControllerItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProceduralAnimationNodes.SmartBoneDriver_BoneDrivenControllerItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmartBoneDriver_ConeReaderItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmartBoneDriver_ConeReaderItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProceduralAnimationNodes.SmartBoneDriver_ConeReaderItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmartBoneDriver_BlenderItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmartBoneDriver_BlenderItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProceduralAnimationNodes.SmartBoneDriver_BlenderItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmartBoneDriver_TwistItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmartBoneDriver_TwistItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProceduralAnimationNodes.SmartBoneDriver_TwistItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmartBoneDriverAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmartBoneDriverAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProceduralAnimationNodes.SmartBoneDriverAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmartBoneDriverUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmartBoneDriverUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProceduralAnimationNodes.SmartBoneDriverUserData");
		return ptr;
	}

}


