#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Globalization {
struct UnicodeCategory;
}
// Forward declare root types
namespace System::Globalization {
class CharUnicodeInfo;
}
// Type: System.Globalization::CharUnicodeInfo
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3642))
// CS Name: System.Globalization.CharUnicodeInfo
class CORDL_TYPE CharUnicodeInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CharUnicodeInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "CharUnicodeInfo", modifiers: " const&", def_value: None }]
constexpr CharUnicodeInfo(CharUnicodeInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CharUnicodeInfo", modifiers: "&&", def_value: None }]
constexpr CharUnicodeInfo(CharUnicodeInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CharUnicodeInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CharUnicodeInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CharUnicodeInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CharUnicodeInfo& operator=(CharUnicodeInfo&& o) noexcept = default;
  constexpr CharUnicodeInfo& operator=(CharUnicodeInfo const& o) noexcept = default;
                


// Properties

static System::ReadOnlySpan_1<uint8_t> __declspec(property(get=get_CategoryLevel1Index))  CategoryLevel1Index;

static System::ReadOnlySpan_1<uint8_t> __declspec(property(get=get_CategoryLevel2Index))  CategoryLevel2Index;

static System::ReadOnlySpan_1<uint8_t> __declspec(property(get=get_CategoryLevel3Index))  CategoryLevel3Index;

static System::ReadOnlySpan_1<uint8_t> __declspec(property(get=get_CategoriesValue))  CategoriesValue;

static System::ReadOnlySpan_1<uint8_t> __declspec(property(get=get_NumericLevel1Index))  NumericLevel1Index;

static System::ReadOnlySpan_1<uint8_t> __declspec(property(get=get_NumericLevel2Index))  NumericLevel2Index;

static System::ReadOnlySpan_1<uint8_t> __declspec(property(get=get_NumericLevel3Index))  NumericLevel3Index;

static System::ReadOnlySpan_1<uint8_t> __declspec(property(get=get_NumericValues))  NumericValues;


// Methods

/// @brief Method InternalConvertToUtf32 addr 0x240ee6c size 0x94 virtual false final false
static int32_t InternalConvertToUtf32(::StringW s, int32_t index) ;

/// @brief Method InternalConvertToUtf32 addr 0x240ef00 size 0xb4 virtual false final false
static int32_t InternalConvertToUtf32(::StringW s, int32_t index, ByRef<int32_t> charLength) ;

/// @brief Method InternalGetNumericValue addr 0x240efb4 size 0x12c virtual false final false
static double_t InternalGetNumericValue(int32_t ch) ;

/// @brief Method GetNumericValue addr 0x240f2b0 size 0x8 virtual false final false
static double_t GetNumericValue(char16_t ch) ;

/// @brief Method GetUnicodeCategory addr 0x240f2b8 size 0x1c virtual false final false
static System::Globalization::UnicodeCategory GetUnicodeCategory(char16_t ch) ;

/// @brief Method GetUnicodeCategory addr 0x240f2ec size 0xb0 virtual false final false
static System::Globalization::UnicodeCategory GetUnicodeCategory(::StringW s, int32_t index) ;

/// @brief Method GetUnicodeCategory addr 0x240f2d4 size 0x18 virtual false final false
static System::Globalization::UnicodeCategory GetUnicodeCategory(int32_t codePoint) ;

/// @brief Method InternalGetCategoryValue addr 0x240f3b8 size 0xf4 virtual false final false
static uint8_t InternalGetCategoryValue(int32_t ch, int32_t offset) ;

/// @brief Method InternalGetUnicodeCategory addr 0x240f39c size 0x1c virtual false final false
static System::Globalization::UnicodeCategory InternalGetUnicodeCategory(::StringW value, int32_t index) ;

/// @brief Method InternalGetUnicodeCategory addr 0x240f67c size 0x1c virtual false final false
static System::Globalization::UnicodeCategory InternalGetUnicodeCategory(::StringW str, int32_t index, ByRef<int32_t> charLength) ;

/// @brief Method IsWhiteSpace addr 0x240f698 size 0x1c virtual false final false
static bool IsWhiteSpace(::StringW s, int32_t index) ;

/// @brief Method IsWhiteSpace addr 0x240f6b4 size 0x28 virtual false final false
static bool IsWhiteSpace(char16_t c) ;

/// @brief Method get_CategoryLevel1Index addr 0x240f4ac size 0x74 virtual false final false
static System::ReadOnlySpan_1<uint8_t> get_CategoryLevel1Index() ;

/// @brief Method get_CategoryLevel2Index addr 0x240f520 size 0x74 virtual false final false
static System::ReadOnlySpan_1<uint8_t> get_CategoryLevel2Index() ;

/// @brief Method get_CategoryLevel3Index addr 0x240f594 size 0x74 virtual false final false
static System::ReadOnlySpan_1<uint8_t> get_CategoryLevel3Index() ;

/// @brief Method get_CategoriesValue addr 0x240f608 size 0x74 virtual false final false
static System::ReadOnlySpan_1<uint8_t> get_CategoriesValue() ;

/// @brief Method get_NumericLevel1Index addr 0x240f0e0 size 0x74 virtual false final false
static System::ReadOnlySpan_1<uint8_t> get_NumericLevel1Index() ;

/// @brief Method get_NumericLevel2Index addr 0x240f154 size 0x74 virtual false final false
static System::ReadOnlySpan_1<uint8_t> get_NumericLevel2Index() ;

/// @brief Method get_NumericLevel3Index addr 0x240f1c8 size 0x74 virtual false final false
static System::ReadOnlySpan_1<uint8_t> get_NumericLevel3Index() ;

/// @brief Method get_NumericValues addr 0x240f23c size 0x74 virtual false final false
static System::ReadOnlySpan_1<uint8_t> get_NumericValues() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::CharUnicodeInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CharUnicodeInfo, "System.Globalization", "CharUnicodeInfo");
