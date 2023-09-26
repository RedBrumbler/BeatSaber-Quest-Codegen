#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientRemap_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UIElements::UIR {
class GradientRemap;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class GradientRemapPool;
}
namespace UnityEngine::UIElements::UIR {
class UnityEngine__UIElements__UIR__GradientRemapPool____c;
}
// Type: ::<>c
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7539))
// CS Name: UnityEngine.UIElements.UIR.GradientRemapPool::<>c
class CORDL_TYPE UnityEngine__UIElements__UIR__GradientRemapPool____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UIElements__UIR__GradientRemapPool____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__GradientRemapPool____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__GradientRemapPool____c(UnityEngine__UIElements__UIR__GradientRemapPool____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__GradientRemapPool____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__GradientRemapPool____c(UnityEngine__UIElements__UIR__GradientRemapPool____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__GradientRemapPool____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__UIR__GradientRemapPool____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__GradientRemapPool____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__GradientRemapPool____c& operator=(UnityEngine__UIElements__UIR__GradientRemapPool____c&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIR__GradientRemapPool____c& operator=(UnityEngine__UIElements__UIR__GradientRemapPool____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientRemapPool____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientRemapPool____c value) ;

static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientRemapPool____c __get___9() ;

static System::Func_1<UnityEngine::UIElements::UIR::GradientRemap> __declspec(property(get=__get___9__0_0, put=__set___9__0_0))  __9__0_0;

static void __set___9__0_0(System::Func_1<UnityEngine::UIElements::UIR::GradientRemap> value) ;

static System::Func_1<UnityEngine::UIElements::UIR::GradientRemap> __get___9__0_0() ;

static System::Action_1<UnityEngine::UIElements::UIR::GradientRemap> __declspec(property(get=__get___9__0_1, put=__set___9__0_1))  __9__0_1;

static void __set___9__0_1(System::Action_1<UnityEngine::UIElements::UIR::GradientRemap> value) ;

static System::Action_1<UnityEngine::UIElements::UIR::GradientRemap> __get___9__0_1() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__UIR__GradientRemapPool____c() ;

/// @brief Method .ctor addr 0x2c876e8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__0_0 addr 0x2c876f0 size 0x58 virtual false final false
 UnityEngine::UIElements::UIR::GradientRemap __ctor_b__0_0() ;

/// @brief Method <.ctor>b__0_1 addr 0x2c87790 size 0x14 virtual false final false
 void __ctor_b__0_1(UnityEngine::UIElements::UIR::GradientRemap gradientRemap) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::GradientRemapPool
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7519)), TypeDefinitionIndex(TypeDefinitionIndex(7541)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7519), inst: 300 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7540))
// CS Name: UnityEngine.UIElements.UIR.GradientRemapPool
class CORDL_TYPE GradientRemapPool : public UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::GradientRemap> {
public:
// Declarations
using __c = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientRemapPool____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GradientRemapPool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GradientRemapPool", modifiers: " const&", def_value: None }]
constexpr GradientRemapPool(GradientRemapPool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GradientRemapPool", modifiers: "&&", def_value: None }]
constexpr GradientRemapPool(GradientRemapPool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GradientRemapPool(void* ptr) noexcept : UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::GradientRemap>(ptr) {
}


  constexpr GradientRemapPool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GradientRemapPool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GradientRemapPool& operator=(GradientRemapPool&& o) noexcept = default;
  constexpr GradientRemapPool& operator=(GradientRemapPool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GradientRemapPool() ;

/// @brief Method .ctor addr 0x2c874fc size 0x188 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::GradientRemapPool);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::GradientRemapPool, "UnityEngine.UIElements.UIR", "GradientRemapPool");
NEED_NO_BOX(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientRemapPool____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientRemapPool____c, "UnityEngine.UIElements.UIR", "GradientRemapPool/<>c");
