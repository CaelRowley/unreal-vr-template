// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ValveIndexTemplate/Actors/Player/Controllers/ControllerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControllerInterface() {}
// Cross Module References
	VALVEINDEXTEMPLATE_API UClass* Z_Construct_UClass_AControllerInterface_NoRegister();
	VALVEINDEXTEMPLATE_API UClass* Z_Construct_UClass_AControllerInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ValveIndexTemplate();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControllerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ValveIndexTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Player/Controllers/ControllerInterface.h" },
		{ "ModuleRelativePath", "Actors/Player/Controllers/ControllerInterface.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerInterface_Statics::NewProp_MotionController_MetaData[] = {
		{ "Category", "ControllerInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Player/Controllers/ControllerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControllerInterface_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AControllerInterface, MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControllerInterface_Statics::NewProp_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControllerInterface_Statics::NewProp_MotionController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AControllerInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControllerInterface_Statics::NewProp_MotionController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControllerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControllerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AControllerInterface_Statics::ClassParams = {
		&AControllerInterface::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AControllerInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AControllerInterface_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AControllerInterface, 1307081707);
	template<> VALVEINDEXTEMPLATE_API UClass* StaticClass<AControllerInterface>()
	{
		return AControllerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AControllerInterface(Z_Construct_UClass_AControllerInterface, &AControllerInterface::StaticClass, TEXT("/Script/ValveIndexTemplate"), TEXT("AControllerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControllerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
