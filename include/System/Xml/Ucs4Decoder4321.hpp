// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Ucs4Decoder
#include "System/Xml/Ucs4Decoder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: Ucs4Decoder4321
  class Ucs4Decoder4321;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Ucs4Decoder4321);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ucs4Decoder4321*, "System.Xml", "Ucs4Decoder4321");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Ucs4Decoder4321
  // [TokenAttribute] Offset: FFFFFFFF
  class Ucs4Decoder4321 : public ::System::Xml::Ucs4Decoder {
    public:
    // public System.Void .ctor()
    // Offset: 0x1C637AC
    // Implemented from: System.Xml.Ucs4Decoder
    // Base method: System.Void Ucs4Decoder::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ucs4Decoder4321* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Ucs4Decoder4321::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ucs4Decoder4321*, creationType>()));
    }
    // override System.Int32 GetFullChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0x1C63568
    // Implemented from: System.Xml.Ucs4Decoder
    // Base method: System.Int32 Ucs4Decoder::GetFullChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    int GetFullChars(::ArrayW<uint8_t> bytes, int byteIndex, int byteCount, ::ArrayW<::Il2CppChar> chars, int charIndex);
  }; // System.Xml.Ucs4Decoder4321
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Ucs4Decoder4321::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Ucs4Decoder4321::GetFullChars
// Il2CppName: GetFullChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Ucs4Decoder4321::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<::Il2CppChar>, int)>(&System::Xml::Ucs4Decoder4321::GetFullChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Decoder4321*), "GetFullChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteIndex, byteCount, chars, charIndex});
  }
};
