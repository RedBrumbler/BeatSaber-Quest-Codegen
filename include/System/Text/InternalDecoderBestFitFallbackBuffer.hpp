// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.DecoderFallbackBuffer
#include "System/Text/DecoderFallbackBuffer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: InternalDecoderBestFitFallback
  class InternalDecoderBestFitFallback;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.InternalDecoderBestFitFallbackBuffer
  class InternalDecoderBestFitFallbackBuffer : public System::Text::DecoderFallbackBuffer {
    public:
    // System.Char cBestFit
    // Size: 0x2
    // Offset: 0x20
    ::Il2CppChar cBestFit;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: cBestFit and: iCount
    char __padding0[0x2] = {};
    // System.Int32 iCount
    // Size: 0x4
    // Offset: 0x24
    int iCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 iSize
    // Size: 0x4
    // Offset: 0x28
    int iSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: iSize and: oFallback
    char __padding2[0x4] = {};
    // private System.Text.InternalDecoderBestFitFallback oFallback
    // Size: 0x8
    // Offset: 0x30
    System::Text::InternalDecoderBestFitFallback* oFallback;
    // Field size check
    static_assert(sizeof(System::Text::InternalDecoderBestFitFallback*) == 0x8);
    // Creating value type constructor for type: InternalDecoderBestFitFallbackBuffer
    InternalDecoderBestFitFallbackBuffer(::Il2CppChar cBestFit_ = {}, int iCount_ = {}, int iSize_ = {}, System::Text::InternalDecoderBestFitFallback* oFallback_ = {}) noexcept : cBestFit{cBestFit_}, iCount{iCount_}, iSize{iSize_}, oFallback{oFallback_} {}
    // Get static field: static private System.Object s_InternalSyncObject
    static ::Il2CppObject* _get_s_InternalSyncObject();
    // Set static field: static private System.Object s_InternalSyncObject
    static void _set_s_InternalSyncObject(::Il2CppObject* value);
    // static private System.Object get_InternalSyncObject()
    // Offset: 0x1CFC064
    static ::Il2CppObject* get_InternalSyncObject();
    // public System.Void .ctor(System.Text.InternalDecoderBestFitFallback fallback)
    // Offset: 0x1CFBE8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalDecoderBestFitFallbackBuffer* New_ctor(System::Text::InternalDecoderBestFitFallback* fallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::InternalDecoderBestFitFallbackBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalDecoderBestFitFallbackBuffer*, creationType>(fallback)));
    }
    // private System.Char TryBestFit(System.Byte[] bytesCheck)
    // Offset: 0x1CFC140
    ::Il2CppChar TryBestFit(::Array<uint8_t>* bytesCheck);
    // public override System.Boolean Fallback(System.Byte[] bytesUnknown, System.Int32 index)
    // Offset: 0x1CFC0F4
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Boolean DecoderFallbackBuffer::Fallback(System.Byte[] bytesUnknown, System.Int32 index)
    bool Fallback(::Array<uint8_t>* bytesUnknown, int index);
    // public override System.Char GetNextChar()
    // Offset: 0x1CFC28C
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Char DecoderFallbackBuffer::GetNextChar()
    ::Il2CppChar GetNextChar();
    // public override System.Void Reset()
    // Offset: 0x1CFC2CC
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Void DecoderFallbackBuffer::Reset()
    void Reset();
    // override System.Int32 InternalFallback(System.Byte[] bytes, System.Byte* pBytes)
    // Offset: 0x1CFC2DC
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Int32 DecoderFallbackBuffer::InternalFallback(System.Byte[] bytes, System.Byte* pBytes)
    int InternalFallback(::Array<uint8_t>* bytes, uint8_t* pBytes);
  }; // System.Text.InternalDecoderBestFitFallbackBuffer
  #pragma pack(pop)
  static check_size<sizeof(InternalDecoderBestFitFallbackBuffer), 48 + sizeof(System::Text::InternalDecoderBestFitFallback*)> __System_Text_InternalDecoderBestFitFallbackBufferSizeCheck;
  static_assert(sizeof(InternalDecoderBestFitFallbackBuffer) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::InternalDecoderBestFitFallbackBuffer*, "System.Text", "InternalDecoderBestFitFallbackBuffer");
// Writing MetadataGetter for method: System::Text::InternalDecoderBestFitFallbackBuffer::get_InternalSyncObject
// Il2CppName: get_InternalSyncObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)()>(&System::Text::InternalDecoderBestFitFallbackBuffer::get_InternalSyncObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::InternalDecoderBestFitFallbackBuffer*), "get_InternalSyncObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::InternalDecoderBestFitFallbackBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::InternalDecoderBestFitFallbackBuffer::TryBestFit
// Il2CppName: TryBestFit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::InternalDecoderBestFitFallbackBuffer::*)(::Array<uint8_t>*)>(&System::Text::InternalDecoderBestFitFallbackBuffer::TryBestFit)> {
  const MethodInfo* get() {
    static auto* bytesCheck = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::InternalDecoderBestFitFallbackBuffer*), "TryBestFit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytesCheck});
  }
};
// Writing MetadataGetter for method: System::Text::InternalDecoderBestFitFallbackBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::InternalDecoderBestFitFallbackBuffer::*)(::Array<uint8_t>*, int)>(&System::Text::InternalDecoderBestFitFallbackBuffer::Fallback)> {
  const MethodInfo* get() {
    static auto* bytesUnknown = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::InternalDecoderBestFitFallbackBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytesUnknown, index});
  }
};
// Writing MetadataGetter for method: System::Text::InternalDecoderBestFitFallbackBuffer::GetNextChar
// Il2CppName: GetNextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::InternalDecoderBestFitFallbackBuffer::*)()>(&System::Text::InternalDecoderBestFitFallbackBuffer::GetNextChar)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::InternalDecoderBestFitFallbackBuffer*), "GetNextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::InternalDecoderBestFitFallbackBuffer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::InternalDecoderBestFitFallbackBuffer::*)()>(&System::Text::InternalDecoderBestFitFallbackBuffer::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::InternalDecoderBestFitFallbackBuffer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::InternalDecoderBestFitFallbackBuffer::InternalFallback
// Il2CppName: InternalFallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::InternalDecoderBestFitFallbackBuffer::*)(::Array<uint8_t>*, uint8_t*)>(&System::Text::InternalDecoderBestFitFallbackBuffer::InternalFallback)> {
  const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* pBytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::InternalDecoderBestFitFallbackBuffer*), "InternalFallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, pBytes});
  }
};
