// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.MonoProperty
#include "System/Reflection/MonoProperty.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Reflection::MonoProperty::Getter_2, "System.Reflection", "MonoProperty/Getter`2");
// Type namespace: System.Reflection
namespace System::Reflection {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Reflection.MonoProperty/System.Reflection.Getter`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T, typename R>
  class MonoProperty::Getter_2 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoProperty::Getter_2<T, R>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MonoProperty::Getter_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoProperty::Getter_2<T, R>*, creationType>(object, method)));
    }
    // public R Invoke(T _this)
    // Offset: 0xFFFFFFFF
    R Invoke(T _this) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MonoProperty::Getter_2::Invoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(_this)})));
      return ::il2cpp_utils::RunMethodRethrow<R, false>(this, ___internal__method, _this);
    }
    // public System.IAsyncResult BeginInvoke(T _this, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(T _this, System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MonoProperty::Getter_2::BeginInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(_this), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(object)})));
      return ::il2cpp_utils::RunMethodRethrow<System::IAsyncResult*, false>(this, ___internal__method, _this, callback, object);
    }
    // public R EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    R EndInvoke(System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MonoProperty::Getter_2::EndInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
      return ::il2cpp_utils::RunMethodRethrow<R, false>(this, ___internal__method, result);
    }
  }; // System.Reflection.MonoProperty/System.Reflection.Getter`2
  // Could not write size check! Type: System.Reflection.MonoProperty/System.Reflection.Getter`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
