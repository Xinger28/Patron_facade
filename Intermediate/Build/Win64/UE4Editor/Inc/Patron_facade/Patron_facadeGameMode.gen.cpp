// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_facade/Patron_facadeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatron_facadeGameMode() {}
// Cross Module References
	PATRON_FACADE_API UClass* Z_Construct_UClass_APatron_facadeGameMode_NoRegister();
	PATRON_FACADE_API UClass* Z_Construct_UClass_APatron_facadeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Patron_facade();
	PATRON_FACADE_API UClass* Z_Construct_UClass_AEscuadronNaves_NoRegister();
// End Cross Module References
	void APatron_facadeGameMode::StaticRegisterNativesAPatron_facadeGameMode()
	{
	}
	UClass* Z_Construct_UClass_APatron_facadeGameMode_NoRegister()
	{
		return APatron_facadeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APatron_facadeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escuadrones_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Escuadrones;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APatron_facadeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_facade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatron_facadeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Patron_facadeGameMode.h" },
		{ "ModuleRelativePath", "Patron_facadeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatron_facadeGameMode_Statics::NewProp_Escuadrones_MetaData[] = {
		{ "Category", "Game mode" },
		{ "ModuleRelativePath", "Patron_facadeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatron_facadeGameMode_Statics::NewProp_Escuadrones = { "Escuadrones", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APatron_facadeGameMode, Escuadrones), Z_Construct_UClass_AEscuadronNaves_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APatron_facadeGameMode_Statics::NewProp_Escuadrones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APatron_facadeGameMode_Statics::NewProp_Escuadrones_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APatron_facadeGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatron_facadeGameMode_Statics::NewProp_Escuadrones,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APatron_facadeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatron_facadeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APatron_facadeGameMode_Statics::ClassParams = {
		&APatron_facadeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APatron_facadeGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APatron_facadeGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APatron_facadeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APatron_facadeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APatron_facadeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APatron_facadeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APatron_facadeGameMode, 1717718919);
	template<> PATRON_FACADE_API UClass* StaticClass<APatron_facadeGameMode>()
	{
		return APatron_facadeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APatron_facadeGameMode(Z_Construct_UClass_APatron_facadeGameMode, &APatron_facadeGameMode::StaticClass, TEXT("/Script/Patron_facade"), TEXT("APatron_facadeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatron_facadeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
