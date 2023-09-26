#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_Viewport;
}
// Type: HoudiniEngineUnity::HAPI_Viewport
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9715))
// CS Name: HoudiniEngineUnity.HAPI_Viewport
struct CORDL_TYPE HAPI_Viewport : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "position", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "rotationQuaternion", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "float_t", modifiers: "", def_value: None }]
constexpr HAPI_Viewport(::ArrayW<float_t> position, ::ArrayW<float_t> rotationQuaternion, float_t offset) noexcept;


                    constexpr HAPI_Viewport(HAPI_Viewport const&) = default;
                    constexpr HAPI_Viewport(HAPI_Viewport&&) = default;
                    constexpr HAPI_Viewport& operator=(HAPI_Viewport const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_Viewport& operator=(HAPI_Viewport&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_Viewport(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_position() const;

 ::ArrayW<float_t> __declspec(property(get=__get_rotationQuaternion, put=__set_rotationQuaternion))  rotationQuaternion;

constexpr void __set_rotationQuaternion(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_rotationQuaternion() const;

 float_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(float_t value) ;

constexpr float_t __get_offset() const;


// Methods

/// @brief Method .ctor addr 0x2057cec size 0x88 virtual false final false
 void _ctor(bool initializeFields) ;

/// @brief Method Init addr 0x2057d74 size 0x70 virtual false final false
 void Init() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_Viewport, "HoudiniEngineUnity", "HAPI_Viewport");
