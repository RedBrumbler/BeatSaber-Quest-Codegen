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
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Autogenerated type: System.Net.Http.Headers.TryParseDelegate`1
  template<typename T>
  class TryParseDelegate_1 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    static TryParseDelegate_1<T>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      return THROW_UNLESS(il2cpp_utils::New<TryParseDelegate_1<T>*>(object, method));
    }
    // public System.Boolean Invoke(System.String value, out T result)
    // Offset: 0xFFFFFFFF
    bool Invoke(::Il2CppString* value, T& result) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", value, result));
    }
    // public System.IAsyncResult BeginInvoke(System.String value, out T result, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(::Il2CppString* value, T& result, System::AsyncCallback* callback, ::Il2CppObject* object) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", value, result, callback, object));
    }
    // public System.Boolean EndInvoke(out T result, System.IAsyncResult __result)
    // Offset: 0xFFFFFFFF
    bool EndInvoke(T& result, System::IAsyncResult* __result) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", result, __result));
    }
  }; // System.Net.Http.Headers.TryParseDelegate`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Net::Http::Headers::TryParseDelegate_1, "System.Net.Http.Headers", "TryParseDelegate`1");
#pragma pack(pop)