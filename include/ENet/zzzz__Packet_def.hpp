#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IDisposable;
}
namespace ENet {
class PacketFreeCallback;
}
namespace ENet {
struct PacketFlags;
}
// Forward declare root types
namespace ENet {
struct Packet;
}
// Type: ENet::Packet
namespace ENet {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15292))
// CS Name: ENet.Packet
struct CORDL_TYPE Packet : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "nativePacket", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr Packet(::cordl_internals::intptr_t nativePacket) noexcept;


                    constexpr Packet(Packet const&) = default;
                    constexpr Packet(Packet&&) = default;
                    constexpr Packet& operator=(Packet const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Packet& operator=(Packet&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Packet(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_nativePacket, put=__set_nativePacket))  nativePacket;

constexpr void __set_nativePacket(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_nativePacket() const;


// Properties

 ::cordl_internals::intptr_t __declspec(property(get=get_NativeData, put=set_NativeData))  NativeData;

 bool __declspec(property(get=get_IsSet))  IsSet;

 ::cordl_internals::intptr_t __declspec(property(get=get_Data))  Data;

 ::cordl_internals::intptr_t __declspec(property(get=get_UserData, put=set_UserData))  UserData;

 int32_t __declspec(property(get=get_Length))  Length;

 bool __declspec(property(get=get_HasReferences))  HasReferences;


// Methods

/// @brief Method get_NativeData addr 0x20b5c28 size 0x8 virtual false final false
 ::cordl_internals::intptr_t get_NativeData() ;

/// @brief Method set_NativeData addr 0x20b5c30 size 0x8 virtual false final false
 void set_NativeData(::cordl_internals::intptr_t value) ;

/// @brief Method .ctor addr 0x20b5c38 size 0x8 virtual false final false
 void _ctor(::cordl_internals::intptr_t packet) ;

/// @brief Method Dispose addr 0x20b5c40 size 0x74 virtual true final true
 void Dispose() ;

/// @brief Method get_IsSet addr 0x20b5d30 size 0x54 virtual false final false
 bool get_IsSet() ;

/// @brief Method get_Data addr 0x20b5d84 size 0x18 virtual false final false
 ::cordl_internals::intptr_t get_Data() ;

/// @brief Method get_UserData addr 0x20b5ec0 size 0x18 virtual false final false
 ::cordl_internals::intptr_t get_UserData() ;

/// @brief Method set_UserData addr 0x20b5f54 size 0x28 virtual false final false
 void set_UserData(::cordl_internals::intptr_t value) ;

/// @brief Method get_Length addr 0x20b6000 size 0x18 virtual false final false
 int32_t get_Length() ;

/// @brief Method get_HasReferences addr 0x20b6094 size 0x24 virtual false final false
 bool get_HasReferences() ;

/// @brief Method ThrowIfNotCreated addr 0x20b5d9c size 0xa8 virtual false final false
 void ThrowIfNotCreated() ;

/// @brief Method SetFreeCallback addr 0x20b6134 size 0x28 virtual false final false
 void SetFreeCallback(::cordl_internals::intptr_t callback) ;

/// @brief Method SetFreeCallback addr 0x20b61e0 size 0x90 virtual false final false
 void SetFreeCallback(ENet::PacketFreeCallback callback) ;

/// @brief Method Create addr 0x20b6270 size 0x64 virtual false final false
 void Create(::ArrayW<uint8_t> data) ;

/// @brief Method Create addr 0x20b62d4 size 0x8 virtual false final false
 void Create(::ArrayW<uint8_t> data, int32_t length) ;

/// @brief Method Create addr 0x20b63b4 size 0x1c virtual false final false
 void Create(::ArrayW<uint8_t> data, ENet::PacketFlags flags) ;

/// @brief Method Create addr 0x20b62dc size 0xd8 virtual false final false
 void Create(::ArrayW<uint8_t> data, int32_t length, ENet::PacketFlags flags) ;

/// @brief Method Create addr 0x20b646c size 0x120 virtual false final false
 void Create(::cordl_internals::intptr_t data, int32_t length, ENet::PacketFlags flags) ;

/// @brief Method Create addr 0x20b6620 size 0x120 virtual false final false
 void Create(::ArrayW<uint8_t> data, int32_t offset, int32_t length, ENet::PacketFlags flags) ;

/// @brief Method Create addr 0x20b67e4 size 0x160 virtual false final false
 void Create(::cordl_internals::intptr_t data, int32_t offset, int32_t length, ENet::PacketFlags flags) ;

/// @brief Method CopyTo addr 0x20b69e0 size 0x100 virtual false final false
 void CopyTo(::ArrayW<uint8_t> destination, int32_t startPos) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(ENet::Packet, "ENet", "Packet");
