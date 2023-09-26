#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class HttpTransferUpdate;
}
// Type: Oculus.Platform.Models::HttpTransferUpdate
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13435))
// CS Name: Oculus.Platform.Models.HttpTransferUpdate
class CORDL_TYPE HttpTransferUpdate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HttpTransferUpdate() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpTransferUpdate", modifiers: " const&", def_value: None }]
constexpr HttpTransferUpdate(HttpTransferUpdate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpTransferUpdate", modifiers: "&&", def_value: None }]
constexpr HttpTransferUpdate(HttpTransferUpdate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpTransferUpdate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpTransferUpdate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpTransferUpdate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpTransferUpdate& operator=(HttpTransferUpdate&& o) noexcept = default;
  constexpr HttpTransferUpdate& operator=(HttpTransferUpdate const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(uint64_t value) ;

constexpr uint64_t __get_ID() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Payload, put=__set_Payload))  Payload;

constexpr void __set_Payload(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Payload() const;

 bool __declspec(property(get=__get_IsCompleted, put=__set_IsCompleted))  IsCompleted;

constexpr void __set_IsCompleted(bool value) ;

constexpr bool __get_IsCompleted() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HttpTransferUpdate(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25cea90 size 0x158 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::HttpTransferUpdate);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::HttpTransferUpdate, "Oculus.Platform.Models", "HttpTransferUpdate");
