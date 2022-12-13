// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: Pointer
  class Pointer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::Pointer);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Pointer*, "System.Reflection", "Pointer");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Pointer
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 10750B8
  // [CLSCompliantAttribute] Offset: 10750B8
  class Pointer : public ::Il2CppObject/*, public ::System::Runtime::Serialization::ISerializable*/ {
    public:
    public:
    // private System.Void* _ptr
    // Size: 0x8
    // Offset: 0x10
    void* ptr;
    // Field size check
    static_assert(sizeof(void*) == 0x8);
    // private System.RuntimeType _ptrType
    // Size: 0x8
    // Offset: 0x18
    ::System::RuntimeType* ptrType;
    // Field size check
    static_assert(sizeof(::System::RuntimeType*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: i_ISerializable
    inline ::System::Runtime::Serialization::ISerializable* i_ISerializable() noexcept {
      return reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get instance field reference: private System.Void* _ptr
    [[deprecated("Use field access instead!")]] void*& dyn__ptr();
    // Get instance field reference: private System.RuntimeType _ptrType
    [[deprecated("Use field access instead!")]] ::System::RuntimeType*& dyn__ptrType();
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1E320B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pointer* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::Pointer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pointer*, creationType>(info, context)));
    }
    // static public System.Object Box(System.Void* ptr, System.Type type)
    // Offset: 0x1E32204
    static ::Il2CppObject* Box(void* ptr, ::System::Type* type);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1E323C0
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // private System.Void .ctor()
    // Offset: 0x1E320A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pointer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::Pointer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pointer*, creationType>()));
    }
  }; // System.Reflection.Pointer
  #pragma pack(pop)
  static check_size<sizeof(Pointer), 24 + sizeof(::System::RuntimeType*)> __System_Reflection_PointerSizeCheck;
  static_assert(sizeof(Pointer) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::Pointer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::Pointer::Box
// Il2CppName: Box
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(void*, ::System::Type*)>(&System::Reflection::Pointer::Box)> {
  static const MethodInfo* get() {
    static auto* ptr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Pointer*), "Box", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr, type});
  }
};
// Writing MetadataGetter for method: System::Reflection::Pointer::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Pointer::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Reflection::Pointer::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Pointer*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Reflection::Pointer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
