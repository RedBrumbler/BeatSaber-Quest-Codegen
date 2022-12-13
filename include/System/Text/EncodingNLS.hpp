// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
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
  // Forward declaring type: Decoder
  class Decoder;
  // Forward declaring type: Encoder
  class Encoder;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: EncodingNLS
  class EncodingNLS;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::EncodingNLS);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncodingNLS*, "System.Text", "EncodingNLS");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.EncodingNLS
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1074600
  class EncodingNLS : public ::System::Text::Encoding {
    public:
    // protected System.Void .ctor(System.Int32 codePage)
    // Offset: 0x1F67B44
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::.ctor(System.Int32 codePage)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncodingNLS* New_ctor(int codePage) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::EncodingNLS::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncodingNLS*, creationType>(codePage)));
    }
    // public override System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0x1F67B48
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    int GetByteCount(::ArrayW<::Il2CppChar> chars, int index, int count);
    // public override System.Int32 GetByteCount(System.String s)
    // Offset: 0x1F67D1C
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.String s)
    int GetByteCount(::StringW s);
    // public override System.Int32 GetByteCount(System.Char* chars, System.Int32 count)
    // Offset: 0x1F67DCC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 count)
    int GetByteCount(::Il2CppChar* chars, int count);
    // public override System.Int32 GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x1F67EE8
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::StringW s, int charIndex, int charCount, ::ArrayW<uint8_t> bytes, int byteIndex);
    // public override System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x1F68158
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::ArrayW<::Il2CppChar> chars, int charIndex, int charCount, ::ArrayW<uint8_t> bytes, int byteIndex);
    // public override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    // Offset: 0x1F683F8
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount);
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x1F6855C
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    int GetCharCount(::ArrayW<uint8_t> bytes, int index, int count);
    // public override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count)
    // Offset: 0x1F68730
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count)
    int GetCharCount(uint8_t* bytes, int count);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0x1F6884C
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    int GetChars(::ArrayW<uint8_t> bytes, int byteIndex, int byteCount, ::ArrayW<::Il2CppChar> chars, int charIndex);
    // public override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    // Offset: 0x1F68AEC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount);
    // public override System.String GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x1F68C50
    // Implemented from: System.Text.Encoding
    // Base method: System.String Encoding::GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    ::StringW GetString(::ArrayW<uint8_t> bytes, int index, int count);
    // public override System.Text.Decoder GetDecoder()
    // Offset: 0x1F68E28
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Decoder Encoding::GetDecoder()
    ::System::Text::Decoder* GetDecoder();
    // public override System.Text.Encoder GetEncoder()
    // Offset: 0x1F68E88
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Encoder Encoding::GetEncoder()
    ::System::Text::Encoder* GetEncoder();
  }; // System.Text.EncodingNLS
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::EncodingNLS::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::EncodingNLS::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncodingNLS::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Text::EncodingNLS::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingNLS*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingNLS::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncodingNLS::*)(::StringW)>(&System::Text::EncodingNLS::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingNLS*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingNLS::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncodingNLS::*)(::Il2CppChar*, int)>(&System::Text::EncodingNLS::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingNLS*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, count});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingNLS::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncodingNLS::*)(::StringW, int, int, ::ArrayW<uint8_t>, int)>(&System::Text::EncodingNLS::GetBytes)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingNLS*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, charIndex, charCount, bytes, byteIndex});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingNLS::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncodingNLS::*)(::ArrayW<::Il2CppChar>, int, int, ::ArrayW<uint8_t>, int)>(&System::Text::EncodingNLS::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingNLS*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charIndex, charCount, bytes, byteIndex});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingNLS::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncodingNLS::*)(::Il2CppChar*, int, uint8_t*, int)>(&System::Text::EncodingNLS::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingNLS*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charCount, bytes, byteCount});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingNLS::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncodingNLS::*)(::ArrayW<uint8_t>, int, int)>(&System::Text::EncodingNLS::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingNLS*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingNLS::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncodingNLS::*)(uint8_t*, int)>(&System::Text::EncodingNLS::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingNLS*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, count});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingNLS::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncodingNLS::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<::Il2CppChar>, int)>(&System::Text::EncodingNLS::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingNLS*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteIndex, byteCount, chars, charIndex});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingNLS::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncodingNLS::*)(uint8_t*, int, ::Il2CppChar*, int)>(&System::Text::EncodingNLS::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingNLS*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteCount, chars, charCount});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingNLS::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::EncodingNLS::*)(::ArrayW<uint8_t>, int, int)>(&System::Text::EncodingNLS::GetString)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingNLS*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingNLS::GetDecoder
// Il2CppName: GetDecoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Decoder* (System::Text::EncodingNLS::*)()>(&System::Text::EncodingNLS::GetDecoder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingNLS*), "GetDecoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingNLS::GetEncoder
// Il2CppName: GetEncoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoder* (System::Text::EncodingNLS::*)()>(&System::Text::EncodingNLS::GetEncoder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingNLS*), "GetEncoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
