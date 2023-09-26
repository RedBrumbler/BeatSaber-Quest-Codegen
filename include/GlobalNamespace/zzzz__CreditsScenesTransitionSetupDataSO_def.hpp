#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CreditsScenesTransitionSetupDataSO;
}
// Type: ::CreditsScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13890))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6137))
// CS Name: CreditsScenesTransitionSetupDataSO
class CORDL_TYPE CreditsScenesTransitionSetupDataSO : public GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~CreditsScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "CreditsScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr CreditsScenesTransitionSetupDataSO(CreditsScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CreditsScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr CreditsScenesTransitionSetupDataSO(CreditsScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CreditsScenesTransitionSetupDataSO(void* ptr) noexcept : GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO(ptr) {
}


  constexpr CreditsScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CreditsScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CreditsScenesTransitionSetupDataSO& operator=(CreditsScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr CreditsScenesTransitionSetupDataSO& operator=(CreditsScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Fields

 System::Action_1<GlobalNamespace::CreditsScenesTransitionSetupDataSO> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_1<GlobalNamespace::CreditsScenesTransitionSetupDataSO> value) ;

constexpr System::Action_1<GlobalNamespace::CreditsScenesTransitionSetupDataSO> __get_didFinishEvent() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x22087e8 size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_1<GlobalNamespace::CreditsScenesTransitionSetupDataSO> value) ;

/// @brief Method remove_didFinishEvent addr 0x2208898 size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_1<GlobalNamespace::CreditsScenesTransitionSetupDataSO> value) ;

/// @brief Method Finish addr 0x2208948 size 0x20 virtual false final false
 void Finish() ;

// Ctor Parameters []
explicit CreditsScenesTransitionSetupDataSO() ;

/// @brief Method .ctor addr 0x2208968 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CreditsScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreditsScenesTransitionSetupDataSO, "", "CreditsScenesTransitionSetupDataSO");
