// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.UnauthorizedAccessException
#include "System/UnauthorizedAccessException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Skipping declaration: StreamingContext because it is already included!
}
// Completed forward declares
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: PrivilegeNotHeldException
  class PrivilegeNotHeldException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::AccessControl::PrivilegeNotHeldException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::PrivilegeNotHeldException*, "System.Security.AccessControl", "PrivilegeNotHeldException");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.PrivilegeNotHeldException
  // [TokenAttribute] Offset: FFFFFFFF
  class PrivilegeNotHeldException : public ::System::UnauthorizedAccessException {
    public:
    // public System.Void .ctor()
    // Offset: 0x1BE76B0
    // Implemented from: System.UnauthorizedAccessException
    // Base method: System.Void UnauthorizedAccessException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrivilegeNotHeldException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::PrivilegeNotHeldException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrivilegeNotHeldException*, creationType>()));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1BE8E8C
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
  }; // System.Security.AccessControl.PrivilegeNotHeldException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::AccessControl::PrivilegeNotHeldException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::PrivilegeNotHeldException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::PrivilegeNotHeldException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Security::AccessControl::PrivilegeNotHeldException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::PrivilegeNotHeldException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
