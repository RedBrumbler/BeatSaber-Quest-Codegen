#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class Hashtable;
}
namespace System::Net {
class EndPointListener;
}
namespace System::Net {
class HttpListener;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace System::Net {
class EndPointManager;
}
// Type: System.Net::EndPointManager
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8035))
// CS Name: System.Net.EndPointManager
class CORDL_TYPE EndPointManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EndPointManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "EndPointManager", modifiers: " const&", def_value: None }]
constexpr EndPointManager(EndPointManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EndPointManager", modifiers: "&&", def_value: None }]
constexpr EndPointManager(EndPointManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EndPointManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EndPointManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EndPointManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EndPointManager& operator=(EndPointManager&& o) noexcept = default;
  constexpr EndPointManager& operator=(EndPointManager const& o) noexcept = default;
                


// Fields

static System::Collections::Hashtable __declspec(property(get=__get_ip_to_endpoints, put=__set_ip_to_endpoints))  ip_to_endpoints;

static void __set_ip_to_endpoints(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get_ip_to_endpoints() ;


// Methods

/// @brief Method AddListener addr 0x2862010 size 0x70c virtual false final false
static void AddListener(System::Net::HttpListener listener) ;

/// @brief Method AddPrefix addr 0x2862a40 size 0x11c virtual false final false
static void AddPrefix(::StringW prefix, System::Net::HttpListener listener) ;

/// @brief Method AddPrefixInternal addr 0x28627c4 size 0x160 virtual false final false
static void AddPrefixInternal(::StringW p, System::Net::HttpListener listener) ;

/// @brief Method GetEPListener addr 0x2862b5c size 0x3dc virtual false final false
static System::Net::EndPointListener GetEPListener(::StringW host, int32_t port, System::Net::HttpListener listener, bool secure) ;

/// @brief Method RemoveEndPoint addr 0x2861270 size 0x260 virtual false final false
static void RemoveEndPoint(System::Net::EndPointListener epl, System::Net::IPEndPoint ep) ;

/// @brief Method RemoveListener addr 0x2862f38 size 0x384 virtual false final false
static void RemoveListener(System::Net::HttpListener listener) ;

/// @brief Method RemovePrefix addr 0x2862924 size 0x11c virtual false final false
static void RemovePrefix(::StringW prefix, System::Net::HttpListener listener) ;

/// @brief Method RemovePrefixInternal addr 0x28632bc size 0x11c virtual false final false
static void RemovePrefixInternal(::StringW prefix, System::Net::HttpListener listener) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::EndPointManager);
DEFINE_IL2CPP_ARG_TYPE(System::Net::EndPointManager, "System.Net", "EndPointManager");
