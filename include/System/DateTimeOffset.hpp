// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: DateTimeStyles
  struct DateTimeStyles;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0xA
  #pragma pack(push, 1)
  // Autogenerated type: System.DateTimeOffset
  struct DateTimeOffset/*, public System::ValueType, public System::IComparable, public System::IFormattable, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IDeserializationCallback, public System::IComparable_1<System::DateTimeOffset>, public System::IEquatable_1<System::DateTimeOffset>*/ {
    public:
    // private System.DateTime m_dateTime
    // Size: 0x8
    // Offset: 0x0
    System::DateTime m_dateTime;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // private System.Int16 m_offsetMinutes
    // Size: 0x2
    // Offset: 0x8
    int16_t m_offsetMinutes;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // Creating value type constructor for type: DateTimeOffset
    constexpr DateTimeOffset(System::DateTime m_dateTime_ = {}, int16_t m_offsetMinutes_ = {}) noexcept : m_dateTime{m_dateTime_}, m_offsetMinutes{m_offsetMinutes_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator System::IFormattable
    operator System::IFormattable() noexcept {
      return *reinterpret_cast<System::IFormattable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::IDeserializationCallback
    operator System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable_1<System::DateTimeOffset>
    operator System::IComparable_1<System::DateTimeOffset>() noexcept {
      return *reinterpret_cast<System::IComparable_1<System::DateTimeOffset>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<System::DateTimeOffset>
    operator System::IEquatable_1<System::DateTimeOffset>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<System::DateTimeOffset>*>(this);
    }
    // Get static field: static public readonly System.DateTimeOffset MinValue
    static System::DateTimeOffset _get_MinValue();
    // Set static field: static public readonly System.DateTimeOffset MinValue
    static void _set_MinValue(System::DateTimeOffset value);
    // Get static field: static public readonly System.DateTimeOffset MaxValue
    static System::DateTimeOffset _get_MaxValue();
    // Set static field: static public readonly System.DateTimeOffset MaxValue
    static void _set_MaxValue(System::DateTimeOffset value);
    // public System.Void .ctor(System.Int64 ticks, System.TimeSpan offset)
    // Offset: 0xF04A04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    DateTimeOffset(int64_t ticks, System::TimeSpan offset) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::DateTimeOffset::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(ticks), ::il2cpp_utils::ExtractType(offset)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, ticks, offset);
    }
    // public System.Void .ctor(System.DateTime dateTime)
    // Offset: 0xF04A0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    DateTimeOffset(System::DateTime dateTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::DateTimeOffset::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(dateTime)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, dateTime);
    }
    // public System.DateTime get_UtcDateTime()
    // Offset: 0xF04A14
    System::DateTime get_UtcDateTime();
    // private System.DateTime get_ClockDateTime()
    // Offset: 0xF04A1C
    System::DateTime get_ClockDateTime();
    // public System.TimeSpan get_Offset()
    // Offset: 0xF04A24
    System::TimeSpan get_Offset();
    // private System.Int32 System.IComparable.CompareTo(System.Object obj)
    // Offset: 0xF04A5C
    int System_IComparable_CompareTo(::Il2CppObject* obj);
    // public System.Int32 CompareTo(System.DateTimeOffset other)
    // Offset: 0xF04A64
    int CompareTo(System::DateTimeOffset other);
    // public System.Boolean Equals(System.DateTimeOffset other)
    // Offset: 0xF04A74
    bool Equals(System::DateTimeOffset other);
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0xF04A7C
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xF04A84
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xF04A8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    DateTimeOffset(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::DateTimeOffset::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(info), ::il2cpp_utils::ExtractType(context)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, info, context);
    }
    // public System.Int64 ToUnixTimeMilliseconds()
    // Offset: 0xF04AC4
    int64_t ToUnixTimeMilliseconds();
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0xF04B28
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* formatProvider);
    // static public System.Boolean TryParseExact(System.String input, System.String[] formats, System.IFormatProvider formatProvider, System.Globalization.DateTimeStyles styles, out System.DateTimeOffset result)
    // Offset: 0x1AF925C
    static bool TryParseExact(::Il2CppString* input, ::Array<::Il2CppString*>* formats, System::IFormatProvider* formatProvider, System::Globalization::DateTimeStyles styles, System::DateTimeOffset& result);
    // static private System.Int16 ValidateOffset(System.TimeSpan offset)
    // Offset: 0x1AF84C4
    static int16_t ValidateOffset(System::TimeSpan offset);
    // static private System.DateTime ValidateDate(System.DateTime dateTime, System.TimeSpan offset)
    // Offset: 0x1AF85E4
    static System::DateTime ValidateDate(System::DateTime dateTime, System::TimeSpan offset);
    // static private System.Globalization.DateTimeStyles ValidateStyles(System.Globalization.DateTimeStyles style, System.String parameterName)
    // Offset: 0x1AF93A4
    static System::Globalization::DateTimeStyles ValidateStyles(System::Globalization::DateTimeStyles style, ::Il2CppString* parameterName);
    // static private System.Void .cctor()
    // Offset: 0x1AF9714
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF04A6C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF04A94
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xF04B20
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // System.DateTimeOffset
  #pragma pack(pop)
  static check_size<sizeof(DateTimeOffset), 8 + sizeof(int16_t)> __System_DateTimeOffsetSizeCheck;
  static_assert(sizeof(DateTimeOffset) == 0xA);
  // static public System.TimeSpan op_Subtraction(System.DateTimeOffset left, System.DateTimeOffset right)
  // Offset: 0x1AF95EC
  System::TimeSpan operator-(const System::DateTimeOffset& left, const System::DateTimeOffset& right);
  // static public System.Boolean op_Equality(System.DateTimeOffset left, System.DateTimeOffset right)
  // Offset: 0x1AF9680
  bool operator ==(const System::DateTimeOffset& left, const System::DateTimeOffset& right);
}
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeOffset, "System", "DateTimeOffset");
// Writing MetadataGetter for method: System::DateTimeOffset::DateTimeOffset
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::DateTimeOffset::DateTimeOffset
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::DateTimeOffset::get_UtcDateTime
// Il2CppName: get_UtcDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::DateTimeOffset::*)()>(&System::DateTimeOffset::get_UtcDateTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "get_UtcDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::get_ClockDateTime
// Il2CppName: get_ClockDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::DateTimeOffset::*)()>(&System::DateTimeOffset::get_ClockDateTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "get_ClockDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::get_Offset
// Il2CppName: get_Offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::DateTimeOffset::*)()>(&System::DateTimeOffset::get_Offset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "get_Offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::System_IComparable_CompareTo
// Il2CppName: System.IComparable.CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::DateTimeOffset::*)(::Il2CppObject*)>(&System::DateTimeOffset::System_IComparable_CompareTo)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "System.IComparable.CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::DateTimeOffset::*)(System::DateTimeOffset)>(&System::DateTimeOffset::CompareTo)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::DateTimeOffset::*)(System::DateTimeOffset)>(&System::DateTimeOffset::Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
// Il2CppName: System.Runtime.Serialization.IDeserializationCallback.OnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::DateTimeOffset::*)(::Il2CppObject*)>(&System::DateTimeOffset::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::DateTimeOffset::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::DateTimeOffset::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::DateTimeOffset
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::DateTimeOffset::ToUnixTimeMilliseconds
// Il2CppName: ToUnixTimeMilliseconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::DateTimeOffset::*)()>(&System::DateTimeOffset::ToUnixTimeMilliseconds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "ToUnixTimeMilliseconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::DateTimeOffset::*)(::Il2CppString*, System::IFormatProvider*)>(&System::DateTimeOffset::ToString)> {
  const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::TryParseExact
