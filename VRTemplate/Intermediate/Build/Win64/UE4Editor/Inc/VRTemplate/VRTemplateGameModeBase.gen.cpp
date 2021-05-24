// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRTemplate/VRTemplateGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRTemplateGameModeBase() {}
// Cross Module References
	VRTEMPLATE_API UClass* Z_Construct_UClass_AVRTemplateGameModeBase_NoRegister();
	VRTEMPLATE_API UClass* Z_Construct_UClass_AVRTemplateGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VRTemplate();
// End Cross Module References
	void AVRTemplateGameModeBase::StaticRegisterNativesAVRTemplateGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AVRTemplateGameModeBase_NoRegister()
	{
		return AVRTemplateGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AVRTemplateGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRTemplateGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRTemplateGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VRTemplateGameModeBase.h" },
		{ "ModuleRelativePath", "VRTemplateGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRTemplateGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRTemplateGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRTemplateGameModeBase_Statics::ClassParams = {
		&AVRTemplateGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVRTemplateGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRTemplateGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRTemplateGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRTemplateGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRTemplateGameModeBase, 743826137);
	template<> VRTEMPLATE_API UClass* StaticClass<AVRTemplateGameModeBase>()
	{
		return AVRTemplateGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRTemplateGameModeBase(Z_Construct_UClass_AVRTemplateGameModeBase, &AVRTemplateGameModeBase::StaticClass, TEXT("/Script/VRTemplate"), TEXT("AVRTemplateGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRTemplateGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
