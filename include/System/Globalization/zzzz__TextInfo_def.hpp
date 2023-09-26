#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Globalization {
class CultureData;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class ICloneable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Globalization {
struct UnicodeCategory;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Globalization {
class TextInfo;
}
// Type: System.Globalization::TextInfo
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3691))
// CS Name: System.Globalization.TextInfo
class CORDL_TYPE TextInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~TextInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextInfo", modifiers: " const&", def_value: None }]
constexpr TextInfo(TextInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextInfo", modifiers: "&&", def_value: None }]
constexpr TextInfo(TextInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextInfo& operator=(TextInfo&& o) noexcept = default;
  constexpr TextInfo& operator=(TextInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_listSeparator, put=__set_m_listSeparator))  m_listSeparator;

constexpr void __set_m_listSeparator(::StringW value) ;

constexpr ::StringW __get_m_listSeparator() const;

 bool __declspec(property(get=__get_m_isReadOnly, put=__set_m_isReadOnly))  m_isReadOnly;

constexpr void __set_m_isReadOnly(bool value) ;

constexpr bool __get_m_isReadOnly() const;

 ::StringW __declspec(property(get=__get_m_cultureName, put=__set_m_cultureName))  m_cultureName;

constexpr void __set_m_cultureName(::StringW value) ;

constexpr ::StringW __get_m_cultureName() const;

 System::Globalization::CultureData __declspec(property(get=__get_m_cultureData, put=__set_m_cultureData))  m_cultureData;

constexpr void __set_m_cultureData(System::Globalization::CultureData value) ;

constexpr System::Globalization::CultureData __get_m_cultureData() const;

 ::StringW __declspec(property(get=__get_m_textInfoName, put=__set_m_textInfoName))  m_textInfoName;

constexpr void __set_m_textInfoName(::StringW value) ;

constexpr ::StringW __get_m_textInfoName() const;

 System::Nullable_1<bool> __declspec(property(get=__get_m_IsAsciiCasingSameAsInvariant, put=__set_m_IsAsciiCasingSameAsInvariant))  m_IsAsciiCasingSameAsInvariant;

constexpr void __set_m_IsAsciiCasingSameAsInvariant(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get_m_IsAsciiCasingSameAsInvariant() const;

static System::Globalization::TextInfo __declspec(property(get=__get_s_Invariant, put=__set_s_Invariant))  s_Invariant;

static void __set_s_Invariant(System::Globalization::TextInfo value) ;

static System::Globalization::TextInfo __get_s_Invariant() ;

 ::StringW __declspec(property(get=__get_customCultureName, put=__set_customCultureName))  customCultureName;

constexpr void __set_customCultureName(::StringW value) ;

constexpr ::StringW __get_customCultureName() const;

 int32_t __declspec(property(get=__get_m_nDataItem, put=__set_m_nDataItem))  m_nDataItem;

constexpr void __set_m_nDataItem(int32_t value) ;

constexpr int32_t __get_m_nDataItem() const;

 bool __declspec(property(get=__get_m_useUserOverride, put=__set_m_useUserOverride))  m_useUserOverride;

constexpr void __set_m_useUserOverride(bool value) ;

constexpr bool __get_m_useUserOverride() const;

 int32_t __declspec(property(get=__get_m_win32LangID, put=__set_m_win32LangID))  m_win32LangID;

constexpr void __set_m_win32LangID(int32_t value) ;

constexpr int32_t __get_m_win32LangID() const;

/// @brief Field wordSeparatorMask offset 0
static constexpr int32_t  wordSeparatorMask{536672256};


// Properties

static System::Globalization::TextInfo __declspec(property(get=get_Invariant))  Invariant;

 ::StringW __declspec(property(get=get_CultureName))  CultureName;

 bool __declspec(property(get=get_IsAsciiCasingSameAsInvariant))  IsAsciiCasingSameAsInvariant;


// Methods

/// @brief Method get_Invariant addr 0x242db00 size 0x9c virtual false final false
static System::Globalization::TextInfo get_Invariant() ;

// Ctor Parameters [CppParam { name: "cultureData", ty: "System::Globalization::CultureData", modifiers: "", def_value: None }]
explicit TextInfo(System::Globalization::CultureData cultureData) ;

/// @brief Method .ctor addr 0x242df40 size 0x3c virtual false final false
 void _ctor(System::Globalization::CultureData cultureData) ;

/// @brief Method OnDeserializing addr 0x242df7c size 0x8 virtual false final false
 void OnDeserializing(System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method OnDeserialized addr 0x242df84 size 0xdc virtual false final false
 void OnDeserialized() ;

/// @brief Method OnDeserialized addr 0x242e4d0 size 0x4 virtual false final false
 void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method OnSerializing addr 0x242e4d4 size 0x7c virtual false final false
 void OnSerializing(System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method get_CultureName addr 0x242e550 size 0x8 virtual false final false
 ::StringW get_CultureName() ;

/// @brief Method Clone addr 0x242e558 size 0x88 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method SetReadOnlyState addr 0x242e5e0 size 0xc virtual false final false
 void SetReadOnlyState(bool readOnly) ;

/// @brief Method ToLower addr 0x242e5ec size 0x64 virtual true final false
 char16_t ToLower(char16_t c) ;

/// @brief Method ToLower addr 0x242ebc4 size 0x58 virtual true final false
 ::StringW ToLower(::StringW str) ;

/// @brief Method ToLowerAsciiInvariant addr 0x242e764 size 0x1c virtual false final false
static char16_t ToLowerAsciiInvariant(char16_t c) ;

/// @brief Method ToUpper addr 0x242ed00 size 0x64 virtual true final false
 char16_t ToUpper(char16_t c) ;

/// @brief Method ToUpper addr 0x242f1e4 size 0x58 virtual true final false
 ::StringW ToUpper(::StringW str) ;

/// @brief Method ToUpperAsciiInvariant addr 0x242ed64 size 0x1c virtual false final false
static char16_t ToUpperAsciiInvariant(char16_t c) ;

/// @brief Method IsAscii addr 0x242e650 size 0x10 virtual false final false
static bool IsAscii(char16_t c) ;

/// @brief Method get_IsAsciiCasingSameAsInvariant addr 0x242e660 size 0x104 virtual false final false
 bool get_IsAsciiCasingSameAsInvariant() ;

/// @brief Method Equals addr 0x242f320 size 0xa0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x242f3c0 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x242f3e0 size 0x58 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToTitleCase addr 0x242f438 size 0x33c virtual false final false
 ::StringW ToTitleCase(::StringW str) ;

/// @brief Method AddNonLetter addr 0x242f8f8 size 0x9c virtual false final false
static int32_t AddNonLetter(ByRef<System::Text::StringBuilder> result, ByRef<::StringW> input, int32_t inputIndex, int32_t charLen) ;

/// @brief Method AddTitlecaseLetter addr 0x242f774 size 0x14c virtual false final false
 int32_t AddTitlecaseLetter(ByRef<System::Text::StringBuilder> result, ByRef<::StringW> input, int32_t inputIndex, int32_t charLen) ;

/// @brief Method IsWordSeparator addr 0x242f8dc size 0x1c virtual false final false
static bool IsWordSeparator(System::Globalization::UnicodeCategory category) ;

/// @brief Method IsLetterCategory addr 0x242f8c0 size 0x1c virtual false final false
static bool IsLetterCategory(System::Globalization::UnicodeCategory uc) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x242f994 size 0x4 virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method ToUpperInternal addr 0x242f23c size 0xe4 virtual false final false
 ::StringW ToUpperInternal(::StringW str) ;

/// @brief Method ToLowerInternal addr 0x242ec1c size 0xe4 virtual false final false
 ::StringW ToLowerInternal(::StringW str) ;

/// @brief Method ToUpperInternal addr 0x242ed80 size 0x464 virtual false final false
 char16_t ToUpperInternal(char16_t c) ;

/// @brief Method ToLowerInternal addr 0x242e780 size 0x444 virtual false final false
 char16_t ToLowerInternal(char16_t c) ;

/// @brief Method ToUpperAsciiInvariant addr 0x242f998 size 0x90 virtual false final false
 void ToUpperAsciiInvariant(System::ReadOnlySpan_1<char16_t> source, System::Span_1<char16_t> destination) ;

/// @brief Method ChangeCase addr 0x242fa28 size 0x140 virtual false final false
 void ChangeCase(System::ReadOnlySpan_1<char16_t> source, System::Span_1<char16_t> destination, bool toUpper) ;

// Ctor Parameters []
explicit TextInfo() ;

/// @brief Method .ctor addr 0x242fb68 size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::TextInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::TextInfo, "System.Globalization", "TextInfo");
