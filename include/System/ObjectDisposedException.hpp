// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.InvalidOperationException
#include "System/InvalidOperationException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ObjectDisposedException
  class ObjectDisposedException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ObjectDisposedException);
DEFINE_IL2CPP_ARG_TYPE(::System::ObjectDisposedException*, "System", "ObjectDisposedException");
// Type namespace: System
namespace System {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.ObjectDisposedException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 107A73C
  class ObjectDisposedException : public ::System::InvalidOperationException {
    public:
    public:
    // private System.String objectName
    // Size: 0x8
    // Offset: 0x88
    ::StringW objectName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return objectName;
    }
    // Get instance field reference: private System.String objectName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_objectName();
    // public System.String get_ObjectName()
    // Offset: 0x22D657C
    ::StringW get_ObjectName();
    // public System.Void .ctor(System.String objectName, System.String message)
    // Offset: 0x22D639C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectDisposedException* New_ctor(::StringW objectName, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ObjectDisposedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectDisposedException*, creationType>(objectName, message)));
    }
    // public override System.String get_Message()
    // Offset: 0x22D6468
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::StringW get_Message();
    // private System.Void .ctor()
    // Offset: 0x22D6320
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectDisposedException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ObjectDisposedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectDisposedException*, creationType>()));
    }
    // public System.Void .ctor(System.String objectName)
    // Offset: 0x22D63E0
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor(System.String objectName)
    // Base method: System.Void SystemException::.ctor(System.String objectName)
    // Base method: System.Void Exception::.ctor(System.String objectName)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectDisposedException* New_ctor(::StringW objectName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ObjectDisposedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectDisposedException*, creationType>(objectName)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x22D65F8
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectDisposedException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ObjectDisposedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectDisposedException*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x22D6690
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
  }; // System.ObjectDisposedException
  #pragma pack(pop)
  static check_size<sizeof(ObjectDisposedException), 136 + sizeof(::StringW)> __System_ObjectDisposedExceptionSizeCheck;
  static_assert(sizeof(ObjectDisposedException) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ObjectDisposedException::get_ObjectName
// Il2CppName: get_ObjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ObjectDisposedException::*)()>(&System::ObjectDisposedException::get_ObjectName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ObjectDisposedException*), "get_ObjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ObjectDisposedException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ObjectDisposedException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ObjectDisposedException::*)()>(&System::ObjectDisposedException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ObjectDisposedException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ObjectDisposedException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ObjectDisposedException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ObjectDisposedException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ObjectDisposedException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ObjectDisposedException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::ObjectDisposedException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ObjectDisposedException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
