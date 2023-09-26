#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ShaderInfoStorage_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class ShaderInfoStorageRGBA32;
}
namespace UnityEngine::UIElements::UIR {
class UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c;
}
// Type: ::<>c
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7501))
// CS Name: UnityEngine.UIElements.UIR.ShaderInfoStorageRGBA32::<>c
class CORDL_TYPE UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c(UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c(UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c& operator=(UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c& operator=(UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c value) ;

static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c __get___9() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c() ;

/// @brief Method .ctor addr 0x2d4647c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__2_0 addr 0x2d46484 size 0x2c4 virtual false final false
 UnityEngine::Color32 __cctor_b__2_0(UnityEngine::Color c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::ShaderInfoStorageRGBA32
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210)), TypeDefinitionIndex(TypeDefinitionIndex(7500)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7500), inst: 719 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7502))
// CS Name: UnityEngine.UIElements.UIR.ShaderInfoStorageRGBA32
class CORDL_TYPE ShaderInfoStorageRGBA32 : public UnityEngine::UIElements::UIR::ShaderInfoStorage_1<UnityEngine::Color32> {
public:
// Declarations
using __c = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ShaderInfoStorageRGBA32() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBA32", modifiers: " const&", def_value: None }]
constexpr ShaderInfoStorageRGBA32(ShaderInfoStorageRGBA32 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderInfoStorageRGBA32", modifiers: "&&", def_value: None }]
constexpr ShaderInfoStorageRGBA32(ShaderInfoStorageRGBA32&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShaderInfoStorageRGBA32(void* ptr) noexcept : UnityEngine::UIElements::UIR::ShaderInfoStorage_1<UnityEngine::Color32>(ptr) {
}


  constexpr ShaderInfoStorageRGBA32& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShaderInfoStorageRGBA32& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShaderInfoStorageRGBA32& operator=(ShaderInfoStorageRGBA32&& o) noexcept = default;
  constexpr ShaderInfoStorageRGBA32& operator=(ShaderInfoStorageRGBA32 const& o) noexcept = default;
                


// Fields

static System::Func_2<UnityEngine::Color,UnityEngine::Color32> __declspec(property(get=__get_s_Convert, put=__set_s_Convert))  s_Convert;

static void __set_s_Convert(System::Func_2<UnityEngine::Color,UnityEngine::Color32> value) ;

static System::Func_2<UnityEngine::Color,UnityEngine::Color32> __get_s_Convert() ;


// Methods

// Ctor Parameters [CppParam { name: "initialSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit ShaderInfoStorageRGBA32(int32_t initialSize, int32_t maxSize) ;

/// @brief Method .ctor addr 0x2d442f8 size 0x94 virtual false final false
 void _ctor(int32_t initialSize, int32_t maxSize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::ShaderInfoStorageRGBA32, "UnityEngine.UIElements.UIR", "ShaderInfoStorageRGBA32");
NEED_NO_BOX(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__ShaderInfoStorageRGBA32____c, "UnityEngine.UIElements.UIR", "ShaderInfoStorageRGBA32/<>c");
