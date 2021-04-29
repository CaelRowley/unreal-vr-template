// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ValveIndexTemplate/ValveIndexTemplateGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeValveIndexTemplateGameModeBase() {}
// Cross Module References
	VALVEINDEXTEMPLATE_API UClass* Z_Construct_UClass_AValveIndexTemplateGameModeBase_NoRegister();
	VALVEINDEXTEMPLATE_API UClass* Z_Construct_UClass_AValveIndexTemplateGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ValveIndexTemplate();
// End Cross Module References
	void AValveIndexTemplateGameModeBase::StaticRegisterNativesAValveIndexTemplateGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AValveIndexTemplateGameModeBase_NoRegister()
	{
		return AValveIndexTemplateGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AValveIndexTemplateGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AValveIndexTemplateGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ValveIndexTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AValveIndexTemplateGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ValveIndexTemplateGameModeBase.h" },
		{ "ModuleRelativePath", "ValveIndexTemplateGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AValveIndexTemplateGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AValveIndexTemplateGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AValveIndexTemplateGameModeBase_Statics::ClassParams = {
		&AValveIndexTemplateGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AValveIndexTemplateGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AValveIndexTemplateGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AValveIndexTemplateGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AValveIndexTemplateGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AValveIndexTemplateGameModeBase, 3341897170);
	template<> VALVEINDEXTEMPLATE_API UClass* StaticClass<AValveIndexTemplateGameModeBase>()
	{
		return AValveIndexTemplateGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AValveIndexTemplateGameModeBase(Z_Construct_UClass_AValveIndexTemplateGameModeBase, &AValveIndexTemplateGameModeBase::StaticClass, TEXT("/Script/ValveIndexTemplate"), TEXT("AValveIndexTemplateGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AValveIndexTemplateGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
