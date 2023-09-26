#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Specialized/zzzz__NameObjectCollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class ArrayList;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class DBNull;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Collections::Specialized {
class NameValueCollection;
}
// Type: System.Collections.Specialized::NameValueCollection
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8392))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8383))
// CS Name: System.Collections.Specialized.NameValueCollection
class CORDL_TYPE NameValueCollection : public System::Collections::Specialized::NameObjectCollectionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~NameValueCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "NameValueCollection", modifiers: " const&", def_value: None }]
constexpr NameValueCollection(NameValueCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NameValueCollection", modifiers: "&&", def_value: None }]
constexpr NameValueCollection(NameValueCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NameValueCollection(void* ptr) noexcept : System::Collections::Specialized::NameObjectCollectionBase(ptr) {
}


  constexpr NameValueCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NameValueCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NameValueCollection& operator=(NameValueCollection&& o) noexcept = default;
  constexpr NameValueCollection& operator=(NameValueCollection const& o) noexcept = default;
                


// Fields

 ::ArrayW<::StringW> __declspec(property(get=__get__all, put=__set__all))  _all;

constexpr void __set__all(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__all() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__allKeys, put=__set__allKeys))  _allKeys;

constexpr void __set__allKeys(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__allKeys() const;


// Properties

 ::StringW __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

// Ctor Parameters []
explicit NameValueCollection() ;

/// @brief Method .ctor addr 0x27da318 size 0x54 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit NameValueCollection(int32_t capacity) ;

/// @brief Method .ctor addr 0x27da3cc size 0x64 virtual false final false
 void _ctor(int32_t capacity) ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "equalityComparer", ty: "System::Collections::IEqualityComparer", modifiers: "", def_value: None }]
explicit NameValueCollection(int32_t capacity, System::Collections::IEqualityComparer equalityComparer) ;

/// @brief Method .ctor addr 0x27da4e0 size 0x74 virtual false final false
 void _ctor(int32_t capacity, System::Collections::IEqualityComparer equalityComparer) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit NameValueCollection(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x27da580 size 0x6c virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method InvalidateCachedArrays addr 0x27da614 size 0x8 virtual false final false
 void InvalidateCachedArrays() ;

/// @brief Method GetAsOneString addr 0x27da61c size 0x1a0 virtual false final false
static ::StringW GetAsOneString(System::Collections::ArrayList list) ;

/// @brief Method GetAsStringArray addr 0x27da7bc size 0xa0 virtual false final false
static ::ArrayW<::StringW> GetAsStringArray(System::Collections::ArrayList list) ;

/// @brief Method Add addr 0x27da85c size 0x16c virtual true final false
 void Add(::StringW name, ::StringW value) ;

/// @brief Method Get addr 0x27dab44 size 0x8c virtual true final false
 ::StringW Get(::StringW name) ;

/// @brief Method GetValues addr 0x27dabd0 size 0x8c virtual true final false
 ::ArrayW<::StringW> GetValues(::StringW name) ;

/// @brief Method Set addr 0x27dac5c size 0xec virtual true final false
 void Set(::StringW name, ::StringW value) ;

/// @brief Method Remove addr 0x27dadf8 size 0x8 virtual true final false
 void Remove(::StringW name) ;

/// @brief Method get_Item addr 0x27db00c size 0x10 virtual false final false
 ::StringW get_Item(::StringW name) ;

/// @brief Method set_Item addr 0x27db01c size 0x10 virtual false final false
 void set_Item(::StringW name, ::StringW value) ;

/// @brief Method Get addr 0x27db02c size 0x84 virtual true final false
 ::StringW Get(int32_t index) ;

/// @brief Method GetValues addr 0x27db14c size 0x84 virtual true final false
 ::ArrayW<::StringW> GetValues(int32_t index) ;

/// @brief Method GetKey addr 0x27db1d0 size 0x4 virtual true final false
 ::StringW GetKey(int32_t index) ;

// Ctor Parameters [CppParam { name: "dummy", ty: "System::DBNull", modifiers: "", def_value: None }]
explicit NameValueCollection(System::DBNull dummy) ;

/// @brief Method .ctor addr 0x27db270 size 0x58 virtual false final false
 void _ctor(System::DBNull dummy) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
NEED_NO_BOX(System::Collections::Specialized::NameValueCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::NameValueCollection, "System.Collections.Specialized", "NameValueCollection");
