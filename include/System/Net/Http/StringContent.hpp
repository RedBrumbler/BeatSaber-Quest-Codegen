// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.ByteArrayContent
#include "System/Net/Http/ByteArrayContent.hpp"
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
// Completed forward declares
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Forward declaring type: StringContent
  class StringContent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::StringContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::StringContent*, "System.Net.Http", "StringContent");
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.StringContent
  // [TokenAttribute] Offset: FFFFFFFF
  class StringContent : public ::System::Net::Http::ByteArrayContent {
    public:
    // public System.Void .ctor(System.String content, System.Text.Encoding encoding, System.String mediaType)
    // Offset: 0x1A01E1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringContent* New_ctor(::StringW content, ::System::Text::Encoding* encoding, ::StringW mediaType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::StringContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringContent*, creationType>(content, encoding, mediaType)));
    }
    // static private System.Byte[] GetByteArray(System.String content, System.Text.Encoding encoding)
    // Offset: 0x1A01F1C
    static ::ArrayW<uint8_t> GetByteArray(::StringW content, ::System::Text::Encoding* encoding);
  }; // System.Net.Http.StringContent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::StringContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::StringContent::GetByteArray
// Il2CppName: GetByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW, ::System::Text::Encoding*)>(&System::Net::Http::StringContent::GetByteArray)> {
  static const MethodInfo* get() {
    static auto* content = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::StringContent*), "GetByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{content, encoding});
  }
};
