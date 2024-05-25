// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/MovimientoNavesEnemigas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimientoNavesEnemigas() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UMovimientoNavesEnemigas_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UMovimientoNavesEnemigas();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
// End Cross Module References
	void UMovimientoNavesEnemigas::StaticRegisterNativesUMovimientoNavesEnemigas()
	{
	}
	UClass* Z_Construct_UClass_UMovimientoNavesEnemigas_NoRegister()
	{
		return UMovimientoNavesEnemigas::StaticClass();
	}
	struct Z_Construct_UClass_UMovimientoNavesEnemigas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SigMovimientoX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SigMovimientoX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimientoNavesEnemigas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimientoNavesEnemigas_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MovimientoNavesEnemigas.h" },
		{ "ModuleRelativePath", "MovimientoNavesEnemigas.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimientoNavesEnemigas_Statics::NewProp_SigMovimientoX_MetaData[] = {
		{ "Category", "MovimientoNavesEnemigas" },
		{ "ModuleRelativePath", "MovimientoNavesEnemigas.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovimientoNavesEnemigas_Statics::NewProp_SigMovimientoX = { "SigMovimientoX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovimientoNavesEnemigas, SigMovimientoX), METADATA_PARAMS(Z_Construct_UClass_UMovimientoNavesEnemigas_Statics::NewProp_SigMovimientoX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoNavesEnemigas_Statics::NewProp_SigMovimientoX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovimientoNavesEnemigas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovimientoNavesEnemigas_Statics::NewProp_SigMovimientoX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimientoNavesEnemigas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimientoNavesEnemigas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovimientoNavesEnemigas_Statics::ClassParams = {
		&UMovimientoNavesEnemigas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovimientoNavesEnemigas_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoNavesEnemigas_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovimientoNavesEnemigas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoNavesEnemigas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimientoNavesEnemigas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovimientoNavesEnemigas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovimientoNavesEnemigas, 2966176421);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<UMovimientoNavesEnemigas>()
	{
		return UMovimientoNavesEnemigas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovimientoNavesEnemigas(Z_Construct_UClass_UMovimientoNavesEnemigas, &UMovimientoNavesEnemigas::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("UMovimientoNavesEnemigas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimientoNavesEnemigas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
