// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.StreamWriter
#include "System/IO/StreamWriter.hpp"
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
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.UnexceptionalStreamWriter
  class UnexceptionalStreamWriter : public System::IO::StreamWriter {
    public:
    // Creating value type constructor for type: UnexceptionalStreamWriter
    UnexceptionalStreamWriter() noexcept {}
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    // Offset: 0x181ABD0
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::.ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnexceptionalStreamWriter* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::UnexceptionalStreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnexceptionalStreamWriter*, creationType>(stream, encoding)));
    }
    // public override System.Void Flush()
    // Offset: 0x181AC58
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Flush()
    void Flush();
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x181AD18
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void Write(System.Char value)
    // Offset: 0x181AE08
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.Char value)
    void Write(::Il2CppChar value);
    // public override System.Void Write(System.Char[] value)
    // Offset: 0x181AEDC
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.Char[] value)
    void Write(::Array<::Il2CppChar>* value);
    // public override System.Void Write(System.String value)
    // Offset: 0x181AFB0
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.String value)
    void Write(::Il2CppString* value);
  }; // System.IO.UnexceptionalStreamWriter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::UnexceptionalStreamWriter*, "System.IO", "UnexceptionalStreamWriter");
// Writing MetadataGetter for method: System::IO::UnexceptionalStreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::UnexceptionalStreamWriter::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::UnexceptionalStreamWriter::*)()>(&System::IO::UnexceptionalStreamWriter::Flush)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnexceptionalStreamWriter*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::UnexceptionalStreamWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::UnexceptionalStreamWriter::*)(::Array<::Il2CppChar>*, int, int)>(&System::IO::UnexceptionalStreamWriter::Write)> {
  const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnexceptionalStreamWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::UnexceptionalStreamWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::UnexceptionalStreamWriter::*)(::Il2CppChar)>(&System::IO::UnexceptionalStreamWriter::Write)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnexceptionalStreamWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::UnexceptionalStreamWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::UnexceptionalStreamWriter::*)(::Array<::Il2CppChar>*)>(&System::IO::UnexceptionalStreamWriter::Write)> {
  const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnexceptionalStreamWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::UnexceptionalStreamWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::UnexceptionalStreamWriter::*)(::Il2CppString*)>(&System::IO::UnexceptionalStreamWriter::Write)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::UnexceptionalStreamWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
