#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class MCMDictionary;
}
// Type: System.Runtime.Remoting.Messaging::MCMDictionary
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3173))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3171))
// CS Name: System.Runtime.Remoting.Messaging.MCMDictionary
class CORDL_TYPE MCMDictionary : public System::Runtime::Remoting::Messaging::MessageDictionary {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MCMDictionary() = default;

// Ctor Parameters [CppParam { name: "", ty: "MCMDictionary", modifiers: " const&", def_value: None }]
constexpr MCMDictionary(MCMDictionary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MCMDictionary", modifiers: "&&", def_value: None }]
constexpr MCMDictionary(MCMDictionary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MCMDictionary(void* ptr) noexcept : System::Runtime::Remoting::Messaging::MessageDictionary(ptr) {
}


  constexpr MCMDictionary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MCMDictionary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MCMDictionary& operator=(MCMDictionary&& o) noexcept = default;
  constexpr MCMDictionary& operator=(MCMDictionary const& o) noexcept = default;
                


// Fields

static ::ArrayW<::StringW> __declspec(property(get=__get_InternalKeys, put=__set_InternalKeys))  InternalKeys;

static void __set_InternalKeys(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_InternalKeys() ;


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "System::Runtime::Remoting::Messaging::IMethodMessage", modifiers: "", def_value: None }]
explicit MCMDictionary(System::Runtime::Remoting::Messaging::IMethodMessage message) ;

/// @brief Method .ctor addr 0x237ad4c size 0x7c virtual false final false
 void _ctor(System::Runtime::Remoting::Messaging::IMethodMessage message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::MCMDictionary);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MCMDictionary, "System.Runtime.Remoting.Messaging", "MCMDictionary");
