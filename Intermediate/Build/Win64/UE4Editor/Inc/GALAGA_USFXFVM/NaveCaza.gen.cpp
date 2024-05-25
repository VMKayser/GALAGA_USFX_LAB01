// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/NaveCaza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveCaza() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveCaza_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveCaza();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
// End Cross Module References
	void ANaveCaza::StaticRegisterNativesANaveCaza()
	{
	}
	UClass* Z_Construct_UClass_ANaveCaza_NoRegister()
	{
		return ANaveCaza::StaticClass();
	}
	struct Z_Construct_UClass_ANaveCaza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_plusFormacion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_plusFormacion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveCaza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveCaza_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveCaza.h" },
		{ "ModuleRelativePath", "NaveCaza.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveCaza_Statics::NewProp_plusFormacion_MetaData[] = {
		{ "Category", "plusFormacion" },
		{ "Comment", "//quiero que plusformacion se vea en el editor de unreal\n" },
		{ "ModuleRelativePath", "NaveCaza.h" },
		{ "ToolTip", "quiero que plusformacion se vea en el editor de unreal" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveCaza_Statics::NewProp_plusFormacion = { "plusFormacion", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveCaza, plusFormacion), METADATA_PARAMS(Z_Construct_UClass_ANaveCaza_Statics::NewProp_plusFormacion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveCaza_Statics::NewProp_plusFormacion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveCaza_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveCaza_Statics::NewProp_plusFormacion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveCaza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveCaza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveCaza_Statics::ClassParams = {
		&ANaveCaza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveCaza_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveCaza_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveCaza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveCaza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveCaza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveCaza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveCaza, 2222620181);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<ANaveCaza>()
	{
		return ANaveCaza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveCaza(Z_Construct_UClass_ANaveCaza, &ANaveCaza::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("ANaveCaza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveCaza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
