// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ValveIndexTemplate/Actors/Player/Controllers/ControllerHand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControllerHand() {}
// Cross Module References
	VALVEINDEXTEMPLATE_API UClass* Z_Construct_UClass_AControllerHand_NoRegister();
	VALVEINDEXTEMPLATE_API UClass* Z_Construct_UClass_AControllerHand();
	VALVEINDEXTEMPLATE_API UClass* Z_Construct_UClass_AControllerInterface();
	UPackage* Z_Construct_UPackage__Script_ValveIndexTemplate();
// End Cross Module References
	void AControllerHand::StaticRegisterNativesAControllerHand()
	{
	}
	UClass* Z_Construct_UClass_AControllerHand_NoRegister()
	{
		return AControllerHand::StaticClass();
	}
	struct Z_Construct_UClass_AControllerHand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControllerHand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AControllerInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ValveIndexTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerHand_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actors/Player/Controllers/ControllerHand.h" },
		{ "ModuleRelativePath", "Actors/Player/Controllers/ControllerHand.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControllerHand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControllerHand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AControllerHand_Statics::ClassParams = {
		&AControllerHand::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AControllerHand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AControllerHand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AControllerHand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AControllerHand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AControllerHand, 473456316);
	template<> VALVEINDEXTEMPLATE_API UClass* StaticClass<AControllerHand>()
	{
		return AControllerHand::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AControllerHand(Z_Construct_UClass_AControllerHand, &AControllerHand::StaticClass, TEXT("/Script/ValveIndexTemplate"), TEXT("AControllerHand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControllerHand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
