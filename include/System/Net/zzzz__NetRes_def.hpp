#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net {
struct FtpStatusCode;
}
namespace System::Net {
struct WebExceptionStatus;
}
// Forward declare root types
namespace System::Net {
class NetRes;
}
// Type: System.Net::NetRes
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7978))
// CS Name: System.Net.NetRes
class CORDL_TYPE NetRes : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NetRes() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetRes", modifiers: " const&", def_value: None }]
constexpr NetRes(NetRes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetRes", modifiers: "&&", def_value: None }]
constexpr NetRes(NetRes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetRes(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetRes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetRes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetRes& operator=(NetRes&& o) noexcept = default;
  constexpr NetRes& operator=(NetRes const& o) noexcept = default;
                


// Methods

/// @brief Method GetWebStatusString addr 0x283ccbc size 0xbc virtual false final false
static ::StringW GetWebStatusString(::StringW Res, System::Net::WebExceptionStatus Status) ;

/// @brief Method GetWebStatusString addr 0x284714c size 0x5c virtual false final false
static ::StringW GetWebStatusString(System::Net::WebExceptionStatus Status) ;

/// @brief Method GetWebStatusCodeString addr 0x28471a8 size 0x1dc virtual false final false
static ::StringW GetWebStatusCodeString(System::Net::FtpStatusCode statusCode, ::StringW statusDescription) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::NetRes);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetRes, "System.Net", "NetRes");
