// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRTemplate/Actors/Player/Controllers/ControllerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControllerInterface() {}
// Cross Module References
	VRTEMPLATE_API UClass* Z_Construct_UClass_AControllerInterface_NoRegister();
	VRTEMPLATE_API UClass* Z_Construct_UClass_AControllerInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VRTemplate();
// End Cross Module References
	void AControllerInterface::StaticRegisterNativesAControllerInterface()
	{
	}
	UClass* Z_Construct_UClass_AControllerInterface_NoRegister()
	{
		return AControllerInterface::StaticClass();
	}
	struct Z_Construct_UClass_AControllerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControllerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VRTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Player/Controllers/ControllerInterface.h" },
		{ "ModuleRelativePath", "Actors/Player/Controllers/ControllerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControllerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControllerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AControllerInterface_Statics::ClassParams = {
		&AControllerInterface::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AControllerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AControllerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AControllerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AControllerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AControllerInterface, 3269360374);
	template<> VRTEMPLATE_API UClass* StaticClass<AControllerInterface>()
	{
		return AControllerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AControllerInterface(Z_Construct_UClass_AControllerInterface, &AControllerInterface::StaticClass, TEXT("/Script/VRTemplate"), TEXT("AControllerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControllerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
