// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusPlatformAdditionalContentModel
#include "GlobalNamespace/OculusPlatformAdditionalContentModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Purchase
  class Purchase;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAdditionalContentModel::$LaunchCheckoutFlow$d__10, "", "OculusPlatformAdditionalContentModel/<LaunchCheckoutFlow>d__10");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OculusPlatformAdditionalContentModel/<LaunchCheckoutFlow>d__10
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct OculusPlatformAdditionalContentModel::$LaunchCheckoutFlow$d__10/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> $$t__builder;
    // public System.String sku
    // Size: 0x8
    // Offset: 0x20
    ::StringW sku;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> $$u__1;
    public:
    // Creating value type constructor for type: $LaunchCheckoutFlow$d__10
    constexpr $LaunchCheckoutFlow$d__10(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> $$t__builder_ = {}, ::StringW sku_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, sku{sku_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Creating interface conversion operator: i_IAsyncStateMachine
    inline ::System::Runtime::CompilerServices::IAsyncStateMachine* i_IAsyncStateMachine() noexcept {
      return reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>& dyn_$$t__builder();
    // Get instance field reference: public System.String sku
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sku();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x13821FC
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1382474
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OculusPlatformAdditionalContentModel/<LaunchCheckoutFlow>d__10
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::$LaunchCheckoutFlow$d__10::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformAdditionalContentModel::$LaunchCheckoutFlow$d__10::*)()>(&GlobalNamespace::OculusPlatformAdditionalContentModel::$LaunchCheckoutFlow$d__10::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel::$LaunchCheckoutFlow$d__10), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::$LaunchCheckoutFlow$d__10::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformAdditionalContentModel::$LaunchCheckoutFlow$d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::$LaunchCheckoutFlow$d__10::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel::$LaunchCheckoutFlow$d__10), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
