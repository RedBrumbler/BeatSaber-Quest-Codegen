// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.Tasks.TaskCompletionSource`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TResult>
  class TaskCompletionSource_1 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly System.Threading.Tasks.Task`1<TResult> m_task
    // Size: 0x8
    // Offset: 0x0
    System::Threading::Tasks::Task_1<TResult>* m_task;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task_1<TResult>*) == 0x8);
    public:
    // Creating conversion operator: operator System::Threading::Tasks::Task_1<TResult>*
    constexpr operator System::Threading::Tasks::Task_1<TResult>*() const noexcept {
      return m_task;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Threading.Tasks.Task`1<TResult> m_task
    System::Threading::Tasks::Task_1<TResult>*& dyn_m_task() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskCompletionSource_1::dyn_m_task");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_task"))->offset;
      return *reinterpret_cast<System::Threading::Tasks::Task_1<TResult>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Threading.Tasks.Task`1<TResult> get_Task()
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<TResult>* get_Task() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskCompletionSource_1::get_Task");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Task", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<TResult>*, false>(this, ___internal__method);
    }
    // private System.Void SpinUntilCompleted()
    // Offset: 0xFFFFFFFF
    void SpinUntilCompleted() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskCompletionSource_1::SpinUntilCompleted");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SpinUntilCompleted", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Boolean TrySetException(System.Exception exception)
    // Offset: 0xFFFFFFFF
    bool TrySetException(System::Exception* exception) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskCompletionSource_1::TrySetException");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TrySetException", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(exception)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, exception);
    }
    // public System.Boolean TrySetResult(TResult result)
    // Offset: 0xFFFFFFFF
    bool TrySetResult(TResult result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskCompletionSource_1::TrySetResult");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TrySetResult", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, result);
    }
    // public System.Void SetResult(TResult result)
    // Offset: 0xFFFFFFFF
    void SetResult(TResult result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskCompletionSource_1::SetResult");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetResult", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, result);
    }
    // public System.Boolean TrySetCanceled()
    // Offset: 0xFFFFFFFF
    bool TrySetCanceled() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskCompletionSource_1::TrySetCanceled");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TrySetCanceled", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean TrySetCanceled(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    bool TrySetCanceled(System::Threading::CancellationToken cancellationToken) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskCompletionSource_1::TrySetCanceled");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TrySetCanceled", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(cancellationToken)})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, cancellationToken);
    }
    // public System.Void SetCanceled()
    // Offset: 0xFFFFFFFF
    void SetCanceled() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskCompletionSource_1::SetCanceled");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetCanceled", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskCompletionSource_1<TResult>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskCompletionSource_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskCompletionSource_1<TResult>*, creationType>()));
    }
  }; // System.Threading.Tasks.TaskCompletionSource`1
  // Could not write size check! Type: System.Threading.Tasks.TaskCompletionSource`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::Tasks::TaskCompletionSource_1, "System.Threading.Tasks", "TaskCompletionSource`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
