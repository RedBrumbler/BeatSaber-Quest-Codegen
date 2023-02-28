// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AsyncOperation
#include "UnityEngine/AsyncOperation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequestAsyncOperation
  class UnityWebRequestAsyncOperation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Networking::UnityWebRequestAsyncOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, "UnityEngine.Networking", "UnityWebRequestAsyncOperation");
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Networking.UnityWebRequestAsyncOperation
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 10D0498
  // [NativeHeaderAttribute] Offset: 10D0498
  // [NativeHeaderAttribute] Offset: 10D0498
  class UnityWebRequestAsyncOperation : public ::UnityEngine::AsyncOperation {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x10D0658
    // private UnityEngine.Networking.UnityWebRequest <webRequest>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Networking::UnityWebRequest* webRequest;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::UnityWebRequest*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::Networking::UnityWebRequest*
    constexpr operator ::UnityEngine::Networking::UnityWebRequest*() const noexcept {
      return webRequest;
    }
    // Get instance field reference: private UnityEngine.Networking.UnityWebRequest <webRequest>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Networking::UnityWebRequest*& dyn_$webRequest$k__BackingField();
    // public UnityEngine.Networking.UnityWebRequest get_webRequest()
    // Offset: 0x2B8465C
    ::UnityEngine::Networking::UnityWebRequest* get_webRequest();
    // System.Void set_webRequest(UnityEngine.Networking.UnityWebRequest value)
    // Offset: 0x2B84664
    void set_webRequest(::UnityEngine::Networking::UnityWebRequest* value);
    // public System.Void .ctor()
    // Offset: 0x2B8466C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityWebRequestAsyncOperation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Networking::UnityWebRequestAsyncOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityWebRequestAsyncOperation*, creationType>()));
    }
  }; // UnityEngine.Networking.UnityWebRequestAsyncOperation
  #pragma pack(pop)
  static check_size<sizeof(UnityWebRequestAsyncOperation), 32 + sizeof(::UnityEngine::Networking::UnityWebRequest*)> __UnityEngine_Networking_UnityWebRequestAsyncOperationSizeCheck;
  static_assert(sizeof(UnityWebRequestAsyncOperation) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::UnityWebRequestAsyncOperation::get_webRequest
// Il2CppName: get_webRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (UnityEngine::Networking::UnityWebRequestAsyncOperation::*)()>(&UnityEngine::Networking::UnityWebRequestAsyncOperation::get_webRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::UnityWebRequestAsyncOperation*), "get_webRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::UnityWebRequestAsyncOperation::set_webRequest
// Il2CppName: set_webRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequestAsyncOperation::*)(::UnityEngine::Networking::UnityWebRequest*)>(&UnityEngine::Networking::UnityWebRequestAsyncOperation::set_webRequest)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::UnityWebRequestAsyncOperation*), "set_webRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::UnityWebRequestAsyncOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
