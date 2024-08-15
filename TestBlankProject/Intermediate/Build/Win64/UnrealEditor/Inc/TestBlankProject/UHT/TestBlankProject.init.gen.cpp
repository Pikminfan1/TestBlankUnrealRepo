// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBlankProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestBlankProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestBlankProject()
	{
		if (!Z_Registration_Info_UPackage__Script_TestBlankProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestBlankProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xA3EDDBF9,
				0x6DBA214F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestBlankProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestBlankProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestBlankProject(Z_Construct_UPackage__Script_TestBlankProject, TEXT("/Script/TestBlankProject"), Z_Registration_Info_UPackage__Script_TestBlankProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA3EDDBF9, 0x6DBA214F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
