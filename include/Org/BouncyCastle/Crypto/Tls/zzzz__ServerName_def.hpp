#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ServerName;
}
// Type: Org.BouncyCastle.Crypto.Tls::ServerName
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1267))
// CS Name: Org.BouncyCastle.Crypto.Tls.ServerName
class CORDL_TYPE ServerName : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ServerName() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerName", modifiers: " const&", def_value: None }]
constexpr ServerName(ServerName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerName", modifiers: "&&", def_value: None }]
constexpr ServerName(ServerName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServerName(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ServerName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServerName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServerName& operator=(ServerName&& o) noexcept = default;
  constexpr ServerName& operator=(ServerName const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_mNameType, put=__set_mNameType))  mNameType;

constexpr void __set_mNameType(uint8_t value) ;

constexpr uint8_t __get_mNameType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_mName, put=__set_mName))  mName;

constexpr void __set_mName(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_mName() const;


// Properties

 uint8_t __declspec(property(get=get_NameType))  NameType;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Name))  Name;


// Methods

// Ctor Parameters [CppParam { name: "nameType", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit ServerName(uint8_t nameType, ::bs_hook::Il2CppWrapperType name) ;

/// @brief Method .ctor addr 0xf169d4 size 0xa0 virtual false final false
 void _ctor(uint8_t nameType, ::bs_hook::Il2CppWrapperType name) ;

/// @brief Method get_NameType addr 0xf16b3c size 0x8 virtual true final false
 uint8_t get_NameType() ;

/// @brief Method get_Name addr 0xf16b44 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Name() ;

/// @brief Method GetHostName addr 0xf16b4c size 0xdc virtual true final false
 ::StringW GetHostName() ;

/// @brief Method Encode addr 0xf16c28 size 0x124 virtual true final false
 void Encode(System::IO::Stream output) ;

/// @brief Method Parse addr 0xf16d4c size 0x118 virtual false final false
static Org::BouncyCastle::Crypto::Tls::ServerName Parse(System::IO::Stream input) ;

/// @brief Method IsCorrectType addr 0xf16a74 size 0xc8 virtual false final false
static bool IsCorrectType(uint8_t nameType, ::bs_hook::Il2CppWrapperType name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::ServerName);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::ServerName, "Org.BouncyCastle.Crypto.Tls", "ServerName");
