// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.TextReader
#include "System/IO/TextReader.hpp"
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
  // Autogenerated type: System.IO.StreamReader
  class StreamReader : public System::IO::TextReader {
    public:
    // Nested type: System::IO::StreamReader::NullStreamReader
    class NullStreamReader;
    // Get static field: static public readonly System.IO.StreamReader Null
    static System::IO::StreamReader* _get_Null();
    // Set static field: static public readonly System.IO.StreamReader Null
    static void _set_Null(System::IO::StreamReader* value);
    // private System.IO.Stream stream
    // Offset: 0x18
    System::IO::Stream* stream;
    // private System.Text.Encoding encoding
    // Offset: 0x20
    System::Text::Encoding* encoding;
    // private System.Text.Decoder decoder
    // Offset: 0x28
    System::Text::Decoder* decoder;
    // private System.Byte[] byteBuffer
    // Offset: 0x30
    ::Array<uint8_t>* byteBuffer;
    // private System.Char[] charBuffer
    // Offset: 0x38
    ::Array<::Il2CppChar>* charBuffer;
    // private System.Byte[] _preamble
    // Offset: 0x40
    ::Array<uint8_t>* preamble;
    // private System.Int32 charPos
    // Offset: 0x48
    int charPos;
    // private System.Int32 charLen
    // Offset: 0x4C
    int charLen;
    // private System.Int32 byteLen
    // Offset: 0x50
    int byteLen;
    // private System.Int32 bytePos
    // Offset: 0x54
    int bytePos;
    // private System.Int32 _maxCharsPerBuffer
    // Offset: 0x58
    int maxCharsPerBuffer;
    // private System.Boolean _detectEncoding
    // Offset: 0x5C
    bool detectEncoding;
    // private System.Boolean _checkPreamble
    // Offset: 0x5D
    bool checkPreamble;
    // private System.Boolean _isBlocked
    // Offset: 0x5E
    bool isBlocked;
    // private System.Boolean _closable
    // Offset: 0x5F
    bool closable;
    // private System.Threading.Tasks.Task _asyncReadTask
    // Offset: 0x60
    System::Threading::Tasks::Task* asyncReadTask;
    // static System.Int32 get_DefaultBufferSize()
    // Offset: 0xFF3728
    static int get_DefaultBufferSize();
    // private System.Void CheckAsyncTaskInProgress()
    // Offset: 0xFF3730
    void CheckAsyncTaskInProgress();
    // public System.Void .ctor(System.IO.Stream stream)
    // Offset: 0xFF3848
    static StreamReader* New_ctor(System::IO::Stream* stream);
    // public System.Void .ctor(System.IO.Stream stream, System.Boolean detectEncodingFromByteOrderMarks)
    // Offset: 0xFF3850
    static StreamReader* New_ctor(System::IO::Stream* stream, bool detectEncodingFromByteOrderMarks);
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    // Offset: 0xFF3AA0
    static StreamReader* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding);
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding, System.Boolean detectEncodingFromByteOrderMarks, System.Int32 bufferSize, System.Boolean leaveOpen)
    // Offset: 0xFF38E8
    static StreamReader* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen);
    // public System.Void .ctor(System.String path)
    // Offset: 0xFF3CA8
    static StreamReader* New_ctor(::Il2CppString* path);
    // public System.Void .ctor(System.String path, System.Boolean detectEncodingFromByteOrderMarks)
    // Offset: 0xFF3CB0
    static StreamReader* New_ctor(::Il2CppString* path, bool detectEncodingFromByteOrderMarks);
    // public System.Void .ctor(System.String path, System.Text.Encoding encoding)
    // Offset: 0xFF3D54
    static StreamReader* New_ctor(::Il2CppString* path, System::Text::Encoding* encoding);
    // public System.Void .ctor(System.String path, System.Text.Encoding encoding, System.Boolean detectEncodingFromByteOrderMarks, System.Int32 bufferSize)
    // Offset: 0xFF3D48
    static StreamReader* New_ctor(::Il2CppString* path, System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int bufferSize);
    // System.Void .ctor(System.String path, System.Text.Encoding encoding, System.Boolean detectEncodingFromByteOrderMarks, System.Int32 bufferSize, System.Boolean checkHost)
    // Offset: 0xFF3DDC
    static StreamReader* New_ctor(::Il2CppString* path, System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool checkHost);
    // private System.Void Init(System.IO.Stream stream, System.Text.Encoding encoding, System.Boolean detectEncodingFromByteOrderMarks, System.Int32 bufferSize, System.Boolean leaveOpen)
    // Offset: 0xFF3B28
    void Init(System::IO::Stream* stream, System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int bufferSize, bool leaveOpen);
    // System.Void Init(System.IO.Stream stream)
    // Offset: 0xFF4008
    void Init(System::IO::Stream* stream);
    // System.Boolean get_LeaveOpen()
    // Offset: 0xFF413C
    bool get_LeaveOpen();
    // public System.Boolean get_EndOfStream()
    // Offset: 0xFF4150
    bool get_EndOfStream();
    // System.Boolean DataAvailable()
    // Offset: 0xFF42C0
    bool DataAvailable();
    // private System.Void CompressBuffer(System.Int32 n)
    // Offset: 0xFF4888
    void CompressBuffer(int n);
    // private System.Void DetectEncoding()
    // Offset: 0xFF48D0
    void DetectEncoding();
    // private System.Boolean IsPreamble()
    // Offset: 0xFF4C00
    bool IsPreamble();
    // System.Int32 ReadBuffer()
    // Offset: 0xFF4D18
    int ReadBuffer();
    // private System.Int32 ReadBuffer(System.Char[] userBuffer, System.Int32 userOffset, System.Int32 desiredChars, System.Boolean readToUserBuffer)
    // Offset: 0xFF4598
    int ReadBuffer(::Array<::Il2CppChar>* userBuffer, int userOffset, int desiredChars, bool& readToUserBuffer);
    // System.Void .ctor()
    // Offset: 0xFF37D8
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static StreamReader* New_ctor();
    // public override System.Void Close()
    // Offset: 0xFF4038
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0xFF4048
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Int32 Peek()
    // Offset: 0xFF4230
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Peek()
    int Peek();
    // public override System.Int32 Read()
    // Offset: 0xFF42D0
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Read()
    int Read();
    // public override System.Int32 Read(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0xFF4360
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Read(System.Char[] buffer, System.Int32 index, System.Int32 count)
    int Read(::Array<::Il2CppChar>*& buffer, int index, int count);
    // public override System.String ReadToEnd()
    // Offset: 0xFF47B0
    // Implemented from: System.IO.TextReader
    // Base method: System.String TextReader::ReadToEnd()
    ::Il2CppString* ReadToEnd();
    // public override System.String ReadLine()
    // Offset: 0xFF4E88
    // Implemented from: System.IO.TextReader
    // Base method: System.String TextReader::ReadLine()
    ::Il2CppString* ReadLine();
    // static private System.Void .cctor()
    // Offset: 0xFF50AC
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::.cctor()
    static void _cctor();
  }; // System.IO.StreamReader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::StreamReader*, "System.IO", "StreamReader");
#pragma pack(pop)