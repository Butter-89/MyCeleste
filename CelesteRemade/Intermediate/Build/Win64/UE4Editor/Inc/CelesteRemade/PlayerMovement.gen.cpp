// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CelesteRemade/PlayerMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMovement() {}
// Cross Module References
	CELESTEREMADE_API UClass* Z_Construct_UClass_UPlayerMovement_NoRegister();
	CELESTEREMADE_API UClass* Z_Construct_UClass_UPlayerMovement();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CelesteRemade();
// End Cross Module References
	void UPlayerMovement::StaticRegisterNativesUPlayerMovement()
	{
	}
	UClass* Z_Construct_UClass_UPlayerMovement_NoRegister()
	{
		return UPlayerMovement::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CelesteRemade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMovement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerMovement.h" },
		{ "ModuleRelativePath", "PlayerMovement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMovement_Statics::ClassParams = {
		&UPlayerMovement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerMovement_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayerMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerMovement, 4106893546);
	template<> CELESTEREMADE_API UClass* StaticClass<UPlayerMovement>()
	{
		return UPlayerMovement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerMovement(Z_Construct_UClass_UPlayerMovement, &UPlayerMovement::StaticClass, TEXT("/Script/CelesteRemade"), TEXT("UPlayerMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