// Il2CppName: TryParseExact
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ::Array<::Il2CppString*>*, System::IFormatProvider*, System::Globalization::DateTimeStyles, System::DateTimeOffset&)>(&System::DateTimeOffset::TryParseExact)> {
  const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formats = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    static auto* styles = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeStyles")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "TryParseExact", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, formats, formatProvider, styles, result});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::ValidateOffset
// Il2CppName: ValidateOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(System::TimeSpan)>(&System::DateTimeOffset::ValidateOffset)> {
  const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "ValidateOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::ValidateDate
// Il2CppName: ValidateDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(System::DateTime, System::TimeSpan)>(&System::DateTimeOffset::ValidateDate)> {
  const MethodInfo* get() {
    static auto* dateTime = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "ValidateDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateTime, offset});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::ValidateStyles
// Il2CppName: ValidateStyles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::DateTimeStyles (*)(System::Globalization::DateTimeStyles, ::Il2CppString*)>(&System::DateTimeOffset::ValidateStyles)> {
  const MethodInfo* get() {
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeStyles")->byval_arg;
    static auto* parameterName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "ValidateStyles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{style, parameterName});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::DateTimeOffset::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::DateTimeOffset::*)(::Il2CppObject*)>(&System::DateTimeOffset::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::DateTimeOffset::*)()>(&System::DateTimeOffset::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::DateTimeOffset::*)()>(&System::DateTimeOffset::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeOffset), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeOffset::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::DateTimeOffset::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
