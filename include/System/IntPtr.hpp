// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::IntPtr, "System", "IntPtr");
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.IntPtr
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1074380
  struct IntPtr/*, public ::System::ValueType, public ::System::Runtime::Serialization::ISerializable*/ {
    public:
    public:
    // private System.Void* m_value
    // Size: 0x8
    // Offset: 0x0
    void* m_value;
    // Field size check
    static_assert(sizeof(void*) == 0x8);
    public:
    // Creating value type constructor for type: IntPtr
    constexpr IntPtr(void* m_value_ = {}) noexcept : m_value{m_value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: i_ISerializable
    inline ::System::Runtime::Serialization::ISerializable* i_ISerializable() noexcept {
      return reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating conversion operator: operator void*
    constexpr operator void*() const noexcept {
      return m_value;
    }
    // Get static field: static public readonly System.IntPtr Zero
    static ::System::IntPtr _get_Zero();
    // Set static field: static public readonly System.IntPtr Zero
    static void _set_Zero(::System::IntPtr value);
    // Get instance field reference: private System.Void* m_value
    [[deprecated("Use field access instead!")]] void*& dyn_m_value();
    // static public System.Int32 get_Size()
    // Offset: 0x1C4A028
    static int get_Size();
    // public System.Void .ctor(System.Int32 value)
    // Offset: 0x1C49F9C
    IntPtr(int value);
    // public System.Void .ctor(System.Int64 value)
    // Offset: 0x1C49FA8
    IntPtr(int64_t value);
    // public System.Void .ctor(System.Void* value)
    // Offset: 0x1C49FB0
    // ABORTED: conflicts with another method.  IntPtr(void* value);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1C49FB8
    IntPtr(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1C4A030
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public System.Int64 ToInt64()
    // Offset: 0x1C4A0D4
    int64_t ToInt64();
    // public System.Void* ToPointer()
    // Offset: 0x1C4A16C
    void* ToPointer();
    // public System.String ToString(System.String format)
    // Offset: 0x1C4A1A8
    ::StringW ToString(::StringW format);
    // static public System.IntPtr op_Explicit(System.Int32 value)
    // Offset: 0x1C4A1F8
    explicit IntPtr(int& value);
    // static public System.IntPtr op_Explicit(System.Int64 value)
    // Offset: 0x1C4A200
    explicit IntPtr(int64_t& value);
    // static public System.IntPtr op_Explicit(System.Void* value)
    // Offset: 0x1C4A204
    // ABORTED: conflicts with another method.  explicit IntPtr(void* value);
    // static public System.Int32 op_Explicit(System.IntPtr value)
    // Offset: 0x1C4A208
    explicit operator int();
    // static public System.Int64 op_Explicit(System.IntPtr value)
    // Offset: 0x1C4A20C
    explicit operator int64_t();
    // static public System.Void* op_Explicit(System.IntPtr value)
    // Offset: 0x1C4A210
    // ABORTED: conflicts with another method.  explicit operator void*();
    // static public System.IntPtr Add(System.IntPtr pointer, System.Int32 offset)
    // Offset: 0x1C4A214
    static ::System::IntPtr Add(::System::IntPtr pointer, int offset);
    // System.Boolean IsNull()
    // Offset: 0x1C4A21C
    bool IsNull();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1C4A0DC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1C4A164
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1C4A174
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.IntPtr
  #pragma pack(pop)
  static check_size<sizeof(IntPtr), 0 + sizeof(void*)> __System_IntPtrSizeCheck;
  static_assert(sizeof(IntPtr) == 0x8);
  // static public System.Boolean op_Equality(System.IntPtr value1, System.IntPtr value2)
  // Offset: 0x1C4A1E0
  bool operator ==(const ::System::IntPtr& value1, const ::System::IntPtr& value2);
  // static public System.Boolean op_Inequality(System.IntPtr value1, System.IntPtr value2)
  // Offset: 0x1C4A1EC
  bool operator !=(const ::System::IntPtr& value1, const ::System::IntPtr& value2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IntPtr::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::IntPtr::get_Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IntPtr::IntPtr
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IntPtr::IntPtr
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IntPtr::IntPtr
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IntPtr::IntPtr
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IntPtr::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IntPtr::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::IntPtr::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::IntPtr::ToInt64
// Il2CppName: ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IntPtr::*)()>(&System::IntPtr::ToInt64)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IntPtr::ToPointer
// Il2CppName: ToPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (System::IntPtr::*)()>(&System::IntPtr::ToPointer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "ToPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IntPtr::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IntPtr::*)(::StringW)>(&System::IntPtr::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: System::IntPtr::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IntPtr::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IntPtr::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IntPtr::operator int
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IntPtr::operator int64_t
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IntPtr::operator void*
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IntPtr::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, int)>(&System::IntPtr::Add)> {
  static const MethodInfo* get() {
    static auto* pointer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointer, offset});
  }
};
// Writing MetadataGetter for method: System::IntPtr::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IntPtr::*)()>(&System::IntPtr::IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IntPtr::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IntPtr::*)(::Il2CppObject*)>(&System::IntPtr::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::IntPtr::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IntPtr::*)()>(&System::IntPtr::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IntPtr::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IntPtr::*)()>(&System::IntPtr::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IntPtr), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IntPtr::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::IntPtr::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
