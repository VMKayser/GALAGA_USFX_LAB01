// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/Escudos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscudos() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AEscudos_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AEscudos();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEscudos::StaticRegisterNativesAEscudos()
	{
	}
	UClass* Z_Construct_UClass_AEscudos_NoRegister()
	{
		return AEscudos::StaticClass();
	}
	struct Z_Construct_UClass_AEscudos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaEscudo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaEscudo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscudos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudos_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Escudos.h" },
		{ "ModuleRelativePath", "Escudos.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudos_Statics::NewProp_mallaEscudo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Escudo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Escudos.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscudos_Statics::NewProp_mallaEscudo = { "mallaEscudo", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEscudos, mallaEscudo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscudos_Statics::NewProp_mallaEscudo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudos_Statics::NewProp_mallaEscudo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscudos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscudos_Statics::NewProp_mallaEscudo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscudos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscudos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscudos_Statics::ClassParams = {
		&AEscudos::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEscudos_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEscudos_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AEscudos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscudos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscudos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscudos, 582426653);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<AEscudos>()
	{
		return AEscudos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscudos(Z_Construct_UClass_AEscudos, &AEscudos::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("AEscudos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscudos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
