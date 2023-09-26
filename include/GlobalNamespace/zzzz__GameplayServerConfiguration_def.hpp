#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct InvitePolicy;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
struct SongSelectionMode;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace GlobalNamespace {
struct DiscoveryPolicy;
}
namespace GlobalNamespace {
struct GameplayServerMode;
}
namespace GlobalNamespace {
struct GameplayServerControlSettings;
}
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
// Type: ::GameplayServerConfiguration
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12719))
// CS Name: GameplayServerConfiguration
struct CORDL_TYPE GameplayServerConfiguration : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::GameplayServerConfiguration>
constexpr operator  System::IEquatable_1<GlobalNamespace::GameplayServerConfiguration>() const;

/// @brief Convert operator to LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayServerConfiguration>
constexpr operator  LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayServerConfiguration>() const;

// Ctor Parameters [CppParam { name: "maxPlayerCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "discoveryPolicy", ty: "GlobalNamespace::DiscoveryPolicy", modifiers: "", def_value: None }, CppParam { name: "invitePolicy", ty: "GlobalNamespace::InvitePolicy", modifiers: "", def_value: None }, CppParam { name: "gameplayServerMode", ty: "GlobalNamespace::GameplayServerMode", modifiers: "", def_value: None }, CppParam { name: "songSelectionMode", ty: "GlobalNamespace::SongSelectionMode", modifiers: "", def_value: None }, CppParam { name: "gameplayServerControlSettings", ty: "GlobalNamespace::GameplayServerControlSettings", modifiers: "", def_value: None }]
constexpr GameplayServerConfiguration(int32_t maxPlayerCount, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, GlobalNamespace::GameplayServerMode gameplayServerMode, GlobalNamespace::SongSelectionMode songSelectionMode, GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings) noexcept;


                    constexpr GameplayServerConfiguration(GameplayServerConfiguration const&) = default;
                    constexpr GameplayServerConfiguration(GameplayServerConfiguration&&) = default;
                    constexpr GameplayServerConfiguration& operator=(GameplayServerConfiguration const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GameplayServerConfiguration& operator=(GameplayServerConfiguration&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GameplayServerConfiguration(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_maxPlayerCount, put=__set_maxPlayerCount))  maxPlayerCount;

constexpr void __set_maxPlayerCount(int32_t value) ;

constexpr int32_t __get_maxPlayerCount() const;

 GlobalNamespace::DiscoveryPolicy __declspec(property(get=__get_discoveryPolicy, put=__set_discoveryPolicy))  discoveryPolicy;

constexpr void __set_discoveryPolicy(GlobalNamespace::DiscoveryPolicy value) ;

constexpr GlobalNamespace::DiscoveryPolicy __get_discoveryPolicy() const;

 GlobalNamespace::InvitePolicy __declspec(property(get=__get_invitePolicy, put=__set_invitePolicy))  invitePolicy;

constexpr void __set_invitePolicy(GlobalNamespace::InvitePolicy value) ;

constexpr GlobalNamespace::InvitePolicy __get_invitePolicy() const;

 GlobalNamespace::GameplayServerMode __declspec(property(get=__get_gameplayServerMode, put=__set_gameplayServerMode))  gameplayServerMode;

constexpr void __set_gameplayServerMode(GlobalNamespace::GameplayServerMode value) ;

constexpr GlobalNamespace::GameplayServerMode __get_gameplayServerMode() const;

 GlobalNamespace::SongSelectionMode __declspec(property(get=__get_songSelectionMode, put=__set_songSelectionMode))  songSelectionMode;

constexpr void __set_songSelectionMode(GlobalNamespace::SongSelectionMode value) ;

constexpr GlobalNamespace::SongSelectionMode __get_songSelectionMode() const;

 GlobalNamespace::GameplayServerControlSettings __declspec(property(get=__get_gameplayServerControlSettings, put=__set_gameplayServerControlSettings))  gameplayServerControlSettings;

constexpr void __set_gameplayServerControlSettings(GlobalNamespace::GameplayServerControlSettings value) ;

constexpr GlobalNamespace::GameplayServerControlSettings __get_gameplayServerControlSettings() const;


// Methods

/// @brief Method .ctor addr 0xdbaafc size 0x14 virtual false final false
 void _ctor(int32_t maxPlayerCount, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, GlobalNamespace::GameplayServerMode gameplayServerMode, GlobalNamespace::SongSelectionMode songSelectionMode, GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings) ;

/// @brief Method Equals addr 0xdbd990 size 0x6c virtual false final false
 bool Equals(ByRef<GlobalNamespace::GameplayServerConfiguration> other) ;

/// @brief Method Equals addr 0xdbd9fc size 0x4 virtual true final true
 bool Equals(GlobalNamespace::GameplayServerConfiguration other) ;

/// @brief Method Equals addr 0xdbda00 size 0xc8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0xdbdac8 size 0x40 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0xdbdb08 size 0x4 virtual false final false
static bool op_Equality(ByRef<GlobalNamespace::GameplayServerConfiguration> a, ByRef<GlobalNamespace::GameplayServerConfiguration> b) ;

/// @brief Method op_Inequality addr 0xdbdb0c size 0x18 virtual false final false
static bool op_Inequality(ByRef<GlobalNamespace::GameplayServerConfiguration> a, ByRef<GlobalNamespace::GameplayServerConfiguration> b) ;

/// @brief Method Serialize addr 0xdbdb24 size 0x7c virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method CreateFromSerializedData addr 0xdbdba0 size 0x34 virtual true final true
 GlobalNamespace::GameplayServerConfiguration CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Deserialize addr 0xdbdbd4 size 0x98 virtual false final false
static GlobalNamespace::GameplayServerConfiguration Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method WithMaxPlayerCount addr 0xdbdc6c size 0x1c virtual false final false
 GlobalNamespace::GameplayServerConfiguration WithMaxPlayerCount(int32_t maxPlayerCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayServerConfiguration, "", "GameplayServerConfiguration");
