// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/NaveNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveNodriza() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveNodriza_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveNodriza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UPlanoNaveNodriza_NoRegister();
// End Cross Module References
	void ANaveNodriza::StaticRegisterNativesANaveNodriza()
	{
	}
	UClass* Z_Construct_UClass_ANaveNodriza_NoRegister()
	{
		return ANaveNodriza::StaticClass();
	}
	struct Z_Construct_UClass_ANaveNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaNaveNodriza_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaNaveNodriza;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveNodriza.h" },
		{ "ModuleRelativePath", "NaveNodriza.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveNodriza_Statics::NewProp_mallaNaveNodriza_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveNodriza.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveNodriza_Statics::NewProp_mallaNaveNodriza = { "mallaNaveNodriza", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveNodriza, mallaNaveNodriza), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveNodriza_Statics::NewProp_mallaNaveNodriza_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveNodriza_Statics::NewProp_mallaNaveNodriza_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveNodriza_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveNodriza_Statics::NewProp_mallaNaveNodriza,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANaveNodriza_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlanoNaveNodriza_NoRegister, (int32)VTABLE_OFFSET(ANaveNodriza, IPlanoNaveNodriza), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveNodriza_Statics::ClassParams = {
		&ANaveNodriza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveNodriza_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveNodriza_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveNodriza, 1058698856);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<ANaveNodriza>()
	{
		return ANaveNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveNodriza(Z_Construct_UClass_ANaveNodriza, &ANaveNodriza::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("ANaveNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
