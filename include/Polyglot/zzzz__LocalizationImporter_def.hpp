#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace Polyglot {
class LocalizationDocument;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Polyglot {
struct Language;
}
namespace System::Collections {
class IEnumerator;
}
namespace Polyglot {
class Localization;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Polyglot {
struct GoogleDriveDownloadFormat;
}
namespace Polyglot {
class LocalizationAsset;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Polyglot {
class LocalizationImporter;
}
namespace Polyglot {
class Polyglot__LocalizationImporter____c__DisplayClass5_0;
}
namespace Polyglot {
class Polyglot__LocalizationImporter____c__DisplayClass8_0;
}
// Type: ::<>c__DisplayClass5_0
namespace Polyglot {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15558))
// CS Name: Polyglot.LocalizationImporter::<>c__DisplayClass5_0
class CORDL_TYPE Polyglot__LocalizationImporter____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Polyglot__LocalizationImporter____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Polyglot__LocalizationImporter____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr Polyglot__LocalizationImporter____c__DisplayClass5_0(Polyglot__LocalizationImporter____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Polyglot__LocalizationImporter____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr Polyglot__LocalizationImporter____c__DisplayClass5_0(Polyglot__LocalizationImporter____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Polyglot__LocalizationImporter____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Polyglot__LocalizationImporter____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Polyglot__LocalizationImporter____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Polyglot__LocalizationImporter____c__DisplayClass5_0& operator=(Polyglot__LocalizationImporter____c__DisplayClass5_0&& o) noexcept = default;
  constexpr Polyglot__LocalizationImporter____c__DisplayClass5_0& operator=(Polyglot__LocalizationImporter____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 Polyglot::Localization __declspec(property(get=__get_settings, put=__set_settings))  settings;

constexpr void __set_settings(Polyglot::Localization value) ;

constexpr Polyglot::Localization __get_settings() const;


// Methods

// Ctor Parameters []
explicit Polyglot__LocalizationImporter____c__DisplayClass5_0() ;

/// @brief Method .ctor addr 0x26a2ea0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ImportFromGoogle>b__0 addr 0x26a3ff0 size 0x74 virtual false final false
 void _ImportFromGoogle_b__0(::StringW s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
// Type: ::<>c__DisplayClass8_0
namespace Polyglot {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15559))
// CS Name: Polyglot.LocalizationImporter::<>c__DisplayClass8_0
class CORDL_TYPE Polyglot__LocalizationImporter____c__DisplayClass8_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Polyglot__LocalizationImporter____c__DisplayClass8_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Polyglot__LocalizationImporter____c__DisplayClass8_0", modifiers: " const&", def_value: None }]
constexpr Polyglot__LocalizationImporter____c__DisplayClass8_0(Polyglot__LocalizationImporter____c__DisplayClass8_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Polyglot__LocalizationImporter____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
constexpr Polyglot__LocalizationImporter____c__DisplayClass8_0(Polyglot__LocalizationImporter____c__DisplayClass8_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Polyglot__LocalizationImporter____c__DisplayClass8_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Polyglot__LocalizationImporter____c__DisplayClass8_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Polyglot__LocalizationImporter____c__DisplayClass8_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Polyglot__LocalizationImporter____c__DisplayClass8_0& operator=(Polyglot__LocalizationImporter____c__DisplayClass8_0&& o) noexcept = default;
  constexpr Polyglot__LocalizationImporter____c__DisplayClass8_0& operator=(Polyglot__LocalizationImporter____c__DisplayClass8_0 const& o) noexcept = default;
                


// Fields

 Polyglot::Localization __declspec(property(get=__get_settings, put=__set_settings))  settings;

constexpr void __set_settings(Polyglot::Localization value) ;

constexpr Polyglot::Localization __get_settings() const;


// Methods

// Ctor Parameters []
explicit Polyglot__LocalizationImporter____c__DisplayClass8_0() ;

/// @brief Method .ctor addr 0x26a3758 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DownloadCustomSheet>b__0 addr 0x26a4064 size 0x74 virtual false final false
 void _DownloadCustomSheet_b__0(::StringW s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
// Type: Polyglot::LocalizationImporter
namespace Polyglot {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15560))
// CS Name: Polyglot.LocalizationImporter
class CORDL_TYPE LocalizationImporter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass8_0 = Polyglot::Polyglot__LocalizationImporter____c__DisplayClass8_0;

using __c__DisplayClass5_0 = Polyglot::Polyglot__LocalizationImporter____c__DisplayClass5_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LocalizationImporter() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationImporter", modifiers: " const&", def_value: None }]
constexpr LocalizationImporter(LocalizationImporter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationImporter", modifiers: "&&", def_value: None }]
constexpr LocalizationImporter(LocalizationImporter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalizationImporter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LocalizationImporter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalizationImporter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalizationImporter& operator=(LocalizationImporter&& o) noexcept = default;
  constexpr LocalizationImporter& operator=(LocalizationImporter const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<::StringW>> __declspec(property(get=__get_languageStrings, put=__set_languageStrings))  languageStrings;

static void __set_languageStrings(System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<::StringW>> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<::StringW>> __get_languageStrings() ;

static System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_EmptyList, put=__set_EmptyList))  EmptyList;

static void __set_EmptyList(System::Collections::Generic::List_1<::StringW> value) ;

static System::Collections::Generic::List_1<::StringW> __get_EmptyList() ;

static System::Collections::Generic::List_1<Polyglot::LocalizationAsset> __declspec(property(get=__get_InputFiles, put=__set_InputFiles))  InputFiles;

static void __set_InputFiles(System::Collections::Generic::List_1<Polyglot::LocalizationAsset> value) ;

static System::Collections::Generic::List_1<Polyglot::LocalizationAsset> __get_InputFiles() ;


// Methods

/// @brief Method Initialize addr 0x26a2bbc size 0x118 virtual false final false
static void Initialize() ;

/// @brief Method ImportFromGoogle addr 0x26a2d9c size 0x104 virtual false final false
static void ImportFromGoogle(Polyglot::Localization settings) ;

/// @brief Method Import addr 0x26a2ed0 size 0x64 virtual false final false
static void Import(::StringW text, Polyglot::GoogleDriveDownloadFormat format) ;

/// @brief Method Download addr 0x26a2ea8 size 0x28 virtual false final false
static System::Collections::IEnumerator Download(Polyglot::LocalizationDocument document, System::Action_1<::StringW> done, System::Func_2<float_t,bool> progressbar) ;

/// @brief Method DownloadCustomSheet addr 0x26a35d4 size 0x184 virtual false final false
static System::Collections::IEnumerator DownloadCustomSheet(System::Func_2<float_t,bool> progressbar) ;

/// @brief Method ImportFromFiles addr 0x26a2cd4 size 0xc8 virtual false final false
static void ImportFromFiles(Polyglot::Localization settings) ;

/// @brief Method ImportInputFiles addr 0x26a3760 size 0x218 virtual false final false
static void ImportInputFiles() ;

/// @brief Method ImportTextFile addr 0x26a2f34 size 0x6a0 virtual false final false
static void ImportTextFile(::StringW text, Polyglot::GoogleDriveDownloadFormat format) ;

/// @brief Method IsLineBreak addr 0x26a252c size 0x90 virtual false final false
static bool IsLineBreak(::StringW currentString) ;

/// @brief Method GetLanguages addr 0x26a1bb4 size 0x310 virtual false final false
static System::Collections::Generic::List_1<::StringW> GetLanguages(::StringW key, System::Collections::Generic::List_1<Polyglot::Language> supportedLanguages) ;

/// @brief Method GetLanguagesStartsWith addr 0x26a3978 size 0x2e0 virtual false final false
static System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<::StringW>> GetLanguagesStartsWith(::StringW key) ;

/// @brief Method GetLanguagesContains addr 0x26a3c58 size 0x2e0 virtual false final false
static System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<::StringW>> GetLanguagesContains(::StringW key) ;

/// @brief Method Refresh addr 0x26a3f38 size 0xb8 virtual false final false
static void Refresh() ;

/// @brief Method GetKeys addr 0x26a26b8 size 0x94 virtual false final false
static System::Collections::Generic::List_1<::StringW> GetKeys() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
NEED_NO_BOX(Polyglot::LocalizationImporter);
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizationImporter, "Polyglot", "LocalizationImporter");
NEED_NO_BOX(Polyglot::Polyglot__LocalizationImporter____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(Polyglot::Polyglot__LocalizationImporter____c__DisplayClass5_0, "Polyglot", "LocalizationImporter/<>c__DisplayClass5_0");
NEED_NO_BOX(Polyglot::Polyglot__LocalizationImporter____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(Polyglot::Polyglot__LocalizationImporter____c__DisplayClass8_0, "Polyglot", "LocalizationImporter/<>c__DisplayClass8_0");
