// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: System
namespace System {
  // Autogenerated type: System.Comparison`1
  template<typename T>
  class Comparison_1 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    static Comparison_1<T>* New_ctor(::CsObject* object, System::IntPtr method) {
      return (Comparison_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Comparison_1<T>*>::get(), object, method));
    }
    // public System.Int32 Invoke(T x, T y)
    // Offset: 0xFFFFFFFF
    int Invoke(T x, T y) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Invoke", x, y));
    }
    // public System.IAsyncResult BeginInvoke(T x, T y, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(T x, T y, System::AsyncCallback* callback, ::CsObject* object) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", x, y, callback, object));
    }
    // public System.Int32 EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    int EndInvoke(System::IAsyncResult* result) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "EndInvoke", result));
    }
  }; // System.Comparison`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Comparison_1, "System", "Comparison`1");
#pragma pack(pop)
