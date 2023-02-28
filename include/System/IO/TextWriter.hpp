// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::TextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::TextWriter*, "System.IO", "TextWriter");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.TextWriter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 107C638
  class TextWriter : public ::System::MarshalByRefObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::System::IO::TextWriter::NullTextWriter
    class NullTextWriter;
    // Nested type: ::System::IO::TextWriter::SyncTextWriter
    class SyncTextWriter;
    // Nested type: ::System::IO::TextWriter::$$c
    class $$c;
    public:
    // protected System.Char[] CoreNewLine
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppChar> CoreNewLine;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private System.IFormatProvider InternalFormatProvider
    // Size: 0x8
    // Offset: 0x20
    ::System::IFormatProvider* InternalFormatProvider;
    // Field size check
    static_assert(sizeof(::System::IFormatProvider*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static public readonly System.IO.TextWriter Null
    static ::System::IO::TextWriter* _get_Null();
    // Set static field: static public readonly System.IO.TextWriter Null
    static void _set_Null(::System::IO::TextWriter* value);
    // Get static field: static private System.Action`1<System.Object> _WriteCharDelegate
    static ::System::Action_1<::Il2CppObject*>* _get__WriteCharDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteCharDelegate
    static void _set__WriteCharDelegate(::System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _WriteStringDelegate
    static ::System::Action_1<::Il2CppObject*>* _get__WriteStringDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteStringDelegate
    static void _set__WriteStringDelegate(::System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _WriteCharArrayRangeDelegate
    static ::System::Action_1<::Il2CppObject*>* _get__WriteCharArrayRangeDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteCharArrayRangeDelegate
    static void _set__WriteCharArrayRangeDelegate(::System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _WriteLineCharDelegate
    static ::System::Action_1<::Il2CppObject*>* _get__WriteLineCharDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteLineCharDelegate
    static void _set__WriteLineCharDelegate(::System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _WriteLineStringDelegate
    static ::System::Action_1<::Il2CppObject*>* _get__WriteLineStringDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteLineStringDelegate
    static void _set__WriteLineStringDelegate(::System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _WriteLineCharArrayRangeDelegate
    static ::System::Action_1<::Il2CppObject*>* _get__WriteLineCharArrayRangeDelegate();
    // Set static field: static private System.Action`1<System.Object> _WriteLineCharArrayRangeDelegate
    static void _set__WriteLineCharArrayRangeDelegate(::System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private System.Action`1<System.Object> _FlushDelegate
    static ::System::Action_1<::Il2CppObject*>* _get__FlushDelegate();
    // Set static field: static private System.Action`1<System.Object> _FlushDelegate
    static void _set__FlushDelegate(::System::Action_1<::Il2CppObject*>* value);
    // Get instance field reference: protected System.Char[] CoreNewLine
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn_CoreNewLine();
    // Get instance field reference: private System.IFormatProvider InternalFormatProvider
    [[deprecated("Use field access instead!")]] ::System::IFormatProvider*& dyn_InternalFormatProvider();
    // static private System.String get_InitialNewLine()
    // Offset: 0x1C52C88
    static ::StringW get_InitialNewLine();
    // public System.IFormatProvider get_FormatProvider()
    // Offset: 0x1C52D1C
    ::System::IFormatProvider* get_FormatProvider();
    // public System.Text.Encoding get_Encoding()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Text::Encoding* get_Encoding();
    // protected System.Void .ctor(System.IFormatProvider formatProvider)
    // Offset: 0x1C5052C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextWriter* New_ctor(::System::IFormatProvider* formatProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::TextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextWriter*, creationType>(formatProvider)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1C536A4
    static void _cctor();
    // public System.Void Close()
    // Offset: 0x1C52D48
    void Close();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1C50FF8
    void Dispose(bool disposing);
    // public System.Void Dispose()
    // Offset: 0x1C52DC4
    void Dispose();
    // public System.Void Flush()
    // Offset: 0x1C52E40
    void Flush();
    // static public System.IO.TextWriter Synchronized(System.IO.TextWriter writer)
    // Offset: 0x1C52E44
    static ::System::IO::TextWriter* Synchronized(::System::IO::TextWriter* writer);
    // public System.Void Write(System.Char value)
    // Offset: 0x1C52F88
    void Write(::Il2CppChar value);
    // public System.Void Write(System.Char[] buffer)
    // Offset: 0x1C52F8C
    void Write(::ArrayW<::Il2CppChar> buffer);
    // public System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1C52FAC
    void Write(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public System.Void Write(System.String value)
    // Offset: 0x1C531B8
    void Write(::StringW value);
    // public System.Void Write(System.String format, System.Object arg0)
    // Offset: 0x1C531FC
    void Write(::StringW format, ::Il2CppObject* arg0);
    // public System.Void Write(System.String format, System.Object arg0, System.Object arg1, System.Object arg2)
    // Offset: 0x1C5325C
    void Write(::StringW format, ::Il2CppObject* arg0, ::Il2CppObject* arg1, ::Il2CppObject* arg2);
    // public System.Void WriteLine()
    // Offset: 0x1C532D4
    void WriteLine();
    // public System.Void WriteLine(System.Char value)
    // Offset: 0x1C532E8
    void WriteLine(::Il2CppChar value);
    // public System.Void WriteLine(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1C53320
    void WriteLine(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public System.Void WriteLine(System.String value)
    // Offset: 0x1C5335C
    void WriteLine(::StringW value);
    // public System.Void WriteLine(System.String format, System.Object arg0)
    // Offset: 0x1C53504
    void WriteLine(::StringW format, ::Il2CppObject* arg0);
    // public System.Void WriteLine(System.String format, System.Object arg0, System.Object arg1)
    // Offset: 0x1C53564
    void WriteLine(::StringW format, ::Il2CppObject* arg0, ::Il2CppObject* arg1);
    // public System.Void WriteLine(System.String format, System.Object arg0, System.Object arg1, System.Object arg2)
    // Offset: 0x1C535CC
    void WriteLine(::StringW format, ::Il2CppObject* arg0, ::Il2CppObject* arg1, ::Il2CppObject* arg2);
    // public System.Void WriteLine(System.String format, params System.Object[] arg)
    // Offset: 0x1C53644
    void WriteLine(::StringW format, ::ArrayW<::Il2CppObject*> arg);
    // protected System.Void .ctor()
    // Offset: 0x1C52C90
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::TextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextWriter*, creationType>()));
    }
  }; // System.IO.TextWriter
  #pragma pack(pop)
  static check_size<sizeof(TextWriter), 32 + sizeof(::System::IFormatProvider*)> __System_IO_TextWriterSizeCheck;
  static_assert(sizeof(TextWriter) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::TextWriter::get_InitialNewLine
// Il2CppName: get_InitialNewLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::IO::TextWriter::get_InitialNewLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "get_InitialNewLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::get_FormatProvider
// Il2CppName: get_FormatProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IFormatProvider* (System::IO::TextWriter::*)()>(&System::IO::TextWriter::get_FormatProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "get_FormatProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (System::IO::TextWriter::*)()>(&System::IO::TextWriter::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::TextWriter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::TextWriter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)()>(&System::IO::TextWriter::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(bool)>(&System::IO::TextWriter::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)()>(&System::IO::TextWriter::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)()>(&System::IO::TextWriter::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Synchronized
// Il2CppName: Synchronized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::TextWriter* (*)(::System::IO::TextWriter*)>(&System::IO::TextWriter::Synchronized)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.IO", "TextWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Synchronized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::Il2CppChar)>(&System::IO::TextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::ArrayW<::Il2CppChar>)>(&System::IO::TextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::IO::TextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::StringW)>(&System::IO::TextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::StringW, ::Il2CppObject*)>(&System::IO::TextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg0});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::StringW, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*)>(&System::IO::TextWriter::Write)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg0, arg1, arg2});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)()>(&System::IO::TextWriter::WriteLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::Il2CppChar)>(&System::IO::TextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::IO::TextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::StringW)>(&System::IO::TextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::StringW, ::Il2CppObject*)>(&System::IO::TextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg0});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::StringW, ::Il2CppObject*, ::Il2CppObject*)>(&System::IO::TextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg0, arg1});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::StringW, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*)>(&System::IO::TextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg0, arg1, arg2});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&System::IO::TextWriter::WriteLine)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
