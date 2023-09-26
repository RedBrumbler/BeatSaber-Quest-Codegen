#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__SHA256_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
class SHA256Managed;
}
// Type: System.Security.Cryptography::SHA256Managed
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2956))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2957))
// CS Name: System.Security.Cryptography.SHA256Managed
class CORDL_TYPE SHA256Managed : public System::Security::Cryptography::SHA256 {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SHA256Managed() = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA256Managed", modifiers: " const&", def_value: None }]
constexpr SHA256Managed(SHA256Managed const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA256Managed", modifiers: "&&", def_value: None }]
constexpr SHA256Managed(SHA256Managed&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SHA256Managed(void* ptr) noexcept : System::Security::Cryptography::SHA256(ptr) {
}


  constexpr SHA256Managed& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SHA256Managed& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SHA256Managed& operator=(SHA256Managed&& o) noexcept = default;
  constexpr SHA256Managed& operator=(SHA256Managed const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__buffer() const;

 int64_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int64_t value) ;

constexpr int64_t __get__count() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get__stateSHA256, put=__set__stateSHA256))  _stateSHA256;

constexpr void __set__stateSHA256(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__stateSHA256() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get__W, put=__set__W))  _W;

constexpr void __set__W(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__W() const;

static ::ArrayW<uint32_t> __declspec(property(get=__get__K, put=__set__K))  _K;

static void __set__K(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get__K() ;


// Methods

// Ctor Parameters []
explicit SHA256Managed() ;

/// @brief Method .ctor addr 0x232bb0c size 0x124 virtual false final false
 void _ctor() ;

/// @brief Method Initialize addr 0x2334138 size 0x44 virtual true final false
 void Initialize() ;

/// @brief Method HashCore addr 0x233417c size 0x4 virtual true final false
 void HashCore(::ArrayW<uint8_t> rgb, int32_t ibStart, int32_t cbSize) ;

/// @brief Method HashFinal addr 0x233434c size 0x4 virtual true final false
 ::ArrayW<uint8_t> HashFinal() ;

/// @brief Method InitializeState addr 0x2334078 size 0xc0 virtual false final false
 void InitializeState() ;

/// @brief Method _HashData addr 0x2334180 size 0x1cc virtual false final false
 void _HashData(::ArrayW<uint8_t> partIn, int32_t ibStart, int32_t cbSize) ;

/// @brief Method _EndHash addr 0x2334350 size 0x1a8 virtual false final false
 ::ArrayW<uint8_t> _EndHash() ;

/// @brief Method SHATransform addr 0x23344f8 size 0x56c virtual false final false
static void SHATransform(void* expandedBuffer, void* state, void* block) ;

/// @brief Method RotateRight addr 0x2334be8 size 0x8 virtual false final false
static uint32_t RotateRight(uint32_t x, int32_t n) ;

/// @brief Method Ch addr 0x2334b68 size 0x10 virtual false final false
static uint32_t Ch(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method Maj addr 0x2334bd4 size 0x14 virtual false final false
static uint32_t Maj(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method sigma_0 addr 0x2334bf0 size 0x5c virtual false final false
static uint32_t sigma_0(uint32_t x) ;

/// @brief Method sigma_1 addr 0x2334c4c size 0x5c virtual false final false
static uint32_t sigma_1(uint32_t x) ;

/// @brief Method Sigma_0 addr 0x2334b78 size 0x5c virtual false final false
static uint32_t Sigma_0(uint32_t x) ;

/// @brief Method Sigma_1 addr 0x2334b0c size 0x5c virtual false final false
static uint32_t Sigma_1(uint32_t x) ;

/// @brief Method SHA256Expand addr 0x2334a64 size 0xa8 virtual false final false
static void SHA256Expand(void* x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::SHA256Managed);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA256Managed, "System.Security.Cryptography", "SHA256Managed");
