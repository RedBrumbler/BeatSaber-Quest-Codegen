#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct jvalue;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJNISafe;
}
// Type: UnityEngine::AndroidJNISafe
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14895))
// CS Name: UnityEngine.AndroidJNISafe
class CORDL_TYPE AndroidJNISafe : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AndroidJNISafe() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNISafe", modifiers: " const&", def_value: None }]
constexpr AndroidJNISafe(AndroidJNISafe const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNISafe", modifiers: "&&", def_value: None }]
constexpr AndroidJNISafe(AndroidJNISafe&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidJNISafe(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AndroidJNISafe& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidJNISafe& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidJNISafe& operator=(AndroidJNISafe&& o) noexcept = default;
  constexpr AndroidJNISafe& operator=(AndroidJNISafe const& o) noexcept = default;
                


// Methods

/// @brief Method CheckException addr 0x2b3a038 size 0x358 virtual false final false
static void CheckException() ;

/// @brief Method DeleteGlobalRef addr 0x2b3a5e0 size 0x8c virtual false final false
static void DeleteGlobalRef(::cordl_internals::intptr_t globalref) ;

/// @brief Method DeleteWeakGlobalRef addr 0x2b3a6a8 size 0x8c virtual false final false
static void DeleteWeakGlobalRef(::cordl_internals::intptr_t globalref) ;

/// @brief Method DeleteLocalRef addr 0x2b3a770 size 0x8c virtual false final false
static void DeleteLocalRef(::cordl_internals::intptr_t localref) ;

/// @brief Method NewString addr 0x2b3a838 size 0xa0 virtual false final false
static ::cordl_internals::intptr_t NewString(::StringW chars) ;

/// @brief Method GetStringChars addr 0x2b3a914 size 0xa0 virtual false final false
static ::StringW GetStringChars(::cordl_internals::intptr_t str) ;

/// @brief Method GetObjectClass addr 0x2b3a9f0 size 0xa0 virtual false final false
static ::cordl_internals::intptr_t GetObjectClass(::cordl_internals::intptr_t ptr) ;

/// @brief Method GetStaticMethodID addr 0x2b3aacc size 0xb8 virtual false final false
static ::cordl_internals::intptr_t GetStaticMethodID(::cordl_internals::intptr_t clazz, ::StringW name, ::StringW sig) ;

/// @brief Method GetMethodID addr 0x2b3ab84 size 0xb8 virtual false final false
static ::cordl_internals::intptr_t GetMethodID(::cordl_internals::intptr_t obj, ::StringW name, ::StringW sig) ;

/// @brief Method GetFieldID addr 0x2b3ac3c size 0xb8 virtual false final false
static ::cordl_internals::intptr_t GetFieldID(::cordl_internals::intptr_t clazz, ::StringW name, ::StringW sig) ;

/// @brief Method GetStaticFieldID addr 0x2b3ad48 size 0xb8 virtual false final false
static ::cordl_internals::intptr_t GetStaticFieldID(::cordl_internals::intptr_t clazz, ::StringW name, ::StringW sig) ;

/// @brief Method FromReflectedMethod addr 0x2b3ae54 size 0xa0 virtual false final false
static ::cordl_internals::intptr_t FromReflectedMethod(::cordl_internals::intptr_t refMethod) ;

/// @brief Method FindClass addr 0x2b3af30 size 0xa0 virtual false final false
static ::cordl_internals::intptr_t FindClass(::StringW name) ;

/// @brief Method NewObject addr 0x2b3afd0 size 0xb8 virtual false final false
static ::cordl_internals::intptr_t NewObject(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method SetStaticObjectField addr 0x2b3b0dc size 0xbc virtual false final false
static void SetStaticObjectField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, ::cordl_internals::intptr_t val) ;

/// @brief Method SetStaticStringField addr 0x2b3b1ec size 0xbc virtual false final false
static void SetStaticStringField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, ::StringW val) ;

/// @brief Method SetStaticCharField addr 0x2b3b2fc size 0xbc virtual false final false
static void SetStaticCharField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, char16_t val) ;

/// @brief Method SetStaticDoubleField addr 0x2b3b40c size 0xbc virtual false final false
static void SetStaticDoubleField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, double_t val) ;

/// @brief Method SetStaticFloatField addr 0x2b3b51c size 0xbc virtual false final false
static void SetStaticFloatField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, float_t val) ;

/// @brief Method SetStaticLongField addr 0x2b3b62c size 0xbc virtual false final false
static void SetStaticLongField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, int64_t val) ;

/// @brief Method SetStaticShortField addr 0x2b3b73c size 0xbc virtual false final false
static void SetStaticShortField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, int16_t val) ;

/// @brief Method SetStaticSByteField addr 0x2b3b84c size 0xbc virtual false final false
static void SetStaticSByteField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, int8_t val) ;

/// @brief Method SetStaticBooleanField addr 0x2b3b95c size 0xbc virtual false final false
static void SetStaticBooleanField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, bool val) ;

/// @brief Method SetStaticIntField addr 0x2b3ba6c size 0xbc virtual false final false
static void SetStaticIntField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID, int32_t val) ;

