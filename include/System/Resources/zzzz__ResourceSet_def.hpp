#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Resources {
class IResourceReader;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Resources {
class ResourceSet;
}
// Type: System.Resources::ResourceSet
namespace System::Resources {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3434))
// CS Name: System.Resources.ResourceSet
class CORDL_TYPE ResourceSet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ResourceSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceSet", modifiers: " const&", def_value: None }]
constexpr ResourceSet(ResourceSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceSet", modifiers: "&&", def_value: None }]
constexpr ResourceSet(ResourceSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourceSet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResourceSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourceSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourceSet& operator=(ResourceSet&& o) noexcept = default;
  constexpr ResourceSet& operator=(ResourceSet const& o) noexcept = default;
                


// Fields

 System::Resources::IResourceReader __declspec(property(get=__get_Reader, put=__set_Reader))  Reader;

constexpr void __set_Reader(System::Resources::IResourceReader value) ;

constexpr System::Resources::IResourceReader __get_Reader() const;

 System::Collections::Hashtable __declspec(property(get=__get_Table, put=__set_Table))  Table;

constexpr void __set_Table(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_Table() const;

 System::Collections::Hashtable __declspec(property(get=__get__caseInsensitiveTable, put=__set__caseInsensitiveTable))  _caseInsensitiveTable;

constexpr void __set__caseInsensitiveTable(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get__caseInsensitiveTable() const;


// Methods

// Ctor Parameters []
explicit ResourceSet() ;

/// @brief Method .ctor addr 0x23af0c4 size 0x1c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "junk", ty: "bool", modifiers: "", def_value: None }]
explicit ResourceSet(bool junk) ;

/// @brief Method .ctor addr 0x23af140 size 0x8 virtual false final false
 void _ctor(bool junk) ;

/// @brief Method CommonInit addr 0x23af0e0 size 0x60 virtual false final false
 void CommonInit() ;

/// @brief Method Dispose addr 0x23af148 size 0xb4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Dispose addr 0x23af1fc size 0x10 virtual true final true
 void Dispose() ;

/// @brief Method GetEnumerator addr 0x23af20c size 0x4 virtual true final false
 System::Collections::IDictionaryEnumerator GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x23af294 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetEnumeratorHelper addr 0x23af210 size 0x84 virtual false final false
 System::Collections::IDictionaryEnumerator GetEnumeratorHelper() ;

/// @brief Method GetString addr 0x23af298 size 0x168 virtual true final false
 ::StringW GetString(::StringW name) ;

/// @brief Method GetString addr 0x23af4d4 size 0x204 virtual true final false
 ::StringW GetString(::StringW name, bool ignoreCase) ;

/// @brief Method GetObject addr 0x23af9a8 size 0x4 virtual true final false
 ::bs_hook::Il2CppWrapperType GetObject(::StringW name) ;

/// @brief Method GetObject addr 0x23af9ac size 0x40 virtual true final false
 ::bs_hook::Il2CppWrapperType GetObject(::StringW name, bool ignoreCase) ;

/// @brief Method GetObjectInternal addr 0x23af400 size 0xd4 virtual false final false
 ::bs_hook::Il2CppWrapperType GetObjectInternal(::StringW name) ;

/// @brief Method GetCaseInsensitiveObjectInternal addr 0x23af6d8 size 0x2d0 virtual false final false
 ::bs_hook::Il2CppWrapperType GetCaseInsensitiveObjectInternal(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Resources
NEED_NO_BOX(System::Resources::ResourceSet);
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceSet, "System.Resources", "ResourceSet");
