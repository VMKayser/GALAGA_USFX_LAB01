// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/GALAGA_USFXFVMGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGALAGA_USFXFVMGameMode() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AGALAGA_USFXFVMGameMode_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AGALAGA_USFXFVMGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
// End Cross Module References
	void AGALAGA_USFXFVMGameMode::StaticRegisterNativesAGALAGA_USFXFVMGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGALAGA_USFXFVMGameMode_NoRegister()
	{
		return AGALAGA_USFXFVMGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGALAGA_USFXFVMGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGALAGA_USFXFVMGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALAGA_USFXFVMGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GALAGA_USFXFVMGameMode.h" },
		{ "ModuleRelativePath", "GALAGA_USFXFVMGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGALAGA_USFXFVMGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGALAGA_USFXFVMGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGALAGA_USFXFVMGameMode_Statics::ClassParams = {
		&AGALAGA_USFXFVMGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGALAGA_USFXFVMGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGALAGA_USFXFVMGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGALAGA_USFXFVMGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGALAGA_USFXFVMGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGALAGA_USFXFVMGameMode, 1158727458);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<AGALAGA_USFXFVMGameMode>()
	{
		return AGALAGA_USFXFVMGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGALAGA_USFXFVMGameMode(Z_Construct_UClass_AGALAGA_USFXFVMGameMode, &AGALAGA_USFXFVMGameMode::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("AGALAGA_USFXFVMGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGALAGA_USFXFVMGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