/// @brief Method GetStaticObjectField addr 0x2b3bb7c size 0xa8 virtual false final false
static ::cordl_internals::intptr_t GetStaticObjectField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticStringField addr 0x2b3bc68 size 0xa8 virtual false final false
static ::StringW GetStaticStringField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticCharField addr 0x2b3bd54 size 0xa8 virtual false final false
static char16_t GetStaticCharField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticDoubleField addr 0x2b3be40 size 0xb4 virtual false final false
static double_t GetStaticDoubleField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticFloatField addr 0x2b3bf38 size 0xb4 virtual false final false
static float_t GetStaticFloatField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticLongField addr 0x2b3c030 size 0xa8 virtual false final false
static int64_t GetStaticLongField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticShortField addr 0x2b3c11c size 0xa8 virtual false final false
static int16_t GetStaticShortField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticSByteField addr 0x2b3c208 size 0xa8 virtual false final false
static int8_t GetStaticSByteField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticBooleanField addr 0x2b3c2f4 size 0xa8 virtual false final false
static bool GetStaticBooleanField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStaticIntField addr 0x2b3c3e0 size 0xa8 virtual false final false
static int32_t GetStaticIntField(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method CallStaticVoidMethod addr 0x2b3c4cc size 0xbc virtual false final false
static void CallStaticVoidMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticObjectMethod addr 0x2b3c5dc size 0xb8 virtual false final false
static ::cordl_internals::intptr_t CallStaticObjectMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticStringMethod addr 0x2b3c6e8 size 0xb8 virtual false final false
static ::StringW CallStaticStringMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticCharMethod addr 0x2b3c7a0 size 0xb8 virtual false final false
static char16_t CallStaticCharMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticDoubleMethod addr 0x2b3c8ac size 0xc4 virtual false final false
static double_t CallStaticDoubleMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticFloatMethod addr 0x2b3c9c4 size 0xc4 virtual false final false
static float_t CallStaticFloatMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticLongMethod addr 0x2b3cadc size 0xb8 virtual false final false
static int64_t CallStaticLongMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticShortMethod addr 0x2b3cbe8 size 0xb8 virtual false final false
static int16_t CallStaticShortMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticSByteMethod addr 0x2b3ccf4 size 0xb8 virtual false final false
static int8_t CallStaticSByteMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticBooleanMethod addr 0x2b3ce00 size 0xb8 virtual false final false
static bool CallStaticBooleanMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStaticIntMethod addr 0x2b3cf0c size 0xb8 virtual false final false
static int32_t CallStaticIntMethod(::cordl_internals::intptr_t clazz, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method SetObjectField addr 0x2b3d018 size 0xbc virtual false final false
static void SetObjectField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, ::cordl_internals::intptr_t val) ;

/// @brief Method SetStringField addr 0x2b3d128 size 0xbc virtual false final false
static void SetStringField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, ::StringW val) ;

/// @brief Method SetCharField addr 0x2b3d238 size 0xbc virtual false final false
static void SetCharField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, char16_t val) ;

/// @brief Method SetDoubleField addr 0x2b3d348 size 0xbc virtual false final false
static void SetDoubleField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, double_t val) ;

/// @brief Method SetFloatField addr 0x2b3d458 size 0xbc virtual false final false
static void SetFloatField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, float_t val) ;

/// @brief Method SetLongField addr 0x2b3d568 size 0xbc virtual false final false
static void SetLongField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, int64_t val) ;

/// @brief Method SetShortField addr 0x2b3d678 size 0xbc virtual false final false
static void SetShortField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, int16_t val) ;

/// @brief Method SetSByteField addr 0x2b3d788 size 0xbc virtual false final false
static void SetSByteField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, int8_t val) ;

/// @brief Method SetBooleanField addr 0x2b3d898 size 0xbc virtual false final false
static void SetBooleanField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, bool val) ;

/// @brief Method SetIntField addr 0x2b3d9a8 size 0xbc virtual false final false
static void SetIntField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID, int32_t val) ;

/// @brief Method GetObjectField addr 0x2b3dab8 size 0xa8 virtual false final false
static ::cordl_internals::intptr_t GetObjectField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetStringField addr 0x2b3dba4 size 0xa8 virtual false final false
static ::StringW GetStringField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetCharField addr 0x2b3dc90 size 0xa8 virtual false final false
static char16_t GetCharField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetDoubleField addr 0x2b3dd7c size 0xb4 virtual false final false
static double_t GetDoubleField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetFloatField addr 0x2b3de74 size 0xb4 virtual false final false
static float_t GetFloatField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetLongField addr 0x2b3df6c size 0xa8 virtual false final false
static int64_t GetLongField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetShortField addr 0x2b3e058 size 0xa8 virtual false final false
static int16_t GetShortField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetSByteField addr 0x2b3e144 size 0xa8 virtual false final false
static int8_t GetSByteField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetBooleanField addr 0x2b3e230 size 0xa8 virtual false final false
static bool GetBooleanField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method GetIntField addr 0x2b3e31c size 0xa8 virtual false final false
static int32_t GetIntField(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t fieldID) ;

