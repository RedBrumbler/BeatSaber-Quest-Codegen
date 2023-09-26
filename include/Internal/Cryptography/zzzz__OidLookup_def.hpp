#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Security::Cryptography {
struct OidGroup;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Internal::Cryptography {
class Internal__Cryptography__OidLookup____c;
}
namespace Internal::Cryptography {
class OidLookup;
}
// Type: ::<>c
namespace Internal::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7723))
// CS Name: Internal.Cryptography.OidLookup::<>c
class CORDL_TYPE Internal__Cryptography__OidLookup____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Internal__Cryptography__OidLookup____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Internal__Cryptography__OidLookup____c", modifiers: " const&", def_value: None }]
constexpr Internal__Cryptography__OidLookup____c(Internal__Cryptography__OidLookup____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Internal__Cryptography__OidLookup____c", modifiers: "&&", def_value: None }]
constexpr Internal__Cryptography__OidLookup____c(Internal__Cryptography__OidLookup____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Internal__Cryptography__OidLookup____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Internal__Cryptography__OidLookup____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Internal__Cryptography__OidLookup____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Internal__Cryptography__OidLookup____c& operator=(Internal__Cryptography__OidLookup____c&& o) noexcept = default;
  constexpr Internal__Cryptography__OidLookup____c& operator=(Internal__Cryptography__OidLookup____c const& o) noexcept = default;
                


// Fields

static Internal::Cryptography::Internal__Cryptography__OidLookup____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Internal::Cryptography::Internal__Cryptography__OidLookup____c value) ;

static Internal::Cryptography::Internal__Cryptography__OidLookup____c __get___9() ;


// Methods

// Ctor Parameters []
explicit Internal__Cryptography__OidLookup____c() ;

/// @brief Method .ctor addr 0x26c8810 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__10_0 addr 0x26c8818 size 0x3c virtual false final false
 ::StringW __cctor_b__10_0(System::Collections::Generic::KeyValuePair_2<::StringW,::StringW> kvp) ;

/// @brief Method <.cctor>b__10_1 addr 0x26c8854 size 0x3c virtual false final false
 ::StringW __cctor_b__10_1(System::Collections::Generic::KeyValuePair_2<::StringW,::StringW> kvp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Internal::Cryptography
// Type: Internal.Cryptography::OidLookup
namespace Internal::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7724))
// CS Name: Internal.Cryptography.OidLookup
class CORDL_TYPE OidLookup : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = Internal::Cryptography::Internal__Cryptography__OidLookup____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OidLookup() = default;

// Ctor Parameters [CppParam { name: "", ty: "OidLookup", modifiers: " const&", def_value: None }]
constexpr OidLookup(OidLookup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OidLookup", modifiers: "&&", def_value: None }]
constexpr OidLookup(OidLookup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OidLookup(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OidLookup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OidLookup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OidLookup& operator=(OidLookup&& o) noexcept = default;
  constexpr OidLookup& operator=(OidLookup const& o) noexcept = default;
                


// Fields

static System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::StringW> __declspec(property(get=__get_s_lateBoundOidToFriendlyName, put=__set_s_lateBoundOidToFriendlyName))  s_lateBoundOidToFriendlyName;

static void __set_s_lateBoundOidToFriendlyName(System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::StringW> value) ;

static System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::StringW> __get_s_lateBoundOidToFriendlyName() ;

static System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::StringW> __declspec(property(get=__get_s_lateBoundFriendlyNameToOid, put=__set_s_lateBoundFriendlyNameToOid))  s_lateBoundFriendlyNameToOid;

static void __set_s_lateBoundFriendlyNameToOid(System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::StringW> value) ;

static System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::StringW> __get_s_lateBoundFriendlyNameToOid() ;

static System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get_s_friendlyNameToOid, put=__set_s_friendlyNameToOid))  s_friendlyNameToOid;

static void __set_s_friendlyNameToOid(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get_s_friendlyNameToOid() ;

static System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get_s_oidToFriendlyName, put=__set_s_oidToFriendlyName))  s_oidToFriendlyName;

static void __set_s_oidToFriendlyName(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get_s_oidToFriendlyName() ;

static System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get_s_compatOids, put=__set_s_compatOids))  s_compatOids;

static void __set_s_compatOids(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get_s_compatOids() ;


// Methods

/// @brief Method ToFriendlyName addr 0x26c60d4 size 0x1e0 virtual false final false
static ::StringW ToFriendlyName(::StringW oid, System::Security::Cryptography::OidGroup oidGroup, bool fallBackToAllGroups) ;

/// @brief Method ToOid addr 0x26c65f4 size 0x1b4 virtual false final false
static ::StringW ToOid(::StringW friendlyName, System::Security::Cryptography::OidGroup oidGroup, bool fallBackToAllGroups) ;

/// @brief Method ShouldUseCache addr 0x26c62b4 size 0x8 virtual false final false
static bool ShouldUseCache(System::Security::Cryptography::OidGroup oidGroup) ;

/// @brief Method NativeOidToFriendlyName addr 0x26c62bc size 0x338 virtual false final false
static ::StringW NativeOidToFriendlyName(::StringW oid, System::Security::Cryptography::OidGroup oidGroup, bool fallBackToAllGroups) ;

/// @brief Method NativeFriendlyNameToOid addr 0x26c67a8 size 0x344 virtual false final false
static ::StringW NativeFriendlyNameToOid(::StringW friendlyName, System::Security::Cryptography::OidGroup oidGroup, bool fallBackToAllGroups) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Internal::Cryptography
NEED_NO_BOX(Internal::Cryptography::Internal__Cryptography__OidLookup____c);
DEFINE_IL2CPP_ARG_TYPE(Internal::Cryptography::Internal__Cryptography__OidLookup____c, "Internal.Cryptography", "OidLookup/<>c");
NEED_NO_BOX(Internal::Cryptography::OidLookup);
DEFINE_IL2CPP_ARG_TYPE(Internal::Cryptography::OidLookup, "Internal.Cryptography", "OidLookup");
