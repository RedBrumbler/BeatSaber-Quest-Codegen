#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace GlobalNamespace {
class System__Net__Http__Headers__Parser__DateTime____c;
}
namespace GlobalNamespace {
class System__Net__Http__Headers__Parser__MD5____c;
}
namespace System::Net::Http::Headers {
class Parser;
}
namespace System::Net::Http::Headers {
class System__Net__Http__Headers__Parser__DateTime;
}
namespace System::Net::Http::Headers {
class System__Net__Http__Headers__Parser__EmailAddress;
}
namespace System::Net::Http::Headers {
class System__Net__Http__Headers__Parser__Host;
}
namespace System::Net::Http::Headers {
class System__Net__Http__Headers__Parser__Int;
}
namespace System::Net::Http::Headers {
class System__Net__Http__Headers__Parser__Long;
}
namespace System::Net::Http::Headers {
class System__Net__Http__Headers__Parser__MD5;
}
namespace System::Net::Http::Headers {
class System__Net__Http__Headers__Parser__TimeSpanSeconds;
}
namespace System::Net::Http::Headers {
class System__Net__Http__Headers__Parser__Token;
}
namespace System::Net::Http::Headers {
class System__Net__Http__Headers__Parser__Uri;
}
// Type: ::Token
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14869))
// CS Name: System.Net.Http.Headers.Parser::Token
class CORDL_TYPE System__Net__Http__Headers__Parser__Token : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__Http__Headers__Parser__Token() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__Token", modifiers: " const&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__Token(System__Net__Http__Headers__Parser__Token const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__Token", modifiers: "&&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__Token(System__Net__Http__Headers__Parser__Token&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__Headers__Parser__Token(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Http__Headers__Parser__Token& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__Token& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__Token& operator=(System__Net__Http__Headers__Parser__Token&& o) noexcept = default;
  constexpr System__Net__Http__Headers__Parser__Token& operator=(System__Net__Http__Headers__Parser__Token const& o) noexcept = default;
                


// Methods

/// @brief Method Check addr 0x26d2d18 size 0x10c virtual false final false
static void Check(::StringW s) ;

/// @brief Method TryCheck addr 0x26db2d8 size 0x68 virtual false final false
static bool TryCheck(::StringW s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14870))
// CS Name: System.Net.Http.Headers.Parser::DateTime::<>c
class CORDL_TYPE System__Net__Http__Headers__Parser__DateTime____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__Http__Headers__Parser__DateTime____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__DateTime____c", modifiers: " const&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__DateTime____c(System__Net__Http__Headers__Parser__DateTime____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__DateTime____c", modifiers: "&&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__DateTime____c(System__Net__Http__Headers__Parser__DateTime____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__Headers__Parser__DateTime____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Http__Headers__Parser__DateTime____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__DateTime____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__DateTime____c& operator=(System__Net__Http__Headers__Parser__DateTime____c&& o) noexcept = default;
  constexpr System__Net__Http__Headers__Parser__DateTime____c& operator=(System__Net__Http__Headers__Parser__DateTime____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::System__Net__Http__Headers__Parser__DateTime____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::System__Net__Http__Headers__Parser__DateTime____c value) ;

static GlobalNamespace::System__Net__Http__Headers__Parser__DateTime____c __get___9() ;


// Methods

// Ctor Parameters []
explicit System__Net__Http__Headers__Parser__DateTime____c() ;

/// @brief Method .ctor addr 0x26de288 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__2_0 addr 0x26de290 size 0xd8 virtual false final false
 ::StringW __cctor_b__2_0(::bs_hook::Il2CppWrapperType l) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DateTime
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14871))
// CS Name: System.Net.Http.Headers.Parser::DateTime
class CORDL_TYPE System__Net__Http__Headers__Parser__DateTime : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::System__Net__Http__Headers__Parser__DateTime____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__Http__Headers__Parser__DateTime() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__DateTime", modifiers: " const&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__DateTime(System__Net__Http__Headers__Parser__DateTime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__DateTime", modifiers: "&&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__DateTime(System__Net__Http__Headers__Parser__DateTime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__Headers__Parser__DateTime(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Http__Headers__Parser__DateTime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__DateTime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__DateTime& operator=(System__Net__Http__Headers__Parser__DateTime&& o) noexcept = default;
  constexpr System__Net__Http__Headers__Parser__DateTime& operator=(System__Net__Http__Headers__Parser__DateTime const& o) noexcept = default;
                


// Fields

static System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> __declspec(property(get=__get_ToString, put=__set_ToString))  ToString;

static void __set_ToString(System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> value) ;

static System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> __get_ToString() ;


// Methods

/// @brief Method TryParse addr 0x26de0fc size 0x64 virtual false final false
static bool TryParse(::StringW input, ByRef<System::DateTimeOffset> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: ::EmailAddress
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14872))
// CS Name: System.Net.Http.Headers.Parser::EmailAddress
class CORDL_TYPE System__Net__Http__Headers__Parser__EmailAddress : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__Http__Headers__Parser__EmailAddress() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__EmailAddress", modifiers: " const&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__EmailAddress(System__Net__Http__Headers__Parser__EmailAddress const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__EmailAddress", modifiers: "&&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__EmailAddress(System__Net__Http__Headers__Parser__EmailAddress&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__Headers__Parser__EmailAddress(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Http__Headers__Parser__EmailAddress& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__EmailAddress& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__EmailAddress& operator=(System__Net__Http__Headers__Parser__EmailAddress&& o) noexcept = default;
  constexpr System__Net__Http__Headers__Parser__EmailAddress& operator=(System__Net__Http__Headers__Parser__EmailAddress const& o) noexcept = default;
                


// Methods

/// @brief Method TryParse addr 0x26de368 size 0xe8 virtual false final false
static bool TryParse(::StringW input, ByRef<::StringW> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: ::Host
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14873))
// CS Name: System.Net.Http.Headers.Parser::Host
class CORDL_TYPE System__Net__Http__Headers__Parser__Host : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__Http__Headers__Parser__Host() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__Host", modifiers: " const&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__Host(System__Net__Http__Headers__Parser__Host const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__Host", modifiers: "&&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__Host(System__Net__Http__Headers__Parser__Host&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__Headers__Parser__Host(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Http__Headers__Parser__Host& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__Host& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__Host& operator=(System__Net__Http__Headers__Parser__Host&& o) noexcept = default;
  constexpr System__Net__Http__Headers__Parser__Host& operator=(System__Net__Http__Headers__Parser__Host const& o) noexcept = default;
                


// Methods

/// @brief Method TryParse addr 0x26de450 size 0xc8 virtual false final false
static bool TryParse(::StringW input, ByRef<::StringW> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: ::Int
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14874))
// CS Name: System.Net.Http.Headers.Parser::Int
class CORDL_TYPE System__Net__Http__Headers__Parser__Int : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__Http__Headers__Parser__Int() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__Int", modifiers: " const&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__Int(System__Net__Http__Headers__Parser__Int const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__Int", modifiers: "&&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__Int(System__Net__Http__Headers__Parser__Int&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__Headers__Parser__Int(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Http__Headers__Parser__Int& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__Int& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__Int& operator=(System__Net__Http__Headers__Parser__Int&& o) noexcept = default;
  constexpr System__Net__Http__Headers__Parser__Int& operator=(System__Net__Http__Headers__Parser__Int const& o) noexcept = default;
                


// Methods

/// @brief Method TryParse addr 0x26de518 size 0x78 virtual false final false
static bool TryParse(::StringW input, ByRef<int32_t> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: ::Long
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14875))
// CS Name: System.Net.Http.Headers.Parser::Long
class CORDL_TYPE System__Net__Http__Headers__Parser__Long : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__Http__Headers__Parser__Long() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__Long", modifiers: " const&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__Long(System__Net__Http__Headers__Parser__Long const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__Long", modifiers: "&&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__Long(System__Net__Http__Headers__Parser__Long&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__Headers__Parser__Long(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Http__Headers__Parser__Long& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__Long& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__Long& operator=(System__Net__Http__Headers__Parser__Long&& o) noexcept = default;
  constexpr System__Net__Http__Headers__Parser__Long& operator=(System__Net__Http__Headers__Parser__Long const& o) noexcept = default;
                


// Methods

/// @brief Method TryParse addr 0x26de590 size 0x78 virtual false final false
static bool TryParse(::StringW input, ByRef<int64_t> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14876))
// CS Name: System.Net.Http.Headers.Parser::MD5::<>c
class CORDL_TYPE System__Net__Http__Headers__Parser__MD5____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__Http__Headers__Parser__MD5____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__MD5____c", modifiers: " const&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__MD5____c(System__Net__Http__Headers__Parser__MD5____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__MD5____c", modifiers: "&&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__MD5____c(System__Net__Http__Headers__Parser__MD5____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__Headers__Parser__MD5____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Http__Headers__Parser__MD5____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__MD5____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__MD5____c& operator=(System__Net__Http__Headers__Parser__MD5____c&& o) noexcept = default;
  constexpr System__Net__Http__Headers__Parser__MD5____c& operator=(System__Net__Http__Headers__Parser__MD5____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::System__Net__Http__Headers__Parser__MD5____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::System__Net__Http__Headers__Parser__MD5____c value) ;

static GlobalNamespace::System__Net__Http__Headers__Parser__MD5____c __get___9() ;


// Methods

// Ctor Parameters []
explicit System__Net__Http__Headers__Parser__MD5____c() ;

/// @brief Method .ctor addr 0x26de820 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__2_0 addr 0x26de828 size 0x94 virtual false final false
 ::StringW __cctor_b__2_0(::bs_hook::Il2CppWrapperType l) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MD5
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14877))
// CS Name: System.Net.Http.Headers.Parser::MD5
class CORDL_TYPE System__Net__Http__Headers__Parser__MD5 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::System__Net__Http__Headers__Parser__MD5____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__Http__Headers__Parser__MD5() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__MD5", modifiers: " const&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__MD5(System__Net__Http__Headers__Parser__MD5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__MD5", modifiers: "&&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__MD5(System__Net__Http__Headers__Parser__MD5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__Headers__Parser__MD5(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Http__Headers__Parser__MD5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__MD5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__MD5& operator=(System__Net__Http__Headers__Parser__MD5&& o) noexcept = default;
  constexpr System__Net__Http__Headers__Parser__MD5& operator=(System__Net__Http__Headers__Parser__MD5 const& o) noexcept = default;
                


// Fields

static System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> __declspec(property(get=__get_ToString, put=__set_ToString))  ToString;

static void __set_ToString(System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> value) ;

static System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> __get_ToString() ;


// Methods

/// @brief Method TryParse addr 0x26de608 size 0xf0 virtual false final false
static bool TryParse(::StringW input, ByRef<::ArrayW<uint8_t>> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: ::TimeSpanSeconds
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14878))
// CS Name: System.Net.Http.Headers.Parser::TimeSpanSeconds
class CORDL_TYPE System__Net__Http__Headers__Parser__TimeSpanSeconds : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__Http__Headers__Parser__TimeSpanSeconds() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__TimeSpanSeconds", modifiers: " const&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__TimeSpanSeconds(System__Net__Http__Headers__Parser__TimeSpanSeconds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__TimeSpanSeconds", modifiers: "&&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__TimeSpanSeconds(System__Net__Http__Headers__Parser__TimeSpanSeconds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__Headers__Parser__TimeSpanSeconds(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Http__Headers__Parser__TimeSpanSeconds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__TimeSpanSeconds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__TimeSpanSeconds& operator=(System__Net__Http__Headers__Parser__TimeSpanSeconds&& o) noexcept = default;
  constexpr System__Net__Http__Headers__Parser__TimeSpanSeconds& operator=(System__Net__Http__Headers__Parser__TimeSpanSeconds const& o) noexcept = default;
                


// Methods

/// @brief Method TryParse addr 0x26de8bc size 0xb0 virtual false final false
static bool TryParse(::StringW input, ByRef<System::TimeSpan> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: ::Uri
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14879))
// CS Name: System.Net.Http.Headers.Parser::Uri
class CORDL_TYPE System__Net__Http__Headers__Parser__Uri : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__Http__Headers__Parser__Uri() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__Uri", modifiers: " const&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__Uri(System__Net__Http__Headers__Parser__Uri const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__Parser__Uri", modifiers: "&&", def_value: None }]
constexpr System__Net__Http__Headers__Parser__Uri(System__Net__Http__Headers__Parser__Uri&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__Headers__Parser__Uri(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Http__Headers__Parser__Uri& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__Uri& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Http__Headers__Parser__Uri& operator=(System__Net__Http__Headers__Parser__Uri&& o) noexcept = default;
  constexpr System__Net__Http__Headers__Parser__Uri& operator=(System__Net__Http__Headers__Parser__Uri const& o) noexcept = default;
                


// Methods

/// @brief Method TryParse addr 0x26de96c size 0x6c virtual false final false
static bool TryParse(::StringW input, ByRef<System::Uri> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: System.Net.Http.Headers::Parser
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14880))
// CS Name: System.Net.Http.Headers.Parser
class CORDL_TYPE Parser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Uri = System::Net::Http::Headers::System__Net__Http__Headers__Parser__Uri;

using TimeSpanSeconds = System::Net::Http::Headers::System__Net__Http__Headers__Parser__TimeSpanSeconds;

using MD5 = System::Net::Http::Headers::System__Net__Http__Headers__Parser__MD5;

using Long = System::Net::Http::Headers::System__Net__Http__Headers__Parser__Long;

using Int = System::Net::Http::Headers::System__Net__Http__Headers__Parser__Int;

using Host = System::Net::Http::Headers::System__Net__Http__Headers__Parser__Host;

using EmailAddress = System::Net::Http::Headers::System__Net__Http__Headers__Parser__EmailAddress;

using DateTime = System::Net::Http::Headers::System__Net__Http__Headers__Parser__DateTime;

using Token = System::Net::Http::Headers::System__Net__Http__Headers__Parser__Token;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Parser() = default;

// Ctor Parameters [CppParam { name: "", ty: "Parser", modifiers: " const&", def_value: None }]
constexpr Parser(Parser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Parser", modifiers: "&&", def_value: None }]
constexpr Parser(Parser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Parser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Parser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Parser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Parser& operator=(Parser&& o) noexcept = default;
  constexpr Parser& operator=(Parser const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(GlobalNamespace::System__Net__Http__Headers__Parser__DateTime____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Net__Http__Headers__Parser__DateTime____c, "System.Net.Http.Headers", "Parser/DateTime/<>c");
NEED_NO_BOX(GlobalNamespace::System__Net__Http__Headers__Parser__MD5____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Net__Http__Headers__Parser__MD5____c, "System.Net.Http.Headers", "Parser/MD5/<>c");
NEED_NO_BOX(System::Net::Http::Headers::Parser);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Parser, "System.Net.Http.Headers", "Parser");
NEED_NO_BOX(System::Net::Http::Headers::System__Net__Http__Headers__Parser__DateTime);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::System__Net__Http__Headers__Parser__DateTime, "System.Net.Http.Headers", "Parser/DateTime");
NEED_NO_BOX(System::Net::Http::Headers::System__Net__Http__Headers__Parser__EmailAddress);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::System__Net__Http__Headers__Parser__EmailAddress, "System.Net.Http.Headers", "Parser/EmailAddress");
NEED_NO_BOX(System::Net::Http::Headers::System__Net__Http__Headers__Parser__Host);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::System__Net__Http__Headers__Parser__Host, "System.Net.Http.Headers", "Parser/Host");
NEED_NO_BOX(System::Net::Http::Headers::System__Net__Http__Headers__Parser__Int);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::System__Net__Http__Headers__Parser__Int, "System.Net.Http.Headers", "Parser/Int");
NEED_NO_BOX(System::Net::Http::Headers::System__Net__Http__Headers__Parser__Long);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::System__Net__Http__Headers__Parser__Long, "System.Net.Http.Headers", "Parser/Long");
NEED_NO_BOX(System::Net::Http::Headers::System__Net__Http__Headers__Parser__MD5);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::System__Net__Http__Headers__Parser__MD5, "System.Net.Http.Headers", "Parser/MD5");
NEED_NO_BOX(System::Net::Http::Headers::System__Net__Http__Headers__Parser__TimeSpanSeconds);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::System__Net__Http__Headers__Parser__TimeSpanSeconds, "System.Net.Http.Headers", "Parser/TimeSpanSeconds");
NEED_NO_BOX(System::Net::Http::Headers::System__Net__Http__Headers__Parser__Token);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::System__Net__Http__Headers__Parser__Token, "System.Net.Http.Headers", "Parser/Token");
NEED_NO_BOX(System::Net::Http::Headers::System__Net__Http__Headers__Parser__Uri);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::System__Net__Http__Headers__Parser__Uri, "System.Net.Http.Headers", "Parser/Uri");
