// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.TextReader
#include "System/IO/TextReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
  // Forward declaring type: Decoder
  class Decoder;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.StreamReader
  // [ComVisibleAttribute] Offset: D7C8E4
  class StreamReader : public System::IO::TextReader {
    public:
    // Nested type: System::IO::StreamReader::NullStreamReader
    class NullStreamReader;
    // private System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x18
    System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Text.Encoding encoding
    // Size: 0x8
    // Offset: 0x20
    System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(System::Text::Encoding*) == 0x8);
    // private System.Text.Decoder decoder
    // Size: 0x8
    // Offset: 0x28
    System::Text::Decoder* decoder;
    // Field size check
    static_assert(sizeof(System::Text::Decoder*) == 0x8);
    // private System.Byte[] byteBuffer
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* byteBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Char[] charBuffer
    // Size: 0x8
    // Offset: 0x38
    ::Array<::Il2CppChar>* charBuffer;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // private System.Byte[] _preamble
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* preamble;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 charPos
    // Size: 0x4
    // Offset: 0x48
    int charPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 charLen
    // Size: 0x4
    // Offset: 0x4C
    int charLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 byteLen
    // Size: 0x4
    // Offset: 0x50
    int byteLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 bytePos
    // Size: 0x4
    // Offset: 0x54
    int bytePos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _maxCharsPerBuffer
    // Size: 0x4
    // Offset: 0x58
    int maxCharsPerBuffer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _detectEncoding
    // Size: 0x1
    // Offset: 0x5C
    bool detectEncoding;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _checkPreamble
    // Size: 0x1
    // Offset: 0x5D
    bool checkPreamble;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isBlocked
    // Size: 0x1
    // Offset: 0x5E
    bool isBlocked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _closable
    // Size: 0x1
    // Offset: 0x5F
    bool closable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Threading.Tasks.Task _asyncReadTask
    // Size: 0x8
    // Offset: 0x60
    System::Threading::Tasks::Task* asyncReadTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
    // Creating value type constructor for type: StreamReader
    StreamReader(System::IO::Stream* stream_ = {}, System::Text::Encoding* encoding_ = {}, System::Text::Decoder* decoder_ = {}, ::Array<uint8_t>* byteBuffer_ = {}, ::Array<::Il2CppChar>* charBuffer_ = {}, ::Array<uint8_t>* preamble_ = {}, int charPos_ = {}, int charLen_ = {}, int byteLen_ = {}, int bytePos_ = {}, int maxCharsPerBuffer_ = {}, bool detectEncoding_ = {}, bool checkPreamble_ = {}, bool isBlocked_ = {}, bool closable_ = {}, System::Threading::Tasks::Task* asyncReadTask_ = {}) noexcept : stream{stream_}, encoding{encoding_}, decoder{decoder_}, byteBuffer{byteBuffer_}, charBuffer{charBuffer_}, preamble{preamble_}, charPos{charPos_}, charLen{charLen_}, byteLen{byteLen_}, bytePos{bytePos_}, maxCharsPerBuffer{maxCharsPerBuffer_}, detectEncoding{detectEncoding_}, checkPreamble{checkPreamble_}, isBlocked{isBlocked_}, closable{closable_}, asyncReadTask{asyncReadTask_} {}
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static public readonly System.IO.StreamReader Null
    static System::IO::StreamReader* _get_Null();
    // Set static field: static public readonly System.IO.StreamReader Null
    static void _set_Null(System::IO::StreamReader* value);
    // static System.Int32 get_DefaultBufferSize()
    // Offset: 0x1959614
    static int get_DefaultBufferSize();
    // private System.Void CheckAsyncTaskInProgress()
    // Offset: 0x195961C
    void CheckAsyncTaskInProgress();
    // public System.Void .ctor(System.IO.Stream stream)
    // Offset: 0x1959730
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(System::IO::Stream* stream) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(stream)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Boolean detectEncodingFromByteOrderMarks)
    // Offset: 0x1959738
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(System::IO::Stream* stream, bool detectEncodingFromByteOrderMarks) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(stream, detectEncodingFromByteOrderMarks)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    // Offset: 0x194451C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(stream, encoding)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding, System.Boolean detectEncodingFromByteOrderMarks, System.Int32 bufferSize, System.Boolean leaveOpen)
    // Offset: 0x19597D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(stream, encoding, detectEncodingFromByteOrderMarks, bufferSize, leaveOpen)));
    }
    // public System.Void .ctor(System.String path)
    // Offset: 0x1949508
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(::Il2CppString* path) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(path)));
    }
    // public System.Void .ctor(System.String path, System.Boolean detectEncodingFromByteOrderMarks)
    // Offset: 0x1959AB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(::Il2CppString* path, bool detectEncodingFromByteOrderMarks) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(path, detectEncodingFromByteOrderMarks)));
    }
    // public System.Void .ctor(System.String path, System.Text.Encoding encoding)
    // Offset: 0x1959B58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(::Il2CppString* path, System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(path, encoding)));
    }
    // public System.Void .ctor(System.String path, System.Text.Encoding encoding, System.Boolean detectEncodingFromByteOrderMarks, System.Int32 bufferSize)
    // Offset: 0x1959B4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(::Il2CppString* path, System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int bufferSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(path, encoding, detectEncodingFromByteOrderMarks, bufferSize)));
    }
    // System.Void .ctor(System.String path, System.Text.Encoding encoding, System.Boolean detectEncodingFromByteOrderMarks, System.Int32 bufferSize, System.Boolean checkHost)
    // Offset: 0x1959BE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor(::Il2CppString* path, System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool checkHost) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>(path, encoding, detectEncodingFromByteOrderMarks, bufferSize, checkHost)));
    }
    // private System.Void Init(System.IO.Stream stream, System.Text.Encoding encoding, System.Boolean detectEncodingFromByteOrderMarks, System.Int32 bufferSize, System.Boolean leaveOpen)
    // Offset: 0x1959988
    void Init(System::IO::Stream* stream, System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen);
    // System.Void Init(System.IO.Stream stream)
    // Offset: 0x1959DE4
    void Init(System::IO::Stream* stream);
    // public System.Text.Encoding get_CurrentEncoding()
    // Offset: 0x1959EC8
    System::Text::Encoding* get_CurrentEncoding();
    // public System.IO.Stream get_BaseStream()
    // Offset: 0x1959ED0
    System::IO::Stream* get_BaseStream();
    // System.Boolean get_LeaveOpen()
    // Offset: 0x1959EB8
    bool get_LeaveOpen();
    // public System.Boolean get_EndOfStream()
    // Offset: 0x194A050
    bool get_EndOfStream();
    // System.Boolean DataAvailable()
    // Offset: 0x1959ED8
    bool DataAvailable();
    // private System.Void CompressBuffer(System.Int32 n)
    // Offset: 0x195A4B0
    void CompressBuffer(int n);
    // private System.Void DetectEncoding()
    // Offset: 0x195A4F8
    void DetectEncoding();
    // private System.Boolean IsPreamble()
    // Offset: 0x195A7CC
    bool IsPreamble();
    // System.Int32 ReadBuffer()
    // Offset: 0x195A8E4
    int ReadBuffer();
    // private System.Int32 ReadBuffer(System.Char[] userBuffer, System.Int32 userOffset, System.Int32 desiredChars, out System.Boolean readToUserBuffer)
    // Offset: 0x195A1BC
    int ReadBuffer(::Array<::Il2CppChar>* userBuffer, int userOffset, int desiredChars, bool& readToUserBuffer);
    // System.Void .ctor()
    // Offset: 0x19596C8
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamReader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamReader*, creationType>()));
    }
    // public override System.Void Close()
    // Offset: 0x1959DF4
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1959E04
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Int32 Peek()
    // Offset: 0x1944660
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Peek()
    int Peek();
    // public override System.Int32 Read()
    // Offset: 0x1959EE8
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Read()
    int Read();
    // public override System.Int32 Read(in System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1959F80
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Read(in System.Char[] buffer, System.Int32 index, System.Int32 count)
    int Read(::Array<::Il2CppChar>*& buffer, int index, int count);
    // public override System.String ReadToEnd()
    // Offset: 0x195A3D4
    // Implemented from: System.IO.TextReader
    // Base method: System.String TextReader::ReadToEnd()
    ::Il2CppString* ReadToEnd();
    // public override System.String ReadLine()
    // Offset: 0x195AA54
    // Implemented from: System.IO.TextReader
    // Base method: System.String TextReader::ReadLine()
    ::Il2CppString* ReadLine();
    // static private System.Void .cctor()
    // Offset: 0x195AC7C
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::.cctor()
    static void _cctor();
  }; // System.IO.StreamReader
  #pragma pack(pop)
  static check_size<sizeof(StreamReader), 96 + sizeof(System::Threading::Tasks::Task*)> __System_IO_StreamReaderSizeCheck;
  static_assert(sizeof(StreamReader) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::StreamReader*, "System.IO", "StreamReader");
