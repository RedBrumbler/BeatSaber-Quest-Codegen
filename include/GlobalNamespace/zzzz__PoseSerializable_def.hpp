#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
struct QuaternionSerializable;
}
namespace GlobalNamespace {
struct Vector3Serializable;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace GlobalNamespace {
struct PoseSerializable;
}
// Type: ::PoseSerializable
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15151))
// CS Name: PoseSerializable
struct CORDL_TYPE PoseSerializable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const;

/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::PoseSerializable>
constexpr operator  System::IEquatable_1<GlobalNamespace::PoseSerializable>() const;

// Ctor Parameters [CppParam { name: "position", ty: "GlobalNamespace::Vector3Serializable", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "GlobalNamespace::QuaternionSerializable", modifiers: "", def_value: None }]
constexpr PoseSerializable(GlobalNamespace::Vector3Serializable position, GlobalNamespace::QuaternionSerializable rotation) noexcept;


                    constexpr PoseSerializable(PoseSerializable const&) = default;
                    constexpr PoseSerializable(PoseSerializable&&) = default;
                    constexpr PoseSerializable& operator=(PoseSerializable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PoseSerializable& operator=(PoseSerializable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PoseSerializable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::Vector3Serializable __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(GlobalNamespace::Vector3Serializable value) ;

constexpr GlobalNamespace::Vector3Serializable __get_position() const;

 GlobalNamespace::QuaternionSerializable __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(GlobalNamespace::QuaternionSerializable value) ;

constexpr GlobalNamespace::QuaternionSerializable __get_rotation() const;


// Properties

static GlobalNamespace::PoseSerializable __declspec(property(get=get_identity))  identity;


// Methods

/// @brief Method .ctor addr 0x12280bc size 0x14 virtual false final false
 void _ctor(GlobalNamespace::Vector3Serializable position, GlobalNamespace::QuaternionSerializable rotation) ;

/// @brief Method get_identity addr 0x12280d0 size 0x24 virtual false final false
static GlobalNamespace::PoseSerializable get_identity() ;

/// @brief Method Serialize addr 0x12280f4 size 0x28 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x122811c size 0x28 virtual true final true
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Equals addr 0x1228144 size 0x6c virtual true final true
 bool Equals(GlobalNamespace::PoseSerializable other) ;

/// @brief Method Equals addr 0x12281b0 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x1228240 size 0x44 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x1228284 size 0xcc virtual true final false
 ::StringW ToString() ;

/// @brief Method GetSize addr 0x1228350 size 0x2c virtual false final false
 int32_t GetSize() ;

/// @brief Method op_Implicit addr 0x122837c size 0x98 virtual false final false
static UnityEngine::Pose op_Implicit_UnityEngine__Pose(GlobalNamespace::PoseSerializable p) ;

/// @brief Method op_Implicit addr 0x1228414 size 0x7c virtual false final false
static GlobalNamespace::PoseSerializable op_Implicit_GlobalNamespace__PoseSerializable(UnityEngine::Pose p) ;

/// @brief Method op_Addition addr 0x1228490 size 0x64 virtual false final false
static GlobalNamespace::PoseSerializable op_Addition(GlobalNamespace::PoseSerializable a, GlobalNamespace::PoseSerializable b) ;

/// @brief Method op_Subtraction addr 0x12284f4 size 0x64 virtual false final false
static GlobalNamespace::PoseSerializable op_Subtraction(GlobalNamespace::PoseSerializable a, GlobalNamespace::PoseSerializable b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PoseSerializable, "", "PoseSerializable");
