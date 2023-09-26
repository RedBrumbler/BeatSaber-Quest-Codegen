#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace Zenject {
class ILateDisposable;
}
// Type: Zenject::ILateDisposable
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15698))
// CS Name: Zenject.ILateDisposable
class CORDL_TYPE ILateDisposable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILateDisposable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILateDisposable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method LateDispose addr 0x0 size 0xffffffffffffffff virtual true final false
 void LateDispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ILateDisposable);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ILateDisposable, "Zenject", "ILateDisposable");