// Writing MetadataGetter for method: System::IO::StreamReader::get_DefaultBufferSize
// Il2CppName: get_DefaultBufferSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::IO::StreamReader::get_DefaultBufferSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "get_DefaultBufferSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::CheckAsyncTaskInProgress
// Il2CppName: CheckAsyncTaskInProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamReader::*)()>(&System::IO::StreamReader::CheckAsyncTaskInProgress)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "CheckAsyncTaskInProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamReader::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamReader::*)(System::IO::Stream*, System::Text::Encoding*, bool, int, bool)>(&System::IO::StreamReader::Init)> {
  const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    static auto* detectEncodingFromByteOrderMarks = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* leaveOpen = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, encoding, detectEncodingFromByteOrderMarks, bufferSize, leaveOpen});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamReader::*)(System::IO::Stream*)>(&System::IO::StreamReader::Init)> {
  const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::get_CurrentEncoding
// Il2CppName: get_CurrentEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding* (System::IO::StreamReader::*)()>(&System::IO::StreamReader::get_CurrentEncoding)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "get_CurrentEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::get_BaseStream
// Il2CppName: get_BaseStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream* (System::IO::StreamReader::*)()>(&System::IO::StreamReader::get_BaseStream)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "get_BaseStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::get_LeaveOpen
// Il2CppName: get_LeaveOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::StreamReader::*)()>(&System::IO::StreamReader::get_LeaveOpen)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "get_LeaveOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::get_EndOfStream
// Il2CppName: get_EndOfStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::StreamReader::*)()>(&System::IO::StreamReader::get_EndOfStream)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "get_EndOfStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::DataAvailable
// Il2CppName: DataAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::StreamReader::*)()>(&System::IO::StreamReader::DataAvailable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "DataAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::CompressBuffer
// Il2CppName: CompressBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamReader::*)(int)>(&System::IO::StreamReader::CompressBuffer)> {
  const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "CompressBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::DetectEncoding
// Il2CppName: DetectEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamReader::*)()>(&System::IO::StreamReader::DetectEncoding)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "DetectEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::IsPreamble
// Il2CppName: IsPreamble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::StreamReader::*)()>(&System::IO::StreamReader::IsPreamble)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "IsPreamble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::ReadBuffer
// Il2CppName: ReadBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::StreamReader::*)()>(&System::IO::StreamReader::ReadBuffer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "ReadBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::ReadBuffer
// Il2CppName: ReadBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::StreamReader::*)(::Array<::Il2CppChar>*, int, int, bool&)>(&System::IO::StreamReader::ReadBuffer)> {
  const MethodInfo* get() {
    static auto* userBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* userOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* desiredChars = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* readToUserBuffer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "ReadBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userBuffer, userOffset, desiredChars, readToUserBuffer});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamReader::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamReader::*)()>(&System::IO::StreamReader::Close)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamReader::*)(bool)>(&System::IO::StreamReader::Dispose)> {
  const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::Peek
// Il2CppName: Peek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::StreamReader::*)()>(&System::IO::StreamReader::Peek)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "Peek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::StreamReader::*)()>(&System::IO::StreamReader::Read)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::StreamReader::*)(::Array<::Il2CppChar>*&, int, int)>(&System::IO::StreamReader::Read)> {
  const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->this_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::ReadToEnd
// Il2CppName: ReadToEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::StreamReader::*)()>(&System::IO::StreamReader::ReadToEnd)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "ReadToEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::ReadLine
// Il2CppName: ReadLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::StreamReader::*)()>(&System::IO::StreamReader::ReadLine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), "ReadLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamReader::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::StreamReader::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamReader*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
