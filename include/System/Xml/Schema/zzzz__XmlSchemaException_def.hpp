#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaException;
}
// Type: System.Xml.Schema::XmlSchemaException
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11687))
// CS Name: System.Xml.Schema.XmlSchemaException
class CORDL_TYPE XmlSchemaException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~XmlSchemaException() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaException", modifiers: " const&", def_value: None }]
constexpr XmlSchemaException(XmlSchemaException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaException", modifiers: "&&", def_value: None }]
constexpr XmlSchemaException(XmlSchemaException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr XmlSchemaException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaException& operator=(XmlSchemaException&& o) noexcept = default;
  constexpr XmlSchemaException& operator=(XmlSchemaException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_res, put=__set_res))  res;

constexpr void __set_res(::StringW value) ;

constexpr ::StringW __get_res() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_args, put=__set_args))  args;

constexpr void __set_args(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_args() const;

 ::StringW __declspec(property(get=__get_sourceUri, put=__set_sourceUri))  sourceUri;

constexpr void __set_sourceUri(::StringW value) ;

constexpr ::StringW __get_sourceUri() const;

 int32_t __declspec(property(get=__get_lineNumber, put=__set_lineNumber))  lineNumber;

constexpr void __set_lineNumber(int32_t value) ;

constexpr int32_t __get_lineNumber() const;

 int32_t __declspec(property(get=__get_linePosition, put=__set_linePosition))  linePosition;

constexpr void __set_linePosition(int32_t value) ;

constexpr int32_t __get_linePosition() const;

 System::Xml::Schema::XmlSchemaObject __declspec(property(get=__get_sourceSchemaObject, put=__set_sourceSchemaObject))  sourceSchemaObject;

constexpr void __set_sourceSchemaObject(System::Xml::Schema::XmlSchemaObject value) ;

constexpr System::Xml::Schema::XmlSchemaObject __get_sourceSchemaObject() const;

 ::StringW __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(::StringW value) ;

constexpr ::StringW __get_message() const;


// Properties

 ::StringW __declspec(property(get=get_Message))  Message;


// Methods

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit XmlSchemaException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2767a70 size 0x3b8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x2767eec size 0x170 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

// Ctor Parameters []
explicit XmlSchemaException() ;

/// @brief Method .ctor addr 0x276805c size 0x14 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit XmlSchemaException(::StringW message) ;

/// @brief Method .ctor addr 0x2768070 size 0x10 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
explicit XmlSchemaException(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x275e480 size 0xc virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linePosition", ty: "int32_t", modifiers: "", def_value: None }]
explicit XmlSchemaException(::StringW message, System::Exception innerException, int32_t lineNumber, int32_t linePosition) ;

/// @brief Method .ctor addr 0x2768080 size 0x124 virtual false final false
 void _ctor(::StringW message, System::Exception innerException, int32_t lineNumber, int32_t linePosition) ;

// Ctor Parameters [CppParam { name: "res", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "arg", ty: "::StringW", modifiers: "", def_value: None }]
explicit XmlSchemaException(::StringW res, ::StringW arg) ;

/// @brief Method .ctor addr 0x2758910 size 0xd4 virtual false final false
 void _ctor(::StringW res, ::StringW arg) ;

// Ctor Parameters [CppParam { name: "res", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "arg", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sourceUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linePosition", ty: "int32_t", modifiers: "", def_value: None }]
explicit XmlSchemaException(::StringW res, ::StringW arg, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition) ;

/// @brief Method .ctor addr 0x276822c size 0xf4 virtual false final false
 void _ctor(::StringW res, ::StringW arg, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition) ;

// Ctor Parameters [CppParam { name: "res", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "args", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }, CppParam { name: "sourceUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linePosition", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "source", ty: "System::Xml::Schema::XmlSchemaObject", modifiers: "", def_value: None }]
explicit XmlSchemaException(::StringW res, ::ArrayW<::StringW> args, System::Exception innerException, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition, System::Xml::Schema::XmlSchemaObject source) ;

/// @brief Method .ctor addr 0x27681a4 size 0x88 virtual false final false
 void _ctor(::StringW res, ::ArrayW<::StringW> args, System::Exception innerException, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition, System::Xml::Schema::XmlSchemaObject source) ;

/// @brief Method CreateMessage addr 0x2767e28 size 0xc4 virtual false final false
static ::StringW CreateMessage(::StringW res, ::ArrayW<::StringW> args) ;

/// @brief Method get_Message addr 0x2768320 size 0x18 virtual true final false
 ::StringW get_Message() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlSchemaException);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaException, "System.Xml.Schema", "XmlSchemaException");
