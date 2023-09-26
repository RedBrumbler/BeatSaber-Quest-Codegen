#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct Decimal;
}
namespace System {
struct DateTime;
}
namespace System {
class IFormatProvider;
}
namespace System {
struct TypeCode;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class IConvertible;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class DBNull;
}
// Type: System::DBNull
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2367))
// CS Name: System.DBNull
class CORDL_TYPE DBNull : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::IConvertible
constexpr operator  System::IConvertible() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DBNull() = default;

// Ctor Parameters [CppParam { name: "", ty: "DBNull", modifiers: " const&", def_value: None }]
constexpr DBNull(DBNull const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DBNull", modifiers: "&&", def_value: None }]
constexpr DBNull(DBNull&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DBNull(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DBNull& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DBNull& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DBNull& operator=(DBNull&& o) noexcept = default;
  constexpr DBNull& operator=(DBNull const& o) noexcept = default;
                


// Fields

static System::DBNull __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(System::DBNull value) ;

static System::DBNull __get_Value() ;


// Methods

// Ctor Parameters []
explicit DBNull() ;

/// @brief Method .ctor addr 0x2452fa4 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit DBNull(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2452fac size 0x58 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x2453004 size 0x10 virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method ToString addr 0x2453014 size 0x48 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x245305c size 0x48 virtual true final true
 ::StringW ToString(System::IFormatProvider provider) ;

/// @brief Method GetTypeCode addr 0x24530a4 size 0x8 virtual true final true
 System::TypeCode GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean addr 0x24530ac size 0x50 virtual true final true
 bool System_IConvertible_ToBoolean(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToChar addr 0x24530fc size 0x50 virtual true final true
 char16_t System_IConvertible_ToChar(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSByte addr 0x245314c size 0x50 virtual true final true
 int8_t System_IConvertible_ToSByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToByte addr 0x245319c size 0x50 virtual true final true
 uint8_t System_IConvertible_ToByte(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt16 addr 0x24531ec size 0x50 virtual true final true
 int16_t System_IConvertible_ToInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt16 addr 0x245323c size 0x50 virtual true final true
 uint16_t System_IConvertible_ToUInt16(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt32 addr 0x245328c size 0x50 virtual true final true
 int32_t System_IConvertible_ToInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt32 addr 0x24532dc size 0x50 virtual true final true
 uint32_t System_IConvertible_ToUInt32(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt64 addr 0x245332c size 0x50 virtual true final true
 int64_t System_IConvertible_ToInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt64 addr 0x245337c size 0x50 virtual true final true
 uint64_t System_IConvertible_ToUInt64(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSingle addr 0x24533cc size 0x50 virtual true final true
 float_t System_IConvertible_ToSingle(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDouble addr 0x245341c size 0x50 virtual true final true
 double_t System_IConvertible_ToDouble(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDecimal addr 0x245346c size 0x50 virtual true final true
 System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDateTime addr 0x24534bc size 0x50 virtual true final true
 System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToType addr 0x245350c size 0x70 virtual true final true
 ::bs_hook::Il2CppWrapperType System_IConvertible_ToType(System::Type type, System::IFormatProvider provider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::DBNull);
DEFINE_IL2CPP_ARG_TYPE(System::DBNull, "System", "DBNull");
