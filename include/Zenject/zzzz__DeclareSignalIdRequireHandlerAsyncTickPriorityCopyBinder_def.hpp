#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder;
}
namespace Zenject {
class SignalDeclarationBindInfo;
}
// Forward declare root types
namespace Zenject {
class DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder;
}
// Type: Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10612))
// CS Name: Zenject.DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder
class CORDL_TYPE DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder : public Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder", modifiers: " const&", def_value: None }]
constexpr DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder(DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder", modifiers: "&&", def_value: None }]
constexpr DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder(DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder(void* ptr) noexcept : Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder(ptr) {
}


  constexpr DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder& operator=(DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder&& o) noexcept = default;
  constexpr DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder& operator=(DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "signalBindInfo", ty: "Zenject::SignalDeclarationBindInfo", modifiers: "", def_value: None }]
explicit DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder(Zenject::SignalDeclarationBindInfo signalBindInfo) ;

/// @brief Method .ctor addr 0x2d7afec size 0x24 virtual false final false
 void _ctor(Zenject::SignalDeclarationBindInfo signalBindInfo) ;

/// @brief Method WithId addr 0x2d7b034 size 0x1c virtual false final false
 Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder, "Zenject", "DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder");
