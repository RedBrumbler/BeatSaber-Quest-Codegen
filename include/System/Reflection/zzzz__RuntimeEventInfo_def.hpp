#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class RuntimeType;
}
namespace System {
class Type;
}
namespace System::Reflection {
struct MonoEventInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
class RuntimeModule;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeEventInfo;
}
// Type: System.Reflection::RuntimeEventInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3458))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3511))
// CS Name: System.Reflection.RuntimeEventInfo
class CORDL_TYPE RuntimeEventInfo : public System::Reflection::EventInfo {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RuntimeEventInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeEventInfo", modifiers: " const&", def_value: None }]
constexpr RuntimeEventInfo(RuntimeEventInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeEventInfo", modifiers: "&&", def_value: None }]
constexpr RuntimeEventInfo(RuntimeEventInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeEventInfo(void* ptr) noexcept : System::Reflection::EventInfo(ptr) {
}


  constexpr RuntimeEventInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeEventInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeEventInfo& operator=(RuntimeEventInfo&& o) noexcept = default;
  constexpr RuntimeEventInfo& operator=(RuntimeEventInfo const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_klass, put=__set_klass))  klass;

constexpr void __set_klass(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_klass() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_handle() const;


// Properties

 System::Reflection::Module __declspec(property(get=get_Module))  Module;

 System::Reflection::BindingFlags __declspec(property(get=get_BindingFlags))  BindingFlags;

 System::RuntimeType __declspec(property(get=get_ReflectedTypeInternal))  ReflectedTypeInternal;

 System::Type __declspec(property(get=get_DeclaringType))  DeclaringType;

 System::Type __declspec(property(get=get_ReflectedType))  ReflectedType;

 ::StringW __declspec(property(get=get_Name))  Name;

 int32_t __declspec(property(get=get_MetadataToken))  MetadataToken;


// Methods

/// @brief Method get_event_info addr 0x23bc158 size 0x4 virtual false final false
static void get_event_info(System::Reflection::RuntimeEventInfo ev, ByRef<System::Reflection::MonoEventInfo> info) ;

/// @brief Method GetEventInfo addr 0x23bc15c size 0x3c virtual false final false
static System::Reflection::MonoEventInfo GetEventInfo(System::Reflection::RuntimeEventInfo ev) ;

/// @brief Method get_Module addr 0x23bc198 size 0x4 virtual true final false
 System::Reflection::Module get_Module() ;

/// @brief Method get_BindingFlags addr 0x23bc1b8 size 0x4 virtual false final false
 System::Reflection::BindingFlags get_BindingFlags() ;

/// @brief Method GetDeclaringTypeInternal addr 0x23bc328 size 0x84 virtual false final false
 System::RuntimeType GetDeclaringTypeInternal() ;

/// @brief Method get_ReflectedTypeInternal addr 0x23bc3ac size 0x84 virtual false final false
 System::RuntimeType get_ReflectedTypeInternal() ;

/// @brief Method GetRuntimeModule addr 0x23bc19c size 0x1c virtual false final false
 System::Reflection::RuntimeModule GetRuntimeModule() ;

/// @brief Method GetObjectData addr 0x23bc430 size 0xa0 virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetBindingFlags addr 0x23bc1bc size 0x16c virtual false final false
 System::Reflection::BindingFlags GetBindingFlags() ;

/// @brief Method GetAddMethod addr 0x23bc4d0 size 0x68 virtual true final false
 System::Reflection::MethodInfo GetAddMethod(bool nonPublic) ;

/// @brief Method GetRaiseMethod addr 0x23bc538 size 0x68 virtual true final false
 System::Reflection::MethodInfo GetRaiseMethod(bool nonPublic) ;

/// @brief Method GetRemoveMethod addr 0x23bc5a0 size 0x68 virtual true final false
 System::Reflection::MethodInfo GetRemoveMethod(bool nonPublic) ;

/// @brief Method get_DeclaringType addr 0x23bc608 size 0x2c virtual true final false
 System::Type get_DeclaringType() ;

/// @brief Method get_ReflectedType addr 0x23bc634 size 0x2c virtual true final false
 System::Type get_ReflectedType() ;

/// @brief Method get_Name addr 0x23bc660 size 0x2c virtual true final false
 ::StringW get_Name() ;

/// @brief Method ToString addr 0x23bc68c size 0x90 virtual true final false
 ::StringW ToString() ;

/// @brief Method IsDefined addr 0x23bc71c size 0x70 virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x23bc78c size 0x68 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x23bc7f4 size 0x70 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method get_MetadataToken addr 0x23bc864 size 0x4 virtual true final false
 int32_t get_MetadataToken() ;

/// @brief Method get_metadata_token addr 0x23bc868 size 0x4 virtual false final false
static int32_t get_metadata_token(System::Reflection::RuntimeEventInfo monoEvent) ;

// Ctor Parameters []
explicit RuntimeEventInfo() ;

/// @brief Method .ctor addr 0x23bc86c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::RuntimeEventInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RuntimeEventInfo, "System.Reflection", "RuntimeEventInfo");
