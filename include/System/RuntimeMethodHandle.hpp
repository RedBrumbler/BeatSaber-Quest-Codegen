// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: RuntimeMethodInfo
  class RuntimeMethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TypeNameFormatFlags
  struct TypeNameFormatFlags;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.RuntimeMethodHandle
  struct RuntimeMethodHandle : public System::ValueType, public System::Runtime::Serialization::ISerializable {
    public:
    // private System.IntPtr value
    // Offset: 0x0
    System::IntPtr value;
    // Creating value type constructor for type: RuntimeMethodHandle
    RuntimeMethodHandle(System::IntPtr value_ = {}) : value{value_} {}
    // System.Void .ctor(System.IntPtr v)
    // Offset: 0xA2DB14
    static RuntimeMethodHandle* New_ctor(System::IntPtr v);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xA2DB1C
    static RuntimeMethodHandle* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.IntPtr get_Value()
    // Offset: 0xA2DB24
    System::IntPtr get_Value();
    // static System.String ConstructInstantiation(System.Reflection.RuntimeMethodInfo method, System.TypeNameFormatFlags format)
    // Offset: 0xDC334C
    static ::Il2CppString* ConstructInstantiation(System::Reflection::RuntimeMethodInfo* method, System::TypeNameFormatFlags format);
    // System.Boolean IsNullHandle()
    // Offset: 0xA2DB48
    bool IsNullHandle();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xA2DB2C
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA2DB34
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA2DB3C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.RuntimeMethodHandle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::RuntimeMethodHandle, "System", "RuntimeMethodHandle");
#pragma pack(pop)