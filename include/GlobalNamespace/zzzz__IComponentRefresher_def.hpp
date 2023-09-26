#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace GlobalNamespace {
class IComponentRefresher;
}
// Type: ::IComponentRefresher
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13568))
// CS Name: IComponentRefresher
class CORDL_TYPE IComponentRefresher : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IComponentRefresher() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IComponentRefresher(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method __Refresh addr 0x0 size 0xffffffffffffffff virtual true final false
 void __Refresh() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IComponentRefresher);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IComponentRefresher, "", "IComponentRefresher");
