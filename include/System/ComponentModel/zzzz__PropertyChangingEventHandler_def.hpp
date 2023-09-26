#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace System::ComponentModel {
class PropertyChangingEventArgs;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace System::ComponentModel {
class PropertyChangingEventHandler;
}
// Type: System.ComponentModel::PropertyChangingEventHandler
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11754))
// CS Name: System.ComponentModel.PropertyChangingEventHandler
class CORDL_TYPE PropertyChangingEventHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~PropertyChangingEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyChangingEventHandler", modifiers: " const&", def_value: None }]
constexpr PropertyChangingEventHandler(PropertyChangingEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyChangingEventHandler", modifiers: "&&", def_value: None }]
constexpr PropertyChangingEventHandler(PropertyChangingEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PropertyChangingEventHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr PropertyChangingEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PropertyChangingEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PropertyChangingEventHandler& operator=(PropertyChangingEventHandler&& o) noexcept = default;
  constexpr PropertyChangingEventHandler& operator=(PropertyChangingEventHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit PropertyChangingEventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x24f8ff8 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x24f9128 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType sender, System::ComponentModel::PropertyChangingEventArgs e) ;

/// @brief Method BeginInvoke addr 0x24f913c size 0x28 virtual true final false
 System::IAsyncResult BeginInvoke(::bs_hook::Il2CppWrapperType sender, System::ComponentModel::PropertyChangingEventArgs e, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x24f9164 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::PropertyChangingEventHandler);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::PropertyChangingEventHandler, "System.ComponentModel", "PropertyChangingEventHandler");
