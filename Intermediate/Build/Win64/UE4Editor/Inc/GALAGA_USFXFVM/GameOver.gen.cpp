// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/GameOver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOver() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UGameOver_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UGameOver();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
// End Cross Module References
	DEFINE_FUNCTION(UGameOver::execReiniciarJuego)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReiniciarJuego();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameOver::execVolverAlMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VolverAlMenu();
		P_NATIVE_END;
	}
	void UGameOver::StaticRegisterNativesUGameOver()
	{
		UClass* Class = UGameOver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReiniciarJuego", &UGameOver::execReiniciarJuego },
			{ "VolverAlMenu", &UGameOver::execVolverAlMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameOver_ReiniciarJuego_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameOver_ReiniciarJuego_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Over" },
		{ "ModuleRelativePath", "GameOver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOver_ReiniciarJuego_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOver, nullptr, "ReiniciarJuego", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameOver_ReiniciarJuego_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOver_ReiniciarJuego_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameOver_ReiniciarJuego()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameOver_ReiniciarJuego_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameOver_VolverAlMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameOver_VolverAlMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Over" },
		{ "ModuleRelativePath", "GameOver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOver_VolverAlMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOver, nullptr, "VolverAlMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameOver_VolverAlMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOver_VolverAlMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameOver_VolverAlMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameOver_VolverAlMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameOver_NoRegister()
	{
		return UGameOver::StaticClass();
	}
	struct Z_Construct_UClass_UGameOver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameOver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameOver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameOver_ReiniciarJuego, "ReiniciarJuego" }, // 2113621431
		{ &Z_Construct_UFunction_UGameOver_VolverAlMenu, "VolverAlMenu" }, // 4013349361
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameOver.h" },
		{ "ModuleRelativePath", "GameOver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameOver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameOver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameOver_Statics::ClassParams = {
		&UGameOver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameOver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameOver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameOver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameOver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameOver, 604726778);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<UGameOver>()
	{
		return UGameOver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameOver(Z_Construct_UClass_UGameOver, &UGameOver::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("UGameOver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameOver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
