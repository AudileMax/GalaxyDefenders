// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalaxyDefenders/PlayerShip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerShip() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GALAXYDEFENDERS_API UClass* Z_Construct_UClass_APlayerShip();
GALAXYDEFENDERS_API UClass* Z_Construct_UClass_APlayerShip_NoRegister();
UPackage* Z_Construct_UPackage__Script_GalaxyDefenders();
// End Cross Module References

// Begin Class APlayerShip
void APlayerShip::StaticRegisterNativesAPlayerShip()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerShip);
UClass* Z_Construct_UClass_APlayerShip_NoRegister()
{
	return APlayerShip::StaticClass();
}
struct Z_Construct_UClass_APlayerShip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerShip.h" },
		{ "ModuleRelativePath", "PlayerShip.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerShip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerShip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GalaxyDefenders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerShip_Statics::ClassParams = {
	&APlayerShip::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerShip()
{
	if (!Z_Registration_Info_UClass_APlayerShip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerShip.OuterSingleton, Z_Construct_UClass_APlayerShip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerShip.OuterSingleton;
}
template<> GALAXYDEFENDERS_API UClass* StaticClass<APlayerShip>()
{
	return APlayerShip::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerShip);
APlayerShip::~APlayerShip() {}
// End Class APlayerShip

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_maxim_OneDrive_Documents_GitHub_GalaxyDefenders_GalaxyDefenders_Source_GalaxyDefenders_PlayerShip_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerShip, APlayerShip::StaticClass, TEXT("APlayerShip"), &Z_Registration_Info_UClass_APlayerShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerShip), 1351669779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_maxim_OneDrive_Documents_GitHub_GalaxyDefenders_GalaxyDefenders_Source_GalaxyDefenders_PlayerShip_h_2187869645(TEXT("/Script/GalaxyDefenders"),
	Z_CompiledInDeferFile_FID_Users_maxim_OneDrive_Documents_GitHub_GalaxyDefenders_GalaxyDefenders_Source_GalaxyDefenders_PlayerShip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_maxim_OneDrive_Documents_GitHub_GalaxyDefenders_GalaxyDefenders_Source_GalaxyDefenders_PlayerShip_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
