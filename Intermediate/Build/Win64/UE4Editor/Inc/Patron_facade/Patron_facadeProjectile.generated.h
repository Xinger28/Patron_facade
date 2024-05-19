// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PATRON_FACADE_Patron_facadeProjectile_generated_h
#error "Patron_facadeProjectile.generated.h already included, missing '#pragma once' in Patron_facadeProjectile.h"
#endif
#define PATRON_FACADE_Patron_facadeProjectile_generated_h

#define Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_SPARSE_DATA
#define Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPatron_facadeProjectile(); \
	friend struct Z_Construct_UClass_APatron_facadeProjectile_Statics; \
public: \
	DECLARE_CLASS(APatron_facadeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Patron_facade"), NO_API) \
	DECLARE_SERIALIZER(APatron_facadeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPatron_facadeProjectile(); \
	friend struct Z_Construct_UClass_APatron_facadeProjectile_Statics; \
public: \
	DECLARE_CLASS(APatron_facadeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Patron_facade"), NO_API) \
	DECLARE_SERIALIZER(APatron_facadeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APatron_facadeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APatron_facadeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APatron_facadeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APatron_facadeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APatron_facadeProjectile(APatron_facadeProjectile&&); \
	NO_API APatron_facadeProjectile(const APatron_facadeProjectile&); \
public:


#define Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APatron_facadeProjectile(APatron_facadeProjectile&&); \
	NO_API APatron_facadeProjectile(const APatron_facadeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APatron_facadeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APatron_facadeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APatron_facadeProjectile)


#define Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(APatron_facadeProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APatron_facadeProjectile, ProjectileMovement); }


#define Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_12_PROLOG
#define Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_SPARSE_DATA \
	Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_RPC_WRAPPERS \
	Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_INCLASS \
	Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_SPARSE_DATA \
	Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATRON_FACADE_API UClass* StaticClass<class APatron_facadeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Patron_facade_Source_Patron_facade_Patron_facadeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
