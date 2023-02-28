// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusPlatformUserModel
#include "GlobalNamespace/OculusPlatformUserModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: UserInfo
  class UserInfo;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: User
  class User;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0*, "", "OculusPlatformUserModel/<>c__DisplayClass2_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformUserModel/<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OculusPlatformUserModel::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Threading.Tasks.TaskCompletionSource`1<UserInfo> tcs
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>* tcs;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>*) == 0x8);
    // public OculusPlatformUserModel <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OculusPlatformUserModel* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OculusPlatformUserModel*) == 0x8);
    public:
    // Get instance field reference: public System.Threading.Tasks.TaskCompletionSource`1<UserInfo> tcs
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>*& dyn_tcs();
    // Get instance field reference: public OculusPlatformUserModel <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OculusPlatformUserModel*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x1383C88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformUserModel::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformUserModel::$$c__DisplayClass2_0*, creationType>()));
    }
    // System.Void <GetUserInfo>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.User> message)
    // Offset: 0x1383C90
    void $GetUserInfo$b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* message);
  }; // OculusPlatformUserModel/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformUserModel::$$c__DisplayClass2_0), 24 + sizeof(::GlobalNamespace::OculusPlatformUserModel*)> __GlobalNamespace_OculusPlatformUserModel_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(OculusPlatformUserModel::$$c__DisplayClass2_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0::$GetUserInfo$b__0
// Il2CppName: <GetUserInfo>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*)>(&GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0::$GetUserInfo$b__0)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "User")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0*), "<GetUserInfo>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
