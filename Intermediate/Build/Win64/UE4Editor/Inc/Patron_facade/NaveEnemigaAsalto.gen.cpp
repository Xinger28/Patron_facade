// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_facade/NaveEnemigaAsalto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaAsalto() {}
// Cross Module References
	PATRON_FACADE_API UClass* Z_Construct_UClass_ANaveEnemigaAsalto_NoRegister();
	PATRON_FACADE_API UClass* Z_Construct_UClass_ANaveEnemigaAsalto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Patron_facade();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveEnemigaAsalto::StaticRegisterNativesANaveEnemigaAsalto()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaAsalto_NoRegister()
	{
		return ANaveEnemigaAsalto::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaAsalto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaAsalto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_facade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaAsalto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEnemigaAsalto.h" },
		{ "ModuleRelativePath", "NaveEnemigaAsalto.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaAsalto_Statics::NewProp_MallaA_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MallaA" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnemigaAsalto.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemigaAsalto_Statics::NewProp_MallaA = { "MallaA", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaAsalto, MallaA), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaAsalto_Statics::NewProp_MallaA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaAsalto_Statics::NewProp_MallaA_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemigaAsalto_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaAsalto_Statics::NewProp_MallaA,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaAsalto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaAsalto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaAsalto_Statics::ClassParams = {
		&ANaveEnemigaAsalto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemigaAsalto_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaAsalto_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaAsalto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaAsalto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaAsalto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaAsalto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaAsalto, 874317842);
	template<> PATRON_FACADE_API UClass* StaticClass<ANaveEnemigaAsalto>()
	{
		return ANaveEnemigaAsalto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaAsalto(Z_Construct_UClass_ANaveEnemigaAsalto, &ANaveEnemigaAsalto::StaticClass, TEXT("/Script/Patron_facade"), TEXT("ANaveEnemigaAsalto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaAsalto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
