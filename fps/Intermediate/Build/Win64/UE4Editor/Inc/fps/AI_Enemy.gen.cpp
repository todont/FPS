// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fps/AI_Enemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_Enemy() {}
// Cross Module References
	FPS_API UClass* Z_Construct_UClass_AAI_Enemy_NoRegister();
	FPS_API UClass* Z_Construct_UClass_AAI_Enemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_fps();
// End Cross Module References
	void AAI_Enemy::StaticRegisterNativesAAI_Enemy()
	{
	}
	UClass* Z_Construct_UClass_AAI_Enemy_NoRegister()
	{
		return AAI_Enemy::StaticClass();
	}
	struct Z_Construct_UClass_AAI_Enemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_Enemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_fps,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Enemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI_Enemy.h" },
		{ "ModuleRelativePath", "AI_Enemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_Enemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_Enemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_Enemy_Statics::ClassParams = {
		&AAI_Enemy::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_Enemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Enemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_Enemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_Enemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_Enemy, 2890785812);
	template<> FPS_API UClass* StaticClass<AAI_Enemy>()
	{
		return AAI_Enemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_Enemy(Z_Construct_UClass_AAI_Enemy, &AAI_Enemy::StaticClass, TEXT("/Script/fps"), TEXT("AAI_Enemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_Enemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
