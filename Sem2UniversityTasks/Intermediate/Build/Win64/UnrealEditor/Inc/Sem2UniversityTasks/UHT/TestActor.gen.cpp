// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sem2UniversityTasks/TestActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTestActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
SEM2UNIVERSITYTASKS_API UClass* Z_Construct_UClass_ATestActor();
SEM2UNIVERSITYTASKS_API UClass* Z_Construct_UClass_ATestActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sem2UniversityTasks();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATestActor Function Greeting *********************************************
struct Z_Construct_UFunction_ATestActor_Greeting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestActor_Greeting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATestActor, nullptr, "Greeting", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestActor_Greeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestActor_Greeting_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATestActor_Greeting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestActor_Greeting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestActor::execGreeting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Greeting();
	P_NATIVE_END;
}
// ********** End Class ATestActor Function Greeting ***********************************************

// ********** Begin Class ATestActor ***************************************************************
void ATestActor::StaticRegisterNativesATestActor()
{
	UClass* Class = ATestActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Greeting", &ATestActor::execGreeting },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATestActor;
UClass* ATestActor::GetPrivateStaticClass()
{
	using TClass = ATestActor;
	if (!Z_Registration_Info_UClass_ATestActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TestActor"),
			Z_Registration_Info_UClass_ATestActor.InnerSingleton,
			StaticRegisterNativesATestActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ATestActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ATestActor_NoRegister()
{
	return ATestActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TestActor.h" },
		{ "ModuleRelativePath", "TestActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestActor_Greeting, "Greeting" }, // 2654837276
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Sem2UniversityTasks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestActor_Statics::ClassParams = {
	&ATestActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestActor()
{
	if (!Z_Registration_Info_UClass_ATestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestActor.OuterSingleton, Z_Construct_UClass_ATestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestActor);
ATestActor::~ATestActor() {}
// ********** End Class ATestActor *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Sem2UniversityTasks_Source_Sem2UniversityTasks_TestActor_h__Script_Sem2UniversityTasks_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestActor, ATestActor::StaticClass, TEXT("ATestActor"), &Z_Registration_Info_UClass_ATestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestActor), 1064802955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sem2UniversityTasks_Source_Sem2UniversityTasks_TestActor_h__Script_Sem2UniversityTasks_702438828(TEXT("/Script/Sem2UniversityTasks"),
	Z_CompiledInDeferFile_FID_Sem2UniversityTasks_Source_Sem2UniversityTasks_TestActor_h__Script_Sem2UniversityTasks_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sem2UniversityTasks_Source_Sem2UniversityTasks_TestActor_h__Script_Sem2UniversityTasks_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
