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
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct ColorNoAlphaSerializable;
}
// Type: ::ColorNoAlphaSerializable
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15154))
// CS Name: ColorNoAlphaSerializable
struct CORDL_TYPE ColorNoAlphaSerializable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const;

/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::ColorNoAlphaSerializable>
constexpr operator  System::IEquatable_1<GlobalNamespace::ColorNoAlphaSerializable>() const;

// Ctor Parameters [CppParam { name: "_color", ty: "UnityEngine::Color", modifiers: "", def_value: None }]
constexpr ColorNoAlphaSerializable(UnityEngine::Color _color) noexcept;


                    constexpr ColorNoAlphaSerializable(ColorNoAlphaSerializable const&) = default;
                    constexpr ColorNoAlphaSerializable(ColorNoAlphaSerializable&&) = default;
                    constexpr ColorNoAlphaSerializable& operator=(ColorNoAlphaSerializable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ColorNoAlphaSerializable& operator=(ColorNoAlphaSerializable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ColorNoAlphaSerializable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;


// Methods

/// @brief Method .ctor addr 0x12289e4 size 0xc virtual false final false
 void _ctor(UnityEngine::Color color) ;

/// @brief Method Serialize addr 0x12289f0 size 0x50 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x1228a40 size 0x5c virtual true final true
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method op_Implicit addr 0x1228a9c size 0x4 virtual false final false
static UnityEngine::Color op_Implicit_UnityEngine__Color(GlobalNamespace::ColorNoAlphaSerializable c) ;

/// @brief Method op_Implicit addr 0x1228aa0 size 0x4 virtual false final false
static GlobalNamespace::ColorNoAlphaSerializable op_Implicit_GlobalNamespace__ColorNoAlphaSerializable(UnityEngine::Color c) ;

/// @brief Method Equals addr 0x1228aa4 size 0x104 virtual true final true
 bool Equals(GlobalNamespace::ColorNoAlphaSerializable other) ;

/// @brief Method Equals addr 0x1228ba8 size 0x7c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x1228c24 size 0x84 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x1228ca8 size 0x8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorNoAlphaSerializable, "", "ColorNoAlphaSerializable");
