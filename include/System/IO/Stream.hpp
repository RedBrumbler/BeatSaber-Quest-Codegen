// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SemaphoreSlim
  class SemaphoreSlim;
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Stream
  // [ComVisibleAttribute] Offset: D7C8A0
  class Stream : public System::MarshalByRefObject/*, public System::IDisposable*/ {
    public:
    // Nested type: System::IO::Stream::ReadWriteParameters
    struct ReadWriteParameters;
    // Nested type: System::IO::Stream::ReadWriteTask
    class ReadWriteTask;
    // Nested type: System::IO::Stream::NullStream
    class NullStream;
    // Nested type: System::IO::Stream::SynchronousAsyncResult
    class SynchronousAsyncResult;
    // Nested type: System::IO::Stream::$$c
    class $$c;
    // Nested type: System::IO::Stream::$CopyToAsyncInternal$d__27
    struct $CopyToAsyncInternal$d__27;
    // private System.IO.Stream/ReadWriteTask _activeReadWriteTask
    // Size: 0x8
    // Offset: 0x18
    System::IO::Stream::ReadWriteTask* activeReadWriteTask;
    // Field size check
    static_assert(sizeof(System::IO::Stream::ReadWriteTask*) == 0x8);
    // private System.Threading.SemaphoreSlim _asyncActiveSemaphore
    // Size: 0x8
    // Offset: 0x20
    System::Threading::SemaphoreSlim* asyncActiveSemaphore;
    // Field size check
    static_assert(sizeof(System::Threading::SemaphoreSlim*) == 0x8);
    // Creating value type constructor for type: Stream
    Stream(System::IO::Stream::ReadWriteTask* activeReadWriteTask_ = {}, System::Threading::SemaphoreSlim* asyncActiveSemaphore_ = {}) noexcept : activeReadWriteTask{activeReadWriteTask_}, asyncActiveSemaphore{asyncActiveSemaphore_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static public readonly System.IO.Stream Null
    static System::IO::Stream* _get_Null();
    // Set static field: static public readonly System.IO.Stream Null
    static void _set_Null(System::IO::Stream* value);
    // static field const value: static private System.Int32 _DefaultCopyBufferSize
    static constexpr const int _DefaultCopyBufferSize = 81920;
    // Get static field: static private System.Int32 _DefaultCopyBufferSize
    static int _get__DefaultCopyBufferSize();
    // Set static field: static private System.Int32 _DefaultCopyBufferSize
    static void _set__DefaultCopyBufferSize(int value);
    // System.Threading.SemaphoreSlim EnsureAsyncActiveSemaphoreInitialized()
    // Offset: 0x1956FF0
    System::Threading::SemaphoreSlim* EnsureAsyncActiveSemaphoreInitialized();
    // public System.Boolean get_CanRead()
    // Offset: 0xFFFFFFFF
    bool get_CanRead();
    // public System.Boolean get_CanSeek()
    // Offset: 0xFFFFFFFF
    bool get_CanSeek();
    // public System.Boolean get_CanWrite()
    // Offset: 0xFFFFFFFF
    bool get_CanWrite();
    // public System.Int64 get_Length()
    // Offset: 0xFFFFFFFF
    int64_t get_Length();
    // public System.Int64 get_Position()
    // Offset: 0xFFFFFFFF
    int64_t get_Position();
    // public System.Void set_Position(System.Int64 value)
    // Offset: 0xFFFFFFFF
    void set_Position(int64_t value);
    // public System.Int32 get_ReadTimeout()
    // Offset: 0x19570E0
    int get_ReadTimeout();
    // public System.Int32 get_WriteTimeout()
    // Offset: 0x1957160
    int get_WriteTimeout();
    // public System.Threading.Tasks.Task CopyToAsync(System.IO.Stream destination)
    // Offset: 0x19571E0
    System::Threading::Tasks::Task* CopyToAsync(System::IO::Stream* destination);
    // public System.Threading.Tasks.Task CopyToAsync(System.IO.Stream destination, System.Int32 bufferSize)
    // Offset: 0x19571EC
    System::Threading::Tasks::Task* CopyToAsync(System::IO::Stream* destination, int bufferSize);
    // public System.Threading.Tasks.Task CopyToAsync(System.IO.Stream destination, System.Int32 bufferSize, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x19529A8
    System::Threading::Tasks::Task* CopyToAsync(System::IO::Stream* destination, int bufferSize, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task CopyToAsyncInternal(System.IO.Stream destination, System.Int32 bufferSize, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1957280
    System::Threading::Tasks::Task* CopyToAsyncInternal(System::IO::Stream* destination, int bufferSize, System::Threading::CancellationToken cancellationToken);
    // public System.Void Close()
    // Offset: 0x19573A8
    void Close();
    // public System.Void Dispose()
    // Offset: 0x1957428
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x195192C
    void Dispose(bool disposing);
    // public System.Void Flush()
    // Offset: 0xFFFFFFFF
    void Flush();
    // public System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0x194E90C
    System::IAsyncResult* BeginRead(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state);
    // System.IAsyncResult BeginReadInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state, System.Boolean serializeAsynchronously)
    // Offset: 0x1957438
    System::IAsyncResult* BeginReadInternal(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state, bool serializeAsynchronously);
    // public System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x194EB20
    int EndRead(System::IAsyncResult* asyncResult);
    // public System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x19503A0
    System::Threading::Tasks::Task_1<int>* ReadAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<System.Int32> BeginEndReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1957BA8
    System::Threading::Tasks::Task_1<int>* BeginEndReadAsync(::Array<uint8_t>* buffer, int offset, int count);
    // public System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0x194F550
    System::IAsyncResult* BeginWrite(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state);
    // System.IAsyncResult BeginWriteInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state, System.Boolean serializeAsynchronously)
    // Offset: 0x1957D48
    System::IAsyncResult* BeginWriteInternal(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state, bool serializeAsynchronously);
    // private System.Void RunReadWriteTaskWhenReady(System.Threading.Tasks.Task asyncWaiter, System.IO.Stream/ReadWriteTask readWriteTask)
    // Offset: 0x1957918
    void RunReadWriteTaskWhenReady(System::Threading::Tasks::Task* asyncWaiter, System::IO::Stream::ReadWriteTask* readWriteTask);
    // private System.Void RunReadWriteTask(System.IO.Stream/ReadWriteTask readWriteTask)
    // Offset: 0x1957AD4
    void RunReadWriteTask(System::IO::Stream::ReadWriteTask* readWriteTask);
    // public System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x194F824
    void EndWrite(System::IAsyncResult* asyncResult);
    // public System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x19580BC
    System::Threading::Tasks::Task* WriteAsync(::Array<uint8_t>* buffer, int offset, int count);
    // public System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1950464
    System::Threading::Tasks::Task* WriteAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task BeginEndWriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1958160
    System::Threading::Tasks::Task* BeginEndWriteAsync(::Array<uint8_t>* buffer, int offset, int count);
    // public System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0xFFFFFFFF
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public System.Void SetLength(System.Int64 value)
    // Offset: 0xFFFFFFFF
    void SetLength(int64_t value);
    // public System.Int32 Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int Read(::Array<uint8_t>*& buffer, int offset, int count);
    // public System.Int32 ReadByte()
    // Offset: 0x1958300
    int ReadByte();
    // public System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFF
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // public System.Void WriteByte(System.Byte value)
    // Offset: 0x19583A4
    void WriteByte(uint8_t value);
    // System.IAsyncResult BlockingBeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0x195763C
    System::IAsyncResult* BlockingBeginRead(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state);
    // static System.Int32 BlockingEndRead(System.IAsyncResult asyncResult)
    // Offset: 0x1957BA4
    static int BlockingEndRead(System::IAsyncResult* asyncResult);
    // System.IAsyncResult BlockingBeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object state)
    // Offset: 0x1957F4C
    System::IAsyncResult* BlockingBeginWrite(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* state);
    // static System.Void BlockingEndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x19580B8
    static void BlockingEndWrite(System::IAsyncResult* asyncResult);
    // static private System.Void .cctor()
    // Offset: 0x1958650
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x194BF90
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stream* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Stream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stream*, creationType>()));
    }
  }; // System.IO.Stream
  #pragma pack(pop)
  static check_size<sizeof(Stream), 32 + sizeof(System::Threading::SemaphoreSlim*)> __System_IO_StreamSizeCheck;
  static_assert(sizeof(Stream) == 0x28);
  // Writing MetadataGetter for method: Stream::EnsureAsyncActiveSemaphoreInitialized
  // Il2CppName: EnsureAsyncActiveSemaphoreInitialized
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::SemaphoreSlim* (Stream::*)()>(&Stream::EnsureAsyncActiveSemaphoreInitialized)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "EnsureAsyncActiveSemaphoreInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Stream::get_CanRead
  // Il2CppName: get_CanRead
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Stream::*)()>(&Stream::get_CanRead)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Stream::get_CanSeek
  // Il2CppName: get_CanSeek
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Stream::*)()>(&Stream::get_CanSeek)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Stream::get_CanWrite
  // Il2CppName: get_CanWrite
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Stream::*)()>(&Stream::get_CanWrite)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Stream::get_Length
  // Il2CppName: get_Length
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Stream::*)()>(&Stream::get_Length)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Stream::get_Position
  // Il2CppName: get_Position
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Stream::*)()>(&Stream::get_Position)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Stream::set_Position
  // Il2CppName: set_Position
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Stream::*)(int64_t)>(&Stream::set_Position)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>()});
    }
  };
  // Writing MetadataGetter for method: Stream::get_ReadTimeout
  // Il2CppName: get_ReadTimeout
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Stream::*)()>(&Stream::get_ReadTimeout)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "get_ReadTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Stream::get_WriteTimeout
  // Il2CppName: get_WriteTimeout
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Stream::*)()>(&Stream::get_WriteTimeout)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "get_WriteTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Stream::CopyToAsync
  // Il2CppName: CopyToAsync
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (Stream::*)(System::IO::Stream*)>(&Stream::CopyToAsync)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "CopyToAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IO::Stream*>()});
    }
  };
  // Writing MetadataGetter for method: Stream::CopyToAsync
  // Il2CppName: CopyToAsync
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (Stream::*)(System::IO::Stream*, int)>(&Stream::CopyToAsync)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "CopyToAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IO::Stream*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: Stream::CopyToAsync
  // Il2CppName: CopyToAsync
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (Stream::*)(System::IO::Stream*, int, System::Threading::CancellationToken)>(&Stream::CopyToAsync)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "CopyToAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IO::Stream*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
    }
  };
  // Writing MetadataGetter for method: Stream::CopyToAsyncInternal
  // Il2CppName: CopyToAsyncInternal
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (Stream::*)(System::IO::Stream*, int, System::Threading::CancellationToken)>(&Stream::CopyToAsyncInternal)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "CopyToAsyncInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IO::Stream*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
    }
  };
  // Writing MetadataGetter for method: Stream::Close
  // Il2CppName: Close
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Stream::*)()>(&Stream::Close)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Stream::Dispose
  // Il2CppName: Dispose
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Stream::*)()>(&Stream::Dispose)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Stream::Dispose
  // Il2CppName: Dispose
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Stream::*)(bool)>(&Stream::Dispose)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: Stream::Flush
  // Il2CppName: Flush
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Stream::*)()>(&Stream::Flush)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Stream::BeginRead
  // Il2CppName: BeginRead
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Stream::*)(::Array<uint8_t>*, int, int, System::AsyncCallback*, ::Il2CppObject*)>(&Stream::BeginRead)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "BeginRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: Stream::BeginReadInternal
  // Il2CppName: BeginReadInternal
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Stream::*)(::Array<uint8_t>*, int, int, System::AsyncCallback*, ::Il2CppObject*, bool)>(&Stream::BeginReadInternal)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "BeginReadInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: Stream::EndRead
  // Il2CppName: EndRead
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Stream::*)(System::IAsyncResult*)>(&Stream::EndRead)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "EndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
    }
  };
  // Writing MetadataGetter for method: Stream::ReadAsync
  // Il2CppName: ReadAsync
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int>* (Stream::*)(::Array<uint8_t>*, int, int, System::Threading::CancellationToken)>(&Stream::ReadAsync)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "ReadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
    }
  };
  // Writing MetadataGetter for method: Stream::BeginEndReadAsync
  // Il2CppName: BeginEndReadAsync
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int>* (Stream::*)(::Array<uint8_t>*, int, int)>(&Stream::BeginEndReadAsync)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "BeginEndReadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: Stream::BeginWrite
  // Il2CppName: BeginWrite
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Stream::*)(::Array<uint8_t>*, int, int, System::AsyncCallback*, ::Il2CppObject*)>(&Stream::BeginWrite)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "BeginWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: Stream::BeginWriteInternal
  // Il2CppName: BeginWriteInternal
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Stream::*)(::Array<uint8_t>*, int, int, System::AsyncCallback*, ::Il2CppObject*, bool)>(&Stream::BeginWriteInternal)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "BeginWriteInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: Stream::RunReadWriteTaskWhenReady
  // Il2CppName: RunReadWriteTaskWhenReady
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Stream::*)(System::Threading::Tasks::Task*, System::IO::Stream::ReadWriteTask*)>(&Stream::RunReadWriteTaskWhenReady)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "RunReadWriteTaskWhenReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Threading::Tasks::Task*>(), ::il2cpp_utils::ExtractIndependentType<System::IO::Stream::ReadWriteTask*>()});
    }
  };
  // Writing MetadataGetter for method: Stream::RunReadWriteTask
  // Il2CppName: RunReadWriteTask
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Stream::*)(System::IO::Stream::ReadWriteTask*)>(&Stream::RunReadWriteTask)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "RunReadWriteTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IO::Stream::ReadWriteTask*>()});
    }
  };
  // Writing MetadataGetter for method: Stream::EndWrite
  // Il2CppName: EndWrite
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Stream::*)(System::IAsyncResult*)>(&Stream::EndWrite)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "EndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
    }
  };
  // Writing MetadataGetter for method: Stream::WriteAsync
  // Il2CppName: WriteAsync
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (Stream::*)(::Array<uint8_t>*, int, int)>(&Stream::WriteAsync)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: Stream::WriteAsync
  // Il2CppName: WriteAsync
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (Stream::*)(::Array<uint8_t>*, int, int, System::Threading::CancellationToken)>(&Stream::WriteAsync)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
    }
  };
  // Writing MetadataGetter for method: Stream::BeginEndWriteAsync
  // Il2CppName: BeginEndWriteAsync
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (Stream::*)(::Array<uint8_t>*, int, int)>(&Stream::BeginEndWriteAsync)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "BeginEndWriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: Stream::Seek
  // Il2CppName: Seek
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Stream::*)(int64_t, System::IO::SeekOrigin)>(&Stream::Seek)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<System::IO::SeekOrigin>()});
    }
  };
  // Writing MetadataGetter for method: Stream::SetLength
  // Il2CppName: SetLength
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Stream::*)(int64_t)>(&Stream::SetLength)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>()});
    }
  };
  // Writing MetadataGetter for method: Stream::Read
  // Il2CppName: Read
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Stream::*)(::Array<uint8_t>*&, int, int)>(&Stream::Read)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*&>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: Stream::ReadByte
  // Il2CppName: ReadByte
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Stream::*)()>(&Stream::ReadByte)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Stream::Write
  // Il2CppName: Write
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Stream::*)(::Array<uint8_t>*, int, int)>(&Stream::Write)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: Stream::WriteByte
  // Il2CppName: WriteByte
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Stream::*)(uint8_t)>(&Stream::WriteByte)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "WriteByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint8_t>()});
    }
  };
  // Writing MetadataGetter for method: Stream::BlockingBeginRead
  // Il2CppName: BlockingBeginRead
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Stream::*)(::Array<uint8_t>*, int, int, System::AsyncCallback*, ::Il2CppObject*)>(&Stream::BlockingBeginRead)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "BlockingBeginRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: Stream::BlockingEndRead
  // Il2CppName: BlockingEndRead
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IAsyncResult*)>(&Stream::BlockingEndRead)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "BlockingEndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
    }
  };
  // Writing MetadataGetter for method: Stream::BlockingBeginWrite
  // Il2CppName: BlockingBeginWrite
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Stream::*)(::Array<uint8_t>*, int, int, System::AsyncCallback*, ::Il2CppObject*)>(&Stream::BlockingBeginWrite)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "BlockingBeginWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: Stream::BlockingEndWrite
  // Il2CppName: BlockingEndWrite
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult*)>(&Stream::BlockingEndWrite)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), "BlockingEndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
    }
  };
  // Writing MetadataGetter for method: Stream::_cctor
  // Il2CppName: .cctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Stream::_cctor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Stream::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Stream::*)()>(&Stream::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Stream::*)()>(&Stream::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Stream*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Stream*, "System.IO", "Stream");
