// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/MenuGamemode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuGamemode() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AMenuGamemode_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AMenuGamemode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AMenuGamemode::StaticRegisterNativesAMenuGamemode()
	{
	}
	UClass* Z_Construct_UClass_AMenuGamemode_NoRegister()
	{
		return AMenuGamemode::StaticClass();
	}
	struct Z_Construct_UClass_AMenuGamemode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MainMenuWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMenuGamemode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenuGamemode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MenuGamemode.h" },
		{ "ModuleRelativePath", "MenuGamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenuGamemode_Statics::NewProp_MainMenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MenuGamemode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMenuGamemode_Statics::NewProp_MainMenuWidgetClass = { "MainMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMenuGamemode, MainMenuWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMenuGamemode_Statics::NewProp_MainMenuWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMenuGamemode_Statics::NewProp_MainMenuWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMenuGamemode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMenuGamemode_Statics::NewProp_MainMenuWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMenuGamemode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMenuGamemode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMenuGamemode_Statics::ClassParams = {
		&AMenuGamemode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMenuGamemode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMenuGamemode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMenuGamemode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMenuGamemode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMenuGamemode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMenuGamemode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMenuGamemode, 1255056721);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<AMenuGamemode>()
	{
		return AMenuGamemode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMenuGamemode(Z_Construct_UClass_AMenuGamemode, &AMenuGamemode::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("AMenuGamemode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuGamemode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
