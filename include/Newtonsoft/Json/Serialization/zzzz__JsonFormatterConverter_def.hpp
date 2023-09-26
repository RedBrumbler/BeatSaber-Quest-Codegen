#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace Newtonsoft::Json::Serialization {
class JsonProperty;
}
namespace System {
struct Decimal;
}
namespace Newtonsoft::Json::Serialization {
class JsonISerializableContract;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System {
struct TypeCode;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader;
}
namespace System {
struct DateTime;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonFormatterConverter;
}
// Type: Newtonsoft.Json.Serialization::JsonFormatterConverter
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11873))
// CS Name: Newtonsoft.Json.Serialization.JsonFormatterConverter
class CORDL_TYPE JsonFormatterConverter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::IFormatterConverter
constexpr operator  System::Runtime::Serialization::IFormatterConverter() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~JsonFormatterConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonFormatterConverter", modifiers: " const&", def_value: None }]
constexpr JsonFormatterConverter(JsonFormatterConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonFormatterConverter", modifiers: "&&", def_value: None }]
constexpr JsonFormatterConverter(JsonFormatterConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonFormatterConverter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JsonFormatterConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonFormatterConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonFormatterConverter& operator=(JsonFormatterConverter&& o) noexcept = default;
  constexpr JsonFormatterConverter& operator=(JsonFormatterConverter const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Serialization::JsonSerializerInternalReader __declspec(property(get=__get__reader, put=__set__reader))  _reader;

constexpr void __set__reader(Newtonsoft::Json::Serialization::JsonSerializerInternalReader value) ;

constexpr Newtonsoft::Json::Serialization::JsonSerializerInternalReader __get__reader() const;

 Newtonsoft::Json::Serialization::JsonISerializableContract __declspec(property(get=__get__contract, put=__set__contract))  _contract;

constexpr void __set__contract(Newtonsoft::Json::Serialization::JsonISerializableContract value) ;

constexpr Newtonsoft::Json::Serialization::JsonISerializableContract __get__contract() const;

 Newtonsoft::Json::Serialization::JsonProperty __declspec(property(get=__get__member, put=__set__member))  _member;

constexpr void __set__member(Newtonsoft::Json::Serialization::JsonProperty value) ;

constexpr Newtonsoft::Json::Serialization::JsonProperty __get__member() const;


// Methods

// Ctor Parameters [CppParam { name: "reader", ty: "Newtonsoft::Json::Serialization::JsonSerializerInternalReader", modifiers: "", def_value: None }, CppParam { name: "contract", ty: "Newtonsoft::Json::Serialization::JsonISerializableContract", modifiers: "", def_value: None }, CppParam { name: "member", ty: "Newtonsoft::Json::Serialization::JsonProperty", modifiers: "", def_value: None }]
explicit JsonFormatterConverter(Newtonsoft::Json::Serialization::JsonSerializerInternalReader reader, Newtonsoft::Json::Serialization::JsonISerializableContract contract, Newtonsoft::Json::Serialization::JsonProperty member) ;

/// @brief Method .ctor addr 0x252664c size 0xa4 virtual false final false
 void _ctor(Newtonsoft::Json::Serialization::JsonSerializerInternalReader reader, Newtonsoft::Json::Serialization::JsonISerializableContract contract, Newtonsoft::Json::Serialization::JsonProperty member) ;

/// @brief Method GetTokenValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetTokenValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Convert addr 0x25266f0 size 0x11c virtual true final true
 ::bs_hook::Il2CppWrapperType Convert(::bs_hook::Il2CppWrapperType value, System::Type type) ;

/// @brief Method Convert addr 0x2526900 size 0x10c virtual true final true
 ::bs_hook::Il2CppWrapperType Convert(::bs_hook::Il2CppWrapperType value, System::TypeCode typeCode) ;

/// @brief Method ToBoolean addr 0x2526a0c size 0x58 virtual true final true
 bool ToBoolean(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToByte addr 0x2526a64 size 0x58 virtual true final true
 uint8_t ToByte(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToChar addr 0x2526abc size 0x58 virtual true final true
 char16_t ToChar(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDateTime addr 0x2526b14 size 0x58 virtual true final true
 System::DateTime ToDateTime(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDecimal addr 0x2526b6c size 0x58 virtual true final true
 System::Decimal ToDecimal(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDouble addr 0x2526bc4 size 0x58 virtual true final true
 double_t ToDouble(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt16 addr 0x2526c1c size 0x58 virtual true final true
 int16_t ToInt16(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt32 addr 0x2526c74 size 0x58 virtual true final true
 int32_t ToInt32(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt64 addr 0x2526ccc size 0x58 virtual true final true
 int64_t ToInt64(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToSByte addr 0x2526d24 size 0x58 virtual true final true
 int8_t ToSByte(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToSingle addr 0x2526d7c size 0x58 virtual true final true
 float_t ToSingle(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToString addr 0x2526dd4 size 0x58 virtual true final true
 ::StringW ToString(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToUInt16 addr 0x2526e2c size 0x58 virtual true final true
 uint16_t ToUInt16(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToUInt32 addr 0x2526e84 size 0x58 virtual true final true
 uint32_t ToUInt32(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToUInt64 addr 0x2526edc size 0x58 virtual true final true
 uint64_t ToUInt64(::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::JsonFormatterConverter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::JsonFormatterConverter, "Newtonsoft.Json.Serialization", "JsonFormatterConverter");
