#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
namespace HoudiniEngineUnity {
class Test_Transform;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__Test_Transform_Extensions____c;
}
namespace HoudiniEngineUnity {
class Test_Transform_Extensions;
}
// Type: ::<>c
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9868))
// CS Name: HoudiniEngineUnity.Test_Transform_Extensions::<>c
class CORDL_TYPE HoudiniEngineUnity__Test_Transform_Extensions____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__Test_Transform_Extensions____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__Test_Transform_Extensions____c", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__Test_Transform_Extensions____c(HoudiniEngineUnity__Test_Transform_Extensions____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__Test_Transform_Extensions____c", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__Test_Transform_Extensions____c(HoudiniEngineUnity__Test_Transform_Extensions____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__Test_Transform_Extensions____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__Test_Transform_Extensions____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__Test_Transform_Extensions____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__Test_Transform_Extensions____c& operator=(HoudiniEngineUnity__Test_Transform_Extensions____c&& o) noexcept = default;
  constexpr HoudiniEngineUnity__Test_Transform_Extensions____c& operator=(HoudiniEngineUnity__Test_Transform_Extensions____c const& o) noexcept = default;
                


// Fields

static HoudiniEngineUnity::HoudiniEngineUnity__Test_Transform_Extensions____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(HoudiniEngineUnity::HoudiniEngineUnity__Test_Transform_Extensions____c value) ;

static HoudiniEngineUnity::HoudiniEngineUnity__Test_Transform_Extensions____c __get___9() ;

static System::Converter_2<UnityEngine::Transform,HoudiniEngineUnity::Test_Transform> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(System::Converter_2<UnityEngine::Transform,HoudiniEngineUnity::Test_Transform> value) ;

static System::Converter_2<UnityEngine::Transform,HoudiniEngineUnity::Test_Transform> __get___9__1_0() ;

static System::Converter_2<UnityEngine::Transform,HoudiniEngineUnity::Test_Transform> __declspec(property(get=__get___9__2_0, put=__set___9__2_0))  __9__2_0;

static void __set___9__2_0(System::Converter_2<UnityEngine::Transform,HoudiniEngineUnity::Test_Transform> value) ;

static System::Converter_2<UnityEngine::Transform,HoudiniEngineUnity::Test_Transform> __get___9__2_0() ;


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__Test_Transform_Extensions____c() ;

/// @brief Method .ctor addr 0x20a9a8c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ToTestObject>b__1_0 addr 0x20a9a94 size 0x64 virtual false final false
 HoudiniEngineUnity::Test_Transform _ToTestObject_b__1_0(UnityEngine::Transform lod) ;

/// @brief Method <ToTestObject>b__2_0 addr 0x20a9af8 size 0x64 virtual false final false
 HoudiniEngineUnity::Test_Transform _ToTestObject_b__2_0(UnityEngine::Transform lod) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::Test_Transform_Extensions
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9869))
// CS Name: HoudiniEngineUnity.Test_Transform_Extensions
class CORDL_TYPE Test_Transform_Extensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = HoudiniEngineUnity::HoudiniEngineUnity__Test_Transform_Extensions____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Test_Transform_Extensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Transform_Extensions", modifiers: " const&", def_value: None }]
constexpr Test_Transform_Extensions(Test_Transform_Extensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Transform_Extensions", modifiers: "&&", def_value: None }]
constexpr Test_Transform_Extensions(Test_Transform_Extensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_Transform_Extensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_Transform_Extensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_Transform_Extensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_Transform_Extensions& operator=(Test_Transform_Extensions&& o) noexcept = default;
  constexpr Test_Transform_Extensions& operator=(Test_Transform_Extensions const& o) noexcept = default;
                


// Methods

/// @brief Method ToTestObject addr 0x20a71cc size 0x64 virtual false final false
static HoudiniEngineUnity::Test_Transform ToTestObject(UnityEngine::Transform self) ;

/// @brief Method ToTestObject addr 0x20a9834 size 0xf8 virtual false final false
static ::ArrayW<HoudiniEngineUnity::Test_Transform> ToTestObject(::ArrayW<UnityEngine::Transform> self) ;

/// @brief Method ToTestObject addr 0x20a992c size 0xfc virtual false final false
static System::Collections::Generic::List_1<HoudiniEngineUnity::Test_Transform> ToTestObject(System::Collections::Generic::List_1<UnityEngine::Transform> self) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__Test_Transform_Extensions____c);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__Test_Transform_Extensions____c, "HoudiniEngineUnity", "Test_Transform_Extensions/<>c");
NEED_NO_BOX(HoudiniEngineUnity::Test_Transform_Extensions);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_Transform_Extensions, "HoudiniEngineUnity", "Test_Transform_Extensions");
