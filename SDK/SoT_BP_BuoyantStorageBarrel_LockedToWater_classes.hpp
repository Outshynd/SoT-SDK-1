#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BuoyantStorageBarrel_LockedToWater_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C
// 0x0020 (0x0748 - 0x0728)
class ABP_BuoyantStorageBarrel_LockedToWater_C : public ABuoyantStorageContainer
{
public:
	class USphereComponent*                            Sphere;                                                   // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UReplenishableComponent*                     Replenishable;                                            // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTelemetrySubjectComponent*                  TelemetrySubject;                                         // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainer;                                         // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
