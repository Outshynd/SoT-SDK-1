#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AthenaObjectLinkage.EAddLinkResult
enum class EAddLinkResult : uint8_t
{
	EAddLinkResult__Success_Set    = 0,
	None                           = 1,
	EAddLinkResult__Failed_CoincidentEndpointIds = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum AthenaObjectLinkage.EAddEndpointResult
enum class EAddEndpointResult : uint8_t
{
	EAddEndpointResult__Success    = 0,
	None                           = 1,
	EAddEndpointResult__Failed_DoesntImplementEndpointInterface = 2,
	None01                         = 3,
	EPetDangerHearingResponseType__RunAway = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaObjectLinkage.LinkEndpointId
// 0x0008
struct FLinkEndpointId
{
	struct FName                                       Raw;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