/// @brief Method CallVoidMethod addr 0x2b3e408 size 0xbc virtual false final false
static void CallVoidMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallObjectMethod addr 0x2b3e518 size 0xb8 virtual false final false
static ::cordl_internals::intptr_t CallObjectMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallStringMethod addr 0x2b3e624 size 0xb8 virtual false final false
static ::StringW CallStringMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallCharMethod addr 0x2b3e6dc size 0xb8 virtual false final false
static char16_t CallCharMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallDoubleMethod addr 0x2b3e7e8 size 0xc4 virtual false final false
static double_t CallDoubleMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallFloatMethod addr 0x2b3e900 size 0xc4 virtual false final false
static float_t CallFloatMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallLongMethod addr 0x2b3ea18 size 0xb8 virtual false final false
static int64_t CallLongMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallShortMethod addr 0x2b3eb24 size 0xb8 virtual false final false
static int16_t CallShortMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallSByteMethod addr 0x2b3ec30 size 0xb8 virtual false final false
static int8_t CallSByteMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallBooleanMethod addr 0x2b3ed3c size 0xb8 virtual false final false
static bool CallBooleanMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method CallIntMethod addr 0x2b3ee48 size 0xb8 virtual false final false
static int32_t CallIntMethod(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t methodID, ::ArrayW<UnityEngine::jvalue> args) ;

/// @brief Method FromCharArray addr 0x2b3ef54 size 0xa0 virtual false final false
static ::ArrayW<char16_t> FromCharArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromDoubleArray addr 0x2b3f030 size 0xa0 virtual false final false
static ::ArrayW<double_t> FromDoubleArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromFloatArray addr 0x2b3f10c size 0xa0 virtual false final false
static ::ArrayW<float_t> FromFloatArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromLongArray addr 0x2b3f1e8 size 0xa0 virtual false final false
static ::ArrayW<int64_t> FromLongArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromShortArray addr 0x2b3f2c4 size 0xa0 virtual false final false
static ::ArrayW<int16_t> FromShortArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromByteArray addr 0x2b3f3a0 size 0xa0 virtual false final false
static ::ArrayW<uint8_t> FromByteArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromSByteArray addr 0x2b3f47c size 0xa0 virtual false final false
static ::ArrayW<int8_t> FromSByteArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromBooleanArray addr 0x2b3f558 size 0xa0 virtual false final false
static ::ArrayW<bool> FromBooleanArray(::cordl_internals::intptr_t array) ;

/// @brief Method FromIntArray addr 0x2b3f634 size 0xa0 virtual false final false
static ::ArrayW<int32_t> FromIntArray(::cordl_internals::intptr_t array) ;

/// @brief Method ToObjectArray addr 0x2b3f710 size 0xa8 virtual false final false
static ::cordl_internals::intptr_t ToObjectArray(::ArrayW<::cordl_internals::intptr_t> array, ::cordl_internals::intptr_t type) ;

/// @brief Method ToCharArray addr 0x2b3f7fc size 0xa0 virtual false final false
static ::cordl_internals::intptr_t ToCharArray(::ArrayW<char16_t> array) ;

/// @brief Method ToDoubleArray addr 0x2b3f8d8 size 0xa0 virtual false final false
static ::cordl_internals::intptr_t ToDoubleArray(::ArrayW<double_t> array) ;

/// @brief Method ToFloatArray addr 0x2b3f9b4 size 0xa0 virtual false final false
static ::cordl_internals::intptr_t ToFloatArray(::ArrayW<float_t> array) ;

/// @brief Method ToLongArray addr 0x2b3fa90 size 0xa0 virtual false final false
static ::cordl_internals::intptr_t ToLongArray(::ArrayW<int64_t> array) ;

/// @brief Method ToShortArray addr 0x2b3fb6c size 0xa0 virtual false final false
static ::cordl_internals::intptr_t ToShortArray(::ArrayW<int16_t> array) ;

/// @brief Method ToByteArray addr 0x2b3fc48 size 0xa0 virtual false final false
static ::cordl_internals::intptr_t ToByteArray(::ArrayW<uint8_t> array) ;

/// @brief Method ToSByteArray addr 0x2b3fd24 size 0xa0 virtual false final false
static ::cordl_internals::intptr_t ToSByteArray(::ArrayW<int8_t> array) ;

/// @brief Method ToBooleanArray addr 0x2b3fe00 size 0xa0 virtual false final false
static ::cordl_internals::intptr_t ToBooleanArray(::ArrayW<bool> array) ;

/// @brief Method ToIntArray addr 0x2b3fedc size 0xa0 virtual false final false
static ::cordl_internals::intptr_t ToIntArray(::ArrayW<int32_t> array) ;

/// @brief Method GetObjectArrayElement addr 0x2b3ffb8 size 0xa8 virtual false final false
static ::cordl_internals::intptr_t GetObjectArrayElement(::cordl_internals::intptr_t array, int32_t index) ;

/// @brief Method GetArrayLength addr 0x2b400a4 size 0xa0 virtual false final false
static int32_t GetArrayLength(::cordl_internals::intptr_t array) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AndroidJNISafe);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJNISafe, "UnityEngine", "AndroidJNISafe");
