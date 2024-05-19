// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_facade/NaveEnemigaFantasma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaFantasma() {}
// Cross Module References
	PATRON_FACADE_API UClass* Z_Construct_UClass_ANaveEnemigaFantasma_NoRegister();
	PATRON_FACADE_API UClass* Z_Construct_UClass_ANaveEnemigaFantasma();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Patron_facade();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveEnemigaFantasma::StaticRegisterNativesANaveEnemigaFantasma()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaFantasma_NoRegister()
	{
		return ANaveEnemigaFantasma::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaFantasma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaF_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaF;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaFantasma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_facade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaFantasma_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEnemigaFantasma.h" },
		{ "ModuleRelativePath", "NaveEnemigaFantasma.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaFantasma_Statics::NewProp_MallaF_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MallaF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnemigaFantasma.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemigaFantasma_Statics::NewProp_MallaF = { "MallaF", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaFantasma, MallaF), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaFantasma_Statics::NewProp_MallaF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaFantasma_Statics::NewProp_MallaF_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemigaFantasma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaFantasma_Statics::NewProp_MallaF,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaFantasma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaFantasma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaFantasma_Statics::ClassParams = {
		&ANaveEnemigaFantasma::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemigaFantasma_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaFantasma_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaFantasma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaFantasma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaFantasma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaFantasma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaFantasma, 4196202146);
	template<> PATRON_FACADE_API UClass* StaticClass<ANaveEnemigaFantasma>()
	{
		return ANaveEnemigaFantasma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaFantasma(Z_Construct_UClass_ANaveEnemigaFantasma, &ANaveEnemigaFantasma::StaticClass, TEXT("/Script/Patron_facade"), TEXT("ANaveEnemigaFantasma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaFantasma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
