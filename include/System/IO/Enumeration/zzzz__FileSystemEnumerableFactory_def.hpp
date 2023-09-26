#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::IO {
class FileInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
class DirectoryInfo;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System::IO {
class FileSystemInfo;
}
namespace System::IO::Enumeration {
struct FileSystemEntry;
}
namespace System::IO::Enumeration {
template<typename TResult>
class System__IO__Enumeration__FileSystemEnumerable_1__FindTransform;
}
// Forward declare root types
namespace System::IO::Enumeration {
class FileSystemEnumerableFactory;
}
namespace System::IO::Enumeration {
class System__IO__Enumeration__FileSystemEnumerableFactory____c;
}
namespace System::IO::Enumeration {
class System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0;
}
namespace System::IO::Enumeration {
class System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0;
}
namespace System::IO::Enumeration {
class System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0;
}
namespace System::IO::Enumeration {
class System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0;
}
namespace System::IO::Enumeration {
class System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0;
}
namespace System::IO::Enumeration {
class System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0;
}
// Type: ::<>c__DisplayClass3_0
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3632))
// CS Name: System.IO.Enumeration.FileSystemEnumerableFactory::<>c__DisplayClass3_0
class CORDL_TYPE System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0", modifiers: " const&", def_value: None }]
constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0& operator=(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0&& o) noexcept = default;
  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0& operator=(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_expression, put=__set_expression))  expression;

constexpr void __set_expression(::StringW value) ;

constexpr ::StringW __get_expression() const;

 System::IO::EnumerationOptions __declspec(property(get=__get_options, put=__set_options))  options;

constexpr void __set_options(System::IO::EnumerationOptions value) ;

constexpr System::IO::EnumerationOptions __get_options() const;


// Methods

// Ctor Parameters []
explicit System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0() ;

/// @brief Method .ctor addr 0x240d7d4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <UserFiles>b__1 addr 0x240e16c size 0xa0 virtual false final false
 bool _UserFiles_b__1(ByRef<System::IO::Enumeration::FileSystemEntry> entry) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
// Type: ::<>c
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3633))
// CS Name: System.IO.Enumeration.FileSystemEnumerableFactory::<>c
class CORDL_TYPE System__IO__Enumeration__FileSystemEnumerableFactory____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__IO__Enumeration__FileSystemEnumerableFactory____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Enumeration__FileSystemEnumerableFactory____c", modifiers: " const&", def_value: None }]
constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c(System__IO__Enumeration__FileSystemEnumerableFactory____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Enumeration__FileSystemEnumerableFactory____c", modifiers: "&&", def_value: None }]
constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c(System__IO__Enumeration__FileSystemEnumerableFactory____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__Enumeration__FileSystemEnumerableFactory____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c& operator=(System__IO__Enumeration__FileSystemEnumerableFactory____c&& o) noexcept = default;
  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c& operator=(System__IO__Enumeration__FileSystemEnumerableFactory____c const& o) noexcept = default;
                


// Fields

static System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c value) ;

static System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c __get___9() ;

static System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<::StringW> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<::StringW> value) ;

static System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<::StringW> __get___9__3_0() ;

static System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<::StringW> __declspec(property(get=__get___9__4_0, put=__set___9__4_0))  __9__4_0;

static void __set___9__4_0(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<::StringW> value) ;

static System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<::StringW> __get___9__4_0() ;

static System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<::StringW> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<::StringW> value) ;

static System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<::StringW> __get___9__5_0() ;

static System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<System::IO::FileInfo> __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<System::IO::FileInfo> value) ;

static System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<System::IO::FileInfo> __get___9__6_0() ;

static System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<System::IO::DirectoryInfo> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<System::IO::DirectoryInfo> value) ;

static System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<System::IO::DirectoryInfo> __get___9__7_0() ;

static System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<System::IO::FileSystemInfo> __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<System::IO::FileSystemInfo> value) ;

static System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerable_1__FindTransform<System::IO::FileSystemInfo> __get___9__8_0() ;


// Methods

// Ctor Parameters []
explicit System__IO__Enumeration__FileSystemEnumerableFactory____c() ;

/// @brief Method .ctor addr 0x240e270 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <UserFiles>b__3_0 addr 0x240e278 size 0x8 virtual false final false
 ::StringW _UserFiles_b__3_0(ByRef<System::IO::Enumeration::FileSystemEntry> entry) ;

/// @brief Method <UserDirectories>b__4_0 addr 0x240e280 size 0x8 virtual false final false
 ::StringW _UserDirectories_b__4_0(ByRef<System::IO::Enumeration::FileSystemEntry> entry) ;

/// @brief Method <UserEntries>b__5_0 addr 0x240e288 size 0x8 virtual false final false
 ::StringW _UserEntries_b__5_0(ByRef<System::IO::Enumeration::FileSystemEntry> entry) ;

/// @brief Method <FileInfos>b__6_0 addr 0x240e290 size 0x60 virtual false final false
 System::IO::FileInfo _FileInfos_b__6_0(ByRef<System::IO::Enumeration::FileSystemEntry> entry) ;

