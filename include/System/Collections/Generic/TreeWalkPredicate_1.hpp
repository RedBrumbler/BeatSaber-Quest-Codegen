// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: System.Collections.Generic.SortedSet`1
#include "System/Collections/Generic/SortedSet_1.hpp"
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
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: TreeWalkPredicate`1<T>
  template<typename T>
  class TreeWalkPredicate_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::TreeWalkPredicate_1, "System.Collections.Generic", "TreeWalkPredicate`1");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.TreeWalkPredicate`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class TreeWalkPredicate_1 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TreeWalkPredicate_1<T>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::TreeWalkPredicate_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TreeWalkPredicate_1<T>*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Collections.Generic.SortedSet`1/System.Collections.Generic.Node<T> node)
    // Offset: 0xFFFFFFFF
    bool Invoke(typename System::Collections::Generic::SortedSet_1<T>::Node* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::TreeWalkPredicate_1::Invoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, node);
    }
    // public System.IAsyncResult BeginInvoke(System.Collections.Generic.SortedSet`1/System.Collections.Generic.Node<T> node, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(typename System::Collections::Generic::SortedSet_1<T>::Node* node, System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::TreeWalkPredicate_1::BeginInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(object)})));
      return ::il2cpp_utils::RunMethodRethrow<System::IAsyncResult*, false>(this, ___internal__method, node, callback, object);
    }
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    bool EndInvoke(System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::TreeWalkPredicate_1::EndInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, result);
    }
  }; // System.Collections.Generic.TreeWalkPredicate`1
  // Could not write size check! Type: System.Collections.Generic.TreeWalkPredicate`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
