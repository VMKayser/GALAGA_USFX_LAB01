// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/NaveKamikaze.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveKamikaze() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveKamikaze_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveKamikaze();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_USubscriptorEvento_NoRegister();
// End Cross Module References
	void ANaveKamikaze::StaticRegisterNativesANaveKamikaze()
	{
	}
	UClass* Z_Construct_UClass_ANaveKamikaze_NoRegister()
	{
		return ANaveKamikaze::StaticClass();
	}
	struct Z_Construct_UClass_ANaveKamikaze_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tpersecucion_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_tpersecucion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveKamikaze_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveKamikaze_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveKamikaze.h" },
		{ "ModuleRelativePath", "NaveKamikaze.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveKamikaze_Statics::NewProp_tpersecucion_MetaData[] = {
		{ "Category", "Persecucion" },
		{ "ModuleRelativePath", "NaveKamikaze.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANaveKamikaze_Statics::NewProp_tpersecucion = { "tpersecucion", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveKamikaze, tpersecucion), METADATA_PARAMS(Z_Construct_UClass_ANaveKamikaze_Statics::NewProp_tpersecucion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveKamikaze_Statics::NewProp_tpersecucion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveKamikaze_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveKamikaze_Statics::NewProp_tpersecucion,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANaveKamikaze_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USubscriptorEvento_NoRegister, (int32)VTABLE_OFFSET(ANaveKamikaze, ISubscriptorEvento), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveKamikaze_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveKamikaze>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveKamikaze_Statics::ClassParams = {
		&ANaveKamikaze::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveKamikaze_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveKamikaze_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveKamikaze_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveKamikaze_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveKamikaze()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveKamikaze_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveKamikaze, 871885342);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<ANaveKamikaze>()
	{
		return ANaveKamikaze::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveKamikaze(Z_Construct_UClass_ANaveKamikaze, &ANaveKamikaze::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("ANaveKamikaze"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveKamikaze);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
