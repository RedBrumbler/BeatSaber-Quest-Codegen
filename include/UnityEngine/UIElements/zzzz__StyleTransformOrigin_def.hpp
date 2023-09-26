#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleTransformOrigin;
}
// Type: UnityEngine.UIElements::StyleTransformOrigin
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7434))
// CS Name: UnityEngine.UIElements.StyleTransformOrigin
struct CORDL_TYPE StyleTransformOrigin : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IStyleValue_1<UnityEngine::UIElements::TransformOrigin>
constexpr operator  UnityEngine::UIElements::IStyleValue_1<UnityEngine::UIElements::TransformOrigin>() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::StyleTransformOrigin>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::StyleTransformOrigin>() const;

// Ctor Parameters [CppParam { name: "m_Value", ty: "UnityEngine::UIElements::TransformOrigin", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleTransformOrigin(UnityEngine::UIElements::TransformOrigin m_Value, UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;


                    constexpr StyleTransformOrigin(StyleTransformOrigin const&) = default;
                    constexpr StyleTransformOrigin(StyleTransformOrigin&&) = default;
                    constexpr StyleTransformOrigin& operator=(StyleTransformOrigin const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleTransformOrigin& operator=(StyleTransformOrigin&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleTransformOrigin(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::TransformOrigin __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(UnityEngine::UIElements::TransformOrigin value) ;

constexpr UnityEngine::UIElements::TransformOrigin __get_m_Value() const;

 UnityEngine::UIElements::StyleKeyword __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword))  m_Keyword;

constexpr void __set_m_Keyword(UnityEngine::UIElements::StyleKeyword value) ;

constexpr UnityEngine::UIElements::StyleKeyword __get_m_Keyword() const;


// Properties

 UnityEngine::UIElements::TransformOrigin __declspec(property(get=get_value))  value;

 UnityEngine::UIElements::StyleKeyword __declspec(property(get=get_keyword))  keyword;


// Methods

/// @brief Method get_value addr 0x2d2ccd0 size 0x40 virtual true final true
 UnityEngine::UIElements::TransformOrigin get_value() ;

/// @brief Method get_keyword addr 0x2d2f2e4 size 0x8 virtual true final true
 UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x2d2f2ec size 0xc virtual false final false
 void _ctor(UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method .ctor addr 0x2d2f2f8 size 0x18 virtual false final false
 void _ctor(UnityEngine::UIElements::TransformOrigin v, UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method op_Equality addr 0x2d2f310 size 0x7c virtual false final false
static bool op_Equality(UnityEngine::UIElements::StyleTransformOrigin lhs, UnityEngine::UIElements::StyleTransformOrigin rhs) ;

/// @brief Method op_Implicit addr 0x2d2cecc size 0xc virtual false final false
static UnityEngine::UIElements::StyleTransformOrigin op_Implicit_UnityEngine__UIElements__StyleTransformOrigin(UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method Equals addr 0x2d2f3ec size 0x8c virtual true final true
 bool Equals(UnityEngine::UIElements::StyleTransformOrigin other) ;

/// @brief Method Equals addr 0x2d2f478 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2d2f508 size 0x24 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2d2f5a0 size 0x88 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleTransformOrigin, "UnityEngine.UIElements", "StyleTransformOrigin");