/// @brief Method <DirectoryInfos>b__7_0 addr 0x240e2f0 size 0x60 virtual false final false
 System::IO::DirectoryInfo _DirectoryInfos_b__7_0(ByRef<System::IO::Enumeration::FileSystemEntry> entry) ;

/// @brief Method <FileSystemInfos>b__8_0 addr 0x240e350 size 0x8 virtual false final false
 System::IO::FileSystemInfo _FileSystemInfos_b__8_0(ByRef<System::IO::Enumeration::FileSystemEntry> entry) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
// Type: ::<>c__DisplayClass4_0
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3634))
// CS Name: System.IO.Enumeration.FileSystemEnumerableFactory::<>c__DisplayClass4_0
class CORDL_TYPE System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0", modifiers: " const&", def_value: None }]
constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0& operator=(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0&& o) noexcept = default;
  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0& operator=(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_expression, put=__set_expression))  expression;

constexpr void __set_expression(::StringW value) ;

constexpr ::StringW __get_expression() const;

 System::IO::EnumerationOptions __declspec(property(get=__get_options, put=__set_options))  options;

constexpr void __set_options(System::IO::EnumerationOptions value) ;

constexpr System::IO::EnumerationOptions __get_options() const;


// Methods

// Ctor Parameters []
explicit System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0() ;

/// @brief Method .ctor addr 0x240d9a0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <UserDirectories>b__1 addr 0x240e358 size 0xa0 virtual false final false
 bool _UserDirectories_b__1(ByRef<System::IO::Enumeration::FileSystemEntry> entry) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
// Type: ::<>c__DisplayClass5_0
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3635))
// CS Name: System.IO.Enumeration.FileSystemEnumerableFactory::<>c__DisplayClass5_0
class CORDL_TYPE System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0& operator=(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0&& o) noexcept = default;
  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0& operator=(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_expression, put=__set_expression))  expression;

constexpr void __set_expression(::StringW value) ;

constexpr ::StringW __get_expression() const;

 System::IO::EnumerationOptions __declspec(property(get=__get_options, put=__set_options))  options;

constexpr void __set_options(System::IO::EnumerationOptions value) ;

constexpr System::IO::EnumerationOptions __get_options() const;


// Methods

// Ctor Parameters []
explicit System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0() ;

/// @brief Method .ctor addr 0x240db6c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <UserEntries>b__1 addr 0x240e3f8 size 0x84 virtual false final false
 bool _UserEntries_b__1(ByRef<System::IO::Enumeration::FileSystemEntry> entry) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
// Type: ::<>c__DisplayClass6_0
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3636))
// CS Name: System.IO.Enumeration.FileSystemEnumerableFactory::<>c__DisplayClass6_0
class CORDL_TYPE System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0", modifiers: " const&", def_value: None }]
constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0& operator=(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0&& o) noexcept = default;
  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0& operator=(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_expression, put=__set_expression))  expression;

constexpr void __set_expression(::StringW value) ;

constexpr ::StringW __get_expression() const;

 System::IO::EnumerationOptions __declspec(property(get=__get_options, put=__set_options))  options;

constexpr void __set_options(System::IO::EnumerationOptions value) ;

constexpr System::IO::EnumerationOptions __get_options() const;


// Methods

// Ctor Parameters []
explicit System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0() ;

/// @brief Method .ctor addr 0x240dd38 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FileInfos>b__1 addr 0x240e47c size 0xa0 virtual false final false
 bool _FileInfos_b__1(ByRef<System::IO::Enumeration::FileSystemEntry> entry) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
// Type: ::<>c__DisplayClass7_0
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3637))
// CS Name: System.IO.Enumeration.FileSystemEnumerableFactory::<>c__DisplayClass7_0
class CORDL_TYPE System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0", modifiers: " const&", def_value: None }]
constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0& operator=(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0&& o) noexcept = default;
  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0& operator=(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_expression, put=__set_expression))  expression;

constexpr void __set_expression(::StringW value) ;

constexpr ::StringW __get_expression() const;

 System::IO::EnumerationOptions __declspec(property(get=__get_options, put=__set_options))  options;

constexpr void __set_options(System::IO::EnumerationOptions value) ;

constexpr System::IO::EnumerationOptions __get_options() const;


// Methods

// Ctor Parameters []
explicit System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0() ;

/// @brief Method .ctor addr 0x240df04 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DirectoryInfos>b__1 addr 0x240e51c size 0xa0 virtual false final false
 bool _DirectoryInfos_b__1(ByRef<System::IO::Enumeration::FileSystemEntry> entry) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
// Type: ::<>c__DisplayClass8_0
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3638))
// CS Name: System.IO.Enumeration.FileSystemEnumerableFactory::<>c__DisplayClass8_0
class CORDL_TYPE System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0", modifiers: " const&", def_value: None }]
constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0& operator=(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0&& o) noexcept = default;
  constexpr System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0& operator=(System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_expression, put=__set_expression))  expression;

