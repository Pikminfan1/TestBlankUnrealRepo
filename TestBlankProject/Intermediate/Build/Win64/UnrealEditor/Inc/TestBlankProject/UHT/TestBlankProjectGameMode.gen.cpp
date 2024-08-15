// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestBlankProject/TestBlankProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBlankProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TESTBLANKPROJECT_API UClass* Z_Construct_UClass_ATestBlankProjectGameMode();
TESTBLANKPROJECT_API UClass* Z_Construct_UClass_ATestBlankProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestBlankProject();
// End Cross Module References

// Begin Class ATestBlankProjectGameMode
void ATestBlankProjectGameMode::StaticRegisterNativesATestBlankProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestBlankProjectGameMode);
UClass* Z_Construct_UClass_ATestBlankProjectGameMode_NoRegister()
{
	return ATestBlankProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_ATestBlankProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestBlankProjectGameMode.h" },
		{ "ModuleRelativePath", "TestBlankProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestBlankProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATestBlankProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TestBlankProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestBlankProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestBlankProjectGameMode_Statics::ClassParams = {
	&ATestBlankProjectGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestBlankProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestBlankProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestBlankProjectGameMode()
{
	if (!Z_Registration_Info_UClass_ATestBlankProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestBlankProjectGameMode.OuterSingleton, Z_Construct_UClass_ATestBlankProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestBlankProjectGameMode.OuterSingleton;
}
template<> TESTBLANKPROJECT_API UClass* StaticClass<ATestBlankProjectGameMode>()
{
	return ATestBlankProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestBlankProjectGameMode);
ATestBlankProjectGameMode::~ATestBlankProjectGameMode() {}
// End Class ATestBlankProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_catma_Desktop_My_Projects_GMTK_GameJam_Test_TestBlankUnrealRepo_TestBlankProject_Source_TestBlankProject_TestBlankProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestBlankProjectGameMode, ATestBlankProjectGameMode::StaticClass, TEXT("ATestBlankProjectGameMode"), &Z_Registration_Info_UClass_ATestBlankProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestBlankProjectGameMode), 2315788609U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_catma_Desktop_My_Projects_GMTK_GameJam_Test_TestBlankUnrealRepo_TestBlankProject_Source_TestBlankProject_TestBlankProjectGameMode_h_1752949178(TEXT("/Script/TestBlankProject"),
	Z_CompiledInDeferFile_FID_Users_catma_Desktop_My_Projects_GMTK_GameJam_Test_TestBlankUnrealRepo_TestBlankProject_Source_TestBlankProject_TestBlankProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_catma_Desktop_My_Projects_GMTK_GameJam_Test_TestBlankUnrealRepo_TestBlankProject_Source_TestBlankProject_TestBlankProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
