// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Compression.DeflateStreamNative
#include "System/IO/Compression/DeflateStreamNative.hpp"
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
NEED_NO_BOX(::System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite*, "System.IO.Compression", "DeflateStreamNative/UnmanagedReadOrWrite");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.DeflateStreamNative/System.IO.Compression.UnmanagedReadOrWrite
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 1082D48
  class DeflateStreamNative::UnmanagedReadOrWrite : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1DA6418
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateStreamNative::UnmanagedReadOrWrite* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateStreamNative::UnmanagedReadOrWrite*, creationType>(object, method)));
    }
    // public System.Int32 Invoke(System.IntPtr buffer, System.Int32 length, System.IntPtr data)
    // Offset: 0x1DA6AA4
    int Invoke(::System::IntPtr buffer, int length, ::System::IntPtr data);
    // public System.IAsyncResult BeginInvoke(System.IntPtr buffer, System.Int32 length, System.IntPtr data, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1DA6D40
    ::System::IAsyncResult* BeginInvoke(::System::IntPtr buffer, int length, ::System::IntPtr data, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1DA6E04
    int EndInvoke(::System::IAsyncResult* result);
  }; // System.IO.Compression.DeflateStreamNative/System.IO.Compression.UnmanagedReadOrWrite
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::*)(::System::IntPtr, int, ::System::IntPtr)>(&System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::Invoke)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, length, data});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::*)(::System::IntPtr, int, ::System::IntPtr, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, length, data, callback, object});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::*)(::System::IAsyncResult*)>(&System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
