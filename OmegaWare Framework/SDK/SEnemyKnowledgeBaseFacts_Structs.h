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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct SEnemyKnowledgeBaseFacts.SEnemyKnowledgeBaseFacts
	 * Size -> 0x0030
	 */
	struct FSEnemyKnowledgeBaseFacts
	{
	public:
		TArray<struct FKnowledgeBaseFactKey>                       GroupSpecificFacts_44_B19F9C844EE540FDD1239A92BFFA7DBF;  // 0x0000(0x0010) Edit, BlueprintVisible
		TArray<struct FKnowledgeBaseFactKey>                       ArchetypeSpecificFacts_47_83AA095E4E155A36C6902BB50A548823; // 0x0010(0x0010) Edit, BlueprintVisible
		TArray<struct FKnowledgeBaseFactKey>                       SubArchetypeSpecificFacts_48_8AC55842499A078DAD38A7BC3647461E; // 0x0020(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
