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
	 * 		Name   -> PredefinedFunction UEnemyLevelAreaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnemyLevelAreaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnemyLevelArea.EnemyLevelAreaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEnemyLevelAreaManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEnemyLevelAreaManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnemyLevelArea.EnemyLevelAreaManager");
		return ptr;
	}

}


