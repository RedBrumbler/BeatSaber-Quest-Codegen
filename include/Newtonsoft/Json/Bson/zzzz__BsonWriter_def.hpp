#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
namespace System {
struct DateTimeKind;
}
namespace Newtonsoft::Json::Bson {
class BsonBinaryWriter;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace System {
struct DateTime;
}
namespace System::IO {
class Stream;
}
namespace System {
struct Guid;
}
namespace System {
class Uri;
}
namespace System {
struct DateTimeOffset;
}
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
namespace System::IO {
class BinaryWriter;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonWriter;
}
// Type: Newtonsoft.Json.Bson::BsonWriter
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11804))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12044))
// CS Name: Newtonsoft.Json.Bson.BsonWriter
class CORDL_TYPE BsonWriter : public Newtonsoft::Json::JsonWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~BsonWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonWriter", modifiers: " const&", def_value: None }]
constexpr BsonWriter(BsonWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BsonWriter", modifiers: "&&", def_value: None }]
constexpr BsonWriter(BsonWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BsonWriter(void* ptr) noexcept : Newtonsoft::Json::JsonWriter(ptr) {
}


  constexpr BsonWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BsonWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BsonWriter& operator=(BsonWriter&& o) noexcept = default;
  constexpr BsonWriter& operator=(BsonWriter const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Bson::BsonBinaryWriter __declspec(property(get=__get__writer, put=__set__writer))  _writer;

constexpr void __set__writer(Newtonsoft::Json::Bson::BsonBinaryWriter value) ;

constexpr Newtonsoft::Json::Bson::BsonBinaryWriter __get__writer() const;

 Newtonsoft::Json::Bson::BsonToken __declspec(property(get=__get__root, put=__set__root))  _root;

constexpr void __set__root(Newtonsoft::Json::Bson::BsonToken value) ;

constexpr Newtonsoft::Json::Bson::BsonToken __get__root() const;

 Newtonsoft::Json::Bson::BsonToken __declspec(property(get=__get__parent, put=__set__parent))  _parent;

constexpr void __set__parent(Newtonsoft::Json::Bson::BsonToken value) ;

constexpr Newtonsoft::Json::Bson::BsonToken __get__parent() const;

 ::StringW __declspec(property(get=__get__propertyName, put=__set__propertyName))  _propertyName;

constexpr void __set__propertyName(::StringW value) ;

constexpr ::StringW __get__propertyName() const;


// Properties

 System::DateTimeKind __declspec(property(get=get_DateTimeKindHandling, put=set_DateTimeKindHandling))  DateTimeKindHandling;


// Methods

/// @brief Method get_DateTimeKindHandling addr 0x2580328 size 0x1c virtual false final false
 System::DateTimeKind get_DateTimeKindHandling() ;

/// @brief Method set_DateTimeKindHandling addr 0x2580344 size 0x1c virtual false final false
 void set_DateTimeKindHandling(System::DateTimeKind value) ;

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit BsonWriter(System::IO::Stream stream) ;

/// @brief Method .ctor addr 0x2580360 size 0xfc virtual false final false
 void _ctor(System::IO::Stream stream) ;

// Ctor Parameters [CppParam { name: "writer", ty: "System::IO::BinaryWriter", modifiers: "", def_value: None }]
explicit BsonWriter(System::IO::BinaryWriter writer) ;

/// @brief Method .ctor addr 0x258045c size 0xcc virtual false final false
 void _ctor(System::IO::BinaryWriter writer) ;

/// @brief Method Flush addr 0x2580528 size 0x28 virtual true final false
 void Flush() ;

/// @brief Method WriteEnd addr 0x2580550 size 0x70 virtual true final false
 void WriteEnd(Newtonsoft::Json::JsonToken token) ;

/// @brief Method WriteComment addr 0x25805e0 size 0x44 virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteStartConstructor addr 0x2580624 size 0x44 virtual true final false
 void WriteStartConstructor(::StringW name) ;

/// @brief Method WriteRaw addr 0x2580668 size 0x44 virtual true final false
 void WriteRaw(::StringW json) ;

/// @brief Method WriteRawValue addr 0x25806ac size 0x44 virtual true final false
 void WriteRawValue(::StringW json) ;

/// @brief Method WriteStartArray addr 0x25806f0 size 0x74 virtual true final false
 void WriteStartArray() ;

/// @brief Method WriteStartObject addr 0x2580788 size 0x74 virtual true final false
 void WriteStartObject() ;

/// @brief Method WritePropertyName addr 0x25807fc size 0x28 virtual true final false
 void WritePropertyName(::StringW name) ;

/// @brief Method Close addr 0x2580824 size 0x44 virtual true final false
 void Close() ;

/// @brief Method AddParent addr 0x2580764 size 0x24 virtual false final false
 void AddParent(Newtonsoft::Json::Bson::BsonToken container) ;

/// @brief Method RemoveParent addr 0x25805c0 size 0x20 virtual false final false
 void RemoveParent() ;

/// @brief Method AddValue addr 0x2580a54 size 0x7c virtual false final false
 void AddValue(::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Bson::BsonType type) ;

/// @brief Method AddToken addr 0x2580868 size 0x1ec virtual false final false
 void AddToken(Newtonsoft::Json::Bson::BsonToken token) ;

/// @brief Method WriteValue addr 0x2580ad0 size 0x8 virtual true final false
 void WriteValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method WriteNull addr 0x2580ad8 size 0x24 virtual true final false
 void WriteNull() ;

/// @brief Method WriteUndefined addr 0x2580afc size 0x24 virtual true final false
 void WriteUndefined() ;

/// @brief Method WriteValue addr 0x2580b20 size 0xa8 virtual true final false
 void WriteValue(::StringW value) ;

/// @brief Method WriteValue addr 0x2580bc8 size 0x7c virtual true final false
 void WriteValue(int32_t value) ;

/// @brief Method WriteValue addr 0x2580c44 size 0xbc virtual true final false
 void WriteValue(uint32_t value) ;

/// @brief Method WriteValue addr 0x2580d00 size 0x7c virtual true final false
 void WriteValue(int64_t value) ;

/// @brief Method WriteValue addr 0x2580d7c size 0xbc virtual true final false
 void WriteValue(uint64_t value) ;

/// @brief Method WriteValue addr 0x2580e38 size 0x7c virtual true final false
 void WriteValue(float_t value) ;

/// @brief Method WriteValue addr 0x2580eb4 size 0x7c virtual true final false
 void WriteValue(double_t value) ;

/// @brief Method WriteValue addr 0x2580f30 size 0x7c virtual true final false
 void WriteValue(bool value) ;

/// @brief Method WriteValue addr 0x2580fac size 0x7c virtual true final false
 void WriteValue(int16_t value) ;

/// @brief Method WriteValue addr 0x2581028 size 0x7c virtual true final false
 void WriteValue(uint16_t value) ;

/// @brief Method WriteValue addr 0x25810a4 size 0xe0 virtual true final false
 void WriteValue(char16_t value) ;

/// @brief Method WriteValue addr 0x2581184 size 0x7c virtual true final false
 void WriteValue(uint8_t value) ;

/// @brief Method WriteValue addr 0x2581200 size 0x7c virtual true final false
 void WriteValue(int8_t value) ;

/// @brief Method WriteValue addr 0x258127c size 0xb4 virtual true final false
 void WriteValue(System::Decimal value) ;

/// @brief Method WriteValue addr 0x2581330 size 0xb8 virtual true final false
 void WriteValue(System::DateTime value) ;

/// @brief Method WriteValue addr 0x25813e8 size 0x8c virtual true final false
 void WriteValue(System::DateTimeOffset value) ;

/// @brief Method WriteValue addr 0x2581474 size 0x8c virtual true final false
 void WriteValue(::ArrayW<uint8_t> value) ;

/// @brief Method WriteValue addr 0x2581500 size 0xb8 virtual true final false
 void WriteValue(System::Guid value) ;

/// @brief Method WriteValue addr 0x25815b8 size 0xb0 virtual true final false
 void WriteValue(System::TimeSpan value) ;

/// @brief Method WriteValue addr 0x2581668 size 0xa8 virtual true final false
 void WriteValue(System::Uri value) ;

/// @brief Method WriteObjectId addr 0x2581710 size 0xd4 virtual false final false
 void WriteObjectId(::ArrayW<uint8_t> value) ;

/// @brief Method WriteRegex addr 0x25817e4 size 0xc0 virtual false final false
 void WriteRegex(::StringW pattern, ::StringW options) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(Newtonsoft::Json::Bson::BsonWriter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Bson::BsonWriter, "Newtonsoft.Json.Bson", "BsonWriter");
