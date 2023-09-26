#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
class VarIntExtensions;
}
// Type: ::VarIntExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15158))
// CS Name: VarIntExtensions
class CORDL_TYPE VarIntExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~VarIntExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "VarIntExtensions", modifiers: " const&", def_value: None }]
constexpr VarIntExtensions(VarIntExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VarIntExtensions", modifiers: "&&", def_value: None }]
constexpr VarIntExtensions(VarIntExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VarIntExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VarIntExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VarIntExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VarIntExtensions& operator=(VarIntExtensions&& o) noexcept = default;
  constexpr VarIntExtensions& operator=(VarIntExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method PutVarInt addr 0x1222d58 size 0x10 virtual false final false
static void PutVarInt(LiteNetLib::Utils::NetDataWriter writer, int32_t val) ;

/// @brief Method GetVarInt addr 0x12230b0 size 0x1c virtual false final false
static int32_t GetVarInt(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method PutVarUInt addr 0x121fcd4 size 0x8 virtual false final false
static void PutVarUInt(LiteNetLib::Utils::NetDataWriter writer, uint32_t val) ;

/// @brief Method GetVarUInt addr 0x121fc78 size 0x10 virtual false final false
static uint32_t GetVarUInt(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method PutVarLong addr 0x1229c08 size 0xc virtual false final false
static void PutVarLong(LiteNetLib::Utils::NetDataWriter writer, int64_t val) ;

/// @brief Method GetVarLong addr 0x1229c14 size 0x18 virtual false final false
static int64_t GetVarLong(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method PutVarULong addr 0x1229c2c size 0x48 virtual false final false
static void PutVarULong(LiteNetLib::Utils::NetDataWriter writer, uint64_t val) ;

/// @brief Method GetVarULong addr 0x1229c74 size 0x74 virtual false final false
static uint64_t GetVarULong(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method TryGetVarUInt addr 0x1229ce8 size 0x4c virtual false final false
static bool TryGetVarUInt(LiteNetLib::Utils::NetDataReader reader, ByRef<uint32_t> value) ;

/// @brief Method TryGetVarULong addr 0x1229d34 size 0x88 virtual false final false
static bool TryGetVarULong(LiteNetLib::Utils::NetDataReader reader, ByRef<uint64_t> value) ;

/// @brief Method GetSize addr 0x1226bb4 size 0x24 virtual false final false
static int32_t GetSize(int32_t val) ;

/// @brief Method GetSize addr 0x1229ddc size 0x1c virtual false final false
static int32_t GetSize(uint32_t val) ;

/// @brief Method GetSize addr 0x1229dbc size 0x20 virtual false final false
static int32_t GetSize(int64_t val) ;

/// @brief Method GetSize addr 0x1229df8 size 0xd8157c virtual false final false
static int32_t GetSize(uint64_t val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::VarIntExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VarIntExtensions, "", "VarIntExtensions");
