#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::InteropServices {
class _ParameterInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System::Reflection {
struct ParameterAttributes;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class IObjectReference;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace System::Reflection {
class ParameterInfo;
}
// Type: System.Reflection::ParameterInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3475))
// CS Name: System.Reflection.ParameterInfo
class CORDL_TYPE ParameterInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Reflection::ICustomAttributeProvider
constexpr operator  System::Reflection::ICustomAttributeProvider() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IObjectReference
constexpr operator  System::Runtime::Serialization::IObjectReference() const noexcept;

/// @brief Convert operator to System::Runtime::InteropServices::_ParameterInfo
constexpr operator  System::Runtime::InteropServices::_ParameterInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ParameterInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParameterInfo", modifiers: " const&", def_value: None }]
constexpr ParameterInfo(ParameterInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParameterInfo", modifiers: "&&", def_value: None }]
constexpr ParameterInfo(ParameterInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParameterInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ParameterInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParameterInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParameterInfo& operator=(ParameterInfo&& o) noexcept = default;
  constexpr ParameterInfo& operator=(ParameterInfo const& o) noexcept = default;
                


// Fields

 System::Reflection::ParameterAttributes __declspec(property(get=__get_AttrsImpl, put=__set_AttrsImpl))  AttrsImpl;

constexpr void __set_AttrsImpl(System::Reflection::ParameterAttributes value) ;

constexpr System::Reflection::ParameterAttributes __get_AttrsImpl() const;

 System::Type __declspec(property(get=__get_ClassImpl, put=__set_ClassImpl))  ClassImpl;

constexpr void __set_ClassImpl(System::Type value) ;

constexpr System::Type __get_ClassImpl() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_DefaultValueImpl, put=__set_DefaultValueImpl))  DefaultValueImpl;

constexpr void __set_DefaultValueImpl(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_DefaultValueImpl() const;

 System::Reflection::MemberInfo __declspec(property(get=__get_MemberImpl, put=__set_MemberImpl))  MemberImpl;

constexpr void __set_MemberImpl(System::Reflection::MemberInfo value) ;

constexpr System::Reflection::MemberInfo __get_MemberImpl() const;

 ::StringW __declspec(property(get=__get_NameImpl, put=__set_NameImpl))  NameImpl;

constexpr void __set_NameImpl(::StringW value) ;

constexpr ::StringW __get_NameImpl() const;

 int32_t __declspec(property(get=__get_PositionImpl, put=__set_PositionImpl))  PositionImpl;

constexpr void __set_PositionImpl(int32_t value) ;

constexpr int32_t __get_PositionImpl() const;

/// @brief Field MetadataToken_ParamDef offset 0
static constexpr int32_t  MetadataToken_ParamDef{134217728};


// Properties

 System::Reflection::ParameterAttributes __declspec(property(get=get_Attributes))  Attributes;

 System::Reflection::MemberInfo __declspec(property(get=get_Member))  Member;

 ::StringW __declspec(property(get=get_Name))  Name;

 System::Type __declspec(property(get=get_ParameterType))  ParameterType;

 int32_t __declspec(property(get=get_Position))  Position;

 bool __declspec(property(get=get_IsIn))  IsIn;

 bool __declspec(property(get=get_IsOptional))  IsOptional;

 bool __declspec(property(get=get_IsOut))  IsOut;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_DefaultValue))  DefaultValue;


// Methods

// Ctor Parameters []
explicit ParameterInfo() ;

/// @brief Method .ctor addr 0x23b2db8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Attributes addr 0x23b2dc0 size 0x8 virtual true final false
 System::Reflection::ParameterAttributes get_Attributes() ;

/// @brief Method get_Member addr 0x23b2dc8 size 0x8 virtual true final false
 System::Reflection::MemberInfo get_Member() ;

/// @brief Method get_Name addr 0x23b2dd0 size 0x8 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_ParameterType addr 0x23b2dd8 size 0x8 virtual true final false
 System::Type get_ParameterType() ;

/// @brief Method get_Position addr 0x23b2de0 size 0x8 virtual true final false
 int32_t get_Position() ;

/// @brief Method get_IsIn addr 0x23b2de8 size 0x1c virtual false final false
 bool get_IsIn() ;

/// @brief Method get_IsOptional addr 0x23b2e04 size 0x1c virtual false final false
 bool get_IsOptional() ;

/// @brief Method get_IsOut addr 0x23b2e20 size 0x1c virtual false final false
 bool get_IsOut() ;

/// @brief Method get_DefaultValue addr 0x23b2e3c size 0x28 virtual true final false
 ::bs_hook::Il2CppWrapperType get_DefaultValue() ;

/// @brief Method IsDefined addr 0x23b2e64 size 0xb4 virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x23b2f18 size 0x7c virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x23b2f94 size 0x104 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method GetRealObject addr 0x23b3098 size 0x2e0 virtual true final true
 ::bs_hook::Il2CppWrapperType GetRealObject(System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method ToString addr 0x23b3378 size 0x84 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::ParameterInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::ParameterInfo, "System.Reflection", "ParameterInfo");
