#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HumanoidActionStateCreatorDefinition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HumanoidActionStateCreatorDefinition.BP_HumanoidActionStateCreatorDefinition_C
// 0x0008 (0x0838 - 0x0830)
class ABP_HumanoidActionStateCreatorDefinition_C : public AHumanoidActionStateCreatorDefinition
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_HumanoidActionStateCreatorDefinition.BP_HumanoidActionStateCreatorDefinition_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif