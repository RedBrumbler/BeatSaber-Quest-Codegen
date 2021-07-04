// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.RequestStream
#include "System/Net/RequestStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: MonoChunkStream
  class MonoChunkStream;
  // Forward declaring type: HttpListenerContext
  class HttpListenerContext;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ChunkedInputStream
  class ChunkedInputStream : public System::Net::RequestStream {
    public:
    // Nested type: System::Net::ChunkedInputStream::ReadBufferState
    class ReadBufferState;
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x50
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: decoder
    char __padding0[0x7] = {};
    // private System.Net.MonoChunkStream decoder
    // Size: 0x8
    // Offset: 0x58
    System::Net::MonoChunkStream* decoder;
    // Field size check
    static_assert(sizeof(System::Net::MonoChunkStream*) == 0x8);
    // private System.Net.HttpListenerContext context
    // Size: 0x8
    // Offset: 0x60
    System::Net::HttpListenerContext* context;
    // Field size check
    static_assert(sizeof(System::Net::HttpListenerContext*) == 0x8);
    // private System.Boolean no_more_data
    // Size: 0x1
    // Offset: 0x68
    bool no_more_data;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ChunkedInputStream
    ChunkedInputStream(bool disposed_ = {}, System::Net::MonoChunkStream* decoder_ = {}, System::Net::HttpListenerContext* context_ = {}, bool no_more_data_ = {}) noexcept : disposed{disposed_}, decoder{decoder_}, context{context_}, no_more_data{no_more_data_} {}
    // public System.Void .ctor(System.Net.HttpListenerContext context, System.IO.Stream stream, System.Byte[] buffer, System.Int32 offset, System.Int32 length)
    // Offset: 0x16AB864
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChunkedInputStream* New_ctor(System::Net::HttpListenerContext* context, System::IO::Stream* stream, ::Array<uint8_t>* buffer, int offset, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::ChunkedInputStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChunkedInputStream*, creationType>(context, stream, buffer, offset, length)));
    }
    // private System.Void OnRead(System.IAsyncResult base_ares)
    // Offset: 0x16ABCC0
    void OnRead(System::IAsyncResult* base_ares);
    // public override System.Int32 Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x16AB968
    // Implemented from: System.Net.RequestStream
    // Base method: System.Int32 RequestStream::Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>*& buffer, int offset, int count);
    // public override System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback cback, System.Object state)
    // Offset: 0x16AB9B0
    // Implemented from: System.Net.RequestStream
    // Base method: System.IAsyncResult RequestStream::BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback cback, System.Object state)
    System::IAsyncResult* BeginRead(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* cback, ::Il2CppObject* state);
    // public override System.Int32 EndRead(System.IAsyncResult ares)
    // Offset: 0x16AC054
    // Implemented from: System.Net.RequestStream
    // Base method: System.Int32 RequestStream::EndRead(System.IAsyncResult ares)
    int EndRead(System::IAsyncResult* ares);
    // public override System.Void Close()
    // Offset: 0x16AC2E4
    // Implemented from: System.Net.RequestStream
    // Base method: System.Void RequestStream::Close()
    void Close();
  }; // System.Net.ChunkedInputStream
  #pragma pack(pop)
  static check_size<sizeof(ChunkedInputStream), 104 + sizeof(bool)> __System_Net_ChunkedInputStreamSizeCheck;
  static_assert(sizeof(ChunkedInputStream) == 0x69);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::ChunkedInputStream*, "System.Net", "ChunkedInputStream");
// Writing MetadataGetter for method: System::Net::ChunkedInputStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::ChunkedInputStream::OnRead
// Il2CppName: OnRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ChunkedInputStream::*)(System::IAsyncResult*)>(&System::Net::ChunkedInputStream::OnRead)> {
  const MethodInfo* get() {
    static auto* base_ares = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ChunkedInputStream*), "OnRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{base_ares});
  }
};
// Writing MetadataGetter for method: System::Net::ChunkedInputStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::ChunkedInputStream::*)(::Array<uint8_t>*&, int, int)>(&System::Net::ChunkedInputStream::Read)> {
  const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ChunkedInputStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::Net::ChunkedInputStream::BeginRead
// Il2CppName: BeginRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Net::ChunkedInputStream::*)(::Array<uint8_t>*, int, int, System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::ChunkedInputStream::BeginRead)> {
  const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ChunkedInputStream*), "BeginRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cback, state});
  }
};
// Writing MetadataGetter for method: System::Net::ChunkedInputStream::EndRead
// Il2CppName: EndRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::ChunkedInputStream::*)(System::IAsyncResult*)>(&System::Net::ChunkedInputStream::EndRead)> {
  const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ChunkedInputStream*), "EndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};
// Writing MetadataGetter for method: System::Net::ChunkedInputStream::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ChunkedInputStream::*)()>(&System::Net::ChunkedInputStream::Close)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ChunkedInputStream*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
