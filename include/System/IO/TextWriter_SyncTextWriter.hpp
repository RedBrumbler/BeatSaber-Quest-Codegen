// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::TextWriter::SyncTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::TextWriter::SyncTextWriter*, "System.IO", "TextWriter/SyncTextWriter");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.TextWriter/System.IO.SyncTextWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class TextWriter::SyncTextWriter : public ::System::IO::TextWriter {
    public:
    public:
    // private System.IO.TextWriter _out
    // Size: 0x8
    // Offset: 0x28
    ::System::IO::TextWriter* out;
    // Field size check
    static_assert(sizeof(::System::IO::TextWriter*) == 0x8);
    public:
    // Get instance field reference: private System.IO.TextWriter _out
    [[deprecated("Use field access instead!")]] ::System::IO::TextWriter*& dyn__out();
    // System.Void .ctor(System.IO.TextWriter t)
    // Offset: 0x1C43728
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextWriter::SyncTextWriter* New_ctor(::System::IO::TextWriter* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::TextWriter::SyncTextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextWriter::SyncTextWriter*, creationType>(t)));
    }
    // public override System.Text.Encoding get_Encoding()
    // Offset: 0x1C446A0
    // Implemented from: System.IO.TextWriter
    // Base method: System.Text.Encoding TextWriter::get_Encoding()
    ::System::Text::Encoding* get_Encoding();
    // public override System.IFormatProvider get_FormatProvider()
    // Offset: 0x1C446C0
    // Implemented from: System.IO.TextWriter
    // Base method: System.IFormatProvider TextWriter::get_FormatProvider()
    ::System::IFormatProvider* get_FormatProvider();
    // public override System.Void Close()
    // Offset: 0x1C446E0
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1C44700
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Void Flush()
    // Offset: 0x1C447D0
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Flush()
    void Flush();
    // public override System.Void Write(System.Char value)
    // Offset: 0x1C447F0
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char value)
    void Write(::Il2CppChar value);
    // public override System.Void Write(System.Char[] buffer)
    // Offset: 0x1C44810
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer)
    void Write(::ArrayW<::Il2CppChar> buffer);
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1C44834
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Void Write(System.String value)
    // Offset: 0x1C44858
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String value)
    void Write(::StringW value);
    // public override System.Void Write(System.String format, System.Object arg0)
    // Offset: 0x1C4487C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String format, System.Object arg0)
    void Write(::StringW format, ::Il2CppObject* arg0);
    // public override System.Void Write(System.String format, System.Object arg0, System.Object arg1, System.Object arg2)
    // Offset: 0x1C448A0
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String format, System.Object arg0, System.Object arg1, System.Object arg2)
    void Write(::StringW format, ::Il2CppObject* arg0, ::Il2CppObject* arg1, ::Il2CppObject* arg2);
    // public override System.Void WriteLine()
    // Offset: 0x1C448C4
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::WriteLine()
    void WriteLine();
    // public override System.Void WriteLine(System.Char value)
    // Offset: 0x1C448E8
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::WriteLine(System.Char value)
    void WriteLine(::Il2CppChar value);
    // public override System.Void WriteLine(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1C4490C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::WriteLine(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteLine(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Void WriteLine(System.String value)
    // Offset: 0x1C44930
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::WriteLine(System.String value)
    void WriteLine(::StringW value);
    // public override System.Void WriteLine(System.String format, System.Object arg0)
    // Offset: 0x1C44954
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::WriteLine(System.String format, System.Object arg0)
    void WriteLine(::StringW format, ::Il2CppObject* arg0);
    // public override System.Void WriteLine(System.String format, System.Object arg0, System.Object arg1)
    // Offset: 0x1C44978
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::WriteLine(System.String format, System.Object arg0, System.Object arg1)
    void WriteLine(::StringW format, ::Il2CppObject* arg0, ::Il2CppObject* arg1);
    // public override System.Void WriteLine(System.String format, System.Object arg0, System.Object arg1, System.Object arg2)
    // Offset: 0x1C4499C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::WriteLine(System.String format, System.Object arg0, System.Object arg1, System.Object arg2)
    void WriteLine(::StringW format, ::Il2CppObject* arg0, ::Il2CppObject* arg1, ::Il2CppObject* arg2);
    // public override System.Void WriteLine(System.String format, params System.Object[] arg)
    // Offset: 0x1C449C0
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::WriteLine(System.String format, params System.Object[] arg)
    void WriteLine(::StringW format, ::ArrayW<::Il2CppObject*> arg);
  }; // System.IO.TextWriter/System.IO.SyncTextWriter
  #pragma pack(pop)
  static check_size<sizeof(TextWriter::SyncTextWriter), 40 + sizeof(::System::IO::TextWriter*)> __System_IO_TextWriter_SyncTextWriterSizeCheck;
  static_assert(sizeof(TextWriter::SyncTextWriter) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (System::IO::TextWriter::SyncTextWriter::*)()>(&System::IO::TextWriter::SyncTextWriter::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::get_FormatProvider
// Il2CppName: get_FormatProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IFormatProvider* (System::IO::TextWriter::SyncTextWriter::*)()>(&System::IO::TextWriter::SyncTextWriter::get_FormatProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "get_FormatProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)()>(&System::IO::TextWriter::SyncTextWriter::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)(bool)>(&System::IO::TextWriter::SyncTextWriter::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)()>(&System::IO::TextWriter::SyncTextWriter::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)(::Il2CppChar)>(&System::IO::TextWriter::SyncTextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)(::ArrayW<::Il2CppChar>)>(&System::IO::TextWriter::SyncTextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::IO::TextWriter::SyncTextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)(::StringW)>(&System::IO::TextWriter::SyncTextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)(::StringW, ::Il2CppObject*)>(&System::IO::TextWriter::SyncTextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg0});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)(::StringW, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*)>(&System::IO::TextWriter::SyncTextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg0, arg1, arg2});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)()>(&System::IO::TextWriter::SyncTextWriter::WriteLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)(::Il2CppChar)>(&System::IO::TextWriter::SyncTextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::IO::TextWriter::SyncTextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)(::StringW)>(&System::IO::TextWriter::SyncTextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)(::StringW, ::Il2CppObject*)>(&System::IO::TextWriter::SyncTextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg0});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)(::StringW, ::Il2CppObject*, ::Il2CppObject*)>(&System::IO::TextWriter::SyncTextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg0, arg1});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)(::StringW, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*)>(&System::IO::TextWriter::SyncTextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg0, arg1, arg2});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::SyncTextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::SyncTextWriter::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&System::IO::TextWriter::SyncTextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::SyncTextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg});
  }
};