constexpr void __set_expression(::StringW value) ;

constexpr ::StringW __get_expression() const;

 System::IO::EnumerationOptions __declspec(property(get=__get_options, put=__set_options))  options;

constexpr void __set_options(System::IO::EnumerationOptions value) ;

constexpr System::IO::EnumerationOptions __get_options() const;


// Methods

// Ctor Parameters []
explicit System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0() ;

/// @brief Method .ctor addr 0x240e0d0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FileSystemInfos>b__1 addr 0x240e5bc size 0x84 virtual false final false
 bool _FileSystemInfos_b__1(ByRef<System::IO::Enumeration::FileSystemEntry> entry) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
// Type: System.IO.Enumeration::FileSystemEnumerableFactory
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3639))
// CS Name: System.IO.Enumeration.FileSystemEnumerableFactory
class CORDL_TYPE FileSystemEnumerableFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass8_0 = System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0;

using __c__DisplayClass7_0 = System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0;

using __c__DisplayClass6_0 = System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0;

using __c__DisplayClass5_0 = System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0;

using __c__DisplayClass4_0 = System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0;

using __c = System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c;

using __c__DisplayClass3_0 = System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FileSystemEnumerableFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerableFactory", modifiers: " const&", def_value: None }]
constexpr FileSystemEnumerableFactory(FileSystemEnumerableFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerableFactory", modifiers: "&&", def_value: None }]
constexpr FileSystemEnumerableFactory(FileSystemEnumerableFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileSystemEnumerableFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FileSystemEnumerableFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileSystemEnumerableFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileSystemEnumerableFactory& operator=(FileSystemEnumerableFactory&& o) noexcept = default;
  constexpr FileSystemEnumerableFactory& operator=(FileSystemEnumerableFactory const& o) noexcept = default;
                


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_s_unixEscapeChars, put=__set_s_unixEscapeChars))  s_unixEscapeChars;

static void __set_s_unixEscapeChars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_s_unixEscapeChars() ;


// Methods

/// @brief Method NormalizeInputs addr 0x240cae4 size 0x45c virtual false final false
static void NormalizeInputs(ByRef<::StringW> directory, ByRef<::StringW> expression, System::IO::EnumerationOptions options) ;

/// @brief Method MatchesPattern addr 0x240d2dc size 0x224 virtual false final false
static bool MatchesPattern(::StringW expression, System::ReadOnlySpan_1<char16_t> name, System::IO::EnumerationOptions options) ;

/// @brief Method UserFiles addr 0x240d610 size 0x1c4 virtual false final false
static System::Collections::Generic::IEnumerable_1<::StringW> UserFiles(::StringW directory, ::StringW expression, System::IO::EnumerationOptions options) ;

/// @brief Method UserDirectories addr 0x240d7dc size 0x1c4 virtual false final false
static System::Collections::Generic::IEnumerable_1<::StringW> UserDirectories(::StringW directory, ::StringW expression, System::IO::EnumerationOptions options) ;

/// @brief Method UserEntries addr 0x240d9a8 size 0x1c4 virtual false final false
static System::Collections::Generic::IEnumerable_1<::StringW> UserEntries(::StringW directory, ::StringW expression, System::IO::EnumerationOptions options) ;

/// @brief Method FileInfos addr 0x240db74 size 0x1c4 virtual false final false
static System::Collections::Generic::IEnumerable_1<System::IO::FileInfo> FileInfos(::StringW directory, ::StringW expression, System::IO::EnumerationOptions options) ;

/// @brief Method DirectoryInfos addr 0x240dd40 size 0x1c4 virtual false final false
static System::Collections::Generic::IEnumerable_1<System::IO::DirectoryInfo> DirectoryInfos(::StringW directory, ::StringW expression, System::IO::EnumerationOptions options) ;

/// @brief Method FileSystemInfos addr 0x240df0c size 0x1c4 virtual false final false
static System::Collections::Generic::IEnumerable_1<System::IO::FileSystemInfo> FileSystemInfos(::StringW directory, ::StringW expression, System::IO::EnumerationOptions options) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
NEED_NO_BOX(System::IO::Enumeration::FileSystemEnumerableFactory);
DEFINE_IL2CPP_ARG_TYPE(System::IO::Enumeration::FileSystemEnumerableFactory, "System.IO.Enumeration", "FileSystemEnumerableFactory");
NEED_NO_BOX(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c);
DEFINE_IL2CPP_ARG_TYPE(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c");
NEED_NO_BOX(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass3_0, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c__DisplayClass3_0");
NEED_NO_BOX(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass4_0, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c__DisplayClass4_0");
NEED_NO_BOX(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass5_0, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c__DisplayClass5_0");
NEED_NO_BOX(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass6_0, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c__DisplayClass6_0");
NEED_NO_BOX(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass7_0, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c__DisplayClass7_0");
NEED_NO_BOX(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(System::IO::Enumeration::System__IO__Enumeration__FileSystemEnumerableFactory____c__DisplayClass8_0, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c__DisplayClass8_0");
