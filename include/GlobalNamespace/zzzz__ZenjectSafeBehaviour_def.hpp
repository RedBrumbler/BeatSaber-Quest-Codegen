#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class ZenjectSafeBehaviour;
}
// Type: ::ZenjectSafeBehaviour
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15355))
// CS Name: ZenjectSafeBehaviour
class CORDL_TYPE ZenjectSafeBehaviour : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ZenjectSafeBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectSafeBehaviour", modifiers: " const&", def_value: None }]
constexpr ZenjectSafeBehaviour(ZenjectSafeBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectSafeBehaviour", modifiers: "&&", def_value: None }]
constexpr ZenjectSafeBehaviour(ZenjectSafeBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenjectSafeBehaviour(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ZenjectSafeBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenjectSafeBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenjectSafeBehaviour& operator=(ZenjectSafeBehaviour&& o) noexcept = default;
  constexpr ZenjectSafeBehaviour& operator=(ZenjectSafeBehaviour const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__isInjected, put=__set__isInjected))  _isInjected;

constexpr void __set__isInjected(bool value) ;

constexpr bool __get__isInjected() const;

 bool __declspec(property(get=__get__wasOnEnableCalled, put=__set__wasOnEnableCalled))  _wasOnEnableCalled;

constexpr void __set__wasOnEnableCalled(bool value) ;

constexpr bool __get__wasOnEnableCalled() const;


// Methods

/// @brief Method Inject addr 0x26abba0 size 0x20 virtual false final false
 void Inject() ;

/// @brief Method OnEnable addr 0x26abbe0 size 0x20 virtual false final false
 void OnEnable() ;

/// @brief Method TryInvokeOnEnablePostInjection addr 0x26abbc0 size 0x20 virtual false final false
 void TryInvokeOnEnablePostInjection() ;

/// @brief Method OnEnablePostInjection addr 0x26abc00 size 0x4 virtual true final false
 void OnEnablePostInjection() ;

// Ctor Parameters []
explicit ZenjectSafeBehaviour() ;

/// @brief Method .ctor addr 0x26a7008 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenInjectMethod0 addr 0x26abc04 size 0xa0 virtual false final false
static void __zenInjectMethod0(::bs_hook::Il2CppWrapperType P_0, ::ArrayW<::bs_hook::Il2CppWrapperType> P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x26abca4 size 0x254 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ZenjectSafeBehaviour);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ZenjectSafeBehaviour, "", "ZenjectSafeBehaviour");
