// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
  // Forward declaring type: UnicodeEncoding
  class UnicodeEncoding;
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.StringWriter
  // [ComVisibleAttribute] Offset: D7C920
  class StringWriter : public System::IO::TextWriter {
    public:
    // private System.Text.StringBuilder _sb
    // Size: 0x8
    // Offset: 0x28
    System::Text::StringBuilder* sb;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.Boolean _isOpen
    // Size: 0x1
    // Offset: 0x30
    bool isOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: StringWriter
    StringWriter(System::Text::StringBuilder* sb_ = {}, bool isOpen_ = {}) noexcept : sb{sb_}, isOpen{isOpen_} {}
    // Get static field: static private System.Text.UnicodeEncoding m_encoding
    static System::Text::UnicodeEncoding* _get_m_encoding();
    // Set static field: static private System.Text.UnicodeEncoding m_encoding
    static void _set_m_encoding(System::Text::UnicodeEncoding* value);
    // public System.Void .ctor(System.Text.StringBuilder sb)
    // Offset: 0x1817EE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringWriter* New_ctor(System::Text::StringBuilder* sb) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StringWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringWriter*, creationType>(sb)));
    }
    // public System.Void .ctor(System.Text.StringBuilder sb, System.IFormatProvider formatProvider)
    // Offset: 0x1817D8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringWriter* New_ctor(System::Text::StringBuilder* sb, System::IFormatProvider* formatProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StringWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringWriter*, creationType>(sb, formatProvider)));
    }
    // public System.Void .ctor()
    // Offset: 0x1817CFC
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StringWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringWriter*, creationType>()));
    }
    // public System.Void .ctor(System.IFormatProvider formatProvider)
    // Offset: 0x1817E74
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.ctor(System.IFormatProvider formatProvider)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringWriter* New_ctor(System::IFormatProvider* formatProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StringWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringWriter*, creationType>(formatProvider)));
    }
    // public override System.Void Close()
    // Offset: 0x1818000
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1818010
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Text.Encoding get_Encoding()
    // Offset: 0x181801C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Text.Encoding TextWriter::get_Encoding()
    System::Text::Encoding* get_Encoding();
    // public override System.Void Write(System.Char value)
    // Offset: 0x18180BC
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char value)
    void Write(::Il2CppChar value);
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x181816C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void Write(System.String value)
    // Offset: 0x181832C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String value)
    void Write(::Il2CppString* value);
    // public override System.String ToString()
    // Offset: 0x1818364
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.IO.StringWriter
  #pragma pack(pop)
  static check_size<sizeof(StringWriter), 48 + sizeof(bool)> __System_IO_StringWriterSizeCheck;
  static_assert(sizeof(StringWriter) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::StringWriter*, "System.IO", "StringWriter");
// Writing MetadataGetter for method: System::IO::StringWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StringWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StringWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StringWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StringWriter::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StringWriter::*)()>(&System::IO::StringWriter::Close)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StringWriter::*)(bool)>(&System::IO::StringWriter::Dispose)> {
  const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding* (System::IO::StringWriter::*)()>(&System::IO::StringWriter::get_Encoding)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StringWriter::*)(::Il2CppChar)>(&System::IO::StringWriter::Write)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StringWriter::*)(::Array<::Il2CppChar>*, int, int)>(&System::IO::StringWriter::Write)> {
  const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StringWriter::*)(::Il2CppString*)>(&System::IO::StringWriter::Write)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::StringWriter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::StringWriter::*)()>(&System::IO::StringWriter::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringWriter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
